void __EntryFunction__()
{
	fLocal_16 = 1f;
	fLocal_17 = 1f;
	func_3(&Local_23, &uScriptParam_0, 37, 395, -1857735811, 6);
}

void func_1()
{
	func_5(&Local_23, 2554);
	func_7(&Local_23, 2863);
	func_9(&Local_23, 2960);
	func_11(&Local_23, 3026);
	func_13(&Local_23, 3262);
	func_15(&Local_23, 3469);
	func_17(&Local_23, 3843);
	func_19(&Local_23, 3880);
	func_21(&Local_23, 3917);
	func_23(&Local_23, 3991);
	func_25(&Local_23, 4021);
	func_27(&Local_23, 4056);
	func_29(&Local_23, 4091);
	func_31(&Local_23, 4126);
	func_33(&Local_23, 4161);
	func_35(&Local_23, 4196);
	func_37(&Local_23, 4231);
	func_39(&Local_23, 4279);
	func_41(&Local_23, 4417);
	func_43(&Local_23, 4447);
	func_45(&Local_23, 4479);
	func_47(&Local_23, 4509);
	func_49(&Local_23, 4542);
	func_51(&Local_23, 4573);
	func_53(&Local_23, 4604);
	func_55(&Local_23, 4639);
	func_57(&Local_23, 4670);
	func_59(&Local_23, 4701);
	func_61(&Local_23, 4731);
	func_63(&Local_23, 4759);
	func_65(&Local_23, 4790);
	func_67(&Local_23, 4821);
	func_69(&Local_23, 4853);
	func_71(&Local_23, 4884);
	func_73(&Local_23, 4915);
}

void func_2()
{
	func_75(&Local_23, 5123);
	func_77(&Local_23, 5155);
	func_79(&Local_23, 5193);
	func_81(&Local_23, 5377);
	func_83(&Local_23, 5470);
	func_85(&Local_23, 5671);
	func_87(&Local_23, 5722);
}

void func_3(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	func_88(uParam0, uParam1, iParam2, iParam3, iParam4);
	if (has_force_cleanup_occurred(546))
	{
		func_89(uParam0);
	}
	if (iParam5 > 0)
	{
		func_90(uParam0, iParam5);
	}
	func_91(uParam0);
	func_92(uParam0);
	if (iParam5 > 0)
	{
		func_93();
	}
	func_94(uParam0);
	func_95(uParam0);
	func_96(uParam0);
	while (true)
	{
		if (func_97(uParam0, &iVar1))
		{
			if (((uParam0->f_43 != 21 && uParam0->f_43 != 22) && uParam0->f_43 != 23) && uParam0->f_43 != 24)
			{
				func_98(uParam0, iVar1);
			}
		}
		if (((uParam0->f_43 == 0 || uParam0->f_43 == 13) || uParam0->f_43 == 14) || uParam0->f_43 == 15)
		{
			Call_Loc(uParam0->f_118);
		}
		switch (uParam0->f_43)
		{
			case 0:
				func_99(uParam0, 13);
				break;
			case 13:
				if (!_minigame_is_connected_to_server(uParam0->f_40))
				{
					func_99(uParam0, 20);
				}
				else
				{
					Call_Loc(uParam0->f_122);
					Stack.Push(-1553724839);
					Call_Loc(uParam0->f_123);
					if (StackVal)
					{
						Call_Loc(uParam0->f_126);
						if (func_100(uParam0))
						{
							func_99(uParam0, 14);
						}
						else
						{
							func_98(uParam0, 2);
						}
					}
					else
					{
						Call_Loc(uParam0->f_124);
						if (StackVal)
						{
							func_98(uParam0, 2);
						}
						else if (func_101(&(uParam0->f_44), 5f))
						{
							func_98(uParam0, 2);
						}
					}
				}
				break;
			case 14:
				if (!_minigame_is_connected_to_server(uParam0->f_40))
				{
					func_99(uParam0, 20);
				}
				else
				{
					Call_Loc(uParam0->f_122);
					Stack.Push(1246061318);
					Call_Loc(uParam0->f_123);
					Stack.Push(287982460);
					Call_Loc(uParam0->f_123);
					while (StackVal || StackVal)
					{
						Call_Loc(uParam0->f_126);
					}
					Stack.Push(uParam0->f_1);
					Call_Loc(uParam0->f_123);
					if (StackVal)
					{
						Call_Loc(uParam0->f_126);
						Call_Loc(uParam0->f_119);
						func_99(uParam0, 15);
					}
					else
					{
						Call_Loc(uParam0->f_124);
						if (StackVal)
						{
							func_98(uParam0, 2);
						}
						else if (func_101(&(uParam0->f_44), 5f))
						{
							func_98(uParam0, 2);
						}
					}
				}
				break;
			case 15:
				if (!_minigame_is_connected_to_server(uParam0->f_40))
				{
					func_99(uParam0, 20);
				}
				else
				{
					Call_Loc(uParam0->f_122);
					Stack.Push(1);
					Stack.Push(&iVar7);
					Stack.Push(&iVar8);
					Call_Loc(uParam0->f_148);
					bVar6 = StackVal;
					if (bVar6)
					{
						if (iVar7 == -1)
						{
							iVar9 = 0;
						}
						else
						{
							iVar9 = iVar7 + 1;
						}
					}
					else
					{
						iVar9 = iVar8;
					}
					iVar10 = 0;
					while (iVar10 < iVar9)
					{
						Call_Loc(uParam0->f_124);
						if (!StackVal)
						{
							bVar6 = false;
							Jump @727; //curOff = 681
						}
						else
						{
							Stack.Push(1959158395);
							Call_Loc(uParam0->f_123);
							if (StackVal)
							{
								func_98(uParam0, 6);
								Jump @727; //curOff = 707
							}
							else
							{
								Call_Loc(uParam0->f_126);
							}
						}
						iVar10++;
					}
					if (uParam0->f_43 == 15)
					{
						if (bVar6)
						{
							func_102(uParam0);
							func_99(uParam0, 1);
						}
						else if (func_101(&(uParam0->f_44), 10f))
						{
							func_98(uParam0, 2);
						}
					}
				}
				break;
			case 1:
				if (!_minigame_is_connected_to_server(uParam0->f_40))
				{
					func_99(uParam0, 20);
				}
				else
				{
					Call_Loc(uParam0->f_110);
					uVar3 = StackVal;
					Call_Loc(uParam0->f_116);
					uVar4 = StackVal;
					Call_Loc(uParam0->f_118);
					uVar5 = StackVal;
					if ((uVar3 && uVar4) && uVar5)
					{
						func_103(uParam0->f_38, 2);
						func_99(uParam0, 16);
					}
					else if (func_101(&(uParam0->f_44), 120f))
					{
						func_98(uParam0, 3);
					}
				}
				break;
			case 16:
				if (!_minigame_is_connected_to_server(uParam0->f_40))
				{
					func_99(uParam0, 20);
				}
				else if (func_104(uParam0->f_38) == get_frame_count())
				{
					func_105(uParam0);
					func_106(uParam0);
					func_107(uParam0, 1);
					func_108(uParam0->f_39, 8388608);
					func_99(uParam0, 6);
				}
				else if (func_101(&(uParam0->f_44), 30f))
				{
					func_98(uParam0, 3);
				}
				break;
			case 6:
				if (!_minigame_is_connected_to_server(uParam0->f_40))
				{
					func_99(uParam0, 20);
				}
				else
				{
					if (!uParam0->f_55)
					{
						if (uParam0->f_58 == 4 && !func_109())
						{
							func_110(uParam0);
						}
					}
					Call_Loc(uParam0->f_120);
					iVar0 = StackVal;
					if (iVar0 != 0)
					{
						func_107(uParam0, 0);
						switch (iVar0)
						{
							case 2:
							case 3:
								func_99(uParam0, 8);
								break;
							default:
								break;
						}
					}
					else if ((!uParam0->f_55 && func_109()) && (uParam0->f_58 == 4 || func_111(uParam0->f_38, 8)))
					{
						if (func_112())
						{
							func_113(uParam0, 1);
						}
						else
						{
							func_113(uParam0, 2);
						}
						func_114(uParam0->f_38, 8);
						func_107(uParam0, 0);
						func_99(uParam0, 7);
					}
					else if (!uParam0->f_55 && func_111(uParam0->f_38, 8))
					{
						func_113(uParam0, 0);
						func_114(uParam0->f_38, 8);
						func_107(uParam0, 0);
						func_99(uParam0, 7);
					}
					else if (uParam0->f_57)
					{
						func_107(uParam0, 0);
						func_91(uParam0);
						func_99(uParam0, 17);
					}
				}
				break;
			case 7:
				if (!_minigame_is_connected_to_server(uParam0->f_40))
				{
					func_99(uParam0, 20);
				}
				else
				{
					func_115(uParam0, &iVar2);
					if (!uParam0->f_55)
					{
						if (iVar2 == 2)
						{
							func_116();
						}
						if (iVar2 == 3 || iVar2 == 2)
						{
							func_110(uParam0);
						}
					}
					Call_Loc(uParam0->f_120);
					iVar0 = StackVal;
					if (iVar0 != 0)
					{
						switch (iVar0)
						{
							case 2:
							case 3:
								func_117(uParam0);
								func_99(uParam0, 8);
								break;
							default:
								break;
						}
					}
					else if (iVar2 == 1)
					{
						func_117(uParam0);
						func_118(uParam0);
						func_107(uParam0, 1);
						func_99(uParam0, 6);
					}
				}
				break;
			case 8:
				if (!_minigame_is_connected_to_server(uParam0->f_40))
				{
					func_99(uParam0, 20);
				}
				else
				{
					Call_Loc(uParam0->f_120);
					Call_Loc(uParam0->f_133);
					if (StackVal)
					{
						func_119(uParam0);
					}
				}
				break;
			case 17:
				if (func_120(500))
				{
					func_121(uParam0);
					func_99(uParam0, 18);
				}
				break;
			case 18:
				if (!_minigame_is_connected_to_server(uParam0->f_40))
				{
					func_99(uParam0, 20);
				}
				else
				{
					Call_Loc(uParam0->f_122);
					Stack.Push(0);
					Stack.Push(&iVar7);
					Stack.Push(&iVar8);
					Call_Loc(uParam0->f_148);
					bVar6 = StackVal;
					if (bVar6)
					{
						if (iVar7 == -1)
						{
							iVar9 = 0;
						}
						else
						{
							iVar9 = iVar7 + 1;
						}
					}
					else
					{
						iVar9 = iVar8;
					}
					iVar10 = 0;
					while (iVar10 < iVar9)
					{
						Call_Loc(uParam0->f_124);
						if (!StackVal)
						{
							bVar6 = false;
							Jump @1667; //curOff = 1621
						}
						else
						{
							Stack.Push(1959158395);
							Call_Loc(uParam0->f_123);
							if (StackVal)
							{
								func_98(uParam0, 6);
								Jump @1667; //curOff = 1647
							}
							else
							{
								Call_Loc(uParam0->f_126);
							}
						}
						iVar10++;
					}
					if (uParam0->f_43 == 18)
					{
						if (bVar6)
						{
							func_102(uParam0);
							func_99(uParam0, 19);
						}
						else if (func_101(&(uParam0->f_44), 10f))
						{
							func_98(uParam0, 2);
						}
					}
				}
				break;
			case 19:
				if (!_minigame_is_connected_to_server(uParam0->f_40))
				{
					func_99(uParam0, 20);
				}
				else
				{
					Call_Loc(uParam0->f_116);
					if (StackVal)
					{
						func_122(uParam0);
						func_123(uParam0);
						func_106(uParam0);
						func_107(uParam0, 1);
						do_screen_fade_in(500);
						func_99(uParam0, 6);
					}
					else if (func_101(&(uParam0->f_44), 120f))
					{
						func_98(uParam0, 2);
					}
				}
				break;
			case 20:
				uParam0->f_105++;
				if (uParam0->f_105 >= 7)
				{
					func_98(uParam0, 1);
				}
				break;
			case 21:
				if ((!func_124(uParam0) || func_125(uParam0)) || func_101(&(uParam0->f_44), 10f))
				{
					do_screen_fade_out(500);
					func_99(uParam0, 22);
				}
				break;
			case 22:
				if (is_screen_faded_out())
				{
					func_126(uParam0);
					func_99(uParam0, 23);
				}
				else if (!is_screen_fading_in())
				{
					do_screen_fade_out(500);
				}
				break;
			case 23:
				Call_Loc(uParam0->f_129);
				if (!StackVal || func_127(&(uParam0->f_44)) > 2f)
				{
					func_103(uParam0->f_38, 4);
					func_128(uParam0->f_38, get_frame_count() + 1);
					func_99(uParam0, 24);
				}
				break;
			case 24:
				func_99(uParam0, 25);
				break;
		}
		if (uParam0->f_43 == 25)
		{
			if (uParam0->f_54)
			{
				func_129(uParam0);
			}
		}
		Call_Loc(uParam0->f_135);
		if (uParam0->f_43 == 25)
		{
			func_89(uParam0);
		}
		wait(0);
	}
	func_89(uParam0);
}

void func_4()
{
	if (func_130(&(Local_23.f_2)))
	{
		func_131(&(Local_23.f_152), 1);
	}
	else
	{
		func_131(&(Local_23.f_152), 2);
	}
	Var0 = { func_132(Local_23.f_38) };
	func_133(&(Local_23.f_2841), Var0.f_5, Var0.f_8, 0);
	func_134(&(Local_23.f_4244), Var0.f_5, Var0.f_8);
	func_135(&(Local_23.f_2337));
	func_136(&(Local_23.f_152));
	switch (Local_23.f_42)
	{
		case 40:
			func_137(&(Local_23.f_2841), 0);
			break;
		case 8:
			func_137(&(Local_23.f_2841), 2);
			break;
		case 111:
			func_137(&(Local_23.f_2841), 3);
			break;
		case 80:
			func_137(&(Local_23.f_2841), 4);
			break;
		case 5:
			func_137(&(Local_23.f_2841), 5);
			break;
		case 81:
			func_137(&(Local_23.f_2841), 7);
			break;
		case 98:
			func_137(&(Local_23.f_2841), 8);
			break;
		case 121:
			func_137(&(Local_23.f_2841), 6);
			break;
		default:
			func_137(&(Local_23.f_2841), 1);
			break;
	}
	func_138(&Local_23, Local_23.f_42);
}

void func_5(var uParam0, int iParam1)
{
	uParam0->f_106 = iParam1;
}

void func_6()
{
	network_register_host_broadcast_variables(&(Local_23.f_152.f_1476), 17, 44);
	func_139(_0xba24095ea96dfe17(&(Local_23.f_152.f_1476)), 17, "g_main.mClient.bd.host");
	network_register_player_broadcast_variables(&(Local_23.f_152.f_1476.f_17), 55, 45);
	func_140(_0x690806bc83bc8ca2(Local_23.f_152.f_1476.f_17[0]), 55, "g_main.mClient.bd.part");
}

void func_7(var uParam0, int iParam1)
{
	uParam0->f_107 = iParam1;
}

void func_8()
{
	_0x3b296934db026873(-888740878, 1780529216);
	if (func_141(&(Local_23.f_152), 1))
	{
		func_142(&(Local_23.f_2337));
	}
	func_143(&(Local_23.f_2841));
}

void func_9(var uParam0, int iParam1)
{
	uParam0->f_108 = iParam1;
}

void func_10()
{
	switch (Local_23.f_42)
	{
		case 81:
			iVar1 = 0;
			break;
		case 121:
			iVar1 = 2;
			break;
		case 80:
			iVar1 = 3;
			break;
		default:
			iVar1 = 1;
			break;
	}
	switch (Local_23.f_42)
	{
		case 81:
			iVar2 = 1;
			break;
		default:
			iVar2 = 0;
			break;
	}
	iVar0 = 1;
	func_144(&(Local_23.f_2841), iVar0, iVar1, 0);
	func_145(&(Local_23.f_4244), iVar2);
	func_146(&(Local_23.f_2337), Local_23.f_2841.f_692);
	_0xd9130842d7226045("MGBLK_Sounds", 1);
	_0xd9130842d7226045("RDRO_Poker_Sounds", 0);
	_text_database_request("MGPKR");
	_0xed9582b3da8f02b4(6);
	iVar3 = func_147(Local_23.f_39, Local_23.f_42, -1, 0);
	if (iVar3 != 0)
	{
		request_model(iVar3, false);
	}
	iVar3 = func_147(Local_23.f_39, Local_23.f_42, -1, 1);
	if (iVar3 != 0)
	{
		request_model(iVar3, false);
	}
}

void func_11(var uParam0, int iParam1)
{
	uParam0->f_109 = iParam1;
}

int func_12()
{
	if ((((((!func_148(&(Local_23.f_2841)) || !func_149(&(Local_23.f_4244))) || !func_150(&(Local_23.f_2337))) || !_0xd9130842d7226045("MGBLK_Sounds", 1)) || !_0xd9130842d7226045("RDRO_Poker_Sounds", 0)) || !_text_database_has_loaded("MGPKR")) || !_0x5e420ff293ee5472())
	{
		return 0;
	}
	iVar0 = func_147(Local_23.f_39, Local_23.f_42, -1, 0);
	if (iVar0 == 0 || !has_model_loaded(iVar0))
	{
		return 0;
	}
	iVar0 = func_147(Local_23.f_39, Local_23.f_42, -1, 1);
	if (iVar0 == 0 || !has_model_loaded(iVar0))
	{
		return 0;
	}
	return 1;
}

void func_13(var uParam0, int iParam1)
{
	uParam0->f_110 = iParam1;
}

int func_14()
{
	if (Local_23.f_152.f_52 == 0)
	{
		if (func_151(512))
		{
			Local_23.f_152.f_52 = 1;
		}
	}
	if (Local_23.f_48)
	{
		_0x2804658eb7d8a50b(4, 1686594632);
		disable_control_action(0, -813019446, false);
	}
	if (func_152(Local_23.f_2337.f_500))
	{
		if (_is_using_keyboard(0) && Local_23.f_48)
		{
			if (!func_153(Local_23.f_2337.f_500, 1))
			{
				_set_mouse_cursor_active_this_frame();
				_set_mouse_cursor_sprite(0);
				disable_control_action(0, -1450761377, false);
				disable_control_action(0, -771458680, false);
			}
		}
		else
		{
			disable_control_action(2, -1968567596, false);
		}
	}
	if (Local_23.f_152.f_1631 != 0 && Local_23.f_152.f_1631 < get_game_timer())
	{
		set_player_control(player_id(), false, 256, false);
		Local_23.f_152.f_1631 = 0;
	}
	func_154(&Local_23);
	if (network_is_host_of_this_script())
	{
		func_155(&(Local_23.f_152));
	}
	if (!func_151(4096))
	{
		if (is_bit_set(Local_23.f_152.f_1476.f_7, 0))
		{
			func_156(4096);
			if (func_151(2048))
			{
				func_157(2048);
				if (func_151(512))
				{
					func_158();
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = int_to_playerindex(iVar0);
		if (iVar1 != player_id() && network_is_player_active(iVar1))
		{
			if (!network_is_player_concealed(iVar1))
			{
				network_conceal_player(iVar1, true);
			}
		}
		iVar0++;
	}
	return 0;
}

void func_15(var uParam0, int iParam1)
{
	uParam0->f_134 = iParam1;
}

void func_16()
{
	if (Local_23.f_54)
	{
		_0xd78a26024bb13e08(player_id());
	}
}

void func_17(var uParam0, int iParam1)
{
	uParam0->f_135 = iParam1;
}

bool func_18()
{
	return func_159(Local_23.f_2337.f_442.f_20, 1);
}

void func_19(var uParam0, int iParam1)
{
	uParam0->f_136 = iParam1;
}

void func_20()
{
	if (func_141(&(Local_23.f_152), 1))
	{
		if (!func_151(512))
		{
			func_160(11, 0);
		}
		else if (func_151(2048))
		{
			func_160(9, 0);
		}
	}
}

void func_21(var uParam0, int iParam1)
{
	uParam0->f_137 = iParam1;
}

void func_22()
{
	func_161(&(Local_23.f_152));
}

void func_23(var uParam0, int iParam1)
{
	uParam0->f_119 = iParam1;
}

int func_24()
{
	return func_162(&Local_23, &(Local_23.f_152.f_416));
}

void func_25(var uParam0, int iParam1)
{
	uParam0->f_111 = iParam1;
}

int func_26()
{
	return func_163(&Local_23, &(Local_23.f_152.f_416));
}

void func_27(var uParam0, int iParam1)
{
	uParam0->f_112 = iParam1;
}

void func_28()
{
	func_164(&Local_23, &(Local_23.f_152.f_416));
}

void func_29(var uParam0, int iParam1)
{
	uParam0->f_113 = iParam1;
}

int func_30()
{
	return func_165(&Local_23, &(Local_23.f_152.f_416));
}

void func_31(var uParam0, int iParam1)
{
	uParam0->f_114 = iParam1;
}

void func_32()
{
	func_166(&Local_23, &(Local_23.f_152.f_416));
}

void func_33(var uParam0, int iParam1)
{
	uParam0->f_115 = iParam1;
}

int func_34()
{
	return func_167(&Local_23, &(Local_23.f_152.f_416));
}

void func_35(var uParam0, int iParam1)
{
	uParam0->f_116 = iParam1;
}

void func_36()
{
	func_168();
	func_169(&Local_23, Local_23.f_42);
	func_170(&Local_23);
	func_171(&Local_23);
}

void func_37(var uParam0, int iParam1)
{
	uParam0->f_117 = iParam1;
}

int func_38()
{
	iVar0 = 1;
	if (!func_172())
	{
		iVar0 = 0;
	}
	iVar1 = 1;
	if (!func_173(&(Local_23.f_2841), Local_23.f_42))
	{
		iVar1 = 0;
	}
	func_174(&(Local_23.f_152.f_1476.f_17), Local_23.f_152.f_1476, Local_23.f_42);
	iVar2 = 1;
	if (!func_175(Local_23.f_152.f_1476, Local_23.f_42))
	{
		iVar2 = 0;
	}
	if ((iVar0 && iVar1) && iVar2)
	{
		return 1;
	}
	return 0;
}

void func_39(var uParam0, int iParam1)
{
	uParam0->f_118 = iParam1;
}

void func_40()
{
	func_176(&(Local_23.f_152));
}

void func_41(var uParam0, int iParam1)
{
	uParam0->f_121 = iParam1;
}

var func_42()
{
	return func_177(&Local_23, &(Local_23.f_152));
}

void func_43(var uParam0, int iParam1)
{
	uParam0->f_120 = iParam1;
}

void func_44()
{
	func_178(&(Local_23.f_152));
}

void func_45(var uParam0, int iParam1)
{
	uParam0->f_122 = iParam1;
}

bool func_46(int iParam0)
{
	return func_179(&(Local_23.f_152), iParam0, 0);
}

void func_47(var uParam0, int iParam1)
{
	uParam0->f_123 = iParam1;
}

bool func_48()
{
	return func_180(&(Local_23.f_152), 0);
}

void func_49(var uParam0, int iParam1)
{
	uParam0->f_124 = iParam1;
}

int func_50()
{
	return func_181(&(Local_23.f_152), 0);
}

void func_51(var uParam0, int iParam1)
{
	uParam0->f_125 = iParam1;
}

void func_52()
{
	func_182(&(Local_23.f_152), 0, 0, 0, 0);
}

void func_53(var uParam0, int iParam1)
{
	uParam0->f_126 = iParam1;
}

void func_54()
{
	func_183(&(Local_23.f_152));
}

void func_55(var uParam0, int iParam1)
{
	uParam0->f_127 = iParam1;
}

bool func_56()
{
	return func_184(&(Local_23.f_152), 0);
}

void func_57(var uParam0, int iParam1)
{
	uParam0->f_128 = iParam1;
}

bool func_58()
{
	return func_185(&(Local_23.f_152));
}

void func_59(var uParam0, int iParam1)
{
	uParam0->f_129 = iParam1;
}

void func_60()
{
	func_186(&Local_23);
}

void func_61(var uParam0, int iParam1)
{
	uParam0->f_130 = iParam1;
}

bool func_62()
{
	return func_187(&(Local_23.f_152), 6);
}

void func_63(var uParam0, int iParam1)
{
	uParam0->f_131 = iParam1;
}

bool func_64()
{
	return func_187(&(Local_23.f_152), 7);
}

void func_65(var uParam0, int iParam1)
{
	uParam0->f_132 = iParam1;
}

bool func_66()
{
	return func_187(&(Local_23.f_152), 8);
}

void func_67(var uParam0, int iParam1)
{
	uParam0->f_133 = iParam1;
}

void func_68()
{
	func_188(&(Local_23.f_152), 2);
}

void func_69(var uParam0, int iParam1)
{
	uParam0->f_138 = iParam1;
}

void func_70()
{
	func_188(&(Local_23.f_152), 0);
}

void func_71(var uParam0, int iParam1)
{
	uParam0->f_139 = iParam1;
}

void func_72()
{
	func_189();
	func_190(&Local_23);
	func_191();
	func_192(&(Local_23.f_2841), 1, 1);
	func_193(&(Local_23.f_4244));
	func_194(&(Local_23.f_2337), &Local_23);
	iVar0 = _0x901e0dc25080c8b9(player_id());
	if (_0x0f99f6436528a089(iVar0) && _0x149a2751ab66ac02(iVar0) > 1)
	{
		if (!_0x424b17a7dc5c90bc(player_id()) && !Local_23.f_104)
		{
			func_195(1);
		}
	}
	_0x531a78d6bf27014b("MGBLK_Sounds");
	_0x531a78d6bf27014b("RDRO_Poker_Sounds");
	_text_database_delete("MGPKR");
	_0x7d4e70a67a651c71(6);
	iVar1 = func_147(Local_23.f_39, Local_23.f_42, -1, 0);
	if (iVar1 != 0)
	{
		set_model_as_no_longer_needed(iVar1);
	}
	iVar1 = func_147(Local_23.f_39, Local_23.f_42, -1, 1);
	if (iVar1 != 0)
	{
		set_model_as_no_longer_needed(iVar1);
	}
}

void func_73(var uParam0, int iParam1)
{
	uParam0->f_140 = iParam1;
}

int func_74()
{
	return func_196(&Local_23, &(Local_23.f_152));
}

void func_75(var uParam0, int iParam1)
{
	uParam0->f_147 = iParam1;
}

bool func_76(int iParam0, var uParam1, var uParam2)
{
	return func_197(&(Local_23.f_152), iParam0, 1, 1, uParam1, uParam2);
}

void func_77(var uParam0, int iParam1)
{
	uParam0->f_148 = iParam1;
}

void func_78()
{
	func_198(&Local_23, &(Local_23.f_152.f_416), 0);
	func_199(&(Local_23.f_4244), &(Local_23.f_2841), 0);
	func_200(&(Local_23.f_2841), Local_23.f_152.f_9);
	Local_23.f_152.f_1631 = get_game_timer() + 2000;
	func_201(&(Local_23.f_152), 1);
	func_202(&(Local_23.f_2841));
	if (func_203(&(Local_23.f_152.f_416), Local_23.f_152.f_9))
	{
		func_205(&(Local_23.f_152), func_204(&(Local_23.f_152.f_416), Local_23.f_152.f_9));
	}
	if (func_206(&(Local_23.f_152.f_416)) > 0)
	{
		func_207(&(Local_23.f_152));
	}
	func_208(&(Local_23.f_152.f_1476.f_17));
	func_209(1);
}

void func_79(var uParam0, int iParam1)
{
	uParam0->f_142 = iParam1;
}

void func_80()
{
	if (func_210(&(Local_23.f_2841), Local_23.f_152.f_9))
	{
		func_211(&(Local_23.f_2841), Local_23.f_152.f_9, 0);
	}
	func_212(&(Local_23.f_2841), -1);
	func_213(&(Local_23.f_2841), 1);
	func_214(&(Local_23.f_2337), 0);
	func_215(&Local_23, 0);
}

void func_81(var uParam0, int iParam1)
{
	uParam0->f_143 = iParam1;
}

void func_82()
{
	func_214(&(Local_23.f_2337), 0);
	func_215(&Local_23, 0);
	func_216(&(Local_23.f_2337), &Local_23);
	func_217(&(Local_23.f_4244));
	if (func_210(&(Local_23.f_2841), Local_23.f_152.f_9))
	{
		func_218(&(Local_23.f_2841), Local_23.f_152.f_9, 1, 0);
	}
	func_212(&(Local_23.f_2841), Local_23.f_152.f_9);
	func_213(&(Local_23.f_2841), 1);
	func_219(&(Local_23.f_2841), 1);
	func_220(&(Local_23.f_2841), 1);
	func_221(&(Local_23.f_152));
	func_222(&(Local_23.f_2841), 0);
	func_223(&(Local_23.f_152));
	func_224(&(Local_23.f_152), 2);
	func_224(&(Local_23.f_152), 3);
	func_224(&(Local_23.f_152), 4);
	func_224(&(Local_23.f_152), 5);
}

void func_83(var uParam0, int iParam1)
{
	uParam0->f_149 = iParam1;
}

void func_84()
{
	func_198(&Local_23, &(Local_23.f_152.f_416), 1);
	func_199(&(Local_23.f_4244), &(Local_23.f_2841), 0);
}

void func_85(var uParam0, int iParam1)
{
	uParam0->f_150 = iParam1;
}

void func_86()
{
	func_225(&Local_23, &(Local_23.f_152));
	func_226(&Local_23);
}

void func_87(var uParam0, int iParam1)
{
	uParam0->f_151 = iParam1;
}

void func_88(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam4 == 0)
	{
	}
	*uParam0 = 0;
	uParam0->f_1 = iParam4;
	uParam0->f_2 = { *uParam1 };
	uParam0->f_38 = *uParam1;
	uParam0->f_39 = uParam1->f_14;
	uParam0->f_41 = uParam1->f_15;
	uParam0->f_42 = uParam1->f_2;
	switch (uParam1->f_14)
	{
		case 0:
			uParam0->f_40 = -1150372370;
			break;
		case 2:
			uParam0->f_40 = -471827042;
			break;
		case 1:
			uParam0->f_40 = 355424894;
			break;
		case 3:
			uParam0->f_40 = -2033178055;
			break;
		default:
			uParam0->f_40 = 0;
			break;
	}
	func_99(uParam0, 0);
	uParam0->f_47 = 0;
	uParam0->f_48 = 0;
	uParam0->f_49 = 0;
	uParam0->f_50 = 0;
	uParam0->f_51 = 0;
	uParam0->f_52 = 0;
	uParam0->f_53 = 0;
	uParam0->f_54 = 0;
	uParam0->f_55 = 0;
	uParam0->f_56 = 0;
	uParam0->f_58 = 0;
	uParam0->f_59 = 0;
	uParam0->f_60 = 0;
	uParam0->f_61 = 0;
	uParam0->f_62.f_3 = get_hash_key("MG_YES");
	uParam0->f_62.f_3.f_3 = 0;
	uParam0->f_103 = 0;
	uParam0->f_104 = 0;
	uParam0->f_105 = 0;
	uParam0->f_106 = 22945;
	uParam0->f_107 = 22945;
	uParam0->f_108 = 22945;
	uParam0->f_109 = 22945;
	uParam0->f_110 = 22953;
	uParam0->f_111 = 22953;
	uParam0->f_112 = 22953;
	uParam0->f_113 = 22945;
	uParam0->f_114 = 22953;
	uParam0->f_115 = 22945;
	uParam0->f_116 = 22953;
	uParam0->f_117 = 22945;
	uParam0->f_118 = 22962;
	uParam0->f_119 = 22945;
	uParam0->f_120 = 22971;
	uParam0->f_121 = 22945;
	uParam0->f_122 = 22945;
	uParam0->f_123 = 22980;
	uParam0->f_124 = 22953;
	uParam0->f_125 = 22989;
	uParam0->f_126 = 22945;
	uParam0->f_127 = 22945;
	uParam0->f_128 = 22953;
	uParam0->f_129 = 22953;
	uParam0->f_130 = 22945;
	uParam0->f_131 = 22953;
	uParam0->f_132 = 22953;
	uParam0->f_133 = 22953;
	uParam0->f_134 = 22998;
	uParam0->f_135 = 22945;
	uParam0->f_136 = 22953;
	uParam0->f_137 = 22945;
	uParam0->f_138 = 22945;
	uParam0->f_139 = 22945;
	uParam0->f_140 = 22945;
	uParam0->f_141 = 22945;
	uParam0->f_142 = 22945;
	uParam0->f_143 = 22945;
	uParam0->f_144 = 22953;
	uParam0->f_145 = 22945;
	uParam0->f_146 = 22945;
	uParam0->f_147 = 22953;
	uParam0->f_148 = 23007;
	uParam0->f_149 = 22945;
	uParam0->f_150 = 22945;
	uParam0->f_151 = 22945;
	Call_Loc(iParam2);
	Call_Loc(uParam0->f_106);
	Call_Loc(iParam3);
}

void func_89(var uParam0)
{
	if (func_235())
	{
		func_158();
	}
	func_126(uParam0);
	func_117(uParam0);
	if (!uParam0->f_56)
	{
		func_236(uParam0);
	}
	if (uParam0->f_54)
	{
		func_129(uParam0);
	}
	if (!uParam0->f_49)
	{
		func_237(uParam0);
	}
	if (uParam0->f_50)
	{
		func_106(uParam0);
	}
	Call_Loc(uParam0->f_140);
	if (func_238() == uParam0->f_39 && func_239() == uParam0->f_38)
	{
		iVar0 = func_240();
		if (iVar0 == 6 || iVar0 == 7)
		{
			func_241();
		}
	}
	func_242();
}

void func_90(var uParam0, int iParam1)
{
	func_243(iParam1, 1);
	func_244();
	Call_Loc(uParam0->f_107);
}

void func_91(var uParam0)
{
	uParam0->f_50 = 1;
	uParam0->f_51 = get_no_loading_screen();
	set_no_loading_screen(true);
}

void func_92(var uParam0)
{
	Call_Loc(uParam0->f_109);
}

void func_93()
{
	func_245(0);
	set_this_script_can_be_paused(false);
}

void func_94(var uParam0)
{
	uParam0->f_47 = 1;
	Var0 = { func_246(0) };
	if (func_247(Var0))
	{
		if (func_248(Var0) == 5)
		{
			_0x1096603b519c905f(func_249(uParam0->f_39, 1));
		}
	}
	Call_Loc(uParam0->f_108);
}

void func_95(var uParam0)
{
	if (!uParam0->f_48)
	{
		uParam0->f_48 = 1;
		func_250(1);
		_0xdd1232b332cbb9e7(3, 1, 0);
		_0xdd1232b332cbb9e7(2, 1, 0);
		if (!is_player_dead(player_id()))
		{
			set_player_control(player_id(), false, 256, false);
			set_everyone_ignore_player(player_id(), true);
		}
		if (!Global_1940258->f_6)
		{
			if (_get_ped_crouch_movement(Global_34))
			{
				_set_ped_crouch_movement(Global_34, false, 0, false);
			}
		}
		func_251(0);
		func_252(0);
		_0x18ff3110cf47115d(Global_34, 9, 0);
		func_255(func_254(func_253()), 1);
		start_audio_scene(func_256(uParam0->f_39));
		func_257(493038497, 0);
		Call_Loc(uParam0->f_138);
	}
}

void func_96(var uParam0)
{
	Call_Loc(uParam0->f_117);
}

bool func_97(var uParam0, var uParam1)
{
	*uParam1 = 0;
	if (func_258())
	{
		func_259(uParam0);
	}
	Global_1902831->f_188 = get_frame_count();
	if (func_260(0, 0))
	{
		*uParam1 = 4;
		return true;
	}
	if (uParam0->f_104)
	{
		*uParam1 = 5;
		return true;
	}
	if (is_player_dead(player_id()))
	{
		*uParam1 = 3;
		return true;
	}
	if (Global_1940258->f_6)
	{
		*uParam1 = 3;
		return true;
	}
	if (func_261(uParam0->f_39, 8))
	{
		*uParam1 = 4;
		return true;
	}
	Call_Loc(uParam0->f_134);
	iVar0 = StackVal;
	if (iVar0 != 0)
	{
		*uParam1 = iVar0;
		return true;
	}
	if (uParam0->f_48)
	{
		func_262(0);
		func_263();
		set_ped_reset_flag(Global_34, 175, true);
		set_all_random_peds_flee_this_frame(player_id());
		_0x1c6306e5bc25c29c();
	}
	func_264(4, 1);
	func_265(uParam0);
	return false;
}

void func_98(var uParam0, int iParam1)
{
	func_266(uParam0, iParam1);
	func_267(uParam0);
}

void func_99(var uParam0, int iParam1)
{
	uParam0->f_43 = iParam1;
	func_268(&(uParam0->f_44));
}

bool func_100(var uParam0)
{
	Call_Loc(uParam0->f_147);
	return StackVal;
}

bool func_101(var uParam0, float fParam1)
{
	if (!func_269(uParam0))
	{
		return false;
	}
	if (func_127(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_102(var uParam0)
{
	Call_Loc(uParam0->f_115);
}

void func_103(int iParam0, int iParam1)
{
	if (iParam0 != Global_1138962->f_137)
	{
		return;
	}
	if (!func_270(Global_1138962->f_137.f_1, iParam1))
	{
		func_271(&(Global_1138962->f_137.f_1), iParam1);
	}
}

int func_104(int iParam0)
{
	if (iParam0 != Global_1138962->f_137)
	{
		return 0;
	}
	return Global_1138962->f_137.f_2;
}

void func_105(var uParam0)
{
	if (uParam0->f_54)
	{
	}
	else
	{
		Call_Loc(uParam0->f_142);
		uParam0->f_54 = 1;
	}
}

void func_106(var uParam0)
{
	if (uParam0->f_50)
	{
		set_no_loading_screen(uParam0->f_51);
		uParam0->f_50 = 0;
		uParam0->f_51 = 0;
	}
}

void func_107(var uParam0, int iParam1)
{
	uParam0->f_60 = iParam1;
	func_272(uParam0);
}

void func_108(int iParam0, int iParam1)
{
	if (!func_261(iParam0, iParam1))
	{
	}
	Global_1902831->f_3[iParam0] = (Global_1902831->f_3[iParam0] || iParam1);
}

bool func_109()
{
	iVar0 = _0x901e0dc25080c8b9(player_id());
	if (_0x0f99f6436528a089(iVar0) && _0x149a2751ab66ac02(iVar0) > 1)
	{
		return true;
	}
	return false;
}

void func_110(var uParam0)
{
	Call_Loc(uParam0->f_121);
	uParam0->f_55 = 1;
}

bool func_111(int iParam0, int iParam1)
{
	if (iParam0 != Global_1138962->f_137)
	{
		return false;
	}
	return func_270(Global_1138962->f_137.f_1, iParam1);
}

bool func_112()
{
	iVar0 = _0x901e0dc25080c8b9(player_id());
	if (_0x0f99f6436528a089(iVar0) && _0x149a2751ab66ac02(iVar0) > 1)
	{
		if (_0x424b17a7dc5c90bc(player_id()))
		{
			return true;
		}
	}
	return false;
}

void func_113(var uParam0, int iParam1)
{
	if (uParam0->f_83 != 0)
	{
	}
	else
	{
		uParam0->f_82 = iParam1;
	}
}

void func_114(int iParam0, int iParam1)
{
	if (iParam0 != Global_1138962->f_137)
	{
		return;
	}
	if (func_270(Global_1138962->f_137.f_1, iParam1))
	{
		func_273(&(Global_1138962->f_137.f_1), iParam1);
	}
}

void func_115(var uParam0, int iParam1)
{
	if (uParam0->f_83 == 0)
	{
		func_274(uParam0);
	}
	*iParam1 = 0;
	if (uParam0->f_83 != 0)
	{
		switch (uParam0->f_82)
		{
			case 0:
			case 1:
				if (is_control_just_pressed(2, 217814591))
				{
					*iParam1 = 1;
				}
				else if (is_control_just_pressed(2, -1122134879))
				{
					*iParam1 = 2;
				}
				else if (is_control_just_pressed(2, -186823577))
				{
					*iParam1 = 3;
				}
				break;
			case 2:
				if (is_control_just_pressed(2, 217814591))
				{
					*iParam1 = 1;
				}
				else if (is_control_just_pressed(2, -186823577))
				{
					*iParam1 = 2;
				}
				break;
		}
	}
	if (*iParam1 != 0)
	{
	}
}

void func_116()
{
	iVar0 = _0x901e0dc25080c8b9(player_id());
	if (_0x0f99f6436528a089(iVar0) && _0x149a2751ab66ac02(iVar0) > 1)
	{
		func_195(1);
	}
}

void func_117(var uParam0)
{
	if (uParam0->f_83 != 0)
	{
		_0x00a15b94cba4f76f(uParam0->f_83);
		uParam0->f_83 = 0;
	}
}

void func_118(var uParam0)
{
	Call_Loc(uParam0->f_137);
}

void func_119(var uParam0)
{
	if (uParam0->f_103 == 0)
	{
	}
	func_267(uParam0);
}

bool func_120(int iParam0)
{
	if (!is_screen_faded_out())
	{
		if (!is_screen_fading_out())
		{
			do_screen_fade_out(iParam0);
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_121(var uParam0)
{
	Call_Loc(uParam0->f_149);
}

void func_122(var uParam0)
{
	Call_Loc(uParam0->f_150);
}

void func_123(var uParam0)
{
	if (uParam0->f_57)
	{
		uParam0->f_57 = 0;
	}
}

bool func_124(var uParam0)
{
	return uParam0->f_81 != 0;
}

bool func_125(var uParam0)
{
	return is_control_just_pressed(2, -186823577);
}

void func_126(var uParam0)
{
	if (uParam0->f_81 != 0)
	{
		_0x00a15b94cba4f76f(uParam0->f_81);
		uParam0->f_81 = 0;
	}
}

float func_127(var uParam0)
{
	if (!func_269(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_275(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_276() - uParam0->f_1);
}

void func_128(int iParam0, var uParam1)
{
	if (iParam0 != Global_1138962->f_137)
	{
		return;
	}
	Global_1138962->f_137.f_3 = uParam1;
}

void func_129(var uParam0)
{
	if (!uParam0->f_54)
	{
	}
	else
	{
		Call_Loc(uParam0->f_143);
		uParam0->f_54 = 0;
	}
}

bool func_130(var uParam0)
{
	if (uParam0->f_34)
	{
		return true;
	}
	return false;
}

void func_131(var uParam0, int iParam1)
{
	uParam0->f_1475 = iParam1;
}

struct<10> func_132(int iParam0)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	func_278(func_277(iParam0), &Var0);
	return Var0;
}

void func_133(var uParam0, vector3 vParam1, var uParam4, int iParam5)
{
	*uParam0 = { vParam1 };
	uParam0->f_3 = uParam4;
	uParam0->f_762 = 0;
	uParam0->f_766 = 0;
	uParam0->f_42 = 0;
	uParam0->f_808 = iParam5;
	uParam0->f_809 = 0;
	StringCopy(uParam0->f_4[0], "face_human@mini_games@generic", 64);
	StringCopy(uParam0->f_4[1], "face_human@mini_games@poker", 64);
	StringCopy(uParam0->f_21[0], "p_m_zero", 64);
	StringCopy(uParam0->f_21[1], "gen_male", 64);
	uParam0->f_38 = 0;
	uParam0->f_39 = 0;
	uParam0->f_40 = 0;
	uParam0->f_41 = 0;
	uParam0->f_1197 = 0;
	uParam0->f_1402 = 0;
	uParam0->f_789 = 0;
	uParam0->f_790 = 0;
	uParam0->f_791 = 0;
	uParam0->f_792 = 0;
	func_279(uParam0);
	func_280(uParam0);
	func_281(uParam0);
	func_282(uParam0);
	func_283(uParam0);
	func_284(uParam0);
	func_285(uParam0);
	func_286(uParam0);
	func_287(uParam0);
}

void func_134(var uParam0, vector3 vParam1, var uParam4)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = -1;
	uParam0->f_5 = -1;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	func_288(&(uParam0->f_36), vParam1, uParam4);
	func_289(&(uParam0->f_36), 0, 0.268f, -0.3454f, 1.1811f, -6.4048f, 0.0522f, 11.1279f, 33.0328f, 0f);
	func_289(&(uParam0->f_36), 1, -0.8528f, 1.8438f, 1.5104f, -17.3208f, -0.1408f, -154.8075f, 51.282f, 0f);
	func_290(&(uParam0->f_36), 0, 0.0729f, 0.553f, 1.1431f, -59.0945f, 0f, 179.8223f, 42.735f, 0, 0, 0, 0f, 0.1f);
	func_290(&(uParam0->f_36), 1, 0.0337f, 0.6014f, 1.2234f, -59.0944f, 0f, 179.8223f, 42.735f, 0, 0, 0, 0f, 0.1f);
	func_290(&(uParam0->f_36), 2, 0.0028f, 1.0857f, 2.175f, -62.243f, 0f, 179.2382f, 14.4905f, 0, 0, 0, 0f, 0.1f);
	func_290(&(uParam0->f_36), 3, 0.0651f, 0.3596f, 1.1895f, -89.4999f, -0.1268f, 0.2809f, 46.62f, 0, 0, 0, 0f, 0.1f);
	func_290(&(uParam0->f_36), 4, 0.0328f, 0.359f, 1.2283f, -89.4999f, -0.1268f, 0.2809f, 46.62f, 0, 0, 0, 0f, 0.1f);
	func_290(&(uParam0->f_36), 5, -0.0174f, -0.3798f, 2.175f, -62.243f, 0f, -0.8449f, 14.4905f, 0, 0, 0, 0f, 0.1f);
	func_290(&(uParam0->f_36), 6, 0.6349f, -0.2965f, 1.1056f, -3.4672f, 0f, 78.9368f, 37.8962f, 0, 0, 0, 0f, 0.19f);
}

void func_135(var uParam0)
{
	uParam0->f_1 = 0;
	uParam0->f_165 = 0;
	uParam0->f_166 = 0;
	uParam0->f_168 = 0;
	uParam0->f_169 = 0;
	uParam0->f_170 = 0;
	uParam0->f_171 = 1;
	uParam0->f_172 = 0;
	func_291(uParam0);
	func_292(uParam0);
	func_293(uParam0);
}

void func_136(var uParam0)
{
	func_294(uParam0);
	func_223(uParam0);
	func_296(uParam0, 1, 30407);
	func_296(uParam0, 2, 30639);
	func_296(uParam0, 3, 30853);
	func_296(uParam0, 4, 33706);
	func_296(uParam0, 5, 36567);
	func_296(uParam0, 6, 37131);
	func_296(uParam0, 7, 39294);
	func_296(uParam0, 8, 40365);
	func_296(uParam0, 9, 41453);
	func_296(uParam0, 10, 47082);
	func_296(uParam0, 11, 48663);
	func_308(uParam0, 1, 48733);
	func_308(uParam0, 2, 49310);
	func_308(uParam0, 3, 50443);
	func_308(uParam0, 4, 50774);
	func_313(uParam0, 2, 51958);
	func_313(uParam0, 3, 52859);
	func_313(uParam0, 4, 53104);
	func_313(uParam0, 5, 55382);
	func_313(uParam0, 1, 56234);
	func_319(uParam0, 1, 56296);
	func_319(uParam0, 2, 56626);
	func_319(uParam0, 3, 60107);
	func_323(uParam0, 1, 61383);
	func_323(uParam0, 2, 61543);
	func_323(uParam0, 3, 61684);
	func_327(uParam0, 62195);
}

void func_137(var uParam0, int iParam1)
{
	uParam0->f_692 = iParam1;
	func_328(&(uParam0->f_693), uParam0->f_692);
	func_329(&(uParam0->f_695), uParam0->f_692);
	func_331(&(uParam0->f_694), func_330(), uParam0->f_692, 0);
}

void func_138(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 81:
			func_332(&(uParam0->f_2841), -307.1723f, 796.1072f, 117.9627f);
			func_332(&(uParam0->f_2841), -312.5649f, 809.5051f, 117.9771f);
			func_332(&(uParam0->f_2841), -305.9782f, 811.3005f, 117.9807f);
			func_332(&(uParam0->f_2841), -312.6757f, 802.9134f, 117.9805f);
			func_332(&(uParam0->f_2841), -310.7475f, 796.211f, 117.9675f);
			func_332(&(uParam0->f_2841), -308.5533f, 797.4734f, 117.9642f);
			func_332(&(uParam0->f_2841), -305.9204f, 798.1023f, 117.9606f);
			func_332(&(uParam0->f_2841), -307.3433f, 797.2706f, 117.9627f);
			func_332(&(uParam0->f_2841), -301.5801f, 792.1054f, 117.1054f);
			func_333(&(uParam0->f_2841), -306.8107f, 793.4584f, 116.9747f);
			break;
		case 5:
			func_332(&(uParam0->f_2841), 2626.753f, -1219.197f, 52.2514f);
			func_332(&(uParam0->f_2841), 2637.419f, -1224.354f, 52.3804f);
			func_332(&(uParam0->f_2841), 2637.921f, -1229.526f, 52.3804f);
			func_332(&(uParam0->f_2841), 2633.379f, -1233.32f, 53.1887f);
			func_332(&(uParam0->f_2841), 2635.423f, -1220.865f, 52.3804f);
			func_332(&(uParam0->f_2841), 2630.454f, -1217.621f, 52.2645f);
			func_332(&(uParam0->f_2841), 2624.762f, -1222.479f, 52.2391f);
			func_333(&(uParam0->f_2841), 2627.455f, -1219.955f, 52.2466f);
			break;
		case 121:
			func_332(&(uParam0->f_2841), -5512.044f, -2910.505f, 0.6699f);
			func_332(&(uParam0->f_2841), -5515.198f, -2911.668f, 0.6704f);
			func_332(&(uParam0->f_2841), -5512.416f, -2918.883f, 0.6517f);
			func_333(&(uParam0->f_2841), -5514.41f, -2918.763f, 0.6464f);
			break;
		case 40:
			func_332(&(uParam0->f_2841), -811.3929f, -1324.61f, 42.6781f);
			func_332(&(uParam0->f_2841), -817.068f, -1322.638f, 42.6789f);
			func_332(&(uParam0->f_2841), -821.1555f, -1315.399f, 42.6789f);
			func_332(&(uParam0->f_2841), -807.1668f, -1312.655f, 42.6624f);
			func_332(&(uParam0->f_2841), -808.6184f, -1309.705f, 42.6567f);
			func_332(&(uParam0->f_2841), -808.018f, -1319.517f, 42.6661f);
			func_333(&(uParam0->f_2841), -809.1511f, -1312.746f, 42.6682f);
			break;
		case 80:
			func_332(&(uParam0->f_2841), -321.8182f, -358.8911f, 87.0173f);
			func_332(&(uParam0->f_2841), -322.9761f, -356.7132f, 87.001f);
			func_332(&(uParam0->f_2841), -324.3805f, -353.8069f, 86.9829f);
			func_332(&(uParam0->f_2841), -332.2454f, -354.9357f, 87.0182f);
			func_332(&(uParam0->f_2841), -338.1316f, -356.5013f, 87.0331f);
			func_332(&(uParam0->f_2841), -334.125f, -356.3169f, 87.0035f);
			func_332(&(uParam0->f_2841), -335.3971f, -361.9433f, 87.0766f);
			func_332(&(uParam0->f_2841), -338.2805f, -359.7622f, 87.0718f);
			func_332(&(uParam0->f_2841), -340.7805f, -362.6811f, 87.048f);
			func_332(&(uParam0->f_2841), -341.2767f, -360.5272f, 87.0055f);
			func_333(&(uParam0->f_2841), -324.0977f, -357.0095f, 86.9931f);
			break;
	}
}

int func_139(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

int func_140(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

bool func_141(var uParam0, int iParam1)
{
	return uParam0->f_1475 == iParam1;
}

void func_142(var uParam0)
{
	uParam0->f_169 = 1;
}

void func_143(var uParam0)
{
}

void func_144(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	uParam0->f_38 = 1;
	_0x2b6529c54d29037a("TaskMovePokerMP");
	iVar0 = 0;
	while (iVar0 < 6)
	{
		request_anim_dict(uParam0->f_1274[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		request_clip_set(func_334(uParam0, iVar0));
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 2)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			request_anim_dict(func_335(uParam0, iVar1, iVar2));
			iVar2++;
		}
		iVar1++;
	}
	request_anim_dict("mini_games@poker_mg@deal");
	request_model(uParam0->f_693, false);
	request_model(uParam0->f_694, false);
	request_model(uParam0->f_695, false);
	request_model(-1383054421, false);
	request_model(744014130, false);
	request_model(552839784, false);
	request_model(-809957388, false);
	request_model(1028219667, false);
	request_model(1699623712, false);
	request_model(1509629050, false);
	request_model(278923713, false);
	request_model(1985926465, false);
	request_model(-1045813766, false);
	func_336(uParam0, iParam2, bParam3);
	func_337(uParam0);
	if (!is_ped_injured(Global_34) && is_ped_male(Global_34))
	{
		func_338(uParam0, 0);
	}
	else
	{
		func_338(uParam0, 4);
	}
	if (uParam0->f_808)
	{
		func_339(uParam0, iParam1);
	}
}

void func_145(var uParam0, int iParam1)
{
	if (!*uParam0)
	{
		*uParam0 = 1;
		uParam0->f_7 = iParam1;
		_0x6a4d224fc7643941("table_games_cam");
		request_model(-615159064, false);
	}
}

void func_146(var uParam0, int iParam1)
{
	func_340(iParam1, &iVar0);
	func_341(uParam0, 2, 0, iVar0);
	iVar1 = 0;
	while (iVar1 < 6)
	{
		func_342(uParam0, iVar1, "", "", 0, 0);
		iVar1++;
	}
	_0xd9130842d7226045("HUD_POKER", 0);
	_0x5199405eabfbd7f0("OJPokerPlayerTurn");
}

int func_147(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar5 = 0;
	if (iParam0 == 3)
	{
		return 417416138;
	}
	else if (iParam0 == 2 || iParam0 == 0)
	{
		if (!bParam3)
		{
			return -951746023;
		}
		else
		{
			return -294911754;
		}
	}
	else if (iParam0 == 1)
	{
		return -726434422;
	}
	switch (iParam1)
	{
		case 81:
			iVar0[0] = -2087759666;
			iVar0[1] = -1789856687;
			iVar5 = 2;
			break;
		case 111:
			iVar0[0] = -1345652903;
			iVar5 = 1;
			break;
		case 40:
			if (iParam0 == 1)
			{
				iVar0[0] = -989220241;
				iVar0[1] = -607723543;
				iVar5 = 2;
			}
			else
			{
				iVar0[0] = 1022365451;
				iVar5 = 1;
			}
			break;
		case 121:
			iVar0[0] = 480011144;
			iVar0[1] = 966958492;
			iVar5 = 2;
			break;
		case 26:
			iVar0[0] = 413771941;
			iVar5 = 1;
			break;
		case 5:
			if (iParam0 == 1)
			{
				iVar0[0] = 2133848994;
				iVar0[1] = 1854820959;
				iVar0[2] = 549598920;
				iVar5 = 3;
			}
			else
			{
				iVar0[0] = -1938511850;
				iVar0[1] = -1938511850;
				iVar5 = 2;
			}
			break;
		case 98:
			iVar0[0] = 918972034;
			iVar5 = 1;
			break;
		case 74:
			if (iParam0 == 1)
			{
				iVar0[0] = -439429058;
				iVar5 = 1;
			}
			else
			{
				iVar0[0] = -439429058;
				iVar5 = 1;
			}
			break;
		case 80:
			iVar0[0] = -2087759666;
			iVar0[1] = -1789856687;
			iVar0[2] = 1124384604;
			iVar5 = 3;
			break;
	}
	if (iVar5 == 0)
	{
		return 0;
	}
	else
	{
		if (iParam2 == -1)
		{
			iParam2 = get_random_int_in_range(0, iVar5);
		}
		if (iParam2 < iVar5)
		{
			return &(iVar0[iParam2]);
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

bool func_148(var uParam0)
{
	if (uParam0->f_808)
	{
		if (!func_343(uParam0))
		{
			return false;
		}
		else if (uParam0->f_807 == -1)
		{
			func_344(uParam0);
		}
	}
	if (!_0x2c04d89a0fb4e244("TaskMovePokerMP"))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!has_anim_dict_loaded(uParam0->f_1274[iVar0]))
		{
			return false;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!has_clip_set_loaded(func_334(uParam0, iVar0)))
		{
			return false;
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 2)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (!has_anim_dict_loaded(func_335(uParam0, iVar1, iVar2)))
			{
				return false;
			}
			iVar2++;
		}
		iVar1++;
	}
	if (!has_anim_dict_loaded("mini_games@poker_mg@deal"))
	{
		return false;
	}
	if (!has_model_loaded(uParam0->f_693))
	{
		return false;
	}
	if (!has_model_loaded(uParam0->f_694))
	{
		return false;
	}
	if (!has_model_loaded(uParam0->f_695))
	{
		return false;
	}
	if (!func_345(uParam0))
	{
		return false;
	}
	if (!func_346(uParam0))
	{
		return false;
	}
	if (((((((((!has_model_loaded(-1383054421) || !has_model_loaded(744014130)) || !has_model_loaded(552839784)) || !has_model_loaded(-809957388)) || !has_model_loaded(1028219667)) || !has_model_loaded(1699623712)) || !has_model_loaded(1509629050)) || !has_model_loaded(278923713)) || !has_model_loaded(1985926465)) || !has_model_loaded(-1045813766))
	{
		return false;
	}
	return true;
}

bool func_149(var uParam0)
{
	if (!*uParam0)
	{
	}
	else if (!_0xdd0b7c5ae58f721d("table_games_cam") || !has_model_loaded(-615159064))
	{
		return false;
	}
	return true;
}

bool func_150(var uParam0)
{
	if (!_0xd9130842d7226045("HUD_POKER", 0))
	{
		return false;
	}
	if (_0xbf2dd155b2adcd0a("OJPokerPlayerTurn"))
	{
		return false;
	}
	if (uParam0->f_1 == 4)
	{
		return true;
	}
	return false;
}

bool func_151(int iParam0)
{
	return func_270(Global_1138962->f_145, iParam0);
}

bool func_152(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 60)
	{
		return false;
	}
	if ((*Global_1951255)[iParam0]->f_1 & 2 == 0)
	{
		return false;
	}
	return _uiprompt_is_valid((*Global_1951255)[iParam0]->f_3);
}

bool func_153(int iParam0, bool bParam1)
{
	if (bParam1 && !func_152(iParam0))
	{
		return false;
	}
	iVar0 = func_347(iParam0);
	if (!_uiprompt_has_hold_mode((*Global_1951255)[iVar0]->f_3))
	{
		return is_control_pressed(2, (*Global_1951255)[iVar0]->f_4);
	}
	return _uiprompt_is_hold_mode_running((*Global_1951255)[iVar0]->f_3);
}

void func_154(var uParam0)
{
	func_348(&(uParam0->f_2841), 1);
	func_349(&(uParam0->f_2337));
	func_350(&(uParam0->f_152));
	func_351(&(uParam0->f_152));
}

void func_155(var uParam0)
{
	uParam0->f_1474++;
	if (uParam0->f_1474 >= 32)
	{
		uParam0->f_1474 = 0;
	}
	iVar2 = int_to_playerindex(uParam0->f_1474);
	if (network_is_player_active(iVar2) && network_is_player_a_participant(iVar2))
	{
		iVar1 = network_get_participant_index(iVar2);
		iVar0 = iVar1;
		if (network_is_participant_active(iVar1))
		{
			if (!is_bit_set(uParam0->f_1476.f_7, 0))
			{
				if (is_bit_set(uParam0->f_1476.f_17[iVar0]->f_8, 0))
				{
					set_bit(&(uParam0->f_1476.f_7), 0);
				}
			}
			iVar3 = uParam0->f_1476.f_17[iVar0]->f_5;
			iVar4 = uParam0->f_1476.f_17[iVar0]->f_6;
			bVar5 = uParam0->f_1476.f_17[iVar0]->f_7;
			if ((iVar3 != -1 && iVar4 != -1) && iVar4 > &uParam0->f_1476.f_8[iVar3])
			{
				func_352(uParam0, iVar3, iVar4, bVar5);
			}
		}
	}
}

void func_156(int iParam0)
{
	if (!func_270(Global_1138962->f_145, iParam0))
	{
		func_271(&(Global_1138962->f_145), iParam0);
	}
}

void func_157(int iParam0)
{
	if (func_270(Global_1138962->f_145, iParam0))
	{
		func_273(&(Global_1138962->f_145), iParam0);
	}
}

void func_158()
{
	func_353(0);
}

bool func_159(int iParam0, bool bParam1)
{
	if (bParam1 && !func_152(iParam0))
	{
		return false;
	}
	iVar0 = func_347(iParam0);
	return _uiprompt_is_active((*Global_1951255)[iVar0]->f_3);
}

int func_160(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_354();
	}
	if (!func_355(bParam1, bParam1, !bParam1))
	{
		return 0;
	}
	func_356(iParam0);
	Global_1896738->f_386 = 1;
	Global_1896738->f_387 = bParam1;
	return 1;
}

void func_161(var uParam0)
{
	func_357(uParam0, uParam0->f_9, uParam0->f_416, !is_ped_male(Global_34));
}

int func_162(var uParam0, var uParam1)
{
	return 1;
}

int func_163(var uParam0, var uParam1)
{
	if (!func_358(&(uParam0->f_2337), 1))
	{
		return 0;
	}
	return 1;
}

void func_164(var uParam0, var uParam1)
{
	func_359(uParam0, uParam1);
}

int func_165(var uParam0, var uParam1)
{
	if (!func_360(uParam0))
	{
		return 0;
	}
	return 1;
}

void func_166(var uParam0, var uParam1)
{
	uParam0->f_152.f_1449 = 0;
	uParam0->f_152.f_1450 = 0;
	func_361(&(uParam0->f_152.f_1658), -uParam0->f_152.f_1456);
	func_359(uParam0, uParam1);
	func_221(&(uParam0->f_152));
	if (func_141(&(uParam0->f_152), 1))
	{
		iVar43 = 0;
		uParam0->f_152.f_2181 = 0;
		iVar44 = 0;
		while (iVar44 < 6)
		{
			if (func_362(&(uParam0->f_152), iVar44) == 1 && !func_363(&(uParam0->f_152), iVar44))
			{
				if (func_364(&(uParam0->f_152), iVar44, Var0[iVar43]))
				{
					set_bit(&(uParam0->f_152.f_2181), iVar44);
					iVar43++;
				}
			}
			iVar44++;
		}
		if (iVar43 > 0)
		{
			if (is_pc_version() || _is_stadia_version())
			{
				uParam0->f_152.f_2182 = 1;
			}
			else
			{
				uParam0->f_152.f_2182 = _0xd66c9e72b3cc4982(&Var0, iVar43);
			}
		}
	}
}

int func_167(var uParam0, var uParam1)
{
	iVar0 = uParam0->f_152.f_1449;
	if (func_141(&(uParam0->f_152), 1) && uParam0->f_152.f_2181 != 0)
	{
		iVar52 = func_365(uParam0->f_152.f_2181);
		if (is_pc_version() || _is_stadia_version())
		{
			iVar53 = -1;
		}
		else
		{
			iVar53 = _0x58cc181719256197(uParam0->f_152.f_2182, &Var3, iVar52);
		}
		if (iVar53 == 0)
		{
			iVar52 = 0;
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (is_bit_set(uParam0->f_152.f_2181, iVar0))
				{
					func_366(&(uParam0->f_152), iVar0, Var3[iVar52], 1);
					iVar52++;
				}
				iVar0++;
			}
			uParam0->f_152.f_2181 = 0;
		}
		else if (iVar53 == 1)
		{
		}
		else
		{
			uParam0->f_152.f_2181 = 0;
		}
	}
	if (func_367())
	{
		if (func_127(&(uParam0->f_44)) >= (120f - 10f))
		{
		}
		else
		{
			if (!func_368())
			{
				func_369(2);
			}
			return 0;
		}
	}
	if (!uParam0->f_152.f_1450)
	{
		iVar61 = 0;
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (func_203(uParam1, iVar0) && func_362(&(uParam0->f_152), iVar0) == 1)
			{
				set_bit(&iVar61, iVar0);
				iVar54[iVar0] = func_370(&(uParam0->f_152), iVar0);
			}
			iVar0++;
		}
		if (iVar61 != 0)
		{
			func_371(&(uParam0->f_2337), iVar61, &iVar54);
		}
		uParam0->f_152.f_1450 = 1;
	}
	iVar0 = uParam0->f_152.f_1449;
	if (iVar0 < 6)
	{
		if (!func_203(uParam1, iVar0))
		{
			uParam0->f_152.f_1449++;
		}
		else if (func_362(&(uParam0->f_152), iVar0) == 0)
		{
			return 0;
		}
		else if (func_362(&(uParam0->f_152), iVar0) != 1)
		{
			return 0;
		}
		else
		{
			if (uParam0->f_152.f_9 == iVar0)
			{
				iVar1 = Global_34;
			}
			else if (!func_372(uParam0, iVar0, *uParam1, func_370(&(uParam0->f_152), iVar0), &iVar1, &uVar2))
			{
				return 0;
			}
			func_373(&(uParam0->f_152), iVar0, iVar1, uParam0->f_152.f_9 != iVar0);
			uParam0->f_152.f_1449++;
		}
	}
	if (uParam0->f_152.f_1449 >= 6)
	{
		if (func_101(&(uParam0->f_44), (120f - 0.5f)))
		{
			func_374(&(uParam0->f_2337));
		}
		if ((func_360(uParam0) && func_358(&(uParam0->f_2337), 1)) && uParam0->f_152.f_2181 == 0)
		{
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_375(&(uParam0->f_152), iVar0) && !func_376(&(uParam0->f_152), iVar0))
				{
					return 0;
				}
				iVar0++;
			}
			return 1;
		}
	}
	return 0;
}

void func_168()
{
	func_377(30, 1073741824);
	func_377(31, 1073741824);
	func_378();
}

void func_169(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 81:
			func_379(&(uParam0->f_2841), -908482159, 0, 0);
			func_379(&(uParam0->f_2841), -1147728628, 0, 0);
			break;
		case 5:
			func_379(&(uParam0->f_2841), 804086151, 0, 0);
			func_379(&(uParam0->f_2841), -399528504, 0, 0);
			break;
		case 121:
			func_379(&(uParam0->f_2841), -2077467, 0, 0);
			func_379(&(uParam0->f_2841), 223504277, 0, 0);
			func_379(&(uParam0->f_2841), 1322586500, 0, 0);
			break;
		case 40:
			func_379(&(uParam0->f_2841), -1842720100, 0, 0);
			func_379(&(uParam0->f_2841), -983069384, 0, 0);
			func_379(&(uParam0->f_2841), -768760124, 0, 0);
			func_379(&(uParam0->f_2841), -1974086289, 0, 0);
			break;
		case 80:
			func_379(&(uParam0->f_2841), -1322761226, 0, 0);
			func_379(&(uParam0->f_2841), -1494929552, 0, 0);
			func_379(&(uParam0->f_2841), -1801221395, 0, 0);
			func_379(&(uParam0->f_2841), -1983417035, 1, 0f);
			func_379(&(uParam0->f_2841), -1476769939, 0, 0);
			func_379(&(uParam0->f_2841), -1229658910, 0, 0);
			break;
	}
}

void func_170(var uParam0)
{
	iVar0 = player_id();
	iVar1 = network_get_participant_index(iVar0);
	iVar2 = iVar1;
	iVar3 = func_380(uParam0->f_42);
	set_bit(&(uParam0->f_152.f_1476.f_17[iVar2]->f_4), iVar3);
}

void func_171(var uParam0)
{
	iVar0 = _0x1f714e7a9dadfc42(Global_34);
	if (does_entity_exist(iVar0))
	{
		if (vdist(get_entity_coords(iVar0, true, false), uParam0->f_2841) < 2f)
		{
			set_entity_as_mission_entity(iVar0, true, false);
			delete_object(&iVar0);
		}
	}
}

bool func_172()
{
	func_378();
	iVar0 = &Global_1051439->f_3745[30];
	iVar1 = -1;
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (&Global_1051439->f_3634[iVar2] != -1)
		{
			if (iVar0 == &Global_1051439->f_3634[iVar2])
			{
				iVar1 = iVar2;
			}
		}
		iVar2++;
	}
	if (iVar1 != -1)
	{
		Global_1051439->f_3711 = iVar1;
		iVar3 = &Global_1051439->f_3634[iVar1];
		iVar4 = Global_1051439->f_3634[iVar1]->f_9;
		if (iVar3 != -1)
		{
			if (!does_entity_exist(Global_1051439->f_3634[iVar1]->f_8))
			{
				return false;
			}
			else if (!_does_scenario_point_exist(Global_1051439->f_3634[iVar1]->f_6))
			{
				return false;
			}
			else if (!_0x9c54041bb66bcf9e(Global_1051439->f_3634[iVar1]->f_8, Global_1051439->f_3634[iVar1]->f_6) && !func_381(Global_1051439->f_3634[iVar1]->f_8, -76381094))
			{
				_task_use_scenario_point(Global_1051439->f_3634[iVar1]->f_8, Global_1051439->f_3634[iVar1]->f_6, 0, 0, false, true, 1778448947, false, -1f, false);
			}
		}
		iVar5 = func_382(Global_1051439->f_3634[iVar1]->f_9);
		if (iVar4 != -1 && _unlock_is_unlocked(iVar5))
		{
			if (!does_entity_exist(Global_1051439->f_3634[iVar1]->f_15))
			{
				return false;
			}
			else if (!_does_scenario_point_exist(Global_1051439->f_3634[iVar1]->f_13))
			{
				return false;
			}
			else if (!_0x9c54041bb66bcf9e(Global_1051439->f_3634[iVar1]->f_15, Global_1051439->f_3634[iVar1]->f_13) && !func_381(Global_1051439->f_3634[iVar1]->f_15, -76381094))
			{
				clear_ped_tasks(Global_1051439->f_3634[iVar1]->f_15, 1, 0);
				_task_use_scenario_point(Global_1051439->f_3634[iVar1]->f_15, Global_1051439->f_3634[iVar1]->f_13, 0, 0, false, true, 1595886358, false, -1f, false);
			}
		}
	}
	return true;
}

bool func_173(var uParam0, int iParam1)
{
	if (uParam0->f_789 == 0)
	{
		if (iParam1 == 5)
		{
			uParam0->f_789 = _0x6f3068258a499e52(1105255678, 2629.15f, -1228.84f, 52.38f, 7);
		}
		else if (iParam1 == 121)
		{
			uParam0->f_789 = _0x6f3068258a499e52(1822151739, -5510.41f, -2913.68f, 2.37f, 7);
		}
		else if (iParam1 == 40)
		{
			uParam0->f_789 = _0x6f3068258a499e52(-1697970565, -813.6749f, -1317.336f, 42.6795f, 7);
		}
	}
	else if (_0x1ff441d7954f8709(uParam0->f_789))
	{
		if (iParam1 == 5)
		{
			if (!does_entity_exist(uParam0->f_790))
			{
				uParam0->f_790 = get_object_index_from_entity_index(_0x4735e2a4bb83d9da(uParam0->f_789));
				if (does_entity_exist(uParam0->f_790))
				{
					set_entity_visible(uParam0->f_790, false);
					return true;
				}
				return false;
			}
		}
		else if (iParam1 == 121)
		{
			if (!does_entity_exist(uParam0->f_791))
			{
				uParam0->f_791 = get_object_index_from_entity_index(_0x4735e2a4bb83d9da(uParam0->f_789));
				if (does_entity_exist(uParam0->f_791))
				{
					return true;
				}
				return false;
			}
		}
		else if (iParam1 == 40)
		{
			if (!does_entity_exist(uParam0->f_792))
			{
				uParam0->f_792 = get_object_index_from_entity_index(_0x4735e2a4bb83d9da(uParam0->f_789));
				if (does_entity_exist(uParam0->f_792))
				{
					set_entity_visible(uParam0->f_792, false);
					return true;
				}
				return false;
			}
		}
	}
	return true;
}

void func_174(var uParam0, struct<17> Param1, int iParam18)
{
	if (func_175(Param1, iParam18))
	{
		return;
	}
	iVar0 = func_380(iParam18);
	iVar1 = player_id();
	iVar2 = network_get_participant_index(iVar1);
	iVar3 = iVar2;
	if (func_383(Param1, iVar3, iVar0))
	{
		if (!is_bit_set((*uParam0)[iVar3]->f_4, 6))
		{
			_0xbfa6b7731c3baf02();
			set_bit(&((*uParam0)[iVar3]->f_4), 6);
		}
		else if (!is_bit_set((*uParam0)[iVar3]->f_4, 7))
		{
			if (_0x0ee3f0d7feccc54f())
			{
				set_bit(&((*uParam0)[iVar3]->f_4), 7);
			}
		}
	}
}

bool func_175(struct<7> Param0, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, int iParam17)
{
	iVar0 = func_380(iParam17);
	if (is_bit_set(Param0.f_6, iVar0))
	{
		return true;
	}
	return false;
}

void func_176(var uParam0)
{
	if (!uParam0->f_1401)
	{
		uParam0->f_1401 = 1;
	}
}

var func_177(var uParam0, var uParam1)
{
	func_178(uParam1);
	while (((func_179(uParam1, 1246061318, 1) || func_179(uParam1, 287982460, 1)) || func_384(uParam1, -1043649719, 1)) || func_385(uParam1, 1))
	{
		if (func_385(uParam1, 1))
		{
			func_182(uParam1, 1, 0, 0, 1);
		}
		else
		{
			func_182(uParam1, 1, 0, 0, 0);
		}
	}
	if (func_384(uParam1, 1995414514, 1))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (func_386(uParam1, iVar0, 1))
			{
				if (&uParam1->f_1558[iVar0] == 0)
				{
					if (func_203(&(uParam1->f_902), iVar0))
					{
						func_387(uParam0, uParam1, iVar0, 2, 1);
					}
					else
					{
						func_387(uParam0, uParam1, iVar0, 4, 1);
					}
				}
			}
			iVar0++;
		}
	}
	if (func_179(uParam1, 1959158395, 1))
	{
		if (uParam1->f_1553 == 0)
		{
			func_388(uParam0, uParam1, 6, 0);
		}
	}
	if (uParam1->f_1401)
	{
		if (uParam1->f_1553 == 0)
		{
			func_388(uParam0, uParam1, 7, 1);
		}
	}
	if (uParam1->f_1553 != 0)
	{
		func_389(uParam0, uParam1);
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (&uParam1->f_1558[iVar0] != 0)
		{
			func_390(uParam0, uParam1, iVar0);
		}
		iVar0++;
	}
	if (uParam0->f_152.f_1607 != 0)
	{
		func_391(uParam0, &(uParam0->f_152));
	}
	if (func_392(uParam1, 1))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (func_393(uParam1, iVar0, 1))
			{
				if (&uParam1->f_1558[iVar0] == 0)
				{
					func_387(uParam0, uParam1, iVar0, 3, 1);
				}
			}
			iVar0++;
		}
	}
	func_394(uParam0, uParam1);
	func_395(uParam0, uParam1);
	if (uParam1->f_1553 == 0)
	{
		if (func_396(uParam0, &iVar1))
		{
			func_388(uParam0, uParam1, iVar1, 1);
		}
	}
	func_397(uParam0);
	iVar2 = 0;
	bVar3 = true;
	while (bVar3)
	{
		bVar3 = false;
		if (uParam1->f_1548 != 0)
		{
			Stack.Push(uParam0);
			Stack.Push(&(uParam1->f_416));
			Call_Loc(&uParam1->f_1405[uParam1->f_1548]);
			if (StackVal)
			{
				iVar2++;
				bVar3 = true;
			}
		}
		if (iVar2 > 50)
		{
		}
	else
	{
		}
	}
	func_398(uParam0, &(uParam0->f_152));
	func_399(uParam0, &(uParam0->f_152));
	return uParam1->f_1553;
}

void func_178(var uParam0)
{
	iVar8 = _minigame_get_next_event_type();
	if (uParam0->f_1388 != 0)
	{
		if (uParam0->f_1388 != iVar8)
		{
			func_400(uParam0);
		}
	}
	if (uParam0->f_1388 == 0)
	{
		if (iVar8 != 0)
		{
			uParam0->f_1388 = iVar8;
			if (uParam0->f_1388 == -1857735811)
			{
				Var9.f_1.f_15 = 11;
				Var9.f_1.f_39 = 6;
				Var9.f_1.f_39.f_1.f_7 = 11;
				Var9.f_1.f_39.f_1.f_31 = 11;
				Var9.f_1.f_39.f_1.f_56.f_7 = 11;
				Var9.f_1.f_39.f_1.f_56.f_31 = 11;
				Var9.f_1.f_39.f_1.f_56.f_56.f_7 = 11;
				Var9.f_1.f_39.f_1.f_56.f_56.f_31 = 11;
				Var9.f_1.f_39.f_1.f_56.f_56.f_56.f_7 = 11;
				Var9.f_1.f_39.f_1.f_56.f_56.f_56.f_31 = 11;
				Var9.f_1.f_39.f_1.f_56.f_56.f_56.f_56.f_7 = 11;
				Var9.f_1.f_39.f_1.f_56.f_56.f_56.f_56.f_31 = 11;
				Var9.f_1.f_39.f_1.f_56.f_56.f_56.f_56.f_56.f_7 = 11;
				Var9.f_1.f_39.f_1.f_56.f_56.f_56.f_56.f_56.f_31 = 11;
				Var9.f_1.f_376 = 6;
				Var9.f_1.f_376.f_1.f_2 = 6;
				Var9.f_1.f_376.f_1.f_10 = 6;
				Var9.f_1.f_376.f_1.f_18.f_2 = 6;
				Var9.f_1.f_376.f_1.f_18.f_10 = 6;
				Var9.f_1.f_376.f_1.f_18.f_18.f_2 = 6;
				Var9.f_1.f_376.f_1.f_18.f_18.f_10 = 6;
				Var9.f_1.f_376.f_1.f_18.f_18.f_18.f_2 = 6;
				Var9.f_1.f_376.f_1.f_18.f_18.f_18.f_10 = 6;
				Var9.f_1.f_376.f_1.f_18.f_18.f_18.f_18.f_2 = 6;
				Var9.f_1.f_376.f_1.f_18.f_18.f_18.f_18.f_10 = 6;
				Var9.f_1.f_376.f_1.f_18.f_18.f_18.f_18.f_18.f_2 = 6;
				Var9.f_1.f_376.f_1.f_18.f_18.f_18.f_18.f_18.f_10 = 6;
				if (!_minigame_get_next_event(&Var9, 487))
				{
					return;
				}
				uParam0->f_902 = { Var9.f_1 };
				uParam0->f_1388.f_1 = Var9.f_1.f_1;
				uParam0->f_1388.f_2 = Var9.f_1;
				uParam0->f_1388.f_3 = 0;
				switch (uParam0->f_1388.f_1)
				{
					case 1995414514:
						iVar0 = 0;
						while (iVar0 < 6)
						{
							if (func_203(&(uParam0->f_416), iVar0) != func_203(&(Var9.f_1), iVar0))
							{
								set_bit(&(uParam0->f_1388.f_3), iVar0);
								if (func_203(&(Var9.f_1), iVar0) && !func_401(uParam0, iVar0))
								{
									func_402(uParam0, iVar0, 255, 0, &uVar1);
								}
							}
							iVar0++;
						}
						break;
					case 1592704673:
						iVar0 = 0;
						while (iVar0 < 6)
						{
							if (func_204(&(uParam0->f_416), iVar0) < func_204(&(Var9.f_1), iVar0))
							{
								set_bit(&(uParam0->f_1388.f_3), iVar0);
							}
							iVar0++;
						}
						break;
				}
			}
			if (uParam0->f_1388 == -1857735811)
			{
			}
		}
	}
}

bool func_179(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (uParam0->f_1400)
		{
			return false;
		}
	}
	if (uParam0->f_1388 != _minigame_get_next_event_type())
	{
		func_403(uParam0);
		return false;
	}
	if (iParam1 == 0)
	{
	}
	else
	{
		if (uParam0->f_1388 == -1857735811)
		{
			if (bParam2)
			{
				if (uParam0->f_1388.f_2 != uParam0->f_1396 + 1 && uParam0->f_1396 != -1)
				{
					return false;
				}
			}
		}
		if (uParam0->f_1388 == iParam1)
		{
			return true;
		}
	}
	return false;
}

bool func_180(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (uParam0->f_1400)
		{
			return false;
		}
	}
	if (uParam0->f_1388 != _minigame_get_next_event_type())
	{
		func_403(uParam0);
		return false;
	}
	if (uParam0->f_1388 == -1857735811)
	{
		if (bParam1)
		{
			if (uParam0->f_1388.f_2 != uParam0->f_1396 + 1 && uParam0->f_1396 != -1)
			{
				return false;
			}
		}
	}
	return uParam0->f_1388 != 0;
}

int func_181(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (uParam0->f_1400)
		{
			return 0;
		}
	}
	if (uParam0->f_1388 != _minigame_get_next_event_type())
	{
		func_403(uParam0);
		return 0;
	}
	if (uParam0->f_1388 == -1857735811)
	{
		if (bParam1)
		{
			if (uParam0->f_1388.f_2 != uParam0->f_1396 + 1 && uParam0->f_1396 != -1)
			{
				return 0;
			}
		}
	}
	return uParam0->f_1388;
}

int func_182(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	if (uParam0->f_1388 == 0)
	{
		return 0;
	}
	if (uParam0->f_1388 == -1857735811)
	{
		if (bParam4)
		{
		}
	}
	else if (bParam4)
	{
	}
	if (bParam1)
	{
		if ((uParam0->f_1388 == -1857735811 && (uParam0->f_1388.f_1 == 1995414514 || uParam0->f_1388.f_1 == 1592704673)) && uParam0->f_1388.f_3 != 0)
		{
			return 0;
		}
	}
	if (iParam2 != 0 && iParam2 != uParam0->f_1388)
	{
		return 0;
	}
	if (iParam3 != 0 && iParam3 != uParam0->f_1388.f_1)
	{
		return 0;
	}
	iVar0 = _minigame_get_next_event_type();
	if (uParam0->f_1388 != iVar0)
	{
		return 0;
	}
	uParam0->f_1392 = { uParam0->f_1388 };
	if (uParam0->f_1388 == -1857735811 && !bParam4)
	{
		uParam0->f_1396 = uParam0->f_1388.f_2;
	}
	if (bParam4)
	{
		func_404();
	}
	else
	{
		switch (uParam0->f_1388)
		{
			case -1553724839:
				func_405(uParam0);
				break;
			case 1959158395:
				func_406(uParam0);
				break;
			case 1246061318:
				func_407(uParam0);
				break;
			case 287982460:
				func_404();
				break;
			case -1857735811:
				func_408(uParam0, &(uParam0->f_902), bParam1);
				break;
			case -1657573670:
			case -1267385353:
			case 308196724:
				func_404();
				break;
			default:
				break;
		}
	}
	func_400(uParam0);
	func_178(uParam0);
	return 1;
}

int func_183(var uParam0)
{
	if (!func_409(uParam0, 0))
	{
		_minigame_leave_table(&Var0);
		func_410(uParam0, 0, Var0, 1, 1);
		return 1;
	}
	return 0;
}

bool func_184(var uParam0, int iParam1)
{
	return is_bit_set(uParam0->f_66, iParam1);
}

bool func_185(var uParam0)
{
	return (uParam0->f_66 && -1 ^ (uParam0->f_69 || uParam0->f_70)) != 0;
}

void func_186(var uParam0)
{
	func_411(&(uParam0->f_2337), uParam0);
}

bool func_187(var uParam0, int iParam1)
{
	return is_bit_set(uParam0->f_1402, iParam1);
}

void func_188(var uParam0, int iParam1)
{
	switch (uParam0->f_1403)
	{
		case 0:
			break;
		case 1:
			_display_hud_component(1920936087);
			break;
		case 2:
			_display_hud_component(-333726060);
			_display_hud_component(372886907);
			break;
		case 3:
			_display_hud_component(-333726060);
			_display_hud_component(372886907);
			_display_hud_component(2003196676);
			break;
		case 4:
			break;
	}
	uParam0->f_1403 = iParam1;
	switch (uParam0->f_1403)
	{
		case 0:
			break;
		case 1:
			_hide_hud_component(1920936087);
			break;
		case 2:
			_hide_hud_component(-333726060);
			_hide_hud_component(372886907);
			break;
		case 3:
			_hide_hud_component(-333726060);
			_hide_hud_component(372886907);
			_hide_hud_component(2003196676);
			break;
		case 4:
			break;
	}
}

void func_189()
{
	if (func_412(67108864))
	{
		func_413(67108864);
	}
}

void func_190(var uParam0)
{
	func_414(uParam0);
	func_415(&(uParam0->f_152));
	uParam0->f_152 = 0;
}

void func_191()
{
	func_416(30, 1073741824);
	func_416(31, 1073741824);
	func_209(0);
}

void func_192(var uParam0, bool bParam1, bool bParam2)
{
	func_417(uParam0);
	func_418(uParam0);
	func_419(uParam0);
	func_420(uParam0);
	func_421(uParam0);
	func_422(uParam0);
	func_423(uParam0, 1);
	if (bParam2)
	{
		func_213(uParam0, 1);
	}
	else
	{
		func_424(uParam0);
	}
	func_425(uParam0);
	func_426(uParam0);
	if (bParam1)
	{
		func_427(uParam0);
	}
}

void func_193(var uParam0)
{
	if (uParam0->f_1)
	{
		func_217(uParam0);
	}
	func_428(&(uParam0->f_36));
	func_429(uParam0);
}

void func_194(var uParam0, var uParam1)
{
	func_216(uParam0, uParam1);
	func_430(uParam0);
	if (uParam0->f_1 != 0 && uParam0->f_1 != 5)
	{
		func_431(uParam0);
	}
}

void func_195(int iParam0)
{
	_0xc08aff658b2e51da(&iVar0);
	if (iVar0 != 0)
	{
		func_432(&(Global_1194053->f_3), 32);
		func_432(&(Global_1194053->f_4), 12);
		Global_1194053->f_498 = iVar0;
		if (network_is_player_active(player_id()) && _0x424b17a7dc5c90bc(player_id()))
		{
			func_432(&(Global_1194053->f_4), 2);
		}
		_0xc08bff658b2e51da(0);
		Global_1194053->f_5[5] = 0;
		func_432(Global_1194053->f_5[5], 1);
	}
	Global_1194053->f_5[3] = 0;
	func_432(Global_1194053->f_5[3], 1);
	iVar1 = _0x901e0dc25080c8b9(player_id());
	if (!_0xd6f6acf4392187fb(iVar1))
	{
		func_432(Global_1194053->f_5[3], 6);
		return;
	}
	if (!_0x0f99f6436528a089(iVar1))
	{
		func_432(Global_1194053->f_5[3], 6);
		return;
	}
	_0x0a04a07bc3074edb(iParam0);
}

int func_196(var uParam0, var uParam1)
{
	if (_poker_get_game_settings_for_id(&(uParam0->f_152.f_11)))
	{
		iVar0 = uParam1->f_11.f_2;
		iVar1 = func_433(iVar0, -915411861, 1, 0, 1, 0);
		func_434(uParam0, iVar1);
		return 1;
	}
	return 0;
}

bool func_197(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, var uParam5)
{
	*uParam5 = _0x3b31732fade5baf3();
	if (bParam3)
	{
	}
	iVar0 = (*uParam5 - 1);
	Var2.f_1.f_15 = 11;
	Var2.f_1.f_39 = 6;
	Var2.f_1.f_39.f_1.f_7 = 11;
	Var2.f_1.f_39.f_1.f_31 = 11;
	Var2.f_1.f_39.f_1.f_56.f_7 = 11;
	Var2.f_1.f_39.f_1.f_56.f_31 = 11;
	Var2.f_1.f_39.f_1.f_56.f_56.f_7 = 11;
	Var2.f_1.f_39.f_1.f_56.f_56.f_31 = 11;
	Var2.f_1.f_39.f_1.f_56.f_56.f_56.f_7 = 11;
	Var2.f_1.f_39.f_1.f_56.f_56.f_56.f_31 = 11;
	Var2.f_1.f_39.f_1.f_56.f_56.f_56.f_56.f_7 = 11;
	Var2.f_1.f_39.f_1.f_56.f_56.f_56.f_56.f_31 = 11;
	Var2.f_1.f_39.f_1.f_56.f_56.f_56.f_56.f_56.f_7 = 11;
	Var2.f_1.f_39.f_1.f_56.f_56.f_56.f_56.f_56.f_31 = 11;
	Var2.f_1.f_376 = 6;
	Var2.f_1.f_376.f_1.f_2 = 6;
	Var2.f_1.f_376.f_1.f_10 = 6;
	Var2.f_1.f_376.f_1.f_18.f_2 = 6;
	Var2.f_1.f_376.f_1.f_18.f_10 = 6;
	Var2.f_1.f_376.f_1.f_18.f_18.f_2 = 6;
	Var2.f_1.f_376.f_1.f_18.f_18.f_10 = 6;
	Var2.f_1.f_376.f_1.f_18.f_18.f_18.f_2 = 6;
	Var2.f_1.f_376.f_1.f_18.f_18.f_18.f_10 = 6;
	Var2.f_1.f_376.f_1.f_18.f_18.f_18.f_18.f_2 = 6;
	Var2.f_1.f_376.f_1.f_18.f_18.f_18.f_18.f_10 = 6;
	Var2.f_1.f_376.f_1.f_18.f_18.f_18.f_18.f_18.f_2 = 6;
	Var2.f_1.f_376.f_1.f_18.f_18.f_18.f_18.f_18.f_10 = 6;
	while (iVar0 >= 0)
	{
		iVar1 = _0x578907f59ba01b6d(iVar0);
		if (iVar1 != -1857735811)
		{
			if (bParam3)
			{
			}
		}
		else if (!_0xdf728c5ae137fc14(iVar0, &Var2, 487))
		{
		}
		else
		{
			if (bParam3)
			{
			}
			Stack.Push(&(Var2.f_1));
			Stack.Push(uParam0->f_9);
			Stack.Push(iParam1);
			Stack.Push(&uVar489);
			Stack.Push(&uVar490);
			Call_Loc(uParam0->f_1441);
			if (StackVal)
			{
				if (bParam3)
				{
				}
				if (bParam2)
				{
					func_435(uParam0, iLocal_497, iLocal_498);
				}
				*iParam4 = iVar0;
				return true;
			}
		}
		iVar0 = (iVar0 - 1);
	}
	if (bParam3)
	{
	}
	Stack.Push(&(uParam0->f_416));
	Stack.Push(uParam0->f_9);
	Stack.Push(iParam1);
	Stack.Push(&uVar489);
	Stack.Push(&uVar490);
	Call_Loc(uParam0->f_1441);
	if (StackVal)
	{
		if (bParam3)
		{
		}
		if (bParam2)
		{
			func_435(uParam0, iLocal_497, iLocal_498);
		}
		*iParam4 = -1;
		return true;
	}
	if (bParam3)
	{
	}
	*iParam4 = -1;
	return false;
}

void func_198(var uParam0, var uParam1, bool bParam2)
{
	if (!uParam0->f_152.f_1997)
	{
		func_436(&(uParam0->f_152), uParam1, &uVar0);
		func_437(&(uParam0->f_152), uVar0);
	}
	func_438(uParam0, uParam1, 1, 1, bParam2);
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_203(uParam1, iVar1) && func_362(&(uParam0->f_152), iVar1) == 1)
		{
			iVar5 = func_370(&(uParam0->f_152), iVar1);
			iVar6 = func_439(&(uParam0->f_152), iVar1, 1);
			if (is_ped_injured(iVar6))
			{
			}
			else
			{
				if (func_440(uParam1, iVar1))
				{
					iVar3 = 2;
				}
				else
				{
					iVar3 = 1;
				}
				if (iVar1 == uParam0->f_152.f_9)
				{
					iVar2 = func_441(&iVar6, 0);
				}
				else
				{
					iVar2 = func_442(&iVar6);
				}
				if (bParam2 && uParam0->f_152.f_9 == iVar1)
				{
					func_218(&(uParam0->f_2841), iVar1, iVar3, 0);
				}
				else
				{
					bVar4 = false;
					if (!bParam2 && uParam0->f_152.f_9 == iVar1)
					{
						bVar4 = true;
					}
					Var7 = { func_443(&(uParam0->f_152), iVar1, 0, 0) };
					if (!func_444(&(uParam0->f_2841), iVar1, iVar6, iVar3, iVar2, 1, -1, 92, iVar5, 1, 0, 0, 0, bVar4, &Var7))
					{
						delete_ped(&iVar6);
						func_445(&(uParam0->f_2337), iVar1);
					}
					if (bVar4)
					{
						func_387(uParam0, &(uParam0->f_152), uParam0->f_152.f_9, 1, 1);
					}
				}
			}
		}
		iVar1++;
	}
	if (uParam0->f_152.f_1548 == 2)
	{
		func_446(uParam0, uParam1);
		func_447(uParam0);
	}
	else if (uParam0->f_152.f_1548 == 4)
	{
		func_446(uParam0, uParam1);
		func_448(uParam0, uParam1);
	}
	else if (uParam0->f_152.f_1548 == 9)
	{
		func_446(uParam0, uParam1);
		func_449(uParam0, uParam1);
	}
	else if (uParam0->f_152.f_1548 == 10)
	{
		func_446(uParam0, uParam1);
		func_447(uParam0);
	}
}

void func_199(var uParam0, var uParam1, bool bParam2)
{
	if (uParam0->f_1)
	{
	}
	else if (!_0xdd0b7c5ae58f721d("table_games_cam"))
	{
	}
	else if (!has_model_loaded(-615159064))
	{
	}
	else
	{
		uParam0->f_9.f_17 = create_object(-615159064, *uParam1 + Vector(0.825f, 0f, 0f), false, true, false, false, true);
		if (!does_entity_exist(uParam0->f_9.f_17))
		{
			return;
		}
		set_entity_visible(uParam0->f_9.f_17, false);
		set_entity_collision(uParam0->f_9.f_17, false, false);
		freeze_entity_position(uParam0->f_9.f_17, true);
		StringCopy(&(uParam0->f_9), "table_games_cam", 64);
		uParam0->f_9.f_16 = -1774795398;
		if (!bParam2)
		{
			StringCopy(&(uParam0->f_9.f_8), "CAMERA_TABLE_GAMES_REQUEST", 64);
		}
		else
		{
			StringCopy(&(uParam0->f_9.f_8), "CAMERA_TABLE_GAMES_CUT_REQUEST", 64);
		}
		_0xb8b207c34285e978(&(uParam0->f_9));
		func_450(&(uParam0->f_36));
		uParam0->f_1 = 1;
		func_451(uParam0, 0, 0, -1, -1, 0);
		if (_0xa24c1d341c6e0d53(1, 0, 0) && _0xd1ba66940e94c547())
		{
			set_transition_timecycle_modifier(func_452(uParam0->f_7), 5f);
			uParam0->f_8 = 1;
		}
	}
}

void func_200(var uParam0, int iParam1)
{
	if (!_does_anim_scene_exist(uParam0->f_805))
	{
	}
	else
	{
		set_anim_scene_origin(uParam0->f_805, *uParam0->f_1236[iParam1], *uParam0->f_1255[iParam1], 2);
		start_anim_scene(uParam0->f_805);
	}
	uParam0->f_810 = 1;
}

void func_201(var uParam0, int iParam1)
{
	set_bit(&(uParam0->f_1402), iParam1);
}

void func_202(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_788)
	{
		_0xc1e1a3d5ed7617b8(&(uParam0->f_767[iVar0]), 1);
		iVar0++;
	}
}

bool func_203(var uParam0, int iParam1)
{
	if ((iParam1 >= 0 && iParam1 < 6) && &uParam0->f_39[iParam1] != -1)
	{
		return true;
	}
	return false;
}

int func_204(var uParam0, int iParam1)
{
	return uParam0->f_39[iParam1]->f_2;
}

void func_205(var uParam0, int iParam1)
{
	uParam0->f_1455 = (uParam0->f_1455 + iParam1);
}

int func_206(var uParam0)
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (&uParam0->f_39[iVar1] != -1 && uParam0->f_39[iVar1]->f_6 != -1)
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_207(var uParam0)
{
	iVar0 = player_id();
	if (!network_is_player_active(iVar0) || !network_is_player_a_participant(iVar0))
	{
	}
	else
	{
		iVar1 = network_get_participant_index(iVar0);
		if (!is_bit_set(uParam0->f_1476.f_17[iVar1]->f_8, 0))
		{
			set_bit(&(uParam0->f_1476.f_17[iVar1]->f_8), 0);
		}
	}
}

void func_208(var uParam0)
{
	iVar0 = player_id();
	iVar1 = network_get_participant_index(iVar0);
	iVar2 = iVar1;
	set_bit(&((*uParam0)[iVar2]->f_4), 8);
}

void func_209(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 180)
	{
		if (func_453(iVar0) == 30)
		{
			func_454(iVar0, 30, bParam0, 0);
		}
		iVar0++;
	}
}

bool func_210(var uParam0, int iParam1)
{
	if ((iParam1 >= 0 && iParam1 < 6) && &uParam0->f_818[iParam1] != 0)
	{
		return true;
	}
	return false;
}

void func_211(var uParam0, int iParam1, bool bParam2)
{
	if (&uParam0->f_818[iParam1] == 0)
	{
	}
	else
	{
		iVar0 = &uParam0->f_818[iParam1];
		iVar1 = func_455(uParam0, iParam1);
		if (!is_ped_injured(iVar0))
		{
			func_456(iVar0);
			if (iVar1 == 2 || iVar1 == 1)
			{
				if (is_ped_a_player(iVar0))
				{
					clear_ped_tasks(iVar0, 1, 0);
				}
				else if (!bParam2)
				{
					clear_ped_tasks(iVar0, 1, 0);
				}
				else
				{
					func_457(iVar0);
					clear_ped_tasks_immediately(iVar0, false, true);
					func_458(uParam0, iParam1, 0);
					func_459(uParam0, iParam1, "no_cards_idle_a", 1, 0f, 1040187392, 0, 1);
					_0x2208438012482a1a(iVar0, false, false);
					set_ped_keep_task(iVar0, true);
				}
			}
		}
		func_460(uParam0, iParam1, 1);
		if (!is_ped_injured(iVar0))
		{
			if (is_ped_a_player(iVar0))
			{
				clear_ped_tasks(iVar0, 1, 0);
			}
			else
			{
				set_ped_as_no_longer_needed(&iVar0);
			}
		}
	}
}

void func_212(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_210(uParam0, iVar0) && iVar0 != iParam1)
		{
			func_461(uParam0, iVar0);
		}
		iVar0++;
	}
}

void func_213(var uParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_462(uParam0, iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 5)
	{
		func_463(uParam0, iVar1);
		iVar1++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			iVar2 = 0;
			while (iVar2 < 4)
			{
				if (does_entity_exist(uParam0->f_74[iVar0][iVar2]))
				{
					delete_object((*uParam0->f_74[iVar0])[iVar2]);
					_0x341cdd17efc2472e(iVar0, iVar2);
				}
				if (does_entity_exist(&(uParam0->f_74[iVar0]->f_15[iVar2])))
				{
					delete_object(uParam0->f_74[iVar0]->f_15[iVar2]);
				}
				iVar2++;
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 6)
		{
			iVar2 = 0;
			while (iVar2 < 4)
			{
				if (does_entity_exist(uParam0->f_255[iVar0][iVar2]))
				{
					delete_object((*uParam0->f_255[iVar0])[iVar2]);
				}
				if (does_entity_exist(&(uParam0->f_255[iVar0]->f_15[iVar2])))
				{
					delete_object(uParam0->f_255[iVar0]->f_15[iVar2]);
				}
				iVar2++;
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 6)
		{
			iVar2 = 0;
			while (iVar2 < 4)
			{
				if (does_entity_exist(uParam0->f_436[iVar0][iVar2]))
				{
					delete_object((*uParam0->f_436[iVar0])[iVar2]);
				}
				if (does_entity_exist(&(uParam0->f_436[iVar0]->f_15[iVar2])))
				{
					delete_object(uParam0->f_436[iVar0]->f_15[iVar2]);
				}
				iVar2++;
			}
			iVar0++;
		}
	}
	if (does_entity_exist(uParam0->f_689))
	{
		delete_object(&(uParam0->f_689));
	}
}

void func_214(var uParam0, bool bParam1)
{
	func_464(uParam0->f_442.f_20, !bParam1, 1);
	func_464(uParam0->f_442.f_21, !bParam1, 1);
	func_464(uParam0->f_442.f_22, !bParam1, 1);
	func_464(uParam0->f_465.f_18, !bParam1, 1);
	func_464(uParam0->f_465.f_19, !bParam1, 1);
	func_464(uParam0->f_485.f_4, !bParam1, 1);
	func_464(uParam0->f_485.f_5, !bParam1, 1);
	func_464(uParam0->f_485.f_7, !bParam1, 1);
	func_464(uParam0->f_485.f_6, !bParam1, 1);
	func_464(uParam0->f_485.f_8, !bParam1, 1);
	func_464(uParam0->f_494, !bParam1, 1);
	func_464(uParam0->f_495, !bParam1, 1);
	func_464(uParam0->f_496, !bParam1, 1);
	func_464(uParam0->f_497, !bParam1, 1);
	func_464(uParam0->f_498, !bParam1, 1);
	func_464(uParam0->f_499, !bParam1, 1);
	func_464(uParam0->f_500, !bParam1, 1);
}

void func_215(var uParam0, bool bParam1)
{
	func_464(uParam0->f_59, !bParam1, 1);
}

void func_216(var uParam0, var uParam1)
{
	uParam0->f_165 = 0;
	uParam0->f_166 = 0;
	if (uParam0->f_172 != 0)
	{
		if (func_465(uParam0->f_172))
		{
			func_250(1);
		}
	}
	uParam0->f_170 = 0;
	uParam0->f_172 = 0;
	func_466(uParam0, uParam1);
	func_467(uParam0);
	func_468(uParam0);
	func_469(uParam0);
	if (animpostfx_is_running("OJPokerPlayerTurn"))
	{
		animpostfx_stop("OJPokerPlayerTurn");
	}
}

void func_217(var uParam0)
{
	if (!uParam0->f_1)
	{
	}
	else
	{
		if (_0x927b810e43e99932(&(uParam0->f_9)))
		{
			_0x0a5a4f1979abb40e(&(uParam0->f_9));
		}
		if (does_entity_exist(uParam0->f_9.f_17))
		{
			set_entity_as_no_longer_needed(&(uParam0->f_9.f_17));
		}
		if (uParam0->f_8)
		{
			if (_0xa24c1d341c6e0d53(1, 0, 0) && _0xd1ba66940e94c547())
			{
				_0xbb6c707f20d955d4(5f);
			}
			else
			{
				_0xbb6c707f20d955d4(1E-08f);
			}
		}
		func_470(&(uParam0->f_36));
		uParam0->f_1 = 0;
		uParam0->f_2 = 0;
		uParam0->f_3 = 0;
		uParam0->f_4 = -1;
		uParam0->f_5 = -1;
		uParam0->f_8 = 0;
	}
}

void func_218(var uParam0, int iParam1, int iParam2, float fParam3)
{
	if (&uParam0->f_818[iParam1] == 0)
	{
	}
	else if (uParam0->f_818[iParam1]->f_50)
	{
	}
	else if (iParam2 != 1 && iParam2 != 2)
	{
	}
	else
	{
		func_471(uParam0, iParam1, 2);
		if (!uParam0->f_40)
		{
			if (fParam3 == 0f)
			{
				clear_ped_tasks_immediately(&(uParam0->f_818[iParam1]), false, true);
				_hide_ped_weapons(&(uParam0->f_818[iParam1]), 2, true);
				set_player_cloth_pin_frames(&(uParam0->f_818[iParam1]), true);
			}
			if (iParam2 == 1)
			{
				func_472(uParam0, iParam1, "NoCardsIdleRequest", fParam3);
			}
			else
			{
				func_472(uParam0, iParam1, "HoldCardsIdleRequest", fParam3);
				func_474(uParam0, iParam1, "hold_cards_idle_a_card1", func_473(uParam0, iParam1, 0), 4, 2, -1082130432);
				func_474(uParam0, iParam1, "hold_cards_idle_a_card2", func_473(uParam0, iParam1, 1), 4, 2, -1082130432);
			}
		}
		func_475(uParam0, iParam1, iParam2);
		if (iParam2 == 2)
		{
			func_476(uParam0, iParam1, 1);
		}
		else
		{
			func_476(uParam0, iParam1, 0);
		}
	}
}

void func_219(var uParam0, bool bParam1)
{
	iVar1 = 0;
	while (iVar1 < 6)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (bParam1)
			{
				if (does_entity_exist(&(uParam0->f_617[iVar1]->f_5[iVar2])))
				{
				}
			}
			if (func_477(uParam0, *(*uParam0->f_617[iVar1])[iVar2], &iVar0))
			{
				set_model_as_no_longer_needed(iVar0);
			}
			*(*uParam0->f_617[iVar1])[iVar2] = { func_330() };
			iVar2++;
		}
		iVar1++;
	}
}

void func_220(var uParam0, bool bParam1)
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (bParam1)
		{
			if (does_entity_exist(&(uParam0->f_672.f_11[iVar1])))
			{
			}
		}
		if (func_477(uParam0, *uParam0->f_672[iVar1], &iVar0))
		{
			set_model_as_no_longer_needed(iVar0);
		}
		*uParam0->f_672[iVar1] = { func_330() };
		iVar1++;
	}
}

void func_221(var uParam0)
{
	iVar1 = 0;
	while (iVar1 < 6)
	{
		iVar0 = &uParam0->f_1442[iVar1];
		if (does_entity_exist(iVar0))
		{
			if (is_ped_a_player(iVar0))
			{
				set_entity_visible(iVar0, true);
				set_entity_collision(iVar0, true, false);
				freeze_entity_position(iVar0, false);
			}
			else
			{
				delete_ped(&iVar0);
			}
		}
		uParam0->f_1442[iVar1] = 0;
		iVar1++;
	}
}

void func_222(var uParam0, int iParam1)
{
	uParam0->f_42 = iParam1;
}

void func_223(var uParam0)
{
	uParam0->f_1548 = 0;
	uParam0->f_1549 = 0;
	func_478(&(uParam0->f_1550));
	uParam0->f_1553 = 0;
	uParam0->f_1553.f_1 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_1558[iVar0] = 0;
		uParam0->f_1558[iVar0]->f_1 = 0;
		iVar0++;
	}
	uParam0->f_1607 = 0;
	uParam0->f_1607.f_1 = 0;
	uParam0->f_1618 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_1619[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_1626 = 0;
	uParam0->f_1627 = 0;
	uParam0->f_1628 = 0;
	uParam0->f_1629 = 0;
	uParam0->f_1630 = 0;
	uParam0->f_1631 = 0;
	uParam0->f_1632 = 0;
	uParam0->f_1633 = 0;
	uParam0->f_1634 = 0;
	uParam0->f_1635 = 0;
	uParam0->f_1636 = 0;
	uParam0->f_1637 = 0;
	uParam0->f_1638 = 0;
	func_479(&(uParam0->f_1639));
	func_478(&(uParam0->f_1641));
	func_478(&(uParam0->f_1644));
	func_478(&(uParam0->f_1647));
	func_478(&(uParam0->f_1651));
	uParam0->f_1650 = -1;
	uParam0->f_1661 = 0;
	uParam0->f_1662 = 0;
	uParam0->f_1663 = 0;
	func_478(&(uParam0->f_1664));
	uParam0->f_1667 = 0f;
	uParam0->f_1668 = 0f;
	uParam0->f_1669 = 0;
	uParam0->f_1670 = 0;
	func_480(uParam0);
	func_481(uParam0);
	uParam0->f_1997 = 0;
	uParam0->f_1998 = 0;
	uParam0->f_1999 = -1;
	uParam0->f_2000 = 0;
	uParam0->f_2002 = 0;
	uParam0->f_2003 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_2004[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_2011[iVar0] = 0;
		iVar0++;
	}
	func_478(&(uParam0->f_2018));
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_2021[iVar0] = 0;
		func_478(uParam0->f_2028[iVar0]);
		iVar0++;
	}
	uParam0->f_2047 = 0;
	uParam0->f_2048 = 0;
	uParam0->f_2049 = 0;
	uParam0->f_2050 = 0;
	func_482(uParam0, 0);
	uParam0->f_2055 = 0;
	uParam0->f_2056 = 0;
	uParam0->f_2057 = 0;
	uParam0->f_2058 = 0;
	uParam0->f_2052 = 0;
	uParam0->f_2053 = 0;
	uParam0->f_2059 = 0;
	uParam0->f_2060 = 0;
	uParam0->f_2061 = 0;
	uParam0->f_2062 = 0;
	uParam0->f_2063 = 0;
	uParam0->f_2064 = -1;
	uParam0->f_2065 = -1;
	uParam0->f_2066 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_2067[iVar0] = -1;
		uParam0->f_2074[iVar0] = 0;
		func_478(uParam0->f_2081[iVar0]);
		iVar0++;
	}
	func_483(uParam0);
	func_478(&(uParam0->f_2167));
	func_478(&(uParam0->f_2170));
	uParam0->f_2173 = -1;
	uParam0->f_2174 = -1;
	func_478(&(uParam0->f_2175));
	func_478(&(uParam0->f_2178));
	uParam0->f_2181 = 0;
	uParam0->f_2182 = -1;
}

void func_224(var uParam0, int iParam1)
{
	clear_bit(&(uParam0->f_1402), iParam1);
}

void func_225(var uParam0, var uParam1)
{
	iVar0 = uParam0->f_103;
	if (iVar0 == 6)
	{
		func_484(&iVar1);
	}
	else
	{
		iVar1 = 0;
	}
	if (func_485(uParam0->f_38))
	{
		func_486(2, -1166915294, 0);
	}
	else if (func_487(uParam0->f_38, 700892038))
	{
		func_486(2, -1878199881, 0);
	}
	else if (func_488(uParam0->f_38))
	{
		func_486(2, 579389526, 0);
	}
	else if (func_489(uParam0->f_38, 1485265289, &Var2))
	{
		func_486(2, -1589038658, Var2.f_3);
	}
	else if (func_489(uParam0->f_38, -1038316793, &Var2))
	{
		func_486(2, -1300909614, Var2.f_3);
	}
	else if (func_141(uParam1, 1) && func_489(uParam0->f_38, 430260396, &Var2))
	{
		func_486(2, 1671747787, Var2.f_3);
	}
	else if (func_490(uParam1->f_1))
	{
		func_486(2, 1053423395, 0);
	}
	else if (iVar1 == -971119797)
	{
		func_486(2, 1736016924, 0);
	}
	else if ((iVar1 == -1631908357 || iVar1 == -572687397) || iVar1 == -1433740021)
	{
		func_486(2, -835571454, 0);
	}
	else if (iVar1 == -1749777281)
	{
		func_486(2, 2124908670, 0);
	}
	else if (iVar1 == -238208981)
	{
		func_486(2, 1320901890, 0);
	}
	else if (iVar0 == 1)
	{
		func_486(2, 1736016924, 0);
	}
	else if (iVar0 == 2)
	{
		func_486(2, -835571454, 0);
	}
	else if (iVar0 == 3)
	{
		func_486(2, -301240451, 0);
	}
	else if (iVar0 == 4)
	{
		func_486(2, -1249239171, 0);
	}
	else if (iVar0 == 5)
	{
		func_486(2, 1406403638, 0);
	}
	else if (iVar0 == 8)
	{
		func_486(2, 1320901890, 0);
	}
	else if (iVar0 == 9)
	{
		func_486(2, -1695230319, 0);
	}
	else if (iVar0 == 10)
	{
		func_486(2, -592991683, 0);
	}
	else if (iVar0 == 7 || iVar1 == 1260659963)
	{
		func_486(2, -1385120212, 0);
	}
	else
	{
		func_486(2, 0, 0);
	}
}

void func_226(var uParam0)
{
	iVar0 = func_491(uParam0->f_2.f_4);
	uVar1 = func_492();
	bVar2 = (func_141(&(uParam0->f_152), 1) && func_151(1024));
	iVar3 = func_493(&(uParam0->f_2));
	iVar4 = 0;
	iVar5 = 0;
	iVar6 = 0;
	uVar7 = uParam0->f_152.f_52;
	if (func_203(&(uParam0->f_152.f_416), uParam0->f_152.f_9))
	{
		iVar4 = func_204(&(uParam0->f_152.f_416), uParam0->f_152.f_9);
		iVar5 = (iVar4 - uParam0->f_152.f_1455);
		iVar6 = uParam0->f_152.f_1454;
	}
	_0x8127c5aa05c5a210(&(uParam0->f_152.f_1), iVar0, uVar1, bVar2, iVar3, 0, iVar5, iVar4, iVar6, uVar7);
}

void func_227()
{
}

int func_228()
{
	return 0;
}

int func_229()
{
	return 1;
}

int func_230()
{
	return 0;
}

int func_231(var uParam0)
{
	return 0;
}

int func_232()
{
	return 0;
}

int func_233()
{
	return 0;
}

int func_234(var uParam0, var uParam1, var uParam2)
{
	return 0;
}

bool func_235()
{
	return Global_1896738->f_382;
}

void func_236(var uParam0)
{
	if (uParam0->f_56)
	{
	}
	else
	{
		Call_Loc(uParam0->f_151);
		uParam0->f_56 = 1;
	}
}

void func_237(var uParam0)
{
	if (!uParam0->f_49)
	{
		uParam0->f_49 = 1;
		if (uParam0->f_48)
		{
			func_494(uParam0);
		}
		func_495(1, -1706799532);
		Var0 = { func_246(0) };
		if (func_247(Var0))
		{
			if (func_248(Var0) == 5)
			{
				_0x1096603b519c905f("");
			}
		}
		func_496(0);
		func_497(uParam0->f_39);
		func_126(uParam0);
		bVar2 = false;
		if (!bVar2)
		{
			if (func_498())
			{
				func_499(uParam0->f_2.f_4, 0, 0, 0, 0);
			}
			else
			{
				func_499(uParam0->f_2.f_4, 0, -1, 0, 0);
			}
			func_500(uParam0->f_2.f_4, 1);
		}
		if (!network_session_is_private())
		{
			_0xbb51299166b844f3();
		}
	}
}

int func_238()
{
	return Global_1902831->f_42.f_1;
}

int func_239()
{
	return Global_1902831->f_42.f_2;
}

int func_240()
{
	return Global_1902831->f_42;
}

void func_241()
{
	func_501();
	func_502();
	func_503(-1);
	func_504(-1);
}

void func_242()
{
	terminate_this_thread();
}

void func_243(int iParam0, int iParam1)
{
	if (!network_is_game_in_progress())
	{
		func_242();
	}
	network_set_this_script_is_network_script(iParam0, false, iParam1);
}

int func_244()
{
	iVar0 = network_get_script_status();
	iVar1 = get_game_timer();
	iVar2 = network_get_timeout_time();
	if (iVar2 < 50000)
	{
		iVar2 = 50000;
	}
	while (iVar0 != 2)
	{
		if (get_game_timer() - iVar1) > (iVar2 - 5000)
		{
		}
		if ((get_game_timer() - iVar1) > 300000)
		{
			func_242();
		}
		if (_0x9e4ef615e307fbbe())
		{
			switch (_0x54ae4fdeefeab77e())
			{
				case 0:
					break;
				case 1:
					func_242();
					break;
				case 2:
					func_242();
					break;
				case 4:
					func_242();
					break;
				case 3:
					func_242();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_242();
		}
		if (!network_is_game_in_progress())
		{
			func_242();
		}
		if (!network_is_signed_online())
		{
			func_242();
		}
		if (func_505() == 0)
		{
			if (func_506())
			{
				func_242();
			}
		}
		wait(0);
		iVar0 = network_get_script_status();
	}
	if (!network_is_game_in_progress())
	{
		func_242();
	}
	return 1;
}

void func_245(bool bParam0)
{
	iVar0 = (_get_system_time() + 180000);
	iVar9 = 0;
	Var1 = { Var1 };
	while (true)
	{
		iVar9++;
		if (bParam0)
		{
			_0x236905c700fdb54d();
		}
		if (_0x9e4ef615e307fbbe())
		{
			switch (_0x54ae4fdeefeab77e())
			{
				case 0:
					break;
				case 1:
					func_242();
					break;
				case 2:
					func_242();
					break;
				case 4:
					func_242();
					break;
				case 3:
					func_242();
					break;
				default:
					break;
			}
		}
		if (!network_is_game_in_progress())
		{
			return;
		}
		if (network_is_host_of_this_script())
		{
			StringCopy(&Var1, "HOST", 64);
		}
		else
		{
			StringCopy(&Var1, "CLIENT", 64);
		}
		if (_0x5d10b3795f3fc886())
		{
			return;
		}
		if (_get_system_time() >= iVar0)
		{
			func_242();
			return;
		}
		wait(0);
	}
}

struct<2> func_246(int iParam0)
{
	return *Global_1900736->f_1[iParam0];
}

bool func_247(struct<2> Param0)
{
	if (!func_507(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_508(Param0))
	{
		return false;
	}
	return true;
}

int func_248(var uParam0, var uParam1)
{
	return uParam0;
}

char* func_249(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return func_509(bParam1, "OOJBJ", "MGBLK");
		case 1:
			return func_509(bParam1, "OOJDO", "MGDOM");
		case 2:
			return func_509(bParam1, "OOJPO", "MGPKR");
		case 3:
			return func_509(bParam1, "OOJFF", "MGFFF");
		case 4:
			return "MGMLK";
		case 5:
			return "MGCLS";
		case 6:
			return "MGFNC";
	}
	return "XXXXX";
}

void func_250(int iParam0)
{
	_0xdd1232b332cbb9e7(1, iParam0, 0);
}

void func_251(bool bParam0)
{
	if (!bParam0)
	{
		func_510(0);
	}
	Global_1940311->f_2 = bParam0;
}

void func_252(bool bParam0)
{
	if (bParam0)
	{
		set_wanted_level_multiplier(1f);
		func_511(Global_1940258, 8388608);
	}
	else
	{
		set_wanted_level_multiplier(0f);
		func_512(Global_1940258, 8388608);
	}
	enable_dispatch_service(15, bParam0);
	enable_dispatch_service(6, bParam0);
	enable_dispatch_service(1, bParam0);
	enable_dispatch_service(16, bParam0);
	enable_dispatch_service(2, bParam0);
	enable_dispatch_service(3, bParam0);
	enable_dispatch_service(4, bParam0);
	enable_dispatch_service(5, bParam0);
	enable_dispatch_service(7, bParam0);
	enable_dispatch_service(9, bParam0);
	enable_dispatch_service(10, bParam0);
	enable_dispatch_service(11, bParam0);
	enable_dispatch_service(12, bParam0);
	enable_dispatch_service(13, bParam0);
	enable_dispatch_service(14, bParam0);
}

int func_253()
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_513(iVar0))
		{
			return func_515(func_514(), iVar0);
		}
		iVar0++;
	}
	return -1;
}

int func_254(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
		case 2:
			return 54;
		case 1:
			return 56;
		case 3:
			return 36;
		case 4:
			return 105;
		case 7:
			return 110;
		case 6:
			return 91;
		case 5:
			return 79;
		case 8:
			return 94;
		default:
			break;
	}
	return -1;
}

void func_255(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_516(iParam0))
		{
			func_517(iParam0, 67108864);
		}
	}
	else if (func_516(iParam0))
	{
		func_518(iParam0, 67108864);
	}
}

char* func_256(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "Minigame_Poker_Scene";
		default:
			break;
	}
	return "Minigame_Global_Scene";
}

bool func_257(int iParam0, bool bParam1)
{
	iVar4 = 0;
	if (iParam0 == 0)
	{
		return false;
	}
	if (Global_1139381->f_3876.f_711 == iParam0)
	{
		return true;
	}
	Global_1139381->f_3876.f_706.f_1 = 0;
	Global_1139381->f_3876.f_706.f_2 = 1613014828;
	Global_1139381->f_3876.f_706.f_3 = iParam0;
	Global_1139381->f_3876.f_706.f_4 = 0;
	if (!_0x603ac35fd4602c76(Global_1139381->f_3876.f_706))
	{
		Global_1139381->f_3876.f_706 = Global_1139381->f_2;
	}
	if (!_datafile_get_data_node_index(&uVar0, &(Global_1139381->f_3876.f_706)))
	{
		return false;
	}
	Global_1139381->f_3876.f_711 = iParam0;
	iVar4 = 0;
	while (iVar4 < 106)
	{
		iVar2 = func_519(iVar4, 1);
		if (iVar2 == -1)
		{
		}
		else
		{
			iVar1 = iVar2;
			if (iVar1 == 0)
			{
			}
			else
			{
				Global_1139381->f_3876.f_706.f_4 = iVar1;
				Global_1139381->f_3876.f_706.f_2 = -239316549;
				if (_datafile_get_data_node_index(&uVar0, &(Global_1139381->f_3876.f_706)))
				{
					bVar3 = true;
				}
				else
				{
					bVar3 = false;
				}
				func_520(iVar2, bVar3, bParam1);
				if (!bVar3)
				{
				}
				else
				{
					Global_1139381->f_3876.f_706.f_2 = 1242520881;
					if (_datafile_get_bool(&bVar3, &(Global_1139381->f_3876.f_706)))
					{
					}
					else
					{
						bVar3 = true;
					}
					(Global_1139381->f_3876.f_2[func_521(iVar2, 1)])->f_1 = bVar3;
				}
			}
		}
		iVar4++;
	}
	return true;
}

bool func_258()
{
	if (Global_1572887->f_360.f_8 == 1)
	{
		return true;
	}
	return false;
}

void func_259(var uParam0)
{
	uParam0->f_104 = 1;
}

bool func_260(bool bParam0, bool bParam1)
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

bool func_261(int iParam0, int iParam1)
{
	return (Global_1902831->f_3[iParam0] && iParam1) != 0;
}

void func_262(bool bParam0)
{
	if (bParam0)
	{
		func_522(4);
	}
	func_522(2);
	set_bit(&(Global_1957959->f_1), 0);
}

void func_263()
{
	func_523(0);
}

void func_264(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	Global_1139381->f_3876.f_1 = (Global_1139381->f_3876.f_1 || iParam0);
}

void func_265(var uParam0)
{
	func_272(uParam0);
	switch (uParam0->f_58)
	{
		case 0:
			break;
		case 1:
			Stack.Push(func_153(uParam0->f_59, 1));
			Call_Loc(uParam0->f_136);
			if (StackVal || (StackVal && is_control_pressed(2, -385266784)))
			{
				func_524(uParam0, 2, 0);
			}
			break;
		case 2:
			if (!func_153(uParam0->f_59, 1))
			{
				func_524(uParam0, 1, 0);
			}
			else if (func_525(uParam0->f_59, 1))
			{
				play_sound_frontend("menu_select_default", "RDRO_Poker_Sounds", true, 0);
				func_524(uParam0, 4, 1);
			}
			break;
		case 3:
			if (func_153(uParam0->f_59, 1) && func_525(uParam0->f_59, 1))
			{
				play_sound_frontend("menu_select_default", "RDRO_Poker_Sounds", true, 0);
				func_524(uParam0, 4, 1);
			}
			break;
		case 4:
			break;
	}
}

void func_266(var uParam0, int iParam1)
{
	uParam0->f_103 = iParam1;
}

void func_267(var uParam0)
{
	if (func_235())
	{
		func_158();
	}
	func_107(uParam0, 0);
	if (_minigame_is_connected_to_server(uParam0->f_40))
	{
		Call_Loc(uParam0->f_128);
		Stack.Push(!StackVal);
		Stack.Push(1959158395);
		Call_Loc(uParam0->f_123);
		if (StackVal && !StackVal)
		{
			func_526(uParam0);
		}
	}
	if (!uParam0->f_56)
	{
		func_236(uParam0);
	}
	iVar0 = func_492();
	switch (iVar0)
	{
		case -1878199881:
		case -1720361368:
		case -1700673948:
		case -1695230319:
		case -1589038658:
		case -1517426354:
		case -1300909614:
		case -1166915294:
		case -835571454:
		case -592991683:
		case -301240451:
		case 579389526:
		case 1053423395:
		case 1320901890:
		case 1671747787:
		case 1736016924:
		case 2124908670:
			func_527(uParam0, iVar0);
			func_99(uParam0, 21);
			break;
		case -1385120212:
		case 1406403638:
			func_99(uParam0, 22);
			break;
		case -1249239171:
		case 0:
		default:
			func_99(uParam0, 23);
			break;
	}
	Call_Loc(uParam0->f_130);
}

void func_268(var uParam0)
{
	func_361(uParam0, 0f);
}

bool func_269(var uParam0)
{
	return func_528(*uParam0, 1);
}

bool func_270(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_271(var uParam0, int iParam1)
{
	func_529(uParam0, iParam1);
}

void func_272(var uParam0)
{
	if (uParam0->f_60 && !func_261(uParam0->f_39, 2))
	{
		if (uParam0->f_61 != 0)
		{
			if ((uParam0->f_58 != 3 && uParam0->f_58 != 2) && uParam0->f_58 != 4)
			{
				func_524(uParam0, 3, 1);
			}
		}
		else if ((uParam0->f_58 != 1 && uParam0->f_58 != 2) && uParam0->f_58 != 4)
		{
			func_524(uParam0, 1, 1);
		}
	}
	else if (uParam0->f_58 != 0)
	{
		func_524(uParam0, 0, 1);
	}
}

void func_273(var uParam0, int iParam1)
{
	func_530(uParam0, iParam1);
}

void func_274(var uParam0)
{
	uParam0->f_84 = { Var0 };
	switch (uParam0->f_82)
	{
		case 0:
			uParam0->f_84.f_3 = get_hash_key("MG_YES");
			uParam0->f_84.f_3.f_3 = 0;
			uParam0->f_84.f_7 = get_hash_key("MG_NO");
			uParam0->f_84.f_7.f_3 = 0;
			uParam0->f_83 = func_531(&(uParam0->f_84), "MG_ALERT", "VERIFY_EXIT_LOBBY", 0, 0, 1);
			break;
		case 2:
			uParam0->f_84.f_3 = get_hash_key("MG_YES");
			uParam0->f_84.f_3.f_3 = 0;
			uParam0->f_84.f_7 = get_hash_key("MG_NO");
			uParam0->f_84.f_7.f_3 = 0;
			uParam0->f_83 = func_531(&(uParam0->f_84), "MG_ALERT", "VERIFY_EXIT_LOBBY_POSSE_MEMBER", 0, 0, 1);
			break;
		case 1:
			uParam0->f_84.f_3 = get_hash_key("EXIT_WITH_POSSE");
			uParam0->f_84.f_3.f_3 = 0;
			uParam0->f_84.f_11 = get_hash_key("EXIT_ALONE");
			uParam0->f_84.f_11.f_3 = 0;
			uParam0->f_84.f_7 = get_hash_key("MG_CFG_CANCEL");
			uParam0->f_84.f_7.f_3 = 0;
			uParam0->f_83 = func_531(&(uParam0->f_84), "MG_ALERT", "VERIFY_EXIT_LOBBY_POSSE_LEADER", 0, 0, 1);
			break;
		default:
			break;
	}
}

bool func_275(var uParam0)
{
	return func_528(*uParam0, 2);
}

float func_276()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

int func_277(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9;
		case 1:
			return 10;
		case 2:
			return 11;
		case 3:
			return 12;
		case 4:
			return 13;
		default:
			break;
	}
	return -1;
}

int func_278(int iParam0, var uParam1)
{
	*uParam1 = iParam0;
	switch (iParam0)
	{
		case 0:
			uParam1->f_1 = 0;
			uParam1->f_2 = 40;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { -813.2971f, -1324.285f, 46.89f };
			uParam1->f_8 = 0.29f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 1:
			uParam1->f_1 = 0;
			uParam1->f_2 = 111;
			uParam1->f_3 = 0;
			uParam1->f_4 = 400f;
			uParam1->f_5 = { 1339.562f, -1372.173f, 83.2967f };
			uParam1->f_8 = 80f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 2:
			uParam1->f_1 = 0;
			uParam1->f_2 = 98;
			uParam1->f_3 = 0;
			uParam1->f_4 = 300f;
			uParam1->f_5 = { 2938.582f, 520.6577f, 44.3412f };
			uParam1->f_8 = 126.9f;
			uParam1->f_9 = 2f;
			return 1;
		case 3:
			uParam1->f_1 = 1;
			uParam1->f_2 = 40;
			uParam1->f_3 = 0;
			uParam1->f_4 = 200f;
			uParam1->f_5 = { -936.9756f, -1390.084f, 49.5777f };
			uParam1->f_8 = -174.39f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 4:
			uParam1->f_1 = 1;
			uParam1->f_2 = 74;
			uParam1->f_3 = 0;
			uParam1->f_4 = 100f;
			uParam1->f_5 = { 1522.005f, 431.2095f, 89.679f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 5:
			uParam1->f_1 = 1;
			uParam1->f_2 = 5;
			uParam1->f_3 = 0;
			uParam1->f_4 = 150f;
			uParam1->f_5 = { 2515.659f, -1245.743f, 49.5757f };
			uParam1->f_8 = -45f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 6:
			uParam1->f_1 = 3;
			uParam1->f_2 = 26;
			uParam1->f_3 = 0;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -1826.215f, -433.9676f, 159.7386f };
			uParam1->f_8 = 157.4f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 7:
			uParam1->f_1 = 3;
			uParam1->f_2 = 81;
			uParam1->f_3 = 0;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -243.7256f, 771.2707f, 117.8849f };
			uParam1->f_8 = -69.92f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 8:
			uParam1->f_1 = 3;
			uParam1->f_2 = 98;
			uParam1->f_3 = 0;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { 2946.444f, 500.1154f, 45.53999f };
			uParam1->f_8 = -84.13f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 9:
			uParam1->f_1 = 2;
			uParam1->f_2 = 40;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { -813.2148f, -1316.547f, 42.6787f };
			uParam1->f_8 = 60f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 10:
			uParam1->f_1 = 2;
			uParam1->f_2 = 5;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { 2630.74f, -1226.25f, 52.3794f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 11:
			uParam1->f_1 = 2;
			uParam1->f_2 = 80;
			uParam1->f_3 = 0;
			uParam1->f_4 = 250f;
			uParam1->f_5 = { -327.6681f, -357.796f, 87.055f };
			uParam1->f_8 = -63f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 12:
			uParam1->f_1 = 2;
			uParam1->f_2 = 121;
			uParam1->f_3 = 0;
			uParam1->f_4 = 200f;
			uParam1->f_5 = { -5510.395f, -2913.764f, 0.6353f };
			uParam1->f_8 = 90f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 13:
			uParam1->f_1 = 2;
			uParam1->f_2 = 81;
			uParam1->f_3 = 0;
			uParam1->f_4 = 250f;
			uParam1->f_5 = { -304.5352f, 801.1352f, 117.9785f };
			uParam1->f_8 = 135f;
			uParam1->f_9 = 2.5f;
			return 1;
		default:
			break;
	}
	return 0;
}

void func_279(var uParam0)
{
	uParam0->f_692 = 0;
	func_328(&(uParam0->f_693), uParam0->f_692);
	func_329(&(uParam0->f_695), uParam0->f_692);
	func_331(&(uParam0->f_694), func_330(), uParam0->f_692, 0);
	uParam0->f_696 = 1.5f;
	uParam0->f_697 = 2f;
	uParam0->f_698 = 0.3f;
	uParam0->f_699 = 0.8f;
	uParam0->f_700 = 0.2f;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_532(uParam0, iVar0);
		iVar0++;
	}
	func_533(uParam0);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_534(uParam0, iVar0);
		func_535(uParam0, iVar0);
		func_536(uParam0, iVar0);
		func_537(uParam0, iVar0);
		iVar0++;
	}
	func_538(uParam0);
}

void func_280(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_539(uParam0, iVar0);
		iVar0++;
	}
	uParam0->f_794 = 0;
	uParam0->f_795 = -1;
	uParam0->f_797 = -1;
	*uParam0->f_1198[0] = { 0.008654f, 1.171513f, 0.4999996f };
	*uParam0->f_1217[0] = { 0f, 0f, 180f };
	*uParam0->f_1198[1] = { 1.018887f, 0.5782621f, 0.4999996f };
	*uParam0->f_1217[1] = { 0f, 0f, 120f };
	*uParam0->f_1198[2] = { 1.010233f, -0.5932513f, 0.4999996f };
	*uParam0->f_1217[2] = { 0f, 0f, 60f };
	*uParam0->f_1198[3] = { -0.008654f, -1.171513f, 0.4999996f };
	*uParam0->f_1217[3] = { 0f, 0f, 0f };
	*uParam0->f_1198[4] = { -1.018887f, -0.5782621f, 0.4999996f };
	*uParam0->f_1217[4] = { 0f, 0f, -60f };
	*uParam0->f_1198[5] = { -1.010233f, 0.5932513f, 0.4999996f };
	*uParam0->f_1217[5] = { 0f, 0f, -120f };
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_540(*uParam0, uParam0->f_3, *uParam0->f_1198[iVar0], *uParam0->f_1217[iVar0], uParam0->f_1236[iVar0], uParam0->f_1255[iVar0]);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 35)
	{
		uParam0->f_1330[iVar1] = 99551;
		uParam0->f_1366[iVar1] = 99559;
		iVar1++;
	}
	StringCopy(uParam0->f_1274[0], "mini_games@poker_mg@base", 64);
	StringCopy(uParam0->f_1274[1], "mini_games@poker_mg@base_camp", 64);
	StringCopy(uParam0->f_1274[2], "mini_games@poker_mg@relaxed", 64);
	StringCopy(uParam0->f_1274[4], "mini_games@poker_mg@fem_base_camp", 64);
	StringCopy(uParam0->f_1274[3], "mini_games@poker_mg@fem_focused", 64);
	StringCopy(uParam0->f_1274[5], "mini_games@poker_mg@fem_relaxed", 64);
	uParam0->f_1323[0] = -1196886585;
	uParam0->f_1323[1] = 1937500030;
	uParam0->f_1323[2] = -521410981;
	uParam0->f_1323[4] = -1999305469;
	uParam0->f_1323[3] = -762617465;
	uParam0->f_1323[5] = 866151846;
	uParam0->f_1330[0] = 99551;
	uParam0->f_1330[1] = 99567;
	uParam0->f_1330[2] = 99575;
	uParam0->f_1330[3] = 99650;
	uParam0->f_1366[3] = 99840;
	uParam0->f_1330[4] = 99856;
	uParam0->f_1366[4] = 101353;
	uParam0->f_1330[5] = 101369;
	uParam0->f_1366[5] = 101512;
	uParam0->f_1330[6] = 101543;
	uParam0->f_1366[6] = 101836;
	uParam0->f_1330[7] = 101862;
	uParam0->f_1366[7] = 103077;
	uParam0->f_1330[8] = 103091;
	uParam0->f_1366[8] = 106319;
	uParam0->f_1330[9] = 106333;
	uParam0->f_1330[10] = 106552;
	uParam0->f_1330[11] = 107014;
	uParam0->f_1330[12] = 107277;
	uParam0->f_1330[13] = 107991;
	uParam0->f_1366[13] = 109031;
	uParam0->f_1330[14] = 109068;
	uParam0->f_1330[15] = 109488;
	uParam0->f_1330[16] = 109875;
	uParam0->f_1366[16] = 110684;
	uParam0->f_1330[17] = 110700;
	uParam0->f_1366[17] = 111707;
	uParam0->f_1330[18] = 111723;
	uParam0->f_1366[18] = 112224;
	uParam0->f_1330[19] = 112249;
	uParam0->f_1366[19] = 113035;
	uParam0->f_1330[20] = 113175;
	uParam0->f_1330[21] = 114264;
	uParam0->f_1330[22] = 114731;
	uParam0->f_1330[23] = 115086;
	uParam0->f_1366[23] = 115488;
	uParam0->f_1330[24] = 115504;
	uParam0->f_1366[24] = 115731;
	uParam0->f_1330[25] = 115747;
	uParam0->f_1366[25] = 115943;
	uParam0->f_1330[26] = 115959;
	uParam0->f_1366[26] = 116892;
	uParam0->f_1330[27] = 116908;
	uParam0->f_1366[27] = 117368;
	uParam0->f_1330[28] = 117384;
	uParam0->f_1330[29] = 117462;
	uParam0->f_1330[30] = 118025;
	uParam0->f_1330[31] = 118689;
	uParam0->f_1330[32] = 119376;
	uParam0->f_1330[33] = 119816;
}

void func_281(var uParam0)
{
	uParam0->f_807 = -1;
}

void func_282(var uParam0)
{
	uParam0->f_805 = -1;
	uParam0->f_810 = 0;
}

void func_283(var uParam0)
{
	uParam0->f_793 = -1;
}

void func_284(var uParam0)
{
	uParam0->f_798 = -1;
}

void func_285(var uParam0)
{
	uParam0->f_817 = -1;
}

void func_286(var uParam0)
{
	uParam0->f_816 = -1;
}

void func_287(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_811[iVar0] = -1;
		iVar0++;
	}
}

void func_288(var uParam0, vector3 vParam1, var uParam4)
{
	if (uParam0->f_126 != 0)
	{
		return;
	}
	iVar0 = 2;
	if ((iVar0 + 31 / 32) < 1)
	{
		return;
	}
	iVar1 = 2;
	if ((iVar1 + 31 / 32) < 1)
	{
		return;
	}
	uParam0->f_126 = 0;
	uParam0->f_127 = -1;
	set_bit(&(uParam0->f_126), 0);
	uParam0->f_128 = -1;
	uParam0->f_129 = -1;
	uParam0->f_130 = 0f;
	iVar2 = 0;
	while (iVar2 < 1)
	{
		uParam0->f_122[iVar2] = 0;
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		uParam0->f_124[iVar2] = 0;
		iVar2++;
	}
	uParam0->f_175 = 120403;
	uParam0->f_176 = 120403;
	uParam0->f_135 = 0;
	uParam0->f_131 = { vParam1 };
	uParam0->f_134 = uParam4;
}

int func_289(var uParam0, int iParam1, vector3 vParam2, vector3 vParam5, float fParam8, float fParam9)
{
	if (uParam0->f_126 == 0)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 2)
	{
		return 0;
	}
	*(*uParam0)[iParam1] = { vParam2 };
	(*uParam0)[iParam1]->f_3 = { vParam5 };
	(*uParam0)[iParam1]->f_6 = fParam8;
	(*uParam0)[iParam1]->f_7 = fParam9;
	set_bit(uParam0->f_122[(iParam1 / 32)], (iParam1 % 32));
	return 1;
}

int func_290(var uParam0, int iParam1, vector3 vParam2, vector3 vParam5, float fParam8, int iParam9, int iParam10, int iParam11, float fParam12, float fParam13)
{
	if (uParam0->f_126 == 0)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 8)
	{
		return 0;
	}
	*uParam0->f_25[iParam1] = { vParam2 };
	uParam0->f_25[iParam1]->f_3 = { vParam5 };
	uParam0->f_25[iParam1]->f_6 = fParam8;
	uParam0->f_25[iParam1]->f_7 = iParam9;
	uParam0->f_25[iParam1]->f_8 = iParam10;
	uParam0->f_25[iParam1]->f_9 = iParam11;
	uParam0->f_25[iParam1]->f_10 = fParam12;
	uParam0->f_25[iParam1]->f_11 = fParam13;
	set_bit(uParam0->f_124[(iParam1 / 32)], (iParam1 % 32));
	return 1;
}

void func_291(var uParam0)
{
	uParam0->f_294 = 0;
	uParam0->f_293 = 0;
	uParam0->f_291 = 0;
	uParam0->f_439 = -1;
	uParam0->f_440 = -1;
	uParam0->f_441 = -1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_593(uParam0, iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_594(uParam0, iVar0);
		iVar0++;
	}
	func_595(uParam0);
}

void func_292(var uParam0)
{
	uParam0->f_442 = 0;
	uParam0->f_442.f_1 = 0;
	uParam0->f_442.f_2 = 0;
	uParam0->f_442.f_4 = 0;
	uParam0->f_442.f_3 = 0;
	uParam0->f_442.f_20 = 0;
	uParam0->f_442.f_21 = 0;
	uParam0->f_442.f_22 = 0;
	func_596(&(uParam0->f_442.f_5));
	uParam0->f_465 = 0;
	uParam0->f_465.f_1 = 0;
	uParam0->f_465.f_2 = 0;
	uParam0->f_465.f_18 = 0;
	uParam0->f_465.f_19 = 0;
	func_596(&(uParam0->f_465.f_3));
	uParam0->f_494 = 0;
	uParam0->f_495 = 0;
	uParam0->f_496 = 0;
	uParam0->f_497 = 0;
	uParam0->f_498 = 0;
	uParam0->f_499 = 0;
	uParam0->f_500 = 0;
	func_478(&(uParam0->f_501));
}

void func_293(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_173[iVar0] = 0;
		uParam0->f_180[iVar0] = 255;
		uParam0->f_187[iVar0] = 0;
		StringCopy(uParam0->f_194[iVar0], "", 128);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		func_597(iVar1, 2);
		iVar1++;
	}
}

void func_294(var uParam0)
{
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 64);
	uParam0->f_9 = -1;
	uParam0->f_10 = 0;
	func_598(&(uParam0->f_11));
	uParam0->f_51 = 1;
	uParam0->f_66 = 0;
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 0;
	func_599(uParam0);
	func_600(&(uParam0->f_416));
	func_600(&(uParam0->f_902));
	uParam0->f_1388 = 0;
	uParam0->f_1388.f_1 = 0;
	uParam0->f_1388.f_2 = -1;
	uParam0->f_1388.f_3 = 0;
	uParam0->f_1392 = 0;
	uParam0->f_1392.f_1 = 0;
	uParam0->f_1392.f_2 = -1;
	uParam0->f_1392.f_3 = 0;
	uParam0->f_1396 = -1;
	uParam0->f_1397 = 0;
	uParam0->f_1398 = 0;
	uParam0->f_1399 = 0;
	uParam0->f_1400 = 0;
	uParam0->f_1401 = 0;
	uParam0->f_1402 = 0;
	uParam0->f_1403 = 0;
	uParam0->f_1404 = 0;
	func_601(uParam0);
	uParam0->f_1451 = 0;
	uParam0->f_1452 = 0;
	uParam0->f_1453 = 0;
	uParam0->f_1454 = 0;
	uParam0->f_1455 = 0;
	uParam0->f_1456 = 2f;
	uParam0->f_1457 = 1f;
	uParam0->f_1458 = 20f;
	uParam0->f_1459 = 0.5f;
	uParam0->f_1460 = 2f;
	uParam0->f_1461 = 2f;
	uParam0->f_1462 = 1;
	uParam0->f_1463 = 200f;
	uParam0->f_1464 = 200f;
	uParam0->f_1465 = 0.45f;
	uParam0->f_1466 = 0.8f;
	uParam0->f_1467 = 25f;
	uParam0->f_1468 = 25f;
	uParam0->f_1469 = 0f;
	uParam0->f_1470 = 0.5f;
	uParam0->f_1471 = 0.75f;
	uParam0->f_1472 = 0.5f;
	uParam0->f_1474 = 0;
	uParam0->f_1476.f_6 = 0;
	uParam0->f_1476.f_7 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		uParam0->f_1476[iVar0] = -1;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		uParam0->f_1476.f_8[iVar1] = -1;
		iVar1++;
	}
	uParam0->f_1476.f_15 = 0;
	uParam0->f_1476.f_16 = 0;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		uParam0->f_1476.f_17[iVar2]->f_4 = 0;
		uParam0->f_1476.f_17[iVar2]->f_8 = 0;
		uParam0->f_1476.f_17[iVar2] = -1;
		uParam0->f_1476.f_17[iVar2]->f_2 = -1;
		uParam0->f_1476.f_17[iVar2]->f_5 = -1;
		uParam0->f_1476.f_17[iVar2]->f_6 = -1;
		uParam0->f_1476.f_17[iVar2]->f_7 = 0;
		iVar2++;
	}
}

int func_295(var uParam0, var uParam1)
{
	iVar0 = uParam0->f_152.f_9;
	switch (uParam0->f_152.f_1549)
	{
		case 0:
			if ((!func_210(&(uParam0->f_2841), iVar0) || !func_602(&(uParam0->f_2841), iVar0, 4)) || func_603(&(uParam0->f_2841), iVar0, 0))
			{
				func_199(&(uParam0->f_4244), &(uParam0->f_2841), 0);
				func_604(&(uParam0->f_152), 15);
				return 1;
			}
			break;
		case 15:
			if (!func_210(&(uParam0->f_2841), iVar0) || !func_602(&(uParam0->f_2841), iVar0, 4))
			{
				func_604(&(uParam0->f_152), 102);
				return 1;
			}
			break;
		case 102:
			if (!func_605(uParam0))
			{
				func_435(&(uParam0->f_152), 2, 0);
				return 1;
			}
			break;
		default:
			break;
	}
	return 0;
}

void func_296(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1405[iParam1] = iParam2;
}

int func_297(var uParam0, var uParam1)
{
	switch (uParam0->f_152.f_1549)
	{
		case 0:
			func_606(uParam0, uParam1);
			func_604(&(uParam0->f_152), 5);
			return 1;
		case 5:
			if (func_384(&(uParam0->f_152), -26793149, 1))
			{
				func_607(&(uParam0->f_152), -26793149, 1);
			}
			if (func_384(&(uParam0->f_152), -1773144867, 1))
			{
				func_607(&(uParam0->f_152), -1773144867, 1);
			}
			if (func_384(&(uParam0->f_152), -1442142035, 1))
			{
				func_435(&(uParam0->f_152), 3, 0);
				return 1;
			}
			else if (!func_384(&(uParam0->f_152), -26793149, 1) && !func_384(&(uParam0->f_152), -1773144867, 1))
			{
				if (func_608(uParam0, 1))
				{
					return 0;
				}
			}
			break;
		default:
			break;
	}
	return 0;
}

int func_298(var uParam0, var uParam1)
{
	bVar3 = true;
	if (uParam0->f_152.f_1549 != 0)
	{
		switch (uParam0->f_152.f_1630)
		{
			case 0:
				if (((((uParam0->f_152.f_1998 != uParam1->f_4 && uParam0->f_152.f_1998 != uParam1->f_5) || (uParam0->f_152.f_1998 == uParam1->f_4 && uParam0->f_152.f_1549 > 18)) || (uParam0->f_152.f_1998 == uParam1->f_5 && uParam0->f_152.f_1549 > 20)) && !is_bit_set(uParam0->f_152.f_2001, uParam0->f_152.f_1998)) && uParam0->f_152.f_1998 == uParam1->f_3)
				{
					if (func_210(&(uParam0->f_2841), uParam0->f_152.f_1998) && func_609(&(uParam0->f_2841), uParam0->f_152.f_1998, 1))
					{
						if ((func_610(&(uParam0->f_2841), uParam0->f_152.f_1998, 0, 0) || func_610(&(uParam0->f_2841), uParam0->f_152.f_1998, 1, 0)) && uParam0->f_152.f_9 == (uParam0->f_152.f_1998 + 1 % 6))
						{
							iVar4 = func_611(&(uParam0->f_2841), uParam0->f_152.f_1998, 2);
						}
						else
						{
							iVar4 = 6;
						}
						func_613(&(uParam0->f_2841), uParam0->f_152.f_1998, uParam0->f_152.f_9, func_612(uParam1), 0, iVar4);
						func_614(&(uParam0->f_152), 1);
					}
				}
				break;
			case 1:
				if (!func_210(&(uParam0->f_2841), uParam0->f_152.f_1998) || !func_615(&(uParam0->f_2841), uParam0->f_152.f_1998, 7))
				{
					func_614(&(uParam0->f_152), 2);
				}
				else if (func_210(&(uParam0->f_2841), uParam0->f_152.f_1998) && func_603(&(uParam0->f_2841), uParam0->f_152.f_1998, 6))
				{
					func_616(uParam0, uParam0->f_152.f_1998, 2, 3, -1);
					func_617(&(uParam0->f_2841), uParam0->f_152.f_1998, 6);
				}
				break;
			case 2:
				break;
			default:
				break;
		}
	}
	switch (uParam0->f_152.f_1549)
	{
		case 0:
			if (func_384(&(uParam0->f_152), -1442142035, 1))
			{
				uParam0->f_152.f_2001 = 0;
				iVar0 = 0;
				while (iVar0 < 6)
				{
					if (((func_203(&(uParam0->f_152.f_902), iVar0) && func_618(&(uParam0->f_152.f_902), iVar0) > 0) && uParam0->f_152.f_902.f_4 != iVar0) && uParam0->f_152.f_902.f_5 != iVar0)
					{
						set_bit(&(uParam0->f_152.f_2001), iVar0);
					}
					iVar0++;
				}
				iVar1 = func_612(&(uParam0->f_152.f_902));
				bVar2 = (!uParam0->f_152.f_1997 && uParam0->f_152.f_1998 != uParam0->f_152.f_902.f_3);
				if (((((func_619(&(uParam0->f_152), uParam0->f_152.f_1998, 1) && (func_619(&(uParam0->f_152), uParam0->f_152.f_902.f_3, 1) || !bVar2)) && func_619(&(uParam0->f_152), uParam0->f_152.f_902.f_4, 1)) && func_619(&(uParam0->f_152), uParam0->f_152.f_902.f_5, 1)) && func_620(&(uParam0->f_152), uParam0->f_152.f_2001, 1)) && func_620(&(uParam0->f_152), iVar1, 1))
				{
					func_621(&(uParam0->f_152), uParam0->f_152.f_2001, 1);
					func_622(&(uParam0->f_152), uParam0->f_152.f_1998, 0);
					func_622(&(uParam0->f_152), uParam0->f_152.f_902.f_4, 0);
					func_622(&(uParam0->f_152), uParam0->f_152.f_902.f_5, 0);
					if (bVar2)
					{
						func_622(&(uParam0->f_152), uParam0->f_152.f_902.f_3, 0);
					}
					func_623(uParam0);
					func_607(&(uParam0->f_152), -1442142035, 1);
					func_614(&(uParam0->f_152), 0);
					if ((func_203(uParam1, uParam0->f_152.f_9) && !func_624(uParam1, uParam0->f_152.f_9)) && func_625(uParam0, uParam0->f_152.f_9) == 0)
					{
						func_626(&(uParam0->f_2337), "MGPKR_MSG_SITTING_OUT", 0);
					}
					func_627(uParam0, uParam1);
					func_628(&(uParam0->f_152), uParam1);
					func_207(&(uParam0->f_152));
					if (uParam0->f_152.f_1671.f_126 == 1)
					{
						if (!func_187(&(uParam0->f_152), 4))
						{
							func_629(uParam0, &(uParam0->f_152), 1, 1, 1);
						}
					}
					func_630(uParam0, uParam1);
					func_631(&(uParam0->f_2841));
					if (!func_632(&(uParam0->f_2841)) || func_633(&(uParam0->f_2841)) != uParam0->f_152.f_1998)
					{
						func_634(&(uParam0->f_2841), uParam0->f_152.f_1998, 0);
					}
					iVar0 = 0;
					while (iVar0 < 6)
					{
						if (func_624(uParam1, iVar0))
						{
							if (func_636(func_635(uParam1, iVar0, 0)) && func_636(func_635(uParam1, iVar0, 1)))
							{
								func_637(&(uParam0->f_2841), iVar0, func_635(uParam1, iVar0, 0), func_635(uParam1, iVar0, 1), 1);
							}
						}
						iVar0++;
					}
					if (bVar2)
					{
						func_604(&(uParam0->f_152), 87);
						return 1;
					}
					else
					{
						func_604(&(uParam0->f_152), 17);
						return 1;
					}
				}
			}
			else if (func_608(uParam0, 1))
			{
				return 0;
			}
			break;
		case 87:
			if (func_210(&(uParam0->f_2841), uParam0->f_152.f_1998) && func_609(&(uParam0->f_2841), uParam0->f_152.f_1998, 1))
			{
				func_638(&(uParam0->f_2841), uParam0->f_152.f_1998, uParam1->f_3);
				func_604(&(uParam0->f_152), 88);
			}
			break;
		case 88:
			if (!func_210(&(uParam0->f_2841), uParam0->f_152.f_1998) || !func_615(&(uParam0->f_2841), uParam0->f_152.f_1998, 21))
			{
				func_604(&(uParam0->f_152), 89);
				return 1;
			}
			break;
		case 89:
			if (func_210(&(uParam0->f_2841), uParam1->f_3) && func_609(&(uParam0->f_2841), uParam1->f_3, 1))
			{
				func_639(&(uParam0->f_2841), uParam1->f_3);
				func_604(&(uParam0->f_152), 90);
			}
			break;
		case 90:
			if (!func_210(&(uParam0->f_2841), uParam1->f_3) || !func_615(&(uParam0->f_2841), uParam1->f_3, 22))
			{
				if (((!is_bit_set(uParam0->f_152.f_2001, uParam0->f_152.f_1998) && uParam0->f_152.f_1998 != uParam1->f_3) && uParam0->f_152.f_1998 != uParam1->f_4) && uParam0->f_152.f_1998 != uParam1->f_5)
				{
					func_640(&(uParam0->f_152), uParam0->f_152.f_1998, 1);
				}
				func_437(&(uParam0->f_152), uParam1->f_3);
				func_604(&(uParam0->f_152), 17);
				return 1;
			}
			break;
		case 17:
			if (func_210(&(uParam0->f_2841), uParam1->f_4) && func_609(&(uParam0->f_2841), uParam1->f_4, 1))
			{
				func_641(&(uParam0->f_2841), uParam1->f_4, uParam1->f_9, 1);
				func_642(uParam0, uParam1->f_4);
				func_604(&(uParam0->f_152), 18);
			}
			break;
		case 18:
			if (!func_210(&(uParam0->f_2841), uParam1->f_4) || !func_615(&(uParam0->f_2841), uParam1->f_4, 13))
			{
				func_643(uParam0, uParam1->f_4);
				if (uParam1->f_4 != uParam0->f_152.f_1998)
				{
					func_640(&(uParam0->f_152), uParam1->f_4, 0);
				}
				func_604(&(uParam0->f_152), 19);
				return 1;
			}
			break;
		case 19:
			if (func_210(&(uParam0->f_2841), uParam1->f_5) && func_609(&(uParam0->f_2841), uParam1->f_5, 1))
			{
				func_641(&(uParam0->f_2841), uParam1->f_5, uParam1->f_10, 1);
				func_642(uParam0, uParam1->f_5);
				func_604(&(uParam0->f_152), 20);
			}
			break;
		case 20:
			if (!func_210(&(uParam0->f_2841), uParam1->f_5) || !func_615(&(uParam0->f_2841), uParam1->f_5, 13))
			{
				func_643(uParam0, uParam1->f_5);
				if (uParam1->f_5 != uParam0->f_152.f_1998)
				{
					func_640(&(uParam0->f_152), uParam1->f_5, 0);
				}
				func_604(&(uParam0->f_152), 21);
				return 1;
			}
			break;
		case 21:
			uParam0->f_152.f_2047 = func_644(uParam1->f_3, uParam0->f_152.f_2001);
			if (func_203(uParam1, uParam0->f_152.f_2047))
			{
				if (func_210(&(uParam0->f_2841), uParam0->f_152.f_2047) && func_609(&(uParam0->f_2841), uParam0->f_152.f_2047, 1))
				{
					func_641(&(uParam0->f_2841), uParam0->f_152.f_2047, func_618(uParam1, uParam0->f_152.f_2047), 1);
					func_642(uParam0, uParam0->f_152.f_2047);
					func_604(&(uParam0->f_152), 22);
					return 1;
				}
			}
			else
			{
				func_604(&(uParam0->f_152), 25);
				return 1;
			}
			break;
		case 22:
			if (!func_210(&(uParam0->f_2841), uParam0->f_152.f_2047) || !func_615(&(uParam0->f_2841), uParam0->f_152.f_2047, 13))
			{
				func_643(uParam0, uParam0->f_152.f_2047);
				clear_bit(&(uParam0->f_152.f_2001), uParam0->f_152.f_2047);
				if (uParam0->f_152.f_2047 != uParam0->f_152.f_1998)
				{
					func_640(&(uParam0->f_152), uParam0->f_152.f_2047, 0);
				}
				func_604(&(uParam0->f_152), 21);
				return 1;
			}
			break;
		case 25:
			if (uParam0->f_152.f_1630 != 0)
			{
				iVar0 = 0;
				while (iVar0 < 6)
				{
					if (iVar0 != uParam0->f_152.f_1998 && func_440(uParam1, iVar0))
					{
						if (func_455(&(uParam0->f_2841), iVar0) != 2)
						{
							bVar3 = false;
							if ((!func_210(&(uParam0->f_2841), uParam0->f_152.f_1998) || !func_615(&(uParam0->f_2841), uParam0->f_152.f_1998, 7)) || func_603(&(uParam0->f_2841), uParam0->f_152.f_1998, (0 + iVar0)))
							{
								if (func_609(&(uParam0->f_2841), iVar0, 1))
								{
									if ((func_610(&(uParam0->f_2841), iVar0, 0, 1) || func_610(&(uParam0->f_2841), iVar0, 1, 1)) && uParam0->f_152.f_9 == (iVar0 + 1 % 6))
									{
										iVar4 = func_611(&(uParam0->f_2841), iVar0, 2);
										func_645(&(uParam0->f_2841), iVar0, iVar4);
									}
									else
									{
										func_646(&(uParam0->f_2841), iVar0, 0);
										if (func_187(&(uParam0->f_152), 1))
										{
											if (iVar0 == uParam0->f_152.f_9)
											{
												if (func_647(uParam1, uParam0->f_152.f_9, &(uParam0->f_152.f_11)))
												{
													func_648(&(uParam0->f_2337), uParam1, uParam0->f_152.f_9, &(uParam0->f_152.f_11), 0);
												}
											}
										}
										func_649(&(uParam0->f_152), &(uParam0->f_152.f_1671), &(uParam0->f_2841), uParam1, iVar0);
									}
								}
							}
						}
					}
					iVar0++;
				}
				if (bVar3)
				{
					if (uParam0->f_152.f_1630 == 2)
					{
						if (func_187(&(uParam0->f_152), 1) && func_203(uParam1, uParam0->f_152.f_9))
						{
							if (func_647(uParam1, uParam0->f_152.f_9, &(uParam0->f_152.f_11)))
							{
								func_648(&(uParam0->f_2337), uParam1, uParam0->f_152.f_9, &(uParam0->f_152.f_11), 0);
							}
						}
						func_650(&(uParam0->f_152));
						func_604(&(uParam0->f_152), 28);
						return 1;
					}
				}
			}
			break;
		case 28:
			func_651(&(uParam0->f_152));
			func_435(&(uParam0->f_152), 4, 0);
			return 1;
		default:
			break;
	}
	return 0;
}

int func_299(var uParam0, var uParam1)
{
	switch (uParam0->f_152.f_1549)
	{
		case 0:
			uParam0->f_152.f_1662 = 0;
			func_652(&(uParam0->f_152));
			func_604(&(uParam0->f_152), 7);
			return 1;
		case 2:
			uParam0->f_152.f_1662 = 0;
			func_652(&(uParam0->f_152));
			func_604(&(uParam0->f_152), 29);
			return 1;
		case 4:
			if (func_653(uParam0, &(uParam0->f_152)))
			{
				func_654(uParam0);
				func_604(&(uParam0->f_152), 29);
				return 1;
			}
			break;
		case 7:
			if (func_384(&(uParam0->f_152), -441318505, 1))
			{
				func_607(&(uParam0->f_152), -441318505, 1);
				func_604(&(uParam0->f_152), 29);
				return 1;
			}
			else if (func_384(&(uParam0->f_152), 981015204, 1))
			{
				func_604(&(uParam0->f_152), 41);
				return 1;
			}
			else if (func_608(uParam0, 1))
			{
				return 0;
			}
			break;
		case 29:
			if (func_655(uParam0, 0) && func_656(&(uParam0->f_152), uParam1->f_6))
			{
				if (func_657(uParam0))
				{
					func_658(&(uParam0->f_152));
					func_604(&(uParam0->f_152), 4);
					return 1;
				}
			}
			func_659(uParam0, uParam1);
			if (func_656(&(uParam0->f_152), uParam1->f_6))
			{
				func_660(uParam0, uParam1);
			}
			func_661(&(uParam0->f_152));
			uParam0->f_152.f_1634 = 0;
			uParam0->f_152.f_1663 = 0;
			func_268(&(uParam0->f_152.f_1644));
			func_361(&(uParam0->f_152.f_1647), -get_random_float_in_range(0.3f, 1f));
			uParam0->f_152.f_1650 = -1;
			if (uParam0->f_152.f_9 == uParam1->f_6)
			{
				uParam0->f_152.f_1662++;
			}
			func_604(&(uParam0->f_152), 30);
			return 1;
		case 30:
			if (!uParam0->f_152.f_1634)
			{
				if (uParam0->f_152.f_1633)
				{
					func_662(uParam0, &(uParam0->f_152), uParam1, &Var0);
				}
				if (Var0 != 0)
				{
					switch (Var0)
					{
						case 4:
							bVar2 = func_663(&(uParam0->f_152), uParam1->f_6);
							break;
						case 3:
							bVar2 = func_664(&(uParam0->f_152), uParam1->f_6);
							break;
						case 2:
							bVar2 = func_665(&(uParam0->f_152), uParam1->f_6, Var0.f_1);
							break;
						case 5:
							bVar2 = func_666(&(uParam0->f_152), uParam1->f_6);
							break;
					}
					if (bVar2)
					{
						func_667(uParam0, uParam1);
						uParam0->f_152.f_1634 = 1;
					}
				}
			}
			func_668(uParam0, &(uParam0->f_152));
			if (func_127(&(uParam0->f_152.f_1647)) > 0f)
			{
				iVar5 = func_616(uParam0, uParam1->f_6, 1, 1, uParam0->f_152.f_1650);
				if (iVar5 != -1)
				{
					uParam0->f_152.f_1650 = iVar5;
					func_361(&(uParam0->f_152.f_1647), -get_random_float_in_range(1.75f, 4.75f));
				}
				else if (func_127(&(uParam0->f_152.f_1647)) > 2.5f)
				{
					iVar5 = func_616(uParam0, uParam1->f_6, 1, 1, -1);
					if (iVar5 != -1)
					{
						uParam0->f_152.f_1650 = iVar5;
						func_361(&(uParam0->f_152.f_1647), -get_random_float_in_range(1.75f, 4.75f));
					}
				}
			}
			if (uParam0->f_152.f_1634 && func_669(&(uParam0->f_152), 2))
			{
				func_667(uParam0, uParam1);
				func_604(&(uParam0->f_152), 31);
				return 1;
			}
			else if (func_179(&(uParam0->f_152), -1267385353, 1))
			{
				func_667(uParam0, uParam1);
				func_182(&(uParam0->f_152), 1, 0, 0, 0);
				func_604(&(uParam0->f_152), 31);
				return 1;
			}
			else if (func_384(&(uParam0->f_152), 402903974, 1))
			{
				func_667(uParam0, uParam1);
				func_670(uParam0, uParam1);
				func_607(&(uParam0->f_152), 402903974, 1);
				func_604(&(uParam0->f_152), 7);
				return 1;
			}
			else if (func_384(&(uParam0->f_152), -1766937362, 1))
			{
				func_667(uParam0, uParam1);
				func_604(&(uParam0->f_152), 32);
				return 1;
			}
			else if (func_608(uParam0, 1))
			{
				return 0;
			}
			break;
		case 31:
			if (func_101(&(uParam0->f_152.f_1550), 1.5f))
			{
				func_604(&(uParam0->f_152), 29);
				return 1;
			}
			break;
		case 32:
			if (func_384(&(uParam0->f_152), -1766937362, 1))
			{
				if (func_619(&(uParam0->f_152), uParam0->f_152.f_902.f_6, 1))
				{
					func_622(&(uParam0->f_152), uParam0->f_152.f_902.f_6, 1);
					func_607(&(uParam0->f_152), -1766937362, 1);
					func_604(&(uParam0->f_152), 33);
					return 1;
				}
			}
			else if (func_608(uParam0, 1))
			{
				return 0;
			}
			break;
		case 33:
			if (func_187(&(uParam0->f_152), 1) && func_203(uParam1, uParam0->f_152.f_9))
			{
				if (func_671(uParam1, uParam0->f_152.f_9, &(uParam0->f_152.f_11)))
				{
					func_648(&(uParam0->f_2337), uParam1, uParam0->f_152.f_9, &(uParam0->f_152.f_11), 0);
				}
			}
			func_616(uParam0, uParam1->f_6, 0, 6, -1);
			switch (uParam0->f_152.f_1397)
			{
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
					func_604(&(uParam0->f_152), 35);
					return 1;
				case 6:
					func_604(&(uParam0->f_152), 38);
					return 1;
				default:
					break;
			}
			break;
		case 34:
			if ((func_656(&(uParam0->f_152), uParam1->f_6) || func_101(&(uParam0->f_152.f_1664), uParam0->f_152.f_1667)) || uParam0->f_2841.f_40)
			{
				if (!func_210(&(uParam0->f_2841), uParam1->f_6) || func_609(&(uParam0->f_2841), uParam1->f_6, 1))
				{
					func_672(&(uParam0->f_152), &(uParam0->f_152.f_1671), uParam1, uParam1->f_6);
					switch (&uParam0->f_152.f_1671.f_79[0])
					{
						case 2:
							func_673(&(uParam0->f_152), &(uParam0->f_152.f_1671), &(uParam0->f_2841), uParam1, uParam1->f_6);
							break;
						case 4:
							func_674(&(uParam0->f_152), &(uParam0->f_152.f_1671), &(uParam0->f_2841), uParam1, uParam1->f_6);
							break;
						case 3:
							func_675(&(uParam0->f_152), &(uParam0->f_152.f_1671), &(uParam0->f_2841), uParam1, uParam1->f_6);
							break;
					}
					func_604(&(uParam0->f_152), 35);
					return 1;
				}
			}
			break;
		case 35:
			if (func_210(&(uParam0->f_2841), uParam1->f_6) && func_609(&(uParam0->f_2841), uParam1->f_6, 1))
			{
				if (uParam0->f_152.f_1397 == 1)
				{
					func_676(&(uParam0->f_2841), uParam1->f_6);
				}
				else if (uParam0->f_152.f_1397 == 5 && func_677(&(uParam0->f_2841), uParam1->f_6))
				{
					func_678(&(uParam0->f_2841), uParam1->f_6);
				}
				else
				{
					func_641(&(uParam0->f_2841), uParam1->f_6, uParam0->f_152.f_1398, 0);
				}
				func_679(uParam0, uParam1);
				func_604(&(uParam0->f_152), 36);
			}
			break;
		case 36:
			if (!func_210(&(uParam0->f_2841), uParam1->f_6) || ((!func_615(&(uParam0->f_2841), uParam1->f_6, 13) && !func_615(&(uParam0->f_2841), uParam1->f_6, 15)) && !func_615(&(uParam0->f_2841), uParam1->f_6, 14)))
			{
				switch (&uParam0->f_152.f_1671.f_79[0])
				{
					case 2:
						func_680(uParam0, &(uParam0->f_152), &(uParam0->f_152.f_1671), &(uParam0->f_152.f_416));
						break;
					case 4:
						func_681(uParam0, &(uParam0->f_152), &(uParam0->f_152.f_1671), &(uParam0->f_152.f_416));
						break;
					case 3:
						func_682(uParam0, &(uParam0->f_152), &(uParam0->f_152.f_1671), &(uParam0->f_152.f_416));
						break;
				}
				func_604(&(uParam0->f_152), 37);
				return 1;
			}
			break;
		case 37:
			func_650(&(uParam0->f_152));
			func_604(&(uParam0->f_152), 8);
			return 1;
		case 38:
			if (func_210(&(uParam0->f_2841), uParam1->f_6) && func_609(&(uParam0->f_2841), uParam1->f_6, 1))
			{
				func_683(&(uParam0->f_2841), uParam1->f_6, uParam0->f_152.f_1998, 1);
				func_672(&(uParam0->f_152), &(uParam0->f_152.f_1671), uParam1, uParam1->f_6);
				func_684(&(uParam0->f_152), &(uParam0->f_152.f_1671), &(uParam0->f_2841), uParam1, uParam1->f_6);
				func_679(uParam0, uParam1);
				func_604(&(uParam0->f_152), 39);
			}
			break;
		case 39:
			if (!func_210(&(uParam0->f_2841), uParam1->f_6) || !func_615(&(uParam0->f_2841), uParam1->f_6, 17))
			{
				switch (&uParam0->f_152.f_1671.f_79[0])
				{
					case 5:
						func_685(uParam0, &(uParam0->f_152), &(uParam0->f_152.f_1671), &(uParam0->f_152.f_416));
						break;
				}
				func_604(&(uParam0->f_152), 40);
				return 1;
			}
			break;
		case 40:
			func_686(uParam0, uParam1);
			func_650(&(uParam0->f_152));
			func_604(&(uParam0->f_152), 8);
			return 1;
		case 8:
			if (func_384(&(uParam0->f_152), 402903974, 1))
			{
				func_670(uParam0, uParam1);
				func_607(&(uParam0->f_152), 402903974, 1);
				func_604(&(uParam0->f_152), 7);
				return 1;
			}
			else if (func_608(uParam0, 1))
			{
				return 0;
			}
			break;
		case 41:
			func_687(&(uParam0->f_2337));
			func_688(uParam0, &(uParam0->f_152.f_902));
			iVar3 = 0;
			while (iVar3 < 6)
			{
				if ((func_203(uParam1, iVar3) && func_624(&(uParam0->f_152.f_902), iVar3)) && func_204(&(uParam0->f_152.f_902), iVar3) > func_204(uParam1, iVar3))
				{
					bVar4 = (func_689(&(uParam0->f_152.f_902)) || uParam1->f_2 == 3);
					func_690(uParam0, iVar3, (func_204(&(uParam0->f_152.f_902), iVar3) - func_204(uParam1, iVar3)));
					func_692(&(uParam0->f_2841), iVar3, func_204(&(uParam0->f_152.f_902), iVar3), func_691(&(uParam0->f_152.f_902), iVar3), bVar4, 1);
					func_604(&(uParam0->f_152), 42);
					return 1;
				}
				iVar3++;
			}
			func_604(&(uParam0->f_152), 43);
			return 1;
		case 42:
			func_604(&(uParam0->f_152), 43);
			return 1;
		case 43:
			if (func_384(&(uParam0->f_152), 981015204, 1))
			{
				if (func_689(&(uParam0->f_152.f_902)))
				{
					func_435(&(uParam0->f_152), 6, 0);
					return 1;
				}
				else
				{
					func_607(&(uParam0->f_152), 981015204, 1);
					func_604(&(uParam0->f_152), 6);
					return 1;
				}
			}
			else if (func_608(uParam0, 1))
			{
				return 0;
			}
			break;
		case 6:
			if (func_384(&(uParam0->f_152), -1179646469, 1))
			{
				func_435(&(uParam0->f_152), 8, 0);
				return 1;
			}
			else if (func_384(&(uParam0->f_152), -1442142035, 1))
			{
				if (func_693(&(uParam0->f_152.f_902)))
				{
					func_435(&(uParam0->f_152), 9, 0);
				}
				else
				{
					func_435(&(uParam0->f_152), 5, 0);
				}
				return 1;
			}
			else if (func_608(uParam0, 1))
			{
				return 0;
			}
			break;
		default:
			break;
	}
	return 0;
}

int func_300(var uParam0, var uParam1)
{
	switch (uParam0->f_152.f_1549)
	{
		case 0:
			if (func_384(&(uParam0->f_152), -1442142035, 1))
			{
				if (func_619(&(uParam0->f_152), uParam0->f_152.f_1998, 1))
				{
					func_622(&(uParam0->f_152), uParam0->f_152.f_1998, 1);
					func_607(&(uParam0->f_152), -1442142035, 1);
					iVar0 = 0;
					while (iVar0 < uParam1->f_15.f_23)
					{
						if (!func_694(&(uParam0->f_2841), iVar0))
						{
							func_695(&(uParam0->f_2841), iVar0, *uParam1->f_15[iVar0], 1);
						}
						iVar0++;
					}
					func_604(&(uParam0->f_152), 23);
					return 1;
				}
			}
			else if (func_608(uParam0, 1))
			{
				return 0;
			}
			break;
		case 23:
			if (func_210(&(uParam0->f_2841), uParam0->f_152.f_1998) && func_609(&(uParam0->f_2841), uParam0->f_152.f_1998, 1))
			{
				func_696(&(uParam0->f_2841), uParam0->f_152.f_1998, uParam1->f_2, 0);
				func_616(uParam0, uParam0->f_152.f_1998, 3, 6, -1);
				func_604(&(uParam0->f_152), 25);
			}
			break;
		case 25:
			if (func_101(&(uParam0->f_152.f_1550), 2.5f) || uParam0->f_2841.f_40)
			{
				func_697(uParam0, uParam1);
				func_604(&(uParam0->f_152), 26);
				return 1;
			}
			break;
		case 26:
			if (!func_210(&(uParam0->f_2841), uParam0->f_152.f_1998) || !func_615(&(uParam0->f_2841), uParam0->f_152.f_1998, 8))
			{
				func_698(uParam0, uParam1);
				if (func_187(&(uParam0->f_152), 1) && func_203(uParam1, uParam0->f_152.f_9))
				{
					if (func_699(uParam1, uParam0->f_152.f_9, &(uParam0->f_152.f_11)))
					{
						func_648(&(uParam0->f_2337), uParam1, uParam0->f_152.f_9, &(uParam0->f_152.f_11), 0);
					}
				}
				func_650(&(uParam0->f_152));
				func_604(&(uParam0->f_152), 27);
				return 1;
			}
			break;
		case 27:
			if (func_101(&(uParam0->f_152.f_1550), 2f) || uParam0->f_2841.f_40)
			{
				func_435(&(uParam0->f_152), 4, 0);
				return 1;
			}
			break;
		default:
			break;
	}
	return 0;
}

int func_301(var uParam0, var uParam1)
{
	switch (uParam0->f_152.f_1549)
	{
		case 0:
			if (func_384(&(uParam0->f_152), 981015204, 1))
			{
				iVar2 = func_700(&(uParam0->f_152.f_902));
				if (func_620(&(uParam0->f_152), iVar2, 1))
				{
					func_621(&(uParam0->f_152), iVar2, 1);
					func_607(&(uParam0->f_152), 981015204, 1);
					func_701(uParam0, uParam1, 1);
					iVar0 = 0;
					while (iVar0 < 6)
					{
						if (func_702(uParam1, iVar0))
						{
							if (!func_703(&(uParam0->f_2841), iVar0))
							{
								func_637(&(uParam0->f_2841), iVar0, func_635(uParam1, iVar0, 0), func_635(uParam1, iVar0, 1), 0);
							}
						}
						iVar0++;
					}
					uParam0->f_152.f_2050 = uParam1->f_2;
					func_704(uParam0);
					if (func_705(uParam1, &(uParam0->f_152.f_2047), 2))
					{
						func_604(&(uParam0->f_152), 12);
					}
					else
					{
						func_604(&(uParam0->f_152), 51);
					}
					return 1;
				}
			}
			else if (func_608(uParam0, 1))
			{
				return 0;
			}
			break;
		case 12:
			func_604(&(uParam0->f_152), 44);
			return 1;
		case 44:
			if (func_127(&(uParam0->f_152.f_1550)) <= uParam0->f_152.f_1461 && !uParam0->f_2841.f_40)
			{
				return 0;
			}
			if (func_210(&(uParam0->f_2841), uParam0->f_152.f_2047) && func_609(&(uParam0->f_2841), uParam0->f_152.f_2047, 1))
			{
				func_706(uParam0, uParam0->f_152.f_2047);
				if (uParam0->f_152.f_2057)
				{
					func_707(&(uParam0->f_2841), uParam0->f_152.f_2047, 0);
				}
				else
				{
					func_707(&(uParam0->f_2841), uParam0->f_152.f_2047, 1);
				}
				func_604(&(uParam0->f_152), 45);
			}
			break;
		case 45:
			if (func_101(&(uParam0->f_152.f_1550), 0.2f) || uParam0->f_2841.f_40)
			{
				func_708(&(uParam0->f_152), &(uParam0->f_152.f_1671), uParam1, uParam0->f_152.f_2047, 0);
				func_709(&(uParam0->f_152), &(uParam0->f_152.f_1671), &(uParam0->f_2841), uParam1, uParam0->f_152.f_2047);
				func_616(uParam0, uParam0->f_152.f_2047, 5, 6, -1);
				func_604(&(uParam0->f_152), 46);
			}
			break;
		case 46:
			if (func_101(&(uParam0->f_152.f_1550), 0.4f) || uParam0->f_2841.f_40)
			{
				func_710(uParam0, uParam1);
				func_604(&(uParam0->f_152), 47);
			}
			break;
		case 47:
			if (((!func_210(&(uParam0->f_2841), uParam0->f_152.f_2047) || !func_615(&(uParam0->f_2841), uParam0->f_152.f_2047, 16)) || func_101(&(uParam0->f_152.f_1550), 0.35f)) || uParam0->f_2841.f_40)
			{
				if (uParam0->f_152.f_2058)
				{
					func_604(&(uParam0->f_152), 50);
					return 1;
				}
				else
				{
					func_604(&(uParam0->f_152), 48);
					return 1;
				}
			}
			break;
		case 50:
			if (!func_210(&(uParam0->f_2841), uParam0->f_152.f_2055) || !func_702(uParam1, uParam0->f_152.f_2055))
			{
				func_604(&(uParam0->f_152), 48);
				return 1;
			}
			else if (func_609(&(uParam0->f_2841), uParam0->f_152.f_2055, 1))
			{
				func_712(&(uParam0->f_2841), uParam0->f_152.f_2055, 1, func_711(&(uParam0->f_152), uParam0->f_152.f_2055));
				func_713(&(uParam0->f_152), &(uParam0->f_152.f_1671), &(uParam0->f_2841), uParam1, uParam0->f_152.f_2055);
				func_604(&(uParam0->f_152), 48);
				return 1;
			}
			break;
		case 48:
			if (!func_210(&(uParam0->f_2841), uParam0->f_152.f_2047) || !func_615(&(uParam0->f_2841), uParam0->f_152.f_2047, 16))
			{
				func_714(uParam0);
				func_604(&(uParam0->f_152), 49);
				return 1;
			}
			break;
		case 49:
			func_715(uParam0);
			func_640(&(uParam0->f_152), uParam0->f_152.f_2047, 1);
			if (func_716(uParam1, &(uParam0->f_152.f_2047), 2, 0))
			{
				func_604(&(uParam0->f_152), 44);
				return 1;
			}
			else
			{
				func_604(&(uParam0->f_152), 51);
				return 1;
			}
			break;
		case 51:
			func_650(&(uParam0->f_152));
			func_604(&(uParam0->f_152), 11);
			return 1;
		case 11:
			if (func_384(&(uParam0->f_152), -1442142035, 1))
			{
				func_607(&(uParam0->f_152), -1442142035, 1);
				return 1;
			}
			else if (func_384(&(uParam0->f_152), 981015204, 1))
			{
				func_607(&(uParam0->f_152), 981015204, 1);
				return 1;
			}
			else if (func_384(&(uParam0->f_152), -1179646469, 1))
			{
				func_604(&(uParam0->f_152), 71);
				return 1;
			}
			else if (func_608(uParam0, 1))
			{
				return 0;
			}
			break;
		case 71:
			if (func_384(&(uParam0->f_152), -1179646469, 1))
			{
				iVar3 = func_717(&(uParam0->f_152.f_902), 0);
				if (func_620(&(uParam0->f_152), iVar3, 1) && func_619(&(uParam0->f_152), uParam0->f_152.f_1998, 1))
				{
					func_621(&(uParam0->f_152), iVar3, 1);
					func_622(&(uParam0->f_152), uParam0->f_152.f_1998, 0);
					func_607(&(uParam0->f_152), -1179646469, 1);
					func_718(uParam0, uParam1, uParam0->f_152.f_2050);
					func_719(&(uParam0->f_152), uParam1, uParam0->f_152.f_2050);
					func_720(&(uParam0->f_152.f_2050));
					iVar1 = 0;
					while (iVar1 < uParam1->f_15.f_23)
					{
						if (!func_694(&(uParam0->f_2841), iVar1))
						{
							func_695(&(uParam0->f_2841), iVar1, *uParam1->f_15[iVar1], 1);
						}
						iVar1++;
					}
					func_604(&(uParam0->f_152), 23);
					return 1;
				}
			}
			else if (func_608(uParam0, 1))
			{
				return 0;
			}
			break;
		case 23:
			if (func_210(&(uParam0->f_2841), uParam0->f_152.f_1998) && func_609(&(uParam0->f_2841), uParam0->f_152.f_1998, 1))
			{
				func_696(&(uParam0->f_2841), uParam0->f_152.f_1998, uParam0->f_152.f_2050, 1);
				func_604(&(uParam0->f_152), 24);
				return 1;
			}
			break;
		case 24:
			func_604(&(uParam0->f_152), 25);
			return 1;
		case 25:
			if (((!func_210(&(uParam0->f_2841), uParam0->f_152.f_1998) || !func_602(&(uParam0->f_2841), uParam0->f_152.f_1998, 8)) || func_721(&(uParam0->f_2841), uParam0->f_152.f_1998) >= 2.5f) || uParam0->f_2841.f_40)
			{
				func_604(&(uParam0->f_152), 26);
				return 1;
			}
			break;
		case 26:
			if ((func_210(&(uParam0->f_2841), uParam0->f_152.f_1998) && func_615(&(uParam0->f_2841), uParam0->f_152.f_1998, 8)) && !func_603(&(uParam0->f_2841), uParam0->f_152.f_1998, 2))
			{
				switch (uParam0->f_152.f_2050)
				{
					case 1:
						if (func_603(&(uParam0->f_2841), uParam0->f_152.f_1998, 0))
						{
							func_718(uParam0, uParam1, uParam0->f_152.f_2050);
							func_722(&(uParam0->f_152), &(uParam0->f_152.f_1671), uParam1);
							func_723(&(uParam0->f_152), uParam1, uParam0->f_152.f_2050);
							func_720(&(uParam0->f_152.f_2050));
						}
						break;
					case 2:
						if (func_603(&(uParam0->f_2841), uParam0->f_152.f_1998, 1))
						{
							func_718(uParam0, uParam1, uParam0->f_152.f_2050);
							func_724(&(uParam0->f_152), &(uParam0->f_152.f_1671), uParam1);
							func_723(&(uParam0->f_152), uParam1, uParam0->f_152.f_2050);
							func_720(&(uParam0->f_152.f_2050));
						}
						break;
				}
			}
			else
			{
				func_725(uParam0, uParam1);
				func_726(&(uParam0->f_152), &(uParam0->f_152.f_1671), uParam1);
				func_723(&(uParam0->f_152), uParam1, 3);
				func_482(&(uParam0->f_152), 1);
				func_604(&(uParam0->f_152), 27);
				return 1;
			}
			break;
		case 27:
			if (func_101(&(uParam0->f_152.f_1550), 1f) || uParam0->f_2841.f_40)
			{
				if (!func_727(uParam1, uParam0->f_152.f_1998))
				{
					func_640(&(uParam0->f_152), uParam0->f_152.f_1998, 1);
				}
				func_604(&(uParam0->f_152), 55);
				return 1;
			}
			break;
		case 55:
			if (!func_728(&(uParam0->f_152)))
			{
				func_435(&(uParam0->f_152), 7, 0);
				return 1;
			}
			break;
		default:
			break;
	}
	return 0;
}

int func_302(var uParam0, var uParam1)
{
	switch (uParam0->f_152.f_1549)
	{
		case 0:
			uParam0->f_152.f_2000 = 0;
			func_604(&(uParam0->f_152), 3);
			return 1;
		case 3:
			if (func_729(uParam0))
			{
				if (func_657(uParam0))
				{
					func_658(&(uParam0->f_152));
					func_604(&(uParam0->f_152), 4);
					return 1;
				}
			}
			func_629(uParam0, &(uParam0->f_152), 3, 1, 1);
			func_604(&(uParam0->f_152), 76);
			return 1;
		case 4:
			if (func_653(uParam0, &(uParam0->f_152)))
			{
				func_654(uParam0);
				func_604(&(uParam0->f_152), 3);
				return 1;
			}
			break;
		case 76:
			iVar10 = func_730(uParam1, 1);
			if (iVar10 == 0)
			{
				func_604(&(uParam0->f_152), 77);
			}
			else
			{
				bVar11 = iVar10 > 1;
				if (func_203(uParam1, uParam0->f_152.f_9) && func_731(uParam1, uParam0->f_152.f_9))
				{
					uParam0->f_152.f_2047 = uParam0->f_152.f_9;
				}
				else
				{
					uParam0->f_152.f_2047 = func_732(uParam1, 1);
				}
				if (!bVar11)
				{
					if ((func_210(&(uParam0->f_2841), uParam0->f_152.f_2047) && func_609(&(uParam0->f_2841), uParam0->f_152.f_2047, 1)) && !func_733(&(uParam0->f_2841)))
					{
						func_734(&(uParam0->f_2841), uParam0->f_152.f_2047, func_204(uParam1, uParam0->f_152.f_2047), 0);
						uParam0->f_152.f_1669 = 0;
						uParam0->f_152.f_1670 = 0;
						if (func_203(uParam1, uParam0->f_152.f_9) && func_731(uParam1, uParam0->f_152.f_9))
						{
							play_sound_frontend("showdown_win", "RDRO_Poker_Sounds", true, 0);
						}
						else
						{
							play_sound_frontend("showdown_lose", "RDRO_Poker_Sounds", true, 0);
						}
						func_604(&(uParam0->f_152), 77);
					}
				}
				else
				{
					iVar0 = func_717(uParam1, 1);
					iVar2 = 0;
					while (iVar2 < 6)
					{
						if (is_bit_set(iVar0, iVar2))
						{
							if (func_210(&(uParam0->f_2841), iVar2) && func_609(&(uParam0->f_2841), iVar2, 1))
							{
								set_bit(&iVar1, iVar2);
							}
						}
						iVar2++;
					}
					if (iVar0 == iVar1 && !func_733(&(uParam0->f_2841)))
					{
						iVar2 = 0;
						while (iVar2 < 6)
						{
							if (is_bit_set(iVar0, iVar2))
							{
								iVar3[iVar2] = func_204(uParam1, iVar2);
							}
							iVar2++;
						}
						func_735(&(uParam0->f_2841), uParam0->f_152.f_2047, iVar0, &iVar3, 0);
						uParam0->f_152.f_1669 = 0;
						uParam0->f_152.f_1670 = 0;
						if (func_203(uParam1, uParam0->f_152.f_9) && func_731(uParam1, uParam0->f_152.f_9))
						{
							play_sound_frontend("showdown_win", "RDRO_Poker_Sounds", true, 0);
						}
						else
						{
							play_sound_frontend("showdown_lose", "RDRO_Poker_Sounds", true, 0);
						}
						func_604(&(uParam0->f_152), 77);
					}
				}
			}
			break;
		case 77:
			if (!uParam0->f_152.f_1669)
			{
				if ((!func_210(&(uParam0->f_2841), uParam0->f_152.f_2047) || !(func_615(&(uParam0->f_2841), uParam0->f_152.f_2047, 18) || func_615(&(uParam0->f_2841), uParam0->f_152.f_2047, 19))) || !func_736(&(uParam0->f_2841)))
				{
					func_651(&(uParam0->f_152));
					func_737(&(uParam0->f_152), &(uParam0->f_152.f_1671), uParam1, uParam0->f_152.f_2047);
					func_738(&(uParam0->f_152), &(uParam0->f_152.f_1671), &(uParam0->f_2841), uParam1, uParam0->f_152.f_2047);
					uParam0->f_152.f_1669 = 1;
				}
			}
			if (func_210(&(uParam0->f_2841), uParam0->f_152.f_2047) && (func_615(&(uParam0->f_2841), uParam0->f_152.f_2047, 18) || func_615(&(uParam0->f_2841), uParam0->f_152.f_2047, 19)))
			{
				if (!uParam0->f_152.f_1670 && func_603(&(uParam0->f_2841), uParam0->f_152.f_2047, 0))
				{
					func_739(uParam0, &(uParam0->f_152), uParam1);
					uParam0->f_152.f_1670 = 1;
				}
			}
			else
			{
				func_740(uParam0);
				func_604(&(uParam0->f_152), 16);
				return 1;
			}
			break;
		case 16:
			func_650(&(uParam0->f_152));
			func_741(uParam0, uParam1);
			func_435(&(uParam0->f_152), 10, 0);
			return 1;
		default:
			break;
	}
	return 0;
}

int func_303(var uParam0, var uParam1)
{
	switch (uParam0->f_152.f_1549)
	{
		case 0:
			if (func_384(&(uParam0->f_152), -1179646469, 1))
			{
				if (func_705(&(uParam0->f_152.f_902), &(uParam0->f_152.f_2047), 0))
				{
					if (func_619(&(uParam0->f_152), uParam0->f_152.f_2047, 1))
					{
						func_622(&(uParam0->f_152), uParam0->f_152.f_2047, 1);
						func_607(&(uParam0->f_152), -1179646469, 1);
						func_604(&(uParam0->f_152), 3);
						return 1;
					}
				}
				else
				{
					func_607(&(uParam0->f_152), -1179646469, 1);
					func_604(&(uParam0->f_152), 3);
					return 1;
				}
			}
			else if (func_608(uParam0, 1))
			{
				return 0;
			}
			break;
		case 3:
			if (func_729(uParam0))
			{
				if (func_657(uParam0))
				{
					func_658(&(uParam0->f_152));
					func_604(&(uParam0->f_152), 4);
					return 1;
				}
			}
			func_629(uParam0, &(uParam0->f_152), 3, 1, 1);
			func_604(&(uParam0->f_152), 72);
			return 1;
		case 4:
			if (func_653(uParam0, &(uParam0->f_152)))
			{
				func_654(uParam0);
				func_604(&(uParam0->f_152), 72);
				return 1;
			}
			break;
		case 72:
			if (uParam0->f_152.f_2047 != -1)
			{
				func_604(&(uParam0->f_152), 74);
				return 1;
			}
			else
			{
				func_604(&(uParam0->f_152), 16);
				return 1;
			}
			break;
		case 74:
			if (func_210(&(uParam0->f_2841), uParam0->f_152.f_2047) && func_609(&(uParam0->f_2841), uParam0->f_152.f_2047, 1))
			{
				func_683(&(uParam0->f_2841), uParam0->f_152.f_2047, uParam0->f_152.f_1998, 0);
				func_742(&(uParam0->f_152), &(uParam0->f_152.f_1671), uParam1, uParam0->f_152.f_2047);
				func_743(&(uParam0->f_152), &(uParam0->f_152.f_1671), &(uParam0->f_2841), uParam1, uParam0->f_152.f_2047);
				func_744(uParam0, uParam1);
				func_616(uParam0, uParam0->f_152.f_2047, 3, 6, -1);
				func_604(&(uParam0->f_152), 75);
			}
			break;
		case 75:
			if (!func_210(&(uParam0->f_2841), uParam0->f_152.f_2047) || !func_615(&(uParam0->f_2841), uParam0->f_152.f_2047, 17))
			{
				func_604(&(uParam0->f_152), 76);
				return 1;
			}
			break;
		case 76:
			if ((func_210(&(uParam0->f_2841), uParam0->f_152.f_2047) && func_609(&(uParam0->f_2841), uParam0->f_152.f_2047, 1)) && !func_733(&(uParam0->f_2841)))
			{
				func_734(&(uParam0->f_2841), uParam0->f_152.f_2047, func_204(uParam1, uParam0->f_152.f_2047), 0);
				uParam0->f_152.f_1669 = 0;
				uParam0->f_152.f_1670 = 0;
				if (func_203(uParam1, uParam0->f_152.f_9) && func_731(uParam1, uParam0->f_152.f_9))
				{
					play_sound_frontend("showdown_win", "RDRO_Poker_Sounds", true, 0);
				}
				else
				{
					play_sound_frontend("showdown_lose", "RDRO_Poker_Sounds", true, 0);
				}
				func_482(&(uParam0->f_152), 1);
				func_604(&(uParam0->f_152), 77);
			}
			break;
		case 77:
			if (!uParam0->f_152.f_1669)
			{
				if ((!func_210(&(uParam0->f_2841), uParam0->f_152.f_2047) || !func_615(&(uParam0->f_2841), uParam0->f_152.f_2047, 18)) || !func_736(&(uParam0->f_2841)))
				{
					func_651(&(uParam0->f_152));
					func_737(&(uParam0->f_152), &(uParam0->f_152.f_1671), uParam1, uParam0->f_152.f_2047);
					func_738(&(uParam0->f_152), &(uParam0->f_152.f_1671), &(uParam0->f_2841), uParam1, uParam0->f_152.f_2047);
					uParam0->f_152.f_1669 = 1;
				}
			}
			if (func_210(&(uParam0->f_2841), uParam0->f_152.f_2047) && func_615(&(uParam0->f_2841), uParam0->f_152.f_2047, 18))
			{
				if (!uParam0->f_152.f_1670 && func_603(&(uParam0->f_2841), uParam0->f_152.f_2047, 0))
				{
					func_745(uParam0, &(uParam0->f_152), uParam0->f_152.f_2047);
					uParam0->f_152.f_1670 = 1;
				}
			}
			else
			{
				func_740(uParam0);
				func_604(&(uParam0->f_152), 16);
				return 1;
			}
			break;
		case 16:
			func_650(&(uParam0->f_152));
			func_741(uParam0, uParam1);
			func_435(&(uParam0->f_152), 10, 0);
			return 1;
		default:
			break;
	}
	return 0;
}

int func_304(var uParam0, var uParam1)
{
	if (func_746(&(uParam0->f_2337)))
	{
		if (func_747(uParam0->f_2337.f_498, 1))
		{
			uParam0->f_152.f_1635 = 1;
			func_748(&(uParam0->f_2337), 0);
			play_sound_frontend("menu_select_default", "RDRO_Poker_Sounds", true, 0);
		}
	}
	switch (uParam0->f_152.f_1549)
	{
		case 0:
			func_701(uParam0, &(uParam0->f_152.f_902), 0);
			func_704(uParam0);
			uParam0->f_152.f_1638 = 0;
			uParam0->f_152.f_1635 = 0;
			if (func_440(&(uParam0->f_152.f_902), uParam0->f_152.f_9))
			{
				func_748(&(uParam0->f_2337), 1);
			}
			func_604(&(uParam0->f_152), 14);
			return 1;
		case 14:
			if (func_384(&(uParam0->f_152), -1442142035, 1))
			{
				if (func_705(&(uParam0->f_152.f_902), &(uParam0->f_152.f_2047), 2))
				{
					if (func_619(&(uParam0->f_152), uParam0->f_152.f_2047, 1))
					{
						func_622(&(uParam0->f_152), uParam0->f_152.f_2047, 1);
						func_607(&(uParam0->f_152), -1442142035, 1);
						func_604(&(uParam0->f_152), 12);
						return 1;
					}
				}
				else
				{
					func_607(&(uParam0->f_152), -1442142035, 1);
					func_604(&(uParam0->f_152), 7);
					return 1;
				}
			}
			else if (func_608(uParam0, 1))
			{
				return 0;
			}
			break;
		case 2:
			func_704(uParam0);
			uParam0->f_152.f_1638 = 0;
			uParam0->f_152.f_1635 = 0;
			func_604(&(uParam0->f_152), 29);
			return 1;
		case 12:
			func_604(&(uParam0->f_152), 61);
			return 1;
		case 61:
			uParam0->f_152.f_2048 = func_749(uParam1, uParam0->f_152.f_2047);
			func_637(&(uParam0->f_2841), uParam0->f_152.f_2047, func_635(uParam1, uParam0->f_152.f_2047, 0), func_635(uParam1, uParam0->f_152.f_2047, 1), 0);
			func_604(&(uParam0->f_152), 62);
			return 1;
		case 62:
			if (func_210(&(uParam0->f_2841), uParam0->f_152.f_2047) && func_609(&(uParam0->f_2841), uParam0->f_152.f_2047, 1))
			{
				func_706(uParam0, uParam0->f_152.f_2047);
				if (func_750(uParam1, uParam0->f_152.f_2048))
				{
					uParam0->f_152.f_2057 = 1;
				}
				if (uParam0->f_152.f_2057)
				{
					func_707(&(uParam0->f_2841), uParam0->f_152.f_2047, 0);
				}
				else
				{
					func_707(&(uParam0->f_2841), uParam0->f_152.f_2047, 1);
				}
				if (!uParam0->f_152.f_1638)
				{
					func_751(uParam0, uParam1, uParam0->f_152.f_2048);
					uParam0->f_152.f_1638 = 1;
				}
				func_604(&(uParam0->f_152), 63);
			}
			break;
		case 63:
			if (func_101(&(uParam0->f_152.f_1550), 0.2f) || uParam0->f_2841.f_40)
			{
				func_708(&(uParam0->f_152), &(uParam0->f_152.f_1671), uParam1, uParam0->f_152.f_2047, 0);
				if (func_750(uParam1, uParam0->f_152.f_2048))
				{
					func_752(&(uParam0->f_152), &(uParam0->f_152.f_1671), &(uParam0->f_2841), uParam1, uParam0->f_152.f_2047, uParam0->f_152.f_2048);
				}
				else
				{
					func_709(&(uParam0->f_152), &(uParam0->f_152.f_1671), &(uParam0->f_2841), uParam1, uParam0->f_152.f_2047);
				}
				func_616(uParam0, uParam0->f_152.f_2047, 5, 6, -1);
				func_604(&(uParam0->f_152), 64);
			}
			break;
		case 64:
			if (func_101(&(uParam0->f_152.f_1550), 0.4f) || uParam0->f_2841.f_40)
			{
				func_710(uParam0, uParam1);
				func_604(&(uParam0->f_152), 65);
			}
			break;
		case 65:
			if (!func_210(&(uParam0->f_2841), uParam0->f_152.f_2047) || !func_615(&(uParam0->f_2841), uParam0->f_152.f_2047, 16))
			{
				func_714(uParam0);
				func_715(uParam0);
				if (func_750(uParam1, uParam0->f_152.f_2048))
				{
					func_604(&(uParam0->f_152), 94);
					return 1;
				}
				else
				{
					func_650(&(uParam0->f_152));
					func_604(&(uParam0->f_152), 7);
					return 1;
				}
			}
			break;
		case 94:
			if (func_729(uParam0))
			{
				if (func_657(uParam0))
				{
					func_658(&(uParam0->f_152));
					func_604(&(uParam0->f_152), 95);
					return 1;
				}
			}
			func_604(&(uParam0->f_152), 96);
			return 1;
		case 95:
			if (func_653(uParam0, &(uParam0->f_152)))
			{
				func_654(uParam0);
				func_604(&(uParam0->f_152), 94);
				return 1;
			}
			break;
		case 96:
			func_753(uParam0, uParam1);
			func_754(&(uParam0->f_152), &(uParam0->f_152.f_1671), uParam1, uParam0->f_152.f_2048);
			func_629(uParam0, &(uParam0->f_152), 3, 1, 1);
			if (func_203(uParam1, uParam0->f_152.f_9) && func_755(uParam1, uParam0->f_152.f_2048, uParam0->f_152.f_9))
			{
				play_sound_frontend("showdown_win", "RDRO_Poker_Sounds", true, 0);
			}
			else
			{
				play_sound_frontend("showdown_lose", "RDRO_Poker_Sounds", true, 0);
			}
			func_604(&(uParam0->f_152), 97);
			return 1;
		case 97:
			if ((func_210(&(uParam0->f_2841), uParam0->f_152.f_2047) && func_609(&(uParam0->f_2841), uParam0->f_152.f_2047, 1)) && !func_733(&(uParam0->f_2841)))
			{
				bVar12 = true;
				func_734(&(uParam0->f_2841), uParam0->f_152.f_2047, func_204(uParam1, uParam0->f_152.f_2047), bVar12);
				uParam0->f_152.f_1669 = 0;
				uParam0->f_152.f_1670 = 0;
				func_604(&(uParam0->f_152), 98);
			}
			break;
		case 98:
			if (!uParam0->f_152.f_1669)
			{
				if ((!func_210(&(uParam0->f_2841), uParam0->f_152.f_2047) || !func_615(&(uParam0->f_2841), uParam0->f_152.f_2047, 18)) || !func_736(&(uParam0->f_2841)))
				{
					func_651(&(uParam0->f_152));
					func_737(&(uParam0->f_152), &(uParam0->f_152.f_1671), uParam1, uParam0->f_152.f_2047);
					func_738(&(uParam0->f_152), &(uParam0->f_152.f_1671), &(uParam0->f_2841), uParam1, uParam0->f_152.f_2047);
					uParam0->f_152.f_1669 = 1;
				}
			}
			if (func_210(&(uParam0->f_2841), uParam0->f_152.f_2047) && func_615(&(uParam0->f_2841), uParam0->f_152.f_2047, 18))
			{
				if (!uParam0->f_152.f_1670 && func_603(&(uParam0->f_2841), uParam0->f_152.f_2047, 0))
				{
					func_756(uParam0, &(uParam0->f_152), uParam1, uParam0->f_152.f_2048);
					uParam0->f_152.f_1670 = 1;
				}
			}
			else
			{
				func_640(&(uParam0->f_152), uParam0->f_152.f_2047, 1);
				func_604(&(uParam0->f_152), 99);
				return 1;
			}
			break;
		case 99:
			if ((!func_602(&(uParam0->f_2841), uParam0->f_152.f_2047, 18) || func_603(&(uParam0->f_2841), uParam0->f_152.f_2047, 1)) || func_757(uParam1) == 0)
			{
				func_758(uParam0, uParam1);
				func_740(uParam0);
				uParam0->f_152.f_1638 = 0;
				func_650(&(uParam0->f_152));
				func_604(&(uParam0->f_152), 7);
				return 1;
			}
			break;
		case 7:
			if (func_384(&(uParam0->f_152), -441318505, 1))
			{
				func_607(&(uParam0->f_152), -441318505, 1);
				func_604(&(uParam0->f_152), 29);
				return 1;
			}
			else if (func_384(&(uParam0->f_152), 981015204, 1))
			{
				func_607(&(uParam0->f_152), 981015204, 1);
				func_604(&(uParam0->f_152), 41);
				return 1;
			}
			else if (func_608(uParam0, 1))
			{
				return 0;
			}
			break;
		case 29:
			uParam0->f_152.f_2047 = uParam1->f_6;
			uParam0->f_152.f_2048 = func_749(uParam1, uParam0->f_152.f_2047);
			if (!uParam0->f_152.f_1638)
			{
				func_751(uParam0, uParam1, uParam0->f_152.f_2048);
				uParam0->f_152.f_1638 = 1;
			}
			uParam0->f_152.f_1634 = 0;
			func_604(&(uParam0->f_152), 30);
			return 1;
		case 30:
			if (!uParam0->f_152.f_1634)
			{
				if (func_656(&(uParam0->f_152), uParam1->f_6))
				{
					if (uParam0->f_152.f_1635)
					{
						if (func_666(&(uParam0->f_152), uParam1->f_6))
						{
							func_748(&(uParam0->f_2337), 0);
							uParam0->f_152.f_1634 = 1;
						}
					}
					else if (func_127(&(uParam0->f_152.f_1550)) > uParam0->f_152.f_1460 || uParam0->f_2841.f_40)
					{
						if (func_759(&(uParam0->f_152), uParam1->f_6))
						{
							func_748(&(uParam0->f_2337), 0);
							uParam0->f_152.f_1634 = 1;
						}
					}
				}
			}
			if (uParam0->f_152.f_1634 && func_669(&(uParam0->f_152), 2))
			{
				uParam0->f_152.f_1634 = 0;
				return 1;
			}
			else if (func_384(&(uParam0->f_152), -1766937362, 1))
			{
				func_604(&(uParam0->f_152), 32);
				return 1;
			}
			else if (func_384(&(uParam0->f_152), 402903974, 1))
			{
				func_604(&(uParam0->f_152), 70);
				return 1;
			}
			else if (func_608(uParam0, 1))
			{
				return 0;
			}
			break;
		case 32:
			if (func_384(&(uParam0->f_152), -1766937362, 1))
			{
				if (func_619(&(uParam0->f_152), uParam0->f_152.f_902.f_6, 1))
				{
					func_622(&(uParam0->f_152), uParam0->f_152.f_902.f_6, 1);
					func_607(&(uParam0->f_152), -1766937362, 1);
					func_604(&(uParam0->f_152), 33);
					return 1;
				}
			}
			else if (func_608(uParam0, 1))
			{
				return 0;
			}
			break;
		case 33:
			if (func_702(uParam1, uParam1->f_6))
			{
				func_637(&(uParam0->f_2841), uParam1->f_6, func_635(uParam1, uParam1->f_6, 0), func_635(uParam1, uParam1->f_6, 1), 0);
				func_604(&(uParam0->f_152), 44);
				return 1;
			}
			else if (func_760(uParam1, uParam1->f_6))
			{
				func_604(&(uParam0->f_152), 66);
				return 1;
			}
			break;
		case 44:
			if (func_210(&(uParam0->f_2841), uParam0->f_152.f_2047) && func_609(&(uParam0->f_2841), uParam0->f_152.f_2047, 1))
			{
				func_706(uParam0, uParam0->f_152.f_2047);
				if (uParam0->f_152.f_2057)
				{
					func_707(&(uParam0->f_2841), uParam0->f_152.f_2047, 0);
				}
				else
				{
					func_707(&(uParam0->f_2841), uParam0->f_152.f_2047, 1);
				}
				func_604(&(uParam0->f_152), 45);
			}
			break;
		case 45:
			if (func_101(&(uParam0->f_152.f_1550), 0.2f) || uParam0->f_2841.f_40)
			{
				func_708(&(uParam0->f_152), &(uParam0->f_152.f_1671), uParam1, uParam0->f_152.f_2047, 0);
				func_709(&(uParam0->f_152), &(uParam0->f_152.f_1671), &(uParam0->f_2841), uParam1, uParam0->f_152.f_2047);
				func_616(uParam0, uParam0->f_152.f_2047, 5, 6, -1);
				func_604(&(uParam0->f_152), 46);
			}
			break;
		case 46:
			if (func_101(&(uParam0->f_152.f_1550), 0.2f) || uParam0->f_2841.f_40)
			{
				func_710(uParam0, uParam1);
				func_604(&(uParam0->f_152), 47);
			}
			break;
		case 47:
			if (((!func_210(&(uParam0->f_2841), uParam0->f_152.f_2047) || !func_615(&(uParam0->f_2841), uParam0->f_152.f_2047, 16)) || func_101(&(uParam0->f_152.f_1550), 0.35f)) || uParam0->f_2841.f_40)
			{
				if (uParam0->f_152.f_2058)
				{
					func_604(&(uParam0->f_152), 50);
					return 1;
				}
				else
				{
					func_604(&(uParam0->f_152), 48);
					return 1;
				}
			}
			break;
		case 50:
			if (!func_210(&(uParam0->f_2841), uParam0->f_152.f_2055) || !func_702(uParam1, uParam0->f_152.f_2055))
			{
				func_604(&(uParam0->f_152), 48);
				return 1;
			}
			else if (func_609(&(uParam0->f_2841), uParam0->f_152.f_2055, 1))
			{
				func_712(&(uParam0->f_2841), uParam0->f_152.f_2055, 1, func_761(&(uParam0->f_152), uParam0->f_152.f_2055, uParam0->f_152.f_2048));
				func_713(&(uParam0->f_152), &(uParam0->f_152.f_1671), &(uParam0->f_2841), uParam1, uParam0->f_152.f_2055);
				func_604(&(uParam0->f_152), 48);
				return 1;
			}
			break;
		case 48:
			if (!func_210(&(uParam0->f_2841), uParam0->f_152.f_2047) || !func_615(&(uParam0->f_2841), uParam0->f_152.f_2047, 16))
			{
				func_714(uParam0);
				func_715(uParam0);
				func_604(&(uParam0->f_152), 69);
				return 1;
			}
			break;
		case 66:
			if (func_210(&(uParam0->f_2841), uParam0->f_152.f_2047) && func_609(&(uParam0->f_2841), uParam0->f_152.f_2047, 1))
			{
				func_683(&(uParam0->f_2841), uParam0->f_152.f_2047, uParam0->f_152.f_1998, 1);
				func_604(&(uParam0->f_152), 67);
			}
			break;
		case 67:
			if (func_101(&(uParam0->f_152.f_1550), 0.2f) || uParam0->f_2841.f_40)
			{
				func_708(&(uParam0->f_152), &(uParam0->f_152.f_1671), uParam1, uParam0->f_152.f_2047, 1);
				func_762(&(uParam0->f_152), &(uParam0->f_152.f_1671), &(uParam0->f_2841), uParam1, uParam0->f_152.f_2047);
				func_616(uParam0, uParam0->f_152.f_2047, 5, 6, -1);
				func_763(uParam0);
				func_604(&(uParam0->f_152), 68);
			}
			break;
		case 68:
			if (!func_210(&(uParam0->f_2841), uParam0->f_152.f_2047) || !func_615(&(uParam0->f_2841), uParam0->f_152.f_2047, 17))
			{
				func_714(uParam0);
				func_764(uParam0);
				func_604(&(uParam0->f_152), 69);
				return 1;
			}
			break;
		case 69:
			func_650(&(uParam0->f_152));
			func_604(&(uParam0->f_152), 8);
			return 1;
		case 8:
			if (func_384(&(uParam0->f_152), 402903974, 1))
			{
				func_604(&(uParam0->f_152), 70);
				return 1;
			}
			else if (func_608(uParam0, 1))
			{
				return 0;
			}
			break;
		case 70:
			if (func_384(&(uParam0->f_152), 402903974, 1))
			{
				if (func_765(&(uParam0->f_152.f_902), uParam0->f_152.f_2048) > 0)
				{
					func_604(&(uParam0->f_152), 71);
					return 1;
				}
				else
				{
					func_607(&(uParam0->f_152), 402903974, 1);
					func_604(&(uParam0->f_152), 7);
					return 1;
				}
			}
			else if (func_608(uParam0, 1))
			{
				return 0;
			}
			break;
		case 71:
			if (func_384(&(uParam0->f_152), 402903974, 1))
			{
				iVar2 = func_766(&(uParam0->f_152.f_902), uParam0->f_152.f_2048, 0);
				if (func_620(&(uParam0->f_152), iVar2, 1) || iVar2 == 0)
				{
					func_621(&(uParam0->f_152), iVar2, 1);
					func_607(&(uParam0->f_152), 402903974, 1);
					func_604(&(uParam0->f_152), 3);
					return 1;
				}
			}
			else if (func_608(uParam0, 1))
			{
				return 0;
			}
			break;
		case 3:
			if (func_729(uParam0))
			{
				if (func_657(uParam0))
				{
					func_658(&(uParam0->f_152));
					func_604(&(uParam0->f_152), 4);
					return 1;
				}
			}
			func_604(&(uParam0->f_152), 52);
			return 1;
		case 4:
			if (func_653(uParam0, &(uParam0->f_152)))
			{
				func_654(uParam0);
				func_604(&(uParam0->f_152), 3);
				return 1;
			}
			break;
		case 52:
			func_753(uParam0, uParam1);
			if (func_757(&(uParam0->f_152.f_902)) == 0)
			{
				func_482(&(uParam0->f_152), 1);
			}
			func_754(&(uParam0->f_152), &(uParam0->f_152.f_1671), uParam1, uParam0->f_152.f_2048);
			if (func_440(uParam1, uParam0->f_152.f_2047))
			{
				func_604(&(uParam0->f_152), 56);
				return 1;
			}
			else if (func_765(uParam1, uParam0->f_152.f_2048) == 1 && func_755(uParam1, uParam0->f_152.f_2048, uParam0->f_152.f_2047))
			{
				func_604(&(uParam0->f_152), 56);
				return 1;
			}
			uParam0->f_152.f_2000 = 0;
			uParam0->f_152.f_2047 = func_767(uParam1, uParam0->f_152.f_2048, uParam0->f_152.f_2000, 1);
			func_604(&(uParam0->f_152), 53);
			return 1;
		case 53:
			if (func_210(&(uParam0->f_2841), uParam0->f_152.f_2047) && func_609(&(uParam0->f_2841), uParam0->f_152.f_2047, 1))
			{
				func_712(&(uParam0->f_2841), uParam0->f_152.f_2047, 0, 1);
				func_743(&(uParam0->f_152), &(uParam0->f_152.f_1671), &(uParam0->f_2841), uParam1, uParam0->f_152.f_2047);
				set_bit(&(uParam0->f_152.f_2000), uParam0->f_152.f_2047);
				func_604(&(uParam0->f_152), 54);
				return 1;
			}
			break;
		case 54:
			if (func_127(&(uParam0->f_152.f_1550)) > 0.2f || uParam0->f_2841.f_40)
			{
				uParam0->f_152.f_2047 = func_767(uParam1, uParam0->f_152.f_2048, uParam0->f_152.f_2000, 1);
				if (func_203(uParam1, uParam0->f_152.f_2047))
				{
					func_604(&(uParam0->f_152), 53);
					return 1;
				}
				else
				{
					func_604(&(uParam0->f_152), 56);
					return 1;
				}
			}
			break;
		case 56:
			func_629(uParam0, &(uParam0->f_152), 3, 1, 1);
			if (func_440(uParam1, uParam0->f_152.f_2047))
			{
				func_604(&(uParam0->f_152), 74);
				return 1;
			}
			else
			{
				func_604(&(uParam0->f_152), 76);
				return 1;
			}
			break;
		case 74:
			if (func_210(&(uParam0->f_2841), uParam0->f_152.f_2047) && func_609(&(uParam0->f_2841), uParam0->f_152.f_2047, 1))
			{
				func_683(&(uParam0->f_2841), uParam0->f_152.f_2047, uParam0->f_152.f_1998, 0);
				func_604(&(uParam0->f_152), 75);
				return 1;
			}
			break;
		case 75:
			if (!func_210(&(uParam0->f_2841), uParam0->f_152.f_2047) || !func_615(&(uParam0->f_2841), uParam0->f_152.f_2047, 17))
			{
				func_604(&(uParam0->f_152), 76);
				return 1;
			}
			break;
		case 76:
			iVar0 = func_768(uParam1, uParam0->f_152.f_2048, 1);
			if (iVar0 == 0)
			{
				func_604(&(uParam0->f_152), 77);
			}
			else
			{
				bVar11 = iVar0 > 1;
				if (func_203(uParam1, uParam0->f_152.f_9) && func_755(uParam1, uParam0->f_152.f_2048, uParam0->f_152.f_9))
				{
					uParam0->f_152.f_2047 = uParam0->f_152.f_9;
				}
				else
				{
					uParam0->f_152.f_2047 = func_769(uParam1, uParam0->f_152.f_2048, 1);
				}
				bVar12 = uParam0->f_152.f_2048 > 0;
				if (!bVar11)
				{
					if ((func_210(&(uParam0->f_2841), uParam0->f_152.f_2047) && func_609(&(uParam0->f_2841), uParam0->f_152.f_2047, 1)) && !func_733(&(uParam0->f_2841)))
					{
						func_734(&(uParam0->f_2841), uParam0->f_152.f_2047, func_204(uParam1, uParam0->f_152.f_2047), bVar12);
						uParam0->f_152.f_1669 = 0;
						uParam0->f_152.f_1670 = 0;
						if (func_203(uParam1, uParam0->f_152.f_9) && func_755(uParam1, uParam0->f_152.f_2048, uParam0->f_152.f_9))
						{
							play_sound_frontend("showdown_win", "RDRO_Poker_Sounds", true, 0);
						}
						else
						{
							play_sound_frontend("showdown_lose", "RDRO_Poker_Sounds", true, 0);
						}
						func_604(&(uParam0->f_152), 77);
					}
				}
				else
				{
					iVar2 = func_766(uParam1, uParam0->f_152.f_2048, 1);
					iVar1 = 0;
					while (iVar1 < 6)
					{
						if (is_bit_set(iVar2, iVar1))
						{
							if (func_210(&(uParam0->f_2841), iVar1) && func_609(&(uParam0->f_2841), iVar1, 1))
							{
								set_bit(&iVar3, iVar1);
							}
						}
						iVar1++;
					}
					if (iVar2 == iVar3 && !func_733(&(uParam0->f_2841)))
					{
						iVar1 = 0;
						while (iVar1 < 6)
						{
							if (is_bit_set(iVar2, iVar1))
							{
								iVar4[iVar1] = func_204(uParam1, iVar1);
							}
							iVar1++;
						}
						func_735(&(uParam0->f_2841), uParam0->f_152.f_2047, iVar2, &iVar4, bVar12);
						uParam0->f_152.f_1669 = 0;
						uParam0->f_152.f_1670 = 0;
						if (func_203(uParam1, uParam0->f_152.f_9) && func_755(uParam1, uParam0->f_152.f_2048, uParam0->f_152.f_9))
						{
							play_sound_frontend("showdown_win", "RDRO_Poker_Sounds", true, 0);
						}
						else
						{
							play_sound_frontend("showdown_lose", "RDRO_Poker_Sounds", true, 0);
						}
						func_604(&(uParam0->f_152), 77);
					}
				}
			}
			break;
		case 77:
			if (!uParam0->f_152.f_1669)
			{
				if ((!func_210(&(uParam0->f_2841), uParam0->f_152.f_2047) || !(func_615(&(uParam0->f_2841), uParam0->f_152.f_2047, 18) || func_615(&(uParam0->f_2841), uParam0->f_152.f_2047, 19))) || !func_736(&(uParam0->f_2841)))
				{
					func_651(&(uParam0->f_152));
					func_737(&(uParam0->f_152), &(uParam0->f_152.f_1671), uParam1, uParam0->f_152.f_2047);
					func_738(&(uParam0->f_152), &(uParam0->f_152.f_1671), &(uParam0->f_2841), uParam1, uParam0->f_152.f_2047);
					uParam0->f_152.f_1669 = 1;
				}
			}
			if (func_210(&(uParam0->f_2841), uParam0->f_152.f_2047) && (func_615(&(uParam0->f_2841), uParam0->f_152.f_2047, 18) || func_615(&(uParam0->f_2841), uParam0->f_152.f_2047, 19)))
			{
				if (!uParam0->f_152.f_1670 && func_603(&(uParam0->f_2841), uParam0->f_152.f_2047, 0))
				{
					func_756(uParam0, &(uParam0->f_152), uParam1, uParam0->f_152.f_2048);
					uParam0->f_152.f_1670 = 1;
				}
			}
			else
			{
				func_758(uParam0, uParam1);
				func_740(uParam0);
				uParam0->f_152.f_1638 = 0;
				func_650(&(uParam0->f_152));
				func_604(&(uParam0->f_152), 7);
				return 1;
			}
			break;
		case 41:
			func_748(&(uParam0->f_2337), 0);
			func_604(&(uParam0->f_152), 10);
			return 1;
		case 10:
			if (func_384(&(uParam0->f_152), -1179646469, 1))
			{
				func_607(&(uParam0->f_152), -1179646469, 1);
				func_741(uParam0, uParam1);
				func_435(&(uParam0->f_152), 10, 0);
				return 1;
			}
			else if (func_608(uParam0, 1))
			{
				return 0;
			}
			break;
		default:
			break;
	}
	return 0;
}

int func_305(var uParam0, var uParam1)
{
	if (uParam0->f_152.f_1549 != 0)
	{
		func_771(uParam0, uParam1, 150992);
	}
	switch (uParam0->f_152.f_1549)
	{
		case 0:
		case 1:
			func_606(uParam0, uParam1);
			if (func_772(uParam1) > 0)
			{
				func_773(uParam0);
			}
			func_774(&(uParam0->f_152), uParam1);
			if (!func_187(&(uParam0->f_152), 5))
			{
				func_629(uParam0, &(uParam0->f_152), 2, 1, 1);
			}
			func_775(uParam0, 1, 0);
			func_776(&(uParam0->f_152), &(uParam0->f_2841));
			func_777();
			if (uParam0->f_152.f_1549 == 1)
			{
				func_604(&(uParam0->f_152), 13);
				return 1;
			}
			else
			{
				func_604(&(uParam0->f_152), 74);
				return 1;
			}
			break;
		case 13:
			if (func_101(&(uParam0->f_152.f_1550), 3f) || uParam0->f_2841.f_40)
			{
				func_604(&(uParam0->f_152), 74);
				return 1;
			}
			break;
		case 74:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (iVar0 != uParam0->f_152.f_1998)
				{
					if (((func_203(uParam1, iVar0) && func_210(&(uParam0->f_2841), iVar0)) && func_778(&(uParam0->f_2841), iVar0)) && (func_779(&(uParam0->f_2841), iVar0) == 3 || func_779(&(uParam0->f_2841), iVar0) == 2))
					{
						func_780(&(uParam0->f_152), iVar0, 1);
					}
				}
				iVar0++;
			}
			func_604(&(uParam0->f_152), 75);
			return 0;
		case 75:
			if (!func_781(&(uParam0->f_152), 1))
			{
				bVar2 = true;
				iVar0 = 0;
				while (iVar0 < 6)
				{
					if (func_210(&(uParam0->f_2841), iVar0) && func_615(&(uParam0->f_2841), iVar0, 17))
					{
						bVar2 = false;
					}
					iVar0++;
				}
				if (bVar2)
				{
					func_604(&(uParam0->f_152), 14);
					return 1;
				}
			}
			break;
		case 14:
			iVar1 = uParam1->f_3;
			if (uParam0->f_152.f_1997 || !func_782(uParam1, &iVar1, 1))
			{
				iVar1 = uParam0->f_152.f_1998;
			}
			if (func_619(&(uParam0->f_152), uParam0->f_152.f_1998, 1) && func_619(&(uParam0->f_152), iVar1, 1))
			{
				func_622(&(uParam0->f_152), uParam0->f_152.f_1998, 1);
				func_622(&(uParam0->f_152), iVar1, 0);
				uParam0->f_152.f_1999 = iVar1;
				func_604(&(uParam0->f_152), 85);
				return 1;
			}
			break;
		case 85:
			if (func_210(&(uParam0->f_2841), uParam0->f_152.f_1998) && func_609(&(uParam0->f_2841), uParam0->f_152.f_1998, 1))
			{
				bVar4 = uParam0->f_152.f_1999 != uParam0->f_152.f_1998;
				func_783(&(uParam0->f_2841), uParam0->f_152.f_1998, bVar4, uParam0->f_152.f_1999);
				func_604(&(uParam0->f_152), 91);
				return 1;
			}
			break;
		case 91:
			func_604(&(uParam0->f_152), 86);
			return 1;
		case 86:
			if (func_210(&(uParam0->f_2841), uParam0->f_152.f_1998))
			{
				if (func_615(&(uParam0->f_2841), uParam0->f_152.f_1998, 20))
				{
					if (func_603(&(uParam0->f_2841), uParam0->f_152.f_1998, 0))
					{
						if (uParam0->f_152.f_1999 != uParam0->f_152.f_1998)
						{
							func_784(uParam0, uParam0->f_152.f_1999, uParam0->f_152.f_1998, 6);
						}
						func_617(&(uParam0->f_2841), uParam0->f_152.f_1998, 0);
					}
				}
				else
				{
					func_640(&(uParam0->f_152), uParam0->f_152.f_1998, 1);
					func_437(&(uParam0->f_152), uParam0->f_152.f_1999);
					if (func_785(&(uParam0->f_2841)))
					{
						func_604(&(uParam0->f_152), 89);
						return 1;
					}
					if (func_786(&(uParam0->f_152), uParam0->f_152.f_1998))
					{
						func_640(&(uParam0->f_152), uParam0->f_152.f_1998, 1);
					}
					func_604(&(uParam0->f_152), 93);
					return 1;
				}
			}
			break;
		case 89:
			if (func_210(&(uParam0->f_2841), uParam0->f_152.f_1998) && func_609(&(uParam0->f_2841), uParam0->f_152.f_1998, 1))
			{
				func_639(&(uParam0->f_2841), uParam0->f_152.f_1998);
				func_604(&(uParam0->f_152), 90);
				return 1;
			}
			break;
		case 90:
			if (!func_210(&(uParam0->f_2841), uParam0->f_152.f_1998) || !func_615(&(uParam0->f_2841), uParam0->f_152.f_1998, 22))
			{
				func_640(&(uParam0->f_152), uParam0->f_152.f_1998, 1);
				func_604(&(uParam0->f_152), 93);
				return 1;
			}
			break;
		case 93:
			if (uParam0->f_152.f_1553 == 0)
			{
				if (func_787(uParam0, &iVar3))
				{
					func_388(uParam0, &(uParam0->f_152), iVar3, 1);
					return 0;
				}
			}
			func_604(&(uParam0->f_152), 16);
			return 1;
		case 16:
			if (func_384(&(uParam0->f_152), -1773144867, 1))
			{
				func_607(&(uParam0->f_152), -1773144867, 1);
			}
			if (func_384(&(uParam0->f_152), -26793149, 1))
			{
				func_607(&(uParam0->f_152), -26793149, 1);
			}
			if (!func_788(&(uParam0->f_152)))
			{
				if (func_384(&(uParam0->f_152), -1442142035, 1))
				{
					func_482(&(uParam0->f_152), 0);
					uParam0->f_152.f_1661++;
					func_650(&(uParam0->f_152));
					func_789(&(uParam0->f_2841), 0);
					func_790(&(uParam0->f_2841), 0);
					func_791(&(uParam0->f_2841));
					func_792(&(uParam0->f_2841));
					func_219(&(uParam0->f_2841), 1);
					func_220(&(uParam0->f_2841), 1);
					if (!func_793(&(uParam0->f_152)))
					{
						func_435(&(uParam0->f_152), 3, 0);
						return 1;
					}
					else
					{
						func_604(&(uParam0->f_152), 92);
						return 1;
					}
				}
				else if (!func_384(&(uParam0->f_152), -1773144867, 1) && !func_384(&(uParam0->f_152), -26793149, 1))
				{
					if (func_608(uParam0, 1))
					{
						return 0;
					}
				}
			}
			break;
		case 92:
			bVar2 = true;
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_210(&(uParam0->f_2841), iVar0))
				{
					if (func_794(&(uParam0->f_2841), iVar0))
					{
						bVar2 = false;
					}
				}
				iVar0++;
			}
			if (bVar2)
			{
				func_435(&(uParam0->f_152), 0, 0);
				return 1;
			}
			break;
		default:
			break;
	}
	return 0;
}

int func_306(var uParam0, var uParam1)
{
	switch (uParam0->f_152.f_1549)
	{
		case 0:
			func_795(uParam0, &(uParam0->f_152), 1, 1);
			func_604(&(uParam0->f_152), 16);
			return 1;
		case 16:
			break;
		default:
			break;
	}
	return 0;
}

int func_307(var uParam0, var uParam1, var uParam2, int iParam3)
{
	switch (uParam2->f_1)
	{
		case 0:
			if (!func_796(uParam1, iParam3, 1))
			{
			}
			else
			{
				if (func_141(uParam1, 1))
				{
					if (!func_151(512) || func_151(1024))
					{
						uParam1->f_1632 = 1;
					}
				}
				func_268(&(uParam2->f_2));
				func_797(uParam1, iParam3, 5);
				return 1;
			}
			break;
		case 5:
			if (func_101(&(uParam2->f_2), 1.5f))
			{
				if (func_141(uParam1, 1))
				{
					if (!func_151(4096))
					{
						func_156(2048);
					}
					if (!func_151(512))
					{
						func_160(11, 0);
					}
					else
					{
						func_160(9, 0);
					}
				}
				func_797(uParam1, iParam3, 6);
				return 1;
			}
			break;
		case 6:
			if (!func_210(&(uParam0->f_2841), iParam3) || !func_615(&(uParam0->f_2841), iParam3, 5))
			{
				if (func_204(&(uParam1->f_416), iParam3) > 0)
				{
					func_797(uParam1, iParam3, 8);
					return 1;
				}
				else
				{
					func_797(uParam1, iParam3, 10);
					return 1;
				}
			}
			break;
		case 8:
			if (func_210(&(uParam0->f_2841), iParam3) && func_609(&(uParam0->f_2841), iParam3, 1))
			{
				func_798(&(uParam0->f_2841), iParam3, func_204(&(uParam1->f_416), iParam3));
				func_797(uParam1, iParam3, 9);
				return 1;
			}
			break;
		case 9:
			if (!func_210(&(uParam0->f_2841), iParam3) || !func_615(&(uParam0->f_2841), iParam3, 32))
			{
				func_797(uParam1, iParam3, 10);
				return 1;
			}
			break;
		case 10:
			func_799(uParam1, iParam3, 1);
			uParam1->f_1632 = 0;
			if (!uParam1->f_2052 && !func_624(&(uParam1->f_416), iParam3))
			{
				if (func_141(uParam1, 1))
				{
					func_800(&(uParam0->f_2337), "MGPKR_MSG_JOIN_MIDGAME_NO_CHIPS", 1);
					func_801(&(uParam0->f_2337), 1);
				}
				else if (func_141(uParam1, 2))
				{
					func_800(&(uParam0->f_2337), "MGPKR_MSG_JOIN_MIDGAME_CHIPS", 2);
					func_801(&(uParam0->f_2337), 1);
				}
			}
			func_802(uParam1, iParam3);
			return 1;
	}
	return 0;
}

void func_308(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1425[iParam1] = iParam2;
}

int func_309(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (func_141(uParam1, 1))
	{
		if (uParam2->f_1 != 0 && uParam2->f_6 != -1)
		{
			if (is_pc_version() || _is_stadia_version())
			{
				iVar47 = -1;
			}
			else
			{
				iVar47 = _0x58cc181719256197(uParam2->f_6, &Var38, 1);
			}
			if (iVar47 == 0)
			{
				func_803(uParam1, iParam3, Var38[0], 1);
				uParam2->f_6 = -1;
			}
			else if (iVar47 == 1)
			{
			}
			else
			{
				uParam2->f_6 = -1;
			}
		}
	}
	switch (uParam2->f_1)
	{
		case 0:
			uParam2->f_6 = -1;
			iVar0 = func_804(uParam1, iParam3);
			if (iVar0 == 0)
			{
			}
			else if (iVar0 != 1 && iVar0 != 2)
			{
			}
			else if (func_805(uParam1, iParam3, 1))
			{
				func_796(uParam1, iParam3, 1);
				func_807(&(uParam0->f_2337), iParam3, func_806(uParam1, iParam3));
				if (func_141(uParam1, 1))
				{
					if (func_804(uParam1, iParam3) == 1 && !func_808(uParam1, iParam3))
					{
						if (func_809(uParam1, iParam3, Var23[0]))
						{
							if (is_pc_version() || _is_stadia_version())
							{
								uParam2->f_6 = 1;
							}
							else
							{
								uParam2->f_6 = _0xd66c9e72b3cc4982(&Var23, 1);
							}
						}
					}
				}
				func_268(&(uParam2->f_2));
				func_797(uParam1, iParam3, 1);
				return 1;
			}
			break;
		case 1:
			if (func_127(&(uParam1->f_1658)) < 0f)
			{
				return 0;
			}
			func_361(&(uParam1->f_1658), -uParam1->f_1457);
			func_797(uParam1, iParam3, 2);
			return 1;
		case 2:
			if (uParam2->f_6 != -1)
			{
			}
			else
			{
				func_797(uParam1, iParam3, 3);
				return 1;
			}
			break;
		case 3:
			iVar17 = func_806(uParam1, iParam3);
			vVar31 = { uParam0->f_2841 };
			if (!func_372(uParam0, iParam3, uParam1->f_902, iVar17, &iVar18, &iVar20))
			{
				return 0;
			}
			func_373(uParam1, iParam3, iVar18, 1);
			uParam2->f_7 = iVar20;
			func_797(uParam1, iParam3, 4);
			return 1;
		case 4:
			iVar17 = func_806(uParam1, iParam3);
			vVar31 = { uParam0->f_2841 };
			iVar20 = uParam2->f_7;
			if (func_376(uParam1, iParam3))
			{
				if (!func_810(&(uParam0->f_2841), vVar31, &vVar34, &fVar37, 0))
				{
					return 0;
				}
				iVar18 = func_439(uParam1, iParam3, 1);
				if (uParam1->f_9 != -1 && (iParam3 + 1 % 6) == uParam0->f_152.f_9)
				{
					iVar19 = func_441(&iVar18, 2);
				}
				else
				{
					iVar19 = func_442(&iVar18);
				}
				_set_entity_coords_and_heading(iVar18, vVar34, fVar37, true, false, true);
				iVar21 = 92;
				iVar22 = 1;
				Var1 = { func_811(uParam1, iParam3, 0, 0) };
				if (!func_444(&(uParam0->f_2841), iParam3, iVar18, 0, iVar19, 1, iVar20, iVar21, iVar17, iVar22, 0, 0, 0, 0, &Var1))
				{
					delete_ped(&iVar18);
					return 0;
				}
				func_797(uParam1, iParam3, 6);
				return 1;
			}
			break;
		case 6:
			if ((!func_210(&(uParam0->f_2841), iParam3) || !func_615(&(uParam0->f_2841), iParam3, 4)) || func_603(&(uParam0->f_2841), iParam3, 0))
			{
				func_812(uParam0, iParam3);
				func_797(uParam1, iParam3, 7);
				return 1;
			}
			break;
		case 7:
			if (func_386(&(uParam0->f_152), iParam3, 1))
			{
				if (!func_813(&(uParam0->f_2337), iParam3, 1))
				{
				}
				else
				{
					func_814(uParam1, iParam3);
					func_815(uParam1, iParam3);
					func_816(uParam1, func_204(&(uParam1->f_416), iParam3));
					func_817(uParam0, &(uParam1->f_416), iParam3);
					func_818(uParam0, iParam3);
					if (func_204(&(uParam1->f_416), iParam3) > 0)
					{
						func_797(uParam1, iParam3, 8);
						return 1;
					}
					else
					{
						func_797(uParam1, iParam3, 10);
						return 1;
					}
				}
			}
			break;
		case 8:
			if (!func_210(&(uParam0->f_2841), iParam3) || func_609(&(uParam0->f_2841), iParam3, 1))
			{
				func_798(&(uParam0->f_2841), iParam3, func_204(&(uParam1->f_416), iParam3));
				func_797(uParam1, iParam3, 9);
				return 1;
			}
			break;
		case 9:
			if (!func_210(&(uParam0->f_2841), iParam3) || !func_615(&(uParam0->f_2841), iParam3, 32))
			{
				func_797(uParam1, iParam3, 10);
				return 1;
			}
			break;
		case 10:
			func_799(uParam1, iParam3, 1);
			func_802(uParam1, iParam3);
			return 1;
	}
	return 0;
}

int func_310(var uParam0, var uParam1, var uParam2, int iParam3)
{
	switch (uParam2->f_1)
	{
		case 0:
			if (func_805(uParam1, iParam3, 1))
			{
				func_796(uParam1, iParam3, 1);
				func_797(uParam1, iParam3, 8);
				return 1;
			}
			break;
		case 8:
			if (func_393(&(uParam0->f_152), iParam3, 1))
			{
				if (func_210(&(uParam0->f_2841), iParam3) && func_609(&(uParam0->f_2841), iParam3, 1))
				{
					bVar0 = false;
					func_819(uParam1, iParam3);
					func_798(&(uParam0->f_2841), iParam3, func_204(&(uParam1->f_416), iParam3));
					if (iParam3 == uParam1->f_9)
					{
						func_205(uParam1, func_204(&(uParam1->f_416), iParam3));
						if (uParam1->f_1451 && uParam1->f_1453 > 0)
						{
							func_820(uParam1);
							bVar0 = true;
						}
					}
					if (!bVar0)
					{
						func_821(uParam0, iParam3, func_204(&(uParam1->f_416), iParam3));
						func_822(uParam0, iParam3, func_204(&(uParam1->f_416), iParam3));
					}
					func_797(uParam1, iParam3, 9);
					return 1;
				}
			}
			break;
		case 9:
			if (!func_210(&(uParam0->f_2841), iParam3) || !func_615(&(uParam0->f_2841), iParam3, 32))
			{
				func_799(uParam1, iParam3, 1);
				func_802(uParam1, iParam3);
				return 1;
			}
			break;
	}
	return 0;
}

int func_311(var uParam0, var uParam1, var uParam2, int iParam3)
{
	bVar0 = false;
	switch (uParam2->f_1)
	{
		case 0:
			if (func_127(&(uParam1->f_1658)) < 0f)
			{
				return 0;
			}
			if (uParam1->f_1998 == iParam3)
			{
				iVar1 = func_823(&(uParam1->f_416), iParam3);
			}
			else
			{
				iVar1 = -1;
			}
			if (iVar1 == -1)
			{
				if (func_805(uParam1, iParam3, 1))
				{
					func_796(uParam1, iParam3, 1);
					bVar0 = true;
				}
			}
			else if (((func_805(uParam1, iParam3, 1) && func_805(uParam1, iVar1, 1)) && !func_824(uParam1)) && !func_733(&(uParam0->f_2841)))
			{
				func_796(uParam1, iParam3, 1);
				func_796(uParam1, iVar1, 1);
				func_825(uParam1, iParam3, iVar1, 0);
				func_222(&(uParam0->f_2841), 1);
				func_826(&(uParam0->f_2841), iParam3, iVar1);
				bVar0 = true;
			}
			if (bVar0)
			{
				func_361(&(uParam1->f_1658), -uParam1->f_1457);
				uParam2->f_5 = 0;
				if (func_203(&(uParam1->f_416), iParam3))
				{
					uParam2->f_5 = func_204(&(uParam1->f_416), iParam3);
				}
				func_797(uParam1, iParam3, 11);
				return 1;
			}
			break;
		case 11:
			if (func_386(&(uParam0->f_152), iParam3, 1))
			{
				if (!func_210(&(uParam0->f_2841), iParam3) || func_609(&(uParam0->f_2841), iParam3, 1))
				{
					if (func_210(&(uParam0->f_2841), iParam3) && (func_455(&(uParam0->f_2841), iParam3) == 2 || func_779(&(uParam0->f_2841), iParam3) == 3))
					{
						func_683(&(uParam0->f_2841), iParam3, uParam1->f_1998, 2);
					}
					func_827(uParam1, &(uParam1->f_1671), &(uParam0->f_2841), &(uParam1->f_416), iParam3, uParam2->f_5);
					func_828(uParam1, uParam2->f_5);
					func_829(uParam0, iParam3);
					func_830(uParam0, iParam3);
					func_814(uParam1, iParam3);
					func_831(uParam1, iParam3);
					func_797(uParam1, iParam3, 12);
				}
			}
			break;
		case 12:
			if (!func_210(&(uParam0->f_2841), iParam3) || !func_615(&(uParam0->f_2841), iParam3, 17))
			{
				if (func_832(uParam1, iParam3))
				{
					func_797(uParam1, iParam3, 14);
					return 1;
				}
				else
				{
					func_797(uParam1, iParam3, 13);
					return 1;
				}
			}
			break;
		case 13:
			if (!func_210(&(uParam0->f_2841), iParam3) || func_609(&(uParam0->f_2841), iParam3, 1))
			{
				if (func_210(&(uParam0->f_2841), iParam3))
				{
					func_833(&(uParam0->f_2841), iParam3, uParam2->f_5, uParam1->f_11.f_13);
					func_616(uParam0, iParam3, 7, 6, -1);
				}
				func_797(uParam1, iParam3, 18);
			}
			break;
		case 14:
			if (!func_210(&(uParam0->f_2841), uParam1->f_2065) || func_609(&(uParam0->f_2841), uParam1->f_2065, 1))
			{
				if (func_834(&(uParam0->f_2841)))
				{
					func_797(uParam1, iParam3, 15);
					return 1;
				}
			}
			break;
		case 15:
			if (!func_210(&(uParam0->f_2841), iParam3) || func_609(&(uParam0->f_2841), iParam3, 1))
			{
				if (func_210(&(uParam0->f_2841), iParam3))
				{
					func_638(&(uParam0->f_2841), iParam3, uParam1->f_2065);
					func_835(&(uParam0->f_2841), iParam3);
				}
				func_797(uParam1, iParam3, 16);
				return 1;
			}
			break;
		case 16:
			if (!func_210(&(uParam0->f_2841), iParam3) || func_609(&(uParam0->f_2841), iParam3, 1))
			{
				if (func_210(&(uParam0->f_2841), iParam3))
				{
					func_833(&(uParam0->f_2841), iParam3, uParam2->f_5, uParam1->f_11.f_13);
					func_616(uParam0, iParam3, 7, 6, -1);
				}
				func_268(&(uParam2->f_2));
				func_797(uParam1, iParam3, 17);
			}
			break;
		case 17:
			if (func_101(&(uParam2->f_2), 1f))
			{
				func_437(uParam1, uParam1->f_2065);
				func_836(uParam0, uParam1->f_2065, 0);
				func_837(uParam0, iParam3, uParam1->f_2065);
				func_222(&(uParam0->f_2841), 0);
				func_421(&(uParam0->f_2841));
				func_797(uParam1, iParam3, 18);
			}
			break;
		case 18:
			if (!func_210(&(uParam0->f_2841), iParam3) || !((func_615(&(uParam0->f_2841), iParam3, 31) || func_615(&(uParam0->f_2841), iParam3, 29)) || func_615(&(uParam0->f_2841), iParam3, 33)))
			{
				func_799(uParam1, iParam3, 1);
				if (func_832(uParam1, iParam3))
				{
					func_799(uParam1, uParam1->f_2065, 1);
					func_838(uParam1, iParam3);
				}
				func_839(uParam0, iParam3);
				func_802(uParam1, iParam3);
			}
			break;
	}
	return 0;
}

int func_312(var uParam0, var uParam1, var uParam2)
{
	switch (uParam2->f_1)
	{
		case 0:
			func_435(uParam1, 0, 0);
			uParam2->f_4 = 0;
			func_840(uParam0, &(uParam1->f_416));
			func_411(&(uParam0->f_2337), uParam0);
			if (!func_210(&(uParam0->f_2841), uParam1->f_9))
			{
				func_841(uParam1, 16);
				return 1;
			}
			else
			{
				func_843(&(uParam0->f_2841), func_842(&(uParam0->f_2841), uParam1->f_9), func_204(&(uParam1->f_416), uParam1->f_9), uParam1->f_11.f_13);
				func_841(uParam1, 12);
				return 1;
			}
			break;
		case 12:
			if (!func_210(&(uParam0->f_2841), uParam1->f_9))
			{
				func_841(uParam1, 16);
				return 1;
			}
			else if (!func_733(&(uParam0->f_2841)))
			{
				func_222(&(uParam0->f_2841), 1);
				func_841(uParam1, 1);
				return 1;
			}
			break;
		case 1:
			if (!func_210(&(uParam0->f_2841), uParam1->f_9))
			{
				func_841(uParam1, 16);
				return 1;
			}
			else if (func_615(&(uParam0->f_2841), uParam1->f_9, 7))
			{
				if (func_844(&(uParam0->f_2841)) && func_845(&(uParam0->f_2841)))
				{
					func_471(&(uParam0->f_2841), uParam1->f_9, 0);
					func_846(&(uParam0->f_2841), uParam1->f_9, 1);
					func_847(&(uParam0->f_2841), uParam1->f_9);
					uParam2->f_4 = 1;
					func_841(uParam1, 4);
					return 1;
				}
			}
			else if (func_609(&(uParam0->f_2841), uParam1->f_9, 1))
			{
				if (func_455(&(uParam0->f_2841), uParam1->f_9) == 2)
				{
					func_683(&(uParam0->f_2841), uParam1->f_9, uParam1->f_1998, 2);
				}
				func_848(&(uParam0->f_2337));
				func_841(uParam1, 2);
				return 1;
			}
			break;
		case 2:
			if (!func_210(&(uParam0->f_2841), uParam1->f_9))
			{
				func_841(uParam1, 16);
				return 1;
			}
			else if (!func_615(&(uParam0->f_2841), uParam1->f_9, 17))
			{
				if (!func_844(&(uParam0->f_2841)) || func_845(&(uParam0->f_2841)))
				{
					func_471(&(uParam0->f_2841), uParam1->f_9, 0);
					func_846(&(uParam0->f_2841), uParam1->f_9, 1);
					func_847(&(uParam0->f_2841), uParam1->f_9);
					func_841(uParam1, 4);
					return 1;
				}
			}
			break;
		case 4:
			if (!func_210(&(uParam0->f_2841), uParam1->f_9))
			{
				func_841(uParam1, 16);
				return 1;
			}
			else if ((!func_844(&(uParam0->f_2841)) || func_849(&(uParam0->f_2841))) || func_850(&(uParam0->f_2841)))
			{
				if (uParam2->f_4)
				{
					func_792(&(uParam0->f_2841));
				}
				func_851(&(uParam0->f_2841));
				func_848(&(uParam0->f_2337));
				func_841(uParam1, 13);
				return 1;
			}
			break;
		case 13:
			if (!func_210(&(uParam0->f_2841), uParam1->f_9))
			{
				func_841(uParam1, 16);
				return 1;
			}
			else if (!func_844(&(uParam0->f_2841)) || func_849(&(uParam0->f_2841)))
			{
				func_841(uParam1, 16);
				return 1;
			}
			break;
		case 16:
			do_screen_fade_out(500);
			func_841(uParam1, 17);
			return 1;
		case 17:
			if (is_screen_faded_out())
			{
				if (func_210(&(uParam0->f_2841), uParam1->f_9))
				{
					func_460(&(uParam0->f_2841), uParam1->f_9, 1);
				}
				func_201(uParam1, 8);
				func_841(uParam1, 18);
			}
			break;
	}
	return 0;
}

void func_313(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1418[iParam1] = iParam2;
}

int func_314(var uParam0, var uParam1, var uParam2)
{
	switch (uParam2->f_1)
	{
		case 0:
			func_435(uParam1, 0, 0);
			func_840(uParam0, &(uParam1->f_416));
			func_411(&(uParam0->f_2337), uParam0);
			func_841(uParam1, 1);
			return 1;
		case 1:
			if (!func_210(&(uParam0->f_2841), uParam1->f_9) || func_609(&(uParam0->f_2841), uParam1->f_9, 1))
			{
				if (func_210(&(uParam0->f_2841), uParam1->f_9) && func_455(&(uParam0->f_2841), uParam1->f_9) == 2)
				{
					func_683(&(uParam0->f_2841), uParam1->f_9, uParam1->f_1998, 2);
				}
				func_841(uParam1, 2);
				return 1;
			}
			break;
		case 2:
			if (!func_210(&(uParam0->f_2841), uParam1->f_9) || !func_615(&(uParam0->f_2841), uParam1->f_9, 17))
			{
				func_201(uParam1, 8);
				func_841(uParam1, 18);
			}
			break;
	}
	return 0;
}

int func_315(var uParam0, var uParam1, var uParam2)
{
	switch (uParam2->f_1)
	{
		case 0:
			uParam2->f_2 = uParam1->f_9;
			uParam2->f_3 = 0;
			if (func_203(&(uParam1->f_416), uParam2->f_2))
			{
				uParam2->f_3 = func_204(&(uParam1->f_416), uParam2->f_2);
			}
			func_840(uParam0, &(uParam1->f_416));
			func_411(&(uParam0->f_2337), uParam0);
			if (!func_179(uParam1, 1959158395, 0))
			{
				func_183(uParam1);
			}
			if (func_615(&(uParam0->f_2841), uParam2->f_2, 7))
			{
				func_852(&(uParam0->f_2841), 0, 0);
				func_435(uParam1, 0, 0);
				func_841(uParam1, 3);
				return 1;
			}
			else
			{
				func_852(&(uParam0->f_2841), 1, 0);
				func_841(uParam1, 6);
				return 1;
			}
			break;
		case 3:
			if (!func_844(&(uParam0->f_2841)) || func_845(&(uParam0->f_2841)))
			{
				if (func_844(&(uParam0->f_2841)))
				{
					func_853(&(uParam0->f_2841), uParam2->f_2);
				}
				func_827(&(uParam0->f_152), &(uParam1->f_1671), &(uParam0->f_2841), &(uParam1->f_416), uParam2->f_2, uParam2->f_3);
				func_848(&(uParam0->f_2337));
				func_854(&(uParam0->f_2841), 1);
				func_460(&(uParam0->f_2841), uParam2->f_2, 1);
				func_841(uParam1, 4);
				return 1;
			}
			break;
		case 4:
			if ((!func_844(&(uParam0->f_2841)) || func_849(&(uParam0->f_2841))) || func_850(&(uParam0->f_2841)))
			{
				func_855(&(uParam0->f_2841), uParam2->f_2, 0, 0);
				func_791(&(uParam0->f_2841));
				func_792(&(uParam0->f_2841));
				func_790(&(uParam0->f_2841), 0);
				func_789(&(uParam0->f_2841), 0);
				func_856(&(uParam0->f_2841));
				iVar1 = 0;
				while (iVar1 < 6)
				{
					if (func_210(&(uParam0->f_2841), iVar1))
					{
						func_218(&(uParam0->f_2841), iVar1, 1, 0f);
					}
					iVar1++;
				}
				func_217(&(uParam0->f_4244));
				func_857(&(uParam0->f_2841));
				func_841(uParam1, 5);
			}
			break;
		case 5:
			if (!func_844(&(uParam0->f_2841)) || func_849(&(uParam0->f_2841)))
			{
				func_201(uParam1, 8);
				func_841(uParam1, 18);
			}
			break;
		case 6:
			if (func_179(uParam1, 1959158395, 0))
			{
				func_841(uParam1, 7);
				return 1;
			}
			break;
		case 7:
			if (func_858(uParam1, uParam2->f_2, 1))
			{
				func_859(uParam1, uParam2->f_2, 1);
				func_182(uParam1, 0, 1959158395, 0, 0);
				func_607(uParam1, 1995414514, 0);
				func_831(uParam1, uParam2->f_2);
				func_841(uParam1, 8);
				return 1;
			}
			break;
		case 8:
			if (!func_210(&(uParam0->f_2841), uParam2->f_2) || func_609(&(uParam0->f_2841), uParam2->f_2, 1))
			{
				if (func_210(&(uParam0->f_2841), uParam2->f_2) && func_455(&(uParam0->f_2841), uParam2->f_2) == 2)
				{
					func_683(&(uParam0->f_2841), uParam2->f_2, uParam1->f_1998, func_860(uParam2->f_3));
				}
				func_827(&(uParam0->f_152), &(uParam1->f_1671), &(uParam0->f_2841), &(uParam1->f_416), uParam2->f_2, uParam2->f_3);
				func_841(uParam1, 9);
				return 1;
			}
			break;
		case 9:
			if (!func_210(&(uParam0->f_2841), uParam2->f_2) || !func_615(&(uParam0->f_2841), uParam2->f_2, 17))
			{
				func_841(uParam1, 10);
				return 1;
			}
			break;
		case 10:
			if (!func_210(&(uParam0->f_2841), uParam2->f_2) || func_609(&(uParam0->f_2841), uParam2->f_2, 1))
			{
				if (uParam1->f_1998 == uParam2->f_2)
				{
					iVar0 = func_861(&(uParam1->f_416), uParam1->f_1998);
				}
				else
				{
					iVar0 = -1;
				}
				if (iVar0 != -1)
				{
					if (!func_844(&(uParam0->f_2841)) || func_845(&(uParam0->f_2841)))
					{
						if (func_844(&(uParam0->f_2841)))
						{
							func_853(&(uParam0->f_2841), uParam2->f_2);
						}
						func_848(&(uParam0->f_2337));
						func_854(&(uParam0->f_2841), 1);
						func_460(&(uParam0->f_2841), uParam2->f_2, 1);
						func_841(uParam1, 12);
						return 1;
					}
				}
				else
				{
					if (func_210(&(uParam0->f_2841), uParam2->f_2))
					{
						func_862(&(uParam0->f_2841), uParam2->f_2, func_860(uParam2->f_3), 0);
					}
					func_616(uParam0, uParam2->f_2, 7, 6, -1);
					func_848(&(uParam0->f_2337));
					func_217(&(uParam0->f_4244));
					func_857(&(uParam0->f_2841));
					func_854(&(uParam0->f_2841), 1);
					func_841(uParam1, 11);
					return 1;
				}
			}
			break;
		case 12:
			if ((!func_844(&(uParam0->f_2841)) || func_849(&(uParam0->f_2841))) || func_850(&(uParam0->f_2841)))
			{
				iVar0 = func_861(&(uParam1->f_416), uParam1->f_1998);
				if (iVar0 == -1)
				{
					iVar0 = uParam1->f_1998;
					func_863(&iVar0);
				}
				func_437(uParam1, iVar0);
				func_836(uParam0, iVar0, 0);
				func_855(&(uParam0->f_2841), uParam2->f_2, 0, 0);
				func_462(&(uParam0->f_2841), uParam2->f_2);
				func_856(&(uParam0->f_2841));
				func_217(&(uParam0->f_4244));
				func_857(&(uParam0->f_2841));
				func_841(uParam1, 13);
			}
			break;
		case 13:
			if (!func_844(&(uParam0->f_2841)) || func_849(&(uParam0->f_2841)))
			{
				func_864(uParam1, uParam2->f_2, 1);
				func_865(&(uParam0->f_2841));
				func_201(uParam1, 6);
				if (func_866(&(uParam1->f_416)) <= 1)
				{
					func_867(&(uParam0->f_2841), 1);
				}
				func_841(uParam1, 14);
				return 1;
			}
			break;
		case 11:
			if (!func_210(&(uParam0->f_2841), uParam2->f_2))
			{
				func_864(uParam1, uParam2->f_2, 1);
				func_855(&(uParam0->f_2841), uParam2->f_2, 0, 1);
				func_865(&(uParam0->f_2841));
				func_201(uParam1, 6);
				if (func_866(&(uParam1->f_416)) <= 1)
				{
					func_867(&(uParam0->f_2841), 1);
				}
				func_841(uParam1, 14);
				return 1;
			}
			break;
		case 14:
			if (func_868(&(uParam0->f_2841)))
			{
				func_435(uParam1, 0, 0);
				func_841(uParam1, 15);
				return 1;
			}
			else if (uParam1->f_1548 == 0)
			{
				func_201(uParam1, 8);
				func_841(uParam1, 18);
				return 0;
			}
			else if (uParam0->f_42 == 40)
			{
				if (!is_sphere_visible(uParam0->f_2841 + Vector(0.4f, 0f, 0f), 2.5f) && vdist(Global_35, uParam0->f_2841 - Vector(10f, 0f, 0f)) > 16f)
				{
					iVar1 = 0;
					while (iVar1 < 6)
					{
						if (func_210(&(uParam0->f_2841), iVar1))
						{
							if (func_602(&(uParam0->f_2841), iVar1, 4) && vdist(get_entity_coords(func_869(&(uParam0->f_2841), iVar1), true, false), uParam0->f_2841 + Vector(0.4f, 0f, 0f)) > 2.5f)
							{
								if (func_203(&(uParam1->f_416), iVar1))
								{
									func_828(uParam1, func_204(&(uParam1->f_416), iVar1));
								}
								func_211(&(uParam0->f_2841), iVar1, 0);
							}
							else if ((func_602(&(uParam0->f_2841), iVar1, 29) || func_602(&(uParam0->f_2841), iVar1, 30)) || func_602(&(uParam0->f_2841), iVar1, 28))
							{
								func_461(&(uParam0->f_2841), iVar1);
							}
							else if (!func_203(&(uParam1->f_416), iVar1))
							{
								func_461(&(uParam0->f_2841), iVar1);
							}
						}
						iVar1++;
					}
					func_792(&(uParam0->f_2841));
					func_791(&(uParam0->f_2841));
					func_870(&(uParam0->f_2841), 0);
					func_790(&(uParam0->f_2841), 0);
					func_789(&(uParam0->f_2841), 0);
					iVar3 = (func_871(&(uParam1->f_416)) - func_872(&(uParam1->f_416)));
					iVar2 = 0;
					iVar1 = 0;
					while (iVar1 < 6)
					{
						if (func_210(&(uParam0->f_2841), iVar1))
						{
							iVar2++;
						}
						iVar1++;
					}
					iVar4 = 0;
					if (iVar2 > 0)
					{
						iVar4 = (iVar3 / iVar2);
					}
					iVar1 = 0;
					while (iVar1 < 6)
					{
						if (func_210(&(uParam0->f_2841), iVar1))
						{
							iVar5 = func_204(&(uParam1->f_416), iVar1);
							iVar5 = (iVar5 + iVar4);
							func_873(&(uParam1->f_416), iVar1, iVar5);
						}
						iVar1++;
					}
					iVar1 = 0;
					while (iVar1 < 6)
					{
						if (func_210(&(uParam0->f_2841), iVar1))
						{
							func_218(&(uParam0->f_2841), iVar1, 1, 0);
							func_855(&(uParam0->f_2841), iVar1, func_204(&(uParam1->f_416), iVar1), 0);
						}
						iVar1++;
					}
					func_435(uParam1, 0, 0);
					func_201(uParam1, 8);
					func_841(uParam1, 18);
					return 0;
				}
			}
			break;
		case 15:
			if (func_874(&(uParam0->f_2841)) == 0)
			{
				func_424(&(uParam0->f_2841));
				func_201(uParam1, 8);
				func_841(uParam1, 18);
				return 0;
			}
			break;
	}
	return 0;
}

int func_316(var uParam0, var uParam1, var uParam2)
{
	switch (uParam2->f_1)
	{
		case 0:
			func_435(uParam1, 0, 0);
			func_840(uParam0, &(uParam1->f_416));
			func_411(&(uParam0->f_2337), uParam0);
			func_852(&(uParam0->f_2841), 1, 1);
			if (_0xfc464598f6ee97b0())
			{
				_0x31108bb5715d035f();
			}
			switch (uParam0->f_42)
			{
				case 76:
					_0x20d504994fdc4412("hso_poker_seats", "hso_normal_seats");
					break;
				case 104:
					_0x20d504994fdc4412("dewclm_poker_seats", "dewclm_normal_seats");
					break;
				case 9:
					_0x20d504994fdc4412("shb_poker_seats", "shb_normal_seats");
					break;
			}
			func_841(uParam1, 1);
			return 1;
		case 1:
			if (!func_210(&(uParam0->f_2841), uParam1->f_9) || func_609(&(uParam0->f_2841), uParam1->f_9, 1))
			{
				if (func_210(&(uParam0->f_2841), uParam1->f_9) && func_455(&(uParam0->f_2841), uParam1->f_9) == 2)
				{
					func_683(&(uParam0->f_2841), uParam1->f_9, uParam1->f_1998, 2);
				}
				func_827(uParam1, &(uParam1->f_1671), &(uParam0->f_2841), &(uParam1->f_416), uParam1->f_9, func_204(&(uParam1->f_416), uParam1->f_9));
				func_848(&(uParam0->f_2337));
				func_841(uParam1, 2);
				return 1;
			}
			break;
		case 2:
			if (!func_210(&(uParam0->f_2841), uParam1->f_9) || !func_602(&(uParam0->f_2841), uParam1->f_9, 17))
			{
				if ((!func_844(&(uParam0->f_2841)) || func_845(&(uParam0->f_2841))) && (!_0xfc464598f6ee97b0() || _0xc2c05defe85a0b64()))
				{
					if (func_210(&(uParam0->f_2841), uParam1->f_9))
					{
						func_854(&(uParam0->f_2841), 1);
						func_853(&(uParam0->f_2841), uParam1->f_9);
						func_460(&(uParam0->f_2841), uParam1->f_9, 1);
					}
					else
					{
						func_420(&(uParam0->f_2841));
					}
					func_841(uParam1, 12);
					return 1;
				}
			}
			break;
		case 12:
			if ((!func_844(&(uParam0->f_2841)) || func_849(&(uParam0->f_2841))) || func_850(&(uParam0->f_2841)))
			{
				if (_0xfc464598f6ee97b0())
				{
					_0x040ee319efd1d3b5();
				}
				remove_model_hide(uParam0->f_2841, 2.5f, -686064834, 1);
				func_217(&(uParam0->f_4244));
				func_213(&(uParam0->f_2841), 1);
				iVar0 = 0;
				while (iVar0 < 6)
				{
					if (func_210(&(uParam0->f_2841), iVar0))
					{
						iVar1 = func_869(&(uParam0->f_2841), iVar0);
						if (!is_ped_injured(iVar1))
						{
							vVar5 = { *uParam0->f_2841.f_1236[iVar0] - uParam0->f_2841 };
							vVar5.f_2 = 0f;
							vVar5 = { func_875(vVar5) * Vector(2f, 2f, 2f) };
							vVar5.f_2 = 1f;
							vVar2 = { uParam0->f_2841 + vVar5 };
							get_ground_z_for_3d_coord(vVar2, &(vVar2.f_2), false);
							clear_ped_tasks_immediately(iVar1, false, true);
							set_entity_coords(iVar1, vVar2, true, false, true, true);
							set_entity_heading(iVar1, get_heading_from_vector_2d(vVar5.x, vVar5.y));
							func_211(&(uParam0->f_2841), iVar0, 0);
						}
					}
					iVar0++;
				}
				func_841(uParam1, 13);
				return 1;
			}
			break;
		case 13:
			if (!func_844(&(uParam0->f_2841)) || func_849(&(uParam0->f_2841)))
			{
				func_201(uParam1, 8);
				func_841(uParam1, 18);
			}
			break;
	}
	return 0;
}

int func_317(var uParam0, var uParam1, var uParam2)
{
	switch (uParam2->f_1)
	{
		case 0:
			func_840(uParam0, &(uParam1->f_416));
			func_411(&(uParam0->f_2337), uParam0);
			func_841(uParam1, 18);
			return 1;
	}
	return 0;
}

int func_318(var uParam0, var uParam1, var uParam2)
{
	switch (uParam2->f_1)
	{
		case 0:
			func_268(&(uParam2->f_2));
			func_876(uParam1, 5);
			break;
		case 5:
			if (func_101(&(uParam2->f_2), 1.5f))
			{
				iVar0 = func_877(&(uParam0->f_2841), uParam1->f_9, -1, -1);
				iVar1 = func_877(&(uParam0->f_2841), -1, -1, -1);
				if (func_878(uParam0, &(uParam1->f_1871.f_96), iVar0, "postGame_chatter", iVar1, 100, &iVar2, &iVar3))
				{
					func_784(uParam0, iVar3, iVar2, 10);
					func_616(uParam0, iVar2, 8, 6, -1);
				}
				func_876(uParam1, 2);
			}
			break;
		case 2:
			if (func_736(&(uParam0->f_2841)))
			{
				func_268(&(uParam2->f_2));
			}
			else if (func_101(&(uParam2->f_2), 1.5f))
			{
				iVar0 = func_877(&(uParam0->f_2841), uParam1->f_9, -1, -1);
				iVar1 = func_877(&(uParam0->f_2841), -1, -1, -1);
				if (func_878(uParam0, &(uParam1->f_1871.f_96), iVar0, "postGame_chatter", iVar1, 100, &iVar2, &iVar3))
				{
					func_784(uParam0, iVar3, iVar2, 10);
					func_616(uParam0, iVar2, 8, 6, -1);
				}
				func_876(uParam1, 3);
			}
			break;
		case 3:
			break;
	}
	return 0;
}

void func_319(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1431[iParam1] = iParam2;
}

int func_320(var uParam0, var uParam1, var uParam2)
{
	iVar21 = -1;
	iVar22 = -1;
	iVar0 = func_877(&(uParam0->f_2841), -1, -1, -1);
	iVar1 = func_877(&(uParam0->f_2841), uParam1->f_9, -1, -1);
	iVar2 = iVar0;
	uVar4 = func_879(&(uParam1->f_1671));
	iVar5 = func_880(&(uParam1->f_1671));
	iVar6 = (uVar4 && -1 ^ iVar5);
	uVar11 = func_881(&(uParam1->f_1671));
	uVar12 = func_882(&(uParam1->f_1671));
	uVar13 = func_883(&(uParam1->f_1671));
	uVar14 = func_884(&(uParam1->f_1671));
	uVar15 = func_885(&(uParam1->f_1671));
	uVar16 = func_886(&(uParam1->f_1671));
	if (uParam2->f_8 != -1)
	{
		set_bit(&iVar3, uParam2->f_8);
	}
	iVar23 = 0;
	while (iVar23 < 6)
	{
		if (is_bit_set(iVar0, iVar23))
		{
			fVar17 = func_887(&(uParam1->f_1671), iVar23);
			fVar18 = func_888(&(uParam1->f_1671), iVar23);
			fVar19 = func_889(&(uParam1->f_1671), iVar23);
			if (func_890(fVar17))
			{
				set_bit(&iVar9, iVar23);
			}
			if (func_891(fVar17))
			{
				set_bit(&uVar10, iVar23);
			}
			if (is_bit_set(iVar5, iVar23))
			{
				if (func_892(fVar18))
				{
					set_bit(&uVar7, iVar23);
				}
			}
			if (is_bit_set(iVar6, iVar23))
			{
				if (func_893(fVar19))
				{
					set_bit(&iVar8, iVar23);
				}
			}
		}
		iVar23++;
	}
	switch (uParam2->f_1)
	{
		case 0:
			func_478(&(uParam2->f_5));
			if (func_894(&(uParam1->f_416)) > 0 || uParam0->f_152.f_1671.f_130)
			{
				func_876(uParam1, 1);
				return 1;
			}
			else
			{
				func_361(&(uParam2->f_2), -4f);
				func_876(uParam1, 5);
				return 1;
			}
			break;
		case 1:
			if (((((func_894(&(uParam1->f_416)) == 0 && !uParam0->f_152.f_1671.f_130) && !func_788(uParam1)) && !func_895(uParam1, 4)) && !func_896(uParam1)) && !func_736(&(uParam0->f_2841)))
			{
				func_361(&(uParam2->f_2), -3.5f);
				func_876(uParam1, 21);
			}
			break;
		case 5:
			iVar23 = 0;
			while (iVar23 < 6)
			{
				if ((func_210(&(uParam0->f_2841), iVar23) && func_602(&(uParam0->f_2841), iVar23, 18)) && !func_603(&(uParam0->f_2841), iVar23, 1))
				{
					bVar24 = true;
				}
				iVar23++;
			}
			if (bVar24)
			{
				func_361(&(uParam2->f_2), -get_random_float_in_range(3f, 4f));
			}
			if (func_101(&(uParam2->f_2), 0f) && !func_736(&(uParam0->f_2841)))
			{
				if (func_878(uParam0, &(uParam1->f_1871.f_16), (iVar0 && uVar11), "postGame_brokeWinningStreak", iVar2, 100, &iVar21, &iVar22))
				{
					uParam2->f_8 = iVar21;
					uParam2->f_9 = iVar22;
					func_616(uParam0, iVar21, 8, 6, iVar22);
					func_876(uParam1, 7);
					return 0;
				}
				if (func_878(uParam0, &(uParam1->f_1871.f_26), (iVar0 && uVar12), "postGame_brokeLosingStreak", iVar2, 100, &iVar21, &iVar22))
				{
					uParam2->f_8 = iVar21;
					uParam2->f_9 = iVar22;
					func_616(uParam0, iVar21, 8, 6, iVar22);
					func_876(uParam1, 8);
					return 0;
				}
				if (func_878(uParam0, &(uParam1->f_1871.f_56), (((iVar0 && -1 ^ iVar9) && uVar7) && uVar15), "postGame_mono_goodGame", iVar2, 60, &iVar21, &iVar22))
				{
					uParam2->f_8 = iVar21;
					uParam2->f_9 = iVar22;
					func_616(uParam0, iVar21, 8, 6, iVar22);
					func_876(uParam1, 11);
					return 0;
				}
				if (func_878(uParam0, &(uParam1->f_1871.f_66), (((iVar0 && iVar6) && -1 ^ iVar8) && uVar16), "postGame_frustrated_lvl1", iVar2, 60, &iVar21, &iVar22))
				{
					uParam2->f_8 = iVar21;
					uParam2->f_9 = iVar22;
					func_616(uParam0, iVar21, 8, 6, iVar22);
					func_876(uParam1, 12);
					return 0;
				}
				if (func_878(uParam0, &(uParam1->f_1871.f_36), ((iVar0 && uVar13) && -1 ^ iVar9), "postGame_winningStreak", iVar2, 100, &iVar21, &iVar22))
				{
					uParam2->f_8 = iVar21;
					uParam2->f_9 = iVar22;
					func_616(uParam0, iVar21, 8, 6, iVar22);
					func_876(uParam1, 9);
					return 0;
				}
				if (func_878(uParam0, &(uParam1->f_1871.f_46), (iVar0 && uVar14), "postGame_losingStreak", iVar2, 100, &iVar21, &iVar22))
				{
					uParam2->f_8 = iVar21;
					uParam2->f_9 = iVar22;
					func_616(uParam0, iVar21, 8, 6, iVar22);
					func_876(uParam1, 10);
					return 0;
				}
				func_361(&(uParam2->f_2), -2f);
				func_876(uParam1, 6);
				return 0;
			}
			break;
		case 6:
			if (func_101(&(uParam2->f_2), 0f))
			{
				iVar21 = func_897(uParam0, iVar0, "postGame_fillerFX", -1, 60);
				if (iVar21 != -1)
				{
					uParam2->f_8 = iVar21;
					uParam2->f_9 = -1;
					func_616(uParam0, iVar21, 8, 6, -1);
					func_876(uParam1, 13);
					return 0;
				}
				func_876(uParam1, 21);
				return 0;
			}
			break;
		case 7:
			if (!func_736(&(uParam0->f_2841)))
			{
				if (func_898(uParam0, uParam2->f_9, "postGame_commentLoss", uParam2->f_8, 100))
				{
					func_899(&(uParam1->f_1871.f_86), uParam2->f_9);
					func_784(uParam0, uParam2->f_8, uParam2->f_9, 10);
					func_616(uParam0, uParam2->f_9, 8, 6, -1);
					func_876(uParam1, 17);
					return 0;
				}
				if (func_900(uParam0, &(uParam1->f_1871.f_86), (iVar2 && -1 ^ iVar3), "postGame_commentLoss", uParam2->f_8, 100, &iVar21))
				{
					uParam2->f_9 = iVar21;
					func_784(uParam0, uParam2->f_8, uParam2->f_9, 10);
					func_616(uParam0, uParam2->f_9, 8, 6, -1);
					func_876(uParam1, 17);
					return 0;
				}
				func_876(uParam1, 21);
				return 0;
			}
			break;
		case 8:
			if (!func_736(&(uParam0->f_2841)))
			{
				if (func_898(uParam0, uParam2->f_9, "postGame_commentWin", uParam2->f_8, 100))
				{
					func_899(&(uParam1->f_1871.f_76), uParam2->f_9);
					func_784(uParam0, uParam2->f_8, uParam2->f_9, 10);
					func_616(uParam0, uParam2->f_9, 8, 6, -1);
					func_876(uParam1, 16);
					return 0;
				}
				if (func_900(uParam0, &(uParam1->f_1871.f_76), (iVar2 && -1 ^ iVar3), "postGame_commentWin", uParam2->f_8, 100, &iVar21))
				{
					uParam2->f_9 = iVar21;
					func_784(uParam0, uParam2->f_8, uParam2->f_9, 10);
					func_616(uParam0, uParam2->f_9, 8, 6, -1);
					func_876(uParam1, 16);
					return 0;
				}
				func_876(uParam1, 21);
				return 0;
			}
			break;
		case 9:
			if (!func_736(&(uParam0->f_2841)))
			{
				if (func_898(uParam0, uParam2->f_9, "postGame_commentWinningStreak", uParam2->f_8, 100))
				{
					func_784(uParam0, uParam2->f_8, uParam2->f_9, 10);
					func_616(uParam0, uParam2->f_9, 8, 6, -1);
					func_876(uParam1, 14);
					return 0;
				}
				iVar21 = func_897(uParam0, (iVar2 && -1 ^ iVar3), "postGame_commentWinningStreak", uParam2->f_8, 100);
				if (iVar21 != -1)
				{
					uParam2->f_9 = iVar21;
					func_784(uParam0, uParam2->f_8, uParam2->f_9, 10);
					func_616(uParam0, uParam2->f_9, 8, 6, -1);
					func_876(uParam1, 14);
					return 0;
				}
				if (func_900(uParam0, &(uParam1->f_1871.f_76), (iVar2 && -1 ^ iVar3), "postGame_commentWin", uParam2->f_8, 100, &iVar21))
				{
					uParam2->f_9 = iVar21;
					func_784(uParam0, uParam2->f_8, uParam2->f_9, 10);
					func_616(uParam0, uParam2->f_9, 8, 6, -1);
					func_876(uParam1, 16);
					return 0;
				}
				func_876(uParam1, 21);
				return 0;
			}
			break;
		case 10:
			if (!func_736(&(uParam0->f_2841)))
			{
				if (func_898(uParam0, uParam2->f_9, "postGame_commentLosingStreak", uParam2->f_8, 100))
				{
					func_784(uParam0, uParam2->f_8, uParam2->f_9, 10);
					func_616(uParam0, uParam2->f_9, 8, 6, -1);
					func_876(uParam1, 15);
					return 0;
				}
				iVar21 = func_897(uParam0, (iVar2 && -1 ^ iVar3), "postGame_commentLosingStreak", uParam2->f_8, 100);
				if (iVar21 != -1)
				{
					uParam2->f_9 = iVar21;
					func_784(uParam0, uParam2->f_8, uParam2->f_9, 10);
					func_616(uParam0, uParam2->f_9, 8, 6, -1);
					func_876(uParam1, 15);
					return 0;
				}
				if (func_900(uParam0, &(uParam1->f_1871.f_86), (iVar2 && -1 ^ iVar3), "postGame_commentLoss", uParam2->f_8, 100, &iVar21))
				{
					uParam2->f_9 = iVar21;
					func_784(uParam0, uParam2->f_8, uParam2->f_9, 10);
					func_616(uParam0, uParam2->f_9, 8, 6, -1);
					func_876(uParam1, 17);
					return 0;
				}
				func_876(uParam1, 21);
				return 0;
			}
			break;
		case 11:
			if (!func_736(&(uParam0->f_2841)))
			{
				if (func_898(uParam0, uParam2->f_9, "postGame_commentWin", uParam2->f_8, 60))
				{
					func_899(&(uParam1->f_1871.f_76), uParam2->f_9);
					func_784(uParam0, uParam2->f_8, uParam2->f_9, 10);
					func_616(uParam0, uParam2->f_9, 8, 6, -1);
					func_876(uParam1, 16);
					return 0;
				}
				if (func_900(uParam0, &(uParam1->f_1871.f_76), (iVar2 && -1 ^ iVar3), "postGame_commentWin", uParam2->f_8, 60, &iVar21))
				{
					uParam2->f_9 = iVar21;
					func_784(uParam0, uParam2->f_8, uParam2->f_9, 10);
					func_616(uParam0, uParam2->f_9, 8, 6, -1);
					func_876(uParam1, 16);
					return 0;
				}
				func_876(uParam1, 21);
				return 0;
			}
			break;
		case 12:
			if (!func_736(&(uParam0->f_2841)))
			{
				if (func_898(uParam0, uParam2->f_9, "postGame_commentLoss", uParam2->f_8, 100))
				{
					func_899(&(uParam1->f_1871.f_86), uParam2->f_9);
					func_784(uParam0, uParam2->f_8, uParam2->f_9, 10);
					func_616(uParam0, uParam2->f_9, 8, 6, -1);
					func_876(uParam1, 17);
					return 0;
				}
				if (func_900(uParam0, &(uParam1->f_1871.f_86), (iVar2 && -1 ^ iVar3), "postGame_commentLoss", uParam2->f_8, 100, &iVar21))
				{
					uParam2->f_9 = iVar21;
					func_784(uParam0, uParam2->f_8, uParam2->f_9, 10);
					func_616(uParam0, uParam2->f_9, 8, 6, -1);
					func_876(uParam1, 17);
					return 0;
				}
				func_876(uParam1, 21);
				return 0;
			}
			break;
		case 19:
			if (!func_736(&(uParam0->f_2841)))
			{
				if (func_898(uParam0, uParam2->f_9, "chat_camp_response_NOCONV", uParam2->f_8, 100))
				{
					func_876(uParam1, 20);
					return 0;
				}
				func_876(uParam1, 21);
				return 0;
			}
			break;
		case 17:
			if (!func_736(&(uParam0->f_2841)))
			{
				if (func_890(func_887(&(uParam1->f_1671), uParam2->f_8)))
				{
					iVar20 = 100;
				}
				else
				{
					iVar20 = 50;
				}
				if (func_901(uParam0, &(uParam1->f_1871.f_116), uParam2->f_8, "postGame_rebuff", uParam2->f_9, iVar20))
				{
					func_784(uParam0, uParam2->f_9, uParam2->f_8, 10);
					func_616(uParam0, uParam2->f_8, 8, 6, -1);
					func_876(uParam1, 18);
					return 0;
				}
				func_876(uParam1, 21);
				return 0;
			}
			break;
		case 13:
		case 14:
		case 15:
		case 16:
		case 18:
		case 20:
			if (!func_736(&(uParam0->f_2841)))
			{
				func_876(uParam1, 21);
				return 0;
			}
			break;
		case 21:
			if (!func_736(&(uParam0->f_2841)))
			{
				func_361(&(uParam2->f_2), -get_random_float_in_range(4f, 8f));
				func_876(uParam1, 22);
				return 0;
			}
			break;
		case 22:
			if (func_101(&(uParam2->f_2), 0f))
			{
				iVar0 = func_877(&(uParam0->f_2841), -1, -1, -1);
				iVar2 = iVar0;
				if (func_878(uParam0, &(uParam1->f_1871.f_96), iVar0, "postGame_chatter", iVar2, 66, &iVar21, &iVar22))
				{
					uParam2->f_8 = iVar21;
					uParam2->f_9 = iVar22;
					func_616(uParam0, iVar21, 8, 6, iVar22);
					func_876(uParam1, 23);
					return 0;
				}
				iVar21 = func_897(uParam0, iVar0, "postGame_fillerFX", -1, 60);
				if (iVar21 != -1)
				{
					func_616(uParam0, iVar21, 8, 6, -1);
					func_876(uParam1, 30);
					return 0;
				}
				func_876(uParam1, 28);
				return 0;
			}
			break;
		case 23:
			if (func_736(&(uParam0->f_2841)))
			{
				func_361(&(uParam2->f_2), -0.75f);
			}
			else if (func_101(&(uParam2->f_2), 0f))
			{
				if (func_901(uParam0, &(uParam1->f_1871.f_106), uParam2->f_9, "postGame_banter", uParam2->f_8, 50))
				{
					func_616(uParam0, uParam2->f_9, 8, 6, uParam2->f_8);
					func_876(uParam1, 25);
					return 0;
				}
				if (func_901(uParam0, &(uParam1->f_1871.f_106), uParam2->f_9, "postGame_chatter", uParam2->f_8, 33))
				{
					func_616(uParam0, uParam2->f_9, 8, 6, uParam2->f_8);
					func_876(uParam1, 24);
					return 0;
				}
				func_876(uParam1, 28);
				return 0;
			}
			break;
		case 24:
		case 25:
			if (!func_736(&(uParam0->f_2841)))
			{
				func_876(uParam1, 28);
				return 0;
			}
			break;
		case 26:
			if (!func_736(&(uParam0->f_2841)))
			{
				func_876(uParam1, 28);
				return 0;
			}
			break;
		case 27:
			if (!func_736(&(uParam0->f_2841)))
			{
				func_876(uParam1, 28);
				return 0;
			}
			break;
		case 28:
			if (!func_736(&(uParam0->f_2841)))
			{
				func_361(&(uParam2->f_2), -5f);
				func_876(uParam1, 29);
				return 0;
			}
			break;
		case 29:
			if (func_101(&(uParam2->f_2), 0f))
			{
				iVar0 = func_877(&(uParam0->f_2841), -1, -1, -1);
				if (func_897(uParam0, iVar0, "postGame_fillerFX", -1, 60) != -1)
				{
					func_616(uParam0, iVar21, 8, 6, -1);
					func_876(uParam1, 30);
					return 0;
				}
			}
			break;
		case 30:
			if (!func_736(&(uParam0->f_2841)))
			{
				func_876(uParam1, 28);
				return 0;
			}
			break;
	}
	return 0;
}

int func_321(var uParam0, var uParam1, var uParam2)
{
	iVar9 = -1;
	switch (uParam2->f_1)
	{
		case 0:
			if (!func_736(&(uParam0->f_2841)))
			{
				iVar0 = func_877(&(uParam0->f_2841), -1, -1, -1);
				iVar1 = func_902(&(uParam1->f_1671));
				uVar2 = func_903(&(uParam1->f_1671));
				iVar4 = (uVar2 && -1 ^ iVar1);
				iVar10 = func_904(&(uParam1->f_1671));
				iVar11 = 0;
				while (iVar11 < 6)
				{
					if (is_bit_set(iVar4, iVar11))
					{
						fVar13 = func_905(&(uParam1->f_1671), iVar11);
						fVar14 = func_887(&(uParam1->f_1671), iVar11);
						if (func_906(fVar13, fVar14))
						{
							set_bit(&uVar5, iVar11);
						}
						else
						{
							set_bit(&uVar6, iVar11);
						}
					}
					iVar11++;
				}
				func_616(uParam0, iVar10, 8, 6, -1);
				iVar9 = func_897(uParam0, (iVar0 && uVar6), "postCelebrate_disapproveFX", -1, 66);
				if (iVar9 != -1)
				{
					func_361(&(uParam2->f_2), 0f);
					func_876(uParam1, 2);
					return 0;
				}
				func_361(&(uParam2->f_2), -0.5f);
				func_876(uParam1, 2);
			}
			break;
		case 2:
			if (func_101(&(uParam2->f_2), 0f) && !func_736(&(uParam0->f_2841)))
			{
				iVar0 = func_877(&(uParam0->f_2841), -1, -1, -1);
				iVar1 = func_902(&(uParam1->f_1671));
				uVar2 = func_903(&(uParam1->f_1671));
				uVar3 = func_907(&(uParam1->f_1671));
				iVar4 = (uVar2 && -1 ^ iVar1);
				iVar10 = func_904(&(uParam1->f_1671));
				iVar11 = 0;
				while (iVar11 < 6)
				{
					if (is_bit_set(iVar4, iVar11))
					{
						fVar13 = func_905(&(uParam1->f_1671), iVar11);
						fVar14 = func_887(&(uParam1->f_1671), iVar11);
						if (func_906(fVar13, fVar14))
						{
							set_bit(&uVar5, iVar11);
						}
						else
						{
							set_bit(&uVar6, iVar11);
						}
					}
					iVar11++;
				}
				if (func_702(&(uParam1->f_416), iVar10))
				{
					if (func_908(&(uParam1->f_416), iVar10))
					{
						iVar9 = func_897(uParam0, (iVar0 && iVar4), "postCelebrate_commentRareWin", iVar10, 100);
						if (iVar9 != -1)
						{
							func_616(uParam0, iVar9, 8, 6, -1);
							func_876(uParam1, 3);
							return 0;
						}
					}
					if (func_909(&(uParam1->f_416), iVar10))
					{
						iVar9 = func_897(uParam0, (iVar0 && iVar4), "postCelebrate_commentGoodWin", iVar10, 100);
						if (iVar9 != -1)
						{
							func_616(uParam0, iVar9, 8, 6, -1);
							func_876(uParam1, 3);
							return 0;
						}
					}
					if (func_910(&(uParam1->f_416), iVar10))
					{
						iVar9 = func_897(uParam0, (iVar0 && iVar4), "postCelebrate_lostToPoorWin", iVar10, 50);
						if (iVar9 != -1)
						{
							func_616(uParam0, iVar9, 8, 6, -1);
							func_876(uParam1, 3);
							return 0;
						}
					}
					if (func_910(&(uParam1->f_416), iVar10))
					{
						iVar9 = func_897(uParam0, (iVar0 && iVar4), "postCelebrate_commentPoorWin", iVar10, 100);
						if (iVar9 != -1)
						{
							func_616(uParam0, iVar9, 8, 6, -1);
							func_876(uParam1, 3);
							return 0;
						}
					}
				}
				iVar9 = func_897(uParam0, ((iVar0 && uVar5) && uVar3), "postCelebrate_bigLoss", iVar10, 100);
				if (iVar9 != -1)
				{
					func_616(uParam0, iVar9, 8, 6, -1);
					func_876(uParam1, 3);
					return 0;
				}
				iVar9 = func_897(uParam0, (iVar0 && uVar5), "postCelebrate_bigLoss", iVar10, 100);
				if (iVar9 != -1)
				{
					func_616(uParam0, iVar9, 8, 6, -1);
					func_876(uParam1, 3);
					return 0;
				}
				iVar9 = func_897(uParam0, ((iVar0 && uVar6) && uVar3), "postCelebrate_smallLoss", iVar10, 100);
				if (iVar9 != -1)
				{
					func_616(uParam0, iVar9, 8, 6, -1);
					func_876(uParam1, 3);
					return 0;
				}
				iVar9 = func_897(uParam0, (iVar0 && uVar6), "postCelebrate_smallLoss", iVar10, 100);
				if (iVar9 != -1)
				{
					func_616(uParam0, iVar9, 8, 6, -1);
					func_876(uParam1, 3);
					return 0;
				}
				func_876(uParam1, 3);
				return 0;
			}
			break;
		case 3:
			if (!func_736(&(uParam0->f_2841)))
			{
				func_361(&(uParam2->f_2), -get_random_float_in_range(0.3f, 0.45f));
				func_876(uParam1, 4);
			}
			break;
		case 4:
			iVar11 = 0;
			while (iVar11 < 6)
			{
				if (func_210(&(uParam0->f_2841), iVar11) && func_602(&(uParam0->f_2841), iVar11, 18))
				{
					func_911(uParam1);
					return 0;
				}
				iVar11++;
			}
			if (func_101(&(uParam2->f_2), 0f) && !func_736(&(uParam0->f_2841)))
			{
				iVar0 = func_877(&(uParam0->f_2841), -1, -1, -1);
				iVar1 = func_902(&(uParam1->f_1671));
				iVar11 = 0;
				while (iVar11 < 6)
				{
					if (is_bit_set(iVar4, iVar11))
					{
						fVar12 = func_912(&(uParam1->f_1671), iVar11);
						if (func_892(fVar12))
						{
							set_bit(&uVar7, iVar11);
						}
						else
						{
							set_bit(&uVar8, iVar11);
						}
					}
					iVar11++;
				}
				iVar9 = func_897(uParam0, (iVar0 && uVar7), "postCelebrate_excitedFX", 100, 100);
				if (iVar9 != -1)
				{
					func_616(uParam0, iVar9, 3, 6, -1);
				}
				iVar9 = func_897(uParam0, (iVar0 && iVar1), "postCelebrate_smallWinFX", 50, 100);
				if (iVar9 != -1)
				{
					func_616(uParam0, iVar9, 3, 6, -1);
				}
				func_911(uParam1);
				return 0;
			}
			break;
	}
	return 0;
}

int func_322(var uParam0, var uParam1, int iParam2, var uParam3)
{
	if (func_101(uParam3, 0f))
	{
		if (((!func_913(&(uParam1->f_416), iParam2) || !func_210(&(uParam0->f_2841), iParam2)) || !func_914(uParam1, iParam2, 0, 0)) || func_915(&(uParam0->f_2841), iParam2))
		{
			return 1;
		}
		else
		{
			if (func_916(&(uParam0->f_152), &(uParam0->f_152.f_1671), &(uParam0->f_2841), &(uParam0->f_152.f_416), iParam2))
			{
				func_917(uParam1, 1, 0.3f);
			}
			return 1;
		}
	}
	return 0;
}

void func_323(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1436[iParam1] = iParam2;
}

int func_324(var uParam0, var uParam1, int iParam2, var uParam3)
{
	if (func_101(uParam3, 0f))
	{
		if (((!func_913(&(uParam1->f_416), iParam2) || !func_210(&(uParam0->f_2841), iParam2)) || !func_914(uParam1, iParam2, 0, 0)) || func_915(&(uParam0->f_2841), iParam2))
		{
			return 1;
		}
		else
		{
			if (func_918(&(uParam0->f_152), &(uParam0->f_152.f_1671), &(uParam0->f_2841), &(uParam0->f_152.f_416), iParam2))
			{
				func_917(uParam1, 2, 0.1f);
			}
			return 1;
		}
	}
	return 0;
}

int func_325(var uParam0, var uParam1, int iParam2, var uParam3)
{
	if (func_101(uParam3, 0f))
	{
		if ((!func_913(&(uParam1->f_416), iParam2) || !func_210(&(uParam0->f_2841), iParam2)) || !func_914(uParam1, iParam2, 0, 0))
		{
			return 1;
		}
		else if (func_609(&(uParam0->f_2841), iParam2, 1))
		{
			if (!func_915(&(uParam0->f_2841), iParam2))
			{
				iVar0 = func_691(&(uParam1->f_416), iParam2);
				iVar1 = func_919(&(uParam1->f_416), iParam2);
				iVar2 = (func_204(&(uParam1->f_416), iParam2) - iVar1);
				iVar3 = (iVar2 + iVar0);
				fVar4 = (to_float(iVar0) / to_float(iVar3));
				fVar5 = (to_float((iVar1 - iVar0)) / to_float(iVar3));
				if (func_920(&(uParam0->f_2841), iParam2, 1))
				{
					if (is_bit_set(uParam1->f_2060, iParam2) && !is_bit_set(uParam1->f_2059, iParam2))
					{
						func_712(&(uParam0->f_2841), iParam2, 0, 1);
					}
					else if (!is_bit_set(uParam1->f_2060, iParam2) && is_bit_set(uParam1->f_2059, iParam2))
					{
						func_712(&(uParam0->f_2841), iParam2, 1, 1);
					}
					else if (fVar5 > 0f)
					{
						if (fVar5 >= 0.5f && uParam1->f_2061 < 1)
						{
							func_712(&(uParam0->f_2841), iParam2, 0, 1);
							uParam1->f_2061++;
							uParam1->f_2063++;
						}
						else if (fVar5 >= 0.25f && uParam1->f_2063 < 3)
						{
							func_712(&(uParam0->f_2841), iParam2, 0, 0);
							uParam1->f_2063++;
						}
					}
					else if (fVar4 >= 0.2f && uParam1->f_2063 < 3)
					{
						func_712(&(uParam0->f_2841), iParam2, 1, 0);
						uParam1->f_2063++;
					}
				}
				func_921(&(uParam0->f_152), &(uParam0->f_152.f_1671), &(uParam0->f_2841), &(uParam0->f_152.f_416), iParam2);
				func_917(uParam1, 3, 0.6f);
				return 1;
			}
		}
	}
	return 0;
}

int func_326(var uParam0, int iParam1, bool bParam2, var uParam3, var uParam4)
{
	if (bParam2)
	{
		if (!func_203(uParam0, iParam1) || func_624(uParam0, iParam1))
		{
			return 0;
		}
	}
	if ((((uParam0->f_1 == -1773144867 || uParam0->f_1 == -26793149) || uParam0->f_11 != 0) || uParam0->f_2 == -1) || func_206(uParam0) == 0)
	{
		*uParam3 = 2;
		*uParam4 = 0;
		return 1;
	}
	else if (uParam0->f_1 == -441318505 || uParam0->f_14 != 0)
	{
		if (((uParam0->f_2 == 0 || uParam0->f_2 == 1) || uParam0->f_2 == 2) || uParam0->f_2 == 3)
		{
			*uParam3 = 4;
			*uParam4 = 2;
			return 1;
		}
		else if (uParam0->f_2 == 4)
		{
			*uParam3 = 9;
			*uParam4 = 2;
			return 1;
		}
	}
	else if (uParam0->f_1 == -1179646469 || uParam0->f_12 != 0)
	{
		*uParam3 = 2;
		*uParam4 = 0;
		return 1;
	}
	return 0;
}

void func_327(var uParam0, int iParam1)
{
	uParam0->f_1441 = iParam1;
}

int func_328(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = -1587988328;
			return 1;
		case 1:
			*uParam0 = -1993750510;
			return 1;
		case 2:
			*uParam0 = 1069538232;
			return 1;
		case 3:
			*uParam0 = 1590697544;
			return 1;
		case 4:
			*uParam0 = 335130626;
			return 1;
		case 5:
			*uParam0 = 855344262;
			return 1;
		case 6:
			*uParam0 = -1884742536;
			return 1;
		case 7:
			*uParam0 = -1499241424;
			return 1;
		case 8:
			*uParam0 = -1499241424;
			return 1;
		default:
			break;
	}
	return 0;
	return 0;
}

int func_329(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 470485448;
			return 1;
		case 1:
			*uParam0 = -291109262;
			return 1;
		case 2:
			*uParam0 = 210029681;
			return 1;
		case 3:
			*uParam0 = 2037482211;
			return 1;
		case 4:
			*uParam0 = 877666613;
			return 1;
		case 5:
			*uParam0 = -1127201651;
			return 1;
		case 6:
			*uParam0 = 1941338030;
			return 1;
		case 7:
			*uParam0 = 181651164;
			return 1;
		case 8:
			*uParam0 = -1328475408;
			return 1;
		default:
			break;
	}
	return 0;
	return 0;
}

struct<2> func_330()
{
	Var0.f_1 = -1;
	Var0 = -1;
	return Var0;
}

bool func_331(int iParam0, struct<2> Param1, int iParam3, bool bParam4)
{
	switch (iParam3)
	{
		case 0:
			switch (Param1.f_1)
			{
				case 3:
					switch (Param1)
					{
						case 2:
							*iParam0 = 1909758928;
							return true;
						case 3:
							*iParam0 = 1162468676;
							return true;
						case 4:
							*iParam0 = -1354372995;
							return true;
						case 5:
							*iParam0 = 127662037;
							return true;
						case 6:
							*iParam0 = -858857622;
							return true;
						case 7:
							*iParam0 = -2062492572;
							return true;
						case 8:
							*iParam0 = -542504583;
							return true;
						case 9:
							*iParam0 = -1827263623;
							return true;
						case 10:
							*iParam0 = -674570242;
							return true;
						case 11:
							*iParam0 = 828828635;
							return true;
						case 12:
							*iParam0 = 1774527635;
							return true;
						case 13:
							*iParam0 = -880550872;
							return true;
						case 14:
							*iParam0 = 1118659955;
							return true;
						default:
							break;
					}
					break;
				case 1:
					switch (Param1)
					{
						case 2:
							*iParam0 = 1377685326;
							return true;
						case 3:
							*iParam0 = 2122521996;
							return true;
						case 4:
							*iParam0 = -905735271;
							return true;
						case 5:
							*iParam0 = -2041734073;
							return true;
						case 6:
							*iParam0 = 1336229167;
							return true;
						case 7:
							*iParam0 = -142928476;
							return true;
						case 8:
							*iParam0 = 1949899020;
							return true;
						case 9:
							*iParam0 = -1016355603;
							return true;
						case 10:
							*iParam0 = -2060997082;
							return true;
						case 11:
							*iParam0 = 679836386;
							return true;
						case 12:
							*iParam0 = 205850401;
							return true;
						case 13:
							*iParam0 = -9762481;
							return true;
						case 14:
							*iParam0 = -1889013498;
							return true;
						default:
							break;
					}
					break;
				case 0:
					switch (Param1)
					{
						case 2:
							*iParam0 = 490528894;
							return true;
						case 3:
							*iParam0 = 1857377268;
							return true;
						case 4:
							*iParam0 = 306779471;
							return true;
						case 5:
							*iParam0 = -265576506;
							return true;
						case 6:
							*iParam0 = 1764499352;
							return true;
						case 7:
							*iParam0 = 343197067;
							return true;
						case 8:
							*iParam0 = 611917374;
							return true;
						case 9:
							*iParam0 = 1319922984;
							return true;
						case 10:
							*iParam0 = 1496774356;
							return true;
						case 11:
							*iParam0 = 241847248;
							return true;
						case 12:
							*iParam0 = 1715260480;
							return true;
						case 13:
							*iParam0 = -972291366;
							return true;
						case 14:
							*iParam0 = -983269631;
							return true;
						default:
							break;
					}
					break;
				case 2:
					switch (Param1)
					{
						case 2:
							*iParam0 = 890959011;
							return true;
						case 3:
							*iParam0 = -1889927490;
							return true;
						case 4:
							*iParam0 = 231465939;
							return true;
						case 5:
							*iParam0 = 551112092;
							return true;
						case 6:
							*iParam0 = -1081501637;
							return true;
						case 7:
							*iParam0 = -1816049069;
							return true;
						case 8:
							*iParam0 = 888381965;
							return true;
						case 9:
							*iParam0 = -804165125;
							return true;
						case 10:
							*iParam0 = -741495176;
							return true;
						case 11:
							*iParam0 = -1801783288;
							return true;
						case 12:
							*iParam0 = -2006996000;
							return true;
						case 13:
							*iParam0 = -1114933352;
							return true;
						case 14:
							*iParam0 = 1487250557;
							return true;
						default:
							break;
					}
					break;
			}
			break;
		case 1:
			switch (Param1.f_1)
			{
				case 3:
					switch (Param1)
					{
						case 2:
							*iParam0 = 2003217523;
							return true;
						case 3:
							*iParam0 = -399697037;
							return true;
						case 4:
							*iParam0 = -1518699789;
							return true;
						case 5:
							*iParam0 = -997552329;
							return true;
						case 6:
							*iParam0 = 1652001878;
							return true;
						case 7:
							*iParam0 = 186320325;
							return true;
						case 8:
							*iParam0 = -1326803989;
							return true;
						case 9:
							*iParam0 = 737551253;
							return true;
						case 10:
							*iParam0 = 668030318;
							return true;
						case 11:
							*iParam0 = 859105085;
							return true;
						case 12:
							*iParam0 = -594986572;
							return true;
						case 13:
							*iParam0 = -1754685568;
							return true;
						case 14:
							*iParam0 = 570384605;
							return true;
						default:
							break;
					}
					break;
				case 1:
					switch (Param1)
					{
						case 2:
							*iParam0 = 496728947;
							return true;
						case 3:
							*iParam0 = 1921848184;
							return true;
						case 4:
							*iParam0 = -546878645;
							return true;
						case 5:
							*iParam0 = -821118254;
							return true;
						case 6:
							*iParam0 = -361944149;
							return true;
						case 7:
							*iParam0 = -1874474629;
							return true;
						case 8:
							*iParam0 = -318877148;
							return true;
						case 9:
							*iParam0 = 932665613;
							return true;
						case 10:
							*iParam0 = -2038176093;
							return true;
						case 11:
							*iParam0 = -667785661;
							return true;
						case 12:
							*iParam0 = 208099752;
							return true;
						case 13:
							*iParam0 = -581256491;
							return true;
						case 14:
							*iParam0 = 894832080;
							return true;
						default:
							break;
					}
					break;
				case 0:
					switch (Param1)
					{
						case 2:
							*iParam0 = 1051290148;
							return true;
						case 3:
							*iParam0 = -1005545109;
							return true;
						case 4:
							*iParam0 = 1821478065;
							return true;
						case 5:
							*iParam0 = 540188127;
							return true;
						case 6:
							*iParam0 = -1480085904;
							return true;
						case 7:
							*iParam0 = 825496160;
							return true;
						case 8:
							*iParam0 = -628192245;
							return true;
						case 9:
							*iParam0 = -215756895;
							return true;
						case 10:
							*iParam0 = 793896324;
							return true;
						case 11:
							*iParam0 = 1121466671;
							return true;
						case 12:
							*iParam0 = 1834923532;
							return true;
						case 13:
							*iParam0 = -1282408094;
							return true;
						case 14:
							*iParam0 = 383127860;
							return true;
						default:
							break;
					}
					break;
				case 2:
					switch (Param1)
					{
						case 2:
							*iParam0 = 684527193;
							return true;
						case 3:
							*iParam0 = -263420923;
							return true;
						case 4:
							*iParam0 = -249784185;
							return true;
						case 5:
							*iParam0 = 1143187053;
							return true;
						case 6:
							*iParam0 = 827657438;
							return true;
						case 7:
							*iParam0 = -1102425647;
							return true;
						case 8:
							*iParam0 = 853839925;
							return true;
						case 9:
							*iParam0 = -1261345136;
							return true;
						case 10:
							*iParam0 = -1516404361;
							return true;
						case 11:
							*iParam0 = 1432174202;
							return true;
						case 12:
							*iParam0 = 1131319157;
							return true;
						case 13:
							*iParam0 = 186094910;
							return true;
						case 14:
							*iParam0 = -1567460112;
							return true;
						default:
							break;
					}
					break;
			}
			break;
		case 2:
			switch (Param1.f_1)
			{
				case 3:
					switch (Param1)
					{
						case 2:
							*iParam0 = 328068607;
							return true;
						case 3:
							*iParam0 = -1306858058;
							return true;
						case 4:
							*iParam0 = -1611982353;
							return true;
						case 5:
							*iParam0 = 739756370;
							return true;
						case 6:
							*iParam0 = 1801166233;
							return true;
						case 7:
							*iParam0 = -644313522;
							return true;
						case 8:
							*iParam0 = -832951172;
							return true;
						case 9:
							*iParam0 = 1988315838;
							return true;
						case 10:
							*iParam0 = -1001399461;
							return true;
						case 11:
							*iParam0 = 583972710;
							return true;
						case 12:
							*iParam0 = 854868500;
							return true;
						case 13:
							*iParam0 = 629055820;
							return true;
						case 14:
							*iParam0 = -833244723;
							return true;
						default:
							break;
					}
					break;
				case 1:
					switch (Param1)
					{
						case 2:
							*iParam0 = 1280053851;
							return true;
						case 3:
							*iParam0 = -633466200;
							return true;
						case 4:
							*iParam0 = -1836575021;
							return true;
						case 5:
							*iParam0 = -1110186928;
							return true;
						case 6:
							*iParam0 = 1672340679;
							return true;
						case 7:
							*iParam0 = 2003108760;
							return true;
						case 8:
							*iParam0 = 1877192539;
							return true;
						case 9:
							*iParam0 = -1703049832;
							return true;
						case 10:
							*iParam0 = -1497400706;
							return true;
						case 11:
							*iParam0 = 1971631392;
							return true;
						case 12:
							*iParam0 = -2127206140;
							return true;
						case 13:
							*iParam0 = -2048927458;
							return true;
						case 14:
							*iParam0 = 1630107168;
							return true;
						default:
							break;
					}
					break;
				case 0:
					switch (Param1)
					{
						case 2:
							*iParam0 = -949698496;
							return true;
						case 3:
							*iParam0 = 355316014;
							return true;
						case 4:
							*iParam0 = 1604154240;
							return true;
						case 5:
							*iParam0 = -1789343904;
							return true;
						case 6:
							*iParam0 = -50867196;
							return true;
						case 7:
							*iParam0 = -1012504675;
							return true;
						case 8:
							*iParam0 = -159578860;
							return true;
						case 9:
							*iParam0 = 1097950533;
							return true;
						case 10:
							*iParam0 = -1819094497;
							return true;
						case 11:
							*iParam0 = 763417437;
							return true;
						case 12:
							*iParam0 = -1643922980;
							return true;
						case 13:
							*iParam0 = 1726242611;
							return true;
						case 14:
							*iParam0 = -982898598;
							return true;
						default:
							break;
					}
					Jump @3150; //curOff = 2902
					switch (Param1)
					{
						case 2:
							*iParam0 = -597281244;
							return true;
						case 3:
							*iParam0 = 1859837183;
							return true;
						case 4:
							*iParam0 = -717777272;
							return true;
						case 5:
							*iParam0 = -384065410;
							return true;
						case 6:
							*iParam0 = -426226845;
							return true;
						case 7:
							*iParam0 = -1560133449;
							return true;
						case 8:
							*iParam0 = -1724719987;
							return true;
						case 9:
							*iParam0 = -1506573666;
							return true;
						case 10:
							*iParam0 = -833467841;
							return true;
						case 11:
							*iParam0 = 1913040302;
							return true;
						case 12:
							*iParam0 = -970236810;
							return true;
						case 13:
							*iParam0 = 990091302;
							return true;
						case 14:
							*iParam0 = 918658043;
							return true;
						default:
							break;
					}
					Jump @9261; //curOff = 3150
					switch (Param1.f_1)
					{
						case 3:
							switch (Param1)
							{
								case 2:
									*iParam0 = -403301546;
									return true;
								case 3:
									*iParam0 = 1871423067;
									return true;
								case 4:
									*iParam0 = 1337869136;
									return true;
								case 5:
									*iParam0 = -1544981815;
									return true;
								case 6:
									*iParam0 = 1935838007;
									return true;
								case 7:
									*iParam0 = 1362450780;
									return true;
								case 8:
									*iParam0 = -311392807;
									return true;
								case 9:
									*iParam0 = 1979302072;
									return true;
								case 10:
									*iParam0 = 527759776;
									return true;
								case 11:
									*iParam0 = 972511286;
									return true;
								case 12:
									*iParam0 = 866723984;
									return true;
								case 13:
									*iParam0 = -1501906712;
									return true;
								case 14:
									*iParam0 = 1657044585;
									return true;
								default:
									break;
							}
							break;
						case 1:
							switch (Param1)
							{
								case 2:
									*iParam0 = 696549872;
									return true;
								case 3:
									*iParam0 = 1029329299;
									return true;
								case 4:
									*iParam0 = -204176389;
									return true;
								case 5:
									*iParam0 = -605490871;
									return true;
								case 6:
									*iParam0 = -752686013;
									return true;
								case 7:
									*iParam0 = -2098928623;
									return true;
								case 8:
									*iParam0 = 673396831;
									return true;
								case 9:
									*iParam0 = 61996838;
									return true;
								case 10:
									*iParam0 = 707385061;
									return true;
								case 11:
									*iParam0 = -1336887993;
									return true;
								case 12:
									*iParam0 = 1986014158;
									return true;
								case 13:
									*iParam0 = -1279519199;
									return true;
								case 14:
									*iParam0 = -404939929;
									return true;
								default:
									break;
							}
							break;
						case 0:
							switch (Param1)
							{
								case 2:
									*iParam0 = 1766621235;
									return true;
								case 3:
									*iParam0 = 639465642;
									return true;
								case 4:
									*iParam0 = 538279577;
									return true;
								case 5:
									*iParam0 = 1589664504;
									return true;
								case 6:
									*iParam0 = 1277241365;
									return true;
								case 7:
									*iParam0 = 464078840;
									return true;
								case 8:
									*iParam0 = 1382365335;
									return true;
								case 9:
									*iParam0 = -1642414969;
									return true;
								case 10:
									*iParam0 = 51231304;
									return true;
								case 11:
									*iParam0 = 1283399627;
									return true;
								case 12:
									*iParam0 = 1832068833;
									return true;
								case 13:
									*iParam0 = -1516046037;
									return true;
								case 14:
									*iParam0 = 663524178;
									return true;
								default:
									break;
							}
							break;
						case 2:
							switch (Param1)
							{
								case 2:
									*iParam0 = -305746106;
									return true;
								case 3:
									*iParam0 = -208088591;
									return true;
								case 4:
									*iParam0 = 1937181298;
									return true;
								case 5:
									*iParam0 = 707745297;
									return true;
								case 6:
									*iParam0 = -318896190;
									return true;
								case 7:
									*iParam0 = -954744024;
									return true;
								case 8:
									*iParam0 = 930365499;
									return true;
								case 9:
									*iParam0 = -1247282198;
									return true;
								case 10:
									*iParam0 = 1370939361;
									return true;
								case 11:
									*iParam0 = -753399062;
									return true;
								case 12:
									*iParam0 = -977688234;
									return true;
								case 13:
									*iParam0 = -1596094065;
									return true;
								case 14:
									*iParam0 = -373053921;
									return true;
								default:
									break;
							}
							break;
					}
					Jump @9261; //curOff = 4167
					switch (Param1.f_1)
					{
						case 3:
							switch (Param1)
							{
								case 2:
									*iParam0 = 1387954345;
									return true;
								case 3:
									*iParam0 = -1354962655;
									return true;
								case 4:
									*iParam0 = -804464549;
									return true;
								case 5:
									*iParam0 = 1348814278;
									return true;
								case 6:
									*iParam0 = 657062187;
									return true;
								case 7:
									*iParam0 = 1510162208;
									return true;
								case 8:
									*iParam0 = 2009701297;
									return true;
								case 9:
									*iParam0 = 1853223245;
									return true;
								case 10:
									*iParam0 = -1775176139;
									return true;
								case 11:
									*iParam0 = 617703278;
									return true;
								case 12:
									*iParam0 = -1298938137;
									return true;
								case 13:
									*iParam0 = -1941521224;
									return true;
								case 14:
									*iParam0 = -1676024061;
									return true;
								default:
									break;
							}
							break;
						case 1:
							switch (Param1)
							{
								case 2:
									*iParam0 = 391724922;
									return true;
								case 3:
									*iParam0 = 671459626;
									return true;
								case 4:
									*iParam0 = -1487277617;
									return true;
								case 5:
									*iParam0 = -907221559;
									return true;
								case 6:
									*iParam0 = -2131404875;
									return true;
								case 7:
									*iParam0 = 1136582530;
									return true;
								case 8:
									*iParam0 = -2120550211;
									return true;
								case 9:
									*iParam0 = -281297502;
									return true;
								case 10:
									*iParam0 = 892072825;
									return true;
								case 11:
									*iParam0 = 1611660243;
									return true;
								case 12:
									*iParam0 = -1248904689;
									return true;
								case 13:
									*iParam0 = -2000963135;
									return true;
								case 14:
									*iParam0 = -328923850;
									return true;
								default:
									break;
							}
							break;
						case 0:
							switch (Param1)
							{
								case 2:
									*iParam0 = 2037189536;
									return true;
								case 3:
									*iParam0 = -2045530267;
									return true;
								case 4:
									*iParam0 = 2045295050;
									return true;
								case 5:
									*iParam0 = 1726116464;
									return true;
								case 6:
									*iParam0 = 136818655;
									return true;
								case 7:
									*iParam0 = 657382278;
									return true;
								case 8:
									*iParam0 = 1404937476;
									return true;
								case 9:
									*iParam0 = -1888826317;
									return true;
								case 10:
									*iParam0 = 681653557;
									return true;
								case 11:
									*iParam0 = -721735422;
									return true;
								case 12:
									*iParam0 = 965390753;
									return true;
								case 13:
									*iParam0 = 72733444;
									return true;
								case 14:
									*iParam0 = 2080330127;
									return true;
								default:
									break;
							}
							break;
						case 2:
							switch (Param1)
							{
								case 2:
									*iParam0 = -446539351;
									return true;
								case 3:
									*iParam0 = -1722641930;
									return true;
								case 4:
									*iParam0 = 243348692;
									return true;
								case 5:
									*iParam0 = -2096430697;
									return true;
								case 6:
									*iParam0 = 1941234074;
									return true;
								case 7:
									*iParam0 = 990323913;
									return true;
								case 8:
									*iParam0 = -1593509009;
									return true;
								case 9:
									*iParam0 = -1941079438;
									return true;
								case 10:
									*iParam0 = 948933843;
									return true;
								case 11:
									*iParam0 = -1393933166;
									return true;
								case 12:
									*iParam0 = 1865479666;
									return true;
								case 13:
									*iParam0 = 1475987833;
									return true;
								case 14:
									*iParam0 = 1464992706;
									return true;
								default:
									break;
							}
							break;
					}
					Jump @9261; //curOff = 5184
					switch (Param1.f_1)
					{
						case 3:
							switch (Param1)
							{
								case 2:
									*iParam0 = 940287542;
									return true;
								case 3:
									*iParam0 = 790418313;
									return true;
								case 4:
									*iParam0 = -2116754376;
									return true;
								case 5:
									*iParam0 = 1317169409;
									return true;
								case 6:
									*iParam0 = 1033660954;
									return true;
								case 7:
									*iParam0 = 124978929;
									return true;
								case 8:
									*iParam0 = -725520485;
									return true;
								case 9:
									*iParam0 = -1172744195;
									return true;
								case 10:
									*iParam0 = 1815096273;
									return true;
								case 11:
									*iParam0 = 1304006097;
									return true;
								case 12:
									*iParam0 = -1300766016;
									return true;
								case 13:
									*iParam0 = -250573840;
									return true;
								case 14:
									*iParam0 = -1824431250;
									return true;
								default:
									break;
							}
							break;
						case 1:
							switch (Param1)
							{
								case 2:
									*iParam0 = 80437487;
									return true;
								case 3:
									*iParam0 = -11479234;
									return true;
								case 4:
									*iParam0 = 1490589553;
									return true;
								case 5:
									*iParam0 = -1110583329;
									return true;
								case 6:
									*iParam0 = -1753679949;
									return true;
								case 7:
									*iParam0 = 1137688840;
									return true;
								case 8:
									*iParam0 = -1710863708;
									return true;
								case 9:
									*iParam0 = 2130883601;
									return true;
								case 10:
									*iParam0 = -1779427821;
									return true;
								case 11:
									*iParam0 = -48560774;
									return true;
								case 12:
									*iParam0 = -1378832890;
									return true;
								case 13:
									*iParam0 = -1337061193;
									return true;
								case 14:
									*iParam0 = -962473954;
									return true;
								default:
									break;
							}
							break;
						case 0:
							switch (Param1)
							{
								case 2:
									*iParam0 = -140928778;
									return true;
								case 3:
									*iParam0 = 1767974563;
									return true;
								case 4:
									*iParam0 = 701349000;
									return true;
								case 5:
									*iParam0 = -2012550923;
									return true;
								case 6:
									*iParam0 = -802659006;
									return true;
								case 7:
									*iParam0 = 1535788576;
									return true;
								case 8:
									*iParam0 = -539132616;
									return true;
								case 9:
									*iParam0 = -355413556;
									return true;
								case 10:
									*iParam0 = 125575728;
									return true;
								case 11:
									*iParam0 = 1392136522;
									return true;
								case 12:
									*iParam0 = -1089443358;
									return true;
								case 13:
									*iParam0 = 1496031634;
									return true;
								case 14:
									*iParam0 = -1494400830;
									return true;
								default:
									break;
							}
							break;
						case 2:
							switch (Param1)
							{
								case 2:
									*iParam0 = 877243702;
									return true;
								case 3:
									*iParam0 = -30406831;
									return true;
								case 4:
									*iParam0 = 1507721315;
									return true;
								case 5:
									*iParam0 = 220923946;
									return true;
								case 6:
									*iParam0 = 386780259;
									return true;
								case 7:
									*iParam0 = 679225015;
									return true;
								case 8:
									*iParam0 = -130832693;
									return true;
								case 9:
									*iParam0 = -1857759931;
									return true;
								case 10:
									*iParam0 = -1549381684;
									return true;
								case 11:
									*iParam0 = -1306599616;
									return true;
								case 12:
									*iParam0 = -1317905551;
									return true;
								case 13:
									*iParam0 = -1489968742;
									return true;
								case 14:
									*iParam0 = 274824986;
									return true;
								default:
									break;
							}
							break;
					}
					Jump @9261; //curOff = 6201
					switch (Param1.f_1)
					{
						case 3:
							switch (Param1)
							{
								case 2:
									*iParam0 = 345349862;
									return true;
								case 3:
									*iParam0 = 233738904;
									return true;
								case 4:
									*iParam0 = 1509393818;
									return true;
								case 5:
									*iParam0 = 60813080;
									return true;
								case 6:
									*iParam0 = -1588867364;
									return true;
								case 7:
									*iParam0 = -741971058;
									return true;
								case 8:
									*iParam0 = -1901598027;
									return true;
								case 9:
									*iParam0 = 216857924;
									return true;
								case 10:
									*iParam0 = -1696859616;
									return true;
								case 11:
									*iParam0 = 1250297936;
									return true;
								case 12:
									*iParam0 = -1324063231;
									return true;
								case 13:
									*iParam0 = 1618412160;
									return true;
								case 14:
									*iParam0 = -628673108;
									return true;
								default:
									break;
							}
							break;
						case 1:
							switch (Param1)
							{
								case 2:
									*iParam0 = -1336484459;
									return true;
								case 3:
									*iParam0 = 776262968;
									return true;
								case 4:
									*iParam0 = 1952745955;
									return true;
								case 5:
									*iParam0 = -1067714914;
									return true;
								case 6:
									*iParam0 = 251115602;
									return true;
								case 7:
									*iParam0 = 1575451247;
									return true;
								case 8:
									*iParam0 = -746735956;
									return true;
								case 9:
									*iParam0 = 326673134;
									return true;
								case 10:
									*iParam0 = 1872027280;
									return true;
								case 11:
									*iParam0 = -1718732108;
									return true;
								case 12:
									*iParam0 = -1092024524;
									return true;
								case 13:
									*iParam0 = 2071887039;
									return true;
								case 14:
									*iParam0 = -1106339162;
									return true;
								default:
									break;
							}
							break;
						case 0:
							switch (Param1)
							{
								case 2:
									*iParam0 = 1066627194;
									return true;
								case 3:
									*iParam0 = -799997502;
									return true;
								case 4:
									*iParam0 = 398382432;
									return true;
								case 5:
									*iParam0 = -766490354;
									return true;
								case 6:
									*iParam0 = 834493370;
									return true;
								case 7:
									*iParam0 = -627280631;
									return true;
								case 8:
									*iParam0 = -1689944957;
									return true;
								case 9:
									*iParam0 = -1081837586;
									return true;
								case 10:
									*iParam0 = 1994269490;
									return true;
								case 11:
									*iParam0 = 98506870;
									return true;
								case 12:
									*iParam0 = 828661392;
									return true;
								case 13:
									*iParam0 = -1902382615;
									return true;
								case 14:
									*iParam0 = -1749931149;
									return true;
								default:
									break;
							}
							break;
						case 2:
							switch (Param1)
							{
								case 2:
									*iParam0 = -1612375921;
									return true;
								case 3:
									*iParam0 = -464036502;
									return true;
								case 4:
									*iParam0 = -1734626244;
									return true;
								case 5:
									*iParam0 = 1432065580;
									return true;
								case 6:
									*iParam0 = -269373164;
									return true;
								case 7:
									*iParam0 = -1462036161;
									return true;
								case 8:
									*iParam0 = 9214594;
									return true;
								case 9:
									*iParam0 = -449150372;
									return true;
								case 10:
									*iParam0 = -676777548;
									return true;
								case 11:
									*iParam0 = 2045572790;
									return true;
								case 12:
									*iParam0 = 247170975;
									return true;
								case 13:
									*iParam0 = 2011504438;
									return true;
								case 14:
									*iParam0 = 1380910900;
									return true;
								default:
									break;
							}
							break;
					}
					Jump @9261; //curOff = 7217
					switch (Param1.f_1)
					{
						case 3:
							switch (Param1)
							{
								case 2:
									*iParam0 = -1327784484;
									return true;
								case 3:
									*iParam0 = -1496419081;
									return true;
								case 4:
									*iParam0 = 769946245;
									return true;
								case 5:
									*iParam0 = -744715350;
									return true;
								case 6:
									*iParam0 = -1578164439;
									return true;
								case 7:
									*iParam0 = 124531649;
									return true;
								case 8:
									*iParam0 = 28598465;
									return true;
								case 9:
									*iParam0 = 1620556079;
									return true;
								case 10:
									*iParam0 = 1251463005;
									return true;
								case 11:
									*iParam0 = -602401997;
									return true;
								case 12:
									*iParam0 = -363611516;
									return true;
								case 13:
									*iParam0 = -1631692560;
									return true;
								case 14:
									*iParam0 = -771839452;
									return true;
								default:
									break;
							}
							break;
						case 1:
							switch (Param1)
							{
								case 2:
									*iParam0 = 729415757;
									return true;
								case 3:
									*iParam0 = 946889695;
									return true;
								case 4:
									*iParam0 = 1738209787;
									return true;
								case 5:
									*iParam0 = 609774326;
									return true;
								case 6:
									*iParam0 = -814389520;
									return true;
								case 7:
									*iParam0 = -1586099842;
									return true;
								case 8:
									*iParam0 = 1273393517;
									return true;
								case 9:
									*iParam0 = -1140616583;
									return true;
								case 10:
									*iParam0 = 675667608;
									return true;
								case 11:
									*iParam0 = -359677198;
									return true;
								case 12:
									*iParam0 = 1703181487;
									return true;
								case 13:
									*iParam0 = -1127742830;
									return true;
								case 14:
									*iParam0 = -1294625031;
									return true;
								default:
									break;
							}
							break;
						case 0:
							switch (Param1)
							{
								case 2:
									*iParam0 = -238808491;
									return true;
								case 3:
									*iParam0 = -610087366;
									return true;
								case 4:
									*iParam0 = -2113376606;
									return true;
								case 5:
									*iParam0 = -1658822997;
									return true;
								case 6:
									*iParam0 = 458077008;
									return true;
								case 7:
									*iParam0 = -1479991672;
									return true;
								case 8:
									*iParam0 = -974205616;
									return true;
								case 9:
									*iParam0 = -1915480358;
									return true;
								case 10:
									*iParam0 = -1427302413;
									return true;
								case 11:
									*iParam0 = 1297056981;
									return true;
								case 12:
									*iParam0 = -1238217619;
									return true;
								case 13:
									*iParam0 = 1844773640;
									return true;
								case 14:
									*iParam0 = 1541545551;
									return true;
								default:
									break;
							}
							break;
						case 2:
							switch (Param1)
							{
								case 2:
									*iParam0 = 461545493;
									return true;
								case 3:
									*iParam0 = 760481963;
									return true;
								case 4:
									*iParam0 = -1747528191;
									return true;
								case 5:
									*iParam0 = 1706339276;
									return true;
								case 6:
									*iParam0 = -787395957;
									return true;
								case 7:
									*iParam0 = 1254414564;
									return true;
								case 8:
									*iParam0 = -973839534;
									return true;
								case 9:
									*iParam0 = 964732302;
									return true;
								case 10:
									*iParam0 = 1965573369;
									return true;
								case 11:
									*iParam0 = 1273174558;
									return true;
								case 12:
									*iParam0 = -1366850746;
									return true;
								case 13:
									*iParam0 = 640816886;
									return true;
								case 14:
									*iParam0 = 1582547899;
									return true;
								default:
									break;
							}
							break;
					}
					Jump @9261; //curOff = 8234
					switch (Param1.f_1)
					{
						case 3:
							switch (Param1)
							{
								case 2:
									*iParam0 = -1806179115;
									return true;
								case 3:
									*iParam0 = 1395346866;
									return true;
								case 4:
									*iParam0 = -109213256;
									return true;
								case 5:
									*iParam0 = -1416742002;
									return true;
								case 6:
									*iParam0 = -1615357250;
									return true;
								case 7:
									*iParam0 = -486577432;
									return true;
								case 8:
									*iParam0 = 1488031426;
									return true;
								case 9:
									*iParam0 = -1158386201;
									return true;
								case 10:
									*iParam0 = -685512585;
									return true;
								case 11:
									*iParam0 = -545482240;
									return true;
								case 12:
									*iParam0 = 1170207075;
									return true;
								case 13:
									*iParam0 = 829062722;
									return true;
								case 14:
									*iParam0 = 913568525;
									return true;
								default:
									break;
							}
							break;
						case 1:
							switch (Param1)
							{
								case 2:
									*iParam0 = 1372376306;
									return true;
								case 3:
									*iParam0 = -1994390239;
									return true;
								case 4:
									*iParam0 = 1200601581;
									return true;
								case 5:
									*iParam0 = -1632804958;
									return true;
								case 6:
									*iParam0 = -470085637;
									return true;
								case 7:
									*iParam0 = -53460943;
									return true;
								case 8:
									*iParam0 = 793294898;
									return true;
								case 9:
									*iParam0 = -525444146;
									return true;
								case 10:
									*iParam0 = 1136760211;
									return true;
								case 11:
									*iParam0 = -418497553;
									return true;
								case 12:
									*iParam0 = -2106116472;
									return true;
								case 13:
									*iParam0 = 677599687;
									return true;
								case 14:
									*iParam0 = 150094641;
									return true;
								default:
									break;
							}
							break;
						case 0:
							switch (Param1)
							{
								case 2:
									*iParam0 = 372300590;
									return true;
								case 3:
									*iParam0 = -1894075093;
									return true;
								case 4:
									*iParam0 = -807400872;
									return true;
								case 5:
									*iParam0 = 850233799;
									return true;
								case 6:
									*iParam0 = 1063877511;
									return true;
								case 7:
									*iParam0 = -1378538896;
									return true;
								case 8:
									*iParam0 = -125455747;
									return true;
								case 9:
									*iParam0 = -111972905;
									return true;
								case 10:
									*iParam0 = 861776066;
									return true;
								case 11:
									*iParam0 = 1904627018;
									return true;
								case 12:
									*iParam0 = -1833532042;
									return true;
								case 13:
									*iParam0 = -1778822384;
									return true;
								case 14:
									*iParam0 = 1868940630;
									return true;
								default:
									break;
							}
							break;
						case 2:
							switch (Param1)
							{
								case 2:
									*iParam0 = 1059972971;
									return true;
								case 3:
									*iParam0 = 1245102704;
									return true;
								case 4:
									*iParam0 = 857443476;
									return true;
								case 5:
									*iParam0 = -1967131166;
									return true;
								case 6:
									*iParam0 = 2056035715;
									return true;
								case 7:
									*iParam0 = 692065755;
									return true;
								case 8:
									*iParam0 = 962251301;
									return true;
								case 9:
									*iParam0 = 487320741;
									return true;
								case 10:
									*iParam0 = 1501334946;
									return true;
								case 11:
									*iParam0 = 820339735;
									return true;
								case 12:
									*iParam0 = 285984845;
									return true;
								case 13:
									*iParam0 = 1972352444;
									return true;
								case 14:
									*iParam0 = 1101400672;
									return true;
								default:
									break;
							}
							break;
					}
					Jump @9261; //curOff = 9251
					return false;
					switch (iParam3)
					{
						case 0:
							*iParam0 = -1360732541;
							return false;
						case 1:
							*iParam0 = 319638501;
							return false;
						case 2:
							*iParam0 = -97213200;
							return false;
						case 3:
							*iParam0 = 1884526773;
							return false;
						case 4:
							*iParam0 = -1797228166;
							return false;
						case 5:
							*iParam0 = -1385386118;
							return false;
						case 6:
							*iParam0 = -2065276132;
							return false;
						case 7:
							*iParam0 = -273401568;
							return false;
						case 8:
							*iParam0 = 188870715;
							return false;
						default:
							break;
					}
					return false;
					if (bParam4)
					{
					}
					return false;
				}

void func_332(var uParam0, vector3 vParam1)
{
	if (uParam0->f_762 >= 20)
	{
	}
	else
	{
		*uParam0->f_701[uParam0->f_762] = { vParam1 };
		uParam0->f_762++;
	}
}

void func_333(var uParam0, vector3 vParam1)
{
	uParam0->f_766 = 1;
	uParam0->f_763 = { vParam1 };
}

var func_334(var uParam0, int iParam1)
{
	StringCopy(&cVar0, "clipset@", 64);
	StringConCat(&cVar0, uParam0->f_1274[iParam1], 64);
	return _0xd8402b858f4ddd88(&cVar0, get_length_of_literal_string(&cVar0));
}

var func_335(var uParam0, int iParam1, int iParam2)
{
	Var0 = { *uParam0->f_4[iParam1] };
	StringConCat(&Var0, "@", 64);
	StringConCat(&Var0, uParam0->f_21[iParam2], 64);
	return _0xd8402b858f4ddd88(&Var0, get_length_of_literal_string(&Var0));
}

void func_336(var uParam0, int iParam1, bool bParam2)
{
	StringCopy(&cVar0, "", 64);
	switch (iParam1)
	{
		case 0:
			StringCopy(&cVar0, "lightrig@poker_cards_generic", 64);
			break;
		case 1:
			StringCopy(&cVar0, "lightrig@poker_cards_generic_dark", 64);
			break;
		case 2:
			StringCopy(&cVar0, "lightrig@poker_cards_tumbleweed", 64);
			break;
		case 3:
			StringCopy(&cVar0, "lightrig@poker_cards_swanson_station", 64);
			break;
		default:
			StringCopy(&cVar0, "lightrig@poker_cards_generic", 64);
			break;
	}
	if (bParam2)
	{
		uParam0->f_805 = _create_anim_scene(&cVar0, 0, "plMain", false, true);
	}
	else
	{
		uParam0->f_805 = _create_anim_scene(&cVar0, 0, "plMain_noBlend", false, true);
	}
	if (!_does_anim_scene_exist(uParam0->f_805))
	{
	}
	else
	{
		load_anim_scene(uParam0->f_805);
	}
}

void func_337(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_922(uParam0, iVar0);
		iVar0++;
	}
}

void func_338(var uParam0, int iParam1)
{
	if (iParam1 == 0 || iParam1 == 2)
	{
		uParam0->f_798 = _create_anim_scene("script@mini_game@poker@mp_enters_male", 0, "PBL_ENTER_BASE_02", false, true);
	}
	else if (iParam1 == 1)
	{
		uParam0->f_798 = _create_anim_scene("script@mini_game@poker@mp_enters_male", 0, "PBL_ENTER_BASE_CAMP_02", false, true);
	}
	else if ((iParam1 == 3 || iParam1 == 5) || iParam1 == 4)
	{
		uParam0->f_798 = _create_anim_scene("script@mini_game@poker@mp_enters_female", 0, "PBL_ENTER_FEM_BASE_CAMP_02", false, true);
	}
	else
	{
		uParam0->f_798 = -1;
	}
	if (!_does_anim_scene_exist(uParam0->f_798))
	{
	}
	else
	{
		load_anim_scene(uParam0->f_798);
	}
}

void func_339(var uParam0, int iParam1)
{
	_0xb727a847862cb00a(func_923(iParam1));
	uParam0->f_806 = iParam1;
}

int func_340(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			*iParam1 = 5;
			return 1;
		case 1:
			*iParam1 = 4;
			return 1;
		case 2:
			*iParam1 = 0;
			return 1;
		case 3:
			*iParam1 = 7;
			return 1;
		case 4:
			*iParam1 = 1;
			return 1;
		case 5:
			*iParam1 = 6;
			return 1;
		case 6:
			*iParam1 = 2;
			return 1;
		case 7:
			*iParam1 = 8;
			return 1;
		case 8:
			*iParam1 = 3;
			return 1;
		default:
			break;
	}
	*iParam1 = 5;
	return 0;
}

void func_341(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	uParam0->f_164++;
	*uParam0 = iParam1;
	uParam0->f_2 = _uiflowblock_request(-1534086282);
	uParam0->f_6 = _databinding_add_data_container_from_path("", "MinigamesDataStore");
	uParam0->f_4 = _databinding_add_data_container(uParam0->f_6, "gameSettings");
	uParam0->f_23 = _databinding_add_data_container(uParam0->f_6, "totalsStack");
	uParam0->f_30 = _databinding_add_data_bool(uParam0->f_23, "isVisible", 1);
	uVar3 = _databinding_add_data_container(uParam0->f_23, "totalsTextItemData");
	func_924(uParam0, iParam3);
	iVar1 = 0;
	uParam0->f_24 = _databinding_add_ui_item_list(uParam0->f_23, "totalsItemArray");
	_databinding_clear_binding_array(uParam0->f_24);
	func_925(uParam0);
	if ((iParam1 == 2 || iParam1 == 0) || bParam2)
	{
		uVar4 = _databinding_add_ui_item_list(uParam0->f_23, "communityGameTokenItemArray");
		uVar5 = _databinding_add_data_container(uParam0->f_23, "communityGameTokenItemData");
		_databinding_clear_binding_array(uVar4);
		iVar0 = 0;
		while (iVar0 < uParam0->f_17)
		{
			StringCopy(&cVar2, "", 8);
			StringIntConCat(&cVar2, iVar0, 8);
			uVar6 = _databinding_add_data_container(uVar5, &cVar2);
			uParam0->f_17[iVar0] = _databinding_add_data_string(uVar6, "textureName", "");
			_databinding_insert_ui_item_to_list_from_context_string_alias(uVar4, iVar0, "single_game_token_big", uVar6);
			iVar0++;
		}
		_databinding_insert_ui_item_to_list_from_context_string_alias(uParam0->f_24, 0, "community_cards", uParam0->f_23);
		iVar1 = 1;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_10)
	{
		StringCopy(&cVar2, "", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uParam0->f_10[iVar0] = _databinding_add_data_container(uVar3, &cVar2);
		_databinding_insert_ui_item_to_list_from_context_string_alias(uParam0->f_24, (iVar0 + iVar1), "money_with_text", &(uParam0->f_10[iVar0]));
		_databinding_add_data_string(&(uParam0->f_10[iVar0]), "moneyText", "");
		_databinding_add_data_string(&(uParam0->f_10[iVar0]), "text", "");
		iVar0++;
	}
	uParam0->f_7 = _databinding_add_data_container(uParam0->f_6, "playerStack");
	uParam0->f_8 = _databinding_add_data_container(uParam0->f_7, "playerData");
	uParam0->f_9 = _databinding_add_ui_item_list(uParam0->f_7, "playerList");
	uParam0->f_29 = _databinding_add_data_bool(uParam0->f_7, "isVisible", 1);
	_databinding_clear_binding_array(uParam0->f_9);
	uVar7 = _databinding_add_data_container(uParam0->f_6, "bettingControl");
	uParam0->f_25 = _databinding_add_data_bool(uVar7, "isVisible", 0);
	uParam0->f_26 = _databinding_add_data_string(uVar7, "text", "");
	uParam0->f_27 = _databinding_add_data_bool(uVar7, "isLeftArrowVisible", 0);
	uParam0->f_28 = _databinding_add_data_bool(uVar7, "isRightArrowVisible", 0);
	uVar8 = _databinding_add_data_container(uParam0->f_6, "centralScoretimer");
	uParam0->f_31 = _databinding_add_data_bool(uVar8, "isVisible", 0);
	uParam0->f_32 = _databinding_add_data_string(uVar8, "timerString", "18:88");
	uParam0->f_33 = _databinding_add_data_bool(uVar8, "isVisible", 0);
	func_926(uParam0, 2);
}

void func_342(var uParam0, int iParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)
{
	func_927(uParam0, uParam0->f_34[iParam1], iParam1, sParam2, sParam3, bParam4, iParam5);
}

bool func_343(var uParam0)
{
	if (_0xfdfc14799373283f(func_923(uParam0->f_806)))
	{
		return true;
	}
	return false;
}

void func_344(var uParam0)
{
	if (uParam0->f_807 != -1)
	{
	}
	else
	{
		uParam0->f_807 = _0xa1300de03e5d1973(func_923(uParam0->f_806));
	}
}

bool func_345(var uParam0)
{
	if (!_does_anim_scene_exist(uParam0->f_805))
	{
	}
	else if (_is_anim_scene_loaded(uParam0->f_805, true, false))
	{
		return true;
	}
	return false;
}

bool func_346(var uParam0)
{
	if (!_does_anim_scene_exist(uParam0->f_798))
	{
		return true;
	}
	else if (_is_anim_scene_loaded(uParam0->f_798, true, false))
	{
		return true;
	}
	return false;
}

int func_347(int iParam0)
{
	return iParam0;
}

void func_348(var uParam0, bool bParam1)
{
	func_928(uParam0, bParam1);
	func_929(uParam0);
}

void func_349(var uParam0)
{
	func_930(uParam0);
	func_931(uParam0);
	func_932(uParam0);
}

void func_350(var uParam0)
{
	uVar0 = (uParam0->f_66 && -1 ^ (uParam0->f_69 || uParam0->f_70));
	iVar1 = (uVar0 && uParam0->f_67);
	if (iVar1 != 0)
	{
		iVar10 = 0;
		while (iVar10 < get_number_of_events(1))
		{
			iVar3 = get_event_at_index(1, iVar10);
			switch (iVar3)
			{
				case -1126217932:
					if (get_event_data(1, iVar10, &Var4, 6))
					{
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (is_bit_set(iVar1, iVar2))
							{
								if (((&uParam0->f_53[iVar2] == Var4 && uParam0->f_53[iVar2]->f_1 == Var4.f_1) && uParam0->f_53[iVar2]->f_2 == Var4.f_2) && uParam0->f_53[iVar2]->f_3 == Var4.f_3)
								{
									if (Var4.f_4)
									{
										set_bit(&(uParam0->f_69), iVar2);
									}
									else
									{
										set_bit(&(uParam0->f_70), iVar2);
									}
								}
							}
							iVar2++;
						}
					}
					break;
			}
			iVar10++;
		}
	}
	iVar11 = (uVar0 && -1 ^ uParam0->f_67);
	if (iVar11 != 0)
	{
		iVar12 = 0;
		while (iVar12 < 3)
		{
			if (is_bit_set(iVar11, iVar12))
			{
				if (!_minigame_is_request_pending(uParam0->f_53[iVar12]))
				{
					set_bit(&(uParam0->f_69), iVar12);
				}
			}
			iVar12++;
		}
	}
}

void func_351(var uParam0)
{
	if (network_is_host_of_this_script())
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (!is_bit_set(uParam0->f_1476.f_6, iVar0))
			{
				if (!func_933(uParam0->f_1476, iVar0))
				{
					func_934(&(uParam0->f_1476), iVar0, uParam0->f_1473);
				}
				else
				{
					func_935(&(uParam0->f_1476), iVar0, &(uParam0->f_1476[iVar0]));
				}
			}
			else if (func_936(&(uParam0->f_1476), iVar0))
			{
				func_937(&(uParam0->f_1476), iVar0);
			}
			iVar0++;
		}
		uParam0->f_1473++;
		if (uParam0->f_1473 >= 32)
		{
			uParam0->f_1473 = 0;
		}
	}
}

void func_352(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (is_bit_set(uParam0->f_1476.f_15, iParam1))
	{
		set_bit(&(uParam0->f_1476.f_16), iParam1);
	}
	else
	{
		clear_bit(&(uParam0->f_1476.f_16), iParam1);
	}
	uParam0->f_1476.f_8[iParam1] = iParam2;
	if (bParam3)
	{
		set_bit(&(uParam0->f_1476.f_15), iParam1);
	}
	else
	{
		clear_bit(&(uParam0->f_1476.f_15), iParam1);
	}
}

void func_353(bool bParam0)
{
	if (bParam0)
	{
		if (!Global_1896738->f_382)
		{
			Global_1896738->f_382 = bParam0;
		}
	}
	else if (Global_1896738->f_382)
	{
		Global_1896738->f_382 = bParam0;
	}
}

void func_354()
{
	if (!_is_any_app_running())
	{
		return;
	}
	_close_all_apps();
}

bool func_355(bool bParam0, bool bParam1, bool bParam2)
{
	bVar0 = func_939(bParam2, func_938(), 1, 0, 1, 1, 1, bParam0, bParam1);
	if (!bVar0)
	{
		return false;
	}
	return true;
}

void func_356(int iParam0)
{
	Global_1896738->f_390 = iParam0;
}

void func_357(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	iVar0 = player_id();
	if (!network_is_player_active(iVar0) || !network_is_player_a_participant(iVar0))
	{
	}
	else
	{
		iVar1 = network_get_participant_index(iVar0);
		if (!network_is_participant_active(iVar1))
		{
		}
		else
		{
			iVar2 = iVar1;
			uParam0->f_1476.f_17[iVar2]->f_5 = uParam1;
			uParam0->f_1476.f_17[iVar2]->f_6 = uParam2;
			uParam0->f_1476.f_17[iVar2]->f_7 = bParam3;
		}
	}
}

bool func_358(var uParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (&uParam0->f_173[iVar0] != 0)
		{
			if (!func_813(uParam0, iVar0, bParam1))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

void func_359(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_624(uParam1, iVar0))
		{
			if (func_636(func_635(uParam1, iVar0, 0)) && func_636(func_635(uParam1, iVar0, 1)))
			{
				func_637(&(uParam0->f_2841), iVar0, func_635(uParam1, iVar0, 0), func_635(uParam1, iVar0, 1), 0);
			}
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < uParam1->f_15.f_23)
	{
		func_695(&(uParam0->f_2841), iVar1, func_940(uParam1, iVar1), 0);
		iVar1++;
	}
}

bool func_360(var uParam0)
{
	if (!func_941(&(uParam0->f_2841)))
	{
		return false;
	}
	if (!func_942(&(uParam0->f_2841)))
	{
		return false;
	}
	return true;
}

void func_361(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_276() - fParam1);
	func_943(uParam0, 1);
	func_944(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_362(var uParam0, int iParam1)
{
	return &(uParam0->f_71[iParam1]);
}

bool func_363(var uParam0, int iParam1)
{
	if (&uParam0->f_71[iParam1] != 0)
	{
		return uParam0->f_71[iParam1]->f_17;
	}
	return false;
}

bool func_364(var uParam0, int iParam1, var uParam2)
{
	if (&uParam0->f_71[iParam1] != 1)
	{
		return false;
	}
	if (!uParam0->f_71[iParam1]->f_26)
	{
		return false;
	}
	*uParam2 = { uParam0->f_71[iParam1]->f_19 };
	return true;
}

int func_365(int iParam0)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (is_bit_set(iParam0, iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_366(var uParam0, int iParam1, char* sParam2, int iParam3)
{
	if (&uParam0->f_71[iParam1] != 0)
	{
		StringCopy(&(uParam0->f_71[iParam1]->f_1), sParam2, 128);
		uParam0->f_71[iParam1]->f_17 = iParam3;
		return;
	}
}

bool func_367()
{
	return (func_945() != 0 || func_946(1));
}

bool func_368()
{
	return func_947() != 0;
}

int func_369(int iParam0)
{
	if (func_368())
	{
		return 0;
	}
	if (!func_367())
	{
		return 0;
	}
	if (func_948())
	{
		func_949(2);
	}
	else
	{
		func_949(1);
	}
	func_950(iParam0);
	return 1;
}

int func_370(var uParam0, int iParam1)
{
	if (&uParam0->f_71[iParam1] != 1)
	{
		return 255;
	}
	return uParam0->f_71[iParam1]->f_18;
}

void func_371(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (is_bit_set(iParam1, iVar0))
		{
			if (&uParam0->f_173[iVar0] != 0)
			{
				func_445(uParam0, iVar0);
			}
		}
		iVar0++;
	}
	Var1 = 2;
	Var1.f_1 = 2;
	Var1.f_3 = 0;
	_0xde544b7ec0c187cc(&(Var1.f_2));
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (is_bit_set(iParam1, iVar0))
		{
			if (iParam2[iVar0] == 255 || !network_is_player_active(iParam2[iVar0]))
			{
				func_951(uParam0, iVar0, 4);
			}
			else
			{
				func_951(uParam0, iVar0, 1);
				uParam0->f_180[iVar0] = iParam2[iVar0];
				uParam0->f_187[iVar0] = get_game_timer() + 17500;
				_0x31010318ba9897ac(&(Var1.f_2), iParam2[iVar0]);
			}
		}
		iVar0++;
	}
	if (count_player_bits(&(Var1.f_2)) > 0)
	{
		func_952(&Var1);
	}
}

bool func_372(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	*iParam4 = 0;
	*uParam5 = -1;
	if ((iParam3 == 255 || is_player_dead(iParam3)) || !network_is_player_active(iParam3))
	{
		bVar0 = false;
		bVar0 = func_953(&(uParam0->f_152), iParam1, iParam2);
		iVar1 = func_147(uParam0->f_39, uParam0->f_42, -1, bVar0);
		if (iVar1 != 0)
		{
			*iParam4 = func_954(iVar1, uParam0->f_2841, 0f, 0, 0, 0, 1, 1, 1, 0, 0);
			if (!is_ped_injured(*iParam4))
			{
				*uParam5 = func_956(2, func_955(&(uParam0->f_2841)), bVar0);
				func_957(*iParam4, 2, uParam0->f_42, *uParam5, bVar0);
				add_entity_to_audio_mix_group(*iParam4, "Poker_NPC_Group", 0f);
			}
		}
	}
	else
	{
		*iParam4 = clone_ped(get_player_ped(iParam3), 0f, false, false);
		if (!is_ped_injured(*iParam4))
		{
			add_entity_to_audio_mix_group(*iParam4, "Poker_NPC_Group", 0f);
		}
	}
	if (is_ped_injured(*iParam4))
	{
		return false;
	}
	return true;
}

void func_373(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (&uParam0->f_1442[iParam1] != 0)
	{
	}
	else if (is_ped_injured(iParam2))
	{
	}
	else
	{
		uParam0->f_1442[iParam1] = iParam2;
		if (bParam3)
		{
			set_entity_visible(iParam2, false);
			set_entity_collision(iParam2, false, false);
			freeze_entity_position(iParam2, true);
		}
	}
}

void func_374(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (&uParam0->f_173[iVar0] == 1 || &uParam0->f_173[iVar0] == 2)
		{
			uParam0->f_187[iVar0] = get_game_timer();
		}
		iVar0++;
	}
}

bool func_375(var uParam0, int iParam1)
{
	return !is_ped_injured(&(uParam0->f_1442[iParam1]));
}

bool func_376(var uParam0, int iParam1)
{
	return (!is_ped_injured(&(uParam0->f_1442[iParam1])) && _0xa0bc8faed8cfeb3c(&(uParam0->f_1442[iParam1])));
}

void func_377(int iParam0, int iParam1)
{
	func_432(&(Global_1051439->f_72[iParam0]->f_49), iParam1);
}

void func_378()
{
	iVar0 = 0;
	while (iVar0 < 180)
	{
		func_958();
		iVar0++;
	}
}

void func_379(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	if (uParam0->f_788 >= 20)
	{
	}
	else
	{
		func_959(iParam1, 0, 0);
		if (bParam2)
		{
			door_system_set_open_ratio(iParam1, iParam3, 1);
			door_system_set_door_state(iParam1, 1);
		}
		uParam0->f_767[uParam0->f_788] = iParam1;
		uParam0->f_788++;
	}
}

int func_380(int iParam0)
{
	switch (iParam0)
	{
		case 81:
			return 0;
		case 80:
			return 1;
		case 40:
			return 2;
		case 121:
			return 3;
		case 5:
			return 4;
	}
	return 0;
}

bool func_381(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (!is_ped_injured(iParam0))
		{
			if (iParam1 == 2104565373 && is_driveby_task_underneath_driving_task(iParam0))
			{
				return true;
			}
			if (get_script_task_status(iParam0, iParam1, true) == 1 || get_script_task_status(iParam0, iParam1, true) == 0)
			{
				return true;
			}
		}
	}
	return false;
}

int func_382(int iParam0)
{
	if (!func_960(iParam0))
	{
		return 0;
	}
	if (&Global_1051439->f_4472[iParam0] == 0)
	{
		Global_1051439->f_4472[iParam0] = func_961(iParam0);
	}
	return &(Global_1051439->f_4472[iParam0]);
}

bool func_383(var[] uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, int iParam17, int iParam18)
{
	if (&uParam0[iParam18] == iParam17)
	{
		return true;
	}
	return false;
}

bool func_384(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (uParam0->f_1400)
		{
			return false;
		}
	}
	if (uParam0->f_1388 != _minigame_get_next_event_type())
	{
		func_403(uParam0);
		return false;
	}
	if (iParam1 == 0)
	{
	}
	else if (uParam0->f_1388 == -1857735811)
	{
		if (bParam2)
		{
			if (uParam0->f_1388.f_2 != uParam0->f_1396 + 1 && uParam0->f_1396 != -1)
			{
				return false;
			}
		}
		if (uParam0->f_1388.f_1 == iParam1)
		{
			return true;
		}
	}
	return false;
}

bool func_385(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (uParam0->f_1400)
		{
			return false;
		}
	}
	if (uParam0->f_1388 != _minigame_get_next_event_type())
	{
		func_403(uParam0);
		return false;
	}
	if (uParam0->f_1388 == -1857735811)
	{
		iVar0 = uParam0->f_1396 + 1;
		iVar1 = (uParam0->f_1388.f_2 - iVar0);
		return iVar1 < 0;
	}
	return false;
}

bool func_386(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (uParam0->f_1400)
		{
			return false;
		}
	}
	if (uParam0->f_1388 != _minigame_get_next_event_type())
	{
		func_403(uParam0);
		return false;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
	}
	else if (uParam0->f_1388 == -1857735811)
	{
		if (bParam2)
		{
			if (uParam0->f_1388.f_2 != uParam0->f_1396 + 1 && uParam0->f_1396 != -1)
			{
				return false;
			}
		}
		if (uParam0->f_1388.f_1 == 1995414514 && is_bit_set(uParam0->f_1388.f_3, iParam1))
		{
			return true;
		}
	}
	return false;
}

int func_387(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	if (&uParam1->f_1558[iParam2] != 0)
	{
		return 0;
	}
	uParam1->f_1558[iParam2] = iParam3;
	uParam1->f_1558[iParam2]->f_1 = 0;
	func_268(&(uParam1->f_1558[iParam2]->f_2));
	if (bParam4)
	{
		func_390(uParam0, uParam1, iParam2);
	}
	return 1;
}

void func_388(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	if (bParam3)
	{
		func_183(uParam1);
	}
	func_266(uParam0, iParam2);
	func_795(uParam0, uParam1, func_962(uParam0), 1);
}

void func_389(var uParam0, var uParam1)
{
	iVar0 = uParam1->f_1553;
	iVar1 = 0;
	Stack.Push(uParam1->f_1553 != 0);
	Stack.Push(uParam0);
	Stack.Push(uParam1);
	Stack.Push(&(uParam1->f_1553));
	Call_Loc(&uParam1->f_1418[iVar0]);
	while ((StackVal && StackVal) && iVar1 < 10)
	{
		iVar1++;
	}
}

void func_390(var uParam0, var uParam1, int iParam2)
{
	iVar0 = &uParam1->f_1558[iParam2];
	iVar1 = 0;
	Stack.Push(&uParam1->f_1558[iParam2] != 0);
	Stack.Push(uParam0);
	Stack.Push(uParam1);
	Stack.Push(uParam1->f_1558[iParam2]);
	Stack.Push(iParam2);
	Call_Loc(&uParam1->f_1425[iVar0]);
	while ((StackVal && StackVal) && iVar1 < 10)
	{
		iVar1++;
	}
}

void func_391(var uParam0, var uParam1)
{
	iVar0 = uParam1->f_1607;
	iVar1 = 0;
	Stack.Push(uParam1->f_1607 != 0);
	Stack.Push(uParam0);
	Stack.Push(uParam1);
	Stack.Push(&(uParam1->f_1607));
	Call_Loc(&uParam1->f_1431[iVar0]);
	while ((StackVal && StackVal) && iVar1 < 10)
	{
		iVar1++;
	}
}

bool func_392(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (uParam0->f_1400)
		{
			return false;
		}
	}
	if (uParam0->f_1388 != _minigame_get_next_event_type())
	{
		func_403(uParam0);
		return false;
	}
	if (uParam0->f_1388 == -1857735811)
	{
		if (bParam1)
		{
			if (uParam0->f_1388.f_2 != uParam0->f_1396 + 1 && uParam0->f_1396 != -1)
			{
				return false;
			}
		}
		if (uParam0->f_1388.f_1 == 1592704673 && uParam0->f_1388.f_3 != 0)
		{
			return true;
		}
	}
	return false;
}

bool func_393(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (uParam0->f_1400)
		{
			return false;
		}
	}
	if (uParam0->f_1388 != _minigame_get_next_event_type())
	{
		func_403(uParam0);
		return false;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
	}
	else if (uParam0->f_1388 == -1857735811)
	{
		if (bParam2)
		{
			if (uParam0->f_1388.f_2 != uParam0->f_1396 + 1 && uParam0->f_1396 != -1)
			{
				return false;
			}
		}
		if (uParam0->f_1388.f_1 == 1592704673 && is_bit_set(uParam0->f_1388.f_3, iParam1))
		{
			return true;
		}
	}
	return false;
}

void func_394(var uParam0, var uParam1)
{
	if (uParam1->f_1451 && uParam1->f_1453 == 0)
	{
		if (func_203(&(uParam1->f_416), uParam1->f_9))
		{
			if (func_669(uParam1, 1))
			{
				uParam1->f_1451 = 0;
				uParam1->f_1452 = 0;
				uParam1->f_1453 = 0;
			}
			else if (func_963(uParam1, 1))
			{
				uParam1->f_1453 = uParam1->f_1452;
				func_821(uParam0, uParam1->f_9, func_625(uParam0, uParam1->f_9));
				func_822(uParam0, uParam1->f_9, func_625(uParam0, uParam1->f_9));
			}
		}
	}
}

void func_395(var uParam0, var uParam1)
{
	if (!uParam1->f_1451)
	{
		bVar0 = false;
		bVar1 = false;
		iVar2 = 0;
		bVar0 = func_409(uParam1, 1);
		if ((((func_203(&(uParam1->f_416), uParam1->f_9) && func_204(&(uParam1->f_416), uParam1->f_9) == 0) && func_964() >= func_965(uParam0, uParam1->f_11.f_12)) && !func_966(uParam0)) && !bVar0)
		{
			if (uParam1->f_2051 == 0)
			{
				bVar1 = !func_624(&(uParam1->f_416), uParam1->f_9);
				iVar2 = func_967(&(uParam1->f_416), uParam1->f_9);
			}
			else if (uParam1->f_2051 == 1)
			{
				bVar1 = true;
				iVar2 = func_967(&(uParam1->f_416), uParam1->f_9);
			}
		}
		if (bVar1)
		{
			if (!func_968(&(uParam0->f_2337)))
			{
				func_969(&(uParam0->f_2337), uParam0, &(uParam1->f_11), iVar2);
			}
			else
			{
				if (iVar2 != 0 && !func_970(uParam0))
				{
					func_971(uParam0, iVar2);
				}
				if (func_972(&(uParam0->f_2337), uParam0, &(uParam1->f_11)))
				{
					if (func_974(uParam1, uParam1->f_9, func_973(&(uParam0->f_2337))))
					{
						uParam1->f_1451 = 1;
						uParam1->f_1452 = func_973(&(uParam0->f_2337));
						uParam1->f_1453 = 0;
						func_975(&(uParam0->f_2337), uParam0);
					}
				}
			}
		}
		else if (func_968(&(uParam0->f_2337)))
		{
			func_975(&(uParam0->f_2337), uParam0);
		}
	}
}

bool func_396(var uParam0, var uParam1)
{
	if (func_485(uParam0->f_38))
	{
		*uParam1 = 8;
		return true;
	}
	if (func_487(uParam0->f_38, 700892038))
	{
		*uParam1 = 8;
		return true;
	}
	if (func_141(&(uParam0->f_152), 2) && func_976())
	{
		*uParam1 = 10;
		return true;
	}
	*uParam1 = 0;
	return false;
}

void func_397(var uParam0)
{
	func_977(uParam0, &(uParam0->f_152));
	if (uParam0->f_152.f_2052)
	{
		func_978(uParam0, &(uParam0->f_152.f_416));
	}
}

void func_398(var uParam0, var uParam1)
{
	bVar1 = ((!_0xa24c1d341c6e0d53(0, 0, 0) && (uParam1->f_1548 == 5 || uParam1->f_1548 == 6)) && (uParam1->f_1549 == 26 || uParam1->f_1549 == 27));
	if (((func_203(&(uParam1->f_416), uParam1->f_9) && func_624(&(uParam1->f_416), uParam1->f_9)) && !func_235()) && ((uParam0->f_152.f_1548 == 3 || uParam0->f_152.f_1548 == 5) || uParam0->f_152.f_1548 == 4))
	{
		func_979(&(uParam0->f_2337), 1);
		func_980(&(uParam0->f_2337), 1);
		func_981(&(uParam0->f_2337), 1);
	}
	else
	{
		func_979(&(uParam0->f_2337), 0);
		func_980(&(uParam0->f_2337), 0);
		func_981(&(uParam0->f_2337), 0);
	}
	if ((((func_210(&(uParam0->f_2841), uParam0->f_152.f_9) && func_455(&(uParam0->f_2841), uParam0->f_152.f_9) == 2) && !func_615(&(uParam0->f_2841), uParam0->f_152.f_9, 7)) && !func_615(&(uParam0->f_2841), uParam0->f_152.f_9, 9)) && !bVar1)
	{
		func_982(&(uParam0->f_2337), 0);
	}
	else
	{
		func_982(&(uParam0->f_2337), 1);
	}
	if (func_983(&(uParam0->f_2841), 0) && !bVar1)
	{
		func_984(&(uParam0->f_2337), 0);
	}
	else
	{
		func_984(&(uParam0->f_2337), 1);
	}
	if (bVar1)
	{
		func_985(&(uParam0->f_2337), 1);
	}
	else
	{
		func_985(&(uParam0->f_2337), 0);
	}
	func_986(&(uParam0->f_2337), 1);
	if (func_153(uParam0->f_2337.f_499, 1) && !is_pause_menu_active())
	{
		func_987(&(uParam0->f_2337));
	}
	else
	{
		func_468(&(uParam0->f_2337));
	}
	if (uParam0->f_4244.f_1)
	{
		iVar2 = 0;
		iVar3 = 0;
		iVar4 = -1;
		iVar5 = -1;
		fVar6 = 0f;
		if (uParam0->f_152.f_2066)
		{
			iVar2 = 3;
		}
		else if (uParam0->f_4244.f_2 == 4)
		{
			if (func_602(&(uParam0->f_2841), uParam0->f_152.f_9, 3))
			{
				iVar2 = 4;
			}
			else if (uParam0->f_4244.f_6 < 5)
			{
				if (uParam0->f_4244.f_6 == 3)
				{
					set_gameplay_cam_relative_heading(24.97928f, 1f);
					set_gameplay_cam_relative_pitch(0f, 1f);
				}
				iVar2 = 4;
				uParam0->f_4244.f_6++;
			}
			else
			{
				iVar2 = 0;
			}
		}
		else
		{
			bVar7 = false;
			switch (uParam0->f_4244.f_2)
			{
				case 0:
					if (func_988(uParam0->f_2337.f_494) || bVar7)
					{
						iVar2 = 2;
					}
					else if (func_988(uParam0->f_2337.f_495))
					{
						iVar2 = 1;
					}
					else
					{
						iVar2 = 0;
					}
					break;
				case 2:
					if (func_988(uParam0->f_2337.f_495))
					{
						iVar2 = 1;
					}
					else if (!(func_989(uParam0->f_2337.f_494) || bVar7))
					{
						if (func_989(uParam0->f_2337.f_495))
						{
							iVar2 = 1;
						}
						else
						{
							iVar2 = 0;
						}
					}
					else
					{
						iVar2 = 2;
					}
					break;
				case 1:
					if (func_988(uParam0->f_2337.f_494) || bVar7)
					{
						iVar2 = 2;
					}
					else if (!func_989(uParam0->f_2337.f_495))
					{
						if (func_989(uParam0->f_2337.f_494))
						{
							iVar2 = 2;
						}
						else
						{
							iVar2 = 0;
						}
					}
					else
					{
						iVar2 = 1;
					}
					break;
			}
			if (bVar1)
			{
				iVar2 = 1;
			}
		}
		iVar3 = 0;
		if (uParam0->f_152.f_9 == uParam0->f_152.f_416.f_6)
		{
			if (uParam0->f_2337.f_442)
			{
				iVar3 = 1;
			}
		}
		if (iVar2 == 1)
		{
			iVar4 = uParam0->f_152.f_1998;
			iVar5 = 0;
		}
		else if (iVar2 == 3)
		{
			iVar4 = uParam0->f_152.f_2064;
			iVar5 = -1;
		}
		else if (iVar2 == 4)
		{
			iVar4 = uParam0->f_152.f_9;
			iVar5 = -1;
		}
		else
		{
			iVar4 = -1;
			iVar5 = -1;
		}
		if (iVar2 == 1)
		{
			if (uParam0->f_4244.f_2 == 0)
			{
				fVar6 = 2.5f;
			}
		}
		if (((uParam0->f_4244.f_2 != iVar2 || ((uParam0->f_4244.f_3 != iVar3 && iVar2 != 1) && iVar2 != 3)) || uParam0->f_4244.f_4 != iVar4) || uParam0->f_4244.f_5 != iVar5)
		{
			func_451(&(uParam0->f_4244), iVar2, iVar3, iVar4, iVar5, fVar6);
		}
		func_990(&(uParam0->f_4244));
	}
	if ((((uParam0->f_152.f_1548 == 4 && (uParam0->f_4244.f_2 == 2 || uParam0->f_4244.f_2 == 1)) && uParam0->f_152.f_1549 != 42) && func_203(&(uParam1->f_416), uParam1->f_9)) && func_440(&(uParam1->f_416), uParam1->f_9))
	{
		if (uParam0->f_2337.f_170 != 6)
		{
			func_800(&(uParam0->f_2337), _create_var_string(10, "MGPKR_MSG_YOU_HAVE", func_991(&(uParam1->f_416), uParam1->f_9, 0)), 6);
		}
	}
	else if (uParam0->f_2337.f_170 == 6)
	{
		func_992(&(uParam0->f_2337));
	}
	if (uParam0->f_48)
	{
		if (func_968(&(uParam0->f_2337)))
		{
			uParam1->f_2183 = get_game_timer() + 3000;
		}
		if (uParam1->f_2183 != -1 && get_game_timer() <= uParam1->f_2183)
		{
			if (uParam1->f_1403 != 3)
			{
				func_188(uParam1, 3);
			}
		}
		else if (uParam1->f_1403 == 3)
		{
			func_188(uParam1, 2);
		}
	}
	if (uParam0->f_42 == 121 && does_entity_exist(uParam0->f_2841.f_791))
	{
		if (uParam0->f_4244.f_2 == 1)
		{
			set_entity_visible(uParam0->f_2841.f_791, false);
		}
		else
		{
			set_entity_visible(uParam0->f_2841.f_791, true);
		}
	}
	if (!func_269(&(uParam0->f_152.f_2167)))
	{
		if (is_disabled_control_pressed(0, -813019446))
		{
			func_268(&(uParam0->f_152.f_2167));
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_203(&(uParam0->f_152.f_416), iVar0))
				{
					if (func_993(&(uParam0->f_2337), iVar0))
					{
						Var8 = { func_443(&(uParam0->f_152), iVar0, 0, 1) };
						func_994(&(uParam0->f_2337), iVar0, &Var8);
						func_995(&(uParam0->f_2841), 1);
					}
				}
				iVar0++;
			}
		}
	}
	else if (func_101(&(uParam0->f_152.f_2167), 2f))
	{
		func_478(&(uParam0->f_152.f_2167));
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (func_993(&(uParam0->f_2337), iVar0))
			{
				func_996(&(uParam0->f_2337), iVar0);
				func_995(&(uParam0->f_2841), 0);
			}
			iVar0++;
		}
	}
	func_997(&(uParam0->f_2337), &(uParam0->f_152.f_416), &(uParam0->f_152.f_11));
	if (!uParam0->f_152.f_1636)
	{
		if (uParam0->f_4244.f_2 == 2)
		{
			uParam0->f_152.f_1636 = 1;
		}
	}
	else if (uParam0->f_4244.f_2 != 2 && uParam0->f_4244.f_2 != 1)
	{
		uParam0->f_152.f_1636 = 0;
	}
	if (func_210(&(uParam0->f_2841), uParam0->f_152.f_9))
	{
		if (uParam0->f_152.f_1636)
		{
			if (!func_602(&(uParam0->f_2841), uParam0->f_152.f_9, 10) && func_609(&(uParam0->f_2841), uParam0->f_152.f_9, 1))
			{
				func_998(&(uParam0->f_2841), uParam0->f_152.f_9);
				func_999(uParam1);
			}
		}
		else if (func_602(&(uParam0->f_2841), uParam0->f_152.f_9, 10) && !func_1000(&(uParam0->f_2841), uParam0->f_152.f_9, 1))
		{
			func_1001(&(uParam0->f_2841), uParam0->f_152.f_9);
		}
	}
	if ((func_210(&(uParam0->f_2841), uParam1->f_9) && func_615(&(uParam0->f_2841), uParam1->f_9, 10)) && !func_1000(&(uParam0->f_2841), uParam1->f_9, 1))
	{
		func_1002(uParam1, 1);
	}
	else
	{
		func_1002(uParam1, 0);
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iVar0 != uParam1->f_9)
		{
			if ((func_1003(uParam1, iVar0, &bVar24) && func_210(&(uParam0->f_2841), iVar0)) && func_455(&(uParam0->f_2841), iVar0) == 2)
			{
				if (bVar24)
				{
					if (!func_602(&(uParam0->f_2841), iVar0, 10) && func_609(&(uParam0->f_2841), iVar0, 1))
					{
						func_998(&(uParam0->f_2841), iVar0);
					}
				}
				else if (func_602(&(uParam0->f_2841), iVar0, 10) && !func_1000(&(uParam0->f_2841), iVar0, 1))
				{
					func_1001(&(uParam0->f_2841), iVar0);
				}
			}
		}
		iVar0++;
	}
	func_1004(uParam0, &(uParam0->f_152));
	if (uParam0->f_152.f_2173 != -1)
	{
		func_1005(uParam0);
	}
	func_1006(uParam0, &(uParam0->f_152));
	func_1007(uParam0, &(uParam0->f_152), &(uParam0->f_152.f_1671.f_112));
	if (func_913(&(uParam1->f_416), uParam1->f_9))
	{
		func_1008();
	}
	else
	{
		func_189();
	}
	func_1009(&(uParam0->f_152));
	func_1011(&(uParam0->f_2337), func_1010(uParam0, 1));
	if (!uParam0->f_2337.f_165 && !uParam0->f_2337.f_166)
	{
		if (func_235() || uParam1->f_1632)
		{
			func_1012(&(uParam0->f_2337), 0);
			func_1013(&(uParam0->f_2337));
			func_214(&(uParam0->f_2337), 1);
			func_215(uParam0, 1);
			if (uParam1->f_1632)
			{
				func_1014(&(uParam0->f_152), 2);
			}
		}
		else
		{
			func_1012(&(uParam0->f_2337), 1);
			func_214(&(uParam0->f_2337), 0);
			func_215(uParam0, 0);
		}
	}
	if (func_1010(uParam0, 0))
	{
		func_1014(&(uParam0->f_152), 1);
	}
	switch (uParam0->f_152.f_1404)
	{
		case 1:
			disable_all_control_actions(2);
			disable_all_control_actions(1);
			disable_all_control_actions(0);
			disable_control_action(2, -115100873, false);
			disable_control_action(2, -469583720, false);
			disable_control_action(2, -1028581062, false);
			disable_control_action(2, 58012824, false);
			disable_control_action(2, 1684699026, false);
			enable_control_action(2, -385266784, true);
			break;
		case 2:
			disable_all_control_actions(2);
			disable_all_control_actions(1);
			disable_all_control_actions(0);
			disable_control_action(2, -115100873, false);
			disable_control_action(2, -469583720, false);
			disable_control_action(2, -1028581062, false);
			disable_control_action(2, 58012824, false);
			disable_control_action(2, 1684699026, false);
			break;
	}
	uParam0->f_152.f_1404 = 0;
}

void func_399(var uParam0, var uParam1)
{
	if (uParam1->f_1553 != 0)
	{
		return;
	}
	if (uParam0->f_57)
	{
		return;
	}
	if (func_1015(uParam1, 1))
	{
		func_1016(uParam0, &(uParam0->f_152));
		return;
	}
	if (func_1017(uParam1))
	{
		func_1016(uParam0, &(uParam0->f_152));
		return;
	}
}

void func_400(var uParam0)
{
	uParam0->f_1388 = 0;
	uParam0->f_1388.f_1 = 0;
	uParam0->f_1388.f_2 = -1;
	uParam0->f_1388.f_3 = 0;
}

bool func_401(var uParam0, int iParam1)
{
	return &(uParam0->f_409[iParam1]);
}

void func_402(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	if (iParam2 == 255)
	{
	}
	else if (!network_is_player_active(iParam2))
	{
	}
	if (&uParam0->f_409[iParam1])
	{
	}
	uParam0->f_240[iParam1] = 1;
	uParam0->f_240[iParam1]->f_18 = iParam2;
	uParam0->f_240[iParam1]->f_19 = { *uParam4 };
	uParam0->f_240[iParam1]->f_26 = iParam3;
	uParam0->f_409[iParam1] = 1;
	if ((func_141(uParam0, 2) || iParam2 == 255) || !network_is_player_active(iParam2))
	{
		StringCopy(&(uParam0->f_240[iParam1]->f_1), func_1018(iParam1, uParam0->f_9), 128);
		uParam0->f_240[iParam1]->f_17 = 0;
	}
	else
	{
		StringCopy(&(uParam0->f_240[iParam1]->f_1), get_player_name(iParam2), 128);
		uParam0->f_240[iParam1]->f_17 = 1;
	}
}

void func_403(var uParam0)
{
}

void func_404()
{
	_minigame_pop_next_event();
}

void func_405(var uParam0)
{
	Var0.f_10 = 6;
	if (!_minigame_get_next_event(&Var0, 72))
	{
		return;
	}
	_minigame_pop_next_event();
	uParam0->f_1 = { Var0.f_1 };
	uParam0->f_9 = Var0.f_9;
	uParam0->f_10 = 0;
	*uParam0 = 1;
	iVar72 = 0;
	while (iVar72 < Var0.f_71)
	{
		func_402(uParam0, &(Var0.f_10[iVar72]), network_get_player_from_gamer_handle(&(Var0.f_10[iVar72]->f_1)), 1, &(Var0.f_10[iVar72]->f_1));
		iVar72++;
	}
}

void func_406(var uParam0)
{
	if (!_minigame_get_next_event(&Var0, 2))
	{
		return;
	}
	_minigame_pop_next_event();
	*uParam0 = 0;
	uParam0->f_9 = -1;
	uParam0->f_10 = Var0.f_1;
}

void func_407(var uParam0)
{
	if (!_minigame_get_next_event(&Var0, 11))
	{
		return;
	}
	_minigame_pop_next_event();
	func_402(uParam0, Var0.f_1, network_get_player_from_gamer_handle(&(Var0.f_1.f_1)), 1, &(Var0.f_1.f_1));
}

void func_408(var uParam0, var uParam1, bool bParam2)
{
	if (_minigame_get_next_event_type() != -1857735811)
	{
		return;
	}
	_minigame_pop_next_event();
	if (bParam2 && (uParam0->f_1388.f_1 == 1995414514 || uParam0->f_1388.f_1 == 1592704673))
	{
		if (uParam0->f_1388.f_3 != 0)
		{
		}
	}
	else
	{
		if (uParam0->f_1388.f_1 == 1995414514 && uParam0->f_1388.f_3 != 0)
		{
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (is_bit_set(uParam0->f_1388.f_3, iVar0))
				{
					if (func_203(uParam1, iVar0))
					{
						func_1019(uParam0, iVar0);
					}
					else
					{
						func_1020(uParam0, iVar0);
					}
				}
				iVar0++;
			}
		}
		if (uParam0->f_1388.f_1 == -1766937362)
		{
			func_1021(&(uParam0->f_416), uParam1, uParam1->f_6, &(uParam0->f_1397), &(uParam0->f_1398), &(uParam0->f_1399));
		}
		uParam0->f_416 = { *uParam1 };
	}
}

bool func_409(var uParam0, int iParam1)
{
	return is_bit_set((uParam0->f_66 && (-1 ^ (uParam0->f_69 || uParam0->f_70) || uParam0->f_68)), iParam1);
}

void func_410(var uParam0, int iParam1, struct<4> Param2, bool bParam6, bool bParam7)
{
	if (is_bit_set(uParam0->f_66, iParam1))
	{
		if (!is_bit_set((uParam0->f_69 || uParam0->f_70), iParam1))
		{
		}
		else if (is_bit_set(uParam0->f_68, iParam1))
		{
		}
	}
	*uParam0->f_53[iParam1] = { Param2 };
	set_bit(&(uParam0->f_66), iParam1);
	clear_bit(&(uParam0->f_69), iParam1);
	clear_bit(&(uParam0->f_70), iParam1);
	if (bParam6)
	{
		set_bit(&(uParam0->f_67), iParam1);
	}
	else
	{
		clear_bit(&(uParam0->f_67), iParam1);
	}
	if (bParam7)
	{
		set_bit(&(uParam0->f_68), iParam1);
	}
	else
	{
		clear_bit(&(uParam0->f_68), iParam1);
	}
}

void func_411(var uParam0, var uParam1)
{
	uParam0->f_166 = 1;
	func_466(uParam0, uParam1);
}

bool func_412(int iParam0)
{
	return (Global_1572887->f_106.f_15 && iParam0) != 0;
}

void func_413(int iParam0)
{
	func_1022(&(Global_1572887->f_106.f_15), iParam0);
}

void func_414(var uParam0)
{
}

void func_415(var uParam0)
{
	func_221(uParam0);
}

void func_416(int iParam0, int iParam1)
{
	func_1022(&(Global_1051439->f_72[iParam0]->f_49), iParam1);
}

void func_417(var uParam0)
{
	if (uParam0->f_805 != -1)
	{
		if (_does_anim_scene_exist(uParam0->f_805))
		{
			_delete_anim_scene(uParam0->f_805);
		}
		uParam0->f_805 = -1;
		uParam0->f_810 = 0;
	}
}

void func_418(var uParam0)
{
	if (uParam0->f_798 != -1)
	{
		if (_does_anim_scene_exist(uParam0->f_798))
		{
			_delete_anim_scene(uParam0->f_798);
		}
		uParam0->f_798 = -1;
	}
}

void func_419(var uParam0)
{
	if (uParam0->f_793 != -1)
	{
		if (_does_anim_scene_exist(uParam0->f_793))
		{
			_delete_anim_scene(uParam0->f_793);
		}
		uParam0->f_793 = -1;
	}
}

void func_420(var uParam0)
{
	if (uParam0->f_817 != -1)
	{
		if (_does_anim_scene_exist(uParam0->f_817))
		{
			_delete_anim_scene(uParam0->f_817);
		}
		uParam0->f_817 = -1;
	}
}

void func_421(var uParam0)
{
	if (uParam0->f_816 != -1)
	{
		if (_does_anim_scene_exist(uParam0->f_816))
		{
			_delete_anim_scene(uParam0->f_816);
		}
		uParam0->f_816 = -1;
	}
}

void func_422(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (_does_anim_scene_exist(&(uParam0->f_811[iVar0])))
		{
			_delete_anim_scene(&(uParam0->f_811[iVar0]));
		}
		uParam0->f_811[iVar0] = -1;
		iVar0++;
	}
}

void func_423(var uParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_210(uParam0, iVar0))
		{
			func_211(uParam0, iVar0, bParam1);
		}
		iVar0++;
	}
}

void func_424(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_1023(uParam0, iVar0, 0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 5)
	{
		func_1024(uParam0, iVar1);
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar2 = 0;
		while (iVar2 < 4)
		{
			if (does_entity_exist(uParam0->f_74[iVar0][iVar2]))
			{
				set_object_as_no_longer_needed((*uParam0->f_74[iVar0])[iVar2]);
				_0x341cdd17efc2472e(iVar0, iVar2);
			}
			if (does_entity_exist(&(uParam0->f_74[iVar0]->f_15[iVar2])))
			{
				set_object_as_no_longer_needed(uParam0->f_74[iVar0]->f_15[iVar2]);
			}
			iVar2++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar2 = 0;
		while (iVar2 < 4)
		{
			if (does_entity_exist(uParam0->f_255[iVar0][iVar2]))
			{
				set_object_as_no_longer_needed((*uParam0->f_255[iVar0])[iVar2]);
			}
			if (does_entity_exist(&(uParam0->f_255[iVar0]->f_15[iVar2])))
			{
				set_object_as_no_longer_needed(uParam0->f_255[iVar0]->f_15[iVar2]);
			}
			iVar2++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar2 = 0;
		while (iVar2 < 4)
		{
			if (does_entity_exist(uParam0->f_436[iVar0][iVar2]))
			{
				set_object_as_no_longer_needed((*uParam0->f_436[iVar0])[iVar2]);
			}
			if (does_entity_exist(&(uParam0->f_436[iVar0]->f_15[iVar2])))
			{
				set_object_as_no_longer_needed(uParam0->f_436[iVar0]->f_15[iVar2]);
			}
			iVar2++;
		}
		iVar0++;
	}
	if (does_entity_exist(uParam0->f_689))
	{
		set_object_as_no_longer_needed(&(uParam0->f_689));
	}
}

void func_425(var uParam0)
{
	if (does_entity_exist(uParam0->f_790))
	{
		set_entity_visible(uParam0->f_790, true);
		set_object_as_no_longer_needed(&(uParam0->f_790));
	}
	if (does_entity_exist(uParam0->f_791))
	{
		set_entity_visible(uParam0->f_791, true);
		set_object_as_no_longer_needed(&(uParam0->f_791));
	}
	if (does_entity_exist(uParam0->f_792))
	{
		set_entity_visible(uParam0->f_792, true);
		set_object_as_no_longer_needed(&(uParam0->f_792));
	}
}

void func_426(var uParam0)
{
	if (uParam0->f_807 != -1)
	{
		_0x53cb3970ba02e3cc(uParam0->f_807);
		uParam0->f_807 = -1;
	}
}

void func_427(var uParam0)
{
	if (uParam0->f_38)
	{
		uParam0->f_38 = 0;
		_0x57a197ad83f66bbf("TaskMovePokerMP");
		iVar0 = 0;
		while (iVar0 < 6)
		{
			remove_anim_dict(uParam0->f_1274[iVar0]);
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 6)
		{
			remove_clip_set(func_334(uParam0, iVar0));
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < 2)
		{
			iVar2 = 0;
			while (iVar2 < 2)
			{
				remove_anim_dict(func_335(uParam0, iVar1, iVar2));
				iVar2++;
			}
			iVar1++;
		}
		remove_anim_dict("mini_games@poker_mg@deal");
		set_model_as_no_longer_needed(uParam0->f_693);
		set_model_as_no_longer_needed(uParam0->f_694);
		set_model_as_no_longer_needed(uParam0->f_695);
		set_model_as_no_longer_needed(-1383054421);
		set_model_as_no_longer_needed(744014130);
		set_model_as_no_longer_needed(552839784);
		set_model_as_no_longer_needed(-809957388);
		set_model_as_no_longer_needed(1028219667);
		set_model_as_no_longer_needed(1699623712);
		set_model_as_no_longer_needed(1509629050);
		set_model_as_no_longer_needed(278923713);
		set_model_as_no_longer_needed(1985926465);
		set_model_as_no_longer_needed(-1045813766);
		func_219(uParam0, 1);
		func_220(uParam0, 1);
	}
}

void func_428(var uParam0)
{
	if (func_1025(uParam0))
	{
		func_1026(uParam0, 0);
	}
	if (does_cam_exist(uParam0->f_135))
	{
		destroy_cam(uParam0->f_135, false);
	}
	uParam0->f_126 = 0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		uParam0->f_122[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		uParam0->f_124[iVar0] = 0;
		iVar0++;
	}
}

void func_429(var uParam0)
{
	if (*uParam0)
	{
		*uParam0 = 0;
		_0x798be43c9393632b("table_games_cam");
		set_model_as_no_longer_needed(-615159064);
	}
}

void func_430(var uParam0)
{
	_0x531a78d6bf27014b("HUD_POKER");
	_0x37d7bdba89f13959("OJPokerPlayerTurn");
}

void func_431(var uParam0)
{
	if (uParam0->f_1 != 5)
	{
		if (_uiflowblock_is_loaded(uParam0->f_2))
		{
			func_1027(uParam0);
			iVar0 = 0;
			while (iVar0 < 6)
			{
				func_1028(uParam0, iVar0);
				iVar0++;
			}
			func_925(uParam0);
			_uistatemachine_destroy(-1631983120);
			_uiflowblock_release(&(uParam0->f_2));
		}
		func_926(uParam0, 5);
	}
	if (_databinding_is_data_id_valid(uParam0->f_6))
	{
		_databinding_remove_data_entry(uParam0->f_6);
		uParam0->f_164 = (uParam0->f_164 - 1);
	}
}

void func_432(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_433(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	if ((bParam4 && iParam1 == -915411861) && func_1029(iParam0, 59806960))
	{
		iParam1 = 59806960;
	}
	if (func_1030(iParam0))
	{
		return func_1032(func_1031(iParam0, 0), iParam1, bParam3, 1);
	}
	if (!func_1033(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (&Var0[iVar32] == 2084597891 || &Var0[iVar32] == 773203532)
		{
			if (iParam5 != 0 && &Var0[iVar32] != iParam5)
			{
			}
			else
			{
				return Var0[iVar32]->f_1;
				Jump @204; //curOff = 188
				if (&Var0[iVar32] == 0)
				{
				}
				else
				{
					iVar32++;
				}
				if (!bParam3)
				{
				}
				return 0;
			}
		}
	}
}

void func_434(var uParam0, int iParam1)
{
	uParam0->f_152.f_51 = iParam1;
	func_1034(&(uParam0->f_2337), iParam1);
}

void func_435(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1548 = iParam1;
	uParam0->f_1549 = iParam2;
	func_268(&(uParam0->f_1550));
}

int func_436(var uParam0, var uParam1, var uParam2)
{
	if (func_203(uParam1, uParam1->f_3))
	{
		*uParam2 = uParam1->f_3;
		return 1;
	}
	if (uParam1->f_3 != -1)
	{
		*uParam2 = func_823(uParam1, uParam1->f_3);
		if (func_203(uParam1, *uParam2))
		{
			return 1;
		}
	}
	*uParam2 = 0;
	if (func_203(uParam1, *uParam2))
	{
		return 1;
	}
	*uParam2 = uParam0->f_9;
	if (func_203(uParam1, *uParam2))
	{
		return 1;
	}
	*uParam2 = 0;
	return 0;
}

void func_437(var uParam0, int iParam1)
{
	if (uParam0->f_1997)
	{
		return;
	}
	uParam0->f_1998 = iParam1;
}

void func_438(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (bParam2)
	{
		func_634(&(uParam0->f_2841), uParam0->f_152.f_1998, 0);
	}
	if (bParam3)
	{
		bVar2 = false;
		if ((uParam0->f_152.f_1548 == 3 || uParam0->f_152.f_1548 == 4) || uParam0->f_152.f_1548 == 5)
		{
			bVar2 = true;
		}
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (func_203(uParam1, iVar0) && (bParam4 || uParam0->f_152.f_9 != iVar0))
			{
				func_1035(&(uParam0->f_2841), iVar0, func_204(uParam1, iVar0), func_691(uParam1, iVar0), bVar2, 0);
			}
			else
			{
				func_1035(&(uParam0->f_2841), iVar0, 0, 0, 0, 0);
			}
			iVar0++;
		}
	}
	iVar1 = 0;
	while (iVar1 < uParam1->f_15.f_23)
	{
		func_1036(&(uParam0->f_2841), iVar1, uParam0->f_152.f_1998, 1, 1);
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_440(uParam1, iVar0))
		{
			if (uParam0->f_152.f_9 == iVar0)
			{
				func_1037(&(uParam0->f_2841), iVar0, 2, 0, 1);
			}
			else
			{
				func_1038(&(uParam0->f_2841), iVar0, 2, 0);
			}
		}
		else if (func_760(uParam1, iVar0))
		{
			if (uParam0->f_152.f_9 == iVar0)
			{
				func_1037(&(uParam0->f_2841), iVar0, 5, uParam0->f_152.f_1998, 1);
			}
			else
			{
				func_1038(&(uParam0->f_2841), iVar0, 5, uParam0->f_152.f_1998);
			}
		}
		else if (func_702(uParam1, iVar0))
		{
			func_1037(&(uParam0->f_2841), iVar0, 3, 0, 1);
		}
		iVar0++;
	}
}

int func_439(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = 0;
	if (&uParam0->f_1442[iParam1] == 0)
	{
	}
	else
	{
		iVar0 = &uParam0->f_1442[iParam1];
		uParam0->f_1442[iParam1] = 0;
		if (bParam2 && !is_ped_injured(iVar0))
		{
			set_entity_visible(iVar0, true);
			set_entity_collision(iVar0, true, false);
			freeze_entity_position(iVar0, false);
		}
	}
	return iVar0;
}

bool func_440(var uParam0, int iParam1)
{
	if (((iParam1 >= 0 && iParam1 < 6) && &uParam0->f_39[iParam1] != -1) && uParam0->f_39[iParam1]->f_6 == 0)
	{
		return true;
	}
	return false;
}

int func_441(int iParam0, int iParam1)
{
	bVar0 = is_ped_male(*iParam0);
	if (bVar0)
	{
		if ((iParam1 == 0 || iParam1 == 1) || iParam1 == 2)
		{
			return iParam1;
		}
	}
	else if ((iParam1 == 3 || iParam1 == 4) || iParam1 == 5)
	{
		return iParam1;
	}
	switch (iParam1)
	{
		case 0:
			return 3;
		case 1:
			return 4;
		case 2:
			return 5;
		case 3:
			return 0;
		case 4:
			return 1;
		case 5:
			return 2;
		default:
			break;
	}
	if (bVar0)
	{
		return 0;
	}
	return 4;
}

int func_442(int iParam0)
{
	iVar0 = get_random_int_in_range(0, 4);
	return func_441(iParam0, iVar0);
}

struct<16> func_443(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	if (&uParam0->f_71[iParam1] != 0)
	{
		if (bParam2 && iParam1 == uParam0->f_9)
		{
			StringCopy(&cVar0, _create_var_string(2, "MGPKR_YOU"), 128);
			return cVar0;
		}
		else if (iParam3 && uParam0->f_71[iParam1]->f_17)
		{
			StringCopy(&cVar0, func_1039(&(uParam0->f_71[iParam1]->f_1), 109029619), 128);
			return cVar0;
		}
		else
		{
			return uParam0->f_71[iParam1]->f_1;
		}
	}
	StringCopy(&cVar0, "** Null **", 128);
	return cVar0;
}

bool func_444(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, float fParam10, bool bParam11, bool bParam12, bool bParam13, char* sParam14)
{
	if (func_1040(uParam0, iParam1, iParam2, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, sParam14))
	{
		if (iParam3 == 0)
		{
			func_1041(uParam0, iParam1);
		}
		else if (bParam13)
		{
			func_1042(uParam0, iParam1);
		}
		else if (bParam11)
		{
			func_1043(uParam0, iParam1, bParam12);
		}
		else
		{
			func_218(uParam0, iParam1, iParam3, fParam10);
		}
		return true;
	}
	return false;
}

void func_445(var uParam0, int iParam1)
{
	if (&uParam0->f_173[iParam1] == 0)
	{
	}
	else
	{
		if (&uParam0->f_173[iParam1] != 4)
		{
			func_597(&(uParam0->f_180[iParam1]), 2);
		}
		uParam0->f_173[iParam1] = 0;
		uParam0->f_180[iParam1] = 255;
		uParam0->f_187[iParam1] = 0;
		StringCopy(uParam0->f_194[iParam1], "", 128);
	}
}

void func_446(var uParam0, var uParam1)
{
	func_1044(&(uParam0->f_2337), uParam0->f_152.f_9);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_1045(uParam0, uParam1, iVar0, 0);
		iVar0++;
	}
	func_1046(&(uParam0->f_2337));
}

void func_447(var uParam0)
{
	func_789(&(uParam0->f_2841), 0);
	func_790(&(uParam0->f_2841), 0);
	func_791(&(uParam0->f_2841));
	func_792(&(uParam0->f_2841));
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_210(&(uParam0->f_2841), iVar0) && func_455(&(uParam0->f_2841), iVar0) == 2)
		{
			func_218(&(uParam0->f_2841), iVar0, 1, 0);
		}
		iVar0++;
	}
	func_219(&(uParam0->f_2841), 1);
	func_220(&(uParam0->f_2841), 1);
}

void func_448(var uParam0, var uParam1)
{
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_440(uParam1, iVar1))
		{
			iVar0 = func_618(uParam1, iVar1);
			if (uParam1->f_6 == iVar1)
			{
				func_1048(&(uParam0->f_2337), iVar1, func_1047(uParam0, iVar1, iVar0));
				func_1049(&(uParam0->f_2337), iVar1, 1);
			}
			else
			{
				func_1048(&(uParam0->f_2337), iVar1, func_1050(&(uParam0->f_2337), iVar0));
				func_1049(&(uParam0->f_2337), iVar1, 0);
			}
		}
		else if (func_760(uParam1, iVar1))
		{
			func_1048(&(uParam0->f_2337), iVar1, func_1051());
			func_1052(&(uParam0->f_2337), iVar1, 1);
		}
		else if (func_702(uParam1, iVar1))
		{
		}
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (iVar2 < uParam1->f_15.f_23)
		{
			func_1054(&(uParam0->f_2337), iVar2, func_1053(uParam1, iVar2), 0, 1);
		}
		else
		{
			func_1054(&(uParam0->f_2337), iVar2, func_330(), 0, 1);
		}
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < uParam1->f_485)
	{
		func_1057(&(uParam0->f_2337), iVar3, func_1055(uParam1, iVar3), func_1056(uParam1));
		iVar3++;
	}
	iVar4 = 0;
	if (uParam1->f_485 == 0)
	{
		iVar3 = 0;
		iVar4 = func_1058(uParam1);
	}
	else
	{
		iVar3 = (uParam1->f_485 - 1);
		iVar4 = (func_1058(uParam1) + func_1055(uParam1, iVar3));
	}
	func_1057(&(uParam0->f_2337), iVar3, iVar4, func_1056(uParam1));
}

void func_449(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_440(uParam1, iVar0))
		{
			func_1059(&(uParam0->f_2337), iVar0, 1);
			func_1048(&(uParam0->f_2337), iVar0, func_1060());
			func_1049(&(uParam0->f_2337), iVar0, 0);
			func_1061(&(uParam0->f_2337), iVar0);
			func_1062(&(uParam0->f_2337), iVar0, 0, func_330());
			func_1062(&(uParam0->f_2337), iVar0, 1, func_330());
			func_1063(&(uParam0->f_2337), iVar0, 0);
			func_1063(&(uParam0->f_2337), iVar0, 1);
		}
		else if (func_702(uParam1, iVar0))
		{
			func_1059(&(uParam0->f_2337), iVar0, 1);
			func_1048(&(uParam0->f_2337), iVar0, func_991(uParam1, iVar0, 1));
			func_1049(&(uParam0->f_2337), iVar0, 0);
			func_1061(&(uParam0->f_2337), iVar0);
			func_1062(&(uParam0->f_2337), iVar0, 0, func_635(uParam1, iVar0, 0));
			func_1062(&(uParam0->f_2337), iVar0, 1, func_635(uParam1, iVar0, 1));
			func_1064(&(uParam0->f_2337), iVar0, 0);
		}
		else if (func_760(uParam1, iVar0))
		{
			func_1048(&(uParam0->f_2337), iVar0, func_1051());
			func_1052(&(uParam0->f_2337), iVar0, 1);
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (iVar1 < uParam1->f_15.f_23)
		{
			func_1054(&(uParam0->f_2337), iVar1, func_1053(uParam1, iVar1), 0, 1);
		}
		else
		{
			func_1054(&(uParam0->f_2337), iVar1, func_330(), 0, 1);
		}
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < uParam1->f_485)
	{
		func_1057(&(uParam0->f_2337), iVar2, func_1055(uParam1, iVar2), func_1056(uParam1));
		iVar2++;
	}
}

void func_450(var uParam0)
{
	if (uParam0->f_126 == 0)
	{
		return;
	}
	if (!does_cam_exist(uParam0->f_135))
	{
		uParam0->f_135 = create_camera(26379945, false);
	}
	if (!does_cam_exist(uParam0->f_135))
	{
	}
}

void func_451(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (!uParam0->f_1)
	{
	}
	else if (!_0x927b810e43e99932(&(uParam0->f_9)))
	{
	}
	else
	{
		if (uParam0->f_2 == 3 || uParam0->f_2 == 1)
		{
			if (iParam1 == 2)
			{
				func_1065(&(uParam0->f_36), get_frame_count() + 1);
			}
			else
			{
				func_1026(&(uParam0->f_36), 0);
			}
		}
		if (uParam0->f_2 == 4)
		{
			func_1026(&(uParam0->f_36), 3000);
		}
		uParam0->f_2 = iParam1;
		uParam0->f_3 = iParam2;
		uParam0->f_4 = iParam3;
		uParam0->f_5 = iParam4;
		switch (iParam1)
		{
			case 0:
				uParam0->f_9.f_21 = 0;
				uParam0->f_9.f_22 = 0;
				uParam0->f_9.f_23 = 0;
				uParam0->f_9.f_20 = iParam2;
				break;
			case 2:
				uParam0->f_9.f_21 = 1;
				uParam0->f_9.f_22 = 0;
				uParam0->f_9.f_23 = 0;
				uParam0->f_9.f_20 = iParam2;
				break;
			case 1:
				if (iParam4 == 0)
				{
					func_1066(&(uParam0->f_36), 2, (360f - (to_float(iParam3) * 60f)), iParam5);
				}
				else
				{
					func_1066(&(uParam0->f_36), 5, (360f - (to_float(iParam3) * 60f)), iParam5);
				}
				uParam0->f_9.f_21 = 0;
				uParam0->f_9.f_22 = 1;
				uParam0->f_9.f_23 = 0;
				uParam0->f_9.f_20 = iParam2;
				uParam0->f_9.f_26 = iParam4;
				break;
			case 3:
				func_1067(&(uParam0->f_36), 0, (360f - (to_float(iParam3) * 60f)), 0, 1, 1);
				uParam0->f_9.f_21 = 0;
				uParam0->f_9.f_22 = 1;
				uParam0->f_9.f_23 = 0;
				uParam0->f_9.f_20 = iParam2;
				uParam0->f_9.f_26 = iParam4;
				break;
			case 4:
				func_1067(&(uParam0->f_36), 1, (360f - (to_float(iParam3) * 60f)), 0, 1, 1);
				uParam0->f_9.f_22 = 1;
				uParam0->f_9.f_23 = 0;
				uParam0->f_9.f_20 = iParam2;
				uParam0->f_9.f_26 = iParam4;
				uParam0->f_6 = 0;
				break;
			default:
				return;
		}
		_0x1d9f72dd4fd9a9d7(&(uParam0->f_9));
	}
}

char* func_452(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "Odd_Jobs_Poker_Exposure_val";
		case 0:
			return "Odd_Jobs_Poker_First_Person";
		default:
			break;
	}
	return "Odd_Jobs_Poker_First_Person";
}

int func_453(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 < 180))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 133:
			return 27;
		case 153:
			return 28;
		case 154:
			return 29;
		case 26:
			return 14;
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
			return 38;
		case 134:
			return 37;
		case 3:
		case 4:
		case 40:
		case 63:
		case 76:
		case 148:
			return 15;
		case 64:
		case 65:
		case 66:
		case 67:
			return 16;
		case 120:
		case 122:
		case 124:
		case 126:
		case 127:
		case 129:
			return 25;
		case 45:
		case 83:
		case 155:
		case 159:
		case 164:
		case 168:
		case 172:
			return 0;
		case 6:
		case 23:
		case 33:
		case 48:
		case 69:
		case 84:
		case 99:
		case 102:
		case 108:
		case 156:
		case 160:
		case 165:
		case 169:
		case 173:
			return 3;
		case 0:
		case 7:
		case 34:
		case 49:
		case 85:
		case 103:
		case 157:
		case 161:
		case 166:
		case 170:
		case 174:
			return 6;
		case 19:
		case 53:
			return 7;
		case 22:
		case 31:
		case 46:
		case 93:
		case 116:
		case 130:
			return 4;
		case 20:
			return 33;
		case 21:
		case 32:
		case 47:
		case 92:
		case 115:
		case 131:
			return 33;
		case 9:
		case 30:
		case 44:
		case 68:
		case 82:
		case 104:
			return 10;
		case 1:
		case 14:
		case 24:
		case 27:
		case 35:
		case 51:
		case 74:
		case 87:
		case 98:
		case 101:
		case 111:
		case 117:
			return 2;
		case 2:
		case 15:
		case 25:
		case 28:
		case 39:
		case 52:
		case 88:
		case 97:
		case 100:
		case 112:
		case 118:
			return 1;
		case 8:
		case 43:
		case 78:
			return 8;
		case 13:
		case 41:
		case 50:
		case 71:
		case 86:
		case 96:
		case 107:
			return 9;
		case 121:
		case 123:
		case 125:
		case 128:
			return 26;
		case 163:
			return 5;
		case 5:
		case 29:
		case 42:
		case 77:
			return 12;
		case 10:
		case 36:
		case 54:
		case 56:
		case 75:
		case 79:
		case 81:
		case 91:
		case 94:
		case 105:
		case 110:
			return 30;
		case 11:
		case 37:
		case 55:
		case 57:
		case 80:
		case 95:
		case 106:
			return 31;
		case 16:
		case 17:
		case 18:
		case 38:
		case 58:
		case 59:
		case 72:
		case 73:
		case 132:
			return 32;
		case 70:
		case 90:
			return 17;
		case 119:
			return 11;
		case 176:
			return 19;
		case 177:
			return 20;
		case 178:
			return 21;
		case 12:
		case 60:
			return 18;
		case 152:
			return 34;
		case 158:
		case 162:
		case 167:
		case 171:
		case 175:
			return 23;
		case 179:
			return 20;
		case 109:
		case 113:
		case 114:
			return 35;
		case 61:
		case 62:
		case 89:
			return 36;
		case 149:
		case 150:
		case 151:
			return 39;
		default:
			break;
	}
	return -1;
}

void func_454(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!bParam3)
	{
		if (func_1068(iParam0))
		{
			return;
		}
	}
	if (bParam2)
	{
		if (!func_1069(iParam0, 4))
		{
			func_1070(iParam0, 4);
		}
	}
	else
	{
		func_1071(iParam0, 4);
	}
	func_1072(iParam0);
}

int func_455(var uParam0, int iParam1)
{
	return uParam0->f_818[iParam1]->f_1;
}

void func_456(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	decor_remove(iParam0, "PedSeatedForMinigame");
}

void func_457(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	decor_set_bool(iParam0, "PedSeatedForMinigame", true);
}

void func_458(var uParam0, int iParam1, int iParam2)
{
	iParam2 = func_611(uParam0, iParam1, iParam2);
	uParam0->f_818[iParam1]->f_4 = iParam2;
	if (is_task_move_network_active(&(uParam0->f_818[iParam1])))
	{
		_0x615dc4a82e90bb48(&(uParam0->f_818[iParam1]), &(uParam0->f_1323[iParam2]), -455129387);
	}
}

void func_459(var uParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = uParam0->f_818[iParam1]->f_4;
	iVar1 = &uParam0->f_818[iParam1];
	iVar0 = func_441(&iVar1, iVar0);
	iParam3 |= 16 | 4 | 256;
	if (is_entity_attached(iVar1))
	{
		detach_entity(iVar1, true, true);
	}
	Var2.f_4 = 1065353216;
	Var2.f_5 = 1065353216;
	Var2.f_9 = 1065353216;
	Var2.f_10 = 1065353216;
	Var2.f_14 = 1065353216;
	Var2.f_15 = 1065353216;
	Var2.f_17 = 1040187392;
	Var2.f_18 = 1040187392;
	Var2.f_19 = -1;
	Var2.f_26 = -1082130432;
	StringCopy(&cVar40, "clipset@", 64);
	StringConCat(&cVar40, uParam0->f_1274[iVar0], 64);
	Var2 = 1;
	Var2.f_1 = func_1073(cVar40);
	Var2.f_2 = sParam2;
	Var2.f_3 = iParam6;
	Var2.f_20 = iParam3;
	Var2.f_22 = 1;
	Var2.f_4 = 1f;
	Var2.f_5 = 1f;
	Var2.f_10 = 0f;
	Var2.f_15 = 0f;
	Var2.f_23 = 1;
	Var2.f_19 = -1;
	Var2.f_16 = 0;
	Var2.f_17 = fParam4;
	Var2.f_18 = iParam5;
	Var2.f_33 = 1;
	Var2.f_27 = { *uParam0->f_1236[iParam1] };
	Var2.f_30 = { *uParam0->f_1255[iParam1] };
	task_scripted_animation(iVar1, &Var2);
	if (bParam7)
	{
		_0x2208438012482a1a(iVar1, false, false);
	}
}

int func_460(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = &uParam0->f_818[iParam1];
	iVar1 = uParam0->f_818[iParam1]->f_61;
	if (iVar0 == 0)
	{
	}
	else
	{
		if (!is_ped_injured(iVar0))
		{
			if (uParam0->f_818[iParam1]->f_52)
			{
				freeze_entity_position(iVar0, false);
				set_entity_collision(iVar0, true, false);
			}
			if (bParam2)
			{
				func_1074(uParam0, iParam1, 0);
			}
			iVar2 = 0;
			while (iVar2 < 29)
			{
				if ((((iVar2 == 1 || iVar2 == 7) || iVar2 == 8) || iVar2 == 9) || iVar2 == 10)
				{
					_0x67e21acc5c0c970c(iVar0, iVar2, 1);
				}
				iVar2++;
			}
			if (is_ped_a_player(iVar0))
			{
				func_1075(iVar0, 0, 0, 1, 0);
			}
			if (uParam0->f_818[iParam1]->f_8 >= 0 && uParam0->f_818[iParam1]->f_8 < 35)
			{
				Stack.Push(uParam0);
				Stack.Push(uParam0->f_818[iParam1]);
				Stack.Push(iParam1);
				Call_Loc(&uParam0->f_1366[uParam0->f_818[iParam1]->f_8]);
			}
			func_1076(uParam0, iParam1);
			func_1077(uParam0, iParam1);
			if (uParam0->f_807 != -1)
			{
				_0xae6de22de0ed4554(uParam0->f_807, iVar0);
			}
			set_blocking_of_non_temporary_events(iVar0, false);
			set_ped_can_ragdoll(iVar0, true);
			func_1078(iVar1, &(uParam0->f_818[iParam1]->f_62));
			if (iVar1 == player_id())
			{
				func_1079(iVar0, 0, 0, 0);
			}
			else
			{
				func_1080(iVar1, 0);
			}
		}
		func_1081(uParam0, iParam1);
		func_539(uParam0, iParam1);
		_0x7e176c676f8652a9(iParam1);
		uParam0->f_1197 = (uParam0->f_1197 - 1);
	}
	return iVar0;
}

void func_461(var uParam0, int iParam1)
{
	if (&uParam0->f_818[iParam1] == 0)
	{
	}
	else
	{
		iVar0 = func_460(uParam0, iParam1, 1);
		if (!is_ped_injured(iVar0))
		{
			if (is_ped_a_player(iVar0))
			{
				clear_ped_tasks(iVar0, 1, 0);
			}
			else
			{
				delete_ped(&iVar0);
			}
		}
	}
}

void func_462(var uParam0, int iParam1)
{
	if (uParam0->f_617[iParam1]->f_8 != 7)
	{
		uParam0->f_617[iParam1]->f_8 = 7;
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (does_entity_exist(&(uParam0->f_617[iParam1]->f_5[iVar0])))
			{
				delete_object(uParam0->f_617[iParam1]->f_5[iVar0]);
			}
			uParam0->f_617[iParam1]->f_5[iVar0] = 0;
			iVar0++;
		}
	}
}

void func_463(var uParam0, int iParam1)
{
	if (does_entity_exist(&(uParam0->f_672.f_11[iParam1])))
	{
		delete_object(uParam0->f_672.f_11[iParam1]);
		uParam0->f_672.f_11[iParam1] = 0;
	}
}

void func_464(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_152(iParam0))
	{
		return;
	}
	iVar0 = func_347(iParam0);
	func_1082(iVar0, bParam1);
}

bool func_465(int iParam0)
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 == iParam0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

void func_466(var uParam0, var uParam1)
{
	if (func_1083(uParam0))
	{
		func_1084(uParam0);
	}
	if (func_968(uParam0))
	{
		func_975(uParam0, uParam1);
	}
	if (func_1085(uParam0))
	{
		func_687(uParam0);
	}
	func_1086(&(uParam0->f_494), 1, 1);
	func_1086(&(uParam0->f_495), 1, 1);
	func_1086(&(uParam0->f_496), 1, 1);
	func_1086(&(uParam0->f_497), 1, 1);
	func_1086(&(uParam0->f_498), 1, 1);
	func_1086(&(uParam0->f_499), 1, 1);
	func_1086(&(uParam0->f_500), 1, 1);
	func_478(&(uParam0->f_501));
}

void func_467(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_993(uParam0, iVar0))
		{
			func_1087(uParam0, iVar0);
		}
		iVar0++;
	}
	func_1088(uParam0);
	uParam0->f_293 = 0;
	func_1089(uParam0, 0, 1);
	func_1090(uParam0);
	uParam0->f_294 = 0;
}

void func_468(var uParam0)
{
	if (uParam0->f_168 || _is_app_running(-605293197))
	{
		_close_app_by_hash_immediate(-605293197);
		uParam0->f_168 = 0;
	}
}

void func_469(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (&uParam0->f_173[iVar0] != 0)
		{
			func_445(uParam0, iVar0);
		}
		iVar0++;
	}
}

void func_470(var uParam0)
{
	if (func_1025(uParam0))
	{
		func_1026(uParam0, 0);
	}
	if (does_cam_exist(uParam0->f_135))
	{
		destroy_cam(uParam0->f_135, false);
	}
}

void func_471(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 >= 0 && iParam2 < 35)
	{
		Stack.Push(uParam0);
		Stack.Push(uParam0->f_818[iParam1]);
		Stack.Push(iParam1);
		Call_Loc(&uParam0->f_1366[uParam0->f_818[iParam1]->f_8]);
	}
	uParam0->f_818[iParam1]->f_8 = iParam2;
	uParam0->f_818[iParam1]->f_9 = 0;
	func_268(&(uParam0->f_818[iParam1]->f_10));
	func_268(&(uParam0->f_818[iParam1]->f_13));
	uParam0->f_818[iParam1]->f_19 = 0;
	uParam0->f_818[iParam1]->f_20 = 0;
	uParam0->f_818[iParam1]->f_21 = 0;
	uParam0->f_818[iParam1]->f_22 = 0;
	uParam0->f_818[iParam1]->f_23 = 0;
	uParam0->f_818[iParam1]->f_45 = 0;
	uParam0->f_818[iParam1]->f_46 = 0;
	uParam0->f_818[iParam1]->f_47 = 0;
	uParam0->f_818[iParam1]->f_48 = 0;
	uParam0->f_818[iParam1]->f_49 = 0;
}

void func_472(var uParam0, int iParam1, char* sParam2, float fParam3)
{
	iVar0 = uParam0->f_818[iParam1]->f_4;
	iVar1 = &uParam0->f_818[iParam1];
	iVar0 = func_441(&iVar1, iVar0);
	Var2.f_6 = -1082130432;
	Var2.f_9 = -1082130432;
	Var2 = &uParam0->f_1323[iVar0];
	Var2.f_1 = -455129387;
	Var2.f_29 = sParam2;
	Var2.f_33 = "CurrentPhase";
	Var2.f_32 = "CurrentClip";
	if (uParam0->f_818[iParam1]->f_52)
	{
		_set_entity_coords_and_heading(iVar1, *uParam0->f_1236[iParam1] - Vector(1f, 0f, 0f), uParam0->f_1255[iParam1]->f_2, true, true, true);
		freeze_entity_position(iVar1, true);
		set_entity_collision(iVar1, false, false);
	}
	func_1074(uParam0, iParam1, 1);
	if (!func_1091(uParam0, iParam1))
	{
		func_1092(uParam0, iParam1, 0);
	}
	task_move_network_advanced_by_name_with_init_params(iVar1, "TaskMovePokerMP", &Var2, *uParam0->f_1236[iParam1], *uParam0->f_1255[iParam1], 2, fParam3, 1, 0, 128, 0);
	_0x2208438012482a1a(iVar1, false, false);
}

int func_473(var uParam0, int iParam1, int iParam2)
{
	return &(uParam0->f_617[iParam1]->f_5[iParam2]);
}

void func_474(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, float fParam6)
{
	iVar0 = uParam0->f_818[iParam1]->f_4;
	iVar1 = &uParam0->f_818[iParam1];
	if (!does_entity_exist(iParam3))
	{
		return;
	}
	iVar0 = func_441(&iVar1, iVar0);
	if (is_bit_set(iParam4, iVar0))
	{
		return;
	}
	if (fParam6 > 0f)
	{
		fVar2 = fParam6;
	}
	else
	{
		fVar2 = 0f;
		if (is_task_move_network_active(iVar1))
		{
			fVar2 = _0x844ceee428ea35b0(iVar1, "CurrentPhase");
		}
	}
	if (_0x0b7cb1300cbfe19c(iParam3, 1))
	{
		stop_anim_playback(iParam3, 2, true);
	}
	Var3.f_4 = 1065353216;
	Var3.f_5 = 1065353216;
	Var3.f_9 = 1065353216;
	Var3.f_10 = 1065353216;
	Var3.f_14 = 1065353216;
	Var3.f_15 = 1065353216;
	Var3.f_17 = 1040187392;
	Var3.f_18 = 1040187392;
	Var3.f_19 = -1;
	Var3.f_26 = -1082130432;
	StringCopy(&cVar41, "clipset@", 64);
	StringConCat(&cVar41, uParam0->f_1274[iVar0], 64);
	Var3 = 1;
	Var3.f_1 = func_1073(cVar41);
	Var3.f_2 = sParam2;
	Var3.f_3 = fVar2;
	Var3.f_20 = iParam5 | 16 | 4 | 2 | 256;
	Var3.f_22 = 1;
	Var3.f_21 = 536870912;
	Var3.f_4 = 1f;
	Var3.f_5 = 1f;
	Var3.f_10 = 0f;
	Var3.f_15 = 0f;
	Var3.f_23 = 0;
	Var3.f_19 = -1;
	Var3.f_16 = 0;
	Var3.f_17 = 0f;
	Var3.f_18 = 0f;
	Var3.f_33 = 1;
	Var3.f_27 = { *uParam0->f_1236[iParam1] };
	Var3.f_30 = { *uParam0->f_1255[iParam1] };
	play_entity_scripted_anim(iParam3, &Var3);
	force_entity_ai_and_animation_update(iParam3, true);
}

void func_475(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_818[iParam1]->f_1 = iParam2;
	if (!uParam0->f_818[iParam1]->f_3)
	{
		func_1093(uParam0, iParam1, iParam2, 0);
	}
}

void func_476(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_818[iParam1]->f_5 >= 2)
	{
	}
	else
	{
		iVar0 = func_1094(iParam2);
		iVar1 = func_1095(uParam0, iParam1);
		set_facial_idle_anim_override(&(uParam0->f_818[iParam1]), func_1096(iParam2), func_335(uParam0, iVar0, iVar1));
	}
}

bool func_477(var uParam0, struct<2> Param1, int iParam3)
{
	if (func_331(iParam3, Param1, uParam0->f_692, 0))
	{
		return true;
	}
	*iParam3 = uParam0->f_694;
	return false;
}

void func_478(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_479(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
}

void func_480(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_1671[iVar0] = 0;
		uParam0->f_1671[iVar0]->f_2 = 0;
		uParam0->f_1671[iVar0]->f_3 = 0;
		uParam0->f_1671[iVar0]->f_1 = 0;
		uParam0->f_1671[iVar0]->f_4 = 0;
		uParam0->f_1671[iVar0]->f_5 = 0f;
		uParam0->f_1671[iVar0]->f_6 = 0f;
		uParam0->f_1671[iVar0]->f_7 = 0f;
		uParam0->f_1671[iVar0]->f_8 = 0;
		uParam0->f_1671[iVar0]->f_9 = 0;
		uParam0->f_1671[iVar0]->f_10 = 0;
		uParam0->f_1671[iVar0]->f_11 = 0;
		uParam0->f_1671[iVar0]->f_12 = 0;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 8)
	{
		uParam0->f_1671.f_79[iVar1] = 0;
		uParam0->f_1671.f_79[iVar1]->f_1 = 0;
		uParam0->f_1671.f_79[iVar1]->f_2 = 0;
		uParam0->f_1671.f_79[iVar1]->f_3 = 0;
		iVar1++;
	}
	uParam0->f_1671.f_112 = 0;
	uParam0->f_1671.f_112.f_1 = -1;
	uParam0->f_1671.f_112.f_2 = -1;
	func_478(&(uParam0->f_1671.f_112.f_3));
	uParam0->f_1671.f_118 = 0;
	uParam0->f_1671.f_119 = 0;
	uParam0->f_1671.f_120 = 0;
	func_478(&(uParam0->f_1671.f_121));
	uParam0->f_1671.f_125 = 0;
	uParam0->f_1671.f_126 = 0;
	uParam0->f_1671.f_127 = 0;
	uParam0->f_1671.f_128 = 0;
	uParam0->f_1671.f_129 = 0;
	uParam0->f_1671.f_131 = -1;
	uParam0->f_1671.f_132 = -1;
	uParam0->f_1671.f_133 = 0;
	iVar2 = 0;
	while (iVar2 < 2)
	{
		uParam0->f_1671.f_134[iVar2] = 0;
		iVar2++;
	}
	uParam0->f_1671.f_137 = 0f;
	uParam0->f_1671.f_138 = 0f;
	uParam0->f_1671.f_139 = 0f;
	uParam0->f_1671.f_140 = 0;
	uParam0->f_1671.f_141 = 0;
	uParam0->f_1671.f_142 = 0;
	uParam0->f_1671.f_143 = 0;
	uParam0->f_1671.f_144 = 0;
	uParam0->f_1671.f_145 = -1;
	uParam0->f_1671.f_146 = 0;
	uParam0->f_1671.f_147 = -1;
	uParam0->f_1671.f_148 = 0;
	uParam0->f_1671.f_149 = 0;
	uParam0->f_1671.f_150 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_1671.f_151[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_1671.f_158[iVar0] = 0f;
		iVar0++;
	}
	uParam0->f_1671.f_165 = 0;
	uParam0->f_1671.f_166 = 0;
	uParam0->f_1671.f_167 = 0;
	uParam0->f_1671.f_168 = 0;
	uParam0->f_1671.f_169 = 0;
	uParam0->f_1671.f_170 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_1671.f_171[iVar0] = 0f;
		uParam0->f_1671.f_178[iVar0] = 0f;
		uParam0->f_1671.f_185[iVar0] = 0f;
		iVar0++;
	}
	uParam0->f_1671.f_192 = 0;
	uParam0->f_1671.f_193 = 0;
	uParam0->f_1671.f_194 = 0;
	uParam0->f_1671.f_195 = 0;
	uParam0->f_1671.f_196 = 0;
	uParam0->f_1671.f_197 = 0;
	uParam0->f_1671.f_198 = 0;
	uParam0->f_1671.f_199 = 0;
}

void func_481(var uParam0)
{
	func_1097(&(uParam0->f_1871.f_96), 0f, 120f);
	func_1097(&(uParam0->f_1871.f_106), 0f, 120f);
	func_1097(&(uParam0->f_1871.f_116), 120f, 180f);
	func_1097(&(uParam0->f_1871.f_16), 60f, 180f);
	func_1097(&(uParam0->f_1871.f_26), 60f, 180f);
	func_1097(&(uParam0->f_1871.f_36), 60f, 240f);
	func_1097(&(uParam0->f_1871.f_46), 60f, 240f);
	func_1097(&(uParam0->f_1871.f_56), 60f, 180f);
	func_1097(&(uParam0->f_1871.f_66), 120f, 180f);
	func_1097(&(uParam0->f_1871.f_76), 0f, 120f);
	func_1097(&(uParam0->f_1871.f_86), 0f, 120f);
	uParam0->f_1871 = -1;
}

void func_482(var uParam0, int iParam1)
{
	uParam0->f_2051 = iParam1;
}

void func_483(var uParam0)
{
	uParam0->f_2100[0] = 0.3f;
	uParam0->f_2100[0]->f_1 = 0.7f;
	uParam0->f_2100[0]->f_2 = 0.2f;
	uParam0->f_2100[0]->f_3 = 0.5f;
	uParam0->f_2100[0]->f_4 = 70;
	uParam0->f_2100[0]->f_5 = 65;
	uParam0->f_2100[1] = 0f;
	uParam0->f_2100[1]->f_1 = 0f;
	uParam0->f_2100[1]->f_2 = 0f;
	uParam0->f_2100[1]->f_3 = 0f;
	uParam0->f_2100[1]->f_4 = 100;
	uParam0->f_2100[1]->f_5 = 33;
	uParam0->f_2100[2] = 0f;
	uParam0->f_2100[2]->f_1 = 0f;
	uParam0->f_2100[2]->f_2 = 0.3f;
	uParam0->f_2100[2]->f_3 = 0.6f;
	uParam0->f_2100[2]->f_4 = 100;
	uParam0->f_2100[2]->f_5 = 100;
	uParam0->f_2100[3] = 0f;
	uParam0->f_2100[3]->f_1 = 0f;
	uParam0->f_2100[3]->f_2 = 0.2f;
	uParam0->f_2100[3]->f_3 = 0.5f;
	uParam0->f_2100[3]->f_4 = 100;
	uParam0->f_2100[3]->f_5 = 100;
	uParam0->f_2100[4] = 0.25f;
	uParam0->f_2100[4]->f_1 = 0.25f;
	uParam0->f_2100[4]->f_2 = 0.2f;
	uParam0->f_2100[4]->f_3 = 0.5f;
	uParam0->f_2100[4]->f_4 = 100;
	uParam0->f_2100[4]->f_5 = 100;
	uParam0->f_2100[5] = 0f;
	uParam0->f_2100[5]->f_1 = 0f;
	uParam0->f_2100[5]->f_2 = 0.3f;
	uParam0->f_2100[5]->f_3 = 0.8f;
	uParam0->f_2100[5]->f_4 = 75;
	uParam0->f_2100[5]->f_5 = 100;
	uParam0->f_2100[6] = 0.25f;
	uParam0->f_2100[6]->f_1 = 0.5f;
	uParam0->f_2100[6]->f_2 = 0f;
	uParam0->f_2100[6]->f_3 = 0f;
	uParam0->f_2100[6]->f_4 = 100;
	uParam0->f_2100[6]->f_5 = 0;
	uParam0->f_2100[7] = 0f;
	uParam0->f_2100[7]->f_1 = 0f;
	uParam0->f_2100[7]->f_2 = 0.2f;
	uParam0->f_2100[7]->f_3 = 0.5f;
	uParam0->f_2100[7]->f_4 = 100;
	uParam0->f_2100[7]->f_5 = 100;
	uParam0->f_2100[8] = 0.6f;
	uParam0->f_2100[8]->f_1 = 0.9f;
	uParam0->f_2100[8]->f_2 = 0.4f;
	uParam0->f_2100[8]->f_3 = 0.6f;
	uParam0->f_2100[8]->f_4 = 75;
	uParam0->f_2100[8]->f_5 = 30;
	uParam0->f_2100[9] = 0f;
	uParam0->f_2100[9]->f_1 = 0f;
	uParam0->f_2100[9]->f_2 = 0f;
	uParam0->f_2100[9]->f_3 = 0f;
	uParam0->f_2100[9]->f_4 = 100;
	uParam0->f_2100[9]->f_5 = 100;
	uParam0->f_2100[10] = 0.25f;
	uParam0->f_2100[10]->f_1 = 0.5f;
	uParam0->f_2100[10]->f_2 = 0f;
	uParam0->f_2100[10]->f_3 = 0f;
	uParam0->f_2100[10]->f_4 = 100;
	uParam0->f_2100[10]->f_5 = 100;
}

int func_484(var uParam0)
{
	*uParam0 = 0;
	if (_minigame_get_next_event_type() != 1959158395)
	{
		return 0;
	}
	else if (!_minigame_get_next_event(&Var0, 2))
	{
		return 0;
	}
	*uParam0 = Var0.f_1;
	return 1;
}

bool func_485(var uParam0)
{
	if (_network_has_player_been_banned())
	{
		return true;
	}
	if (network_has_ros_privilege(7))
	{
		return true;
	}
	return false;
}

void func_486(int iParam0, int iParam1, int iParam2)
{
	Global_1139108->f_2.f_1 = iParam0;
	Global_1139108->f_2 = iParam1;
	Global_1139108->f_2.f_2 = iParam2;
}

bool func_487(int iParam0, int iParam1)
{
	return func_489(iParam0, iParam1, &uVar0);
}

bool func_488(int iParam0)
{
	if (!func_1098(iParam0))
	{
		return false;
	}
	if (Global_1139108->f_6)
	{
		return true;
	}
	return false;
}

bool func_489(int iParam0, int iParam1, var uParam2)
{
	iVar1 = _0x15e90b6a993017aa();
	if (!func_1098(iParam0))
	{
		return false;
	}
	if (iVar1 == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (_0x10342cc82e8356e9(iVar0, uParam2))
		{
			if (uParam2->f_2 == iParam1)
			{
				func_1099(uParam2->f_1, iParam0);
				if (*uParam2 == 1)
				{
					if (uParam2->f_3 > Global_1139108->f_7)
					{
						return true;
					}
				}
				else
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_490(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	iVar13 = _0x15e90b6a993017aa();
	if (iVar13 == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < iVar13)
	{
		if (_0x10342cc82e8356e9(iVar0, &Var1))
		{
			if (Var1.f_2 == 916571523)
			{
				if (are_strings_equal(&uParam0, &(Var1.f_4)))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

int func_491(struct<2> Param0)
{
	return func_1100(Param0);
}

int func_492()
{
	return Global_1139108->f_2;
}

int func_493(var uParam0)
{
	if (uParam0->f_34)
	{
		return 333474665;
	}
	return 1453703409;
}

void func_494(var uParam0)
{
	if (uParam0->f_48)
	{
		uParam0->f_48 = 0;
		stop_audio_scene(func_256(uParam0->f_39));
		func_255(func_254(func_253()), 0);
		_0x18ff3110cf47115d(Global_34, 9, 1);
		func_251(1);
		func_252(1);
		_0xdd1232b332cbb9e7(2, 1, 0);
		if (!is_player_dead(player_id()))
		{
			set_everyone_ignore_player(player_id(), false);
			set_player_control(player_id(), true, 0, false);
		}
		func_1101(0);
		Call_Loc(uParam0->f_139);
	}
}

int func_495(bool bParam0, int iParam1)
{
	if (!network_is_in_session())
	{
		return 0;
	}
	if (!Global_1102219->f_16)
	{
		return 0;
	}
	if (!func_1102())
	{
		return 0;
	}
	if (!func_1103())
	{
		return 0;
	}
	Global_0 = iParam1;
	if (bParam0)
	{
		func_1104(&Global_0, 8);
	}
	func_1104(&Global_0, 1);
	return 1;
}

void func_496(bool bParam0)
{
	if (Global_1900688->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_505() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1900688->f_2 == 4 && Global_1900688->f_12 != Global_1900688->f_13) && !bParam0)
	{
		Global_1900688->f_1 = Global_1900688->f_2;
		Global_1900688->f_12 = Global_1900688->f_13;
		func_1105(iVar0, Global_1900688->f_12);
	}
	else
	{
		Global_1900688->f_1 = 0;
		Global_1900688->f_7 = iVar0;
		Global_1900688->f_8 = func_1106();
		Global_1900688->f_9 = func_1107(Global_1893587->f_2);
		Global_1900688->f_11 = func_1108(Global_1896622->f_41);
		if (Global_1900688->f_9 != -1 && Global_1900688->f_9 != 0)
		{
			func_1109(Global_1900688->f_7, Global_1900688->f_8, Global_1900688->f_9);
		}
		else if (Global_1900688->f_11 != -1)
		{
			func_1109(Global_1900688->f_7, Global_1900688->f_8, Global_1900688->f_11);
		}
		else
		{
			func_1109(Global_1900688->f_7, Global_1900688->f_8, Global_1900688->f_9);
		}
	}
	Global_1900688->f_2 = 0;
}

void func_497(int iParam0)
{
	Global_1902831->f_3[iParam0] = 0;
}

bool func_498()
{
	return Global_1902831->f_2 == 1;
}

void func_499(struct<2> Param0, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_247(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (!func_1110(Param0) && !func_1111(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (func_491(Param0) == 0)
	{
	}
	if ((iParam3 == 0 || iParam3 == 1) || iParam3 == 4)
	{
		if (func_1112(Param0) == 3)
		{
			func_495(1, -1706799532);
		}
		else if (func_1112(Param0) == 4)
		{
			func_495(0, -1706799532);
		}
	}
	if ((func_1112(Param0) == 3 || func_1112(Param0) == 1) || ((bParam5 && func_1112(Param0) == 4) && _0x01f4d242765c6b24(func_491(Param0))))
	{
		if (iParam3 != -1)
		{
			func_1113(Param0, iParam3, iParam4, 255, 0);
		}
		else
		{
			func_1113(Param0, 2, iParam4, 255, 0);
		}
	}
	func_1114(Param0, 0);
	if (func_1115(func_246(0), Param0))
	{
		func_252(1);
		func_1116(0);
		func_1117(0);
		func_1118(1);
	}
	func_1119(Param0);
	Global_1051252->f_45.f_1 = 1;
	iVar0 = func_248(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		_0x1096603b519c905f("");
	}
}

void func_500(struct<2> Param0, bool bParam2)
{
	if (!func_247(Param0))
	{
		return;
	}
	if (!func_1120(Param0))
	{
		return;
	}
	if (bParam2)
	{
		func_1121(Param0);
	}
	func_1114(Param0, 1);
	bParam2 = bParam2;
}

void func_501()
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1902831->f_42.f_134[iVar0] = 0;
		iVar0++;
	}
}

void func_502()
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1902831->f_42.f_101[iVar0] = 0;
		iVar0++;
	}
}

void func_503(int iParam0)
{
	Global_1902831->f_42.f_1 = iParam0;
}

void func_504(int iParam0)
{
	Global_1902831->f_42.f_2 = iParam0;
}

int func_505()
{
	return Global_1572887->f_13;
}

bool func_506()
{
	return Global_1051252->f_8;
}

bool func_507(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			return true;
		default:
			break;
	}
	return false;
}

int func_508(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_1071686->f_636.f_601;
		case 3:
			return Global_1071686->f_636.f_2103;
		case 4:
			return Global_1071686->f_636.f_12605;
		case 5:
			return Global_1071686->f_636.f_12907;
		case 6:
			return Global_1071686->f_636.f_15909;
		case 7:
			return Global_1071686->f_636.f_16511;
		case 8:
			return Global_1071686->f_636.f_18913;
		default:
			break;
	}
	return -1;
}

char* func_509(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

void func_510(bool bParam0)
{
	if (bParam0)
	{
		Global_1940311 = 1;
	}
	else
	{
		Global_1940311 = 2;
	}
}

void func_511(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_512(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_513(int iParam0)
{
	if (!func_1122(iParam0))
	{
		return false;
	}
	return &(Global_1940018->f_5[iParam0]);
}

int func_514()
{
	return Global_1893587->f_2;
}

int func_515(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			switch (iParam1)
			{
				case 2:
					return 2;
				case 1:
					return 1;
				default:
					break;
			}
			break;
		case 111:
			switch (iParam1)
			{
				case 2:
					return 3;
				default:
					break;
			}
			break;
		case 81:
			switch (iParam1)
			{
				case 0:
					return 5;
				case 1:
					return 6;
				default:
					break;
			}
			break;
		case 98:
			switch (iParam1)
			{
				case 0:
					return 8;
				default:
					break;
			}
			break;
		case 127:
			switch (iParam1)
			{
				case 0:
					return 7;
				default:
					break;
			}
			break;
		case 121:
			switch (iParam1)
			{
				case 0:
					return 4;
				default:
					break;
			}
			break;
		case 40:
			switch (iParam1)
			{
				case 0:
					return 0;
				default:
					break;
			}
			break;
	}
	return -1;
}

bool func_516(int iParam0)
{
	return (func_1123(iParam0, 67108864) || func_1123(iParam0, 2048));
}

void func_517(int iParam0, int iParam1)
{
	if (!func_960(iParam0))
	{
		return;
	}
	Global_1915715->f_17884[iParam0] = (Global_1915715->f_17884[iParam0] || iParam1);
}

void func_518(int iParam0, int iParam1)
{
	if (!func_960(iParam0))
	{
		return;
	}
	Global_1915715->f_17884[iParam0] = (&Global_1915715->f_17884[iParam0] - (Global_1915715->f_17884[iParam0] && iParam1));
}

int func_519(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return -1494363065;
		case 2:
			return -514316475;
		case 3:
			return 1257949393;
		case 4:
			return -1967078622;
		case 5:
			return -1854780893;
		case 6:
			return 477974086;
		case 7:
			return 618068466;
		case 8:
			return 499656970;
		case 9:
			return 1791948823;
		case 10:
			return -1634863390;
		case 11:
			return -1296513906;
		case 12:
			return -1030655937;
		case 13:
			return -1783181138;
		case 14:
			return 1250422342;
		case 15:
			return -634665876;
		case 16:
			return -1679013564;
		case 17:
			return -706075066;
		case 18:
			return -1152882498;
		case 19:
			return 2108116481;
		case 20:
			return -86995487;
		case 21:
			return -1315007749;
		case 22:
			return 449057693;
		case 23:
			return 81846499;
		case 24:
			return 385589027;
		case 25:
			return 1951290581;
		case 26:
			return 1316486837;
		case 27:
			return 120448958;
		case 28:
			return 1345888212;
		case 29:
			return 396837320;
		case 30:
			return -1408563730;
		case 31:
			return -757633599;
		case 32:
			return -1034424695;
		case 33:
			return 1841970554;
		case 34:
			return -789758703;
		case 35:
			return -210274020;
		case 36:
			return 633501950;
		case 37:
			return -1215742816;
		case 38:
			return 1971904853;
		case 39:
			return -1935655667;
		case 40:
			return 1898201469;
		case 41:
			return 300196727;
		case 42:
			return 242857368;
		case 43:
			return -1648877470;
		case 44:
			return -545299531;
		case 45:
			return -1598949067;
		case 46:
			return 478308321;
		case 47:
			return 440583097;
		case 48:
			return -1258163578;
		case 49:
			return -1376314322;
		case 50:
			return -1898294040;
		case 51:
			return -114666387;
		case 52:
			return 334700325;
		case 53:
			return -1399051227;
		case 54:
			return 1571096148;
		case 55:
			return 457103096;
		case 56:
			return -1930919582;
		case 57:
			return -985005225;
		case 58:
			return 1723535349;
		case 59:
			return -1393798041;
		case 60:
			return 905156700;
		case 61:
			return 151445061;
		case 62:
			return -1983943039;
		case 63:
			return 2021695109;
		case 64:
			return -2086327823;
		case 65:
			return 1623086000;
		case 66:
			return 796310207;
		case 67:
			return -1575244427;
		case 68:
			return -1930399868;
		case 69:
			return 353568324;
		case 70:
			return -469672732;
		case 71:
			return 1717813521;
		case 72:
			return 941437279;
		case 73:
			return -162385832;
		case 74:
			return -892848695;
		case 75:
			return -355092128;
		case 76:
			return 946732137;
		case 77:
			return -79139194;
		case 78:
			return 1382158532;
		case 79:
			return -379874384;
		case 80:
			return 2018657739;
		case 81:
			return 1427070667;
		case 82:
			return -682435976;
		case 83:
			return 1232224440;
		case 84:
			return 1889309476;
		case 85:
			return 1918774327;
		case 86:
			return -32613857;
		case 87:
			return 5611246;
		case 88:
			return 2078792148;
		case 89:
			return 630308764;
		case 90:
			return 1398164246;
		case 91:
			return 2002140369;
		case 92:
			return -1777144780;
		case 93:
			return -1098645728;
		case 94:
			return 640330073;
		case 95:
			return -1330378740;
		case 96:
			return -71551190;
		case 97:
			return 1248971179;
		case 98:
			return -2076515520;
		case 99:
			return 1872332830;
		case 100:
			return -326224139;
		case 101:
			return -2062348046;
		case 102:
			return -1924130593;
		case 103:
			return -29468993;
		case 104:
			return 669386338;
		case 105:
			return -479797100;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

void func_520(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (&Global_1139381->f_3876.f_2[func_521(iParam0, 1)] == bParam1)
	{
		return;
	}
	if (bParam2)
	{
		func_1124(iParam0);
	}
	Global_1139381->f_3876.f_2[func_521(iParam0, 1)] = bParam1;
}

int func_521(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2086327823:
			return 64;
		case -2076515520:
			return 98;
		case -2062348046:
			return 101;
		case -1983943039:
			return 62;
		case -1967078622:
			return 4;
		case -1935655667:
			return 39;
		case -1930919582:
			return 56;
		case -1930399868:
			return 68;
		case -1924130593:
			return 102;
		case -1898294040:
			return 50;
		case -1854780893:
			return 5;
		case -1783181138:
			return 13;
		case -1777144780:
			return 92;
		case -1679013564:
			return 16;
		case -1648877470:
			return 43;
		case -1634863390:
			return 10;
		case -1598949067:
			return 45;
		case -1575244427:
			return 67;
		case -1494363065:
			return 1;
		case -1408563730:
			return 30;
		case -1399051227:
			return 53;
		case -1393798041:
			return 59;
		case -1376314322:
			return 49;
		case -1330378740:
			return 95;
		case -1315007749:
			return 21;
		case -1296513906:
			return 11;
		case -1258163578:
			return 48;
		case -1215742816:
			return 37;
		case -1152882498:
			return 18;
		case -1098645728:
			return 93;
		case -1034424695:
			return 32;
		case -1030655937:
			return 12;
		case -985005225:
			return 57;
		case -892848695:
			return 74;
		case -789758703:
			return 34;
		case -757633599:
			return 31;
		case -706075066:
			return 17;
		case -682435976:
			return 82;
		case -634665876:
			return 15;
		case -545299531:
			return 44;
		case -514316475:
			return 2;
		case -479797100:
			return 105;
		case -469672732:
			return 70;
		case -379874384:
			return 79;
		case -355092128:
			return 75;
		case -326224139:
			return 100;
		case -210274020:
			return 35;
		case -162385832:
			return 73;
		case -114666387:
			return 51;
		case -86995487:
			return 20;
		case -79139194:
			return 77;
		case -71551190:
			return 96;
		case -32613857:
			return 86;
		case -29468993:
			return 103;
		case -1:
			return 0;
		case 5611246:
			return 87;
		case 81846499:
			return 23;
		case 120448958:
			return 27;
		case 151445061:
			return 61;
		case 242857368:
			return 42;
		case 300196727:
			return 41;
		case 334700325:
			return 52;
		case 353568324:
			return 69;
		case 385589027:
			return 24;
		case 396837320:
			return 29;
		case 440583097:
			return 47;
		case 449057693:
			return 22;
		case 457103096:
			return 55;
		case 477974086:
			return 6;
		case 478308321:
			return 46;
		case 499656970:
			return 8;
		case 618068466:
			return 7;
		case 630308764:
			return 89;
		case 633501950:
			return 36;
		case 640330073:
			return 94;
		case 669386338:
			return 104;
		case 796310207:
			return 66;
		case 905156700:
			return 60;
		case 941437279:
			return 72;
		case 946732137:
			return 76;
		case 1232224440:
			return 83;
		case 1248971179:
			return 97;
		case 1250422342:
			return 14;
		case 1257949393:
			return 3;
		case 1316486837:
			return 26;
		case 1345888212:
			return 28;
		case 1382158532:
			return 78;
		case 1398164246:
			return 90;
		case 1427070667:
			return 81;
		case 1571096148:
			return 54;
		case 1623086000:
			return 65;
		case 1717813521:
			return 71;
		case 1723535349:
			return 58;
		case 1791948823:
			return 9;
		case 1841970554:
			return 33;
		case 1872332830:
			return 99;
		case 1889309476:
			return 84;
		case 1898201469:
			return 40;
		case 1918774327:
			return 85;
		case 1951290581:
			return 25;
		case 1971904853:
			return 38;
		case 2002140369:
			return 91;
		case 2018657739:
			return 80;
		case 2021695109:
			return 63;
		case 2078792148:
			return 88;
		case 2108116481:
			return 19;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

void func_522(int iParam0)
{
	Global_1903136->f_302 = (Global_1903136->f_302 || iParam0);
}

void func_523(int iParam0)
{
	Global_1956200->f_1431.f_2 = 0f;
	Global_1956200->f_1431.f_1 = iParam0;
}

void func_524(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_58 = iParam1;
	if (bParam2)
	{
		func_1086(&(uParam0->f_59), 1, 1);
	}
	switch (uParam0->f_58)
	{
		case 0:
		case 4:
			func_1086(&(uParam0->f_59), 1, 1);
			break;
		case 1:
		case 2:
			if (!func_152(uParam0->f_59))
			{
				uParam0->f_59 = func_1125("MG_LEAVE1", -385266784, 5, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, -820096546, 0);
				func_1126(uParam0->f_59, 10, 1, 1);
			}
			break;
		case 3:
			if (!func_152(uParam0->f_59))
			{
				iVar0 = (uParam0->f_61 - get_cloud_time_as_int()) * 1000;
				if (iVar0 < 0)
				{
					iVar0 = 0;
				}
				uParam0->f_59 = func_1125("MG_LEAVE1", -385266784, 7, 570, iVar0, 10, 1073741824, 0, 1065353216, 0, 3, -820096546, 0);
				func_1126(uParam0->f_59, 10, 1, 1);
			}
			break;
	}
}

bool func_525(int iParam0, bool bParam1)
{
	if (bParam1 && !func_152(iParam0))
	{
		return false;
	}
	iVar0 = func_347(iParam0);
	if (_uiprompt_has_hold_auto_fill_mode((*Global_1951255)[iVar0]->f_3))
	{
		if ((*Global_1951255)[iVar0]->f_20)
		{
			iVar1 = get_game_timer();
		}
		else
		{
			iVar1 = _get_system_time();
		}
		uVar2 = _0x81801291806dbc50((*Global_1951255)[iVar0]->f_3);
		if (!_uiprompt_is_active((*Global_1951255)[iVar0]->f_3))
		{
			iVar3 = (iVar1 - (*Global_1951255)[iVar0]->f_21);
			iVar4 = floor((IntToFloat((*Global_1951255)[iVar0]->f_18) * (1f - (*Global_1951255)[iVar0]->f_22)));
			if (iVar3 > iVar4)
			{
				return true;
			}
		}
		else
		{
			(*Global_1951255)[iVar0]->f_21 = iVar1;
			(*Global_1951255)[iVar0]->f_22 = uVar2;
		}
	}
	if (_uiprompt_has_mash_mode((*Global_1951255)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1951255)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1951255)[iVar0]->f_3);
}

void func_526(var uParam0)
{
	Call_Loc(uParam0->f_127);
}

void func_527(var uParam0, int iParam1)
{
	uParam0->f_62.f_3 = get_hash_key("MG_CONTINUE");
	uParam0->f_62.f_3.f_3 = 0;
	switch (iParam1)
	{
		case -1720361368:
		case -1166915294:
			uParam0->f_81 = func_1127(&(uParam0->f_62), "MG_ALERT", "MG_ALERT_BANNED", 0, 1);
			break;
		case -1878199881:
			uParam0->f_81 = func_1127(&(uParam0->f_62), "MG_ALERT", _create_var_string(10, "MG_ALERT_GEO_TOGGLE", func_1128(uParam0->f_39)), 0, 1);
			break;
		case 579389526:
			uParam0->f_81 = func_1127(&(uParam0->f_62), "MG_ALERT", "MG_ALERT_OVERALL_CAP", 0, 1);
			break;
		case -1300909614:
			uParam0->f_81 = func_1127(&(uParam0->f_62), "MG_ALERT", "MG_ALERT_DAILY_PROFIT_CAP", 0, 1);
			break;
		case -1589038658:
			uParam0->f_81 = func_1127(&(uParam0->f_62), "MG_ALERT", "MG_ALERT_DAILY_BUYIN_CAP", 0, 1);
			break;
		case 1671747787:
			uParam0->f_81 = func_1127(&(uParam0->f_62), "MG_ALERT", "MG_ALERT_PRIV_HOUR_BUYIN_CAP", 0, 1);
			break;
		case 1053423395:
			uParam0->f_81 = func_1127(&(uParam0->f_62), "MG_ALERT", "MG_ALERT_PUB_RE_BUYIN_CAP", 0, 1);
			break;
		case -1695230319:
			uParam0->f_81 = func_1127(&(uParam0->f_62), "MG_ALERT", _create_var_string(10, "MG_ALERT_BROKE", func_1128(uParam0->f_39)), 0, 1);
			break;
		case -592991683:
			uParam0->f_81 = func_1127(&(uParam0->f_62), "MG_ALERT", "MG_ALERT_NO_PARTY_CHAT", 0, 1);
			break;
		case -1517426354:
			uParam0->f_81 = func_1127(&(uParam0->f_62), "MG_ALERT", _create_var_string(10, "MG_ALERT_MAINTENANCE", func_1128(uParam0->f_39)), 0, 1);
			break;
		case 1406403638:
			uParam0->f_81 = func_1127(&(uParam0->f_62), "MG_ALERT", "MG_ALERT_POSSE_LEADER_LEFT", 0, 1);
			break;
		case 1320901890:
			uParam0->f_81 = func_1127(&(uParam0->f_62), "MG_ALERT", "MG_ALERT_ARBITLEGAL", 0, 1);
			break;
		case 1736016924:
			uParam0->f_81 = func_1127(&(uParam0->f_62), "MG_ALERT", _create_var_string(10, "MG_ALERT_DISCONNECTED", func_1128(uParam0->f_39)), 0, 1);
			break;
		case 2124908670:
			uParam0->f_81 = func_1127(&(uParam0->f_62), "MG_ALERT", "MG_ALERT_BUYIN_TIMEOUT", 0, 1);
			break;
		case -1700673948:
		case -835571454:
			uParam0->f_81 = func_1127(&(uParam0->f_62), "MG_ALERT", _create_var_string(10, "MG_ALERT_NETWORK_ERROR", func_1128(uParam0->f_39)), 0, 1);
			break;
		case -301240451:
		default:
			uParam0->f_81 = func_1127(&(uParam0->f_62), "MG_ALERT", _create_var_string(10, "MG_ALERT_SCRIPT_ERROR", func_1128(uParam0->f_39)), 0, 1);
			break;
	}
}

bool func_528(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_529(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_530(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

var func_531(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Var0 = iParam4;
	Var0.f_1 = iParam3;
	Var0.f_2 = sParam1;
	Var0.f_3 = sParam2;
	uVar4 = _0x339e16b41780fc35(uParam0, &Var0, iParam5);
	return uVar4;
}

void func_532(var uParam0, int iParam1)
{
	*(*uParam0->f_617[iParam1])[0] = { func_330() };
	*(*uParam0->f_617[iParam1])[1] = { func_330() };
	uParam0->f_617[iParam1]->f_5[0] = 0;
	uParam0->f_617[iParam1]->f_5[1] = 0;
	uParam0->f_617[iParam1]->f_8 = 7;
}

void func_533(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		*uParam0->f_672[iVar0] = { func_330() };
		uParam0->f_672.f_11[iVar0] = 0;
		iVar0++;
	}
}

void func_534(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_74[iParam1]->f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_535(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		(*uParam0->f_74[iParam1])[iVar0] = 0;
		uParam0->f_74[iParam1]->f_5[iVar0] = 0;
		uParam0->f_74[iParam1]->f_10[iVar0] = 0;
		uParam0->f_74[iParam1]->f_15[iVar0] = 0;
		uParam0->f_74[iParam1]->f_20[iVar0] = 0;
		uParam0->f_74[iParam1]->f_25[iVar0] = 0f;
		iVar0++;
	}
}

void func_536(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		(*uParam0->f_255[iParam1])[iVar0] = 0;
		uParam0->f_255[iParam1]->f_5[iVar0] = 0;
		uParam0->f_255[iParam1]->f_10[iVar0] = 0;
		uParam0->f_255[iParam1]->f_15[iVar0] = 0;
		uParam0->f_255[iParam1]->f_20[iVar0] = 0;
		uParam0->f_255[iParam1]->f_25[iVar0] = 0f;
		iVar0++;
	}
}

void func_537(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		(*uParam0->f_436[iParam1])[iVar0] = 0;
		uParam0->f_436[iParam1]->f_5[iVar0] = 0;
		uParam0->f_436[iParam1]->f_10[iVar0] = 0;
		uParam0->f_436[iParam1]->f_15[iVar0] = 0;
		uParam0->f_436[iParam1]->f_20[iVar0] = 0;
		uParam0->f_436[iParam1]->f_25[iVar0] = 0f;
		iVar0++;
	}
}

void func_538(var uParam0)
{
	uParam0->f_689 = 0;
	uParam0->f_689.f_1 = 0;
	uParam0->f_689.f_2 = 0;
}

void func_539(var uParam0, int iParam1)
{
	uParam0->f_818[iParam1] = 0;
	uParam0->f_818[iParam1]->f_1 = 0;
	uParam0->f_818[iParam1]->f_2 = 0;
	uParam0->f_818[iParam1]->f_3 = 0;
	uParam0->f_818[iParam1]->f_4 = 0;
	uParam0->f_818[iParam1]->f_5 = 2;
	uParam0->f_818[iParam1]->f_6 = -1;
	uParam0->f_818[iParam1]->f_7 = 92;
	uParam0->f_818[iParam1]->f_8 = 0;
	uParam0->f_818[iParam1]->f_9 = 0;
	func_478(&(uParam0->f_818[iParam1]->f_10));
	func_478(&(uParam0->f_818[iParam1]->f_13));
	func_478(&(uParam0->f_818[iParam1]->f_16));
	uParam0->f_818[iParam1]->f_19 = 0;
	uParam0->f_818[iParam1]->f_20 = 0;
	uParam0->f_818[iParam1]->f_21 = 0;
	uParam0->f_818[iParam1]->f_22 = 0;
	uParam0->f_818[iParam1]->f_23 = 0;
	uParam0->f_818[iParam1]->f_41 = 0;
	uParam0->f_818[iParam1]->f_42 = 0;
	uParam0->f_818[iParam1]->f_43 = 0;
	uParam0->f_818[iParam1]->f_44 = 0;
	uParam0->f_818[iParam1]->f_45 = 0;
	uParam0->f_818[iParam1]->f_46 = 0;
	uParam0->f_818[iParam1]->f_47 = 0;
	uParam0->f_818[iParam1]->f_48 = 0;
	uParam0->f_818[iParam1]->f_49 = 0;
	uParam0->f_818[iParam1]->f_50 = 0;
	uParam0->f_818[iParam1]->f_51 = 1;
	uParam0->f_818[iParam1]->f_52 = 1;
	uParam0->f_818[iParam1]->f_53 = 0;
	uParam0->f_818[iParam1]->f_54 = 0;
	uParam0->f_818[iParam1]->f_55 = 0;
	uParam0->f_818[iParam1]->f_56 = -1;
	uParam0->f_818[iParam1]->f_60 = -1;
	uParam0->f_818[iParam1]->f_61 = 255;
}

void func_540(vector3 vParam0, float fParam3, vector3 vParam4, vector3 vParam7, float fParam10, var uParam11)
{
	vVar0.x = ((vParam4.x * cos(fParam3)) - (vParam4.y * sin(fParam3)));
	vVar0.f_1 = ((vParam4.x * sin(fParam3)) + (vParam4.y * cos(fParam3)));
	vVar0.f_2 = vParam4.z;
	*fParam10 = { vVar0 + vParam0 };
	*uParam11 = vParam7.x;
	uParam11->f_1 = vParam7.y;
	uParam11->f_2 = (vParam7.z + fParam3);
}

void func_541(var uParam0, var uParam1, var uParam2)
{
}

void func_542(var uParam0, var uParam1, var uParam2)
{
}

void func_543(var uParam0, var uParam1, var uParam2)
{
}

void func_544(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_40)
	{
		func_471(uParam0, iParam2, 1);
		return;
	}
	if (is_task_move_network_active(*uParam1))
	{
		if (func_1129(uParam1, "NoCardsIdle") || func_1129(uParam1, "HoldCardsIdle"))
		{
			func_471(uParam0, iParam2, 1);
		}
	}
}

void func_545(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_40)
	{
		func_471(uParam0, iParam2, 1);
		return;
	}
	switch (uParam1->f_9)
	{
		case 6:
			func_1130(uParam0, iParam2, -1921404755);
			func_1130(uParam0, iParam2, 1426724047);
			if ((!func_1131(uParam0, iParam2, "sit_enter_left", 1065353216) && !func_1131(uParam0, iParam2, "sit_enter_right", 1065353216)) || func_1132(uParam0, iParam2, 1))
			{
				func_472(uParam0, iParam2, "NoCardsIdleRequest", 0.5f);
				func_1133(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (func_1129(uParam1, "NoCardsIdle"))
			{
				func_471(uParam0, iParam2, 1);
			}
			break;
	}
}

void func_546(var uParam0, var uParam1, int iParam2)
{
	func_1134(uParam0, iParam2);
}

void func_547(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_40)
	{
		_set_entity_coords_and_heading_no_offset(*uParam1, *uParam0->f_1236[iParam2], uParam0->f_1255[iParam2]->f_2, false, true);
		func_471(uParam0, iParam2, 1);
		return;
	}
	switch (uParam1->f_9)
	{
		case 2:
			if (!func_381(*uParam1, 716706914))
			{
				iVar0 = func_1135(2, *uParam0, uParam0->f_3, iParam2, 1051931443);
				if (does_entity_exist(iVar0))
				{
					vVar1 = { get_entity_coords(iVar0, true, false) };
					fVar4 = get_entity_heading(iVar0);
					func_1136(vVar1, fVar4, *uParam0->f_1236[iParam2], *uParam0->f_1255[iParam2], &vVar5, &vVar8);
					switch (func_842(uParam0, iParam2))
					{
						case 1:
						case 4:
							iVar12 = -2043611403;
							iVar13 = -2043611403;
							break;
						case 0:
						case 2:
						case 3:
						case 5:
						default:
							iVar12 = -55367021;
							iVar13 = -55367021;
							break;
					}
					iVar11 = _find_closest_active_scenario_point_of_type(*uParam0->f_1236[iParam2], iVar13, 0.25f, 1, false);
					if (_does_scenario_point_exist(iVar11))
					{
						_set_scenario_point_coords(iVar11, vVar5, false);
						_set_scenario_point_heading(iVar11, vVar8.z, false);
					}
					else
					{
						iVar11 = create_scenario_point_attached_to_entity(iVar0, iVar12, vVar5, vVar8.z, 0, 0, 0);
					}
					if (_does_scenario_point_exist(iVar11))
					{
						_task_use_scenario_point(*uParam1, iVar11, 0, 0, true, false, 0, false, -1f, false);
						func_1133(uParam0, iParam2, 3);
						return;
					}
				}
				iVar14 = func_842(uParam0, iParam2);
				if (func_610(uParam0, iParam2, 2, 1))
				{
					iVar14 = func_611(uParam0, iParam2, 0);
				}
				if (func_610(uParam0, iParam2, 3, 1) || func_610(uParam0, iParam2, 5, 1))
				{
					iVar14 = func_611(uParam0, iParam2, 4);
				}
				vVar15 = { get_anim_initial_offset_position(uParam0->f_1274[iVar14], "sit_enter_left", *uParam0->f_1236[iParam2], *uParam0->f_1255[iParam2], 0f, 2) };
				vVar18 = { get_anim_initial_offset_rotation(uParam0->f_1274[iVar14], "sit_enter_left", *uParam0->f_1236[iParam2], *uParam0->f_1255[iParam2], 0f, 2) };
				task_follow_nav_mesh_to_coord(*uParam1, vVar15, 1f, -1, 0.25f, 5120, vVar18.z);
				func_1133(uParam0, iParam2, 5);
			}
			break;
		case 3:
			if (is_ped_active_in_scenario(*uParam1, 1))
			{
				func_1137(uParam0, iParam2, 0);
				func_1133(uParam0, iParam2, 4);
			}
			else if (!func_381(*uParam1, -76381094) || (func_101(&(uParam1->f_13), 20f) && (uParam1->f_47 || uParam1->f_48)))
			{
				if (!func_381(*uParam1, -76381094))
				{
					if (_does_scenario_point_exist(iVar11))
					{
						_task_use_scenario_point(*uParam1, iVar11, 0, 0, true, false, 0, false, -1f, false);
						return;
					}
					else
					{
						iVar14 = func_842(uParam0, iParam2);
						if (func_610(uParam0, iParam2, 2, 1))
						{
							iVar14 = func_611(uParam0, iParam2, 0);
						}
						if (func_610(uParam0, iParam2, 3, 1) || func_610(uParam0, iParam2, 5, 1))
						{
							iVar14 = func_611(uParam0, iParam2, 4);
						}
						vVar15 = { get_anim_initial_offset_position(uParam0->f_1274[iVar14], "sit_enter_left", *uParam0->f_1236[iParam2], *uParam0->f_1255[iParam2], 0f, 2) };
						vVar18 = { get_anim_initial_offset_rotation(uParam0->f_1274[iVar14], "sit_enter_left", *uParam0->f_1236[iParam2], *uParam0->f_1255[iParam2], 0f, 2) };
						task_follow_nav_mesh_to_coord(*uParam1, vVar15, 1f, -1, 0.25f, 5120, vVar18.z);
						func_1133(uParam0, iParam2, 5);
						return;
					}
				}
				func_1137(uParam0, iParam2, 0);
				clear_ped_tasks_immediately(*uParam1, false, true);
				if (get_interior_from_entity(*uParam1) != get_interior_at_coords(*uParam0->f_1236[iParam2]))
				{
					set_entity_coords(*uParam1, *uParam0->f_1236[iParam2] - Vector(0.5f, 0f, 0f), true, false, true, true);
				}
				func_472(uParam0, iParam2, "NoCardsIdleRequest", 0);
				func_1133(uParam0, iParam2, 1);
			}
			break;
		case 4:
			func_1130(uParam0, iParam2, -1921404755);
			func_1130(uParam0, iParam2, 1426724047);
			if ((is_ped_active_in_scenario(*uParam1, 0) || func_1138(uParam0, iParam2, 0)) || func_101(&(uParam1->f_13), 20f))
			{
				_0xf1c03a5352243a30(*uParam1);
				_0x2d657b10f211c572(*uParam1, 0.5f);
				func_472(uParam0, iParam2, "NoCardsIdleRequest", 0.5f);
				func_1133(uParam0, iParam2, 1);
			}
			break;
		case 5:
			if (!func_381(*uParam1, 713668775) || (func_101(&(uParam1->f_13), 20f) && (uParam1->f_47 || uParam1->f_48)))
			{
				if (func_381(*uParam1, 713668775))
				{
					clear_ped_tasks_immediately(*uParam1, false, true);
					if (get_interior_from_entity(*uParam1) != get_interior_at_coords(*uParam0->f_1236[iParam2]))
					{
						set_entity_coords(*uParam1, *uParam0->f_1236[iParam2] - Vector(0.5f, 0f, 0f), true, false, true, true);
					}
				}
				func_459(uParam0, iParam2, "sit_enter_left", 2, 1040187392, 1040187392, 0, 1);
				func_1137(uParam0, iParam2, 0);
				func_1133(uParam0, iParam2, 6);
			}
			break;
		case 6:
			func_1130(uParam0, iParam2, -1921404755);
			func_1130(uParam0, iParam2, 1426724047);
			if ((!func_1131(uParam0, iParam2, "sit_enter_left", 1065353216) && !func_1131(uParam0, iParam2, "sit_enter_right", 1065353216)) || func_1138(uParam0, iParam2, 0))
			{
				func_472(uParam0, iParam2, "NoCardsIdleRequest", 0.5f);
				func_1133(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (func_1129(uParam1, "NoCardsIdle"))
			{
				func_471(uParam0, iParam2, 1);
			}
			break;
	}
}

void func_548(var uParam0, var uParam1, int iParam2)
{
	func_1134(uParam0, iParam2);
}

void func_549(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_40)
	{
		_set_entity_coords_and_heading_no_offset(*uParam1, *uParam0->f_1236[iParam2], uParam0->f_1255[iParam2]->f_2, false, true);
		func_471(uParam0, iParam2, 1);
		return;
	}
	switch (uParam1->f_9)
	{
		case 44:
			if (func_1139(uParam0))
			{
				func_472(uParam0, iParam2, "NoCardsIdleRequest", 0.5f);
				func_1133(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (func_1129(uParam1, "NoCardsIdle"))
			{
				func_471(uParam0, iParam2, 1);
			}
			break;
	}
}

void func_550(var uParam0, var uParam1, int iParam2)
{
	func_1134(uParam0, iParam2);
	func_418(uParam0);
	func_1140(uParam0, iParam2, 0);
}

void func_551(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_40)
	{
		_set_entity_coords_and_heading_no_offset(*uParam1, *uParam0->f_1236[iParam2], uParam0->f_1255[iParam2]->f_2, false, true);
		func_471(uParam0, iParam2, 1);
		return;
	}
	fVar1 = uParam0->f_698;
	switch (uParam1->f_9)
	{
		case 6:
			func_1130(uParam0, iParam2, -1921404755);
			func_1130(uParam0, iParam2, 1426724047);
			if (func_1131(uParam0, iParam2, "sit_enter_right", 1065353216))
			{
				fVar0 = func_1141(uParam0, iParam2, "sit_enter_right");
				if (fVar0 < fVar1)
				{
					set_entity_alpha(*uParam1, round(((fVar0 * 255f) / fVar1)), false);
				}
				else
				{
					set_entity_alpha(*uParam1, 255, false);
				}
			}
			if (!func_1131(uParam0, iParam2, "sit_enter_right", 1065353216) || func_1138(uParam0, iParam2, 0))
			{
				set_entity_alpha(*uParam1, 255, false);
				func_472(uParam0, iParam2, "NoCardsIdleRequest", 0.5f);
				func_1133(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (func_1129(uParam1, "NoCardsIdle"))
			{
				func_471(uParam0, iParam2, 1);
			}
			break;
	}
}

void func_552(var uParam0, var uParam1, int iParam2)
{
	func_1134(uParam0, iParam2);
	set_entity_alpha(*uParam1, 255, false);
}

void func_553(var uParam0, var uParam1, int iParam2)
{
	bVar0 = is_bit_set(uParam1->f_19, 0);
	bVar1 = is_bit_set(uParam1->f_19, 1);
	iVar2 = uParam1->f_20;
	iVar3 = uParam1->f_21;
	if (uParam0->f_40)
	{
		if (func_941(uParam0))
		{
			func_419(uParam0);
			if (iVar2 < 6)
			{
				func_458(uParam0, iParam2, iVar2);
			}
			if (func_455(uParam0, iParam2) == 2)
			{
				func_476(uParam0, iParam2, 1);
			}
			else
			{
				func_476(uParam0, iParam2, 0);
			}
			func_471(uParam0, iParam2, 1);
		}
		return;
	}
	switch (uParam1->f_9)
	{
		case 7:
			if (func_1129(uParam1, "ReceiveDeckEnterNoCardsAnimFinished"))
			{
				if (func_1142() || bVar0)
				{
					request_task_move_network_state_transition(*uParam1, "ShuffleRiffleFront");
				}
				else
				{
					request_task_move_network_state_transition(*uParam1, "ShuffleStandardFront");
				}
				func_1133(uParam0, iParam2, 8);
			}
			break;
		case 8:
			if (func_1129(uParam1, "ShuffleStandardFrontAnimFinished") || func_1129(uParam1, "ShuffleRiffleFrontAnimFinished"))
			{
				func_1133(uParam0, iParam2, 11);
			}
			break;
		case 9:
			if (func_1129(uParam1, "ShuffleEnterAnimFinished"))
			{
				if (func_1142() || bVar0)
				{
					request_task_move_network_state_transition(*uParam1, "ShuffleRiffleLeft");
				}
				else
				{
					request_task_move_network_state_transition(*uParam1, "ShuffleStandardLeft");
				}
				func_1133(uParam0, iParam2, 10);
			}
			break;
		case 10:
			if (func_1129(uParam1, "ShuffleStandardLeftAnimFinished") || func_1129(uParam1, "ShuffleRiffleLeftAnimFinished"))
			{
				func_1133(uParam0, iParam2, 11);
			}
			break;
		case 11:
			if (func_1143(uParam0) && func_941(uParam0))
			{
				func_1144(uParam0, iParam2, iVar3);
				func_1137(uParam0, iParam2, 6);
				func_1133(uParam0, iParam2, 12);
			}
			break;
		case 12:
			if (func_1145(uParam0))
			{
				iVar5 = 0;
				while (iVar5 < 6)
				{
					iVar4 = func_473(uParam0, iVar5, 1);
					if (does_entity_exist(iVar4) && _0x0b7cb1300cbfe19c(iVar4, 1))
					{
						if (has_anim_event_fired(iVar4, -942436593))
						{
							func_1137(uParam0, iParam2, (iParam2 + 6 % 6));
						}
						if (has_anim_event_fired(iVar4, -1248793974))
						{
							func_1137(uParam0, iParam2, (iParam2 + 1 % 6));
						}
						if (has_anim_event_fired(iVar4, -1698646806))
						{
							func_1137(uParam0, iParam2, (iParam2 + 2 % 6));
						}
						if (has_anim_event_fired(iVar4, -2004414345))
						{
							func_1137(uParam0, iParam2, (iParam2 + 3 % 6));
						}
						if (has_anim_event_fired(iVar4, 220797369))
						{
							func_1137(uParam0, iParam2, (iParam2 + 4 % 6));
						}
						if (has_anim_event_fired(iVar4, -228858849))
						{
							func_1137(uParam0, iParam2, (iParam2 + 5 % 6));
						}
					}
					iVar5++;
				}
			}
			if (func_1146(uParam0))
			{
				if (iVar2 < 6)
				{
					func_458(uParam0, iParam2, iVar2);
				}
				func_1147(uParam0, iParam2);
				func_617(uParam0, iParam2, 6);
				if (bVar1)
				{
					func_472(uParam0, iParam2, "DealToHoldCardsRequest", 0.5f);
					func_1133(uParam0, iParam2, 13);
				}
				else
				{
					func_472(uParam0, iParam2, "DealToNoCardsRequest", 0.5f);
					func_1133(uParam0, iParam2, 14);
				}
			}
			break;
		case 13:
			if (func_1129(uParam1, "DealToHoldCardsAnimFinished"))
			{
				func_476(uParam0, iParam2, 1);
				request_task_move_network_state_transition(*uParam1, "HoldCardsIdle");
				func_1133(uParam0, iParam2, 1);
			}
			break;
		case 14:
			if (func_1129(uParam1, "DealToNoCardsAnimFinished"))
			{
				func_476(uParam0, iParam2, 0);
				request_task_move_network_state_transition(*uParam1, "NoCardsIdle");
				func_1133(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (func_1129(uParam1, "HoldCardsIdle") || func_1129(uParam1, "NoCardsIdle"))
			{
				func_419(uParam0);
				func_471(uParam0, iParam2, 1);
			}
			break;
	}
	if (has_anim_event_fired(*uParam1, -240642751))
	{
		func_474(uParam0, iParam2, "shuffle_enter_deck", func_1148(uParam0), 0, 2, -1082130432);
	}
	else if (has_anim_event_fired(*uParam1, 190968016))
	{
		func_474(uParam0, iParam2, "shuffle_standard_front_deck", func_1148(uParam0), 0, 2, -1082130432);
	}
	else if (has_anim_event_fired(*uParam1, -1711999502))
	{
		func_474(uParam0, iParam2, "shuffle_riffle_front_deck", func_1148(uParam0), 0, 2, -1082130432);
	}
	else if (has_anim_event_fired(*uParam1, 96509896))
	{
		func_474(uParam0, iParam2, "shuffle_standard_left_deck", func_1148(uParam0), 0, 2, -1082130432);
	}
	else if (has_anim_event_fired(*uParam1, -1301672132))
	{
		func_474(uParam0, iParam2, "shuffle_riffle_left_deck", func_1148(uParam0), 0, 2, -1082130432);
	}
	else if (has_anim_event_fired(*uParam1, -1846387738))
	{
		func_474(uParam0, iParam2, "deal_to_hold_cards_card1", func_473(uParam0, iParam2, 0), 0, 2, -1082130432);
		func_474(uParam0, iParam2, "deal_to_hold_cards_card2", func_473(uParam0, iParam2, 1), 0, 2, -1082130432);
	}
}

void func_554(var uParam0, var uParam1, var uParam2)
{
	func_419(uParam0);
}

void func_555(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_40)
	{
		if (func_942(uParam0))
		{
			if (func_455(uParam0, iParam2) == 2)
			{
				func_476(uParam0, iParam2, 1);
			}
			uParam0->f_795 = -1;
			func_471(uParam0, iParam2, 1);
		}
		return;
	}
	switch (uParam1->f_9)
	{
		case 15:
			if (func_942(uParam0))
			{
				switch (uParam0->f_795)
				{
					case 1:
						func_1036(uParam0, 0, -1, 1, 0);
						func_1036(uParam0, 1, -1, 1, 0);
						func_1036(uParam0, 2, -1, 1, 0);
						if (uParam0->f_796)
						{
							func_1036(uParam0, 3, -1, 1, 0);
							func_1036(uParam0, 4, -1, 1, 0);
						}
						break;
					case 2:
						func_1036(uParam0, 3, -1, 1, 0);
						if (uParam0->f_796)
						{
							func_1036(uParam0, 4, -1, 1, 0);
						}
						break;
					case 3:
						func_1036(uParam0, 4, -1, 1, 0);
						break;
				}
				if (uParam1->f_1 == 1)
				{
					if (uParam0->f_795 == 1)
					{
						request_task_move_network_state_transition(*uParam1, "FlopEnterNoCards");
						func_1133(uParam0, iParam2, 16);
					}
					else if (uParam0->f_795 == 2)
					{
						if (!uParam0->f_796)
						{
							request_task_move_network_state_transition(*uParam1, "TurnNoCards");
							func_1133(uParam0, iParam2, 19);
						}
						else
						{
							request_task_move_network_state_transition(*uParam1, "TurnRiverNoCards");
							func_1133(uParam0, iParam2, 22);
						}
					}
					else if (uParam0->f_795 == 3)
					{
						request_task_move_network_state_transition(*uParam1, "RiverNoCards");
						func_1133(uParam0, iParam2, 20);
					}
				}
				else if (uParam1->f_1 == 2)
				{
					if (uParam0->f_795 == 1)
					{
						request_task_move_network_state_transition(*uParam1, "FlopEnterHoldCards");
						func_1133(uParam0, iParam2, 23);
					}
					else if (uParam0->f_795 == 2)
					{
						if (!uParam0->f_796)
						{
							request_task_move_network_state_transition(*uParam1, "TurnHoldCards");
							func_1133(uParam0, iParam2, 26);
						}
						else
						{
							request_task_move_network_state_transition(*uParam1, "TurnRiverHoldCards");
							func_1133(uParam0, iParam2, 29);
						}
					}
					else if (uParam0->f_795 == 3)
					{
						request_task_move_network_state_transition(*uParam1, "RiverHoldCards");
						func_1133(uParam0, iParam2, 27);
					}
				}
			}
			break;
		case 16:
			if (func_1129(uParam1, "FlopEnterNoCardsAnimFinished"))
			{
				if (!uParam0->f_796)
				{
					request_task_move_network_state_transition(*uParam1, "Flop");
					func_1133(uParam0, iParam2, 17);
				}
				else
				{
					request_task_move_network_state_transition(*uParam1, "FlopTurnRiverNoCards");
					func_1133(uParam0, iParam2, 21);
				}
			}
			break;
		case 17:
			if (func_1129(uParam1, "FlopAnimFinished"))
			{
				request_task_move_network_state_transition(*uParam1, "FlopExitNoCards");
				func_1133(uParam0, iParam2, 18);
			}
			break;
		case 18:
			func_1147(uParam0, iParam2);
			if (func_1129(uParam1, "FlopExitNoCardsAnimFinished") || func_1138(uParam0, iParam2, 1))
			{
				request_task_move_network_state_transition(*uParam1, "NoCardsIdle");
				func_1133(uParam0, iParam2, 1);
			}
			break;
		case 19:
			func_1130(uParam0, iParam2, -1921404755);
			if (func_1129(uParam1, "TurnNoCardsAnimFinished") || func_1138(uParam0, iParam2, 1))
			{
				request_task_move_network_state_transition(*uParam1, "NoCardsIdle");
				func_1133(uParam0, iParam2, 1);
			}
			break;
		case 20:
			func_1130(uParam0, iParam2, -1921404755);
			if (func_1129(uParam1, "RiverNoCardsAnimFinished") || func_1138(uParam0, iParam2, 1))
			{
				request_task_move_network_state_transition(*uParam1, "NoCardsIdle");
				func_1133(uParam0, iParam2, 1);
			}
			break;
		case 21:
			func_1130(uParam0, iParam2, -1921404755);
			if (func_1129(uParam1, "FlopTurnRiverNoCardsAnimFinished") || func_1138(uParam0, iParam2, 1))
			{
				request_task_move_network_state_transition(*uParam1, "NoCardsIdle");
				func_1133(uParam0, iParam2, 1);
			}
			break;
		case 22:
			func_1130(uParam0, iParam2, -1921404755);
			if (func_1129(uParam1, "TurnRiverNoCardsAnimFinished") || func_1138(uParam0, iParam2, 1))
			{
				request_task_move_network_state_transition(*uParam1, "NoCardsIdle");
				func_1133(uParam0, iParam2, 1);
			}
			break;
		case 23:
			if (func_1129(uParam1, "FlopEnterHoldCardsAnimFinished"))
			{
				if (!uParam0->f_796)
				{
					request_task_move_network_state_transition(*uParam1, "Flop");
					func_1133(uParam0, iParam2, 24);
				}
				else
				{
					request_task_move_network_state_transition(*uParam1, "FlopTurnRiverHoldCards");
					func_1133(uParam0, iParam2, 28);
				}
			}
			break;
		case 24:
			if (func_1129(uParam1, "FlopAnimFinished"))
			{
				request_task_move_network_state_transition(*uParam1, "FlopExitHoldCards");
				func_1133(uParam0, iParam2, 25);
			}
			break;
		case 25:
			func_1147(uParam0, iParam2);
			if (func_1129(uParam1, "FlopExitHoldCardsAnimFinished") || func_1138(uParam0, iParam2, 1))
			{
				request_task_move_network_state_transition(*uParam1, "HoldCardsIdle");
				func_1133(uParam0, iParam2, 1);
			}
			break;
		case 26:
			func_1130(uParam0, iParam2, -1921404755);
			if (func_1129(uParam1, "TurnHoldCardsAnimFinished") || func_1138(uParam0, iParam2, 1))
			{
				request_task_move_network_state_transition(*uParam1, "HoldCardsIdle");
				func_1133(uParam0, iParam2, 1);
			}
			break;
		case 27:
			func_1130(uParam0, iParam2, -1921404755);
			if (func_1129(uParam1, "RiverHoldCardsAnimFinished") || func_1138(uParam0, iParam2, 1))
			{
				request_task_move_network_state_transition(*uParam1, "HoldCardsIdle");
				func_1133(uParam0, iParam2, 1);
			}
			break;
		case 28:
			func_1130(uParam0, iParam2, -1921404755);
			if (func_1129(uParam1, "FlopTurnRiverHoldCardsAnimFinished") || func_1138(uParam0, iParam2, 1))
			{
				request_task_move_network_state_transition(*uParam1, "HoldCardsIdle");
				func_1133(uParam0, iParam2, 1);
			}
			break;
		case 29:
			func_1130(uParam0, iParam2, -1921404755);
			if (func_1129(uParam1, "TurnRiverHoldCardsAnimFinished") || func_1138(uParam0, iParam2, 1))
			{
				request_task_move_network_state_transition(*uParam1, "HoldCardsIdle");
				func_1133(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (func_1129(uParam1, "NoCardsIdle") || func_1129(uParam1, "HoldCardsIdle"))
			{
				if (func_455(uParam0, iParam2) == 2)
				{
					func_476(uParam0, iParam2, 1);
				}
				iVar0 = 0;
				while (iVar0 < 5)
				{
					if (func_983(uParam0, iVar0))
					{
						func_1149(uParam0, iVar0, 1);
					}
					iVar0++;
				}
				uParam0->f_795 = -1;
				func_471(uParam0, iParam2, 1);
			}
			break;
	}
	if (has_anim_event_fired(*uParam1, 1228639662))
	{
		func_474(uParam0, iParam2, "flop_deck", func_1148(uParam0), 0, 2, -1082130432);
		func_474(uParam0, iParam2, "flop_card1", func_1150(uParam0, 0), 0, 2, -1082130432);
		func_474(uParam0, iParam2, "flop_card2", func_1150(uParam0, 1), 0, 2, -1082130432);
		func_474(uParam0, iParam2, "flop_card3", func_1150(uParam0, 2), 0, 2, -1082130432);
	}
	else if (has_anim_event_fired(*uParam1, -572100475))
	{
		func_474(uParam0, iParam2, "flop_enter_no_cards_deck", func_1148(uParam0), 0, 2, -1082130432);
	}
	else if (has_anim_event_fired(*uParam1, -113517709))
	{
		func_474(uParam0, iParam2, "flop_exit_no_cards_deck", func_1148(uParam0), 0, 2, -1082130432);
	}
	else if (has_anim_event_fired(*uParam1, 711118658))
	{
		func_474(uParam0, iParam2, "turn_no_cards_deck", func_1148(uParam0), 0, 2, -1082130432);
		func_474(uParam0, iParam2, "turn_no_cards_card1", func_1150(uParam0, 3), 0, 2, -1082130432);
	}
	else if (has_anim_event_fired(*uParam1, 437520029))
	{
		func_474(uParam0, iParam2, "river_no_cards_deck", func_1148(uParam0), 0, 2, -1082130432);
		func_474(uParam0, iParam2, "river_no_cards_card1", func_1150(uParam0, 4), 0, 2, -1082130432);
	}
	else if (has_anim_event_fired(*uParam1, 419783961))
	{
		func_474(uParam0, iParam2, "flop_turn_river_no_cards_deck", func_1148(uParam0), 0, 2, -1082130432);
		func_474(uParam0, iParam2, "flop_turn_river_no_cards_card1", func_1150(uParam0, 0), 0, 2, -1082130432);
		func_474(uParam0, iParam2, "flop_turn_river_no_cards_card2", func_1150(uParam0, 1), 0, 2, -1082130432);
		func_474(uParam0, iParam2, "flop_turn_river_no_cards_card3", func_1150(uParam0, 2), 0, 2, -1082130432);
		func_474(uParam0, iParam2, "flop_turn_river_no_cards_card4", func_1150(uParam0, 3), 0, 2, -1082130432);
		func_474(uParam0, iParam2, "flop_turn_river_no_cards_card5", func_1150(uParam0, 4), 0, 2, -1082130432);
	}
	else if (has_anim_event_fired(*uParam1, 381129739))
	{
		func_474(uParam0, iParam2, "turn_river_no_cards_deck", func_1148(uParam0), 0, 2, -1082130432);
		func_474(uParam0, iParam2, "turn_river_no_cards_card1", func_1150(uParam0, 3), 0, 2, -1082130432);
		func_474(uParam0, iParam2, "turn_river_no_cards_card2", func_1150(uParam0, 4), 0, 2, -1082130432);
	}
	else if (has_anim_event_fired(*uParam1, -95084943))
	{
		func_474(uParam0, iParam2, "flop_enter_hold_cards_deck", func_1148(uParam0), 0, 2, -1082130432);
		func_474(uParam0, iParam2, "flop_enter_hold_cards_card1", func_473(uParam0, iParam2, 0), 4, 2, -1082130432);
		func_474(uParam0, iParam2, "flop_enter_hold_cards_card2", func_473(uParam0, iParam2, 1), 4, 2, -1082130432);
	}
	else if (has_anim_event_fired(*uParam1, -607868067))
	{
		func_474(uParam0, iParam2, "flop_exit_hold_cards_deck", func_1148(uParam0), 0, 2, -1082130432);
		func_474(uParam0, iParam2, "flop_exit_hold_cards_card1", func_473(uParam0, iParam2, 0), 4, 2, -1082130432);
		func_474(uParam0, iParam2, "flop_exit_hold_cards_card2", func_473(uParam0, iParam2, 1), 4, 2, -1082130432);
	}
	else if (has_anim_event_fired(*uParam1, -1776513281))
	{
		func_474(uParam0, iParam2, "turn_hold_cards_deck", func_1148(uParam0), 0, 2, -1082130432);
		func_474(uParam0, iParam2, "turn_hold_cards_card1", func_473(uParam0, iParam2, 0), 4, 2, -1082130432);
		func_474(uParam0, iParam2, "turn_hold_cards_card2", func_473(uParam0, iParam2, 1), 4, 2, -1082130432);
		func_474(uParam0, iParam2, "turn_hold_cards_card3", func_1150(uParam0, 3), 0, 2, -1082130432);
	}
	else if (has_anim_event_fired(*uParam1, -1551570381))
	{
		func_474(uParam0, iParam2, "river_hold_cards_deck", func_1148(uParam0), 0, 2, -1082130432);
		func_474(uParam0, iParam2, "river_hold_cards_card1", func_473(uParam0, iParam2, 0), 4, 2, -1082130432);
		func_474(uParam0, iParam2, "river_hold_cards_card2", func_473(uParam0, iParam2, 1), 4, 2, -1082130432);
		func_474(uParam0, iParam2, "river_hold_cards_card3", func_1150(uParam0, 4), 0, 2, -1082130432);
	}
	else if (has_anim_event_fired(*uParam1, 198906537))
	{
		func_474(uParam0, iParam2, "flop_turn_river_hold_cards_deck", func_1148(uParam0), 0, 2, -1082130432);
		func_474(uParam0, iParam2, "flop_turn_river_hold_cards_card1", func_473(uParam0, iParam2, 0), 4, 2, -1082130432);
		func_474(uParam0, iParam2, "flop_turn_river_hold_cards_card2", func_473(uParam0, iParam2, 1), 4, 2, -1082130432);
		func_474(uParam0, iParam2, "flop_turn_river_hold_cards_card3", func_1150(uParam0, 0), 0, 2, -1082130432);
		func_474(uParam0, iParam2, "flop_turn_river_hold_cards_card4", func_1150(uParam0, 1), 0, 2, -1082130432);
		func_474(uParam0, iParam2, "flop_turn_river_hold_cards_card5", func_1150(uParam0, 2), 0, 2, -1082130432);
		func_474(uParam0, iParam2, "flop_turn_river_hold_cards_card6", func_1150(uParam0, 3), 0, 2, -1082130432);
		func_474(uParam0, iParam2, "flop_turn_river_hold_cards_card7", func_1150(uParam0, 4), 0, 2, -1082130432);
	}
	else if (has_anim_event_fired(*uParam1, 947648498))
	{
		func_474(uParam0, iParam2, "turn_river_hold_cards_deck", func_1148(uParam0), 0, 2, -1082130432);
		func_474(uParam0, iParam2, "turn_river_hold_cards_card1", func_473(uParam0, iParam2, 0), 4, 2, -1082130432);
		func_474(uParam0, iParam2, "turn_river_hold_cards_card2", func_473(uParam0, iParam2, 1), 4, 2, -1082130432);
		func_474(uParam0, iParam2, "turn_river_hold_cards_card3", func_1150(uParam0, 3), 0, 2, -1082130432);
		func_474(uParam0, iParam2, "turn_river_hold_cards_card4", func_1150(uParam0, 4), 0, 2, -1082130432);
	}
	if (has_anim_event_fired(*uParam1, 531650300))
	{
		func_1149(uParam0, 0, 1);
	}
	if (has_anim_event_fired(*uParam1, 1968865871))
	{
		func_1149(uParam0, 1, 1);
	}
	if (has_anim_event_fired(*uParam1, -1995200063))
	{
		func_1149(uParam0, 2, 1);
	}
	if (has_anim_event_fired(*uParam1, -695843675))
	{
		func_1149(uParam0, 3, 1);
	}
	if (has_anim_event_fired(*uParam1, -461447018))
	{
		func_1149(uParam0, 4, 1);
	}
	if (has_anim_event_fired(*uParam1, -134313359))
	{
		if (!func_603(uParam0, iParam2, 0))
		{
			func_1137(uParam0, iParam2, 0);
		}
	}
	else if (has_anim_event_fired(*uParam1, 1156819043))
	{
		if (!func_603(uParam0, iParam2, 1))
		{
			func_1137(uParam0, iParam2, 1);
		}
	}
	else if (has_anim_event_fired(*uParam1, -1436811567))
	{
		if (!func_603(uParam0, iParam2, 2))
		{
			func_1137(uParam0, iParam2, 2);
		}
	}
}

void func_556(var uParam0, var uParam1, var uParam2)
{
	uParam0->f_795 = -1;
}

void func_557(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_40)
	{
		func_471(uParam0, iParam2, 1);
		return;
	}
	switch (uParam1->f_9)
	{
		case 0:
			func_1130(uParam0, iParam2, -1921404755);
			if (func_1129(uParam1, "HoldCardsEnterAnimFinished") || func_1138(uParam0, iParam2, 1))
			{
				func_476(uParam0, iParam2, 1);
				request_task_move_network_state_transition(*uParam1, "HoldCardsIdle");
				func_1133(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (func_1129(uParam1, "HoldCardsIdle"))
			{
				func_471(uParam0, iParam2, 1);
			}
			break;
	}
	if (has_anim_event_fired(*uParam1, -1087743179))
	{
		func_474(uParam0, iParam2, "hold_cards_enter_card1", func_473(uParam0, iParam2, 0), 0, 2, -1082130432);
		func_474(uParam0, iParam2, "hold_cards_enter_card2", func_473(uParam0, iParam2, 1), 0, 2, -1082130432);
	}
}

void func_558(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_40)
	{
		func_476(uParam0, iParam2, 1);
		func_471(uParam0, iParam2, 1);
		return;
	}
	switch (uParam1->f_9)
	{
		case 30:
			if (func_1129(uParam1, "PeekEnterAnimFinished"))
			{
				request_task_move_network_state_transition(*uParam1, "Peek");
				func_1133(uParam0, iParam2, 31);
			}
			break;
		case 31:
			if (uParam1->f_47 || uParam1->f_48)
			{
				if (is_task_move_network_ready_for_transition(*uParam1))
				{
					func_476(uParam0, iParam2, 1);
					request_task_move_network_state_transition(*uParam1, "PeekExit");
					func_1133(uParam0, iParam2, 32);
				}
			}
			break;
		case 32:
			if (func_1129(uParam1, "PeekExitAnimFinished") || func_1138(uParam0, iParam2, 1))
			{
				request_task_move_network_state_transition(*uParam1, "HoldCardsIdle");
				func_1133(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (func_1129(uParam1, "HoldCardsIdle"))
			{
				func_471(uParam0, iParam2, 1);
			}
			break;
	}
	if (has_anim_event_fired(*uParam1, -1601457590))
	{
		func_474(uParam0, iParam2, "peek_enter_card1", func_473(uParam0, iParam2, 0), 0, 2, -1082130432);
		func_474(uParam0, iParam2, "peek_enter_card2", func_473(uParam0, iParam2, 1), 0, 2, -1082130432);
	}
	else if (has_anim_event_fired(*uParam1, 611442489))
	{
		func_474(uParam0, iParam2, "peek_idle_card1", func_473(uParam0, iParam2, 0), 0, 2, -1082130432);
		func_474(uParam0, iParam2, "peek_idle_card2", func_473(uParam0, iParam2, 1), 0, 2, -1082130432);
	}
	else if (has_anim_event_fired(*uParam1, -1497341761))
	{
		func_474(uParam0, iParam2, "peek_exit_card1", func_473(uParam0, iParam2, 0), 0, 2, -1082130432);
		func_474(uParam0, iParam2, "peek_exit_card2", func_473(uParam0, iParam2, 1), 0, 2, -1082130432);
	}
}

void func_559(var uParam0, var uParam1, int iParam2)
{
	iVar0 = uParam1->f_19;
	iVar1 = uParam1->f_20;
	iVar2 = uParam1->f_21;
	if (uParam0->f_40)
	{
		func_1152(uParam0, iParam2, iVar0, iVar2, 0, func_1151(iVar1, 4), 0, 0);
		func_471(uParam0, iParam2, 1);
		return;
	}
	func_1130(uParam0, iParam2, -1921404755);
	switch (uParam1->f_9)
	{
		case 33:
			if (func_1129(uParam1, "BetBlindAnimFinished") || func_1138(uParam0, iParam2, 1))
			{
				request_task_move_network_state_transition(*uParam1, "NoCardsIdle");
				func_1133(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (func_1129(uParam1, "NoCardsIdle") || func_1129(uParam1, "HoldCardsIdle"))
			{
				func_471(uParam0, iParam2, 1);
			}
			break;
	}
	if (has_anim_event_fired(*uParam1, -131858145))
	{
		func_1152(uParam0, iParam2, iVar0, iVar2, 0, func_1151(iVar1, 4), 0, 0);
		func_474(uParam0, iParam2, "bet_blind_a_chips", func_1153(uParam0, iParam2, iVar0), 0, 2, -1082130432);
	}
}

void func_560(var uParam0, var uParam1, int iParam2)
{
	iVar0 = uParam1->f_19;
	iVar1 = uParam1->f_20;
	iVar2 = uParam1->f_21;
	if (uParam0->f_40)
	{
		func_1152(uParam0, iParam2, iVar0, iVar2, 0, func_1151(iVar1, 4), 0, 0);
		func_471(uParam0, iParam2, 1);
		return;
	}
	func_1130(uParam0, iParam2, -1921404755);
	switch (uParam1->f_9)
	{
		case 35:
			set_task_move_network_signal_float(*uParam1, "BetType", to_float(iVar0));
			if (func_1129(uParam1, "BetAnimFinished") || func_1138(uParam0, iParam2, 1))
			{
				request_task_move_network_state_transition(*uParam1, "HoldCardsIdle");
				func_1133(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (func_1129(uParam1, "NoCardsIdle") || func_1129(uParam1, "HoldCardsIdle"))
			{
				func_471(uParam0, iParam2, 1);
			}
			break;
	}
	if (has_anim_event_fired(*uParam1, 1753320602))
	{
		func_1152(uParam0, iParam2, iVar0, iVar2, 0, func_1151(iVar1, 4), 0, 0);
		func_474(uParam0, iParam2, "bet_stack_a_chips", func_1153(uParam0, iParam2, iVar0), 0, 2, -1082130432);
		func_474(uParam0, iParam2, "bet_stack_a_card1", func_473(uParam0, iParam2, 0), 4, 2, -1082130432);
		func_474(uParam0, iParam2, "bet_stack_a_card2", func_473(uParam0, iParam2, 1), 4, 2, -1082130432);
	}
	else if (has_anim_event_fired(*uParam1, -1249714093))
	{
		func_1152(uParam0, iParam2, iVar0, iVar2, 0, func_1151(iVar1, 4), 0, 0);
		func_474(uParam0, iParam2, "bet_stack_b_chips", func_1153(uParam0, iParam2, iVar0), 0, 2, -1082130432);
		func_474(uParam0, iParam2, "bet_stack_b_card1", func_473(uParam0, iParam2, 0), 4, 2, -1082130432);
		func_474(uParam0, iParam2, "bet_stack_b_card2", func_473(uParam0, iParam2, 1), 4, 2, -1082130432);
	}
	else if (has_anim_event_fired(*uParam1, 2023235118))
	{
		func_1152(uParam0, iParam2, iVar0, iVar2, 0, func_1151(iVar1, 4), 0, 0);
		func_474(uParam0, iParam2, "bet_stack_c_chips", func_1153(uParam0, iParam2, iVar0), 0, 2, -1082130432);
		func_474(uParam0, iParam2, "bet_stack_c_card1", func_473(uParam0, iParam2, 0), 4, 2, -1082130432);
		func_474(uParam0, iParam2, "bet_stack_c_card2", func_473(uParam0, iParam2, 1), 4, 2, -1082130432);
	}
	else if (has_anim_event_fired(*uParam1, -431766831))
	{
		func_1152(uParam0, iParam2, iVar0, iVar2, 0, func_1151(iVar1, 4), 0, 0);
		func_474(uParam0, iParam2, "bet_stack_d_chips", func_1153(uParam0, iParam2, iVar0), 0, 2, -1082130432);
		func_474(uParam0, iParam2, "bet_stack_d_card1", func_473(uParam0, iParam2, 0), 4, 2, -1082130432);
		func_474(uParam0, iParam2, "bet_stack_d_card2", func_473(uParam0, iParam2, 1), 4, 2, -1082130432);
	}
}

void func_561(var uParam0, var uParam1, int iParam2)
{
	Var0.f_1 = 4;
	Var0 = uParam1->f_19;
	Var0.f_1[0] = uParam1->f_20;
	Var0.f_1[1] = uParam1->f_21;
	Var0.f_1[2] = uParam1->f_22;
	Var0.f_1[3] = uParam1->f_23;
	iVar6 = uParam1->f_43;
	if (uParam0->f_40)
	{
		func_1154(uParam0, iParam2, uParam1, &Var0, 0);
		func_1155(uParam0, iParam2, uParam1, &Var0, 0);
		func_1156(uParam0, iParam2, uParam1, &Var0, 0);
		func_1157(uParam0, iParam2, uParam1, &Var0, 0);
		func_471(uParam0, iParam2, 1);
		return;
	}
	func_1130(uParam0, iParam2, -1921404755);
	switch (uParam1->f_9)
	{
		case 0:
			set_task_move_network_signal_float(*uParam1, "BetType", to_float(iVar6));
			func_1158(uParam0, iParam2, Var0, 1);
			func_1133(uParam0, iParam2, 37);
			break;
		case 37:
			set_task_move_network_signal_float(*uParam1, "BetType", to_float(iVar6));
			if (func_1129(uParam1, "BetAnimFinished") || func_1129(uParam1, "BetBlindAnimFinished"))
			{
				func_1133(uParam0, iParam2, 41);
			}
			else if ((has_anim_event_fired(*uParam1, -1634097517) || has_anim_event_fired(*uParam1, 813449677)) || has_anim_event_fired(*uParam1, 21374103))
			{
				iVar7 = func_1159(uParam0, iParam2, Var0);
				iVar8 = &uParam1->f_29[Var0];
				iVar9 = func_1160(iVar7, iVar8, 10);
				if (iVar9 > 4)
				{
					iVar9 = 4;
				}
				func_1152(uParam0, iParam2, Var0, iVar7, iVar8, iVar9, 0, 0);
				func_1161(uParam0, uParam1, iParam2, Var0);
				_0x3e93dddcbb6111e4("Game.MiniGame.OddJob.ChipValue", to_float(func_1162(iVar9, 1, 4)));
				func_1154(uParam0, iParam2, uParam1, &Var0, 0);
				func_1155(uParam0, iParam2, uParam1, &Var0, 1);
				func_1157(uParam0, iParam2, uParam1, &Var0, 1);
				func_1133(uParam0, iParam2, 40);
			}
			break;
		case 40:
			set_task_move_network_signal_float(*uParam1, "BetType", to_float(iVar6));
			if ((func_1129(uParam1, "BetAnimFinished") || func_1129(uParam1, "BetBlindAnimFinished")) || func_1138(uParam0, iParam2, 1))
			{
				if (func_455(uParam0, iParam2) == 2)
				{
					request_task_move_network_state_transition(*uParam1, "HoldCardsIdle");
				}
				else
				{
					request_task_move_network_state_transition(*uParam1, "NoCardsIdle");
				}
				func_1133(uParam0, iParam2, 1);
			}
			break;
		case 41:
			func_1154(uParam0, iParam2, uParam1, &Var0, 1);
			func_1155(uParam0, iParam2, uParam1, &Var0, 1);
			func_1157(uParam0, iParam2, uParam1, &Var0, 1);
			func_1156(uParam0, iParam2, uParam1, &Var0, 1);
			if (func_455(uParam0, iParam2) == 2)
			{
				request_task_move_network_state_transition(*uParam1, "HoldCardsIdle");
			}
			else
			{
				request_task_move_network_state_transition(*uParam1, "NoCardsIdle");
			}
			func_1133(uParam0, iParam2, 1);
			break;
		case 1:
			if (func_1129(uParam1, "NoCardsIdle") || func_1129(uParam1, "HoldCardsIdle"))
			{
				func_471(uParam0, iParam2, 1);
			}
			break;
	}
	if (has_anim_event_fired(*uParam1, 1753320602))
	{
		func_474(uParam0, iParam2, "bet_stack_a_card1", func_473(uParam0, iParam2, 0), 4, 2, -1082130432);
		func_474(uParam0, iParam2, "bet_stack_a_card2", func_473(uParam0, iParam2, 1), 4, 2, -1082130432);
	}
	else if (has_anim_event_fired(*uParam1, -1249714093))
	{
		func_474(uParam0, iParam2, "bet_stack_b_card1", func_473(uParam0, iParam2, 0), 4, 2, -1082130432);
		func_474(uParam0, iParam2, "bet_stack_b_card2", func_473(uParam0, iParam2, 1), 4, 2, -1082130432);
	}
	else if (has_anim_event_fired(*uParam1, 2023235118))
	{
		func_474(uParam0, iParam2, "bet_stack_c_card1", func_473(uParam0, iParam2, 0), 4, 2, -1082130432);
		func_474(uParam0, iParam2, "bet_stack_c_card2", func_473(uParam0, iParam2, 1), 4, 2, -1082130432);
	}
	else if (has_anim_event_fired(*uParam1, -431766831))
	{
		func_474(uParam0, iParam2, "bet_stack_d_card1", func_473(uParam0, iParam2, 0), 4, 2, -1082130432);
		func_474(uParam0, iParam2, "bet_stack_d_card2", func_473(uParam0, iParam2, 1), 4, 2, -1082130432);
	}
}

void func_562(var uParam0, var uParam1, int iParam2)
{
	func_1163(uParam0, iParam2, "NEW", "BET_ADVANCED");
	func_1164(uParam0, iParam2, "NEW", 0);
}

void func_563(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_40)
	{
		iVar2 = 0;
		while (iVar2 < 4)
		{
			if (func_1165(uParam0, iParam2, iVar2))
			{
				iVar0 = func_1159(uParam0, iParam2, iVar2);
				iVar1 = func_1166(uParam0, iParam2, iVar2);
				func_1167(uParam0, iParam2, iVar2, iVar0, iVar1, func_1160(iVar0, iVar1, 10), 0, 0);
			}
			iVar2++;
		}
		func_471(uParam0, iParam2, 1);
		return;
	}
	func_1130(uParam0, iParam2, -1921404755);
	switch (uParam1->f_9)
	{
		case 34:
			set_task_move_network_signal_float(*uParam1, "BetType", to_float(4));
			if (func_1129(uParam1, "BetAnimFinished") || func_1138(uParam0, iParam2, 1))
			{
				request_task_move_network_state_transition(*uParam1, "HoldCardsIdle");
				func_1133(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (func_1129(uParam1, "HoldCardsIdle"))
			{
				func_471(uParam0, iParam2, 1);
			}
			break;
	}
	if (has_anim_event_fired(*uParam1, 727682306))
	{
		func_474(uParam0, iParam2, "bet_all_card1", func_473(uParam0, iParam2, 0), 4, 2, -1082130432);
		func_474(uParam0, iParam2, "bet_all_card2", func_473(uParam0, iParam2, 1), 4, 2, -1082130432);
		func_474(uParam0, iParam2, "bet_all_bank_01", func_1168(uParam0, iParam2, 0), 0, 2, -1082130432);
		func_474(uParam0, iParam2, "bet_all_bank_02", func_1168(uParam0, iParam2, 1), 0, 2, -1082130432);
		func_474(uParam0, iParam2, "bet_all_bank_03", func_1168(uParam0, iParam2, 2), 0, 2, -1082130432);
		func_474(uParam0, iParam2, "bet_all_bank_05", func_1168(uParam0, iParam2, 3), 0, 2, -1082130432);
	}
}

void func_564(var uParam0, var uParam1, int iParam2)
{
	iVar0 = uParam1->f_19;
	if (uParam0->f_40)
	{
		func_471(uParam0, iParam2, 1);
		return;
	}
	switch (uParam1->f_9)
	{
		case 0:
			func_1130(uParam0, iParam2, -1921404755);
			set_task_move_network_signal_float(&(uParam0->f_818[iParam2]), "CheckType", to_float(iVar0));
			if (func_1129(uParam1, "CheckAnimFinished") || func_1138(uParam0, iParam2, 1))
			{
				request_task_move_network_state_transition(*uParam1, "HoldCardsIdle");
				func_1133(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (func_1129(uParam1, "HoldCardsIdle"))
			{
				func_471(uParam0, iParam2, 1);
			}
			break;
	}
	if (has_anim_event_fired(*uParam1, -1798862211))
	{
		func_474(uParam0, iParam2, "check_a_card1", func_473(uParam0, iParam2, 0), 0, 2, -1082130432);
		func_474(uParam0, iParam2, "check_a_card2", func_473(uParam0, iParam2, 1), 0, 2, -1082130432);
	}
	else if (has_anim_event_fired(*uParam1, 1444041649))
	{
		func_474(uParam0, iParam2, "check_b_card1", func_473(uParam0, iParam2, 0), 0, 2, -1082130432);
		func_474(uParam0, iParam2, "check_b_card2", func_473(uParam0, iParam2, 1), 0, 2, -1082130432);
	}
	else if (has_anim_event_fired(*uParam1, -1739656056))
	{
		func_474(uParam0, iParam2, "check_c_card1", func_473(uParam0, iParam2, 0), 0, 2, -1082130432);
		func_474(uParam0, iParam2, "check_c_card2", func_473(uParam0, iParam2, 1), 0, 2, -1082130432);
	}
}

void func_565(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_40)
	{
		if (func_1169(uParam0, iParam2))
		{
			func_476(uParam0, iParam2, 0);
			func_471(uParam0, iParam2, 1);
		}
		return;
	}
	switch (uParam1->f_9)
	{
		case 45:
			if (func_1169(uParam0, iParam2))
			{
				set_task_move_network_signal_float(*uParam1, "WinLossType", to_float(uParam1->f_41));
				set_task_move_network_signal_float(*uParam1, "VariationType", to_float(uParam1->f_43));
				request_task_move_network_state_transition(*uParam1, "Reveal");
				func_1133(uParam0, iParam2, 46);
			}
			break;
		case 46:
			if (func_1130(uParam0, iParam2, -1921404755))
			{
				func_1134(uParam0, iParam2);
			}
			set_task_move_network_signal_float(*uParam1, "WinLossType", to_float(uParam1->f_41));
			set_task_move_network_signal_float(*uParam1, "VariationType", to_float(uParam1->f_43));
			if (func_1129(uParam1, "RevealAnimFinished") || func_1138(uParam0, iParam2, 1))
			{
				func_476(uParam0, iParam2, 0);
				request_task_move_network_state_transition(*uParam1, "NoCardsIdle");
				func_1133(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (func_1129(uParam1, "NoCardsIdle"))
			{
				func_471(uParam0, iParam2, 1);
			}
			break;
	}
	if (has_anim_event_fired(*uParam1, 2347088))
	{
		func_1037(uParam0, iParam2, 3, 0, 1);
		switch (uParam1->f_41)
		{
			case 0:
				if (uParam1->f_43 == 0)
				{
					func_474(uParam0, iParam2, "reveal_win_a_card1", func_473(uParam0, iParam2, 0), 0, 2, -1082130432);
					func_474(uParam0, iParam2, "reveal_win_a_card2", func_473(uParam0, iParam2, 1), 0, 2, -1082130432);
				}
				else if (uParam1->f_43 == 1)
				{
					func_474(uParam0, iParam2, "reveal_win_b_card1", func_473(uParam0, iParam2, 0), 0, 2, -1082130432);
					func_474(uParam0, iParam2, "reveal_win_b_card2", func_473(uParam0, iParam2, 1), 0, 2, -1082130432);
				}
				else if (uParam1->f_43 == 2)
				{
					func_474(uParam0, iParam2, "reveal_win_c_card1", func_473(uParam0, iParam2, 0), 0, 2, -1082130432);
					func_474(uParam0, iParam2, "reveal_win_c_card2", func_473(uParam0, iParam2, 1), 0, 2, -1082130432);
				}
				break;
			case 1:
				if (uParam1->f_43 == 0)
				{
					func_474(uParam0, iParam2, "reveal_loss_a_card1", func_473(uParam0, iParam2, 0), 0, 2, -1082130432);
					func_474(uParam0, iParam2, "reveal_loss_a_card2", func_473(uParam0, iParam2, 1), 0, 2, -1082130432);
				}
				else if (uParam1->f_43 == 1)
				{
					func_474(uParam0, iParam2, "reveal_loss_b_card1", func_473(uParam0, iParam2, 0), 0, 2, -1082130432);
					func_474(uParam0, iParam2, "reveal_loss_b_card2", func_473(uParam0, iParam2, 1), 0, 2, -1082130432);
				}
				else if (uParam1->f_43 == 2)
				{
					func_474(uParam0, iParam2, "reveal_loss_c_card1", func_473(uParam0, iParam2, 0), 0, 2, -1082130432);
					func_474(uParam0, iParam2, "reveal_loss_c_card2", func_473(uParam0, iParam2, 1), 0, 2, -1082130432);
				}
				break;
			case 2:
				func_474(uParam0, iParam2, "reveal_card1", func_473(uParam0, iParam2, 0), 0, 2, -1082130432);
				func_474(uParam0, iParam2, "reveal_card2", func_473(uParam0, iParam2, 1), 0, 2, -1082130432);
				break;
		}
	}
}

void func_566(var uParam0, var uParam1, int iParam2)
{
	func_1134(uParam0, iParam2);
}

void func_567(var uParam0, var uParam1, int iParam2)
{
	iVar0 = uParam1->f_19;
	if (uParam0->f_40)
	{
		func_476(uParam0, iParam2, 0);
		func_471(uParam0, iParam2, 1);
		return;
	}
	switch (uParam1->f_9)
	{
		case 47:
			set_task_move_network_signal_float(*uParam1, "WinLossType", to_float(uParam1->f_41));
			set_task_move_network_signal_float(*uParam1, "ReturnCardType", to_float(iVar0));
			if (((func_1129(uParam1, "ReturnRevealEnterAnimFinished") || func_1129(uParam1, "ReturnEnterHoldCardsAnimFinished")) || func_1170(uParam0, iParam2, 1842457532, 1)) || func_1170(uParam0, iParam2, 1426724047, 1))
			{
				request_task_move_network_state_transition(*uParam1, "ReturnCards");
				func_1133(uParam0, iParam2, 48);
			}
			break;
		case 48:
			if (func_1130(uParam0, iParam2, -1921404755))
			{
				func_1134(uParam0, iParam2);
			}
			set_task_move_network_signal_float(*uParam1, "WinLossType", to_float(uParam1->f_41));
			set_task_move_network_signal_float(*uParam1, "ReturnCardType", to_float(iVar0));
			if (func_1129(uParam1, "ReturnCardsAnimFinished") || func_1138(uParam0, iParam2, 1))
			{
				func_476(uParam0, iParam2, 0);
				request_task_move_network_state_transition(*uParam1, "NoCardsIdle");
				func_1133(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (func_1129(uParam1, "NoCardsIdle"))
			{
				func_471(uParam0, iParam2, 1);
			}
			break;
	}
	if (has_anim_event_fired(*uParam1, 1317959855))
	{
		func_474(uParam0, iParam2, "return_enter_hold_cards_card1", func_473(uParam0, iParam2, 0), 0, 2, -1082130432);
		func_474(uParam0, iParam2, "return_enter_hold_cards_card2", func_473(uParam0, iParam2, 1), 0, 2, -1082130432);
	}
	else if (has_anim_event_fired(*uParam1, -1257930565))
	{
		func_474(uParam0, iParam2, "return_reveal_enter_card1", func_473(uParam0, iParam2, 0), 0, 2, -1082130432);
		func_474(uParam0, iParam2, "return_reveal_enter_card2", func_473(uParam0, iParam2, 1), 0, 2, -1082130432);
	}
	else if (has_anim_event_fired(*uParam1, -1911579200))
	{
		func_474(uParam0, iParam2, "return_fold_enter_card1", func_473(uParam0, iParam2, 0), 0, 2, -1082130432);
		func_474(uParam0, iParam2, "return_fold_enter_card2", func_473(uParam0, iParam2, 1), 0, 2, -1082130432);
	}
	else if (has_anim_event_fired(*uParam1, -173534072))
	{
		func_474(uParam0, iParam2, "return_1_card1", func_473(uParam0, iParam2, 0), 0, 2, -1082130432);
		func_474(uParam0, iParam2, "return_1_card2", func_473(uParam0, iParam2, 1), 0, 2, -1082130432);
	}
	else if (has_anim_event_fired(*uParam1, -1540636))
	{
		func_474(uParam0, iParam2, "return_2_card1", func_473(uParam0, iParam2, 0), 0, 2, -1082130432);
		func_474(uParam0, iParam2, "return_2_card2", func_473(uParam0, iParam2, 1), 0, 2, -1082130432);
	}
	else if (has_anim_event_fired(*uParam1, 693530283))
	{
		func_474(uParam0, iParam2, "return_3_card1", func_473(uParam0, iParam2, 0), 0, 2, -1082130432);
		func_474(uParam0, iParam2, "return_3_card2", func_473(uParam0, iParam2, 1), 0, 2, -1082130432);
	}
	else if (has_anim_event_fired(*uParam1, 2123629490))
	{
		func_474(uParam0, iParam2, "return_4_card1", func_473(uParam0, iParam2, 0), 0, 2, -1082130432);
		func_474(uParam0, iParam2, "return_4_card2", func_473(uParam0, iParam2, 1), 0, 2, -1082130432);
	}
	else if (has_anim_event_fired(*uParam1, 595740131))
	{
		func_474(uParam0, iParam2, "return_5_card1", func_473(uParam0, iParam2, 0), 0, 2, -1082130432);
		func_474(uParam0, iParam2, "return_5_card2", func_473(uParam0, iParam2, 1), 0, 2, -1082130432);
	}
	else if (has_anim_event_fired(*uParam1, -252921886))
	{
		func_474(uParam0, iParam2, "return_6_card1", func_473(uParam0, iParam2, 0), 0, 2, -1082130432);
		func_474(uParam0, iParam2, "return_6_card2", func_473(uParam0, iParam2, 1), 0, 2, -1082130432);
	}
}

void func_568(var uParam0, var uParam1, int iParam2)
{
	func_1134(uParam0, iParam2);
}

void func_569(var uParam0, var uParam1, int iParam2)
{
	iVar0 = uParam1->f_19;
	bVar1 = is_bit_set(uParam1->f_20, 0);
	if (uParam0->f_40)
	{
		func_855(uParam0, iParam2, iVar0, 0);
		func_789(uParam0, 0);
		func_790(uParam0, 0);
		func_471(uParam0, iParam2, 1);
		return;
	}
	switch (uParam1->f_9)
	{
		case 42:
			if ((func_610(uParam0, iParam2, 4, 1) || func_610(uParam0, iParam2, 5, 1)) || func_610(uParam0, iParam2, 3, 1))
			{
				iVar3 = 2;
			}
			else if (func_610(uParam0, iParam2, 1, 1))
			{
				iVar3 = 1;
			}
			else
			{
				iVar3 = 0;
			}
			if (func_1171(uParam0, iVar3))
			{
				func_1172(uParam0, iParam2, iVar3);
				func_1133(uParam0, iParam2, 44);
			}
			break;
		case 44:
			if (!func_603(uParam0, iParam2, 0))
			{
				if (func_1173(uParam0, iParam2) && func_1174(uParam0, iParam2))
				{
					func_1137(uParam0, iParam2, 0);
				}
			}
			if (!func_603(uParam0, iParam2, 1))
			{
				if (func_1175(uParam0, iParam2) || ((!uParam0->f_39 && func_603(uParam0, iParam2, 0)) && !func_1174(uParam0, iParam2)))
				{
					func_1147(uParam0, iParam2);
					bVar2 = (uParam0->f_39 || !func_603(uParam0, iParam2, 0));
					func_855(uParam0, iParam2, iVar0, bVar2);
					if (!bVar1)
					{
						func_789(uParam0, bVar2);
						func_790(uParam0, bVar2);
					}
					else
					{
						func_1176(uParam0, iParam2, bVar2);
					}
					func_1137(uParam0, iParam2, 1);
				}
			}
			if (func_1175(uParam0, iParam2) || (func_1177(uParam0, iParam2) && func_1138(uParam0, iParam2, 0)))
			{
				func_472(uParam0, iParam2, "NoCardsIdleRequest", 0.5f);
				func_1133(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (func_1129(uParam1, "NoCardsIdle"))
			{
				func_1081(uParam0, iParam2);
				func_471(uParam0, iParam2, 1);
			}
			break;
	}
}

void func_570(var uParam0, var uParam1, int iParam2)
{
	func_1081(uParam0, iParam2);
	func_1140(uParam0, iParam2, 0);
}

void func_571(var uParam0, var uParam1, int iParam2)
{
	iVar2 = uParam1->f_19;
	bVar3 = is_bit_set(uParam1->f_20, 0);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uVar4[iVar0] = &uParam0->f_818[iParam2]->f_34[iVar0];
		iVar0++;
	}
	if (uParam0->f_40)
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (is_bit_set(iVar2, iVar0) || iVar0 == iParam2)
			{
				func_855(uParam0, iVar0, &(uVar4[iVar0]), 0);
			}
			iVar0++;
		}
		func_789(uParam0, 0);
		func_790(uParam0, 0);
		func_471(uParam0, iParam2, 1);
		return;
	}
	switch (uParam1->f_9)
	{
		case 42:
			if (func_1171(uParam0, 3))
			{
				func_1179(uParam0, 3, func_1178(iParam2, iVar2));
				func_1133(uParam0, iParam2, 43);
			}
			break;
		case 43:
			if (func_1180(uParam0, 3, func_1178(iParam2, iVar2)))
			{
				iVar0 = 0;
				while (iVar0 < 6)
				{
					if (is_bit_set(iVar2, iVar0) && iVar0 != iParam2)
					{
						if (func_210(uParam0, iVar0))
						{
							func_846(uParam0, iVar0, 0);
							func_1181(uParam0, iVar0, iParam2);
						}
					}
					iVar0++;
				}
				func_1182(uParam0, 3, func_1178(iParam2, iVar2));
				func_1183(uParam0, iParam2, iVar2);
				func_1133(uParam0, iParam2, 44);
			}
			break;
		case 44:
			if (!func_603(uParam0, iParam2, 0))
			{
				if (func_1173(uParam0, iParam2) && func_1174(uParam0, iParam2))
				{
					func_1137(uParam0, iParam2, 0);
				}
			}
			if (!func_603(uParam0, iParam2, 1))
			{
				if ((func_1175(uParam0, iParam2) || ((!uParam0->f_39 && func_603(uParam0, iParam2, 0)) && !func_1174(uParam0, iParam2))) || func_1184(uParam0, iParam2, iParam2))
				{
					func_1147(uParam0, iParam2);
					bVar1 = (uParam0->f_39 || !func_603(uParam0, iParam2, 0));
					iVar0 = 0;
					while (iVar0 < 6)
					{
						if (is_bit_set(iVar2, iVar0))
						{
							func_855(uParam0, iVar0, &(uVar4[iVar0]), bVar1);
						}
						iVar0++;
					}
					if (!bVar3)
					{
						func_789(uParam0, bVar1);
						func_790(uParam0, bVar1);
					}
					else
					{
						func_1176(uParam0, iParam2, bVar1);
					}
					func_1137(uParam0, iParam2, 1);
				}
			}
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (is_bit_set(iVar2, iVar0) && iVar0 != iParam2)
				{
					if (func_210(uParam0, iVar0) && func_1185(uParam0, iVar0, iParam2))
					{
						if (func_1184(uParam0, iVar0, iParam2))
						{
							func_1186(uParam0, iVar0, iParam2);
							func_218(uParam0, iVar0, 1, 0);
						}
					}
				}
				iVar0++;
			}
			if (func_1175(uParam0, iParam2) || func_1184(uParam0, iParam2, iParam2))
			{
				func_472(uParam0, iParam2, "NoCardsIdleRequest", 0.5f);
				func_1133(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (func_1129(uParam1, "NoCardsIdle"))
			{
				func_1081(uParam0, iParam2);
				func_471(uParam0, iParam2, 1);
			}
			break;
	}
}

void func_572(var uParam0, var uParam1, int iParam2)
{
	iVar0 = uParam1->f_19;
	func_1081(uParam0, iParam2);
	func_1140(uParam0, iParam2, 0);
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (is_bit_set(iVar0, iVar1) && iVar1 != iParam2)
		{
			if (func_210(uParam0, iVar1))
			{
				if (uParam0->f_818[iVar1]->f_50)
				{
					func_846(uParam0, iVar1, 0);
				}
				else if (func_1185(uParam0, iVar1, iParam2))
				{
					func_1186(uParam0, iVar1, iParam2);
					func_218(uParam0, iVar1, 1, 0);
				}
			}
		}
		iVar1++;
	}
}

void func_573(var uParam0, var uParam1, int iParam2)
{
	bVar0 = is_bit_set(uParam0->f_818[iParam2]->f_19, 0);
	bVar1 = is_bit_set(uParam0->f_818[iParam2]->f_19, 1);
	iVar2 = uParam0->f_818[iParam2]->f_20;
	if (uParam0->f_40)
	{
		func_471(uParam0, iParam2, 1);
		return;
	}
	switch (uParam1->f_9)
	{
		case 49:
			if (!bVar0)
			{
				func_1130(uParam0, iParam2, -1921404755);
			}
			if (func_1129(uParam1, "BoardReturnRevealAnimFinished"))
			{
				iVar3 = 0;
				while (iVar3 < 6)
				{
					func_462(uParam0, iVar3);
					iVar3++;
				}
				func_463(uParam0, 0);
				func_463(uParam0, 1);
				func_463(uParam0, 2);
				func_463(uParam0, 3);
				func_463(uParam0, 4);
				if (bVar0)
				{
					request_task_move_network_state_transition(*uParam1, "BoardReturnToPass");
					set_task_move_network_signal_float(*uParam1, "PassDeckType", to_float(iVar2));
					func_1133(uParam0, iParam2, 51);
				}
				else
				{
					request_task_move_network_state_transition(*uParam1, "BoardReturnExit");
					func_1133(uParam0, iParam2, 53);
				}
			}
			break;
		case 51:
			set_task_move_network_signal_float(*uParam1, "PassDeckType", to_float(iVar2));
			if (get_task_move_network_event(*uParam1, "PassDeck"))
			{
				func_1137(uParam0, iParam2, 0);
				func_1133(uParam0, iParam2, 52);
			}
			break;
		case 52:
			func_1130(uParam0, iParam2, -1921404755);
			set_task_move_network_signal_float(*uParam1, "PassDeckType", to_float(iVar2));
			if (func_1129(uParam1, "PassDeckAnimFinished") || func_1138(uParam0, iParam2, 1))
			{
				request_task_move_network_state_transition(*uParam1, "NoCardsIdle");
				func_1133(uParam0, iParam2, 1);
			}
			break;
		case 53:
			func_1130(uParam0, iParam2, -1921404755);
			if (func_1129(uParam1, "BoardReturnExitAnimFinished") || func_1138(uParam0, iParam2, 1))
			{
				request_task_move_network_state_transition(*uParam1, "NoCardsIdle");
				func_1133(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (func_1129(uParam1, "NoCardsIdle"))
			{
				func_471(uParam0, iParam2, 1);
			}
			break;
	}
	if (has_anim_event_fired(*uParam1, -1121191546))
	{
		if (func_778(uParam0, iParam2))
		{
			if (!bVar1)
			{
				func_474(uParam0, iParam2, "board_return_reveal_card1", func_473(uParam0, iParam2, 0), 0, 2, -1082130432);
				func_474(uParam0, iParam2, "board_return_reveal_card2", func_473(uParam0, iParam2, 1), 0, 2, -1082130432);
			}
		}
		if (func_983(uParam0, 0))
		{
			func_474(uParam0, iParam2, "board_return_reveal_card3", func_1150(uParam0, 0), 0, 2, -1082130432);
		}
		if (func_983(uParam0, 1))
		{
			func_474(uParam0, iParam2, "board_return_reveal_card4", func_1150(uParam0, 1), 0, 2, -1082130432);
		}
		if (func_983(uParam0, 2))
		{
			func_474(uParam0, iParam2, "board_return_reveal_card5", func_1150(uParam0, 2), 0, 2, -1082130432);
		}
		if (func_983(uParam0, 3))
		{
			func_474(uParam0, iParam2, "board_return_reveal_card6", func_1150(uParam0, 3), 0, 2, -1082130432);
		}
		if (func_983(uParam0, 4))
		{
			func_474(uParam0, iParam2, "board_return_reveal_card7", func_1150(uParam0, 4), 0, 2, -1082130432);
		}
		iVar4 = 0;
		while (iVar4 < 6)
		{
			if (iVar4 != iParam2 || bVar1)
			{
				if (func_778(uParam0, iVar4))
				{
					func_474(uParam0, iParam2, "board_return_reveal_card8", func_473(uParam0, iVar4, 0), 0, 2, -1082130432);
					func_474(uParam0, iParam2, "board_return_reveal_card9", func_473(uParam0, iVar4, 1), 0, 2, -1082130432);
				}
			}
			iVar4++;
		}
	}
	else if (has_anim_event_fired(*uParam1, 637998928))
	{
		func_474(uParam0, iParam2, "pass_deck_1_deck", func_1148(uParam0), 0, 2, -1082130432);
	}
	else if (has_anim_event_fired(*uParam1, 1482447871))
	{
		func_474(uParam0, iParam2, "pass_deck_2_deck", func_1148(uParam0), 0, 2, -1082130432);
	}
	else if (has_anim_event_fired(*uParam1, 66477882))
	{
		func_474(uParam0, iParam2, "pass_deck_3_deck", func_1148(uParam0), 0, 2, -1082130432);
	}
	else if (has_anim_event_fired(*uParam1, 2130775593))
	{
		func_474(uParam0, iParam2, "pass_deck_4_deck", func_1148(uParam0), 0, 2, -1082130432);
	}
	else if (has_anim_event_fired(*uParam1, -2138078509))
	{
		func_474(uParam0, iParam2, "pass_deck_5_deck", func_1148(uParam0), 0, 2, -1082130432);
	}
}

void func_574(var uParam0, var uParam1, int iParam2)
{
	iVar0 = uParam1->f_19;
	if (uParam0->f_40)
	{
		func_471(uParam0, iParam2, 1);
		return;
	}
	switch (uParam1->f_9)
	{
		case 54:
			set_task_move_network_signal_float(*uParam1, "PassDeckType", to_float(iVar0));
			if (get_task_move_network_event(*uParam1, "PassDeck"))
			{
				func_1133(uParam0, iParam2, 55);
			}
			break;
		case 55:
			func_1130(uParam0, iParam2, -1921404755);
			set_task_move_network_signal_float(*uParam1, "PassDeckType", to_float(iVar0));
			if (func_1129(uParam1, "PassDeckAnimFinished") || func_1138(uParam0, iParam2, 1))
			{
				request_task_move_network_state_transition(*uParam1, "NoCardsIdle");
				func_1133(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (func_1129(uParam1, "NoCardsIdle"))
			{
				func_471(uParam0, iParam2, 1);
			}
			break;
	}
	if (has_anim_event_fired(*uParam1, 1157265058))
	{
		func_474(uParam0, iParam2, "pass_deck_enter_deck", func_1148(uParam0), 0, 2, -1082130432);
	}
	else if (has_anim_event_fired(*uParam1, 637998928))
	{
		func_474(uParam0, iParam2, "pass_deck_1_deck", func_1148(uParam0), 0, 2, -1082130432);
	}
	else if (has_anim_event_fired(*uParam1, 1482447871))
	{
		func_474(uParam0, iParam2, "pass_deck_2_deck", func_1148(uParam0), 0, 2, -1082130432);
	}
	else if (has_anim_event_fired(*uParam1, 66477882))
	{
		func_474(uParam0, iParam2, "pass_deck_3_deck", func_1148(uParam0), 0, 2, -1082130432);
	}
	else if (has_anim_event_fired(*uParam1, 2130775593))
	{
		func_474(uParam0, iParam2, "pass_deck_4_deck", func_1148(uParam0), 0, 2, -1082130432);
	}
	else if (has_anim_event_fired(*uParam1, -2138078509))
	{
		func_474(uParam0, iParam2, "pass_deck_5_deck", func_1148(uParam0), 0, 2, -1082130432);
	}
}

void func_575(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_40)
	{
		func_471(uParam0, iParam2, 1);
		return;
	}
	switch (uParam1->f_9)
	{
		case 56:
			if (func_1129(uParam1, "ReceiveDeckEnterNoCardsAnimFinished"))
			{
				request_task_move_network_state_transition(*uParam1, "ReceiveDeck");
				func_1133(uParam0, iParam2, 57);
			}
			break;
		case 57:
			func_1130(uParam0, iParam2, -1921404755);
			if (get_task_move_network_event(*uParam1, "ReceiveDeckExitNoCards"))
			{
				func_1133(uParam0, iParam2, 58);
			}
			break;
		case 58:
			func_1130(uParam0, iParam2, -1921404755);
			if (func_1129(uParam1, "ReceiveDeckExitNoCardsAnimFinished") || func_1138(uParam0, iParam2, 1))
			{
				request_task_move_network_state_transition(*uParam1, "NoCardsIdle");
				func_1133(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (func_1129(uParam1, "NoCardsIdle"))
			{
				func_471(uParam0, iParam2, 1);
			}
			break;
	}
	if (has_anim_event_fired(*uParam1, -1258893207))
	{
		func_474(uParam0, iParam2, "receive_deck_enter_no_cards_deck", func_1148(uParam0), 0, 2, -1082130432);
	}
	else if (has_anim_event_fired(*uParam1, -854598449))
	{
		func_474(uParam0, iParam2, "receive_deck_deck", func_1148(uParam0), 0, 2, -1082130432);
	}
	else if (has_anim_event_fired(*uParam1, -698177614))
	{
		func_474(uParam0, iParam2, "receive_deck_exit_no_cards_deck", func_1148(uParam0), 0, 2, -1082130432);
	}
}

void func_576(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_40)
	{
		if (uParam1->f_9 == 60)
		{
			func_458(uParam0, iParam2, 0);
		}
		func_471(uParam0, iParam2, 1);
		return;
	}
	switch (uParam1->f_9)
	{
		case 59:
			if (func_1130(uParam0, iParam2, -1921404755))
			{
				func_1134(uParam0, iParam2);
			}
			if (func_1129(uParam1, "MoodEnterHoldCardsAnimFinished") || func_1138(uParam0, iParam2, 1))
			{
				request_task_move_network_state_transition(*uParam1, "HoldCardsIdle");
				func_1133(uParam0, iParam2, 1);
			}
			break;
		case 60:
			if (func_1130(uParam0, iParam2, -1921404755))
			{
				func_1134(uParam0, iParam2);
			}
			if (func_1129(uParam1, "MoodExitHoldCardsAnimFinished") || func_1138(uParam0, iParam2, 1))
			{
				func_458(uParam0, iParam2, 0);
				request_task_move_network_state_transition(*uParam1, "HoldCardsIdle");
				func_1133(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (func_1129(uParam1, "HoldCardsIdle"))
			{
				func_471(uParam0, iParam2, 1);
			}
			break;
	}
	if (has_anim_event_fired(*uParam1, 827336758))
	{
		func_474(uParam0, iParam2, "mood_enter_hold_cards_card1", func_473(uParam0, iParam2, 0), 0, 2, -1082130432);
		func_474(uParam0, iParam2, "mood_enter_hold_cards_card2", func_473(uParam0, iParam2, 1), 0, 2, -1082130432);
	}
	else if (has_anim_event_fired(*uParam1, -13143479))
	{
		func_474(uParam0, iParam2, "mood_exit_hold_cards_card1", func_473(uParam0, iParam2, 0), 0, 2, -1082130432);
		func_474(uParam0, iParam2, "mood_exit_hold_cards_card2", func_473(uParam0, iParam2, 1), 0, 2, -1082130432);
	}
}

void func_577(var uParam0, var uParam1, int iParam2)
{
	func_1134(uParam0, iParam2);
}

void func_578(var uParam0, var uParam1, int iParam2)
{
	iVar0 = uParam0->f_818[iParam2]->f_19;
	iVar1 = uParam0->f_818[iParam2]->f_20;
	if (uParam0->f_40)
	{
		func_458(uParam0, iParam2, iVar1);
		func_471(uParam0, iParam2, 1);
		return;
	}
	switch (uParam1->f_9)
	{
		case 0:
			if (((iVar0 != 1 && iVar1 != 1) && iVar0 != 4) && iVar1 != 4)
			{
				func_458(uParam0, iParam2, iVar1);
				func_471(uParam0, iParam2, 1);
				return;
			}
			if (func_1129(uParam1, "ClipsetTransBaseAnimFinished") || func_1138(uParam0, iParam2, 1))
			{
				func_458(uParam0, iParam2, iVar1);
				request_task_move_network_state_transition(*uParam1, "NoCardsIdle");
				func_1133(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (func_1129(uParam1, "NoCardsIdle"))
			{
				func_471(uParam0, iParam2, 1);
			}
			break;
	}
}

void func_579(var uParam0, var uParam1, int iParam2)
{
	func_1134(uParam0, iParam2);
}

void func_580(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_40)
	{
		func_471(uParam0, iParam2, 1);
		return;
	}
	switch (uParam1->f_9)
	{
		case 0:
			func_1130(uParam0, iParam2, -1921404755);
			set_task_move_network_signal_float(*uParam1, "WinLossType", to_float(uParam1->f_41));
			set_task_move_network_signal_float(*uParam1, "IntensityType", to_float(uParam1->f_42));
			set_task_move_network_signal_float(*uParam1, "VariationType", to_float(uParam1->f_43));
			if (func_1129(uParam1, "ExpressAnimFinished") || func_1138(uParam0, iParam2, 1))
			{
				request_task_move_network_state_transition(*uParam1, "NoCardsIdle");
				func_1133(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (func_1129(uParam1, "NoCardsIdle"))
			{
				func_471(uParam0, iParam2, 1);
			}
			break;
	}
}

void func_581(var uParam0, var uParam1, int iParam2)
{
	func_1134(uParam0, iParam2);
}

void func_582(var uParam0, var uParam1, int iParam2)
{
	bVar0 = uParam0->f_818[iParam2]->f_42 == false;
	iVar1 = uParam0->f_818[iParam2]->f_43;
	if (uParam0->f_40)
	{
		func_471(uParam0, iParam2, 1);
		return;
	}
	switch (uParam1->f_9)
	{
		case 0:
			func_1130(uParam0, iParam2, -1921404755);
			set_task_move_network_signal_float(&(uParam0->f_818[iParam2]), "CheckType", to_float(iVar1));
			if (uParam1->f_1 == 2)
			{
				if (func_1129(uParam1, "FidgetHoldCardsAnimFinished") || func_1138(uParam0, iParam2, 1))
				{
					request_task_move_network_state_transition(*uParam1, "HoldCardsIdle");
					func_1133(uParam0, iParam2, 1);
				}
			}
			else if (func_1129(uParam1, "FidgetNoCardsAnimFinished") || func_1138(uParam0, iParam2, 1))
			{
				request_task_move_network_state_transition(*uParam1, "NoCardsIdle");
				func_1133(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (func_1129(uParam1, "HoldCardsIdle") || func_1129(uParam1, "NoCardsIdle"))
			{
				func_471(uParam0, iParam2, 1);
			}
			break;
	}
	if (bVar0)
	{
		if (has_anim_event_fired(*uParam1, 953493909))
		{
			func_474(uParam0, iParam2, "HOLD_CARDS_IDLE_SUBTLE_A_card1", func_473(uParam0, iParam2, 0), 4, 2, -1082130432);
			func_474(uParam0, iParam2, "HOLD_CARDS_IDLE_SUBTLE_A_card2", func_473(uParam0, iParam2, 1), 4, 2, -1082130432);
		}
		else if (has_anim_event_fired(*uParam1, 813983831))
		{
			func_474(uParam0, iParam2, "HOLD_CARDS_IDLE_SUBTLE_B_card1", func_473(uParam0, iParam2, 0), 4, 2, -1082130432);
			func_474(uParam0, iParam2, "HOLD_CARDS_IDLE_SUBTLE_B_card2", func_473(uParam0, iParam2, 1), 4, 2, -1082130432);
		}
		else if (has_anim_event_fired(*uParam1, 1823711918))
		{
			func_474(uParam0, iParam2, "HOLD_CARDS_IDLE_SUBTLE_C_card1", func_473(uParam0, iParam2, 0), 4, 2, -1082130432);
			func_474(uParam0, iParam2, "HOLD_CARDS_IDLE_SUBTLE_C_card2", func_473(uParam0, iParam2, 1), 4, 2, -1082130432);
		}
		else if (has_anim_event_fired(*uParam1, -1179453188))
		{
			func_474(uParam0, iParam2, "HOLD_CARDS_IDLE_SUBTLE_D_card1", func_473(uParam0, iParam2, 0), 4, 2, -1082130432);
			func_474(uParam0, iParam2, "HOLD_CARDS_IDLE_SUBTLE_D_card2", func_473(uParam0, iParam2, 1), 4, 2, -1082130432);
		}
		else if (has_anim_event_fired(*uParam1, -31018127))
		{
			func_474(uParam0, iParam2, "HOLD_CARDS_IDLE_SUBTLE_E_card1", func_473(uParam0, iParam2, 0), 4, 2, -1082130432);
			func_474(uParam0, iParam2, "HOLD_CARDS_IDLE_SUBTLE_E_card2", func_473(uParam0, iParam2, 1), 4, 2, -1082130432);
		}
	}
	else if (has_anim_event_fired(*uParam1, -308856369))
	{
		func_474(uParam0, iParam2, "HOLD_CARDS_IDLE_B_card1", func_473(uParam0, iParam2, 0), 4, 2, -1082130432);
		func_474(uParam0, iParam2, "HOLD_CARDS_IDLE_B_card2", func_473(uParam0, iParam2, 1), 4, 2, -1082130432);
	}
	else if (has_anim_event_fired(*uParam1, -89351506))
	{
		func_474(uParam0, iParam2, "HOLD_CARDS_IDLE_C_card1", func_473(uParam0, iParam2, 0), 4, 2, -1082130432);
		func_474(uParam0, iParam2, "HOLD_CARDS_IDLE_C_card2", func_473(uParam0, iParam2, 1), 4, 2, -1082130432);
	}
	else if (has_anim_event_fired(*uParam1, -288032489))
	{
		func_474(uParam0, iParam2, "HOLD_CARDS_IDLE_D_card1", func_473(uParam0, iParam2, 0), 4, 2, -1082130432);
		func_474(uParam0, iParam2, "HOLD_CARDS_IDLE_D_card2", func_473(uParam0, iParam2, 1), 4, 2, -1082130432);
	}
	else if (has_anim_event_fired(*uParam1, -496151764))
	{
		func_474(uParam0, iParam2, "HOLD_CARDS_IDLE_E_card1", func_473(uParam0, iParam2, 0), 4, 2, -1082130432);
		func_474(uParam0, iParam2, "HOLD_CARDS_IDLE_E_card2", func_473(uParam0, iParam2, 1), 4, 2, -1082130432);
	}
}

void func_583(var uParam0, var uParam1, int iParam2)
{
	func_1134(uParam0, iParam2);
}

void func_584(var uParam0, var uParam1, int iParam2)
{
	bVar0 = uParam0->f_818[iParam2]->f_42 == false;
	iVar1 = uParam0->f_818[iParam2]->f_43;
	iVar2 = uParam0->f_818[iParam2]->f_44;
	if (uParam0->f_40)
	{
		func_471(uParam0, iParam2, 1);
		return;
	}
	switch (uParam1->f_9)
	{
		case 0:
			set_task_move_network_signal_float(&(uParam0->f_818[iParam2]), "LookType", to_float(iVar1));
			set_task_move_network_signal_float(&(uParam0->f_818[iParam2]), "SeatType", to_float(iVar2));
			if ((func_1129(uParam1, "LookMediumAnimFinished") || func_1129(uParam1, "LookQuickAnimFinished")) || func_1138(uParam0, iParam2, 1))
			{
				request_task_move_network_state_transition(*uParam1, "HoldCardsIdle");
				func_1133(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (func_1129(uParam1, "HoldCardsIdle"))
			{
				func_471(uParam0, iParam2, 1);
			}
			break;
	}
	if (has_anim_event_fired(*uParam1, -1523471413))
	{
		StringCopy(&cVar3, "LOOK_", 64);
		if (iVar2 == -1)
		{
			StringConCat(&cVar3, "MEDIUM_BOARD_0", 64);
			StringIntConCat(&cVar3, iVar1 + 1, 64);
			Var11 = { cVar3 };
			StringConCat(&cVar3, "_card1", 64);
			StringConCat(&Var11, "_card2", 64);
		}
		else
		{
			if (bVar0)
			{
				StringConCat(&cVar3, "QUICK_", 64);
			}
			else
			{
				StringConCat(&cVar3, "MEDIUM_", 64);
			}
			StringIntConCat(&cVar3, iVar2 + 1, 64);
			if (iVar1 == 0)
			{
				StringConCat(&cVar3, "A", 64);
			}
			else if (iVar1 == 1)
			{
				StringConCat(&cVar3, "B", 64);
			}
			else if (iVar1 == 2)
			{
				StringConCat(&cVar3, "C", 64);
			}
			Var11 = { cVar3 };
			StringConCat(&cVar3, "_card1", 64);
			StringConCat(&Var11, "_card2", 64);
		}
		func_474(uParam0, iParam2, &cVar3, func_473(uParam0, iParam2, 0), 0, 2, -1082130432);
		func_474(uParam0, iParam2, &Var11, func_473(uParam0, iParam2, 1), 0, 2, -1082130432);
	}
}

void func_585(var uParam0, var uParam1, int iParam2)
{
	func_1134(uParam0, iParam2);
}

void func_586(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_40)
	{
		func_1187(uParam0, iParam2);
		return;
	}
	switch (uParam1->f_9)
	{
		case 0:
			if (!ped_has_use_scenario_task(*uParam1) || _0x0c3cb2e600c8977d(*uParam1, 0))
			{
				func_1187(uParam0, iParam2);
			}
			break;
	}
}

void func_587(var uParam0, var uParam1, int iParam2)
{
	bVar0 = is_bit_set(uParam0->f_818[iParam2]->f_19, 0);
	if (uParam0->f_40)
	{
		if (!is_ped_a_player(*uParam1))
		{
			func_461(uParam0, iParam2);
		}
		else
		{
			vVar1 = { get_anim_initial_offset_position("mini_games@poker_mg@base", "sit_enter_left", *uParam0->f_1236[iParam2], *uParam0->f_1255[iParam2], 0f, 2) };
			vVar4 = { get_anim_initial_offset_rotation("mini_games@poker_mg@base", "sit_enter_left", *uParam0->f_1236[iParam2], *uParam0->f_1255[iParam2], 0f, 2) };
			clear_ped_tasks_immediately(*uParam1, false, true);
			_set_entity_coords_and_heading(*uParam1, vVar1, vVar4.z, true, false, true);
			func_211(uParam0, iParam2, 0);
		}
		return;
	}
	switch (uParam1->f_9)
	{
		case 61:
			if (func_1129(uParam1, "FoldAnimFinished") || func_1132(uParam0, iParam2, 1))
			{
				func_1133(uParam0, iParam2, 62);
			}
			break;
		case 62:
			if (uParam1->f_41 == 2)
			{
				func_459(uParam0, iParam2, "sit_exit_left", 0, 0.125f, 0.25f, 0, 1);
			}
			else if (uParam1->f_41 == 1)
			{
				if (uParam1->f_43 == 0)
				{
					func_459(uParam0, iParam2, "sit_exit_left_loss_a", 0, 0.125f, 0.25f, 0, 1);
				}
				else
				{
					func_459(uParam0, iParam2, "sit_exit_left_loss_b", 0, 0.125f, 0.25f, 0, 1);
				}
			}
			func_1133(uParam0, iParam2, 63);
			break;
		case 63:
			if ((((!func_1131(uParam0, iParam2, "sit_exit_left", 1065353216) && !func_1131(uParam0, iParam2, "sit_exit_right", 1065353216)) && !func_1131(uParam0, iParam2, "sit_exit_left_loss_a", 1065353216)) && !func_1131(uParam0, iParam2, "sit_exit_left_loss_b", 1065353216)) || (!bVar0 && func_1132(uParam0, iParam2, 0)))
			{
				func_211(uParam0, iParam2, 0);
				return;
			}
			break;
	}
	if (has_anim_event_fired(*uParam1, 677502514))
	{
		func_474(uParam0, iParam2, "fold_card1", func_473(uParam0, iParam2, 0), 0, 2, -1082130432);
		func_474(uParam0, iParam2, "fold_card2", func_473(uParam0, iParam2, 1), 0, 2, -1082130432);
	}
}

void func_588(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_40)
	{
		if (is_ped_a_player(*uParam1))
		{
		}
		else
		{
			func_461(uParam0, iParam2);
		}
		return;
	}
	switch (uParam1->f_9)
	{
		case 61:
			if (func_1129(uParam1, "FoldAnimFinished") || func_1132(uParam0, iParam2, 1))
			{
				func_1133(uParam0, iParam2, 62);
			}
			break;
		case 62:
			if (uParam1->f_41 == 2)
			{
				func_459(uParam0, iParam2, "sit_exit_left", 0, 0.125f, 0.25f, 0, 1);
			}
			else if (uParam1->f_41 == 1)
			{
				if (uParam1->f_43 == 0)
				{
					func_459(uParam0, iParam2, "sit_exit_left_loss_a", 0, 0.125f, 0.25f, 0, 1);
				}
				else
				{
					func_459(uParam0, iParam2, "sit_exit_left_loss_b", 0, 0.125f, 0.25f, 0, 1);
				}
			}
			func_1133(uParam0, iParam2, 63);
			break;
		case 63:
			if ((((!func_1131(uParam0, iParam2, "sit_exit_left", 1065353216) && !func_1131(uParam0, iParam2, "sit_exit_right", 1065353216)) && !func_1131(uParam0, iParam2, "sit_exit_left_loss_a", 1065353216)) && !func_1131(uParam0, iParam2, "sit_exit_left_loss_b", 1065353216)) || func_1132(uParam0, iParam2, 0))
			{
				if (is_ped_a_player(*uParam1))
				{
				}
				else
				{
					if (uParam1->f_52)
					{
						set_entity_collision(*uParam1, true, false);
						freeze_entity_position(*uParam1, false);
					}
					func_1074(uParam0, iParam2, 0);
					if (uParam0->f_766)
					{
						task_follow_nav_mesh_to_coord(*uParam1, uParam0->f_763, 1f, -1, 0.25f, 4194304, 40000f);
						func_1133(uParam0, iParam2, 64);
					}
					else
					{
						task_wander_standard(*uParam1, 40000f, 0);
						func_1133(uParam0, iParam2, 65);
					}
				}
			}
			break;
		case 64:
			if (!func_381(*uParam1, 713668775) || is_entity_at_coord(*uParam1, uParam0->f_763, 1f, 1f, 1f, false, true, 0))
			{
				task_wander_standard(*uParam1, 40000f, 0);
				func_1133(uParam0, iParam2, 65);
			}
			break;
		case 65:
			if (is_entity_occluded(*uParam1))
			{
				func_461(uParam0, iParam2);
				return;
			}
			else if (func_127(&(uParam1->f_13)) > 10f)
			{
				func_211(uParam0, iParam2, 0);
				return;
			}
			break;
	}
	if (has_anim_event_fired(*uParam1, 677502514))
	{
		func_474(uParam0, iParam2, "fold_card1", func_473(uParam0, iParam2, 0), 0, 2, -1082130432);
		func_474(uParam0, iParam2, "fold_card2", func_473(uParam0, iParam2, 1), 0, 2, -1082130432);
	}
}

void func_589(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_40)
	{
		if (!is_ped_a_player(*uParam1))
		{
			func_461(uParam0, iParam2);
		}
		else
		{
			vVar0 = { get_anim_initial_offset_position("mini_games@poker_mg@base", "sit_enter_right", *uParam0->f_1236[iParam2], *uParam0->f_1255[iParam2], 0f, 2) };
			vVar3 = { get_anim_initial_offset_rotation("mini_games@poker_mg@base", "sit_enter_right", *uParam0->f_1236[iParam2], *uParam0->f_1255[iParam2], 0f, 2) };
			clear_ped_tasks_immediately(*uParam1, false, true);
			_set_entity_coords_and_heading(*uParam1, vVar0, vVar3.z, true, false, true);
			func_211(uParam0, iParam2, 0);
		}
		return;
	}
	fVar8 = func_1188(uParam0->f_699, 0, 1065353216);
	fVar9 = func_1188(uParam0->f_700, 0, 1065353216);
	switch (uParam1->f_9)
	{
		case 61:
			if (func_1129(uParam1, "FoldAnimFinished") || func_1132(uParam0, iParam2, 1))
			{
				func_1133(uParam0, iParam2, 62);
			}
			break;
		case 62:
			if (uParam1->f_41 == 2)
			{
				func_459(uParam0, iParam2, "sit_exit_right", 2, 1040187392, 1040187392, 0, 1);
			}
			else if (uParam1->f_41 == 1)
			{
				if (uParam1->f_43 == 0)
				{
					func_459(uParam0, iParam2, "sit_exit_right_loss_a", 2, 1040187392, 1040187392, 0, 1);
				}
				else
				{
					func_459(uParam0, iParam2, "sit_exit_right_loss_b", 2, 1040187392, 1040187392, 0, 1);
				}
			}
			func_1133(uParam0, iParam2, 63);
			break;
		case 63:
			fVar6 = -1f;
			if (func_1131(uParam0, iParam2, "sit_exit_right", 1065353216))
			{
				fVar6 = func_1141(uParam0, iParam2, "sit_exit_right");
			}
			if (func_1131(uParam0, iParam2, "sit_exit_right_loss_a", 1065353216))
			{
				fVar6 = func_1141(uParam0, iParam2, "sit_exit_right_loss_a");
			}
			if (func_1131(uParam0, iParam2, "sit_exit_right_loss_b", 1065353216))
			{
				fVar6 = func_1141(uParam0, iParam2, "sit_exit_right_loss_b");
			}
			if (fVar6 >= fVar8)
			{
				fVar7 = func_1188((1f - ((fVar6 - fVar8) / fVar9)), 0, 1065353216);
				set_entity_alpha(*uParam1, round((255f * fVar7)), false);
			}
			if ((!func_1131(uParam0, iParam2, "sit_exit_right", 1065353216) && !func_1131(uParam0, iParam2, "sit_exit_right_loss_a", 1065353216)) && !func_1131(uParam0, iParam2, "sit_exit_right_loss_b", 1065353216))
			{
				func_461(uParam0, iParam2);
				return;
			}
			break;
	}
	if (has_anim_event_fired(*uParam1, 677502514))
	{
		func_474(uParam0, iParam2, "fold_card1", func_473(uParam0, iParam2, 0), 0, 2, -1082130432);
		func_474(uParam0, iParam2, "fold_card2", func_473(uParam0, iParam2, 1), 0, 2, -1082130432);
	}
}

void func_590(var uParam0, var uParam1, int iParam2)
{
	iVar0 = uParam1->f_19;
	iVar1 = uParam1->f_20;
	if (uParam0->f_40)
	{
		func_471(uParam0, iParam2, 1);
		return;
	}
	func_1130(uParam0, iParam2, -1921404755);
	switch (uParam1->f_9)
	{
		case 36:
			set_task_move_network_signal_float(*uParam1, "BuyInType", to_float(iVar0));
			if (func_1129(uParam1, "BuyInAnimFinished") || func_1138(uParam0, iParam2, 1))
			{
				request_task_move_network_state_transition(*uParam1, "NoCardsIdle");
				func_1133(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (func_1129(uParam1, "NoCardsIdle"))
			{
				func_471(uParam0, iParam2, 1);
			}
			break;
	}
	if (has_anim_event_fired(*uParam1, 1503712844))
	{
		func_855(uParam0, iParam2, iVar1, 1);
		switch (iVar0)
		{
			case 0:
				StringCopy(&cVar2, "buy_in_a", 32);
				break;
			case 1:
				StringCopy(&cVar2, "buy_in_b", 32);
				break;
			case 2:
				StringCopy(&cVar2, "buy_in_c", 32);
				break;
			default:
				StringCopy(&cVar2, "buy_in_a", 32);
				break;
		}
		Var6 = { cVar2 };
		StringConCat(&Var6, "_bank_01", 32);
		func_474(uParam0, iParam2, &Var6, uParam0->f_74[iParam2][0], 0, 2, -1082130432);
		Var6 = { cVar2 };
		StringConCat(&Var6, "_bank_02", 32);
		func_474(uParam0, iParam2, &Var6, uParam0->f_74[iParam2][1], 0, 2, -1082130432);
		Var6 = { cVar2 };
		StringConCat(&Var6, "_bank_03", 32);
		func_474(uParam0, iParam2, &Var6, uParam0->f_74[iParam2][2], 0, 2, -1082130432);
		Var6 = { cVar2 };
		StringConCat(&Var6, "_bank_05", 32);
		func_474(uParam0, iParam2, &Var6, uParam0->f_74[iParam2][3], 0, 2, -1082130432);
	}
}

void func_591(var uParam0, var uParam1, int iParam2)
{
	iVar0 = uParam1->f_19;
	sVar2 = func_1189(iVar0, uParam1->f_43);
	if (uParam0->f_40)
	{
		if (!is_ped_a_player(*uParam1))
		{
			func_461(uParam0, iParam2);
		}
		else
		{
			vVar11 = { get_anim_initial_offset_position("mini_games@poker_mg@base", sVar2, *uParam0->f_1236[iParam2], *uParam0->f_1255[iParam2], 1f, 2) };
			vVar14 = { get_anim_initial_offset_rotation("mini_games@poker_mg@base", sVar2, *uParam0->f_1236[iParam2], *uParam0->f_1255[iParam2], 1f, 2) };
			clear_ped_tasks_immediately(*uParam1, false, true);
			_set_entity_coords_and_heading(*uParam1, vVar11, vVar14.z, true, false, true);
			func_211(uParam0, iParam2, 0);
		}
		return;
	}
	switch (uParam1->f_9)
	{
		case 61:
			if (func_1129(uParam1, "FoldAnimFinished") || func_1132(uParam0, iParam2, 1))
			{
				func_1133(uParam0, iParam2, 62);
			}
			break;
		case 62:
			func_459(uParam0, iParam2, sVar2, 2, 0.5f, 1040187392, 0, 1);
			func_1133(uParam0, iParam2, 63);
			break;
		case 63:
			if (has_anim_event_fired(*uParam1, 873047073))
			{
				if (func_1190(uParam0, iParam2))
				{
					func_855(uParam0, iParam2, 0, 1);
				}
			}
			if (!func_1131(uParam0, iParam2, sVar2, 1065353216) || func_1132(uParam0, iParam2, 0))
			{
				if (func_1190(uParam0, iParam2))
				{
					func_855(uParam0, iParam2, 0, 0);
				}
				if (uParam0->f_766)
				{
					task_follow_nav_mesh_to_coord(*uParam1, uParam0->f_763, 1f, 20000, 1f, 4202496, 40000f);
				}
				func_211(uParam0, iParam2, 1);
				return;
			}
			break;
	}
	if (has_anim_event_fired(*uParam1, 677502514))
	{
		func_474(uParam0, iParam2, "fold_card1", func_473(uParam0, iParam2, 0), 0, 2, -1082130432);
		func_474(uParam0, iParam2, "fold_card2", func_473(uParam0, iParam2, 1), 0, 2, -1082130432);
	}
	if (has_anim_event_fired(*uParam1, 1852719906))
	{
		fVar17 = func_1141(uParam0, iParam2, sVar2);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (func_1191(uParam0, iParam2, iVar1) && func_1192(sVar2, iVar1, &uVar3))
			{
				func_474(uParam0, iParam2, &uVar3, uParam0->f_74[iParam2][iVar1], 0, 2, fVar17);
			}
			iVar1++;
		}
	}
}

var func_592(int iParam0)
{
	StringCopy(&cVar0, "#", 16);
	StringIntConCat(&cVar0, iParam0, 16);
	return func_1193(cVar0);
}

void func_593(var uParam0, int iParam1)
{
	uParam0->f_307[iParam1] = 0;
	uParam0->f_307[iParam1]->f_1 = 0;
	uParam0->f_307[iParam1]->f_2 = 0;
	StringCopy(&(uParam0->f_307[iParam1]->f_3), "", 128);
	uParam0->f_307[iParam1]->f_19 = 0;
}

void func_594(var uParam0, int iParam1)
{
	uParam0->f_428[iParam1] = 0;
	uParam0->f_428[iParam1]->f_1 = 0;
}

void func_595(var uParam0)
{
	uParam0->f_295 = 0;
}

void func_596(var uParam0)
{
	uParam0->f_9 = 0f;
	uParam0->f_10 = *uParam0;
	uParam0->f_11 = 0;
	uParam0->f_13 = 0;
}

void func_597(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = int_to_playerindex(iParam0);
	iVar1 = func_1194(iParam0, iParam1);
	if (!network_is_player_active(iVar0))
	{
		return;
	}
	switch (iVar1)
	{
		case 1:
		case 2:
		default:
			return;
			func_1195(iParam0, iParam1, 0);
			func_1196(iParam0, iParam1, 0);
		case 3:
		case 4:
		case 5:
			iVar2 = func_1197(iParam0, iParam1);
			if (iVar2 != 0)
			{
				texture_download_release(iVar2);
			}
			func_1196(iParam0, iParam1, 0);
			break;
	}
}

void func_598(var uParam0)
{
	uParam0->f_3 = -93138100;
	uParam0->f_11 = 0f;
	uParam0->f_12 = 2;
	uParam0->f_13 = 1000;
	uParam0->f_14 = 1;
	uParam0->f_15 = 2;
	uParam0->f_16 = -1;
	uParam0->f_17 = 0;
	uParam0->f_39 = 0;
}

void func_599(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_71[iVar0] = 0;
		StringCopy(&(uParam0->f_71[iVar0]->f_1), "", 128);
		uParam0->f_71[iVar0]->f_17 = 0;
		uParam0->f_71[iVar0]->f_18 = 255;
		uParam0->f_71[iVar0]->f_26 = 0;
		uParam0->f_71[iVar0]->f_27 = 0;
		uParam0->f_240[iVar0] = 0;
		StringCopy(&(uParam0->f_240[iVar0]->f_1), "", 128);
		uParam0->f_240[iVar0]->f_17 = 0;
		uParam0->f_240[iVar0]->f_18 = 255;
		uParam0->f_240[iVar0]->f_26 = 0;
		uParam0->f_240[iVar0]->f_27 = 0;
		uParam0->f_409[iVar0] = 0;
		iVar0++;
	}
}

void func_600(var uParam0)
{
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_2 = -1;
	uParam0->f_3 = -1;
	uParam0->f_4 = -1;
	uParam0->f_5 = -1;
	uParam0->f_6 = -1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_1198(uParam0->f_39[iVar0]);
		func_1199(uParam0->f_376[iVar0]);
		iVar0++;
	}
	uParam0->f_485 = 0;
	func_1200(&(uParam0->f_15));
}

void func_601(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_1442[iVar0] = 0;
		iVar0++;
	}
}

bool func_602(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_818[iParam1]->f_8 == iParam2)
	{
		return true;
	}
	return false;
}

bool func_603(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0->f_818[iParam1]->f_45, iParam2);
}

void func_604(var uParam0, int iParam1)
{
	uParam0->f_1549 = iParam1;
	func_268(&(uParam0->f_1550));
}

bool func_605(var uParam0)
{
	if (((((uParam0->f_43 == 0 || uParam0->f_43 == 13) || uParam0->f_43 == 14) || uParam0->f_43 == 15) || uParam0->f_43 == 1) || uParam0->f_43 == 16)
	{
		return true;
	}
	return false;
}

void func_606(var uParam0, var uParam1)
{
	if (uParam0->f_152.f_2052)
	{
	}
	else
	{
		uParam0->f_152.f_2052 = 1;
		uParam0->f_152.f_2053 = 0;
		uParam0->f_152.f_2054 = 0;
		func_1201(&(uParam0->f_2337), 0, 1);
		func_1089(&(uParam0->f_2337), 0, 1);
		func_1090(&(uParam0->f_2337));
		func_1203(&(uParam0->f_2337), func_1202(uParam1), func_866(uParam1));
		if (func_1204(&(uParam0->f_2337)) == 2 || func_1204(&(uParam0->f_2337)) == 1)
		{
			func_801(&(uParam0->f_2337), 0);
			func_992(&(uParam0->f_2337));
		}
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (func_993(&(uParam0->f_2337), iVar0))
			{
				if (func_203(&(uParam0->f_152.f_416), iVar0))
				{
					func_1059(&(uParam0->f_2337), iVar0, 0);
					func_1205(&(uParam0->f_2337), iVar0, func_625(uParam0, iVar0));
					func_1049(&(uParam0->f_2337), iVar0, 0);
					func_1052(&(uParam0->f_2337), iVar0, 0);
					if (func_625(uParam0, iVar0) == 0)
					{
						func_1048(&(uParam0->f_2337), iVar0, func_1206());
					}
					else
					{
						func_1048(&(uParam0->f_2337), iVar0, func_1207());
					}
				}
			}
			iVar0++;
		}
	}
}

int func_607(var uParam0, int iParam1, bool bParam2)
{
	return func_182(uParam0, bParam2, -1857735811, iParam1, 0);
}

bool func_608(var uParam0, bool bParam1)
{
	if (func_1208(&(uParam0->f_152), bParam1))
	{
		func_1016(uParam0, &(uParam0->f_152));
		return true;
	}
	return false;
}

bool func_609(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_818[iParam1]->f_8 == 1)
	{
		if ((!bParam2 || !is_task_move_network_active(&(uParam0->f_818[iParam1]))) || is_task_move_network_ready_for_transition(&(uParam0->f_818[iParam1])))
		{
			return true;
		}
	}
	else if (!uParam0->f_818[iParam1]->f_47)
	{
		func_1209(uParam0, iParam1);
	}
	return false;
}

bool func_610(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = func_842(uParam0, iParam1);
	if (bParam3)
	{
		if (iVar0 == iParam2)
		{
			return true;
		}
		return false;
	}
	switch (iParam2)
	{
		case 0:
		case 3:
			if (iVar0 == 0)
			{
				return true;
			}
			else if (iVar0 == 3)
			{
				return true;
			}
			break;
		case 1:
		case 4:
			if (iVar0 == 1)
			{
				return true;
			}
			else if (iVar0 == 4)
			{
				return true;
			}
			break;
		case 2:
		case 5:
			if (iVar0 == 2)
			{
				return true;
			}
			else if (iVar0 == 5)
			{
				return true;
			}
			break;
	}
	return false;
}

int func_611(var uParam0, int iParam1, int iParam2)
{
	iVar0 = func_869(uParam0, iParam1);
	return func_441(&iVar0, iParam2);
}

int func_612(var uParam0)
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_624(uParam0, iVar1))
		{
			set_bit(&iVar0, iVar1);
		}
		iVar1++;
	}
	return iVar0;
}

void func_613(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4, int iParam5)
{
	if (&uParam0->f_818[iParam1] == 0)
	{
	}
	else if (uParam0->f_818[iParam1]->f_50)
	{
	}
	else if (uParam0->f_818[iParam1]->f_8 != 1)
	{
	}
	else if (uParam0->f_818[iParam1]->f_1 != 1)
	{
	}
	else
	{
		func_471(uParam0, iParam1, 7);
		bVar0 = is_bit_set(iParam3, iParam1);
		if (bParam4)
		{
			set_bit(&(uParam0->f_818[iParam1]->f_19), 0);
		}
		if (bVar0)
		{
			set_bit(&(uParam0->f_818[iParam1]->f_19), 1);
		}
		uParam0->f_818[iParam1]->f_20 = iParam5;
		uParam0->f_818[iParam1]->f_21 = uParam2;
		if (!uParam0->f_40)
		{
			func_1210(uParam0, iParam1, iParam3);
			if (!func_632(uParam0))
			{
			}
			else if (func_633(uParam0) != iParam1)
			{
			}
			if (func_785(uParam0))
			{
				request_task_move_network_state_transition(&(uParam0->f_818[iParam1]), "ReceiveDeckEnterNoCards");
				func_1133(uParam0, iParam1, 7);
			}
			else
			{
				request_task_move_network_state_transition(&(uParam0->f_818[iParam1]), "ShuffleEnter");
				func_1133(uParam0, iParam1, 9);
			}
		}
		if (bVar0)
		{
			func_475(uParam0, iParam1, 2);
		}
		else
		{
			func_475(uParam0, iParam1, 1);
		}
		if (func_785(uParam0))
		{
			func_1211(uParam0, iParam1, 0);
		}
	}
}

void func_614(var uParam0, int iParam1)
{
	uParam0->f_1630 = iParam1;
}

bool func_615(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_818[iParam1]->f_8 == iParam2 && uParam0->f_818[iParam1]->f_46 == 0)
	{
		return true;
	}
	return false;
}

int func_616(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Var0 = { *uParam0->f_152.f_2100[iParam2] };
	iVar7 = -1;
	if (iParam1 == -1)
	{
	}
	else
	{
		iVar8 = 0;
		iVar9 = 0;
		while (iVar9 < 6)
		{
			if ((((&uParam0->f_2841.f_818[iVar9] != 0 && uParam0->f_2841.f_818[iVar9]->f_57 == 0) && &uParam0->f_152.f_2067[iVar9] == -1) && iVar9 != iParam1) && iVar9 != iParam4)
			{
				if (get_random_int_in_range(0, 100) < Var0.f_4)
				{
					set_bit(&iVar8, iVar9);
				}
			}
			iVar9++;
		}
		fVar10 = get_random_float_in_range(Var0, Var0.f_1);
		while (iVar8 & 63 != 0 && iParam3 > 0)
		{
			iVar9 = get_random_int_in_range(0, 6);
			while (!is_bit_set(iVar8, iVar9))
			{
				iVar9 = (iVar9 + 1 % 6);
			}
			if (get_random_int_in_range(0, 100) < Var0.f_5)
			{
				iVar6 = 1;
			}
			else
			{
				iVar6 = 0;
			}
			func_1212(&(uParam0->f_152), iVar9, iParam1, iVar6, fVar10);
			fVar10 = (fVar10 + get_random_float_in_range(Var0.f_2, Var0.f_3));
			if (iVar7 == -1)
			{
				iVar7 = iVar9;
			}
			clear_bit(&iVar8, iVar9);
			iParam3 = (iParam3 - 1);
		}
	}
	return iVar7;
}

void func_617(var uParam0, int iParam1, int iParam2)
{
	if (is_bit_set(uParam0->f_818[iParam1]->f_45, iParam2))
	{
		uVar0 = uParam0->f_818[iParam1]->f_8;
		clear_bit(&(uParam0->f_818[iParam1]->f_45), iParam2);
	}
}

int func_618(var uParam0, int iParam1)
{
	return uParam0->f_39[iParam1]->f_4;
}

bool func_619(var uParam0, int iParam1, bool bParam2)
{
	return func_914(uParam0, iParam1, 0, bParam2);
}

bool func_620(var uParam0, int iParam1, bool bParam2)
{
	return func_1213(uParam0, iParam1, 0, bParam2);
}

int func_621(var uParam0, int iParam1, bool bParam2)
{
	return func_1214(uParam0, iParam1, 0, bParam2);
}

int func_622(var uParam0, int iParam1, bool bParam2)
{
	return func_1215(uParam0, iParam1, 0, bParam2);
}

void func_623(var uParam0)
{
	if (!uParam0->f_152.f_2052)
	{
	}
	else
	{
		uParam0->f_152.f_2052 = 0;
		func_1201(&(uParam0->f_2337), 1, 1);
		func_1216(&(uParam0->f_2337));
		func_1054(&(uParam0->f_2337), 0, func_330(), 0, 0);
		func_1054(&(uParam0->f_2337), 1, func_330(), 0, 0);
		func_1054(&(uParam0->f_2337), 2, func_330(), 0, 0);
		func_1054(&(uParam0->f_2337), 3, func_330(), 0, 0);
		func_1054(&(uParam0->f_2337), 4, func_330(), 0, 0);
		if (func_1204(&(uParam0->f_2337)) == 8 || func_1204(&(uParam0->f_2337)) == 9)
		{
			func_992(&(uParam0->f_2337));
		}
	}
}

bool func_624(var uParam0, int iParam1)
{
	if (((iParam1 >= 0 && iParam1 < 6) && &uParam0->f_39[iParam1] != -1) && uParam0->f_39[iParam1]->f_6 != -1)
	{
		return true;
	}
	return false;
}

int func_625(var uParam0, int iParam1)
{
	iVar0 = func_204(&(uParam0->f_152.f_416), iParam1);
	if (iParam1 == uParam0->f_152.f_9 && iVar0 == 0)
	{
		iVar0 = uParam0->f_152.f_1453;
	}
	return iVar0;
}

void func_626(var uParam0, char* sParam1, int iParam2)
{
	if (uParam0->f_165)
	{
		return;
	}
	if (uParam0->f_167)
	{
		return;
	}
	func_250(1);
	func_1217(sParam1, 10000, 0, 0, 0, 1);
	uParam0->f_170 = iParam2;
}

void func_627(var uParam0, var uParam1)
{
	func_1044(&(uParam0->f_2337), uParam0->f_152.f_9);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_1218(uParam1, iVar0))
		{
			func_1052(&(uParam0->f_2337), iVar0, 1);
		}
		else if (func_913(uParam1, iVar0))
		{
			func_1059(&(uParam0->f_2337), iVar0, 0);
			func_1205(&(uParam0->f_2337), iVar0, func_204(uParam1, iVar0));
			func_1049(&(uParam0->f_2337), iVar0, 0);
			func_1052(&(uParam0->f_2337), iVar0, 0);
			func_1219(&(uParam0->f_2337), iVar0, iVar0 == uParam1->f_3);
			iVar1 = func_618(uParam1, iVar0);
			if (iVar0 == uParam1->f_4)
			{
				if (iVar1 <= uParam1->f_9)
				{
					func_1048(&(uParam0->f_2337), iVar0, func_1220(&(uParam0->f_2337), iVar1));
				}
				else
				{
					func_1048(&(uParam0->f_2337), iVar0, func_1221(&(uParam0->f_2337), iVar1));
				}
			}
			else if (iVar0 == uParam1->f_5)
			{
				func_1048(&(uParam0->f_2337), iVar0, func_1222(&(uParam0->f_2337), iVar1));
			}
			else if (iVar1 > 0)
			{
				func_1048(&(uParam0->f_2337), iVar0, func_1223(&(uParam0->f_2337), iVar1));
			}
			else
			{
				func_1048(&(uParam0->f_2337), iVar0, func_1224(uParam0, iVar0));
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < 5)
	{
		func_1054(&(uParam0->f_2337), iVar2, func_330(), 0, 1);
		iVar2++;
	}
	func_1057(&(uParam0->f_2337), 0, func_1058(uParam1), 1);
}

void func_628(var uParam0, var uParam1)
{
	if (!uParam0->f_1671.f_118)
	{
		return;
	}
	func_1225(&(uParam0->f_1671), 1, -1);
	iVar0 = -1;
	iVar3 = 0;
	while (iVar3 < 6)
	{
		if (&uParam0->f_1671[iVar3])
		{
			if (func_203(uParam1, iVar3))
			{
				iVar2 = (func_204(uParam1, iVar3) + func_691(uParam1, iVar3));
				uParam0->f_1671[iVar3]->f_3 = iVar2;
				if (func_624(uParam1, iVar3))
				{
					if (iVar0 == -1 || iVar1 < iVar2)
					{
						iVar0 = iVar3;
						iVar1 = iVar2;
					}
					uParam0->f_1671[iVar3]->f_2++;
				}
			}
		}
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < 6)
	{
		if (&uParam0->f_1671[iVar3])
		{
			iVar2 = uParam0->f_1671[iVar3]->f_3;
			fVar4 = func_1188((to_float(iVar2) / to_float(iVar1)), 0, 1065353216);
			fVar5 = 0f;
			fVar6 = ((1f - fVar4) + ((fVar5 * 0.5f) * fVar4));
			uParam0->f_1671[iVar3]->f_5 = fVar4;
			uParam0->f_1671[iVar3]->f_6 = fVar5;
			uParam0->f_1671[iVar3]->f_7 = fVar6;
		}
		iVar3++;
	}
	uParam0->f_1671.f_120 = 0;
	uParam0->f_1671.f_125 = iVar1;
	uParam0->f_1671.f_126++;
	uParam0->f_1671.f_127++;
	uParam0->f_1671.f_128++;
	uParam0->f_1671.f_131 = -1;
	uParam0->f_1671.f_132 = -1;
	uParam0->f_1671.f_133 = 0;
	uParam0->f_1671.f_137 = 0f;
	uParam0->f_1671.f_138 = 0f;
	uParam0->f_1671.f_139 = 0f;
	uParam0->f_1671.f_140 = 0;
	uParam0->f_1671.f_141 = 0;
	uParam0->f_1671.f_142 = 0;
	uParam0->f_1671.f_143 = 0;
	uParam0->f_1671.f_144 = 0;
	uParam0->f_1671.f_145 = -1;
	uParam0->f_1671.f_146 = 0;
	uParam0->f_1671.f_147 = -1;
	uParam0->f_1671.f_148 = 0;
	uParam0->f_1671.f_149 = 0;
	uParam0->f_1671.f_150 = 0;
	iVar3 = 0;
	while (iVar3 < 6)
	{
		uParam0->f_1671.f_151[iVar3] = 0f;
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < 6)
	{
		uParam0->f_1671.f_158[iVar3] = 0f;
		iVar3++;
	}
	uParam0->f_1671.f_165 = 0;
	uParam0->f_1671.f_166 = 0;
	uParam0->f_1671.f_167 = 0;
	uParam0->f_1671.f_168 = 0;
	uParam0->f_1671.f_169 = 0;
	uParam0->f_1671.f_170 = 0;
	uParam0->f_1671.f_130 = 0;
}

int func_629(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (uParam1->f_1607 != 0)
	{
		if (bParam4)
		{
			func_651(uParam1);
		}
		else
		{
			return 0;
		}
	}
	uParam1->f_1607 = iParam2;
	uParam1->f_1607.f_1 = 0;
	if (bParam3)
	{
		func_391(uParam0, uParam1);
	}
	return 1;
}

void func_630(var uParam0, var uParam1)
{
	if (func_624(uParam1, uParam0->f_152.f_9))
	{
		func_1227(func_1226(1511238709, -1672018311), 1);
	}
}

void func_631(var uParam0)
{
	func_1228(uParam0);
}

bool func_632(var uParam0)
{
	return does_entity_exist(uParam0->f_689);
}

int func_633(var uParam0)
{
	return uParam0->f_689.f_1;
}

int func_634(var uParam0, int iParam1, int iParam2)
{
	if (does_entity_exist(uParam0->f_689))
	{
		delete_object(&(uParam0->f_689));
	}
	uParam0->f_689 = 0;
	if (!func_1229(uParam0, iParam1, iParam2, &vVar0, &vVar3, 1))
	{
		return 0;
	}
	iVar6 = create_object(uParam0->f_695, vVar0, false, true, false, false, true);
	if (!does_entity_exist(iVar6))
	{
		return 0;
	}
	set_entity_coords(iVar6, vVar0, true, false, true, true);
	set_entity_rotation(iVar6, vVar3, 2, true);
	set_entity_collision(iVar6, false, false);
	freeze_entity_position(iVar6, true);
	uParam0->f_689 = iVar6;
	uParam0->f_689.f_1 = iParam1;
	uParam0->f_689.f_2 = iParam2;
	return 1;
}

struct<2> func_635(var uParam0, int iParam1, int iParam2)
{
	return *uParam0->f_39[iParam1]->f_7[iParam2];
}

int func_636(struct<2> Param0)
{
	if (((Param0 >= 2 && Param0 <= 14) && Param0.f_1 >= 0) && Param0.f_1 <= 3)
	{
		return 1;
	}
	return 0;
}

int func_637(var uParam0, int iParam1, struct<2> Param2, struct<2> Param4, bool bParam6)
{
	*Var4[0] = { Param2 };
	*Var4[1] = { Param4 };
	if (!func_477(uParam0, *Var4[0], uVar0[0]) || !func_477(uParam0, *Var4[1], uVar0[1]))
	{
		iVar9 = 0;
		while (iVar9 < 2)
		{
			if (func_477(uParam0, *(*uParam0->f_617[iParam1])[iVar9], &iVar3))
			{
				set_model_as_no_longer_needed(iVar3);
				*(*uParam0->f_617[iParam1])[iVar9] = { func_330() };
			}
			iVar9++;
		}
		return 0;
	}
	iVar10 = 0;
	while (iVar10 < 2)
	{
		if ((*uParam0->f_617[iParam1])[iVar10]->f_1 != Var4[iVar10]->f_1 || uParam0->f_617[iParam1][iVar10] != &Var4[iVar10])
		{
			if (bParam6)
			{
				if (&uParam0->f_617[iParam1]->f_5[iVar10] != 0)
				{
				}
			}
			if (func_477(uParam0, *(*uParam0->f_617[iParam1])[iVar10], &iVar3))
			{
				set_model_as_no_longer_needed(iVar3);
			}
			*(*uParam0->f_617[iParam1])[iVar10] = { *Var4[iVar10] };
			request_model(&(uVar0[iVar10]), false);
		}
		iVar10++;
	}
	return 1;
}

void func_638(var uParam0, int iParam1, int iParam2)
{
	if (&uParam0->f_818[iParam1] == 0)
	{
	}
	else if (uParam0->f_818[iParam1]->f_50)
	{
	}
	else if (uParam0->f_818[iParam1]->f_8 != 1)
	{
	}
	else if (uParam0->f_818[iParam1]->f_1 != 1)
	{
	}
	else if (iParam2 < 0 || iParam2 >= 6)
	{
	}
	else if (iParam1 == iParam2)
	{
	}
	else
	{
		func_471(uParam0, iParam1, 21);
		iVar0 = (iParam2 - iParam1);
		if (iVar0 < 0)
		{
			iVar0 += 6;
		}
		uParam0->f_818[iParam1]->f_19 = iVar0;
		if (!uParam0->f_40)
		{
			if (!func_632(uParam0))
			{
			}
			else if (func_633(uParam0) != iParam1)
			{
			}
			else if (func_785(uParam0))
			{
			}
		}
		if (!uParam0->f_40)
		{
			request_task_move_network_state_transition(&(uParam0->f_818[iParam1]), "PassDeckEnter");
			set_task_move_network_signal_float(&(uParam0->f_818[iParam1]), "PassDeckType", to_float(iVar0));
			func_1133(uParam0, iParam1, 54);
		}
		func_1211(uParam0, iParam2, 1);
	}
}

void func_639(var uParam0, int iParam1)
{
	if (&uParam0->f_818[iParam1] == 0)
	{
	}
	else if (uParam0->f_818[iParam1]->f_50)
	{
	}
	else if (uParam0->f_818[iParam1]->f_8 != 1)
	{
	}
	else if (uParam0->f_818[iParam1]->f_1 != 1)
	{
	}
	else
	{
		func_471(uParam0, iParam1, 22);
		if (!uParam0->f_40)
		{
			if (!func_632(uParam0))
			{
			}
			else
			{
				if (func_633(uParam0) != iParam1)
				{
				}
				if (!func_785(uParam0))
				{
				}
			}
		}
		if (!uParam0->f_40)
		{
			request_task_move_network_state_transition(&(uParam0->f_818[iParam1]), "ReceiveDeckEnterNoCards");
			func_1133(uParam0, iParam1, 56);
		}
		func_1211(uParam0, iParam1, 0);
	}
}

int func_640(var uParam0, int iParam1, bool bParam2)
{
	return func_1230(uParam0, iParam1, 0, bParam2);
}

void func_641(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (&uParam0->f_818[iParam1] == 0)
	{
	}
	else if (uParam0->f_818[iParam1]->f_50)
	{
	}
	else if (uParam0->f_818[iParam1]->f_8 != 1)
	{
	}
	else if (!bParam3 && uParam0->f_818[iParam1]->f_1 != 2)
	{
	}
	else if (bParam3 && uParam0->f_818[iParam1]->f_1 != 1)
	{
	}
	else if (iParam2 < 1)
	{
	}
	else
	{
		Var0.f_1 = 4;
		uVar6 = 4;
		uVar11 = 4;
		func_1231(uParam0, iParam1, &uVar6);
		func_1232(uParam0, iParam1, &uVar11, 0);
		func_1233(iParam2, &uVar6, &uVar11, &Var0, bParam3);
		func_1234(uParam0, iParam1, &Var0, bParam3);
	}
}

void func_642(var uParam0, int iParam1)
{
	func_1049(&(uParam0->f_2337), iParam1, 1);
}

void func_643(var uParam0, int iParam1)
{
	func_1049(&(uParam0->f_2337), iParam1, 0);
}

int func_644(int iParam0, int iParam1)
{
	iVar0 = (iParam0 + 1 % 6);
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (is_bit_set(iParam1, iVar0))
		{
			return iVar0;
		}
		iVar0 = (iVar0 + 1 % 6);
		iVar1++;
	}
	return -1;
}

void func_645(var uParam0, int iParam1, int iParam2)
{
	iParam2 = func_611(uParam0, iParam1, iParam2);
	if (&uParam0->f_818[iParam1] == 0)
	{
	}
	else if (uParam0->f_818[iParam1]->f_50)
	{
	}
	else if (uParam0->f_818[iParam1]->f_8 != 1)
	{
	}
	else if (uParam0->f_818[iParam1]->f_1 != 1)
	{
	}
	else if (uParam0->f_818[iParam1]->f_4 == 4)
	{
	}
	else if (uParam0->f_818[iParam1]->f_4 == 5)
	{
	}
	else if (uParam0->f_818[iParam1]->f_4 == 3)
	{
	}
	else if (iParam2 == 4)
	{
	}
	else if (iParam2 == 5)
	{
	}
	else if (iParam2 == 3)
	{
	}
	else if (uParam0->f_818[iParam1]->f_4 == iParam2)
	{
	}
	else
	{
		func_471(uParam0, iParam1, 24);
		func_1235(uParam0, iParam1, 0);
		iVar0 = func_842(uParam0, iParam1);
		uParam0->f_818[iParam1]->f_19 = iVar0;
		uParam0->f_818[iParam1]->f_20 = iParam2;
		if (iVar0 == 1 || iParam2 == 1)
		{
			if (!uParam0->f_40)
			{
				request_task_move_network_state_transition(&(uParam0->f_818[iParam1]), "ClipsetTransBase");
			}
		}
		func_1133(uParam0, iParam1, 0);
	}
}

void func_646(var uParam0, int iParam1, bool bParam2)
{
	if (&uParam0->f_818[iParam1] == 0)
	{
	}
	else if (uParam0->f_818[iParam1]->f_50)
	{
	}
	else if (uParam0->f_818[iParam1]->f_8 != 1)
	{
	}
	else if (uParam0->f_818[iParam1]->f_1 != 1)
	{
	}
	else
	{
		func_471(uParam0, iParam1, 9);
		if (bParam2)
		{
			func_458(uParam0, iParam1, get_random_int_in_range(0, 4));
		}
		if (!uParam0->f_40)
		{
			request_task_move_network_state_transition(&(uParam0->f_818[iParam1]), "HoldCardsEnter");
		}
		func_475(uParam0, iParam1, 2);
		if (func_778(uParam0, iParam1))
		{
			func_1236(uParam0, iParam1, 2);
		}
	}
}

bool func_647(var uParam0, int iParam1, var uParam2)
{
	return (func_1237(uParam0, iParam1, uParam2) && func_1238(uParam0, uParam0->f_5) != iParam1);
}

void func_648(var uParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	if (uParam0->f_166)
	{
		return;
	}
	if (uParam0->f_485 != 0)
	{
		if (bParam4)
		{
		}
	}
	else if (!func_1237(uParam1, iParam2, uParam3))
	{
	}
	else
	{
		uParam0->f_485 = 1;
		uParam0->f_485.f_1 = iParam2;
		uParam0->f_485.f_2 = 0;
		uParam0->f_485.f_3 = 0;
	}
}

void func_649(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	if (func_1239(uParam0, uParam1, uParam2, uParam3, iParam4, 1, -1))
	{
		_0x61b2aaef645ddaf0(uParam2->f_807, "receivedHand", &(uParam2->f_818[iParam4]), 0, uParam2->f_40);
	}
}

void func_650(var uParam0)
{
	func_1240(uParam0, 0);
}

void func_651(var uParam0)
{
	if (uParam0->f_1607 != 0)
	{
		uParam0->f_1607 = 0;
		uParam0->f_1607.f_1 = 0;
	}
}

void func_652(var uParam0)
{
	if (!uParam0->f_1671.f_118)
	{
		return;
	}
	uParam0->f_1671.f_120 = 0;
	uParam0->f_1671.f_131 = -1;
}

bool func_653(var uParam0, var uParam1)
{
	switch (uParam1->f_1628)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_210(&(uParam0->f_2841), iVar0) && func_794(&(uParam0->f_2841), iVar0))
				{
					return false;
				}
				iVar0++;
			}
			func_213(&(uParam0->f_2841), 0);
			func_1241(uParam0);
			func_359(uParam0, &(uParam0->f_152.f_416));
			func_1242(uParam1, 1);
			break;
		case 1:
			if (func_360(uParam0))
			{
				func_1243(uParam1);
				func_1244(&(uParam0->f_2841), 0);
				func_856(&(uParam0->f_2841));
				if (!uParam0->f_152.f_1997 && !func_203(&(uParam0->f_152.f_416), uParam0->f_152.f_1998))
				{
					func_436(&(uParam0->f_152), &(uParam0->f_152.f_416), &uVar1);
					func_437(&(uParam0->f_152), uVar1);
				}
				func_438(uParam0, &(uParam1->f_416), 1, 0, 1);
				iVar0 = 0;
				while (iVar0 < 6)
				{
					if (func_210(&(uParam0->f_2841), iVar0))
					{
						func_218(&(uParam0->f_2841), iVar0, func_455(&(uParam0->f_2841), iVar0), 0);
					}
					iVar0++;
				}
				uParam1->f_1629 = 0;
				func_1242(uParam1, 2);
			}
			break;
		case 2:
			if (uParam0->f_152.f_1629 > 3)
			{
				func_1242(uParam1, 3);
			}
			uParam0->f_152.f_1629++;
			break;
	}
	return uParam1->f_1628 == 3;
}

void func_654(var uParam0)
{
	uParam0->f_152.f_1627 = 0;
	do_screen_fade_in(1000);
}

int func_655(var uParam0, int iParam1)
{
	if (uParam0->f_152.f_1627 == 1 || uParam0->f_152.f_1627 == 2)
	{
		if (uParam0->f_152.f_1626 == iParam1)
		{
			return 1;
		}
	}
	return 0;
}

bool func_656(var uParam0, int iParam1)
{
	if (uParam0->f_9 == iParam1)
	{
		return true;
	}
	return false;
}

bool func_657(var uParam0)
{
	if (uParam0->f_152.f_1627 == 1)
	{
		do_screen_fade_in(1000);
		uParam0->f_152.f_1627 = 0;
		return false;
	}
	else if (uParam0->f_152.f_1627 == 2)
	{
		uParam0->f_152.f_1627 = 3;
		return true;
	}
	return false;
}

void func_658(var uParam0)
{
	func_1242(uParam0, 0);
}

void func_659(var uParam0, var uParam1)
{
	func_1245(&(uParam0->f_2337), uParam1->f_6, 1);
	_set_mp_gamer_tag_top_icon(uParam0->f_2841.f_818[uParam1->f_6]->f_62, -828390532);
	func_1048(&(uParam0->f_2337), uParam1->f_6, func_1047(uParam0, uParam1->f_6, func_618(uParam1, uParam1->f_6)));
	func_1246(&(uParam0->f_2337), uParam1->f_6, 1f);
}

void func_660(var uParam0, var uParam1)
{
	uParam0->f_152.f_1633 = 1;
	func_268(&(uParam0->f_152.f_1641));
	uParam0->f_152.f_1657 = 0;
	func_478(&(uParam0->f_152.f_1654));
	uParam0->f_152.f_2184 = 0;
	func_479(&(uParam0->f_152.f_1639));
	if (func_1085(&(uParam0->f_2337)))
	{
		func_1247(&(uParam0->f_2337), uParam1, &(uParam0->f_152.f_1639), &(uParam0->f_152.f_11), 1);
		func_687(&(uParam0->f_2337));
	}
	if (!func_1248(&(uParam0->f_152.f_1639)))
	{
		func_1249(&(uParam0->f_2337), &(uParam0->f_152.f_416), &(uParam0->f_152.f_11), uParam1->f_6, 1);
		play_sound_frontend("BET_PROMPT", "HUD_POKER", true, 0);
		if (!animpostfx_is_running("OJPokerPlayerTurn"))
		{
			animpostfx_play("OJPokerPlayerTurn");
		}
	}
	func_1250(&(uParam0->f_2337), "MGPKR_OBJ_YOUR_TURN");
}

void func_661(var uParam0)
{
	if (func_656(uParam0, uParam0->f_416.f_6))
	{
		func_1251(uParam0);
		func_268(&(uParam0->f_1651));
	}
	else
	{
		func_478(&(uParam0->f_1651));
	}
}

int func_662(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (uParam0->f_152.f_1633)
	{
		if (func_1248(&(uParam0->f_152.f_1639)))
		{
			*uParam3 = { uParam0->f_152.f_1639 };
			return 1;
		}
		else
		{
			fVar0 = func_1188((func_127(&(uParam0->f_152.f_1641)) / uParam0->f_152.f_1458), 0, 1065353216);
			if (fVar0 > uParam1->f_1459)
			{
				if (!uParam0->f_152.f_2184)
				{
					play_sound_frontend("player_turn_countdown_start", "RDRO_Poker_Sounds", true, 0);
					uParam0->f_152.f_2184 = 1;
				}
				fVar1 = (1f - ((fVar0 - uParam1->f_1459) / (1f - uParam1->f_1459)));
				func_1246(&(uParam0->f_2337), uParam2->f_6, fVar1);
			}
			fVar2 = ((60f * 4f) / uParam1->f_1463);
			fVar3 = ((60f * 4f) / uParam1->f_1464);
			fVar4 = uParam1->f_1465;
			fVar5 = uParam1->f_1466;
			fVar6 = uParam1->f_1467;
			fVar7 = uParam1->f_1468;
			fVar8 = uParam1->f_1469;
			fVar9 = uParam1->f_1470;
			fVar10 = func_1188((func_127(&(uParam1->f_1641)) / uParam1->f_1458), 0, 1065353216);
			fVar11 = uParam1->f_1471;
			if (fVar10 < fVar4)
			{
				fVar12 = fVar2;
			}
			else if (fVar10 >= fVar4 && fVar10 < fVar5)
			{
				fVar12 = (fVar2 + ((fVar10 - fVar4) * ((fVar3 - fVar2) / (fVar5 - fVar4))));
			}
			else if (fVar10 >= fVar5)
			{
				fVar12 = fVar3;
			}
			if (fVar10 < fVar8)
			{
				fVar13 = fVar6;
			}
			else if (fVar10 >= fVar8 && fVar10 < fVar9)
			{
				fVar13 = (fVar6 + ((fVar10 - fVar8) * ((fVar7 - fVar6) / (fVar9 - fVar8))));
			}
			else if (fVar10 >= fVar9)
			{
				fVar13 = fVar7;
			}
			if (uParam0->f_152.f_1657 == 0)
			{
				set_pad_shake(0, 150, 200);
				func_268(&(uParam0->f_152.f_1654));
				if (uParam0->f_152.f_1472 == 0f)
				{
					uParam0->f_152.f_1657 = 3;
				}
				else
				{
					uParam0->f_152.f_1657++;
				}
			}
			else if (uParam0->f_152.f_1657 == 1)
			{
				if (fVar10 >= uParam0->f_152.f_1472)
				{
					uParam0->f_152.f_1657 = 2;
				}
			}
			else if (uParam0->f_152.f_1657 == 2)
			{
				set_pad_shake(0, 100, round(fVar13));
				func_268(&(uParam0->f_152.f_1654));
				uParam0->f_152.f_1657++;
			}
			else if (uParam0->f_152.f_1657 == 3)
			{
				if (func_127(&(uParam0->f_152.f_1654)) > (fVar12 * 0.75f))
				{
					set_pad_shake(0, 100, round((fVar13 * fVar11)));
					uParam0->f_152.f_1657++;
				}
			}
			else if (uParam0->f_152.f_1657 == 4)
			{
				if (func_127(&(uParam0->f_152.f_1654)) > fVar12)
				{
					uParam0->f_152.f_1657 = 2;
				}
			}
			if (func_1083(&(uParam0->f_2337)) && func_1252(&(uParam0->f_2337), &(uParam0->f_152.f_416), &(uParam0->f_152.f_11), uParam2->f_6, func_1010(uParam0, 1)))
			{
				func_1253(&(uParam0->f_2337), uParam3);
				return 1;
			}
			if (func_101(&(uParam0->f_152.f_1641), uParam0->f_152.f_1458))
			{
				play_sound_frontend("player_turn_countdown_end", "RDRO_Poker_Sounds", true, 0);
				func_1254(uParam2, uParam3);
				return 1;
			}
		}
	}
	return 0;
}

int func_663(var uParam0, int iParam1)
{
	if (!func_409(uParam0, 2))
	{
		if (iParam1 != uParam0->f_9)
		{
		}
		else if (_poker_check(0, &Var0))
		{
			func_410(uParam0, 2, Var0, 1, 0);
			return 1;
		}
	}
	return 0;
}

int func_664(var uParam0, int iParam1)
{
	if (!func_409(uParam0, 2))
	{
		if (iParam1 != uParam0->f_9)
		{
		}
		else if (_poker_call(0, &Var0))
		{
			func_410(uParam0, 2, Var0, 1, 0);
			return 1;
		}
	}
	return 0;
}

int func_665(var uParam0, int iParam1, var uParam2)
{
	if (!func_409(uParam0, 2))
	{
		if (iParam1 != uParam0->f_9)
		{
		}
		else if (_poker_raise(uParam2, &Var0))
		{
			func_410(uParam0, 2, Var0, 1, 0);
			return 1;
		}
	}
	return 0;
}

bool func_666(var uParam0, int iParam1)
{
	if (!func_409(uParam0, 2))
	{
		if (iParam1 != uParam0->f_9)
		{
		}
		else if (_poker_fold(&Var0))
		{
			func_410(uParam0, 2, Var0, 1, 0);
			return true;
		}
	}
	return false;
}

void func_667(var uParam0, var uParam1)
{
	if (uParam0->f_152.f_1633)
	{
		func_1255(&(uParam0->f_2337));
		func_1084(&(uParam0->f_2337));
		func_992(&(uParam0->f_2337));
		func_1246(&(uParam0->f_2337), uParam1->f_6, -1f);
		if (animpostfx_is_running("OJPokerPlayerTurn"))
		{
			_0xc5cb91d65852ed7e("OJPokerPlayerTurn");
		}
		uParam0->f_152.f_1633 = 0;
	}
}

void func_668(var uParam0, var uParam1)
{
	if (!func_656(uParam1, uParam1->f_416.f_6))
	{
		if (!func_269(&(uParam1->f_1651)))
		{
			if (func_1256(uParam1, uParam1->f_416.f_6, &iVar0))
			{
				func_361(&(uParam1->f_1651), func_1257(iVar0));
			}
		}
		if (func_269(&(uParam1->f_1651)))
		{
			fVar1 = func_1188((func_127(&(uParam1->f_1651)) / uParam1->f_1458), 0, 1065353216);
			if (fVar1 > uParam1->f_1459)
			{
				fVar2 = (1f - ((fVar1 - uParam1->f_1459) / (1f - uParam1->f_1459)));
				func_1246(&(uParam0->f_2337), uParam1->f_416.f_6, fVar2);
			}
		}
	}
}

bool func_669(var uParam0, int iParam1)
{
	return is_bit_set((uParam0->f_66 && uParam0->f_70), iParam1);
}

void func_670(var uParam0, var uParam1)
{
	func_1049(&(uParam0->f_2337), uParam1->f_6, 0);
	func_1245(&(uParam0->f_2337), uParam1->f_6, 0);
	_set_mp_gamer_tag_top_icon(uParam0->f_2841.f_818[uParam1->f_6]->f_62, 1277358601);
}

bool func_671(var uParam0, int iParam1, var uParam2)
{
	return (func_1237(uParam0, iParam1, uParam2) && func_1238(uParam0, uParam0->f_6) != iParam1);
}

void func_672(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (!uParam0->f_1671.f_118)
	{
		return;
	}
	if (iParam3 < 0 || iParam3 >= 6)
	{
		return;
	}
	if (!uParam1[iParam3])
	{
		return;
	}
	switch (uParam0->f_1397)
	{
		case 1:
			iVar0 = 2;
			break;
		case 2:
			iVar0 = 3;
			break;
		case 4:
			iVar0 = 3;
			break;
		case 3:
			iVar0 = 4;
			break;
		case 5:
			if (uParam0->f_1399 > 0)
			{
				iVar0 = 3;
			}
			else
			{
				iVar0 = 4;
			}
			break;
		case 6:
			iVar0 = 5;
			break;
	}
	func_1225(uParam1, iVar0, iParam3);
	iVar1 = func_204(uParam2, iParam3);
	iVar2 = (iVar1 + uParam0->f_1398);
	iVar3 = func_691(uParam2, iParam3);
	iVar4 = (iVar1 + iVar3);
	iVar5 = (func_1258(uParam2) - uParam0->f_1398);
	iVar6 = iVar5;
	if (iVar6 < uParam2->f_10 * 10)
	{
		iVar6 = uParam2->f_10 * 10;
	}
	iVar7 = uParam0->f_1398;
	if (iVar0 == 5)
	{
		iVar7 = (func_1259(uParam2) - func_618(uParam2, iParam3));
	}
	fVar8 = (*uParam1)[iParam3]->f_5;
	fVar9 = (*uParam1)[iParam3]->f_6;
	fVar10 = (*uParam1)[iParam3]->f_7;
	fVar11 = (to_float(iVar7) / to_float(iVar2));
	fVar12 = (to_float(uParam0->f_1399) / to_float(iVar6));
	fVar13 = (to_float(iVar3) / to_float(iVar4));
	fVar14 = ((1f - fVar8) + ((fVar13 * 0.5f) * fVar8));
	if (uParam0->f_1397 == 2)
	{
		set_bit(&(uParam1->f_79[0]->f_2), 0);
	}
	if (uParam0->f_1397 == 5)
	{
		set_bit(&(uParam1->f_79[0]->f_2), 1);
	}
	if (uParam2->f_2 == 0)
	{
		set_bit(&(uParam1->f_79[0]->f_2), 2);
	}
	if (uParam2->f_2 == 1)
	{
		set_bit(&(uParam1->f_79[0]->f_2), 3);
	}
	if (uParam2->f_2 == 2)
	{
		set_bit(&(uParam1->f_79[0]->f_2), 4);
	}
	if (uParam2->f_2 == 3)
	{
		set_bit(&(uParam1->f_79[0]->f_2), 5);
	}
	if (func_757(uParam2) < 2)
	{
		set_bit(&(uParam1->f_79[0]->f_2), 12);
	}
	if (iVar0 == 3)
	{
		if (fVar12 >= 1f)
		{
			set_bit(&(uParam1->f_79[0]->f_2), 6);
		}
		else if (fVar12 >= 0.3f)
		{
			set_bit(&(uParam1->f_79[0]->f_2), 7);
		}
		else
		{
			set_bit(&(uParam1->f_79[0]->f_2), 8);
		}
	}
	if (iVar0 == 5)
	{
		if (fVar9 >= 0.8f)
		{
			set_bit(&(uParam1->f_79[0]->f_2), 9);
		}
		if (fVar9 >= 0.4f || (fVar10 >= 0.666f && fVar9 < 0.15f))
		{
			set_bit(&(uParam1->f_79[0]->f_2), 10);
		}
	}
	if (func_1260(uParam2) < 2 || (func_1261(uParam2) == 0 && uParam2->f_2 == 3))
	{
		set_bit(&(uParam1->f_79[0]->f_2), 11);
	}
	if (iVar0 == 2)
	{
		func_1262(&(uParam0->f_1671), iParam3, 1);
	}
	else if (iVar0 != 5)
	{
		func_1262(&(uParam0->f_1671), iParam3, 0);
	}
	if (iVar0 == 5)
	{
		func_1263(&(uParam0->f_1671), iParam3, 1);
		func_1264(&(uParam0->f_1671), iParam3);
	}
	(*uParam1)[iParam3]->f_6 = fVar13;
	(*uParam1)[iParam3]->f_7 = fVar14;
	uParam1->f_137 = fVar11;
	uParam1->f_138 = fVar9;
	uParam1->f_139 = fVar10;
}

void func_673(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	if (func_1239(uParam0, uParam1, uParam2, uParam3, iParam4, 2, -1))
	{
		bVar0 = func_1265(uParam1);
		bVar1 = func_1266(uParam0);
		bVar2 = func_1267(uParam1, 1);
		bVar3 = func_1268(uParam1, 1);
		bVar4 = func_1269(uParam1, 1);
		iVar5 = func_1270(uParam1, 0);
		if (!bVar1)
		{
			if (bVar2)
			{
				if (bVar3)
				{
					if (_0x61b2aaef645ddaf0(uParam2->f_807, "commentPrevAct_fold_again", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
					{
						func_1271(uParam1, iVar5);
						return;
					}
				}
				if (bVar4)
				{
					if (_0x61b2aaef645ddaf0(uParam2->f_807, "commentPrevAct_fold_badLoss", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
					{
						return;
					}
				}
				if (_0x61b2aaef645ddaf0(uParam2->f_807, "commentPrevAct_fold_weakMove", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
				{
					return;
				}
			}
			if (bVar0)
			{
				if (_0x61b2aaef645ddaf0(uParam2->f_807, "check_preflop", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
				{
					return;
				}
			}
			if (_0x61b2aaef645ddaf0(uParam2->f_807, "check_base", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
			{
				return;
			}
		}
	}
}

void func_674(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	if (func_1239(uParam0, uParam1, uParam2, uParam3, iParam4, 2, -1))
	{
		fVar0 = func_1272(uParam1);
		fVar1 = func_1273(uParam1);
		fVar2 = func_887(uParam1, iParam4);
		bVar3 = func_1274(uParam1);
		bVar4 = func_1275(fVar0);
		bVar5 = func_1276(fVar0);
		bVar6 = func_890(fVar1);
		bVar7 = func_1277(fVar1);
		bVar8 = func_891(fVar1);
		bVar9 = func_1278(fVar1);
		bVar10 = func_891(fVar2);
		bVar11 = func_1266(uParam0);
		bVar12 = func_1267(uParam1, 1);
		bVar13 = func_1268(uParam1, 1);
		bVar14 = func_1269(uParam1, 1);
		bVar15 = func_1279(uParam1, 1);
		bVar16 = func_1280(uParam1, 1);
		bVar17 = func_1281(uParam1, 1);
		bVar18 = func_1282(uParam1, 1);
		bVar19 = func_1283(uParam1, 1);
		iVar20 = func_1270(uParam1, 0);
		if (!bVar11)
		{
			if (bVar12)
			{
				if (bVar13)
				{
					if (_0x61b2aaef645ddaf0(uParam2->f_807, "commentPrevAct_fold_again", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
					{
						func_1271(uParam1, iVar20);
						return;
					}
				}
				if (bVar14)
				{
					if (_0x61b2aaef645ddaf0(uParam2->f_807, "commentPrevAct_fold_badLoss", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
					{
						return;
					}
				}
				if (_0x61b2aaef645ddaf0(uParam2->f_807, "commentPrevAct_fold_weakMove", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
				{
					return;
				}
			}
			if (bVar15)
			{
				if (bVar16)
				{
					if (bVar6)
					{
						if (_0x61b2aaef645ddaf0(uParam2->f_807, "commentPrevAct_bigRaise_aggressive", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
						{
							return;
						}
					}
					else if (bVar7)
					{
						if (_0x61b2aaef645ddaf0(uParam2->f_807, "commentPrevAct_bigRaise_aggressive", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
						{
							return;
						}
						if (_0x61b2aaef645ddaf0(uParam2->f_807, "commentPrevAct_bigRaise_nervous", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
						{
							return;
						}
					}
					else if (bVar8)
					{
						if (_0x61b2aaef645ddaf0(uParam2->f_807, "commentPrevAct_bigRaise_cocky", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
						{
							return;
						}
						if (_0x61b2aaef645ddaf0(uParam2->f_807, "commentPrevAct_bigRaise_impressed", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
						{
							return;
						}
					}
					if (_0x61b2aaef645ddaf0(uParam2->f_807, "commentPrevAct_bullshit", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
					{
						return;
					}
				}
				else if (bVar17)
				{
					if (bVar7)
					{
						if (_0x61b2aaef645ddaf0(uParam2->f_807, "commentPrevAct_medRaise_focused", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
						{
							return;
						}
					}
					else if (bVar8)
					{
						if (_0x61b2aaef645ddaf0(uParam2->f_807, "commentPrevAct_medRaise_complacent", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
						{
							return;
						}
					}
				}
				else if (bVar18 && !bVar19)
				{
					if (bVar9)
					{
						if (_0x61b2aaef645ddaf0(uParam2->f_807, "commentPrevAct_smallRaise_tease", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
						{
							return;
						}
						if (_0x61b2aaef645ddaf0(uParam2->f_807, "commentPrevAct_weakMove", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
						{
							return;
						}
					}
				}
				if ((bVar16 || bVar17) || bVar19)
				{
					if (_0x61b2aaef645ddaf0(uParam2->f_807, "commentPrevAct_bigRaise_bluff", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
					{
						return;
					}
					if (!bVar6)
					{
						if (_0x61b2aaef645ddaf0(uParam2->f_807, "commentPrevAct_boldMove", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
						{
							return;
						}
					}
				}
			}
			if (bVar10 && !bVar4)
			{
				if (_0x61b2aaef645ddaf0(uParam2->f_807, "call_happy", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
				{
					return;
				}
			}
			if (bVar6 && bVar3)
			{
				if (_0x61b2aaef645ddaf0(uParam2->f_807, "call_highPressure_allin", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
				{
					return;
				}
			}
			if (bVar6 && !bVar5)
			{
				if (_0x61b2aaef645ddaf0(uParam2->f_807, "call_highPressure_notCheap", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
				{
					return;
				}
			}
			if (bVar3 || bVar4)
			{
				if (_0x61b2aaef645ddaf0(uParam2->f_807, "call_base_significant", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
				{
					return;
				}
			}
			else if (bVar6)
			{
				if (_0x61b2aaef645ddaf0(uParam2->f_807, "call_base_highPressure", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
				{
					return;
				}
			}
			else if (_0x61b2aaef645ddaf0(uParam2->f_807, "call_base_casual", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
			{
				return;
			}
		}
		else if (_0x61b2aaef645ddaf0(uParam2->f_807, "call_base_significant", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
		{
			return;
		}
	}
}

void func_675(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	if (func_1239(uParam0, uParam1, uParam2, uParam3, iParam4, 2, -1))
	{
		bVar0 = func_1274(uParam1);
		bVar1 = func_1284(uParam1);
		bVar2 = func_1285(uParam1);
		bVar3 = func_1286(uParam1);
		bVar4 = func_1266(uParam0);
		bVar5 = func_1287(uParam1);
		bVar6 = func_1288(uParam1, 4);
		fVar7 = func_1273(uParam1);
		bVar8 = func_1278(fVar7);
		bVar9 = func_1279(uParam1, 1);
		bVar10 = func_1280(uParam1, 1);
		bVar11 = func_1281(uParam1, 1);
		bVar12 = func_1282(uParam1, 1);
		bVar13 = func_1283(uParam1, 1);
		iVar14 = func_1270(uParam1, 0);
		if (bVar0)
		{
			if (_0x61b2aaef645ddaf0(uParam2->f_807, "raise_allin", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
			{
				return;
			}
		}
		if (!bVar4)
		{
			if (bVar9)
			{
				if (bVar10)
				{
					if (bVar8)
					{
						if (_0x61b2aaef645ddaf0(uParam2->f_807, "commentPrevAct_bigRaise_cocky", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
						{
							return;
						}
					}
					if (_0x61b2aaef645ddaf0(uParam2->f_807, "commentPrevAct_bullshit", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
					{
						return;
					}
				}
				else if (bVar12 || bVar11)
				{
					if (bVar8 && !bVar13)
					{
						if (_0x61b2aaef645ddaf0(uParam2->f_807, "commentPrevAct_smallRaise_tease", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
						{
							return;
						}
						if (_0x61b2aaef645ddaf0(uParam2->f_807, "commentPrevAct_weakMove", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
						{
							return;
						}
						if (_0x61b2aaef645ddaf0(uParam2->f_807, "commentPrevAct_interestingMove", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
						{
							return;
						}
					}
				}
				if ((bVar10 || bVar11) || bVar13)
				{
					if (_0x61b2aaef645ddaf0(uParam2->f_807, "commentPrevAct_bigRaise_bluff", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
					{
						return;
					}
				}
			}
			if (bVar5)
			{
				if (_0x61b2aaef645ddaf0(uParam2->f_807, "raise_afterCheckAgain", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
				{
					func_1289(uParam1, iVar14);
					return;
				}
			}
			if (bVar6)
			{
				if (_0x61b2aaef645ddaf0(uParam2->f_807, "raise_afterChecks", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
				{
					return;
				}
			}
			if (bVar1)
			{
				if (_0x61b2aaef645ddaf0(uParam2->f_807, "raise_big", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
				{
					return;
				}
			}
			else if (bVar2)
			{
				if (_0x61b2aaef645ddaf0(uParam2->f_807, "raise_med", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
				{
					return;
				}
			}
			else if (bVar3)
			{
				if (_0x61b2aaef645ddaf0(uParam2->f_807, "raise_small", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
				{
					return;
				}
			}
			if (_0x61b2aaef645ddaf0(uParam2->f_807, "raise_base", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
			{
				return;
			}
		}
		else if (_0x61b2aaef645ddaf0(uParam2->f_807, "raise_base", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
		{
			return;
		}
	}
}

void func_676(var uParam0, int iParam1)
{
	if (&uParam0->f_818[iParam1] == 0)
	{
	}
	else if (uParam0->f_818[iParam1]->f_50)
	{
	}
	else if (uParam0->f_818[iParam1]->f_8 != 1)
	{
	}
	else if (uParam0->f_818[iParam1]->f_1 != 2)
	{
	}
	else
	{
		func_471(uParam0, iParam1, 15);
		iVar0 = ((uParam0->f_799 + get_random_int_in_range(1, 3)) % 3);
		uParam0->f_799 = iVar0;
		uParam0->f_818[iParam1]->f_19 = iVar0;
		if (!uParam0->f_40)
		{
			request_task_move_network_state_transition(&(uParam0->f_818[iParam1]), "Check");
			set_task_move_network_signal_float(&(uParam0->f_818[iParam1]), "CheckType", to_float(iVar0));
		}
	}
}

bool func_677(var uParam0, int iParam1)
{
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (func_1160(func_1290(uParam0, iParam1, iVar1), func_1291(uParam0, iParam1, iVar1), 10) >= 1)
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0 > 1;
}

void func_678(var uParam0, int iParam1)
{
	if (&uParam0->f_818[iParam1] == 0)
	{
	}
	else if (uParam0->f_818[iParam1]->f_50)
	{
	}
	else if (uParam0->f_818[iParam1]->f_8 != 1)
	{
	}
	else if (uParam0->f_818[iParam1]->f_1 != 2)
	{
	}
	else
	{
		func_471(uParam0, iParam1, 14);
		if (!uParam0->f_40)
		{
			request_task_move_network_state_transition(&(uParam0->f_818[iParam1]), "Bet");
			set_task_move_network_signal_float(&(uParam0->f_818[iParam1]), "BetType", to_float(4));
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (func_1191(uParam0, iParam1, iVar0))
			{
				func_1292(uParam0, iParam1, iVar0);
			}
			iVar0++;
		}
		func_1133(uParam0, iParam1, 34);
	}
}

void func_679(var uParam0, var uParam1)
{
	if (((uParam0->f_152.f_1397 == 2 || uParam0->f_152.f_1397 == 3) || uParam0->f_152.f_1397 == 4) && func_1293(uParam1, &(uParam0->f_152.f_11), uParam1->f_6))
	{
		func_1048(&(uParam0->f_2337), uParam1->f_6, func_1294(&(uParam0->f_2337), func_618(uParam1, uParam1->f_6)));
		func_1049(&(uParam0->f_2337), uParam1->f_6, 1);
	}
	else
	{
		switch (uParam0->f_152.f_1397)
		{
			case 5:
				func_1048(&(uParam0->f_2337), uParam1->f_6, func_1295(&(uParam0->f_2337), func_618(uParam1, uParam1->f_6)));
				func_1049(&(uParam0->f_2337), uParam1->f_6, 1);
				break;
			case 1:
				func_1048(&(uParam0->f_2337), uParam1->f_6, func_1296(&(uParam0->f_2337), func_618(uParam1, uParam1->f_6)));
				func_1049(&(uParam0->f_2337), uParam1->f_6, 1);
				break;
			case 2:
				func_1048(&(uParam0->f_2337), uParam1->f_6, func_1050(&(uParam0->f_2337), func_618(uParam1, uParam1->f_6)));
				func_1049(&(uParam0->f_2337), uParam1->f_6, 1);
				break;
			case 3:
				func_1048(&(uParam0->f_2337), uParam1->f_6, func_1297(&(uParam0->f_2337), func_618(uParam1, uParam1->f_6)));
				func_1049(&(uParam0->f_2337), uParam1->f_6, 1);
				break;
			case 4:
				func_1048(&(uParam0->f_2337), uParam1->f_6, func_1298(&(uParam0->f_2337), func_618(uParam1, uParam1->f_6)));
				func_1049(&(uParam0->f_2337), uParam1->f_6, 1);
				break;
			case 6:
				func_1048(&(uParam0->f_2337), uParam1->f_6, func_1299(&(uParam0->f_2337), func_618(uParam1, uParam1->f_6)));
				func_1049(&(uParam0->f_2337), uParam1->f_6, 1);
				break;
		}
	}
	func_1246(&(uParam0->f_2337), uParam1->f_6, -1f);
	func_1205(&(uParam0->f_2337), uParam1->f_6, func_204(uParam1, uParam1->f_6));
	iVar0 = 0;
	if (uParam1->f_485 == 0)
	{
		iVar1 = 0;
		iVar0 = func_1058(uParam1);
	}
	else
	{
		iVar1 = (uParam1->f_485 - 1);
		iVar0 = (func_1058(uParam1) + func_1055(uParam1, iVar1));
	}
	func_1057(&(uParam0->f_2337), iVar1, iVar0, func_1056(uParam1));
}

int func_680(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if ((!func_1300(uParam2) && !func_1266(uParam1)) && func_1301(uParam1->f_1871.f_1, 5f))
	{
		iVar0 = func_1302(uParam2);
		iVar1 = func_877(&(uParam0->f_2841), iVar0, -1, -1);
		iVar2 = 0;
		iVar3 = 0;
		iVar4 = 0;
		while (iVar4 < 6)
		{
			if (func_203(uParam3, iVar4))
			{
				if (func_1303(uParam3, iVar4, &(uParam1->f_11)))
				{
					set_bit(&iVar2, iVar4);
				}
				if (func_1301(&(uParam1->f_1871.f_2[iVar4]), 20f))
				{
					set_bit(&iVar3, iVar4);
				}
			}
			iVar4++;
		}
		iVar1 = (iVar1 && iVar3);
		bVar5 = func_1304(uParam2);
		iVar6 = -1;
		if (bVar5)
		{
			if (func_1301(uParam1->f_1871.f_12, (5f * 60f)))
			{
				iVar6 = func_897(uParam0, (iVar1 && -1 ^ iVar2), "commentCurAct_check_tooOften", -1, 100);
				if (iVar6 != -1)
				{
					func_1305(&(uParam1->f_1871.f_12));
					func_1305(&(uParam1->f_1871.f_1));
					func_1305(uParam1->f_1871.f_2[iVar6]);
					func_1289(uParam2, iVar0);
					func_1306(uParam1, iVar6);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_681(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if ((!func_1300(uParam2) && !func_1266(uParam1)) && func_1301(uParam1->f_1871.f_1, 5f))
	{
		iVar0 = func_1302(uParam2);
		iVar1 = func_1238(uParam3, iVar0);
		iVar2 = func_1238(uParam3, iVar1);
		iVar3 = func_1307(uParam2);
		iVar4 = func_877(&(uParam0->f_2841), iVar0, iVar1, iVar2);
		iVar5 = 0;
		iVar6 = 0;
		iVar7 = 0;
		while (iVar7 < 6)
		{
			if (func_203(uParam3, iVar7))
			{
				if (iVar7 == iVar3)
				{
					set_bit(&iVar5, iVar7);
				}
				if (func_1301(&(uParam1->f_1871.f_2[iVar7]), 20f))
				{
					set_bit(&iVar6, iVar7);
				}
			}
			iVar7++;
		}
		iVar4 = (iVar4 && iVar6);
		fVar8 = func_1272(uParam2);
		bVar9 = func_1275(fVar8);
		bVar10 = func_1274(uParam2);
		iVar11 = -1;
		if (bVar9 || bVar10)
		{
			if (func_1301(uParam1->f_1871.f_9, 30f))
			{
				iVar11 = func_897(uParam0, (iVar4 && -1 ^ iVar5), "commentCurAct_boldMove", -1, 50);
				if (iVar11 != -1)
				{
					func_1305(&(uParam1->f_1871.f_9));
					func_1305(&(uParam1->f_1871.f_1));
					func_1305(uParam1->f_1871.f_2[iVar11]);
					func_1306(uParam1, iVar11);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_682(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if ((!func_1300(uParam2) && !func_1266(uParam1)) && func_1301(uParam1->f_1871.f_1, 5f))
	{
		iVar0 = func_1302(uParam2);
		iVar1 = func_1238(uParam3, iVar0);
		iVar2 = func_1238(uParam3, iVar1);
		iVar3 = func_877(&(uParam0->f_2841), iVar0, iVar1, iVar2);
		iVar4 = 0;
		iVar5 = 0;
		iVar6 = 0;
		iVar7 = 0;
		iVar8 = 0;
		while (iVar8 < 6)
		{
			if (func_203(uParam3, iVar8))
			{
				if (func_440(uParam3, iVar8))
				{
					set_bit(&iVar4, iVar8);
				}
				if (func_1303(uParam3, iVar8, &(uParam1->f_11)))
				{
					set_bit(&iVar5, iVar8);
				}
				if (func_890(func_887(uParam2, iVar8)))
				{
					set_bit(&iVar6, iVar8);
				}
				if (func_1301(&(uParam1->f_1871.f_2[iVar8]), 20f))
				{
					set_bit(&iVar7, iVar8);
				}
			}
			iVar8++;
		}
		iVar3 = (iVar3 && iVar7);
		bVar9 = func_1284(uParam2);
		bVar10 = func_1285(uParam2);
		bVar11 = func_1286(uParam2);
		bVar12 = func_1274(uParam2);
		iVar13 = -1;
		if (bVar12 && !bVar11)
		{
			if (func_1301(uParam1->f_1871.f_9, 30f))
			{
				iVar13 = func_897(uParam0, (iVar3 && (-1 ^ iVar6 || -1 ^ iVar4)), "commentCurAct_boldMove", -1, 50);
				if (iVar13 != -1)
				{
					func_1305(&(uParam1->f_1871.f_9));
					func_1305(&(uParam1->f_1871.f_1));
					func_1305(uParam1->f_1871.f_2[iVar13]);
					func_1306(uParam1, iVar13);
					return 1;
				}
			}
		}
		if (bVar9)
		{
			if (func_1301(uParam1->f_1871.f_13, 40f))
			{
				iVar13 = func_897(uParam0, ((iVar3 && iVar5) && iVar6), "commentCurAct_bigRaise_aggressive", -1, 66);
				if (iVar13 != -1)
				{
					func_1305(&(uParam1->f_1871.f_13));
					func_1305(&(uParam1->f_1871.f_1));
					func_1305(uParam1->f_1871.f_2[iVar13]);
					func_1306(uParam1, iVar13);
					return 1;
				}
			}
			if (func_1301(uParam1->f_1871.f_14, 20f))
			{
				iVar13 = func_897(uParam0, (iVar3 && iVar5), "commentCurAct_bigRaise_bluff", -1, 50);
				if (iVar13 != -1)
				{
					func_1305(&(uParam1->f_1871.f_14));
					func_1305(&(uParam1->f_1871.f_1));
					func_1305(uParam1->f_1871.f_2[iVar13]);
					func_1306(uParam1, iVar13);
					return 1;
				}
			}
		}
		if (bVar10)
		{
			if (func_1301(uParam1->f_1871.f_14, 20f))
			{
				iVar13 = func_897(uParam0, (iVar3 && iVar5), "commentCurAct_bigRaise_bluff", -1, 50);
				if (iVar13 != -1)
				{
					func_1305(&(uParam1->f_1871.f_14));
					func_1305(&(uParam1->f_1871.f_1));
					func_1305(uParam1->f_1871.f_2[iVar13]);
					func_1306(uParam1, iVar13);
					return 1;
				}
			}
		}
		if (bVar11 && !bVar12)
		{
			if (func_1301(uParam1->f_1871.f_15, 60f))
			{
				iVar13 = func_897(uParam0, ((iVar3 && iVar5) && -1 ^ iVar6), "commentCurAct_smallRaise_bluff", -1, 50);
				if (iVar13 != -1)
				{
					func_1305(&(uParam1->f_1871.f_15));
					func_1305(&(uParam1->f_1871.f_1));
					func_1305(uParam1->f_1871.f_2[iVar13]);
					func_1306(uParam1, iVar13);
					return 1;
				}
				iVar13 = func_897(uParam0, (iVar3 && -1 ^ iVar6), "commentCurAct_smallRaise_tease", -1, 50);
				if (iVar13 != -1)
				{
					func_1305(&(uParam1->f_1871.f_15));
					func_1305(&(uParam1->f_1871.f_1));
					func_1305(uParam1->f_1871.f_2[iVar13]);
					func_1306(uParam1, iVar13);
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_683(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (&uParam0->f_818[iParam1] == 0)
	{
	}
	else if (uParam0->f_818[iParam1]->f_50)
	{
	}
	else if (uParam0->f_818[iParam1]->f_8 != 1)
	{
	}
	else if (uParam0->f_818[iParam1]->f_1 != 1 && uParam0->f_818[iParam1]->f_1 != 2)
	{
	}
	else if (iParam2 < 0 || iParam2 >= 6)
	{
	}
	else
	{
		func_471(uParam0, iParam1, 17);
		uParam0->f_818[iParam1]->f_41 = iParam3;
		iVar0 = (iParam2 - iParam1);
		if (iVar0 <= 0)
		{
			iVar0 += 6;
		}
		uParam0->f_818[iParam1]->f_19 = iVar0;
		if (!uParam0->f_40)
		{
			iVar1 = func_455(uParam0, iParam1);
			iVar2 = func_779(uParam0, iParam1);
			set_task_move_network_signal_float(&(uParam0->f_818[iParam1]), "WinLossType", to_float(iParam3));
			set_task_move_network_signal_float(&(uParam0->f_818[iParam1]), "ReturnCardType", to_float(iVar0));
			if (iVar1 == 2)
			{
				request_task_move_network_state_transition(&(uParam0->f_818[iParam1]), "ReturnEnterHoldCards");
			}
			else
			{
				if (iVar2 != 3)
				{
				}
				request_task_move_network_state_transition(&(uParam0->f_818[iParam1]), "ReturnRevealEnter");
			}
		}
		func_1133(uParam0, iParam1, 47);
		func_475(uParam0, iParam1, 1);
		func_1235(uParam0, iParam1, 2);
		if (func_778(uParam0, iParam1))
		{
			func_1236(uParam0, iParam1, 5);
		}
	}
}

void func_684(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	if (func_1239(uParam0, uParam1, uParam2, uParam3, iParam4, 2, -1))
	{
		fVar0 = func_1273(uParam1);
		fVar1 = func_1308(uParam1);
		fVar2 = func_1272(uParam1);
		bVar3 = func_890(fVar0);
		bVar4 = func_1309(fVar0);
		bVar5 = func_1310(fVar1);
		bVar6 = func_1311(fVar1);
		bVar7 = func_1312(fVar1);
		bVar8 = func_893(fVar1);
		bVar9 = func_1313(fVar1);
		bVar10 = func_1275(fVar2);
		bVar11 = func_1266(uParam0);
		bVar12 = func_1279(uParam1, 1);
		bVar13 = func_1280(uParam1, 1);
		if (!bVar11)
		{
			if (bVar12)
			{
				if (bVar4)
				{
					if (bVar5)
					{
						if (_0x61b2aaef645ddaf0(uParam2->f_807, "commentPrevAct_angry_lvl3", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
						{
							return;
						}
					}
					else if (bVar6)
					{
						if (_0x61b2aaef645ddaf0(uParam2->f_807, "commentPrevAct_angry_lvl2", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
						{
							return;
						}
					}
					else if (bVar7 || bVar8)
					{
						if (_0x61b2aaef645ddaf0(uParam2->f_807, "commentPrevAct_angry_lvl1", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
						{
							return;
						}
					}
					if (bVar13)
					{
						if (_0x61b2aaef645ddaf0(uParam2->f_807, "commentPrevAct_bigRaise_aggressive", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
						{
							return;
						}
					}
				}
				else
				{
					if (bVar5)
					{
						if (_0x61b2aaef645ddaf0(uParam2->f_807, "commentPrevAct_frustrated_lvl3", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
						{
							return;
						}
					}
					else if (bVar6)
					{
						if (_0x61b2aaef645ddaf0(uParam2->f_807, "commentPrevAct_frustrated_lvl2", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
						{
							return;
						}
					}
					else if (bVar7 || bVar8)
					{
						if (_0x61b2aaef645ddaf0(uParam2->f_807, "commentPrevAct_frustrated_lvl1", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
						{
							return;
						}
					}
					if (bVar13 && !bVar6)
					{
						if (_0x61b2aaef645ddaf0(uParam2->f_807, "commentPrevAct_boldMove", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
						{
							return;
						}
					}
				}
			}
			if (bVar5)
			{
				if (_0x61b2aaef645ddaf0(uParam2->f_807, "fold_veryBadLoss", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
				{
					return;
				}
			}
			if (bVar6 || (bVar3 && !bVar9))
			{
				if (_0x61b2aaef645ddaf0(uParam2->f_807, "fold_badLoss", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
				{
					return;
				}
			}
			if (bVar10 && bVar3)
			{
				if (_0x61b2aaef645ddaf0(uParam2->f_807, "fold_tooExpensive_highPressure", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
				{
					return;
				}
			}
			if (bVar10)
			{
				if (_0x61b2aaef645ddaf0(uParam2->f_807, "fold_tooExpensive", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
				{
					return;
				}
			}
			if ((bVar10 || bVar6) || bVar3)
			{
				if (_0x61b2aaef645ddaf0(uParam2->f_807, "fold_base_significant", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
				{
					return;
				}
			}
			else if (_0x61b2aaef645ddaf0(uParam2->f_807, "fold_base_casual", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
			{
				return;
			}
		}
		else if (_0x61b2aaef645ddaf0(uParam2->f_807, "fold_base_significant", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
		{
			return;
		}
	}
}

int func_685(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if ((!func_1300(uParam2) && !func_1266(uParam1)) && func_1301(uParam1->f_1871.f_1, 5f))
	{
		iVar0 = func_1302(uParam2);
		iVar1 = func_1307(uParam2);
		iVar2 = func_877(&(uParam0->f_2841), iVar0, -1, -1);
		iVar3 = 0;
		iVar4 = 0;
		iVar5 = 0;
		iVar6 = 0;
		iVar7 = 0;
		while (iVar7 < 6)
		{
			if (func_203(uParam3, iVar7))
			{
				if (func_440(uParam3, iVar7))
				{
					set_bit(&iVar3, iVar7);
				}
				if (!func_1314(uParam3, iVar7))
				{
					set_bit(&iVar4, iVar7);
				}
				if (iVar7 == iVar1)
				{
					set_bit(&iVar5, iVar7);
				}
				if (func_1301(&(uParam1->f_1871.f_2[iVar7]), 20f))
				{
					set_bit(&iVar6, iVar7);
				}
			}
			iVar7++;
		}
		iVar2 = (iVar2 && iVar6);
		bVar8 = func_1315(uParam2);
		iVar9 = -1;
		if (bVar8)
		{
			if (func_1301(uParam1->f_1871.f_11, (5f * 60f)))
			{
				iVar9 = func_897(uParam0, ((iVar2 && iVar3) && iVar4), "commentCurAct_fold_tooOften", -1, 100);
				if (iVar9 != -1)
				{
					func_1305(&(uParam1->f_1871.f_11));
					func_1305(&(uParam1->f_1871.f_1));
					func_1305(uParam1->f_1871.f_2[iVar9]);
					func_1271(uParam2, iVar0);
					func_1306(uParam1, iVar9);
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_686(var uParam0, var uParam1)
{
	func_1052(&(uParam0->f_2337), uParam1->f_6, 1);
}

void func_687(var uParam0)
{
	if (uParam0->f_485 != 0)
	{
		if (func_152(uParam0->f_494))
		{
			func_464(uParam0->f_494, 1, 1);
		}
		if (func_152(uParam0->f_495))
		{
			func_464(uParam0->f_495, 1, 1);
		}
		if (func_152(uParam0->f_499))
		{
			func_464(uParam0->f_499, 1, 1);
		}
		if (func_152(uParam0->f_500))
		{
			func_464(uParam0->f_500, 1, 1);
		}
		uParam0->f_485 = 0;
		uParam0->f_485.f_2 = 0;
		uParam0->f_485.f_3 = 0;
		func_1086(&(uParam0->f_485.f_4), 1, 1);
		func_1086(&(uParam0->f_485.f_5), 1, 1);
		func_1086(&(uParam0->f_485.f_6), 1, 1);
		func_1086(&(uParam0->f_485.f_7), 1, 1);
		func_1086(&(uParam0->f_485.f_8), 1, 1);
	}
}

void func_688(var uParam0, var uParam1)
{
	func_1090(&(uParam0->f_2337));
	iVar0 = 0;
	while (iVar0 < uParam1->f_485)
	{
		func_1057(&(uParam0->f_2337), iVar0, func_1055(uParam1, iVar0), func_1056(uParam1));
		iVar0++;
	}
}

bool func_689(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_702(uParam0, iVar0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_690(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_152.f_9 == iParam1)
	{
		func_626(&(uParam0->f_2337), _create_var_string(2, "MGPKR_REFUND_YOU", func_965(uParam0, iParam2)), 0);
	}
	else
	{
		Var0 = { func_443(&(uParam0->f_152), iParam1, 0, 1) };
		func_626(&(uParam0->f_2337), _create_var_string(10, "MGPKR_REFUND_THEM_MP", &Var0, func_965(uParam0, iParam2)), 0);
	}
}

int func_691(var uParam0, int iParam1)
{
	return uParam0->f_39[iParam1]->f_3;
}

void func_692(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	func_1163(uParam0, iParam1, "OLD", "PWORLD__CREATE_PLAYER_STACKS_FOR_FIXUP_DURING_ROUND()");
	func_1164(uParam0, iParam1, "OLD", 0);
	func_1231(uParam0, iParam1, &uVar5);
	func_1232(uParam0, iParam1, &uVar10, 1);
	func_1231(uParam0, iParam1, &uVar15);
	func_1232(uParam0, iParam1, &uVar20, 1);
	func_1316(uParam0, iParam1, &uVar0);
	if (func_1317(iParam2, iParam3, &uVar15, &uVar20))
	{
		iVar25 = 0;
		while (iVar25 < 4)
		{
			if ((!bParam4 || &uVar5[iVar25] != &uVar15[iVar25]) || &uVar10[iVar25] != &uVar20[iVar25])
			{
				func_1318(uParam0, iParam1, iVar25, &(uVar0[iVar25]), &(uVar15[iVar25]), func_1160(&(uVar0[iVar25]), &(uVar15[iVar25]), 10), bParam5, 0);
				func_1152(uParam0, iParam1, iVar25, &(uVar0[iVar25]), &(uVar20[iVar25]), func_1160(&(uVar0[iVar25]), &(uVar20[iVar25]), 10), bParam5, 0);
				func_1319(uParam0, iParam1, iVar25, bParam5);
			}
			iVar25++;
		}
	}
	func_1163(uParam0, iParam1, "NEW", 0);
	func_1164(uParam0, iParam1, "NEW", 0);
}

bool func_693(var uParam0)
{
	return uParam0->f_2 == 4;
}

bool func_694(var uParam0, int iParam1)
{
	return func_636(*uParam0->f_672[iParam1]);
}

int func_695(var uParam0, int iParam1, struct<2> Param2, bool bParam4)
{
	if (uParam0->f_672[iParam1]->f_1 != Param2.f_1 || &uParam0->f_672[iParam1] != Param2)
	{
		if (bParam4)
		{
			if (&uParam0->f_672.f_11[iParam1] != 0)
			{
			}
		}
		if (func_477(uParam0, *uParam0->f_672[iParam1], &iVar0))
		{
			set_model_as_no_longer_needed(iVar0);
		}
		if (func_477(uParam0, Param2, &iVar0))
		{
			*uParam0->f_672[iParam1] = { Param2 };
			request_model(iVar0, false);
			return 1;
		}
		else
		{
			*uParam0->f_672[iParam1] = { func_330() };
			return 0;
		}
	}
	return 1;
}

void func_696(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (&uParam0->f_818[iParam1] == 0)
	{
	}
	else if (uParam0->f_818[iParam1]->f_50)
	{
	}
	else if (uParam0->f_818[iParam1]->f_8 != 1)
	{
	}
	else if (uParam0->f_818[iParam1]->f_1 != 1 && uParam0->f_818[iParam1]->f_1 != 2)
	{
	}
	else if ((iParam2 != 1 && iParam2 != 2) && iParam2 != 3)
	{
	}
	else if (uParam0->f_795 != -1)
	{
	}
	else
	{
		func_471(uParam0, iParam1, 8);
		uParam0->f_795 = iParam2;
		uParam0->f_796 = iParam3;
		if (func_455(uParam0, iParam1) == 2)
		{
			func_476(uParam0, iParam1, 2);
		}
		func_1133(uParam0, iParam1, 15);
	}
}

void func_697(var uParam0, var uParam1)
{
	func_1320(uParam0, uParam1);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_913(uParam1, iVar0))
		{
			func_1059(&(uParam0->f_2337), iVar0, 0);
			func_1205(&(uParam0->f_2337), iVar0, func_204(uParam1, iVar0));
			func_1049(&(uParam0->f_2337), iVar0, 0);
			if (func_204(uParam1, iVar0) <= 0)
			{
			}
			else if (func_1293(uParam1, &(uParam0->f_152.f_11), iVar0))
			{
			}
			else
			{
				func_1048(&(uParam0->f_2337), iVar0, func_1224(uParam0, iVar0));
			}
		}
		iVar0++;
	}
}

void func_698(var uParam0, var uParam1)
{
	func_1089(&(uParam0->f_2337), 0, 1);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iVar0 < uParam1->f_15.f_23)
		{
			func_1054(&(uParam0->f_2337), iVar0, func_1053(uParam1, iVar0), 0, 1);
		}
		else
		{
			func_1054(&(uParam0->f_2337), iVar0, func_330(), 0, 1);
		}
		iVar0++;
	}
}

bool func_699(var uParam0, int iParam1, var uParam2)
{
	return (func_1237(uParam0, iParam1, uParam2) && func_1238(uParam0, uParam0->f_3) != iParam1);
}

int func_700(var uParam0)
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_702(uParam0, iVar1))
		{
			set_bit(&iVar0, iVar1);
		}
		iVar1++;
	}
	return iVar0;
}

void func_701(var uParam0, var uParam1, int iParam2)
{
	func_1320(uParam0, uParam1);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_913(uParam1, iVar0))
		{
			func_1059(&(uParam0->f_2337), iVar0, 1);
			func_1048(&(uParam0->f_2337), iVar0, func_1060());
			func_1049(&(uParam0->f_2337), iVar0, 0);
			func_1061(&(uParam0->f_2337), iVar0);
			func_1062(&(uParam0->f_2337), iVar0, 0, func_330());
			func_1062(&(uParam0->f_2337), iVar0, 1, func_330());
			func_1063(&(uParam0->f_2337), iVar0, 0);
			func_1063(&(uParam0->f_2337), iVar0, 1);
		}
		iVar0++;
	}
}

bool func_702(var uParam0, int iParam1)
{
	if (((iParam1 >= 0 && iParam1 < 6) && &uParam0->f_39[iParam1] != -1) && uParam0->f_39[iParam1]->f_6 == 2)
	{
		return true;
	}
	return false;
}

bool func_703(var uParam0, int iParam1)
{
	return (func_636(*(*uParam0->f_617[iParam1])[0]) && func_636(*(*uParam0->f_617[iParam1])[1]));
}

void func_704(var uParam0)
{
	uParam0->f_152.f_2055 = -1;
	uParam0->f_152.f_2056 = -1;
	uParam0->f_152.f_2057 = 0;
	uParam0->f_152.f_2058 = 0;
}

bool func_705(var uParam0, var uParam1, int iParam2)
{
	*uParam1 = uParam0->f_3;
	return func_716(uParam0, uParam1, iParam2, 1);
}

void func_706(var uParam0, int iParam1)
{
	iVar0 = uParam0->f_152.f_2055;
	if (!func_702(&(uParam0->f_152.f_416), iVar0))
	{
		iVar0 = -1;
		iVar1 = 0;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (iVar2 != iParam1)
			{
				if (func_702(&(uParam0->f_152.f_416), iVar2) && func_779(&(uParam0->f_2841), iVar2) == 3)
				{
					set_bit(&iVar1, iVar2);
				}
			}
			iVar2++;
		}
		iVar4 = 0;
		while (iVar4 < 6)
		{
			if (is_bit_set(iVar1, iVar4))
			{
				bVar3 = false;
				iVar5 = 0;
				while (iVar5 < 6)
				{
					if ((iVar4 != iVar5 && is_bit_set(iVar1, iVar5)) && func_1321(&(uParam0->f_152.f_416), iVar5, iVar4))
					{
						bVar3 = true;
					}
					else
					{
						iVar5++;
					}
				}
				if (!bVar3)
				{
					iVar0 = iVar4;
				}
				else
				{
					iVar4++;
				}
				uParam0->f_152.f_2055 = iVar0;
				uParam0->f_152.f_2056 = iParam1;
				if (!func_624(&(uParam0->f_152.f_416), iParam1))
				{
					uParam0->f_152.f_2057 = 0;
					uParam0->f_152.f_2058 = 0;
				}
				else if (!func_702(&(uParam0->f_152.f_416), iVar0))
				{
					uParam0->f_152.f_2057 = func_1322(&(uParam0->f_152.f_416), iParam1) > 0;
					uParam0->f_152.f_2058 = 0;
				}
				else
				{
					uParam0->f_152.f_2057 = func_1323(&(uParam0->f_152.f_416), iParam1, iVar0);
					uParam0->f_152.f_2058 = func_1321(&(uParam0->f_152.f_416), iParam1, iVar0);
				}
			}
		}
	}
}

void func_707(var uParam0, int iParam1, int iParam2)
{
	if (&uParam0->f_818[iParam1] == 0)
	{
	}
	else if (uParam0->f_818[iParam1]->f_50)
	{
	}
	else if (uParam0->f_818[iParam1]->f_8 != 1)
	{
	}
	else if (uParam0->f_818[iParam1]->f_1 != 2)
	{
	}
	else
	{
		func_471(uParam0, iParam1, 16);
		func_1133(uParam0, iParam1, 45);
		uParam0->f_803 = ((uParam0->f_803 + get_random_int_in_range(1, 3)) % 3);
		uParam0->f_818[iParam1]->f_41 = iParam2;
		uParam0->f_818[iParam1]->f_43 = uParam0->f_803;
		func_475(uParam0, iParam1, 1);
		func_1235(uParam0, iParam1, 2);
		if (func_778(uParam0, iParam1))
		{
			func_1236(uParam0, iParam1, 3);
		}
	}
}

void func_708(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	if (!uParam0->f_1671.f_118)
	{
		return;
	}
	if (iParam3 < 0 || iParam3 >= 6)
	{
		return;
	}
	if (!uParam1[iParam3])
	{
		return;
	}
	func_1225(uParam1, 6, iParam3);
	if (bParam4)
	{
		set_bit(&(uParam1->f_142), iParam3);
	}
	else
	{
		set_bit(&(uParam1->f_141), iParam3);
	}
	if (!uParam1->f_140)
	{
		uParam1->f_140 = 1;
		if (uParam0->f_1548 == 9)
		{
			iVar2 = func_749(uParam2, iParam3);
			uParam1->f_144 = uParam1->f_146;
			uParam1->f_143 = 0;
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_913(uParam2, iVar0) || (bParam4 && iVar0 == iParam3))
				{
					if (func_749(uParam2, iVar0) == iVar2)
					{
						set_bit(&(uParam1->f_144), iVar0);
						set_bit(&(uParam1->f_143), iVar0);
					}
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_1324(uParam2, iVar2, iVar0))
				{
					iVar1 = func_1325(uParam2, iVar0, iVar2);
					uParam1->f_151[iVar0] = (to_float(iVar1) / to_float((*uParam1)[iVar0]->f_3));
				}
				else
				{
					uParam1->f_151[iVar0] = 0f;
				}
				iVar0++;
			}
		}
		else if (uParam0->f_1548 == 6)
		{
			uParam1->f_144 = 0;
			uParam1->f_143 = 0;
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_913(uParam2, iVar0))
				{
					set_bit(&(uParam1->f_144), iVar0);
					set_bit(&(uParam1->f_143), iVar0);
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_913(uParam2, iVar0))
				{
					iVar1 = func_691(uParam2, iVar0);
					uParam1->f_151[iVar0] = (to_float(iVar1) / to_float((*uParam1)[iVar0]->f_3));
				}
				iVar0++;
			}
		}
	}
	uParam1->f_147 = uParam1->f_145;
	uParam1->f_148 = uParam1->f_146;
	if (!bParam4)
	{
		if (uParam1->f_145 == -1)
		{
			uParam1->f_145 = iParam3;
			set_bit(&(uParam1->f_146), iParam3);
			if (func_1322(uParam2, iParam3) > 0)
			{
				set_bit(&(uParam1->f_79[0]->f_2), 13);
			}
		}
		else if (func_1323(uParam2, iParam3, uParam1->f_145))
		{
			if (func_1321(uParam2, iParam3, uParam1->f_145))
			{
				uParam1->f_145 = iParam3;
				uParam1->f_146 = 0;
			}
			set_bit(&(uParam1->f_146), iParam3);
			set_bit(&(uParam1->f_79[0]->f_2), 13);
		}
	}
	else if (uParam1->f_145 == -1)
	{
	}
	uParam1->f_149 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if ((is_bit_set(uParam1->f_141, iVar0) && is_bit_set(uParam1->f_144, iVar0)) && !is_bit_set(uParam1->f_146, iVar0))
		{
			if (func_1326(uParam2, iVar0, uParam1->f_145))
			{
				set_bit(&(uParam1->f_149), iVar0);
			}
		}
		iVar0++;
	}
	iVar3 = -1;
	uParam1->f_150 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (((is_bit_set(uParam1->f_141, iVar0) && is_bit_set(uParam1->f_144, iVar0)) && !is_bit_set(uParam1->f_146, iVar0)) && !is_bit_set(uParam1->f_149, iVar0))
		{
			if (iVar3 == -1 || func_1321(uParam2, iVar3, iVar0))
			{
				iVar3 = iVar0;
				uParam1->f_150 = 0;
				set_bit(&(uParam1->f_150), iVar0);
			}
			else if (func_1327(uParam2, iVar3, iVar0))
			{
				set_bit(&(uParam1->f_150), iVar0);
			}
		}
		iVar0++;
	}
}

void func_709(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	if (func_1239(uParam0, uParam1, uParam2, uParam3, iParam4, 4, -1))
	{
		bVar0 = func_1328(uParam1, iParam4);
		bVar1 = func_1329(uParam1);
		bVar2 = func_1330(uParam1);
		bVar3 = (func_1331(uParam1) && func_365(uParam1->f_144) < func_365(func_1332(uParam3)));
		bVar4 = func_1333(uParam1, iParam4);
		bVar5 = func_1334(uParam1, iParam4);
		bVar6 = func_1335(uParam1, iParam4);
		bVar7 = func_1336(uParam1, iParam4);
		if (bVar2 && func_1322(uParam3, iParam4) <= 1)
		{
			if (bVar3)
			{
				if (_0x61b2aaef645ddaf0(uParam2->f_807, "reveal_first_samePlayers", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
				{
					return;
				}
			}
			if (_0x61b2aaef645ddaf0(uParam2->f_807, "reveal_first", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
			{
				return;
			}
			if (!bVar1)
			{
				_0x61b2aaef645ddaf0(uParam2->f_807, "reveal_bad", &(uParam2->f_818[iParam4]), 0, uParam2->f_40);
				return;
			}
		}
		if (bVar0)
		{
			if (bVar4)
			{
				if (_0x61b2aaef645ddaf0(uParam2->f_807, "reveal_good_closeWinAgain", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
				{
					return;
				}
			}
			if (bVar5)
			{
				if (_0x61b2aaef645ddaf0(uParam2->f_807, "reveal_good_closeWin", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
				{
					return;
				}
			}
			if (_0x61b2aaef645ddaf0(uParam2->f_807, "reveal_good", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
			{
				return;
			}
		}
		else
		{
			if (bVar6)
			{
				if (_0x61b2aaef645ddaf0(uParam2->f_807, "reveal_bad_closeLossAgain", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
				{
					return;
				}
			}
			if (bVar7)
			{
				if (_0x61b2aaef645ddaf0(uParam2->f_807, "reveal_bad_closeLoss", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
				{
					return;
				}
			}
			if (_0x61b2aaef645ddaf0(uParam2->f_807, "reveal_bad", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
			{
				return;
			}
		}
	}
}

void func_710(var uParam0, var uParam1)
{
	func_1048(&(uParam0->f_2337), uParam0->f_152.f_2047, func_991(uParam1, uParam0->f_152.f_2047, 1));
	func_1049(&(uParam0->f_2337), uParam0->f_152.f_2047, 1);
	func_1061(&(uParam0->f_2337), uParam0->f_152.f_2047);
	func_1062(&(uParam0->f_2337), uParam0->f_152.f_2047, 0, func_635(uParam1, uParam0->f_152.f_2047, 0));
	func_1062(&(uParam0->f_2337), uParam0->f_152.f_2047, 1, func_635(uParam1, uParam0->f_152.f_2047, 1));
	func_1064(&(uParam0->f_2337), uParam0->f_152.f_2047, 0);
}

int func_711(var uParam0, int iParam1)
{
	iVar0 = func_1337(&(uParam0->f_416), iParam1);
	iVar1 = func_204(&(uParam0->f_416), iParam1);
	fVar2 = (to_float(iVar0) / to_float((iVar1 + iVar0)));
	if (fVar2 > 0.4f)
	{
		return 1;
	}
	return 0;
}

void func_712(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (&uParam0->f_818[iParam1] == 0)
	{
	}
	else if (uParam0->f_818[iParam1]->f_50)
	{
	}
	else if (uParam0->f_818[iParam1]->f_8 != 1)
	{
	}
	else if (uParam0->f_818[iParam1]->f_1 != 1)
	{
	}
	else
	{
		func_471(uParam0, iParam1, 25);
		uParam0->f_804 = ((uParam0->f_804 + get_random_int_in_range(1, 3)) % 3);
		uParam0->f_818[iParam1]->f_41 = iParam2;
		uParam0->f_818[iParam1]->f_42 = iParam3;
		uParam0->f_818[iParam1]->f_43 = uParam0->f_804;
		if (!uParam0->f_40)
		{
			set_task_move_network_signal_float(&(uParam0->f_818[iParam1]), "WinLossType", to_float(uParam0->f_818[iParam1]->f_41));
			set_task_move_network_signal_float(&(uParam0->f_818[iParam1]), "IntensityType", to_float(uParam0->f_818[iParam1]->f_42));
			set_task_move_network_signal_float(&(uParam0->f_818[iParam1]), "VariationType", to_float(uParam0->f_818[iParam1]->f_43));
			request_task_move_network_state_transition(&(uParam0->f_818[iParam1]), "Express");
		}
	}
}

void func_713(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	if (func_1239(uParam0, uParam1, uParam2, uParam3, iParam4, 4, -1))
	{
		fVar0 = func_887(uParam1, iParam4);
		fVar1 = func_905(uParam1, iParam4);
		bVar2 = func_1311(fVar1);
		bVar3 = func_1312(fVar1);
		bVar4 = func_893(fVar1);
		bVar5 = func_1309(fVar0);
		if (bVar5)
		{
			if (bVar2)
			{
				if (_0x61b2aaef645ddaf0(uParam2->f_807, "beaten_angry_lvl2", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
				{
					return;
				}
			}
			else if (bVar3 || bVar4)
			{
				if (_0x61b2aaef645ddaf0(uParam2->f_807, "beaten_angry_lvl1", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
				{
					return;
				}
			}
		}
		else if (bVar2)
		{
			if (_0x61b2aaef645ddaf0(uParam2->f_807, "beaten_frustrated_lvl2", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
			{
				return;
			}
		}
		else if (bVar3 || bVar4)
		{
			if (_0x61b2aaef645ddaf0(uParam2->f_807, "beaten_frustrated_lvl1", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
			{
				return;
			}
		}
		if (_0x61b2aaef645ddaf0(uParam2->f_807, "beaten_base", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
		{
			return;
		}
	}
}

void func_714(var uParam0)
{
	func_1049(&(uParam0->f_2337), uParam0->f_152.f_2047, 0);
}

void func_715(var uParam0)
{
	if (!func_702(&(uParam0->f_152.f_416), uParam0->f_152.f_2055) || uParam0->f_152.f_2058)
	{
		uParam0->f_152.f_2055 = uParam0->f_152.f_2056;
	}
	uParam0->f_152.f_2056 = -1;
	uParam0->f_152.f_2057 = 0;
	uParam0->f_152.f_2058 = 0;
}

bool func_716(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (*uParam1 < 0 || *uParam1 >= 6)
	{
		*uParam1 = -1;
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam3 == 0)
		{
			if (*uParam1 == uParam0->f_3)
			{
				*uParam1 = -1;
				return false;
			}
		}
		*uParam1 = (*uParam1 + 1 % 6);
		if (func_624(uParam0, *uParam1) && uParam0->f_39[*uParam1]->f_6 == iParam2)
		{
			return true;
		}
		iVar0++;
	}
	*uParam1 = -1;
	return false;
}

int func_717(var uParam0, bool bParam1)
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_485)
	{
		iVar2 = 0;
		while (iVar2 < uParam0->f_376[iVar1]->f_17)
		{
			if (!bParam1 || func_203(uParam0, &(uParam0->f_376[iVar1]->f_10[iVar2])))
			{
				set_bit(&iVar0, &(uParam0->f_376[iVar1]->f_10[iVar2]));
			}
			iVar2++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_718(var uParam0, var uParam1, int iParam2)
{
	Var0.f_15 = 11;
	Var0.f_39 = 6;
	Var0.f_39.f_1.f_7 = 11;
	Var0.f_39.f_1.f_31 = 11;
	Var0.f_39.f_1.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_56.f_31 = 11;
	Var0.f_376 = 6;
	Var0.f_376.f_1.f_2 = 6;
	Var0.f_376.f_1.f_10 = 6;
	Var0.f_376.f_1.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_18.f_10 = 6;
	func_1338(uParam1, &Var0, iParam2);
	iVar486 = 0;
	while (iLocal_491 < Var0.f_15.f_23)
	{
		func_1054(&(uParam0->f_2337), iLocal_491, func_1053(&Var0, iLocal_491), 0, 1);
		iVar486 = iLocal_491 + 1;
	}
	iVar487 = 0;
	while (iLocal_492 < 6)
	{
		if (func_913(&Var0, iLocal_492))
		{
			func_1048(&(uParam0->f_2337), iLocal_492, func_991(&Var0, iLocal_492, 1));
			func_1049(&(uParam0->f_2337), iLocal_492, 0);
		}
		iVar487 = iLocal_492 + 1;
	}
}

void func_719(var uParam0, var uParam1, int iParam2)
{
	Var0.f_15 = 11;
	Var0.f_39 = 6;
	Var0.f_39.f_1.f_7 = 11;
	Var0.f_39.f_1.f_31 = 11;
	Var0.f_39.f_1.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_56.f_31 = 11;
	Var0.f_376 = 6;
	Var0.f_376.f_1.f_2 = 6;
	Var0.f_376.f_1.f_10 = 6;
	Var0.f_376.f_1.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_18.f_10 = 6;
	func_1338(uParam1, &Var0, iParam2);
	uParam0->f_2059 = 0;
	uParam0->f_2060 = 0;
	if (Var0.f_485 > 0)
	{
		iVar486 = 0;
		while (iLocal_491 < Var0.f_376[0]->f_17)
		{
			set_bit(&(uParam0->f_2060), &(Var0.f_376[0]->f_10[iLocal_491]));
			iVar486 = iLocal_491 + 1;
		}
	}
	uParam0->f_2061 = 0;
	uParam0->f_2062 = 0;
	uParam0->f_2063 = 0;
}

void func_720(var uParam0)
{
	*uParam0++;
}

float func_721(var uParam0, int iParam1)
{
	return func_1339(&(uParam0->f_818[iParam1]->f_10));
}

void func_722(var uParam0, var uParam1, var uParam2)
{
	if (!uParam0->f_1671.f_118)
	{
		return;
	}
	func_1225(uParam1, 9, -1);
	Var0.f_15 = 11;
	Var0.f_39 = 6;
	Var0.f_39.f_1.f_7 = 11;
	Var0.f_39.f_1.f_31 = 11;
	Var0.f_39.f_1.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_56.f_31 = 11;
	Var0.f_376 = 6;
	Var0.f_376.f_1.f_2 = 6;
	Var0.f_376.f_1.f_10 = 6;
	Var0.f_376.f_1.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_18.f_10 = 6;
	func_1338(uParam2, &Var0, 1);
	uParam1->f_147 = uParam1->f_145;
	uParam1->f_148 = uParam1->f_146;
	uParam1->f_145 = -1;
	uParam1->f_146 = 0;
	iVar486 = 0;
	while (iLocal_491 < 6)
	{
		if (is_bit_set(uParam1->f_141, iLocal_491))
		{
			if (uParam1->f_145 == -1 || func_1321(&Var0, iLocal_491, uParam1->f_145))
			{
				uParam1->f_145 = iLocal_491;
				uParam1->f_146 = 0;
				set_bit(&(uParam1->f_146), iLocal_491);
			}
			else if (func_1323(&Var0, iLocal_491, uParam1->f_145))
			{
				set_bit(&(uParam1->f_146), iLocal_491);
			}
		}
		iVar486 = iLocal_491 + 1;
	}
	uParam1->f_149 = 0;
	iVar486 = 0;
	while (iLocal_491 < 6)
	{
		if (is_bit_set(uParam1->f_141, iLocal_491) && !is_bit_set(uParam1->f_146, iLocal_491))
		{
			if (func_1326(uParam2, iLocal_491, uParam1->f_145))
			{
				set_bit(&(uParam1->f_149), iLocal_491);
			}
		}
		iVar486 = iLocal_491 + 1;
	}
	iVar487 = -1;
	uParam1->f_150 = 0;
	iVar486 = 0;
	while (iLocal_491 < 6)
	{
		if ((is_bit_set(uParam1->f_141, iLocal_491) && !is_bit_set(uParam1->f_146, iLocal_491)) && !is_bit_set(uParam1->f_149, iLocal_491))
		{
			if (iLocal_492 == -1 || func_1321(uParam2, iLocal_492, iLocal_491))
			{
				iVar487 = iLocal_491;
				uParam1->f_150 = 0;
				set_bit(&(uParam1->f_150), iLocal_491);
			}
			else if (func_1327(uParam2, iLocal_492, iLocal_491))
			{
				set_bit(&(uParam1->f_150), iLocal_491);
			}
		}
		iVar486 = iLocal_491 + 1;
	}
	uParam1->f_166 = 0;
	uParam1->f_167 = 0;
	uParam1->f_168 = 0;
	uParam1->f_169 = 0;
	uParam1->f_170 = 0;
}

void func_723(var uParam0, var uParam1, int iParam2)
{
	Var0.f_15 = 11;
	Var0.f_39 = 6;
	Var0.f_39.f_1.f_7 = 11;
	Var0.f_39.f_1.f_31 = 11;
	Var0.f_39.f_1.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_56.f_31 = 11;
	Var0.f_376 = 6;
	Var0.f_376.f_1.f_2 = 6;
	Var0.f_376.f_1.f_10 = 6;
	Var0.f_376.f_1.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_18.f_10 = 6;
	func_1338(uParam1, &Var0, iParam2);
	uParam0->f_2059 = uParam0->f_2060;
	uParam0->f_2060 = 0;
	if (Var0.f_485 > 0)
	{
		iVar486 = 0;
		while (iLocal_491 < Var0.f_376[0]->f_17)
		{
			set_bit(&(uParam0->f_2060), &(Var0.f_376[0]->f_10[iLocal_491]));
			iVar486 = iLocal_491 + 1;
		}
	}
	func_1340(uParam0);
	switch (iParam2)
	{
		case 1:
			func_1341(uParam0, func_1332(&Var0), 1, 0f, 0f);
			break;
		case 2:
			func_1341(uParam0, func_1332(&Var0), 2, 0f, 0f);
			break;
		case 3:
			func_1341(uParam0, func_1332(&Var0), 3, 0.1f, 0f);
			break;
	}
}

void func_724(var uParam0, var uParam1, var uParam2)
{
	if (!uParam0->f_1671.f_118)
	{
		return;
	}
	func_1225(uParam1, 10, -1);
	Var0.f_15 = 11;
	Var0.f_39 = 6;
	Var0.f_39.f_1.f_7 = 11;
	Var0.f_39.f_1.f_31 = 11;
	Var0.f_39.f_1.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_56.f_31 = 11;
	Var0.f_376 = 6;
	Var0.f_376.f_1.f_2 = 6;
	Var0.f_376.f_1.f_10 = 6;
	Var0.f_376.f_1.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_18.f_10 = 6;
	func_1338(uParam2, &Var0, 2);
	uParam1->f_147 = uParam1->f_145;
	uParam1->f_148 = uParam1->f_146;
	uParam1->f_145 = -1;
	uParam1->f_146 = 0;
	iVar486 = 0;
	while (iLocal_491 < 6)
	{
		if (is_bit_set(uParam1->f_141, iLocal_491))
		{
			if (uParam1->f_145 == -1 || func_1321(&Var0, iLocal_491, uParam1->f_145))
			{
				uParam1->f_145 = iLocal_491;
				uParam1->f_146 = 0;
				set_bit(&(uParam1->f_146), iLocal_491);
			}
			else if (func_1323(&Var0, iLocal_491, uParam1->f_145))
			{
				set_bit(&(uParam1->f_146), iLocal_491);
			}
		}
		iVar486 = iLocal_491 + 1;
	}
	uParam1->f_149 = 0;
	iVar486 = 0;
	while (iLocal_491 < 6)
	{
		if (is_bit_set(uParam1->f_141, iLocal_491) && !is_bit_set(uParam1->f_146, iLocal_491))
		{
			if (func_1326(uParam2, iLocal_491, uParam1->f_145))
			{
				set_bit(&(uParam1->f_149), iLocal_491);
			}
		}
		iVar486 = iLocal_491 + 1;
	}
	iVar487 = -1;
	uParam1->f_150 = 0;
	iVar486 = 0;
	while (iLocal_491 < 6)
	{
		if ((is_bit_set(uParam1->f_141, iLocal_491) && !is_bit_set(uParam1->f_146, iLocal_491)) && !is_bit_set(uParam1->f_149, iLocal_491))
		{
			if (iLocal_492 == -1 || func_1321(uParam2, iLocal_492, iLocal_491))
			{
				iVar487 = iLocal_491;
				uParam1->f_150 = 0;
				set_bit(&(uParam1->f_150), iLocal_491);
			}
			else if (func_1327(uParam2, iLocal_492, iLocal_491))
			{
				set_bit(&(uParam1->f_150), iLocal_491);
			}
		}
		iVar486 = iLocal_491 + 1;
	}
	uParam1->f_166 = 0;
	uParam1->f_167 = 0;
	uParam1->f_168 = 0;
	uParam1->f_169 = 0;
	uParam1->f_170 = 0;
}

void func_725(var uParam0, var uParam1)
{
	func_992(&(uParam0->f_2337));
	iVar0 = 0;
	while (iVar0 < uParam1->f_15.f_23)
	{
		func_1054(&(uParam0->f_2337), iVar0, func_1053(uParam1, iVar0), 0, 1);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_913(uParam1, iVar1))
		{
			if (func_731(uParam1, iVar1))
			{
				func_1048(&(uParam0->f_2337), iVar1, func_1342(&(uParam0->f_2337), func_991(uParam1, iVar1, 1), func_919(uParam1, iVar1)));
				func_1064(&(uParam0->f_2337), iVar1, 1);
				func_1049(&(uParam0->f_2337), iVar1, 1);
			}
			else
			{
				func_1048(&(uParam0->f_2337), iVar1, func_991(uParam1, iVar1, 1));
				func_1049(&(uParam0->f_2337), iVar1, 0);
			}
		}
		iVar1++;
	}
}

void func_726(var uParam0, var uParam1, var uParam2)
{
	if (!uParam0->f_1671.f_118)
	{
		return;
	}
	func_1225(uParam1, 11, -1);
	Var0.f_15 = 11;
	Var0.f_39 = 6;
	Var0.f_39.f_1.f_7 = 11;
	Var0.f_39.f_1.f_31 = 11;
	Var0.f_39.f_1.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_56.f_31 = 11;
	Var0.f_376 = 6;
	Var0.f_376.f_1.f_2 = 6;
	Var0.f_376.f_1.f_10 = 6;
	Var0.f_376.f_1.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_18.f_10 = 6;
	func_1338(uParam2, &Var0, 3);
	iVar486 = 0;
	while (iLocal_491 < 6)
	{
		uParam1->f_158[iLocal_491] = 0f;
		iVar486 = iLocal_491 + 1;
	}
	uParam1->f_140 = 0;
	uParam1->f_147 = uParam1->f_145;
	uParam1->f_148 = uParam1->f_146;
	uParam1->f_145 = -1;
	uParam1->f_146 = 0;
	iVar486 = 0;
	while (iLocal_491 < 6)
	{
		if (is_bit_set(uParam1->f_141, iLocal_491))
		{
			if (uParam1->f_145 == -1 || func_1321(&Var0, iLocal_491, uParam1->f_145))
			{
				uParam1->f_145 = iLocal_491;
				uParam1->f_146 = 0;
				set_bit(&(uParam1->f_146), iLocal_491);
			}
			else if (func_1323(&Var0, iLocal_491, uParam1->f_145))
			{
				set_bit(&(uParam1->f_146), iLocal_491);
			}
		}
		iVar486 = iLocal_491 + 1;
	}
	uParam1->f_149 = 0;
	iVar486 = 0;
	while (iLocal_491 < 6)
	{
		if (is_bit_set(uParam1->f_141, iLocal_491) && !is_bit_set(uParam1->f_146, iLocal_491))
		{
			if (func_1326(uParam2, iLocal_491, uParam1->f_145))
			{
				set_bit(&(uParam1->f_149), iLocal_491);
			}
		}
		iVar486 = iLocal_491 + 1;
	}
	iVar487 = -1;
	uParam1->f_150 = 0;
	iVar486 = 0;
	while (iLocal_491 < 6)
	{
		if ((is_bit_set(uParam1->f_141, iLocal_491) && !is_bit_set(uParam1->f_146, iLocal_491)) && !is_bit_set(uParam1->f_149, iLocal_491))
		{
			if (iLocal_492 == -1 || func_1321(uParam2, iLocal_492, iLocal_491))
			{
				iVar487 = iLocal_491;
				uParam1->f_150 = 0;
				set_bit(&(uParam1->f_150), iLocal_491);
			}
			else if (func_1327(uParam2, iLocal_492, iLocal_491))
			{
				set_bit(&(uParam1->f_150), iLocal_491);
			}
		}
		iVar486 = iLocal_491 + 1;
	}
	iVar486 = 0;
	while (iLocal_491 < 6)
	{
		if (is_bit_set(uParam1->f_144, iLocal_491))
		{
			uVar488 = (*uParam1)[iLocal_491]->f_3;
			iVar489 = (func_919(uParam2, iLocal_491) - func_691(uParam2, iLocal_491));
			fVar490 = (to_float(iLocal_494) / to_float(iLocal_493));
			if (fLocal_495 < 0f)
			{
				fVar490 = 0f;
			}
			uParam1->f_158[iLocal_491] = fLocal_495;
		}
		iVar486 = iLocal_491 + 1;
	}
	uParam1->f_166 = 0;
	uParam1->f_167 = 0;
	uParam1->f_168 = 0;
	uParam1->f_169 = 0;
	uParam1->f_170 = 0;
	iVar486 = 0;
	while (iLocal_491 < 6)
	{
		if (is_bit_set(uParam1->f_144, iLocal_491))
		{
			if (is_bit_set(uParam1->f_146, iLocal_491))
			{
				if (is_bit_set(uParam1->f_143, iLocal_491))
				{
					func_1343(uParam1, iLocal_491);
				}
				func_1344(uParam1, iLocal_491, uParam1->f_149 != 0);
				func_1345(uParam1, iLocal_491, 0);
			}
			else
			{
				func_1264(uParam1, iLocal_491);
				func_1345(uParam1, iLocal_491, is_bit_set(uParam1->f_149, iLocal_491));
				func_1344(uParam1, iLocal_491, 0);
			}
		}
		iVar486 = iLocal_491 + 1;
	}
}

bool func_727(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_485)
	{
		iVar1 = 0;
		while (iVar1 < uParam0->f_376[iVar0]->f_17)
		{
			if (&uParam0->f_376[iVar0]->f_10[iVar1] == iParam1)
			{
				return true;
			}
			iVar1++;
		}
		iVar0++;
	}
	return false;
}

bool func_728(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (&uParam0->f_2021[iVar0] != 0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_729(var uParam0)
{
	if (uParam0->f_152.f_1627 == 1 || uParam0->f_152.f_1627 == 2)
	{
		return true;
	}
	return false;
}

int func_730(var uParam0, bool bParam1)
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_485)
	{
		iVar2 = 0;
		while (iVar2 < uParam0->f_376[iVar1]->f_17)
		{
			if (!bParam1 || func_203(uParam0, &(uParam0->f_376[iVar1]->f_10[iVar2])))
			{
				set_bit(&iVar0, &(uParam0->f_376[iVar1]->f_10[iVar2]));
			}
			iVar2++;
		}
		iVar1++;
	}
	return func_365(iVar0);
}

bool func_731(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return false;
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < uParam0->f_485)
		{
			iVar0 = 0;
			while (iVar0 < uParam0->f_376[iVar1]->f_17)
			{
				if (&uParam0->f_376[iVar1]->f_10[iVar0] == iParam1)
				{
					return true;
				}
				iVar0++;
			}
			iVar1++;
		}
	}
	return false;
}

int func_732(var uParam0, bool bParam1)
{
	iVar0 = -1;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (!bParam1 || func_203(uParam0, iVar2))
		{
			if (func_727(uParam0, iVar2))
			{
				iVar3 = func_919(uParam0, iVar2);
				if (iVar0 == -1 || iVar1 < iVar3)
				{
					iVar0 = iVar2;
					iVar1 = iVar3;
				}
			}
		}
		iVar2++;
	}
	return iVar0;
}

bool func_733(var uParam0)
{
	if (uParam0->f_42)
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (&uParam0->f_818[iVar0] != 0 && uParam0->f_818[iVar0]->f_55)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_734(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (&uParam0->f_818[iParam1] == 0)
	{
	}
	else if (uParam0->f_818[iParam1]->f_50)
	{
	}
	else if (uParam0->f_818[iParam1]->f_8 != 1)
	{
	}
	else if (uParam0->f_818[iParam1]->f_1 != 1)
	{
	}
	else
	{
		func_471(uParam0, iParam1, 18);
		uParam0->f_818[iParam1]->f_19 = iParam2;
		if (bParam3)
		{
			set_bit(&(uParam0->f_818[iParam1]->f_20), 0);
		}
		func_1140(uParam0, iParam1, 1);
		func_1133(uParam0, iParam1, 42);
	}
}

void func_735(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (&uParam0->f_818[iParam1] == 0)
	{
	}
	else if (uParam0->f_818[iParam1]->f_50)
	{
	}
	else if (uParam0->f_818[iParam1]->f_8 != 1)
	{
	}
	else if (uParam0->f_818[iParam1]->f_1 != 1)
	{
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (is_bit_set(iParam2, iVar0) && iVar0 != iParam1)
			{
				if (&uParam0->f_818[iVar0] == 0)
				{
					return;
				}
				else if (uParam0->f_818[iVar0]->f_50)
				{
					return;
				}
				else if (uParam0->f_818[iVar0]->f_8 != 1)
				{
					return;
				}
				else if (uParam0->f_818[iVar0]->f_1 != 1)
				{
					return;
				}
			}
			iVar0++;
		}
		func_471(uParam0, iParam1, 19);
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (is_bit_set(iParam2, iVar0) && iVar0 != iParam1)
			{
				func_846(uParam0, iVar0, 1);
			}
			iVar0++;
		}
		uParam0->f_818[iParam1]->f_19 = iParam2;
		if (bParam4)
		{
			set_bit(&(uParam0->f_818[iParam1]->f_20), 0);
		}
		iVar0 = 0;
		while (iVar0 < 6)
		{
			uParam0->f_818[iParam1]->f_34[iVar0] = iParam3[iVar0];
			iVar0++;
		}
		func_1140(uParam0, iParam1, 1);
		func_1133(uParam0, iParam1, 42);
	}
}

bool func_736(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_1346(uParam0, iVar0))
		{
			if (is_ambient_speech_playing(&(uParam0->f_818[iVar0])))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_737(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (!uParam0->f_1671.f_118)
	{
		return;
	}
	if (iParam3 < 0 || iParam3 >= 6)
	{
		return;
	}
	if (!uParam1[iParam3])
	{
		return;
	}
	func_1225(uParam1, 12, iParam3);
	if (uParam2->f_2 == 0)
	{
		set_bit(&(uParam1->f_79[0]->f_2), 2);
	}
	if (uParam2->f_2 == 1)
	{
		set_bit(&(uParam1->f_79[0]->f_2), 3);
	}
	if (uParam2->f_2 == 2)
	{
		set_bit(&(uParam1->f_79[0]->f_2), 4);
	}
	if (uParam2->f_2 == 3)
	{
		set_bit(&(uParam1->f_79[0]->f_2), 5);
	}
}

void func_738(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	if (func_1239(uParam0, uParam1, uParam2, uParam3, iParam4, 1, -1))
	{
		fVar0 = func_912(uParam1, iParam4);
		bVar1 = func_892(fVar0);
		bVar2 = func_1347(uParam1);
		bVar3 = func_1348(uParam1);
		bVar4 = func_1265(uParam1);
		bVar5 = func_1349(uParam1);
		bVar6 = func_1350(uParam1);
		if (bVar2)
		{
			if (bVar4)
			{
				if (_0x61b2aaef645ddaf0(uParam2->f_807, "scoop_stealPreFlop", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
				{
					return;
				}
			}
			else if (bVar5)
			{
				if (_0x61b2aaef645ddaf0(uParam2->f_807, "scoop_stealFlop", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
				{
					return;
				}
			}
			else if (bVar6)
			{
				if (_0x61b2aaef645ddaf0(uParam2->f_807, "scoop_stealRiver", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
				{
					return;
				}
			}
		}
		if (bVar3)
		{
			if (_0x61b2aaef645ddaf0(uParam2->f_807, "scoop_splitPot", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
			{
				return;
			}
		}
		if (bVar1)
		{
			if (_0x61b2aaef645ddaf0(uParam2->f_807, "scoop_base_bigWin", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
			{
				return;
			}
		}
		else if (_0x61b2aaef645ddaf0(uParam2->f_807, "scoop_base_smallWin", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
		{
			return;
		}
	}
}

void func_739(var uParam0, var uParam1, var uParam2)
{
	if (func_730(uParam2, 0) < 1)
	{
		return;
	}
	StringCopy(&cVar34, "", 64);
	bVar45 = true;
	iVar46 = 0;
	iVar47 = 0;
	bVar48 = false;
	if (func_203(uParam2, uParam1->f_9))
	{
		iVar43 = 0;
		while (iVar43 < uParam2->f_485)
		{
			if (func_755(uParam2, iVar43, uParam1->f_9))
			{
				if (func_765(uParam2, iVar43) == 1)
				{
					set_bit(&iVar46, iVar43);
				}
				else
				{
					set_bit(&iVar47, iVar43);
				}
				if (func_1351(uParam2, iVar43))
				{
					bVar48 = true;
				}
			}
			iVar43++;
		}
	}
	if (uParam2->f_485 == 1 || func_1352(uParam2))
	{
		if (func_203(uParam2, uParam1->f_9) && func_755(uParam2, 0, uParam1->f_9))
		{
			StringCopy(&cVar18, func_1353(), 64);
			StringCopy(&cVar26, func_991(uParam2, uParam1->f_9, 0), 64);
			if (func_1351(uParam2, 0))
			{
				StringCopy(&cVar34, func_1354(), 64);
			}
			if (func_765(uParam2, 0) == 1)
			{
				func_800(&(uParam0->f_2337), _create_var_string(170, "MGPKR_MSG__YOU_WON_ONEPOT", &cVar18, &cVar26, &cVar34), 0);
			}
			else
			{
				func_800(&(uParam0->f_2337), _create_var_string(170, "MGPKR_MSG__YOU_SPLIT_ONEPOT", &cVar18, &cVar26, &cVar34), 0);
			}
		}
		else
		{
			iVar42 = func_769(uParam2, 0, 1);
			if (func_203(uParam2, iVar42))
			{
				Var0 = { func_443(uParam1, iVar42, 0, 1) };
				StringCopy(&cVar26, func_991(uParam2, iVar42, 0), 64);
			}
			else
			{
				iVar42 = func_769(uParam2, 0, 0);
				StringCopy(&Var0, func_1018(iVar42, uParam1->f_9), 128);
				bVar45 = false;
			}
			StringCopy(&cVar16, func_1355(func_765(uParam2, 0)), 16);
			StringCopy(&cVar18, func_1353(), 64);
			if (func_1351(uParam2, 0))
			{
				StringCopy(&cVar34, func_1354(), 64);
			}
			if (bVar45)
			{
				if (func_765(uParam2, 0) == 1)
				{
					func_800(&(uParam0->f_2337), _create_var_string(682, "MGPKR_MSG__THEY_WON_ONEPOT", &Var0, &cVar18, &cVar26, &cVar34), 0);
				}
				else
				{
					func_800(&(uParam0->f_2337), _create_var_string(682, "MGPKR_MSG__THEY_SPLIT_ONEPOT", &cVar16, &cVar18, &cVar26, &cVar34), 0);
				}
			}
			else if (func_765(uParam2, 0) == 1)
			{
				func_800(&(uParam0->f_2337), _create_var_string(170, "MGPKR_MSG__THEY_WON_ONEPOT_NOHAND", &Var0, &cVar18, &cVar34), 0);
			}
			else
			{
				func_800(&(uParam0->f_2337), _create_var_string(170, "MGPKR_MSG__THEY_SPLIT_ONEPOT_NOHAND", &cVar16, &cVar18, &cVar34), 0);
			}
		}
	}
	else if (func_203(uParam2, uParam1->f_9) && func_731(uParam2, uParam1->f_9))
	{
		if (iVar46 != 0 && iVar47 == 0)
		{
			iVar43 = func_1356(uParam2, uParam1->f_9);
			StringCopy(&cVar18, func_1357(iVar43, uParam2->f_485), 64);
			StringCopy(&cVar26, func_991(uParam2, uParam1->f_9, 0), 64);
			if (bVar48)
			{
				StringCopy(&cVar34, func_1354(), 64);
			}
			if (func_365(iVar46) == 1)
			{
				func_800(&(uParam0->f_2337), _create_var_string(170, "MGPKR_MSG__YOU_WON_ONEPOT", &cVar18, &cVar26, &cVar34), 0);
			}
			else
			{
				func_800(&(uParam0->f_2337), _create_var_string(42, "MGPKR_MSG__YOU_WON_SEVPOTS", &cVar26, &cVar34), 0);
			}
		}
		else if (iVar46 == 0 && iVar47 != 0)
		{
			iVar43 = func_1356(uParam2, uParam1->f_9);
			StringCopy(&cVar18, func_1357(iVar43, uParam2->f_485), 64);
			StringCopy(&cVar26, func_991(uParam2, uParam1->f_9, 0), 64);
			if (bVar48)
			{
				StringCopy(&cVar34, func_1354(), 64);
			}
			if (func_365(iVar47) == 1)
			{
				func_800(&(uParam0->f_2337), _create_var_string(170, "MGPKR_MSG__YOU_SPLIT_ONEPOT", &cVar18, &cVar26, &cVar34), 0);
			}
			else
			{
				func_800(&(uParam0->f_2337), _create_var_string(42, "MGPKR_MSG__YOU_SPLIT_SEVPOTS", &cVar26, &cVar34), 0);
			}
		}
		else if (iVar46 != 0 && iVar47 != 0)
		{
			StringCopy(&cVar26, func_991(uParam2, uParam1->f_9, 0), 64);
			if (bVar48)
			{
				StringCopy(&cVar34, func_1354(), 64);
			}
			func_800(&(uParam0->f_2337), _create_var_string(42, "MGPKR_MSG__YOU_WON_AND_SPLIT_SEVPOTS", &cVar26, &cVar34), 0);
		}
	}
	else
	{
		iVar44 = func_1358(uParam2);
		if (iVar44 == -1)
		{
		}
		else
		{
			iVar42 = func_769(uParam2, iVar44, 1);
			if (func_203(uParam2, iVar42))
			{
				Var0 = { func_443(uParam1, iVar42, 0, 1) };
				StringCopy(&cVar26, func_991(uParam2, iVar42, 0), 64);
			}
			else
			{
				iVar42 = func_769(uParam2, iVar44, 0);
				StringCopy(&Var0, func_1018(iVar42, uParam1->f_9), 128);
				bVar45 = false;
			}
			StringCopy(&cVar16, func_1355(func_765(uParam2, iVar44)), 16);
			StringCopy(&cVar18, func_1359(), 64);
			if (func_1351(uParam2, iVar44))
			{
				StringCopy(&cVar34, func_1354(), 64);
			}
			if (bVar45)
			{
				if (func_765(uParam2, iVar44) == 1)
				{
					func_800(&(uParam0->f_2337), _create_var_string(682, "MGPKR_MSG__THEY_WON_ONEPOT", &Var0, &cVar18, &cVar26, &cVar34), 0);
				}
				else
				{
					func_800(&(uParam0->f_2337), _create_var_string(682, "MGPKR_MSG__THEY_SPLIT_ONEPOT", &cVar16, &cVar18, &cVar26, &cVar34), 0);
				}
			}
			else if (func_765(uParam2, iVar44) == 1)
			{
				func_800(&(uParam0->f_2337), _create_var_string(170, "MGPKR_MSG__THEY_WON_ONEPOT_NOHAND", &Var0, &cVar18, &cVar34), 0);
			}
			else
			{
				func_800(&(uParam0->f_2337), _create_var_string(170, "MGPKR_MSG__THEY_SPLIT_ONEPOT_NOHAND", &cVar16, &cVar18, &cVar34), 0);
			}
		}
	}
}

void func_740(var uParam0)
{
	func_992(&(uParam0->f_2337));
}

void func_741(var uParam0, var uParam1)
{
	if (func_624(uParam1, uParam0->f_152.f_9))
	{
		if (func_919(uParam1, uParam0->f_152.f_9) > 0)
		{
			func_1360(-1672018311);
			if (func_440(uParam1, uParam0->f_152.f_9))
			{
				func_1227(func_1226(-1892463704, 842107262), 1);
			}
			else
			{
				switch (func_1322(uParam1, uParam0->f_152.f_9))
				{
					case 0:
						func_1227(func_1226(-1892463704, -1035035884), 1);
						break;
					case 1:
						func_1227(func_1226(-1892463704, 1851750194), 1);
						break;
					case 2:
						func_1227(func_1226(-1892463704, -677602211), 1);
						break;
					case 3:
						func_1227(func_1226(-1892463704, 450380649), 1);
						break;
					case 4:
						func_1227(func_1226(-1892463704, 1983277842), 1);
						break;
					case 5:
						func_1227(func_1226(-1892463704, -590603668), 1);
						break;
					case 6:
						func_1227(func_1226(-1892463704, 1799626492), 1);
						break;
					case 7:
						func_1227(func_1226(-1892463704, -665778455), 1);
						break;
					case 8:
						func_1227(func_1226(-1892463704, 1674444587), 1);
						break;
					case 9:
						func_1227(func_1226(-1892463704, -1876751264), 1);
						break;
				}
			}
		}
		else
		{
			func_1361(-1672018311);
		}
	}
}

void func_742(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (!uParam0->f_1671.f_118)
	{
		return;
	}
	if (iParam3 < 0 || iParam3 >= 6)
	{
		return;
	}
	if (!uParam1[iParam3])
	{
		return;
	}
	func_1225(uParam1, 8, iParam3);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam1->f_158[iVar0] = 0f;
		iVar0++;
	}
	uParam1->f_140 = 0;
	set_bit(&(uParam1->f_144), iParam3);
	set_bit(&(uParam1->f_143), iParam3);
	set_bit(&(uParam1->f_146), iParam3);
	uParam1->f_145 = iParam3;
	iVar1 = (*uParam1)[iParam3]->f_3;
	iVar2 = (func_1258(uParam2) - func_691(uParam2, iParam3));
	fVar3 = (to_float(iVar2) / to_float(iVar1));
	if (fVar3 < 0f)
	{
		fVar3 = 0f;
	}
	uParam1->f_158[iParam3] = fVar3;
	uParam1->f_165 = 0;
	func_1343(uParam1, iParam3);
	func_1344(uParam1, iParam3, 0);
	func_1345(uParam1, iParam3, 0);
}

void func_743(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	if (func_1239(uParam0, uParam1, uParam2, uParam3, iParam4, 1, -1))
	{
		fVar0 = func_912(uParam1, iParam4);
		fVar1 = func_887(uParam1, iParam4);
		bVar2 = func_1362(fVar0);
		bVar3 = func_1363(fVar0);
		bVar4 = func_1364(fVar0);
		bVar5 = func_892(fVar0);
		bVar6 = func_1309(fVar1);
		if (bVar2)
		{
			if (_0x61b2aaef645ddaf0(uParam2->f_807, "celebrate_excited_lvl3", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
			{
				return;
			}
		}
		else if (bVar3)
		{
			if (_0x61b2aaef645ddaf0(uParam2->f_807, "celebrate_excited_lvl2", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
			{
				return;
			}
			if (!bVar6)
			{
				if (_0x61b2aaef645ddaf0(uParam2->f_807, "celebrate_content_lvl3", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
				{
					return;
				}
			}
		}
		else if (bVar4)
		{
			if (_0x61b2aaef645ddaf0(uParam2->f_807, "celebrate_excited_lvl1", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
			{
				return;
			}
			if (!bVar6)
			{
				if (_0x61b2aaef645ddaf0(uParam2->f_807, "celebrate_content_lvl2", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
				{
					return;
				}
			}
		}
		if (bVar5)
		{
			if (_0x61b2aaef645ddaf0(uParam2->f_807, "celebrate_base_bigWin", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
			{
				return;
			}
		}
		else if (_0x61b2aaef645ddaf0(uParam2->f_807, "celebrate_base_smallWin", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
		{
			return;
		}
	}
}

void func_744(var uParam0, var uParam1)
{
	iVar0 = uParam0->f_152.f_2047;
	iVar1 = func_1258(uParam1);
	iVar2 = (func_1365(&(uParam0->f_2337), iVar0) + iVar1);
	func_1320(uParam0, uParam1);
	func_1061(&(uParam0->f_2337), iVar0);
	func_1062(&(uParam0->f_2337), iVar0, 0, func_330());
	func_1062(&(uParam0->f_2337), iVar0, 1, func_330());
	func_1048(&(uParam0->f_2337), iVar0, func_1366(&(uParam0->f_2337), iVar1));
	func_1064(&(uParam0->f_2337), iVar0, 1);
	func_1049(&(uParam0->f_2337), iVar0, 1);
	func_1205(&(uParam0->f_2337), iVar0, iVar2);
}

void func_745(var uParam0, var uParam1, int iParam2)
{
	if (iParam2 == uParam1->f_9)
	{
		func_800(&(uParam0->f_2337), _create_var_string(2, "MGPKR_MSG__YOU_STOLE_POT"), 0);
	}
	else
	{
		Var0 = { func_443(uParam1, iParam2, 0, 1) };
		func_800(&(uParam0->f_2337), _create_var_string(10, "MGPKR_MSG__THEY_STOLE_POT", &Var0), 0);
	}
}

bool func_746(var uParam0)
{
	return func_152(uParam0->f_498);
}

bool func_747(int iParam0, bool bParam1)
{
	if (bParam1 && !func_152(iParam0))
	{
		return false;
	}
	iVar0 = func_347(iParam0);
	return _uiprompt_is_just_pressed((*Global_1951255)[iVar0]->f_3);
}

void func_748(var uParam0, bool bParam1)
{
	if (bParam1 && !uParam0->f_166)
	{
		if (!func_152(uParam0->f_498))
		{
			uParam0->f_498 = func_1125("MGPKR_UI_MUCK", 1236577566, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			func_268(&(uParam0->f_501));
		}
	}
	else if (func_152(uParam0->f_498))
	{
		func_1086(&(uParam0->f_498), 1, 1);
		func_478(&(uParam0->f_501));
	}
}

int func_749(var uParam0, int iParam1)
{
	iVar1 = (uParam0->f_485 - 1);
	while (iVar1 >= 0)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_376[iVar1]->f_9)
		{
			if (&uParam0->f_376[iVar1]->f_2[iVar0] == iParam1)
			{
				return iVar1;
			}
			iVar0++;
		}
		iVar1 = (iVar1 - 1);
	}
	return -1;
}

bool func_750(var uParam0, int iParam1)
{
	return uParam0->f_376[iParam1]->f_17 > 0;
}

void func_751(var uParam0, var uParam1, int iParam2)
{
	if (uParam1->f_485 > 1)
	{
		if (uParam1->f_485 == 1)
		{
			Var0 = { func_1367(_create_var_string(2, "MGPKR_MSG_POT")) };
		}
		else if (iParam2 == 0)
		{
			Var0 = { func_1367(_create_var_string(2, "MGPKR_MSG_MAIN_POT")) };
		}
		else if (iParam2 == 1 && uParam1->f_485 == 2)
		{
			Var0 = { func_1367(_create_var_string(2, "MGPKR_MSG_SIDE_POT")) };
		}
		else
		{
			Var0 = { func_1367(_create_var_string(10, "MGPKR_MSG_NTH_SIDE_POT", func_1368(iParam2))) };
		}
		func_800(&(uParam0->f_2337), _create_var_string(10, "MGPKR_MSG_AWARDING_POT", &Var0), 0);
	}
}

void func_752(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	if (func_1239(uParam0, uParam1, uParam2, uParam3, iParam4, 1, -1))
	{
		iVar0 = (*uParam1)[iParam4]->f_3;
		iVar1 = (func_1369(uParam3, iParam4, iParam5) - func_1325(uParam3, iParam4, iParam5));
		fVar2 = (to_float(iVar1) / to_float(iVar0));
		if (fVar2 < 0f)
		{
			fVar2 = 0f;
		}
		fVar3 = func_887(uParam1, iParam4);
		bVar4 = func_1362(fVar2);
		bVar5 = func_1363(fVar2);
		bVar6 = func_1364(fVar2);
		bVar7 = func_892(fVar2);
		bVar8 = func_1309(fVar3);
		if (bVar4)
		{
			if (_0x61b2aaef645ddaf0(uParam2->f_807, "celebrate_excited_lvl3", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
			{
				return;
			}
		}
		else if (bVar5)
		{
			if (_0x61b2aaef645ddaf0(uParam2->f_807, "celebrate_excited_lvl2", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
			{
				return;
			}
			if (!bVar8)
			{
				if (_0x61b2aaef645ddaf0(uParam2->f_807, "celebrate_content_lvl3", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
				{
					return;
				}
			}
		}
		else if (bVar6)
		{
			if (_0x61b2aaef645ddaf0(uParam2->f_807, "celebrate_excited_lvl1", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
			{
				return;
			}
			if (!bVar8)
			{
				if (_0x61b2aaef645ddaf0(uParam2->f_807, "celebrate_content_lvl2", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
				{
					return;
				}
			}
		}
		if (bVar7)
		{
			if (_0x61b2aaef645ddaf0(uParam2->f_807, "celebrate_base_bigWin", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
			{
				return;
			}
		}
		else if (_0x61b2aaef645ddaf0(uParam2->f_807, "celebrate_base_smallWin", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
		{
			return;
		}
	}
}

void func_753(var uParam0, var uParam1)
{
	iVar0 = uParam0->f_152.f_2048;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_913(uParam1, iVar1) && func_755(uParam1, iVar0, iVar1))
		{
			func_1048(&(uParam0->f_2337), iVar1, func_1342(&(uParam0->f_2337), func_991(uParam1, iVar1, 1), func_1369(uParam1, iVar1, iVar0)));
			func_1064(&(uParam0->f_2337), iVar1, 1);
			func_1049(&(uParam0->f_2337), iVar1, 1);
		}
		iVar1++;
	}
}

void func_754(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (!uParam0->f_1671.f_118)
	{
		return;
	}
	if (iParam3 < 0 || iParam3 >= 6)
	{
		return;
	}
	func_1225(uParam1, 7, -1);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam1->f_158[iVar0] = 0f;
		iVar0++;
	}
	uParam1->f_140 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (is_bit_set(uParam1->f_144, iVar0))
		{
			iVar1 = (*uParam1)[iVar0]->f_3;
			iVar2 = (func_1369(uParam2, iVar0, iParam3) - func_1325(uParam2, iVar0, iParam3));
			fVar3 = (to_float(iVar2) / to_float(iVar1));
			if (fVar3 < 0f)
			{
				fVar3 = 0f;
			}
			uParam1->f_158[iVar0] = fVar3;
		}
		iVar0++;
	}
	uParam1->f_165 = func_765(uParam2, iParam3) > 1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (is_bit_set(uParam1->f_144, iVar0))
		{
			if (is_bit_set(uParam1->f_146, iVar0))
			{
				if (is_bit_set(uParam1->f_143, iVar0))
				{
					func_1343(uParam1, iVar0);
				}
				func_1344(uParam1, iVar0, uParam1->f_149 != 0);
				func_1345(uParam1, iVar0, 0);
			}
			else
			{
				func_1264(uParam1, iVar0);
				func_1345(uParam1, iVar0, is_bit_set(uParam1->f_149, iVar0));
				func_1344(uParam1, iVar0, 0);
			}
		}
		iVar0++;
	}
}

bool func_755(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_485)
	{
		return false;
	}
	else if (iParam2 < 0 || iParam2 >= 6)
	{
		return false;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_376[iParam1]->f_17)
		{
			if (&uParam0->f_376[iParam1]->f_10[iVar0] == iParam2)
			{
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

void func_756(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (func_730(uParam2, 0) < 1)
	{
		return;
	}
	StringCopy(&cVar34, "", 64);
	bVar43 = true;
	if (func_203(uParam2, uParam1->f_9) && func_755(uParam2, iParam3, uParam1->f_9))
	{
		StringCopy(&cVar18, func_1357(iParam3, uParam2->f_485), 64);
		StringCopy(&cVar26, func_991(uParam2, uParam1->f_9, 0), 64);
		if (func_1351(uParam2, iParam3))
		{
			StringCopy(&cVar34, func_1354(), 64);
		}
		if (func_765(uParam2, iParam3) == 1)
		{
			func_800(&(uParam0->f_2337), _create_var_string(170, "MGPKR_MSG__YOU_WON_ONEPOT", &cVar18, &cVar26, &cVar34), 0);
		}
		else
		{
			func_800(&(uParam0->f_2337), _create_var_string(170, "MGPKR_MSG__YOU_SPLIT_ONEPOT", &cVar18, &cVar26, &cVar34), 0);
		}
	}
	else
	{
		iVar42 = func_769(uParam2, iParam3, 1);
		if (func_203(uParam2, iVar42))
		{
			Var0 = { func_443(uParam1, iVar42, 0, 1) };
			StringCopy(&cVar26, func_991(uParam2, iVar42, 0), 64);
		}
		else
		{
			iVar42 = func_769(uParam2, iParam3, 0);
			StringCopy(&Var0, func_1018(iVar42, uParam1->f_9), 128);
			bVar43 = false;
		}
		StringCopy(&cVar16, func_1355(func_765(uParam2, iParam3)), 16);
		StringCopy(&cVar18, func_1357(iParam3, uParam2->f_485), 64);
		if (func_1351(uParam2, iParam3))
		{
			StringCopy(&cVar34, func_1354(), 64);
		}
		if (bVar43)
		{
			if (func_765(uParam2, iParam3) == 1)
			{
				func_800(&(uParam0->f_2337), _create_var_string(682, "MGPKR_MSG__THEY_WON_ONEPOT", &Var0, &cVar18, &cVar26, &cVar34), 0);
			}
			else
			{
				func_800(&(uParam0->f_2337), _create_var_string(682, "MGPKR_MSG__THEY_SPLIT_ONEPOT", &cVar16, &cVar18, &cVar26, &cVar34), 0);
			}
		}
		else if (func_765(uParam2, iParam3) == 1)
		{
			func_800(&(uParam0->f_2337), _create_var_string(170, "MGPKR_MSG__THEY_WON_ONEPOT_NOHAND", &Var0, &cVar18, &cVar34), 0);
		}
		else
		{
			func_800(&(uParam0->f_2337), _create_var_string(170, "MGPKR_MSG__THEY_SPLIT_ONEPOT_NOHAND", &cVar16, &cVar18, &cVar34), 0);
		}
	}
}

int func_757(var uParam0)
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (&uParam0->f_39[iVar1] != -1 && uParam0->f_39[iVar1]->f_6 == 0)
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_758(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_913(uParam1, iVar0) && func_755(uParam1, uParam0->f_152.f_2048, iVar0))
		{
			if (func_1370(&(uParam0->f_2337), iVar0, 0))
			{
				func_1048(&(uParam0->f_2337), iVar0, func_991(uParam1, iVar0, 1));
			}
			func_1063(&(uParam0->f_2337), iVar0, 1);
			func_1049(&(uParam0->f_2337), iVar0, 0);
		}
		iVar0++;
	}
}

bool func_759(var uParam0, int iParam1)
{
	if (!func_409(uParam0, 2))
	{
		if (iParam1 != uParam0->f_9)
		{
		}
		else if (_poker_reveal(&Var0))
		{
			func_410(uParam0, 2, Var0, 1, 0);
			return true;
		}
	}
	return false;
}

bool func_760(var uParam0, int iParam1)
{
	if (((iParam1 >= 0 && iParam1 < 6) && &uParam0->f_39[iParam1] != -1) && uParam0->f_39[iParam1]->f_6 == 1)
	{
		return true;
	}
	return false;
}

int func_761(var uParam0, int iParam1, int iParam2)
{
	iVar0 = func_1371(&(uParam0->f_416), iParam2);
	iVar1 = func_204(&(uParam0->f_416), iParam1);
	fVar2 = (to_float(iVar0) / to_float((iVar1 + iVar0)));
	if (fVar2 > 0.4f)
	{
		return 1;
	}
	return 0;
}

void func_762(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	if (func_1239(uParam0, uParam1, uParam2, uParam3, iParam4, 4, -1))
	{
		if (_0x61b2aaef645ddaf0(uParam2->f_807, "muck", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
		{
			return;
		}
	}
}

void func_763(var uParam0)
{
	func_1048(&(uParam0->f_2337), uParam0->f_152.f_2047, func_1372());
	func_1049(&(uParam0->f_2337), uParam0->f_152.f_2047, 1);
	func_1061(&(uParam0->f_2337), uParam0->f_152.f_2047);
	func_1062(&(uParam0->f_2337), uParam0->f_152.f_2047, 0, func_330());
	func_1062(&(uParam0->f_2337), uParam0->f_152.f_2047, 1, func_330());
}

void func_764(var uParam0)
{
	func_1052(&(uParam0->f_2337), uParam0->f_152.f_2047, 1);
}

int func_765(var uParam0, int iParam1)
{
	return uParam0->f_376[iParam1]->f_17;
}

int func_766(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_485)
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_376[iParam1]->f_17)
	{
		if (!bParam2 || func_203(uParam0, &(uParam0->f_376[iParam1]->f_10[iVar1])))
		{
			set_bit(&iVar0, &(uParam0->f_376[iParam1]->f_10[iVar1]));
		}
		iVar1++;
	}
	return iVar0;
}

int func_767(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar1 = get_random_int_in_range(0, 6);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!bParam3 || func_203(uParam0, iVar1))
		{
			if (func_1373(uParam0, iVar1, iParam1) && !is_bit_set(iParam2, iVar1))
			{
				return iVar1;
			}
		}
		iVar1 = (iVar1 + 1 % 6);
		iVar0++;
	}
	return -1;
}

int func_768(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_376[iParam1]->f_17)
	{
		if (!bParam2 || func_203(uParam0, &(uParam0->f_376[iParam1]->f_10[iVar1])))
		{
			set_bit(&iVar0, &(uParam0->f_376[iParam1]->f_10[iVar1]));
		}
		iVar1++;
	}
	return func_365(iVar0);
}

int func_769(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_485)
	{
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_376[iParam1]->f_17)
		{
			if (!bParam2 || func_203(uParam0, &(uParam0->f_376[iParam1]->f_10[iVar0])))
			{
				return &(uParam0->f_376[iParam1]->f_10[iVar0]);
			}
			iVar0++;
		}
	}
	return -1;
}

int func_770(var uParam0, var uParam1, int iParam2)
{
	switch (&uParam0->f_152.f_2011[iParam2])
	{
		case 1:
			if (((!func_203(uParam1, iParam2) || !func_210(&(uParam0->f_2841), iParam2)) || !func_778(&(uParam0->f_2841), iParam2)) || !(func_779(&(uParam0->f_2841), iParam2) == 3 || func_779(&(uParam0->f_2841), iParam2) == 2))
			{
				return 1;
			}
			else if (!func_1374(&(uParam0->f_152), iParam2))
			{
				if (func_609(&(uParam0->f_2841), iParam2, 1))
				{
					if (func_101(&(uParam0->f_152.f_2018), 0.5f) || uParam0->f_2841.f_40)
					{
						func_683(&(uParam0->f_2841), iParam2, uParam0->f_152.f_1998, 2);
						return 1;
					}
				}
			}
			break;
		default:
			break;
	}
	return 0;
}

void func_771(var uParam0, var uParam1, int iParam2)
{
	iVar1 = get_random_int_in_range(0, 6);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (&uParam0->f_152.f_2011[iVar1] != 0)
		{
			Stack.Push(uParam0);
			Stack.Push(uParam1);
			Stack.Push(iVar1);
			Call_Loc(iParam2);
			if (StackVal)
			{
				func_1375(&(uParam0->f_152), iVar1);
				func_268(&(uParam0->f_152.f_2018));
			}
		}
		iVar1 = (iVar1 + 1 % 6);
		iVar0++;
	}
}

int func_772(var uParam0)
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_485)
	{
		if (uParam0->f_376[iVar1]->f_17 > 0 && uParam0->f_376[iVar1]->f_1 > 0)
		{
			iVar0 = (iVar0 + uParam0->f_376[iVar1]->f_1);
		}
		iVar1++;
	}
	return iVar0;
}

void func_773(var uParam0)
{
	iVar0 = func_772(&(uParam0->f_152.f_416));
	func_626(&(uParam0->f_2337), _create_var_string(2, "MGPKR_RAKE", func_965(uParam0, iVar0)), 0);
}

void func_774(var uParam0, var uParam1)
{
	if (!uParam0->f_1671.f_118)
	{
		return;
	}
	func_1225(&(uParam0->f_1671), 13, -1);
	iVar4 = 0;
	iVar5 = 0;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 0;
	iVar11 = 0;
	iVar12 = 0;
	while (iVar12 < 6)
	{
		if (func_624(uParam1, iVar12))
		{
			iVar0 = func_691(uParam1, iVar12);
			iVar1 = func_919(uParam1, iVar12);
			if (iVar1 > iVar0)
			{
				iVar2 = (iVar1 - iVar0);
				iVar3 = 0;
			}
			else
			{
				iVar3 = (iVar0 - iVar1);
				iVar2 = 0;
			}
			uParam0->f_1671.f_178[iVar12] = (to_float(iVar2) / to_float(uParam0->f_1671[iVar12]->f_3));
			uParam0->f_1671.f_185[iVar12] = (to_float(iVar3) / to_float(uParam0->f_1671[iVar12]->f_3));
			set_bit(&iVar4, iVar12);
			if (iVar2 > 0)
			{
				set_bit(&iVar5, iVar12);
			}
			if (func_1376(&(uParam0->f_1671), iVar12))
			{
				set_bit(&iVar6, iVar12);
			}
			if (func_1377(&(uParam0->f_1671), iVar12))
			{
				set_bit(&iVar7, iVar12);
			}
			if (func_1378(&(uParam0->f_1671), iVar12))
			{
				set_bit(&iVar8, iVar12);
			}
			if (func_1379(&(uParam0->f_1671), iVar12))
			{
				set_bit(&iVar9, iVar12);
			}
			if (func_1380(&(uParam0->f_1671), iVar12))
			{
				set_bit(&iVar10, iVar12);
			}
			if (func_1381(&(uParam0->f_1671), iVar12))
			{
				set_bit(&iVar11, iVar12);
			}
		}
		else
		{
			uParam0->f_1671.f_178[iVar12] = 0f;
			uParam0->f_1671.f_185[iVar12] = 0f;
		}
		uParam0->f_1671.f_171[iVar12] = uParam0->f_1671[iVar12]->f_7;
		iVar12++;
	}
	uParam0->f_1671.f_192 = iVar4;
	uParam0->f_1671.f_193 = iVar5;
	uParam0->f_1671.f_194 = iVar6;
	uParam0->f_1671.f_195 = iVar7;
	uParam0->f_1671.f_196 = iVar8;
	uParam0->f_1671.f_197 = iVar9;
	uParam0->f_1671.f_198 = iVar10;
	uParam0->f_1671.f_199 = iVar11;
	func_1382(&(uParam0->f_1671));
	iVar13 = -1;
	iVar12 = 0;
	while (iVar12 < 6)
	{
		if (&uParam0->f_1671[iVar12])
		{
			if (func_203(uParam1, iVar12))
			{
				iVar15 = func_204(uParam1, iVar12);
				uParam0->f_1671[iVar12]->f_3 = iVar15;
				if (iVar13 == -1 || iVar14 < iVar15)
				{
					iVar13 = iVar12;
					iVar14 = iVar15;
				}
			}
		}
		iVar12++;
	}
	iVar12 = 0;
	while (iVar12 < 6)
	{
		if (&uParam0->f_1671[iVar12])
		{
			iVar15 = uParam0->f_1671[iVar12]->f_3;
			fVar16 = func_1188((to_float(iVar15) / to_float(iVar14)), 0, 1065353216);
			fVar17 = 0f;
			fVar18 = ((1f - fVar16) + ((fVar17 * 0.5f) * fVar16));
			uParam0->f_1671[iVar12]->f_5 = fVar16;
			uParam0->f_1671[iVar12]->f_6 = fVar17;
			uParam0->f_1671[iVar12]->f_7 = fVar18;
		}
		iVar12++;
	}
	iVar19 = 1;
	while (iVar19 > 0)
	{
		uParam0->f_1671.f_134[iVar19] = &uParam0->f_1671.f_134[(iVar19 - 1)];
		iVar19 = (iVar19 - 1);
	}
	uParam0->f_1671.f_134[iVar19] = (uParam0->f_1671.f_141 || uParam0->f_1671.f_142);
	uParam0->f_1671.f_120 = 0;
	uParam0->f_1671.f_125 = iVar14;
	uParam0->f_1671.f_131 = -1;
	uParam0->f_1671.f_132 = -1;
	uParam0->f_1671.f_133 = 0;
	uParam0->f_1671.f_137 = 0f;
	uParam0->f_1671.f_138 = 0f;
	uParam0->f_1671.f_139 = 0f;
	uParam0->f_1671.f_140 = 0;
	uParam0->f_1671.f_141 = 0;
	uParam0->f_1671.f_142 = 0;
	uParam0->f_1671.f_143 = 0;
	uParam0->f_1671.f_144 = 0;
	uParam0->f_1671.f_145 = -1;
	uParam0->f_1671.f_146 = 0;
	uParam0->f_1671.f_147 = -1;
	uParam0->f_1671.f_148 = 0;
	uParam0->f_1671.f_149 = 0;
	uParam0->f_1671.f_150 = 0;
	iVar12 = 0;
	while (iVar12 < 6)
	{
		uParam0->f_1671.f_151[iVar12] = 0f;
		iVar12++;
	}
	iVar12 = 0;
	while (iVar12 < 6)
	{
		uParam0->f_1671.f_158[iVar12] = 0f;
		iVar12++;
	}
	uParam0->f_1671.f_165 = 0;
	uParam0->f_1671.f_166 = 0;
	uParam0->f_1671.f_167 = 0;
	uParam0->f_1671.f_168 = 0;
	uParam0->f_1671.f_169 = 0;
	uParam0->f_1671.f_170 = 0;
	iVar12 = 0;
	while (iVar12 < 6)
	{
		if (func_913(uParam1, iVar12))
		{
			func_1263(&(uParam0->f_1671), iVar12, 0);
		}
		iVar12++;
	}
}

void func_775(var uParam0, bool bParam1, float fParam2)
{
	if (bParam1)
	{
		func_361(&(uParam0->f_152.f_2018), fParam2);
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (&uParam0->f_152.f_2011[iVar0] != 0)
		{
			uParam0->f_152.f_2011[iVar0] = 0;
		}
		iVar0++;
	}
}

void func_776(var uParam0, var uParam1)
{
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (func_624(&(uParam0->f_416), iVar2))
		{
			if (func_1374(uParam0, iVar2))
			{
			}
			else
			{
				iVar0 = func_1383(uParam1, iVar2);
				iVar1 = func_204(&(uParam0->f_416), iVar2);
				if (iVar0 != iVar1)
				{
					func_1035(uParam1, iVar2, iVar1, 0, 0, 1);
				}
			}
		}
		iVar2++;
	}
}

void func_777()
{
	if (Global_1902831->f_2 == 0)
	{
	}
	Global_1902831->f_2 = 1;
}

bool func_778(var uParam0, int iParam1)
{
	return uParam0->f_617[iParam1]->f_8 != 7;
}

int func_779(var uParam0, int iParam1)
{
	return uParam0->f_617[iParam1]->f_8;
}

void func_780(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2011[iParam1] = iParam2;
}

bool func_781(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (&uParam0->f_2011[iVar0] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_782(var uParam0, var uParam1, int iParam2)
{
	if (*uParam1 < 0 || *uParam1 >= 6)
	{
		*uParam1 = -1;
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam2 == 0)
		{
			if (*uParam1 == uParam0->f_3)
			{
				*uParam1 = -1;
				return false;
			}
		}
		*uParam1 = (*uParam1 + 1 % 6);
		if (func_203(uParam0, *uParam1) && func_204(uParam0, *uParam1) > 0)
		{
			return true;
		}
		iVar0++;
	}
	*uParam1 = -1;
	return false;
}

void func_783(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2)
	{
	}
	if (&uParam0->f_818[iParam1] == 0)
	{
	}
	else if (uParam0->f_818[iParam1]->f_50)
	{
	}
	else if (uParam0->f_818[iParam1]->f_8 != 1)
	{
	}
	else if (uParam0->f_818[iParam1]->f_1 != 1)
	{
	}
	else if (bParam2 && (iParam3 < 0 || iParam3 >= 6))
	{
	}
	else if (bParam2 && iParam1 == iParam3)
	{
	}
	else
	{
		func_471(uParam0, iParam1, 20);
		iVar0 = (iParam3 - iParam1);
		if (iVar0 < 0)
		{
			iVar0 += 6;
		}
		iVar1 = func_779(uParam0, iParam1);
		bVar2 = iVar1 == 5;
		if (bParam2)
		{
			set_bit(&(uParam0->f_818[iParam1]->f_19), 0);
		}
		if (bVar2)
		{
			set_bit(&(uParam0->f_818[iParam1]->f_19), 1);
		}
		uParam0->f_818[iParam1]->f_20 = iVar0;
		if (bParam2)
		{
			if (!uParam0->f_40)
			{
				if (!func_632(uParam0))
				{
				}
				else if (func_633(uParam0) != iParam1)
				{
				}
				else if (func_785(uParam0))
				{
				}
			}
		}
		if (!uParam0->f_40)
		{
			request_task_move_network_state_transition(&(uParam0->f_818[iParam1]), "BoardReturnReveal");
			func_1133(uParam0, iParam1, 49);
		}
		if (bParam2)
		{
			func_1211(uParam0, iParam3, 1);
		}
	}
}

void func_784(var uParam0, int iParam1, int iParam2, int iParam3)
{
	Var0 = { *uParam0->f_152.f_2100[iParam3] };
	fVar7 = get_random_float_in_range(Var0, Var0.f_1);
	if (get_random_int_in_range(0, 100) < Var0.f_5)
	{
		iVar6 = 1;
	}
	else
	{
		iVar6 = 0;
	}
	func_1212(&(uParam0->f_152), iParam1, iParam2, iVar6, fVar7);
}

bool func_785(var uParam0)
{
	return uParam0->f_689.f_2;
}

bool func_786(var uParam0, int iParam1)
{
	return func_1384(uParam0, iParam1, 0);
}

bool func_787(var uParam0, var uParam1)
{
	if (func_487(uParam0->f_38, -1038316793))
	{
		*uParam1 = 8;
		return true;
	}
	if (func_1385(uParam0, &(uParam0->f_152)))
	{
		if (func_141(&(uParam0->f_152), 2) && !func_1386(uParam0, &(uParam0->f_152)))
		{
			*uParam1 = 9;
			return true;
		}
		if (func_487(uParam0->f_38, 1485265289))
		{
			*uParam1 = 8;
			return true;
		}
		if (func_141(&(uParam0->f_152), 2) && func_490(uParam0->f_152.f_1))
		{
			*uParam1 = 8;
			return true;
		}
		if (func_141(&(uParam0->f_152), 1) && func_487(uParam0->f_38, 430260396))
		{
			*uParam1 = 8;
			return true;
		}
	}
	*uParam1 = 0;
	return false;
}

bool func_788(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (&uParam0->f_2011[iVar0] != 0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_789(var uParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			func_1319(uParam0, iVar0, iVar1, bParam1);
			iVar1++;
		}
		iVar0++;
	}
}

void func_790(var uParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			func_1158(uParam0, iVar0, iVar1, bParam1);
			iVar1++;
		}
		iVar0++;
	}
}

void func_791(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (does_entity_exist(&(uParam0->f_672.f_11[iVar0])))
		{
			delete_object(uParam0->f_672.f_11[iVar0]);
		}
		uParam0->f_672.f_11[iVar0] = 0;
		iVar0++;
	}
}

void func_792(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (does_entity_exist(&(uParam0->f_617[iVar0]->f_5[iVar1])))
			{
				delete_object(uParam0->f_617[iVar0]->f_5[iVar1]);
			}
			uParam0->f_617[iVar0]->f_5[iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
}

bool func_793(var uParam0)
{
	return uParam0->f_1553 != 0;
}

bool func_794(var uParam0, int iParam1)
{
	if (uParam0->f_818[iParam1]->f_8 != 1)
	{
		return true;
	}
	return false;
}

int func_795(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	if (uParam1->f_1553 != 0)
	{
		return 0;
	}
	uParam1->f_1553 = iParam2;
	uParam1->f_1553.f_1 = 0;
	if (bParam3)
	{
		func_389(uParam0, uParam1);
	}
	return 1;
}

bool func_796(var uParam0, int iParam1, bool bParam2)
{
	return func_1215(uParam0, iParam1, 2, bParam2);
}

void func_797(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1558[iParam1]->f_1 = iParam2;
}

void func_798(var uParam0, int iParam1, int iParam2)
{
	if (&uParam0->f_818[iParam1] == 0)
	{
	}
	else if (uParam0->f_818[iParam1]->f_8 != 1)
	{
	}
	else if (uParam0->f_818[iParam1]->f_1 != 1)
	{
	}
	else if (iParam2 <= 0)
	{
	}
	else
	{
		func_471(uParam0, iParam1, 32);
		iVar0 = get_random_int_in_range(0, 3);
		uParam0->f_818[iParam1]->f_19 = iVar0;
		uParam0->f_818[iParam1]->f_20 = iParam2;
		if (!uParam0->f_40)
		{
			request_task_move_network_state_transition(&(uParam0->f_818[iParam1]), "BuyIn");
			set_task_move_network_signal_float(&(uParam0->f_818[iParam1]), "BuyInType", to_float(iVar0));
		}
		func_1133(uParam0, iParam1, 36);
	}
}

int func_799(var uParam0, int iParam1, bool bParam2)
{
	return func_1230(uParam0, iParam1, 2, bParam2);
}

void func_800(var uParam0, char* sParam1, int iParam2)
{
	if (uParam0->f_165)
	{
		return;
	}
	if (uParam0->f_167)
	{
		return;
	}
	func_250(1);
	func_1387(sParam1, 0, 0, 1);
	uParam0->f_170 = iParam2;
}

void func_801(var uParam0, int iParam1)
{
	if (uParam0->f_167 != iParam1)
	{
		uParam0->f_167 = iParam1;
	}
}

void func_802(var uParam0, int iParam1)
{
	uParam0->f_1558[iParam1] = 0;
	uParam0->f_1558[iParam1]->f_1 = 0;
}

void func_803(var uParam0, int iParam1, char* sParam2, int iParam3)
{
	if (&uParam0->f_240[iParam1] != 0)
	{
		StringCopy(&(uParam0->f_240[iParam1]->f_1), sParam2, 128);
		uParam0->f_240[iParam1]->f_17 = iParam3;
		return;
	}
}

int func_804(var uParam0, int iParam1)
{
	if (!&uParam0->f_409[iParam1])
	{
		return 0;
	}
	return &(uParam0->f_240[iParam1]);
}

bool func_805(var uParam0, int iParam1, bool bParam2)
{
	return func_914(uParam0, iParam1, 2, bParam2);
}

int func_806(var uParam0, int iParam1)
{
	if (!&uParam0->f_409[iParam1])
	{
		return 255;
	}
	if (&uParam0->f_240[iParam1] != 1)
	{
		return 255;
	}
	return uParam0->f_240[iParam1]->f_18;
}

void func_807(var uParam0, int iParam1, int iParam2)
{
	if (&uParam0->f_173[iParam1] != 0)
	{
		func_445(uParam0, iParam1);
	}
	if (iParam2 == 255 || !network_is_player_active(iParam2))
	{
		func_951(uParam0, iParam1, 4);
	}
	else
	{
		func_951(uParam0, iParam1, 1);
		uParam0->f_180[iParam1] = iParam2;
		uParam0->f_187[iParam1] = get_game_timer() + 10000;
		Var0 = 2;
		Var0.f_1 = 2;
		Var0.f_3 = 0;
		_0xde544b7ec0c187cc(&(Var0.f_2));
		_0x31010318ba9897ac(&(Var0.f_2), iParam2);
		func_952(&Var0);
	}
}

bool func_808(var uParam0, int iParam1)
{
	if (&uParam0->f_240[iParam1] != 0)
	{
		return uParam0->f_240[iParam1]->f_17;
	}
	return false;
}

bool func_809(var uParam0, int iParam1, var uParam2)
{
	if (&uParam0->f_240[iParam1] != 1)
	{
		return false;
	}
	if (!uParam0->f_240[iParam1]->f_26)
	{
		return false;
	}
	*uParam2 = { uParam0->f_240[iParam1]->f_19 };
	return true;
}

bool func_810(var uParam0, vector3 vParam1, int iParam4, var uParam5, bool bParam6)
{
	if (uParam0->f_762 > 0)
	{
		iVar0 = -1;
		fVar1 = 0f;
		iVar2 = 0;
		while (iVar2 < uParam0->f_762)
		{
			fVar3 = vdist2(*uParam0->f_701[iVar2], vParam1);
			if (iVar0 == -1 || fVar1 > fVar3)
			{
				if (!bParam6 || would_entity_be_occluded(get_entity_model(player_ped_id()), *uParam0->f_701[iVar2], true))
				{
					iVar0 = iVar2;
					fVar1 = fVar3;
				}
			}
			iVar2++;
		}
		if (iVar0 != -1)
		{
			*iParam4 = { *uParam0->f_701[iVar0] };
			*uParam5 = func_1388(*iParam4, *uParam0);
			return true;
		}
	}
	else
	{
		*iParam4 = { *uParam0 + *uParam0->f_1198[4] * Vector(1.78f, 1.78f, 1.78f) };
		*uParam5 = func_1388(*iParam4, *uParam0);
		iParam4->f_2 = uParam0->f_2;
	}
	return false;
}

struct<16> func_811(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!&uParam0->f_409[iParam1])
	{
		StringCopy(&cVar0, "** Null **", 128);
		return cVar0;
	}
	if (&uParam0->f_240[iParam1] == 0)
	{
		StringCopy(&cVar0, "** Null **", 128);
		return cVar0;
	}
	if (bParam2 && iParam1 == uParam0->f_9)
	{
		StringCopy(&cVar0, _create_var_string(2, "MGPKR_YOU"), 128);
		return cVar0;
	}
	if (iParam3 && uParam0->f_240[iParam1]->f_17)
	{
		StringCopy(&cVar0, func_1039(&(uParam0->f_240[iParam1]->f_1), 109029619), 128);
		return cVar0;
	}
	return uParam0->f_240[iParam1]->f_1;
}

void func_812(var uParam0, int iParam1)
{
	iVar0 = func_1332(&(uParam0->f_152.f_416));
	clear_bit(&iVar0, iParam1);
	iVar1 = func_897(uParam0, iVar0, "arrive_greet", iParam1, 100);
	if (iVar1 != -1)
	{
		func_1389(&(uParam0->f_152), 1, iVar1, iParam1);
	}
}

bool func_813(var uParam0, int iParam1, bool bParam2)
{
	if (&uParam0->f_173[iParam1] == 3)
	{
		return true;
	}
	if (bParam2)
	{
		if (&uParam0->f_173[iParam1] == 4)
		{
			return true;
		}
		if (&uParam0->f_173[iParam1] == 1 || &uParam0->f_173[iParam1] == 2)
		{
			return get_game_timer() >= &uParam0->f_187[iParam1];
		}
	}
	return false;
}

int func_814(var uParam0, int iParam1)
{
	iVar0 = _minigame_get_next_event_type();
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (uParam0->f_1388 != -1857735811)
	{
		return 0;
	}
	if (uParam0->f_1388.f_1 != 1995414514)
	{
		return 0;
	}
	if (!is_bit_set(uParam0->f_1388.f_3, iParam1))
	{
		return 0;
	}
	if (iVar0 != -1857735811)
	{
		return 0;
	}
	*uParam0->f_416.f_39[iParam1] = { *uParam0->f_902.f_39[iParam1] };
	if (func_203(&(uParam0->f_416), iParam1))
	{
		func_1019(uParam0, iParam1);
	}
	else
	{
		func_1020(uParam0, iParam1);
	}
	clear_bit(&(uParam0->f_1388.f_3), iParam1);
	if (uParam0->f_1388.f_3 == 0)
	{
		func_182(uParam0, 1, 0, 0, 0);
	}
	return 1;
}

void func_815(var uParam0, int iParam1)
{
	if (!uParam0->f_1671.f_118)
	{
		return;
	}
	if (&uParam0->f_1671[iParam1])
	{
	}
	else
	{
		iVar0 = func_204(&(uParam0->f_416), iParam1);
		uParam0->f_1671[iParam1] = 1;
		uParam0->f_1671[iParam1]->f_2 = 0;
		uParam0->f_1671[iParam1]->f_3 = 0;
		uParam0->f_1671[iParam1]->f_1 = iVar0;
		uParam0->f_1671[iParam1]->f_4 = get_random_int_in_range(8, 13);
		fVar1 = 1f;
		fVar2 = 0f;
		if (uParam0->f_1671.f_126 > 0)
		{
			fVar1 = func_1188((to_float(iVar0) / to_float(uParam0->f_1671.f_125)), 0, 1065353216);
		}
		uParam0->f_1671[iParam1]->f_5 = fVar1;
		uParam0->f_1671[iParam1]->f_6 = fVar2;
		uParam0->f_1671[iParam1]->f_7 = ((1f - fVar1) + ((fVar2 * 0.5f) * fVar1));
	}
}

void func_816(var uParam0, int iParam1)
{
	if (!uParam0->f_1671.f_118)
	{
		return;
	}
	uParam0->f_1671.f_129 = (uParam0->f_1671.f_129 - iParam1);
}

void func_817(var uParam0, var uParam1, int iParam2)
{
	if (!func_993(&(uParam0->f_2337), iParam2))
	{
		func_1390(&(uParam0->f_2337), iParam2);
		func_1205(&(uParam0->f_2337), iParam2, func_204(uParam1, iParam2));
		if (func_1218(&(uParam0->f_152.f_416), iParam2))
		{
			bVar0 = uParam0->f_152.f_2052;
			if (func_625(uParam0, iParam2) == 0)
			{
				func_1048(&(uParam0->f_2337), iParam2, func_1206());
				func_1052(&(uParam0->f_2337), iParam2, !bVar0);
			}
			else
			{
				func_1048(&(uParam0->f_2337), iParam2, func_1207());
				func_1052(&(uParam0->f_2337), iParam2, !bVar0);
			}
		}
		func_1046(&(uParam0->f_2337));
	}
}

void func_818(var uParam0, int iParam1)
{
	Var0 = { func_443(&(uParam0->f_152), iParam1, 1, 1) };
	func_1391(_create_var_string(10, "MGPKR_MSG_PLYR_JOINED", &Var0), -2, 0, 0, 0, 1);
}

int func_819(var uParam0, int iParam1)
{
	iVar0 = _minigame_get_next_event_type();
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (uParam0->f_1388 != -1857735811)
	{
		return 0;
	}
	if (uParam0->f_1388.f_1 != 1592704673)
	{
		return 0;
	}
	if (!is_bit_set(uParam0->f_1388.f_3, iParam1))
	{
		return 0;
	}
	if (iVar0 != -1857735811)
	{
		return 0;
	}
	*uParam0->f_416.f_39[iParam1] = { *uParam0->f_902.f_39[iParam1] };
	clear_bit(&(uParam0->f_1388.f_3), iParam1);
	if (uParam0->f_1388.f_3 == 0)
	{
		func_182(uParam0, 1, 0, 0, 0);
	}
	return 1;
}

void func_820(var uParam0)
{
	uParam0->f_1451 = 0;
	uParam0->f_1452 = 0;
	uParam0->f_1453 = 0;
}

void func_821(var uParam0, int iParam1, int iParam2)
{
	bVar0 = uParam0->f_152.f_2052;
	func_1059(&(uParam0->f_2337), iParam1, 0);
	func_1205(&(uParam0->f_2337), iParam1, iParam2);
	func_1048(&(uParam0->f_2337), iParam1, func_1207());
	func_1052(&(uParam0->f_2337), iParam1, !bVar0);
	if (func_1204(&(uParam0->f_2337)) == 1)
	{
		func_801(&(uParam0->f_2337), 0);
		func_800(&(uParam0->f_2337), _create_var_string(2, "MGPKR_MSG_JOIN_MIDGAME_CHIPS"), 2);
		func_801(&(uParam0->f_2337), 1);
	}
}

void func_822(var uParam0, int iParam1, int iParam2)
{
	Var0 = { func_443(&(uParam0->f_152), iParam1, 1, 1) };
	if (iParam1 == uParam0->f_152.f_9)
	{
		func_1391(_create_var_string(2, "MGPKR_MSG_PLYR_BOUGHTIN_YOU", func_965(uParam0, iParam2)), -2, 0, 0, 0, 1);
	}
	else
	{
		func_1391(_create_var_string(10, "MGPKR_MSG_PLYR_BOUGHTIN", &Var0, func_965(uParam0, iParam2)), -2, 0, 0, 0, 1);
	}
}

int func_823(var uParam0, int iParam1)
{
	iVar0 = (iParam1 - 1);
	if (iVar0 < 0)
	{
		iVar0 += 6;
	}
	while (&uParam0->f_39[iVar0] == -1)
	{
		if (iVar0 == iParam1)
		{
			return -1;
		}
		iVar0 = (iVar0 - 1);
		if (iVar0 < 0)
		{
			iVar0 += 6;
		}
	}
	return iVar0;
}

bool func_824(var uParam0)
{
	return (uParam0->f_2064 != -1 && uParam0->f_2065 != -1);
}

void func_825(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_824(uParam0))
	{
	}
	else
	{
		uParam0->f_2064 = iParam1;
		uParam0->f_2065 = iParam2;
		uParam0->f_2066 = iParam3;
	}
}

int func_826(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam2 - iParam1);
	if (iVar0 == 0)
	{
		return 0;
	}
	else if (iVar0 < 0)
	{
		iVar0 += 6;
	}
	StringCopy(&cVar1, "PBL_PASS_DECK_", 64);
	StringIntConCat(&cVar1, iVar0, 64);
	uParam0->f_816 = _create_anim_scene("script@mini_game@poker@DEALER_EXIT_CAMS", 0, &cVar1, false, true);
	if (!_does_anim_scene_exist(uParam0->f_816))
	{
		return 0;
	}
	load_anim_scene(uParam0->f_816);
	return 1;
}

void func_827(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	if (func_1239(uParam0, uParam1, uParam2, uParam3, iParam4, 1, -1))
	{
		iVar0 = func_1392(uParam1, iParam4);
		iVar1 = func_1393(uParam1, iParam4);
		fVar2 = func_1394(uParam1, iParam4);
		bVar3 = func_1395(fVar2);
		if (iParam5 > iVar0)
		{
			if (_0x61b2aaef645ddaf0(uParam2->f_807, "leave_happy", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
			{
				func_1389(uParam0, 2, iParam4, -1);
				return;
			}
		}
		if (iParam5 == 0)
		{
			if (iVar1 <= 3)
			{
				if (_0x61b2aaef645ddaf0(uParam2->f_807, "leave_bust_early", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
				{
					func_1389(uParam0, 2, iParam4, -1);
					return;
				}
			}
			if (bVar3)
			{
				if (_0x61b2aaef645ddaf0(uParam2->f_807, "leave_bust_highStanding", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
				{
					func_1389(uParam0, 2, iParam4, -1);
					return;
				}
			}
		}
		if (iParam5 > 0)
		{
			if (_0x61b2aaef645ddaf0(uParam2->f_807, "leave_base_neutral", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
			{
				func_1389(uParam0, 2, iParam4, -1);
				return;
			}
		}
		else if (_0x61b2aaef645ddaf0(uParam2->f_807, "leave_base_bust", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
		{
			func_1389(uParam0, 2, iParam4, -1);
			return;
		}
	}
}

void func_828(var uParam0, int iParam1)
{
	if (!uParam0->f_1671.f_118)
	{
		return;
	}
	uParam0->f_1671.f_129 = (uParam0->f_1671.f_129 + iParam1);
}

void func_829(var uParam0, int iParam1)
{
	Var0 = { func_443(&(uParam0->f_152), iParam1, 1, 1) };
	func_1391(_create_var_string(10, "MGPKR_MSG_PLYR_LEFT", &Var0), -2, 0, 0, 0, 1);
}

void func_830(var uParam0, int iParam1)
{
	if (func_993(&(uParam0->f_2337), iParam1))
	{
		func_1048(&(uParam0->f_2337), iParam1, func_1396());
		func_1052(&(uParam0->f_2337), iParam1, 1);
		func_1049(&(uParam0->f_2337), iParam1, 0);
		func_1245(&(uParam0->f_2337), iParam1, 0);
		func_1246(&(uParam0->f_2337), iParam1, -1f);
	}
}

void func_831(var uParam0, int iParam1)
{
	if (!uParam0->f_1671.f_118)
	{
		return;
	}
	if (&uParam0->f_1671[iParam1])
	{
		uParam0->f_1671[iParam1] = 0;
		uParam0->f_1671[iParam1]->f_2 = 0;
		uParam0->f_1671[iParam1]->f_3 = 0;
		uParam0->f_1671[iParam1]->f_1 = 0;
		uParam0->f_1671[iParam1]->f_4 = 0;
		uParam0->f_1671[iParam1]->f_5 = 0f;
		uParam0->f_1671[iParam1]->f_6 = 0f;
		uParam0->f_1671[iParam1]->f_7 = 0f;
		uParam0->f_1671[iParam1]->f_8 = 0;
		uParam0->f_1671[iParam1]->f_9 = 0;
		uParam0->f_1671[iParam1]->f_10 = 0;
		uParam0->f_1671[iParam1]->f_11 = 0;
		uParam0->f_1671[iParam1]->f_12 = 0;
	}
}

bool func_832(var uParam0, int iParam1)
{
	return (uParam0->f_2064 == iParam1 && uParam0->f_2065 != -1);
}

void func_833(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (&uParam0->f_818[iParam1] == 0)
	{
	}
	else if (uParam0->f_818[iParam1]->f_50)
	{
	}
	else if (uParam0->f_818[iParam1]->f_8 != 1)
	{
	}
	else if (uParam0->f_818[iParam1]->f_1 != 1 && uParam0->f_818[iParam1]->f_1 != 2)
	{
	}
	else
	{
		func_471(uParam0, iParam1, 33);
		iVar0 = func_1397(uParam0, iParam2, iParam3);
		uParam0->f_818[iParam1]->f_19 = iVar0;
		uParam0->f_818[iParam1]->f_43 = get_random_int_in_range(0, 2);
		if (uParam0->f_818[iParam1]->f_1 == 2)
		{
			if (!uParam0->f_40)
			{
				request_task_move_network_state_transition(&(uParam0->f_818[iParam1]), "Fold");
			}
			func_1133(uParam0, iParam1, 61);
		}
		else
		{
			func_1133(uParam0, iParam1, 62);
		}
		func_475(uParam0, iParam1, 0);
		func_476(uParam0, iParam1, 0);
	}
}

bool func_834(var uParam0)
{
	if (!_does_anim_scene_exist(uParam0->f_816))
	{
	}
	else if (_is_anim_scene_loaded(uParam0->f_816, true, false))
	{
		return true;
	}
	return false;
}

void func_835(var uParam0, int iParam1)
{
	if (!_does_anim_scene_exist(uParam0->f_816))
	{
	}
	else
	{
		set_anim_scene_origin(uParam0->f_816, *uParam0->f_1236[iParam1], *uParam0->f_1255[iParam1], 2);
		start_anim_scene(uParam0->f_816);
	}
}

void func_836(var uParam0, int iParam1, int iParam2)
{
	func_634(&(uParam0->f_2841), iParam1, iParam2);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_983(&(uParam0->f_2841), iVar0))
		{
			func_1036(&(uParam0->f_2841), iVar0, iParam1, 1, 1);
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_778(&(uParam0->f_2841), iVar1))
		{
			if (func_779(&(uParam0->f_2841), iVar1) == 5 || func_779(&(uParam0->f_2841), iVar1) == 4)
			{
				func_1037(&(uParam0->f_2841), iVar1, 5, iParam1, 1);
			}
		}
		iVar1++;
	}
}

void func_837(var uParam0, int iParam1, int iParam2)
{
	if (func_993(&(uParam0->f_2337), iParam1))
	{
		func_1219(&(uParam0->f_2337), iParam1, 0);
	}
	if (func_993(&(uParam0->f_2337), iParam2))
	{
		func_1219(&(uParam0->f_2337), iParam2, 1);
	}
}

void func_838(var uParam0, int iParam1)
{
	if (!func_824(uParam0))
	{
	}
	else if (uParam0->f_2064 != iParam1)
	{
	}
	else
	{
		uParam0->f_2064 = -1;
		uParam0->f_2065 = -1;
		uParam0->f_2066 = 0;
	}
}

void func_839(var uParam0, int iParam1)
{
	if (func_993(&(uParam0->f_2337), iParam1))
	{
		func_1087(&(uParam0->f_2337), iParam1);
		func_1046(&(uParam0->f_2337));
	}
	if (func_1398(&(uParam0->f_2337), iParam1))
	{
		func_445(&(uParam0->f_2337), iParam1);
	}
}

void func_840(var uParam0, var uParam1)
{
	Var0 = { func_1226(-2115175355, -1672018311) };
	_0x0fee2561120f3333(&Var0);
	if (func_203(uParam1, uParam0->f_152.f_9))
	{
		iVar2 = func_204(uParam1, uParam0->f_152.f_9);
		iVar3 = (iVar2 - uParam0->f_152.f_1455);
		iVar4 = (iVar3 * uParam0->f_152.f_51);
		if (iVar4 > 0)
		{
			Var5 = { func_1226(-1901704681, -1672018311) };
			func_1227(Var5, iVar4);
			Var7 = { func_1399(1943033977) };
			_0x6a0184e904cdf25e(&Var7, iVar4);
		}
		else
		{
			Var9 = { func_1399(-550180269) };
			_0x6a0184e904cdf25e(&Var9, -iVar4);
		}
	}
}

void func_841(var uParam0, int iParam1)
{
	uParam0->f_1553.f_1 = iParam1;
}

int func_842(var uParam0, int iParam1)
{
	return uParam0->f_818[iParam1]->f_4;
}

void func_843(var uParam0, int iParam1, int iParam2, int iParam3)
{
	StringCopy(&cVar0, "", 64);
	bVar8 = func_1142();
	iVar9 = func_1397(uParam0, iParam2, iParam3);
	if ((iParam1 == 3 || iParam1 == 4) || iParam1 == 5)
	{
		switch (iVar9)
		{
			case 0:
				StringCopy(&cVar0, "PBL_EXIT_FEM_BASE_CAMP_WIN_HIGH", 64);
				break;
			case 1:
				StringCopy(&cVar0, "PBL_EXIT_FEM_BASE_CAMP_WIN_LOW", 64);
				break;
			case 2:
				StringCopy(&cVar0, "PBL_EXIT_FEM_BASE_CAMP_NEU", 64);
				break;
			case 3:
				StringCopy(&cVar0, "PBL_EXIT_FEM_BASE_CAMP_LOSS", 64);
				break;
		}
		if (bVar8)
		{
			StringConCat(&cVar0, "_A", 64);
		}
		else
		{
			StringConCat(&cVar0, "_B", 64);
		}
		uParam0->f_817 = _create_anim_scene("script@mini_game@poker@mp_exits_female", 0, &cVar0, false, true);
	}
	else
	{
		if (iParam1 == 1)
		{
			switch (iVar9)
			{
				case 0:
					StringCopy(&cVar0, "PBL_EXIT_BASE_CAMP_WIN_HIGH", 64);
					break;
				case 1:
					StringCopy(&cVar0, "PBL_EXIT_BASE_CAMP_WIN_LOW", 64);
					break;
				case 2:
					StringCopy(&cVar0, "PBL_EXIT_BASE_CAMP_NEU", 64);
					break;
				case 3:
					StringCopy(&cVar0, "PBL_EXIT_BASE_CAMP_LOSS", 64);
					break;
			}
		}
		else
		{
			switch (iVar9)
			{
				case 0:
					StringCopy(&cVar0, "PBL_EXIT_BASE_WIN_HIGH", 64);
					break;
				case 1:
					StringCopy(&cVar0, "PBL_EXIT_BASE_WIN_LOW", 64);
					break;
				case 2:
					StringCopy(&cVar0, "PBL_EXIT_BASE_NEU", 64);
					break;
				case 3:
					StringCopy(&cVar0, "PBL_EXIT_BASE_LOSS", 64);
					break;
			}
		}
		if (bVar8)
		{
			StringConCat(&cVar0, "_A", 64);
		}
		else
		{
			StringConCat(&cVar0, "_B", 64);
		}
		uParam0->f_817 = _create_anim_scene("script@mini_game@poker@mp_exits_male", 0, &cVar0, false, true);
	}
	if (!_does_anim_scene_exist(uParam0->f_817))
	{
	}
	else
	{
		load_anim_scene(uParam0->f_817);
	}
}

bool func_844(var uParam0)
{
	return _does_anim_scene_exist(uParam0->f_817);
}

bool func_845(var uParam0)
{
	if (!_does_anim_scene_exist(uParam0->f_817))
	{
	}
	else if (_is_anim_scene_loaded(uParam0->f_817, true, false))
	{
		return true;
	}
	return false;
}

void func_846(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_818[iParam1]->f_50 != bParam2)
	{
		if ((bParam2 && uParam0->f_818[iParam1]->f_8 != 0) && uParam0->f_818[iParam1]->f_8 != 1)
		{
		}
		else
		{
			uParam0->f_818[iParam1]->f_50 = bParam2;
		}
	}
}

void func_847(var uParam0, int iParam1)
{
	if (!_does_anim_scene_exist(uParam0->f_817))
	{
	}
	else
	{
		set_anim_scene_origin(uParam0->f_817, *uParam0->f_1236[iParam1], *uParam0->f_1255[iParam1], 2);
		set_anim_scene_entity(uParam0->f_817, "player", &(uParam0->f_818[iParam1]), 0);
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (does_entity_exist(uParam0->f_74[iParam1][iVar0]))
			{
				set_anim_scene_entity(uParam0->f_817, func_1400(iVar0), uParam0->f_74[iParam1][iVar0], 0);
			}
			iVar0++;
		}
		start_anim_scene(uParam0->f_817);
	}
}

void func_848(var uParam0)
{
	uParam0->f_165 = 1;
	func_1401(uParam0, 0);
	func_1012(uParam0, 0);
	func_250(1);
	_0xdd1232b332cbb9e7(3, 1, 0);
}

bool func_849(var uParam0)
{
	if (!_does_anim_scene_exist(uParam0->f_817))
	{
		return false;
	}
	return (_is_anim_scene_active(uParam0->f_817) || _0xf94692eb9dc15d74(uParam0->f_817, 0));
}

bool func_850(var uParam0)
{
	if (!_does_anim_scene_exist(uParam0->f_817))
	{
		return false;
	}
	return _0x4822a65d5af64e69(uParam0->f_817) >= 1;
}

void func_851(var uParam0)
{
	if (uParam0->f_689 != 0)
	{
		if (does_entity_exist(uParam0->f_689))
		{
			delete_object(&(uParam0->f_689));
		}
		uParam0->f_689 = 0;
	}
}

void func_852(var uParam0, bool bParam1, bool bParam2)
{
	StringCopy(&cVar0, "", 64);
	if (!bParam1)
	{
		StringCopy(&cVar0, "PBL_EXIT_DEALING_", 64);
	}
	else
	{
		StringCopy(&cVar0, "PBL_EXIT_BOARD_SWAP_", 64);
	}
	if (!bParam2)
	{
		StringConCat(&cVar0, "L", 64);
	}
	else
	{
		StringConCat(&cVar0, "R", 64);
	}
	uParam0->f_817 = _create_anim_scene("script@mini_game@poker@interrupt_exits", 0, &cVar0, false, true);
	if (!_does_anim_scene_exist(uParam0->f_817))
	{
	}
	else
	{
		load_anim_scene(uParam0->f_817);
	}
}

void func_853(var uParam0, int iParam1)
{
	if (!_does_anim_scene_exist(uParam0->f_817))
	{
	}
	else
	{
		set_anim_scene_origin(uParam0->f_817, *uParam0->f_1236[iParam1], *uParam0->f_1255[iParam1], 2);
		set_anim_scene_entity(uParam0->f_817, "player", Global_34, 0);
		set_anim_scene_entity(uParam0->f_817, "deck", uParam0->f_689, 0);
		start_anim_scene(uParam0->f_817);
	}
}

void func_854(var uParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	uParam0->f_39 = bParam1;
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (_does_anim_scene_exist(uParam0->f_818[iVar0]->f_60))
			{
				set_anim_scene_bool(uParam0->f_818[iVar0]->f_60, "ignoreCamera", true, false);
			}
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (_does_anim_scene_exist(&(uParam0->f_811[iVar1])))
			{
				set_anim_scene_bool(&(uParam0->f_811[iVar1]), "ignoreCamera", true, false);
			}
			iVar1++;
		}
	}
}

void func_855(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	func_1163(uParam0, iParam1, "OLD", "CREATE_BANK_STACKS_TO_VALUE()");
	uVar0 = 4;
	uVar5 = 4;
	func_1402(iParam2, &uVar0, &uVar5);
	func_1403(uParam0, iParam1, &uVar0, &uVar5, bParam3);
	func_1163(uParam0, iParam1, "NEW", 0);
}

void func_856(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (&uParam0->f_74[iVar0]->f_20[iVar1] != 0)
			{
				if (does_entity_exist(uParam0->f_74[iVar0][iVar1]))
				{
					set_entity_alpha(uParam0->f_74[iVar0][iVar1], 255, false);
				}
				if (does_entity_exist(&(uParam0->f_74[iVar0]->f_15[iVar1])))
				{
					delete_object(uParam0->f_74[iVar0]->f_15[iVar1]);
				}
				uParam0->f_74[iVar0]->f_20[iVar1] = 0;
				uParam0->f_74[iVar0]->f_15[iVar1] = 0;
				uParam0->f_74[iVar0]->f_25[iVar1] = 0f;
			}
			if (&uParam0->f_255[iVar0]->f_20[iVar1] != 0)
			{
				if (does_entity_exist(uParam0->f_255[iVar0][iVar1]))
				{
					set_entity_alpha(uParam0->f_255[iVar0][iVar1], 255, false);
				}
				if (does_entity_exist(&(uParam0->f_255[iVar0]->f_15[iVar1])))
				{
					delete_object(uParam0->f_255[iVar0]->f_15[iVar1]);
				}
				uParam0->f_255[iVar0]->f_20[iVar1] = 0;
				uParam0->f_255[iVar0]->f_15[iVar1] = 0;
				uParam0->f_255[iVar0]->f_25[iVar1] = 0f;
			}
			if (&uParam0->f_436[iVar0]->f_20[iVar1] != 0)
			{
				if (does_entity_exist(uParam0->f_436[iVar0][iVar1]))
				{
					set_entity_alpha(uParam0->f_436[iVar0][iVar1], 255, false);
				}
				if (does_entity_exist(&(uParam0->f_436[iVar0]->f_15[iVar1])))
				{
					delete_object(uParam0->f_436[iVar0]->f_15[iVar1]);
				}
				uParam0->f_436[iVar0]->f_20[iVar1] = 0;
				uParam0->f_436[iVar0]->f_15[iVar1] = 0;
				uParam0->f_436[iVar0]->f_25[iVar1] = 0f;
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_857(var uParam0)
{
	if (!_does_anim_scene_exist(uParam0->f_805))
	{
	}
	else if (!_0x1f0e401031e20146(uParam0->f_805, "plMain"))
	{
	}
	else
	{
		set_anim_scene_bool(uParam0->f_805, "Breakout", true, false);
	}
}

bool func_858(var uParam0, int iParam1, bool bParam2)
{
	return func_914(uParam0, iParam1, 1, bParam2);
}

int func_859(var uParam0, int iParam1, bool bParam2)
{
	return func_1215(uParam0, iParam1, 1, bParam2);
}

int func_860(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	return 2;
}

int func_861(var uParam0, int iParam1)
{
	iVar0 = (iParam1 + 1 % 6);
	while (&uParam0->f_39[iVar0] == -1)
	{
		if (iVar0 == iParam1)
		{
			return -1;
		}
		iVar0 = (iVar0 + 1 % 6);
	}
	return iVar0;
}

void func_862(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (&uParam0->f_818[iParam1] == 0)
	{
	}
	else if (uParam0->f_818[iParam1]->f_50)
	{
	}
	else if (uParam0->f_818[iParam1]->f_8 != 1)
	{
	}
	else if (uParam0->f_818[iParam1]->f_1 != 1 && uParam0->f_818[iParam1]->f_1 != 2)
	{
	}
	else
	{
		func_471(uParam0, iParam1, 29);
		uParam0->f_818[iParam1]->f_43 = get_random_int_in_range(0, 2);
		uParam0->f_818[iParam1]->f_41 = iParam2;
		if (bParam3)
		{
			set_bit(&(uParam0->f_818[iParam1]->f_19), 0);
		}
		if (uParam0->f_818[iParam1]->f_1 == 2)
		{
			if (!uParam0->f_40)
			{
				request_task_move_network_state_transition(&(uParam0->f_818[iParam1]), "Fold");
			}
			func_1133(uParam0, iParam1, 61);
		}
		else
		{
			func_1133(uParam0, iParam1, 62);
		}
		func_475(uParam0, iParam1, 0);
		func_476(uParam0, iParam1, 0);
	}
}

int func_863(int iParam0)
{
	if (*iParam0 < 0 || *iParam0 >= 6)
	{
		*iParam0 = -1;
		return 0;
	}
	*iParam0 = (*iParam0 + 1 % 6);
	return 1;
}

int func_864(var uParam0, int iParam1, bool bParam2)
{
	return func_1230(uParam0, iParam1, 1, bParam2);
}

void func_865(var uParam0)
{
	if (uParam0->f_41 != 0)
	{
	}
	else
	{
		uParam0->f_41 = 1;
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (func_210(uParam0, iVar0))
			{
				func_1404(uParam0, iVar0);
			}
			iVar0++;
		}
	}
}

int func_866(var uParam0)
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (&uParam0->f_39[iVar1] != -1)
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_867(var uParam0, int iParam1)
{
	uParam0->f_809 = iParam1;
}

bool func_868(var uParam0)
{
	return uParam0->f_41 == 2;
}

int func_869(var uParam0, int iParam1)
{
	return &(uParam0->f_818[iParam1]);
}

void func_870(var uParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			func_1405(uParam0, iVar0, iVar1, bParam1);
			iVar1++;
		}
		iVar0++;
	}
}

int func_871(var uParam0)
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_485)
	{
		iVar0 = (&uParam0->f_376[iVar1] + iVar0);
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (func_624(uParam0, iVar2))
		{
			iVar0 = (iVar0 + func_618(uParam0, iVar2));
		}
		iVar2++;
	}
	return iVar0;
}

int func_872(var uParam0)
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_485)
	{
		if (uParam0->f_376[iVar1]->f_17 > 0)
		{
			iVar0 = (&uParam0->f_376[iVar1] + iVar0);
		}
		iVar1++;
	}
	return iVar0;
}

void func_873(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_39[iParam1]->f_2 = iParam2;
}

int func_874(var uParam0)
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_210(uParam0, iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

Vector3 func_875(vector3 vParam0)
{
	fVar0 = vmag(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.f_1 = 0f;
		vParam0.f_2 = 0f;
	}
	return vParam0;
}

void func_876(var uParam0, int iParam1)
{
	uParam0->f_1607.f_1 = iParam1;
}

int func_877(var uParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (((iVar1 != iParam1 && iVar1 != iParam2) && iVar1 != iParam3) && func_1406(uParam0, iVar1))
		{
			set_bit(&iVar0, iVar1);
		}
		iVar1++;
	}
	return iVar0;
}

bool func_878(var uParam0, var uParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	iVar0 = func_1407(uParam1);
	if (func_1408(uParam0, (iParam2 && iVar0), sParam3, iParam4, iParam5, iParam6, iParam7))
	{
		func_899(uParam1, *iParam6);
		return true;
	}
	return false;
}

var func_879(var uParam0)
{
	return uParam0->f_192;
}

var func_880(var uParam0)
{
	return uParam0->f_193;
}

var func_881(var uParam0)
{
	return uParam0->f_194;
}

var func_882(var uParam0)
{
	return uParam0->f_195;
}

var func_883(var uParam0)
{
	return uParam0->f_196;
}

var func_884(var uParam0)
{
	return uParam0->f_197;
}

var func_885(var uParam0)
{
	return uParam0->f_198;
}

var func_886(var uParam0)
{
	return uParam0->f_199;
}

float func_887(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1]->f_7;
}

var func_888(var uParam0, int iParam1)
{
	return &(uParam0->f_178[iParam1]);
}

var func_889(var uParam0, int iParam1)
{
	return &(uParam0->f_185[iParam1]);
}

bool func_890(float fParam0)
{
	return fParam0 >= 0.666f;
}

bool func_891(float fParam0)
{
	return fParam0 < 0.333f;
}

bool func_892(float fParam0)
{
	return fParam0 >= 0.325f;
}

bool func_893(float fParam0)
{
	return fParam0 < 0.2f;
}

int func_894(var uParam0)
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (&uParam0->f_39[iVar1] != -1 && uParam0->f_39[iVar1]->f_2 == 0)
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_895(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (&uParam0->f_1558[iVar0] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_896(var uParam0)
{
	return uParam0->f_1671.f_112 != 0;
}

int func_897(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4)
{
	iVar0 = get_random_int_in_range(0, 60000);
	if (iVar0 < iParam4 * 600)
	{
		iVar8 = 0;
		iVar9 = 0;
		while (iVar9 < 6)
		{
			if (is_bit_set(iParam1, iVar9))
			{
				iVar1[iVar8] = iVar9;
				iVar8++;
			}
			iVar9++;
		}
		if (iVar8 > 0)
		{
			iVar9 = &iVar1[get_random_int_in_range(0, iVar8)];
			iVar10 = 0;
			while (iVar10 < 6)
			{
				if (is_bit_set(iParam1, iVar9))
				{
					if (func_1239(&(uParam0->f_152), &(uParam0->f_152.f_1671), &(uParam0->f_2841), &(uParam0->f_152.f_416), iVar9, 1, iParam3))
					{
						if (_0x61b2aaef645ddaf0(uParam0->f_2841.f_807, sParam2, &(uParam0->f_2841.f_818[iVar9]), 0, uParam0->f_2841.f_40))
						{
							return iVar9;
						}
					}
				}
				iVar9 = (iVar9 + 1 % 6);
				iVar10++;
			}
		}
		return -1;
	}
	return -1;
}

bool func_898(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4)
{
	iVar0 = get_random_int_in_range(0, 60000);
	if (iVar0 < iParam4 * 600)
	{
		if (func_1239(&(uParam0->f_152), &(uParam0->f_152.f_1671), &(uParam0->f_2841), &(uParam0->f_152.f_416), iParam1, 1, iParam3))
		{
			if (_0x61b2aaef645ddaf0(uParam0->f_2841.f_807, sParam2, &(uParam0->f_2841.f_818[iParam1]), 0, uParam0->f_2841.f_40))
			{
				return true;
			}
		}
		return false;
	}
	return false;
}

void func_899(var uParam0, int iParam1)
{
	iVar0 = get_game_timer();
	*uParam0 = iVar0;
	if (iParam1 >= 0 && iParam1 < 6)
	{
		uParam0->f_1[iParam1] = iVar0;
	}
}

bool func_900(var uParam0, var uParam1, var uParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	iVar0 = func_1407(uParam1);
	*iParam6 = func_897(uParam0, (uParam2 && iVar0), sParam3, iParam4, iParam5);
	if (*iParam6 != -1)
	{
		func_899(uParam1, *iParam6);
		return true;
	}
	return false;
}

bool func_901(var uParam0, var uParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if (func_1409(uParam1, iParam2))
	{
		if (func_898(uParam0, iParam2, sParam3, iParam4, iParam5))
		{
			func_899(uParam1, iParam2);
			return true;
		}
	}
	return false;
}

int func_902(var uParam0)
{
	return uParam0->f_146;
}

var func_903(var uParam0)
{
	return uParam0->f_144;
}

int func_904(var uParam0)
{
	return uParam0->f_145;
}

float func_905(var uParam0, int iParam1)
{
	return &(uParam0->f_151[iParam1]);
}

bool func_906(float fParam0, float fParam1)
{
	return (func_1311(fParam0) || (func_890(fParam1) && !func_1313(fParam0)));
}

var func_907(var uParam0)
{
	return uParam0->f_149;
}

bool func_908(var uParam0, int iParam1)
{
	if (uParam0->f_39[iParam1]->f_31.f_24 > 7 || (uParam0->f_39[iParam1]->f_31.f_24 == 7 && &uParam0->f_39[iParam1]->f_31[0] >= 11))
	{
		return true;
	}
	return false;
}

bool func_909(var uParam0, int iParam1)
{
	if (uParam0->f_39[iParam1]->f_31.f_24 >= 3)
	{
		return true;
	}
	return false;
}

bool func_910(var uParam0, int iParam1)
{
	if (uParam0->f_39[iParam1]->f_31.f_24 == 0)
	{
		return true;
	}
	if (uParam0->f_39[iParam1]->f_31.f_24 == 1 && &uParam0->f_39[iParam1]->f_31[0] < 11)
	{
		return true;
	}
	return false;
}

void func_911(var uParam0)
{
	uParam0->f_1607 = 0;
	uParam0->f_1607.f_1 = 0;
}

var func_912(var uParam0, int iParam1)
{
	return &(uParam0->f_158[iParam1]);
}

bool func_913(var uParam0, int iParam1)
{
	if ((iParam1 >= 0 && iParam1 < 6) && &uParam0->f_39[iParam1] != -1)
	{
		if (uParam0->f_39[iParam1]->f_6 == 0 || uParam0->f_39[iParam1]->f_6 == 2)
		{
			return true;
		}
	}
	return false;
}

bool func_914(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return false;
	}
	return (!is_bit_set(uParam0->f_1618, iParam1) || (&uParam0->f_1619[iParam1] == iParam2 && !bParam3));
}

bool func_915(var uParam0, int iParam1)
{
	if ((iParam1 >= 0 && iParam1 < 6) && &uParam0->f_818[iParam1] != 0)
	{
		iVar0 = &uParam0->f_818[iParam1];
		if (!is_ped_injured(iVar0) && is_ambient_speech_playing(iVar0))
		{
			return true;
		}
	}
	return false;
}

bool func_916(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	if (func_1239(uParam0, uParam1, uParam2, uParam3, iParam4, 1, -1))
	{
		bVar0 = func_1410(uParam1);
		bVar1 = func_1328(uParam1, iParam4);
		bVar2 = func_1411(uParam1, iParam4);
		bVar3 = (bVar2 && bVar1);
		bVar4 = (bVar2 && !bVar1);
		fVar5 = func_887(uParam1, iParam4);
		bVar6 = func_1309(fVar5);
		if (bVar0)
		{
			if (bVar3)
			{
				if (uParam1->f_170 < 3)
				{
					if (uParam1->f_168 < 1)
					{
						if (_0x61b2aaef645ddaf0(uParam2->f_807, "flop_excited_lvl2", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
						{
							uParam1->f_168++;
							uParam1->f_170++;
							return true;
						}
					}
					if (_0x61b2aaef645ddaf0(uParam2->f_807, "flop_smallWinFX", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
					{
						uParam1->f_170++;
						return true;
					}
				}
			}
			if (bVar4)
			{
				if (uParam1->f_170 < 3)
				{
					if (uParam1->f_168 < 1)
					{
						if (bVar6)
						{
							if (_0x61b2aaef645ddaf0(uParam2->f_807, "flop_angry_lvl2", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
							{
								uParam1->f_168++;
								uParam1->f_170++;
								return true;
							}
						}
						else if (_0x61b2aaef645ddaf0(uParam2->f_807, "flop_frustrated_lvl2", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
						{
							uParam1->f_168++;
							uParam1->f_170++;
							return true;
						}
					}
					if (_0x61b2aaef645ddaf0(uParam2->f_807, "flop_smallLossFX", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
					{
						uParam1->f_170++;
						return true;
					}
				}
			}
		}
		if (!bVar0)
		{
			if (bVar1)
			{
				if (uParam1->f_170 < 1)
				{
					if (_0x61b2aaef645ddaf0(uParam2->f_807, "flop_lookingGood", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
					{
						uParam1->f_170++;
						return true;
					}
					if (_0x61b2aaef645ddaf0(uParam2->f_807, "flop_content_lvl1", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
					{
						uParam1->f_170++;
						return true;
					}
				}
			}
			else if (uParam1->f_170 < 1)
			{
				if (_0x61b2aaef645ddaf0(uParam2->f_807, "flop_lookingBad", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
				{
					uParam1->f_170++;
					return true;
				}
				if (bVar6)
				{
					if (_0x61b2aaef645ddaf0(uParam2->f_807, "flop_frustrated_lvl1", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
					{
						uParam1->f_170++;
						return true;
					}
				}
				else if (_0x61b2aaef645ddaf0(uParam2->f_807, "flop_nervous_lvl1", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
				{
					uParam1->f_170++;
					return true;
				}
			}
		}
	}
	return false;
}

void func_917(var uParam0, int iParam1, float fParam2)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (&uParam0->f_2021[iVar0] == iParam1)
		{
			func_361(uParam0->f_2028[iVar0], -fParam2);
		}
		iVar0++;
	}
}

bool func_918(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	if (func_1239(uParam0, uParam1, uParam2, uParam3, iParam4, 1, -1))
	{
		bVar0 = func_1410(uParam1);
		bVar1 = func_1328(uParam1, iParam4);
		bVar2 = func_1411(uParam1, iParam4);
		bVar3 = (bVar2 && bVar1);
		bVar4 = (bVar2 && !bVar1);
		if (bVar0)
		{
			if (bVar3)
			{
				if (uParam1->f_166 < 1)
				{
					if (_0x61b2aaef645ddaf0(uParam2->f_807, "turn_smallWinFX", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
					{
						uParam1->f_166++;
						return true;
					}
				}
			}
			if (bVar4)
			{
				if (uParam1->f_167 < 1)
				{
					if (_0x61b2aaef645ddaf0(uParam2->f_807, "turn_smallLossFX", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
					{
						uParam1->f_167++;
						return true;
					}
				}
			}
		}
	}
	return false;
}

int func_919(var uParam0, int iParam1)
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_485)
	{
		iVar2 = 0;
		while (iVar2 < uParam0->f_376[iVar1]->f_17)
		{
			if (&uParam0->f_376[iVar1]->f_10[iVar2] == iParam1)
			{
				iVar0 = (iVar0 + (&uParam0->f_376[iVar1] / uParam0->f_376[iVar1]->f_17));
			}
			iVar2++;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_920(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_818[iParam1]->f_8 == 1)
	{
		if ((!bParam2 || !is_task_move_network_active(&(uParam0->f_818[iParam1]))) || is_task_move_network_ready_for_transition(&(uParam0->f_818[iParam1])))
		{
			return true;
		}
	}
	return false;
}

void func_921(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	if (func_1239(uParam0, uParam1, uParam2, uParam3, iParam4, 1, -1))
	{
		bVar0 = func_1328(uParam1, iParam4);
		bVar1 = func_1411(uParam1, iParam4);
		bVar2 = (bVar1 && bVar0);
		bVar3 = (bVar1 && !bVar0);
		fVar4 = func_887(uParam1, iParam4);
		fVar5 = func_912(uParam1, iParam4);
		fVar6 = func_1412(uParam1, iParam4);
		bVar7 = func_1309(fVar4);
		bVar8 = func_1413(fVar5);
		bVar9 = func_892(fVar5);
		bVar10 = func_906(fVar6, fVar4);
		if (bVar2)
		{
			if (uParam1->f_166 < 1)
			{
				if (_0x61b2aaef645ddaf0(uParam2->f_807, "river_winLastMinute", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
				{
					uParam1->f_166++;
					uParam1->f_170++;
					return;
				}
				if (bVar9)
				{
					if (_0x61b2aaef645ddaf0(uParam2->f_807, "river_excited_lvl3", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
					{
						uParam1->f_166++;
						uParam1->f_170++;
						return;
					}
				}
				else if (_0x61b2aaef645ddaf0(uParam2->f_807, "river_excited_lvl2", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
				{
					uParam1->f_166++;
					uParam1->f_170++;
					return;
				}
				if (bVar9)
				{
					if (_0x61b2aaef645ddaf0(uParam2->f_807, "river_bigWinFX", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
					{
						uParam1->f_166++;
						return;
					}
				}
				else if (_0x61b2aaef645ddaf0(uParam2->f_807, "river_smallWinFX", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
				{
					uParam1->f_166++;
					return;
				}
			}
		}
		if (bVar3 && !bVar8)
		{
			if (uParam1->f_167 < 1)
			{
				if (_0x61b2aaef645ddaf0(uParam2->f_807, "river_loseLastMinute", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
				{
					uParam1->f_167++;
					uParam1->f_170++;
					return;
				}
				if (bVar7)
				{
					if (bVar10)
					{
						if (_0x61b2aaef645ddaf0(uParam2->f_807, "river_angry_lvl3", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
						{
							uParam1->f_167++;
							uParam1->f_170++;
							return;
						}
					}
					else if (_0x61b2aaef645ddaf0(uParam2->f_807, "river_angry_lvl2", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
					{
						uParam1->f_167++;
						uParam1->f_170++;
						return;
					}
				}
				else if (bVar10)
				{
					if (_0x61b2aaef645ddaf0(uParam2->f_807, "river_frustrated_lvl3", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
					{
						uParam1->f_167++;
						uParam1->f_170++;
						return;
					}
				}
				else if (_0x61b2aaef645ddaf0(uParam2->f_807, "river_frustrated_lvl2", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
				{
					uParam1->f_167++;
					uParam1->f_170++;
					return;
				}
				if (bVar10)
				{
					if (_0x61b2aaef645ddaf0(uParam2->f_807, "river_medLossFX", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
					{
						uParam1->f_167++;
						return;
					}
				}
				else if (_0x61b2aaef645ddaf0(uParam2->f_807, "river_smallLossFX", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
				{
					uParam1->f_167++;
					return;
				}
			}
		}
		if (bVar8)
		{
			if (uParam1->f_170 < 4)
			{
				if (bVar9)
				{
					if (_0x61b2aaef645ddaf0(uParam2->f_807, "river_excited_lvl2", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
					{
						uParam1->f_169++;
						uParam1->f_170++;
						return;
					}
				}
				else if (_0x61b2aaef645ddaf0(uParam2->f_807, "river_excited_lvl1", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
				{
					uParam1->f_169++;
					uParam1->f_170++;
					return;
				}
				if (bVar9)
				{
					if (_0x61b2aaef645ddaf0(uParam2->f_807, "river_bigWinFX", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
					{
						uParam1->f_170++;
						return;
					}
				}
			}
			if (_0x61b2aaef645ddaf0(uParam2->f_807, "river_smallWinFX", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
			{
				uParam1->f_170++;
				return;
			}
		}
		if (!bVar8)
		{
			if (uParam1->f_170 < 4)
			{
				if (bVar7)
				{
					if (_0x61b2aaef645ddaf0(uParam2->f_807, "river_angry_lvl1", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
					{
						uParam1->f_169++;
						uParam1->f_170++;
						return;
					}
				}
				else if (_0x61b2aaef645ddaf0(uParam2->f_807, "river_frustrated_lvl1", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
				{
					uParam1->f_169++;
					uParam1->f_170++;
					return;
				}
				if (_0x61b2aaef645ddaf0(uParam2->f_807, "river_smallLossFX", &(uParam2->f_818[iParam4]), 0, uParam2->f_40))
				{
					uParam1->f_170++;
					return;
				}
			}
		}
	}
}

int func_922(var uParam0, int iParam1)
{
	iVar0 = -1;
	switch (iParam1)
	{
		case 0:
			iVar0 = _create_anim_scene("script@mini_game@poker@take_pot", 2, func_1414(uParam0), false, false);
			break;
		case 1:
			iVar0 = _create_anim_scene("script@mini_game@poker@take_pot_camp", 2, func_1414(uParam0), false, false);
			break;
		case 2:
			iVar0 = _create_anim_scene("script@mini_game@poker@fem_take_pot_camp", 2, func_1414(uParam0), false, false);
			break;
		case 3:
			iVar0 = _create_anim_scene("script@mini_game@poker@split_take_pot", 2, 0, false, false);
			break;
	}
	if (!_does_anim_scene_exist(iVar0))
	{
		return 0;
	}
	load_anim_scene(iVar0);
	uParam0->f_811[iParam1] = iVar0;
	return 1;
}

char* func_923(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Poker";
		case 1:
			return "PokerArthur";
		case 2:
			return "PokerArthurCamp";
		case 3:
			return "PokerJohn";
		case 4:
			return "PokerJohnCamp";
		default:
			break;
	}
	return "Poker";
}

void func_924(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case 1:
			StringCopy(&cVar0, "dominos_set_", 64);
			StringIntConCat(&cVar0, iParam1 + 1, 64);
			uParam0->f_3 = get_hash_key(&cVar0);
			uParam0->f_5 = _databinding_add_data_string(uParam0->f_4, "gameTokenSetTextureDictionary", &cVar0);
			break;
		case 0:
		case 2:
			StringCopy(&cVar0, "card_set_", 64);
			StringIntConCat(&cVar0, iParam1 + 1, 64);
			uParam0->f_3 = get_hash_key(&cVar0);
			uParam0->f_5 = _databinding_add_data_string(uParam0->f_4, "gameTokenSetTextureDictionary", &cVar0);
			break;
	}
}

void func_925(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		_0x6318fb3be37e11b3(uParam0->f_24, iVar0);
		iVar0++;
	}
	_databinding_clear_binding_array(uParam0->f_24);
}

void func_926(var uParam0, int iParam1)
{
	if (uParam0->f_1 != iParam1)
	{
	}
	uParam0->f_1 = iParam1;
}

void func_927(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4, bool bParam5, int iParam6)
{
	StringIntConCat(&cVar1, iParam2, 8);
	if (is_string_null_or_empty(sParam3))
	{
		sParam3 = "avatar_generic";
	}
	if (is_string_null_or_empty(sParam4))
	{
		sParam4 = "minigames_hud";
	}
	uParam1->f_1 = _databinding_add_data_container(uParam0->f_8, &cVar1);
	uParam1->f_2 = _databinding_add_data_string(uParam1->f_1, "playerIconTextureDictionary", sParam4);
	uParam1->f_3 = _databinding_add_data_string(uParam1->f_1, "playerIconTextureName", sParam3);
	uParam1->f_4 = _databinding_add_data_bool(uParam1->f_1, "isEnabled", 1);
	uParam1->f_5 = _databinding_add_data_bool(uParam1->f_1, "isVisible", iParam6);
	uParam1->f_6 = _databinding_add_data_bool(uParam1->f_1, "isActivePlayer", 0);
	uParam1->f_7 = _databinding_add_data_string(uParam1->f_1, "stateText", " ");
	uParam1->f_8 = _databinding_add_data_string(uParam1->f_1, "moneyText", "");
	uParam1->f_9 = _databinding_add_data_bool(uParam1->f_1, "isMoneyTextVisible", 1);
	uParam1->f_10 = _databinding_add_data_bool(uParam1->f_1, "isDealer", 0);
	uParam1->f_11 = _databinding_add_data_int(uParam1->f_1, "turnTimerValue", -1);
	uParam1->f_12 = _databinding_add_data_bool(uParam1->f_1, "isCurrentPlayer", 0);
	uParam1->f_13 = _databinding_add_data_bool(uParam1->f_1, "enableTurnTimerPulse", 0);
	if (bParam5)
	{
		_databinding_insert_ui_item_to_list_from_context_string_alias(uParam0->f_9, iParam2, "player_stack_item", uParam1->f_1);
	}
	uVar2 = _databinding_add_data_container(uParam1->f_1, "playerHandData");
	uParam1->f_14 = _databinding_add_ui_item_list(uParam1->f_1, "playerHandList");
	_databinding_clear_binding_array(uParam1->f_14);
	iVar0 = 0;
	while (iVar0 < uParam1->f_16)
	{
		StringCopy(&cVar1, "", 8);
		StringIntConCat(&cVar1, iVar0, 8);
		uVar3 = _databinding_add_data_container(uVar2, &cVar1);
		uParam1->f_16[iVar0] = _databinding_add_data_string(uVar3, "textureName", "");
		_databinding_insert_ui_item_to_list_from_context_string_alias(uParam1->f_14, iVar0, "single_game_token", uVar3);
		iVar0++;
	}
	if (*uParam0 == 0)
	{
		uVar4 = _databinding_add_data_container(uParam1->f_1, "secondPlayerHandData");
		uParam1->f_15 = _databinding_add_ui_item_list(uParam1->f_1, "secondPlayerHandList");
		_databinding_clear_binding_array(uParam1->f_15);
		iVar0 = 0;
		while (iVar0 < uParam1->f_19)
		{
			StringCopy(&cVar1, "", 8);
			StringIntConCat(&cVar1, iVar0, 8);
			uVar5 = _databinding_add_data_container(uVar4, &cVar1);
			uParam1->f_19[iVar0] = _databinding_add_data_string(uVar5, "textureName", "");
			_databinding_insert_ui_item_to_list_from_context_string_alias(uParam1->f_15, iVar0, "single_game_token", uVar5);
			iVar0++;
		}
	}
	set_bit(&(uParam0->f_163), iParam2);
	*uParam1 = 1;
}

void func_928(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (&uParam0->f_818[iVar0] != 0 && is_ped_injured(&(uParam0->f_818[iVar0])))
			{
				if (uParam0->f_41 == 1)
				{
					func_1415(uParam0);
				}
				func_211(uParam0, iVar0, 0);
			}
			iVar0++;
		}
	}
	if (uParam0->f_41 == 1 || uParam0->f_41 == 2)
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			iVar1 = &uParam0->f_818[iVar0];
			if ((iVar1 != 0 && uParam0->f_818[iVar0]->f_53) && uParam0->f_818[iVar0]->f_8 != 28)
			{
				if ((ped_has_use_scenario_task(iVar1) && _0x0c3cb2e600c8977d(iVar1, 0)) || is_ped_ragdoll(iVar1))
				{
					if (uParam0->f_41 == 1)
					{
						func_1415(uParam0);
					}
					if (ped_has_use_scenario_task(iVar1))
					{
						func_1416(uParam0, iVar0);
					}
					else
					{
						func_1187(uParam0, iVar0);
					}
				}
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = &uParam0->f_818[iVar0];
		if (iVar1 != 0)
		{
			Stack.Push(uParam0);
			Stack.Push(uParam0->f_818[iVar0]);
			Stack.Push(iVar0);
			Call_Loc(&uParam0->f_1330[uParam0->f_818[iVar0]->f_8]);
		}
		func_1417(uParam0, &(uParam0->f_818[iVar0]->f_62));
		iVar1 = &uParam0->f_818[iVar0];
		if (iVar1 != 0)
		{
			if (uParam0->f_818[iVar0]->f_8 != 0)
			{
				if (has_anim_event_fired(iVar1, -1523471413))
				{
					func_474(uParam0, iVar0, "hold_cards_idle_a_card1", func_473(uParam0, iVar0, 0), 4, 2, -1082130432);
					func_474(uParam0, iVar0, "hold_cards_idle_a_card2", func_473(uParam0, iVar0, 1), 4, 2, -1082130432);
				}
			}
			if (is_task_move_network_active(iVar1))
			{
				if (get_task_move_network_event(iVar1, "LookQuick") || get_task_move_network_event(iVar1, "LookMedium"))
				{
					func_1092(uParam0, iVar0, 2);
				}
				if (get_task_move_network_event(iVar1, "Motiontree"))
				{
					func_1092(uParam0, iVar0, 0);
				}
			}
			else if (uParam0->f_818[iVar0]->f_57 != 0)
			{
				func_1092(uParam0, iVar0, 0);
			}
			if (uParam0->f_818[iVar0]->f_54)
			{
				if (!is_ped_injured(iVar1))
				{
					set_ped_can_play_gesture_anims(iVar1, 0, 1);
					set_ped_can_leg_ik(iVar1, false);
				}
			}
		}
		iVar0++;
	}
}

void func_929(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (&uParam0->f_74[iVar0]->f_20[iVar1] != 0)
			{
				if (&uParam0->f_74[iVar0]->f_20[iVar1] == 3)
				{
					fVar5 = uParam0->f_697;
				}
				else
				{
					fVar5 = uParam0->f_696;
				}
				uParam0->f_74[iVar0]->f_25[iVar1] = (&uParam0->f_74[iVar0]->f_25[iVar1] + (get_frame_time() / fVar5));
				fVar4 = &uParam0->f_74[iVar0]->f_25[iVar1];
				if (fVar4 < 1f)
				{
					switch (&uParam0->f_74[iVar0]->f_20[iVar1])
					{
						case 1:
							fVar3 = 1f;
							fVar2 = fVar4;
							break;
						case 2:
							fVar3 = (1f - fVar4);
							fVar2 = 1f;
							break;
						case 3:
							fVar3 = func_1188((1f - (2f * fVar4)), 0, 1065353216);
							fVar2 = func_1188(((2f * fVar4) - 1f), 0, 1065353216);
							break;
					}
					if (does_entity_exist(uParam0->f_74[iVar0][iVar1]))
					{
						set_entity_alpha(uParam0->f_74[iVar0][iVar1], round((fVar2 * 255f)), false);
					}
					if (does_entity_exist(&(uParam0->f_74[iVar0]->f_15[iVar1])))
					{
						set_entity_alpha(&(uParam0->f_74[iVar0]->f_15[iVar1]), round((fVar3 * 255f)), false);
					}
				}
				else
				{
					if (does_entity_exist(uParam0->f_74[iVar0][iVar1]))
					{
						set_entity_alpha(uParam0->f_74[iVar0][iVar1], 255, false);
					}
					if (does_entity_exist(&(uParam0->f_74[iVar0]->f_15[iVar1])))
					{
						delete_object(uParam0->f_74[iVar0]->f_15[iVar1]);
					}
					uParam0->f_74[iVar0]->f_20[iVar1] = 0;
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (&uParam0->f_255[iVar0]->f_20[iVar1] != 0)
			{
				if (&uParam0->f_255[iVar0]->f_20[iVar1] == 3)
				{
					fVar5 = uParam0->f_697;
				}
				else
				{
					fVar5 = uParam0->f_696;
				}
				uParam0->f_255[iVar0]->f_25[iVar1] = (&uParam0->f_255[iVar0]->f_25[iVar1] + (get_frame_time() / fVar5));
				fVar4 = &uParam0->f_255[iVar0]->f_25[iVar1];
				if (fVar4 < 1f)
				{
					switch (&uParam0->f_255[iVar0]->f_20[iVar1])
					{
						case 1:
							fVar3 = 1f;
							fVar2 = fVar4;
							break;
						case 2:
							fVar3 = (1f - fVar4);
							fVar2 = 1f;
							break;
						case 3:
							fVar3 = func_1188((1f - (2f * fVar4)), 0, 1065353216);
							fVar2 = func_1188(((2f * fVar4) - 1f), 0, 1065353216);
							break;
					}
					if (does_entity_exist(uParam0->f_255[iVar0][iVar1]))
					{
						set_entity_alpha(uParam0->f_255[iVar0][iVar1], round((fVar2 * 255f)), false);
					}
					if (does_entity_exist(&(uParam0->f_255[iVar0]->f_15[iVar1])))
					{
						set_entity_alpha(&(uParam0->f_255[iVar0]->f_15[iVar1]), round((fVar3 * 255f)), false);
					}
				}
				else
				{
					if (does_entity_exist(uParam0->f_255[iVar0][iVar1]))
					{
						set_entity_alpha(uParam0->f_255[iVar0][iVar1], 255, false);
					}
					if (does_entity_exist(&(uParam0->f_255[iVar0]->f_15[iVar1])))
					{
						delete_object(uParam0->f_255[iVar0]->f_15[iVar1]);
					}
					uParam0->f_255[iVar0]->f_20[iVar1] = 0;
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (&uParam0->f_436[iVar0]->f_20[iVar1] != 0)
			{
				if (&uParam0->f_436[iVar0]->f_20[iVar1] == 3)
				{
					fVar5 = uParam0->f_697;
				}
				else
				{
					fVar5 = uParam0->f_696;
				}
				uParam0->f_436[iVar0]->f_25[iVar1] = (&uParam0->f_436[iVar0]->f_25[iVar1] + (get_frame_time() / fVar5));
				fVar4 = &uParam0->f_436[iVar0]->f_25[iVar1];
				if (fVar4 < 1f)
				{
					switch (&uParam0->f_436[iVar0]->f_20[iVar1])
					{
						case 1:
							fVar3 = 1f;
							fVar2 = fVar4;
							break;
						case 2:
							fVar3 = (1f - fVar4);
							fVar2 = 1f;
							break;
						case 3:
							fVar3 = func_1188((1f - (2f * fVar4)), 0, 1065353216);
							fVar2 = func_1188(((2f * fVar4) - 1f), 0, 1065353216);
							break;
					}
					if (does_entity_exist(uParam0->f_436[iVar0][iVar1]))
					{
						set_entity_alpha(uParam0->f_436[iVar0][iVar1], round((fVar2 * 255f)), false);
					}
					if (does_entity_exist(&(uParam0->f_436[iVar0]->f_15[iVar1])))
					{
						set_entity_alpha(&(uParam0->f_436[iVar0]->f_15[iVar1]), round((fVar3 * 255f)), false);
					}
				}
				else
				{
					if (does_entity_exist(uParam0->f_436[iVar0][iVar1]))
					{
						set_entity_alpha(uParam0->f_436[iVar0][iVar1], 255, false);
					}
					if (does_entity_exist(&(uParam0->f_436[iVar0]->f_15[iVar1])))
					{
						delete_object(uParam0->f_436[iVar0]->f_15[iVar1]);
					}
					uParam0->f_436[iVar0]->f_20[iVar1] = 0;
				}
			}
			iVar1++;
		}
		iVar0++;
	}
}

bool func_930(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 1:
			func_926(uParam0, 2);
			break;
		case 2:
			if (_uiflowblock_is_loaded(uParam0->f_2))
			{
				func_926(uParam0, 3);
			}
			break;
		case 3:
			if (_uiflowblock_is_loaded(uParam0->f_2))
			{
				_uiflowblock_enter(uParam0->f_2, uParam0->f_3);
				_uistatemachine_create(-1631983120, uParam0->f_2);
				func_926(uParam0, 4);
			}
			break;
		case 4:
			if (get_frame_count() > uParam0->f_161 && uParam0->f_162 != -1)
			{
				func_1418(uParam0, -1);
			}
			break;
	}
	return uParam0->f_1 == 4;
}

void func_931(var uParam0)
{
	iVar17 = 0;
	while (iVar17 < 6)
	{
		switch (&uParam0->f_173[iVar17])
		{
			case 1:
				iVar0 = func_1419(uParam0->f_194[iVar17], &(uParam0->f_180[iVar17]), 2);
				if (iVar0 == 3)
				{
					func_951(uParam0, iVar17, 2);
				}
				break;
			case 2:
				iVar0 = func_1419(uParam0->f_194[iVar17], &(uParam0->f_180[iVar17]), 2);
				if (iVar0 == 4)
				{
					func_951(uParam0, iVar17, 3);
				}
				else if (iVar0 == 1 || iVar0 == 2)
				{
					func_597(&(uParam0->f_180[iVar17]), 2);
					func_951(uParam0, iVar17, 4);
				}
				break;
			case 3:
				iVar0 = func_1419(&Var1, &(uParam0->f_180[iVar17]), 2);
				if (iVar0 == 4)
				{
					*uParam0->f_194[iVar17] = { Var1 };
				}
				break;
		}
		iVar17++;
	}
}

void func_932(var uParam0)
{
	iVar32 = 0;
	while (iVar32 < 6)
	{
		if (&uParam0->f_307[iVar32])
		{
			func_1420(uParam0, iVar32, &uVar0, &cVar16);
			func_1421(uParam0->f_34[iVar32], &uVar0);
			func_1422(uParam0->f_34[iVar32], &cVar16);
		}
		iVar32++;
	}
}

bool func_933(var[] uParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, int iParam17)
{
	if (&uParam0[iParam17] == -1)
	{
		return false;
	}
	return true;
}

void func_934(var uParam0, int iParam1, int iParam2)
{
	iVar2 = int_to_playerindex(iParam2);
	if (network_is_player_active(iVar2) && network_is_player_a_participant(iVar2))
	{
		iVar1 = network_get_participant_index(iVar2);
		iVar0 = iVar1;
		if ((network_is_participant_active(iVar1) && is_bit_set(uParam0->f_17[iVar0]->f_4, iParam1)) && !is_bit_set(uParam0->f_17[iVar0]->f_4, 8))
		{
			(*uParam0)[iParam1] = iVar0;
		}
	}
}

void func_935(var uParam0, int iParam1, int iParam2)
{
	iVar0 = int_to_participantindex(iParam2);
	if (network_is_participant_active(iVar0))
	{
		if (is_bit_set(uParam0->f_17[iParam2]->f_4, 7))
		{
			func_1423(uParam0, iParam1);
		}
	}
	else
	{
		func_937(uParam0, iParam1);
	}
}

bool func_936(var uParam0, int iParam1)
{
	bVar4 = false;
	iVar5 = uParam0[iParam1];
	iVar2 = int_to_participantindex(iVar5);
	if (!network_is_participant_active(iVar2))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar3 = int_to_playerindex(iVar0);
			if (network_is_player_active(iVar3))
			{
				iVar2 = network_get_participant_index(iVar3);
				iVar1 = iVar2;
				if (network_is_participant_active(iVar2))
				{
					if (is_bit_set(uParam0->f_17[iVar1]->f_4, iParam1))
					{
						bVar4 = true;
						(*uParam0)[iParam1] = iVar1;
					}
					else
					{
						iVar0++;
					}
					return !bVar4;
					return false;
				}
			}
		}
	}
}

void func_937(var uParam0, int iParam1)
{
	clear_bit(&(uParam0->f_6), iParam1);
	(*uParam0)[iParam1] = -1;
}

bool func_938()
{
	return Global_1915715->f_20643;
}

int func_939(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	if (!bParam7 && _is_any_app_running())
	{
		return 0;
	}
	iVar0 = &Global_1296859->f_154[&Global_1296859];
	iVar1 = Global_1296859->f_8;
	bVar2 = is_entity_dead(iVar1);
	bVar3 = _0xb655db7582aec805(iVar1);
	if (bVar2 || bVar3)
	{
		if (!bParam5)
		{
			return 0;
		}
	}
	else
	{
		if (!bParam4)
		{
			if (_0xec7e480ff8bd0bed(Global_34))
			{
				return 0;
			}
			if (_0x4912dfe492db98cd(Global_34, "inInspectionMode"))
			{
				return 0;
			}
		}
		if (bParam0 && !is_player_control_on(iVar0))
		{
			if (bParam6 && Global_1102219->f_3 & 32 != 0)
			{
			}
			else if (decor_exist_on(iVar1, "iMinigameSeat"))
			{
			}
			else
			{
				return 0;
			}
		}
	}
	if (!bParam1)
	{
		if (Global_1915715->f_20638 || Global_1915715->f_22504.f_1)
		{
			return 0;
		}
		if (_0xd04241bbf6d03a5e(Global_34) != 0)
		{
			return 0;
		}
	}
	if (func_1424())
	{
		return 0;
	}
	if (Global_15)
	{
		return 0;
	}
	if (!bParam2 && (((Global_1940144->f_10 || Global_1940144->f_11) || Global_1940144->f_12) || Global_1940144->f_13))
	{
		return 0;
	}
	if (!bParam3)
	{
		iVar4 = network_player_id_to_int();
		if (Global_1248240->f_9297 != -1)
		{
			return 0;
		}
		if ((*Global_1128574)[iVar4]->f_34 & 1 != 0 && (*Global_1128574)[iVar4]->f_34 & 2 == 0)
		{
			return 0;
		}
		if (Global_1130634->f_293)
		{
			return 0;
		}
		if (Global_1572887->f_106.f_75 > 11 && Global_1572887->f_106.f_75 < 15)
		{
			return 0;
		}
		else if (Global_1572887->f_106.f_75 > 15)
		{
			return 0;
		}
	}
	if (!bParam8)
	{
		if ((_get_global_block_can_be_accessed(2) && _get_global_block_can_be_accessed(8)) && _get_global_block_can_be_accessed(9))
		{
			if ((Global_1048576 || Global_2883584) // PointerArith)
			{
				return 0;
			}
			if (&Global_1048581)
			{
				return 0;
			}
			if (&Global_1048585)
			{
				return 0;
			}
		}
	}
	return 1;
}

struct<2> func_940(var uParam0, int iParam1)
{
	return *uParam0->f_15[iParam1];
}

bool func_941(var uParam0)
{
	iVar1 = 0;
	while (iVar1 < 6)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (func_477(uParam0, *(*uParam0->f_617[iVar1])[iVar2], &iVar0))
			{
				if (!has_model_loaded(iVar0))
				{
					return false;
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	return true;
}

bool func_942(var uParam0)
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_477(uParam0, *uParam0->f_672[iVar1], &iVar0))
		{
			if (!has_model_loaded(iVar0))
			{
				return false;
			}
		}
		iVar1++;
	}
	return true;
}

void func_943(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_944(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_945()
{
	return Global_1301323->f_150;
}

bool func_946(int iParam0)
{
	return (Global_1301323->f_288.f_2 && iParam0) != 0;
}

int func_947()
{
	return Global_1301323->f_288;
}

bool func_948()
{
	iVar0 = func_1425();
	if (!_does_thread_exist(iVar0))
	{
		return false;
	}
	return is_thread_active(iVar0, false);
}

void func_949(int iParam0)
{
	Global_1301323->f_288 = iParam0;
}

void func_950(int iParam0)
{
	Global_1301323->f_288.f_1 = iParam0;
}

void func_951(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_173[iParam1] = iParam2;
}

void func_952(var uParam0)
{
	vVar0 = -1;
	vVar0.f_1 = get_cloud_time_as_int();
	switch (*uParam0)
	{
		case 0:
			vVar0.x = 0;
			_0x31010318ba9897ac(&(vVar0.f_2), network_player_id_to_int());
			func_1426(vVar0);
			break;
		case 1:
			vVar0.x = uParam0->f_1;
			_0x20f4cb76689acdbc(&(vVar0.f_2));
			func_1426(vVar0);
			if (!uParam0->f_3)
			{
			}
			else
			{
				Var6.f_4 = 0;
				Var6.f_6 = uParam0->f_1;
				Var6.f_5 = *uParam0;
				Var6.f_7 = uVar4;
				iVar3 = 0;
				iVar3 = 0;
				while (iVar3 < 32)
				{
					if (!network_is_player_active(&(Global_1296859->f_154[iVar3])))
					{
					}
					else if (&Global_1296859->f_154[iVar3] == Global_1296859->f_10)
					{
					}
					else
					{
						_0x31010318ba9897ac(&uVar5, &(Global_1296859->f_154[iVar3]));
					}
					iVar3++;
				}
				func_1427(&Var6, uVar5);
				Jump @392; //curOff = 221
				if (!_0x179a6f0ee2e79026(&(uParam0->f_2)))
				{
					return;
				}
				vVar0.x = uParam0->f_1;
				vVar0.f_2 = uParam0->f_2;
				func_1426(vVar0);
				if (!uParam0->f_3)
				{
				}
				else
				{
					Var14.f_4 = 0;
					Var14.f_6 = uParam0->f_1;
					Var14.f_5 = *uParam0;
					Var14.f_7 = uParam0->f_2;
					iVar3 = 0;
					iVar3 = 0;
					while (iVar3 < 32)
					{
						if (!network_is_player_active(&(Global_1296859->f_154[iVar3])))
						{
						}
						else if (&Global_1296859->f_154[iVar3] == Global_1296859->f_10)
						{
						}
						else
						{
							_0x31010318ba9897ac(&uVar5, &(Global_1296859->f_154[iVar3]));
						}
						iVar3++;
					}
					func_1427(&Var14, uVar5);
				}
			}
			default:
				break;
	}
}

bool func_953(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 >= &uParam0->f_1476.f_8[iParam1])
	{
		return is_bit_set(uParam0->f_1476.f_15, iParam1);
	}
	return is_bit_set(uParam0->f_1476.f_16, iParam1);
}

int func_954(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, false, false);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_1428(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

int func_955(var uParam0)
{
	iVar0 = 0;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (func_210(uParam0, iVar2))
		{
			iVar1 = uParam0->f_818[iVar2]->f_6;
			if (iVar1 != -1)
			{
				set_bit(&iVar0, iVar1);
			}
		}
		iVar2++;
	}
	return iVar0;
}

int func_956(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = func_1429(iParam0, bParam2);
	iVar1 = get_random_int_in_range(0, iVar0);
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		if (!is_bit_set(iParam1, iVar1))
		{
			return iVar1;
		}
		iVar1 = (iVar1 + 1 % iVar0);
		iVar2++;
	}
	return iVar1;
}

int func_957(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	iVar0 = func_1430(iParam1, iParam2, iParam3, bParam4);
	_set_ped_body_component(iParam0, iVar0);
	_update_ped_variation(iParam0, false, true, true, true, false);
	return iVar0;
}

void func_958()
{
	if (Global_1051439->f_3743 == -1)
	{
		Global_1051439->f_3743 = 0;
	}
	else
	{
		Global_1051439->f_3743++;
		if (Global_1051439->f_3743 == 180)
		{
			Global_1051439->f_3743 = 0;
		}
	}
	iVar0 = func_453(Global_1051439->f_3743);
	if (iVar0 == -1)
	{
		return;
	}
	func_1431(Global_1051439->f_3743, iVar0);
	bVar1 = ((func_1432(iVar0) || func_1434(func_1433(Global_1051439->f_3743), 255)) || func_1435(Global_1051439->f_3743) == 1);
	iVar2 = func_382(Global_1051439->f_3743);
	bVar1 = ((bVar1 || !_unlock_is_unlocked(iVar2)) || !_unlock_is_visible(iVar2));
	if (bVar1)
	{
		if (&Global_1051439->f_3745[iVar0] == Global_1051439->f_3743)
		{
			func_1436(Global_1051439->f_3745[iVar0]);
			func_1437(Global_1051439->f_3745[iVar0]);
		}
	}
	else
	{
		vVar3 = { 0f, 0f, 0f };
		if (func_1438(Global_1051439->f_3743, &uVar7, &uVar6, &vVar3) && !func_1439(vVar3))
		{
			if (&Global_1051439->f_3745[iVar0] == -1 || func_453(&(Global_1051439->f_3745[iVar0])) != iVar0)
			{
				Global_1051439->f_3745[iVar0] = Global_1051439->f_3743;
				Global_1051439->f_3745[iVar0]->f_1 = { vVar3 };
				Global_1051439->f_3745[iVar0]->f_9 = 0;
			}
			else if (&Global_1051439->f_3745[iVar0] == Global_1051439->f_3743)
			{
			}
			else if (vdist2(func_1440(), vVar3) < vdist2(func_1440(), Global_1051439->f_3745[iVar0]->f_1))
			{
				func_1436(Global_1051439->f_3745[iVar0]);
				Global_1051439->f_3745[iVar0] = Global_1051439->f_3743;
				Global_1051439->f_3745[iVar0]->f_1 = { vVar3 };
				Global_1051439->f_3745[iVar0]->f_9 = 0;
			}
		}
	}
	if (Global_1051439->f_3744 == -1)
	{
		Global_1051439->f_3744 = 0;
	}
	iVar8 = Global_1051439->f_3744 + 1;
	if (iVar8 == 40 || iVar8 == -1)
	{
		iVar8 = 0;
	}
	while (iVar8 != Global_1051439->f_3744)
	{
		if (vdist2(Global_1051439->f_3745[iVar8]->f_1, func_1440()) < func_1441(iVar8, 1))
		{
			Global_1051439->f_3744 = iVar8;
		}
		else
		{
			iVar8++;
			if (iVar8 == 40)
			{
				iVar8 = 0;
			}
		}
	}
	func_1442(Global_1051439->f_3745[Global_1051439->f_3744], Global_1051439->f_3744);
	func_1443(Global_1051439->f_3744);
	if (Global_1051439->f_3718.f_1 != -1)
	{
		func_1444(&(Global_1051439->f_3745[Global_1051439->f_3718.f_1]));
	}
	else if (func_1445())
	{
		iVar9 = 0;
		while (iVar9 < 40)
		{
			func_1444(&(Global_1051439->f_3745[iVar9]));
			if (Global_1051439->f_3718.f_1 != -1)
			{
			}
			else
			{
				iVar9++;
			}
		}
	}
}

int func_959(int iParam0, bool bParam1, bool bParam2)
{
	if (!is_door_registered_with_system(iParam0))
	{
		if ((network_is_in_session() && _does_thread_exist(&(Global_1051252->f_16[0]))) && bParam1)
		{
			_0xd99229fe93b46286(iParam0, 1, 1, 0, &(Global_1051252->f_16[0]), 0, 0);
		}
		else
		{
			_0xd99229fe93b46286(iParam0, 1, 0, 0, 0, 0, 0);
		}
	}
	else if ((network_is_in_session() && _does_thread_exist(&(Global_1051252->f_16[0]))) && bParam1)
	{
		if (!_0xb5ded7b65c604fdf(iParam0))
		{
			_0xd99229fe93b46286(iParam0, 1, 1, 0, &(Global_1051252->f_16[0]), 0, 0);
		}
	}
	if (bParam2)
	{
		_0x1f1fabfe9b2a1254(iParam0, 1);
	}
	return iParam0;
}

bool func_960(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 180);
}

int func_961(int iParam0)
{
	if (_0x603ac35fd4602c76(Global_1139381->f_7) && !func_1447(12, func_1446(iParam0), &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_962(var uParam0)
{
	return 2;
}

bool func_963(var uParam0, int iParam1)
{
	return is_bit_set((uParam0->f_66 && uParam0->f_69), iParam1);
}

int func_964()
{
	if (func_505() == 0)
	{
		return _network_get_cash_balance();
	}
	return _money_get_cash_balance();
}

int func_965(var uParam0, int iParam1)
{
	return (iParam1 * uParam0->f_152.f_51);
}

bool func_966(var uParam0)
{
	if (func_396(uParam0, &uVar0) || func_787(uParam0, &uVar0))
	{
		return true;
	}
	return false;
}

int func_967(var uParam0, int iParam1)
{
	return uParam0->f_39[iParam1]->f_1;
}

bool func_968(var uParam0)
{
	return uParam0->f_465;
}

void func_969(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (uParam0->f_166)
	{
		return;
	}
	uParam0->f_465 = 1;
	uParam0->f_465.f_1 = 0;
	if (iParam3 > 0)
	{
		func_971(uParam1, iParam3);
	}
	uParam0->f_465.f_2 = func_1151(uParam2->f_13, func_1448(uParam0, func_964()));
	if (uParam0->f_169)
	{
		func_156(8192);
		func_157(16384);
	}
	func_596(&(uParam0->f_465.f_3));
	uParam0->f_465.f_17 = 0;
}

bool func_970(var uParam0)
{
	return uParam0->f_61 != 0;
}

void func_971(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
	}
	else
	{
		uParam0->f_61 = iParam1;
		func_272(uParam0);
	}
}

bool func_972(var uParam0, var uParam1, var uParam2)
{
	if (uParam0->f_465)
	{
		if (uParam0->f_465.f_1 == 0)
		{
			iVar0 = func_1151(uParam2->f_12, func_1448(uParam0, func_964()));
			iVar1 = func_1151(uParam2->f_13, func_1448(uParam0, func_964()));
			if (!func_152(uParam0->f_465.f_18))
			{
				uParam0->f_465.f_18 = func_1125("MGPKR_UI_BUYIN", 1923731959, 4, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			}
			if (!func_152(uParam0->f_465.f_19))
			{
				if (iVar0 != iVar1)
				{
					uParam0->f_465.f_19 = func_1125("MGPKR_UI_ALTER", -1111018514, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
				}
			}
			iVar2 = 0;
			iVar2 = func_1449(&(uParam0->f_465.f_3), -get_control_normal(2, -1111018514), 0);
			if (iVar2 != 0)
			{
				iVar3 = func_1162((uParam0->f_465.f_2 + iVar2), iVar0, iVar1);
				if (uParam0->f_465.f_2 != iVar3)
				{
					uParam0->f_465.f_2 = iVar3;
					func_1450((iVar3 == iVar0 || iVar3 == iVar1));
				}
			}
			if (func_525(uParam0->f_465.f_18, 1))
			{
				uParam0->f_465.f_1 = 1;
			}
			if (uParam0->f_169 && func_151(16384))
			{
				uParam0->f_465.f_1 = 1;
			}
			if (func_152(uParam0->f_465.f_18))
			{
				func_1452(uParam0->f_465.f_18, "MGPKR_UI_BUYIN", func_1451(uParam0, uParam0->f_465.f_2), 1);
			}
		}
		if (uParam0->f_465.f_1 != 0)
		{
			func_1453(uParam1);
			func_157(8192);
			func_157(16384);
			func_1086(&(uParam0->f_465.f_18), 1, 1);
			func_1086(&(uParam0->f_465.f_19), 1, 1);
			return true;
		}
	}
	return false;
}

var func_973(var uParam0)
{
	return uParam0->f_465.f_2;
}

bool func_974(var uParam0, int iParam1, var uParam2)
{
	if (!func_409(uParam0, 1))
	{
		if (iParam1 != uParam0->f_9)
		{
		}
		else if (_poker_buy_in(uParam2, &Var0))
		{
			func_410(uParam0, 1, Var0, 1, 0);
			return true;
		}
	}
	return false;
}

void func_975(var uParam0, var uParam1)
{
	uParam0->f_465 = 0;
	uParam0->f_465.f_1 = 0;
	uParam0->f_465.f_2 = 0;
	func_1453(uParam1);
	func_157(8192);
	func_157(16384);
	func_1086(&(uParam0->f_465.f_18), 1, 1);
	func_1086(&(uParam0->f_465.f_19), 1, 1);
}

bool func_976()
{
	if (network_is_in_platform_party())
	{
		return network_is_in_platform_party_chat();
	}
	return false;
}

void func_977(var uParam0, var uParam1)
{
	iVar2 = get_random_int_in_range(0, 6);
	iVar1 = 0;
	while (iVar1 < 6)
	{
		iVar0 = &uParam1->f_2021[iVar2];
		if (iVar0 != 0)
		{
			Stack.Push(uParam0);
			Stack.Push(uParam1);
			Stack.Push(iVar2);
			Stack.Push(uParam1->f_2028[iVar2]);
			Call_Loc(&uParam1->f_1436[iVar0]);
			if (StackVal)
			{
				func_1454(uParam1, iVar2);
			}
		}
		iVar2 = (iVar2 + 1 % 6);
		iVar1++;
	}
}

void func_978(var uParam0, var uParam1)
{
	func_1455(&(uParam0->f_152), &uVar0, &uVar7, &uVar14, &uVar21, &iVar28, &bVar29, &iVar30);
	iVar31 = 0;
	iVar32 = 0;
	iVar33 = 0;
	while (iVar33 < 6)
	{
		if (&uVar0[iVar33])
		{
			iVar31++;
			if (&uVar7[iVar33] > 0)
			{
				iVar32++;
			}
		}
		iVar33++;
	}
	if (!bVar29)
	{
		if (func_1456(&(uParam0->f_2337)) != iVar32 || func_1457(&(uParam0->f_2337)) != iVar31)
		{
			func_1203(&(uParam0->f_2337), iVar32, iVar31);
		}
		iVar34 = (iVar28 - get_cloud_time_as_int());
		if (iVar34 < 1)
		{
			iVar34 = 1;
		}
		if (uParam0->f_152.f_9 != -1 && &uVar7[uParam0->f_152.f_9] == 0)
		{
			if (func_1204(&(uParam0->f_2337)) != 8 && !uParam0->f_152.f_1632)
			{
				func_800(&(uParam0->f_2337), "MGPKR_YOU_NEED_TO_BUYIN", 8);
			}
		}
		else if (func_1204(&(uParam0->f_2337)) == 8)
		{
			func_992(&(uParam0->f_2337));
		}
		if (iVar28 == 0)
		{
			if (func_1458(&(uParam0->f_2337)) != -1)
			{
				func_1459(&(uParam0->f_2337));
			}
			if (iVar32 < 2)
			{
				if ((func_1204(&(uParam0->f_2337)) != 9 && func_1204(&(uParam0->f_2337)) != 8) && !uParam0->f_152.f_1632)
				{
					func_800(&(uParam0->f_2337), "MGPKR_MORE_NEED_TO_BUYIN", 9);
				}
			}
		}
		else
		{
			if (func_1458(&(uParam0->f_2337)) != iVar34)
			{
				func_1460(&(uParam0->f_2337), iVar34);
				if (iVar34 <= 5)
				{
					play_sound_frontend("round_start_countdown_tick", "RDRO_Poker_Sounds", true, 0);
				}
			}
			if (func_1204(&(uParam0->f_2337)) == 9)
			{
				func_992(&(uParam0->f_2337));
			}
		}
	}
	else if (!uParam0->f_152.f_2053)
	{
		uParam0->f_152.f_2053 = 1;
		func_1201(&(uParam0->f_2337), 1, 1);
		func_1216(&(uParam0->f_2337));
		func_1054(&(uParam0->f_2337), 0, func_330(), 0, 0);
		func_1054(&(uParam0->f_2337), 1, func_330(), 0, 0);
		func_1054(&(uParam0->f_2337), 2, func_330(), 0, 0);
		func_1054(&(uParam0->f_2337), 3, func_330(), 0, 0);
		func_1054(&(uParam0->f_2337), 4, func_330(), 0, 0);
		func_1057(&(uParam0->f_2337), 0, iVar30, 1);
		if (func_1204(&(uParam0->f_2337)) == 8 || func_1204(&(uParam0->f_2337)) == 9)
		{
			func_992(&(uParam0->f_2337));
		}
	}
	iVar33 = 0;
	while (iVar33 < 6)
	{
		if (func_203(uParam1, iVar33) && func_993(&(uParam0->f_2337), iVar33))
		{
			if (func_1365(&(uParam0->f_2337), iVar33) != &uVar7[iVar33])
			{
				func_1205(&(uParam0->f_2337), iVar33, &(uVar7[iVar33]));
			}
			if (!&uVar0[iVar33])
			{
				if (!func_1461(&(uParam0->f_2337), iVar33, func_1396()))
				{
					func_1048(&(uParam0->f_2337), iVar33, func_1396());
					func_1052(&(uParam0->f_2337), iVar33, 1);
				}
			}
			else if (&uVar21[iVar33] == 0)
			{
				if (&uVar7[iVar33] == 0)
				{
					if (!func_1461(&(uParam0->f_2337), iVar33, func_1206()))
					{
						func_1048(&(uParam0->f_2337), iVar33, func_1206());
						func_1052(&(uParam0->f_2337), iVar33, 0);
					}
				}
				else if (!func_1461(&(uParam0->f_2337), iVar33, func_1207()))
				{
					func_1048(&(uParam0->f_2337), iVar33, func_1207());
					func_1052(&(uParam0->f_2337), iVar33, 0);
				}
			}
			else if (!is_bit_set(uParam0->f_152.f_2054, iVar33))
			{
				set_bit(&(uParam0->f_152.f_2054), iVar33);
				if (&uVar21[iVar33] == 6)
				{
					if (&uVar7[iVar33] == 0)
					{
						func_1048(&(uParam0->f_2337), iVar33, func_1206());
					}
					else
					{
						func_1048(&(uParam0->f_2337), iVar33, func_1207());
					}
					func_1052(&(uParam0->f_2337), iVar33, 1);
				}
				else
				{
					if (&uVar21[iVar33] == 1)
					{
						func_1048(&(uParam0->f_2337), iVar33, func_1220(&(uParam0->f_2337), &(uVar14[iVar33])));
					}
					else if (&uVar21[iVar33] == 2)
					{
						func_1048(&(uParam0->f_2337), iVar33, func_1221(&(uParam0->f_2337), &(uVar14[iVar33])));
					}
					else if (&uVar21[iVar33] == 3)
					{
						func_1048(&(uParam0->f_2337), iVar33, func_1222(&(uParam0->f_2337), &(uVar14[iVar33])));
					}
					else if (&uVar21[iVar33] == 4)
					{
						func_1048(&(uParam0->f_2337), iVar33, func_1223(&(uParam0->f_2337), &(uVar14[iVar33])));
					}
					else if (&uVar21[iVar33] == 5)
					{
						func_1048(&(uParam0->f_2337), iVar33, func_1224(uParam0, iVar33));
					}
					func_1052(&(uParam0->f_2337), iVar33, 0);
				}
			}
		}
		iVar33++;
	}
}

void func_979(var uParam0, bool bParam1)
{
	if (bParam1 && !uParam0->f_166)
	{
		if (!func_152(uParam0->f_495))
		{
			uParam0->f_499 = func_1125("MGPKR_UI_HANDS", 2003155412, 3, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			func_1126(uParam0->f_499, 14, 1, 1);
			func_1126(uParam0->f_499, 17, 1, 1);
		}
	}
	else if (func_152(uParam0->f_499))
	{
		func_1086(&(uParam0->f_499), 1, 1);
	}
}

void func_980(var uParam0, bool bParam1)
{
	if (bParam1 && !uParam0->f_166)
	{
		if (!func_152(uParam0->f_494))
		{
			uParam0->f_494 = func_1125("MGPKR_UI_HOLE", -115100873, 3, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			func_1126(uParam0->f_494, 14, 1, 1);
			func_1126(uParam0->f_494, 17, 1, 1);
		}
	}
	else if (func_152(uParam0->f_494))
	{
		func_1086(&(uParam0->f_494), 1, 1);
	}
}

void func_981(var uParam0, bool bParam1)
{
	if (bParam1 && !uParam0->f_166)
	{
		if (!func_152(uParam0->f_495))
		{
			uParam0->f_495 = func_1125("MGPKR_UI_BOARD", -469583720, 3, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			func_1126(uParam0->f_495, 14, 1, 1);
			func_1126(uParam0->f_495, 17, 1, 1);
		}
	}
	else if (func_152(uParam0->f_495))
	{
		func_1086(&(uParam0->f_495), 1, 1);
	}
}

void func_982(var uParam0, bool bParam1)
{
	if (!uParam0->f_166)
	{
		if (func_152(uParam0->f_494))
		{
			func_1462(uParam0->f_494, bParam1);
		}
	}
}

bool func_983(var uParam0, int iParam1)
{
	return does_entity_exist(&(uParam0->f_672.f_11[iParam1]));
}

void func_984(var uParam0, bool bParam1)
{
	if (!uParam0->f_166)
	{
		if (func_152(uParam0->f_495))
		{
			func_1462(uParam0->f_495, bParam1);
		}
	}
}

void func_985(var uParam0, bool bParam1)
{
	if (!uParam0->f_166)
	{
		if (func_152(uParam0->f_499))
		{
			func_1462(uParam0->f_499, bParam1);
		}
	}
}

void func_986(var uParam0, bool bParam1)
{
	if (bParam1 && !uParam0->f_166)
	{
		if (!func_152(uParam0->f_500))
		{
			uParam0->f_500 = func_1125("MGPKR_UI_FREE_LOOK", -1968567596, 3, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			func_1126(uParam0->f_500, 14, 1, 1);
			func_1126(uParam0->f_500, 17, 1, 1);
		}
	}
	else if (func_152(uParam0->f_500))
	{
		func_1086(&(uParam0->f_500), 1, 1);
	}
}

void func_987(var uParam0)
{
	if (!_is_app_running(-605293197))
	{
		if (!_can_launch_app_by_hash_with_entry(-605293197, 1495295997))
		{
		}
		else
		{
			_launch_app_by_hash_with_entry(-605293197, 1495295997);
			uParam0->f_168 = 1;
		}
	}
}

bool func_988(int iParam0)
{
	iVar0 = func_347(iParam0);
	iVar1 = (*Global_1951255)[iVar0]->f_4;
	return (func_153(iParam0, 1) && is_control_just_pressed(2, iVar1));
}

bool func_989(int iParam0)
{
	return func_153(iParam0, 1);
}

void func_990(var uParam0)
{
	func_1463(&(uParam0->f_36), 0);
	switch (uParam0->f_2)
	{
		case 2:
			_0x90da5ba5c2635416();
			break;
		case 1:
		case 3:
			disable_control_action(0, -1450761377, false);
			disable_control_action(0, -771458680, false);
			break;
	}
	if (uParam0->f_1)
	{
		if (_0xa24c1d341c6e0d53(1, 0, 0))
		{
			if (!uParam0->f_8)
			{
				set_transition_timecycle_modifier(func_452(uParam0->f_7), 1E-08f);
				uParam0->f_8 = 1;
			}
		}
		else if (uParam0->f_8)
		{
			_0xbb6c707f20d955d4(1E-08f);
			uParam0->f_8 = 0;
		}
	}
}

char* func_991(var uParam0, int iParam1, bool bParam2)
{
	if (func_203(uParam0, iParam1) && func_1464(&(uParam0->f_39[iParam1]->f_31)))
	{
		return func_1465(&(uParam0->f_39[iParam1]->f_31), bParam2);
	}
	return "nothing";
}

void func_992(var uParam0)
{
	if (uParam0->f_165)
	{
		return;
	}
	if (uParam0->f_167)
	{
		return;
	}
	func_250(1);
	uParam0->f_170 = 0;
}

bool func_993(var uParam0, int iParam1)
{
	if (((iParam1 >= 0 && iParam1 < 6) && uParam0->f_307[iParam1]) // PointerArith)
	{
		return true;
	}
	return false;
}

void func_994(var uParam0, int iParam1, char* sParam2)
{
	if (iParam1 < 0 || iParam1 >= 6)
	{
	}
	else if (!&uParam0->f_307[iParam1])
	{
	}
	else
	{
		func_1466(uParam0->f_34[iParam1], sParam2);
		uParam0->f_307[iParam1]->f_19 = 1;
	}
}

void func_995(var uParam0, int iParam1)
{
	uParam0->f_1402 = iParam1;
}

void func_996(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 6)
	{
	}
	else if (!&uParam0->f_307[iParam1])
	{
	}
	else if (uParam0->f_307[iParam1]->f_19)
	{
		func_1466(uParam0->f_34[iParam1], &(uParam0->f_307[iParam1]->f_3));
		uParam0->f_307[iParam1]->f_19 = 0;
	}
}

void func_997(var uParam0, var uParam1, var uParam2)
{
	if (uParam0->f_485 != 0)
	{
		if (!func_1237(uParam1, uParam0->f_485.f_1, uParam2))
		{
			func_687(uParam0);
			return;
		}
		bVar0 = true;
		while (bVar0)
		{
			bVar0 = false;
			switch (uParam0->f_485)
			{
				case 1:
					if (!func_152(uParam0->f_485.f_4))
					{
						if (uParam0->f_485.f_2 == 0)
						{
							uParam0->f_485.f_4 = func_1125("MGPKR_UI_PRETURN_MENU_MP", -2090825024, 3, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
						}
						else if (uParam0->f_485.f_2 == 1)
						{
							uParam0->f_485.f_4 = func_1125("MGPKR_UI_PRETURN_MENU_CHECK", -2090825024, 3, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
						}
						else if (uParam0->f_485.f_2 == 2)
						{
							uParam0->f_485.f_4 = func_1125("MGPKR_UI_PRETURN_MENU_CHECK_FOLD", -2090825024, 3, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
						}
						else if (uParam0->f_485.f_2 == 3)
						{
							uParam0->f_485.f_4 = func_1125("MGPKR_UI_PRETURN_MENU_CALL_ANY", -2090825024, 3, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
						}
						else if (uParam0->f_485.f_2 == 5)
						{
							uParam0->f_485.f_4 = func_1125("MGPKR_UI_PRETURN_MENU_FOLD", -2090825024, 3, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
						}
						func_1467(uParam0->f_485.f_4, 1, 1);
						func_1468(uParam0->f_485.f_4, 1, 1);
					}
					if (func_988(uParam0->f_485.f_4))
					{
						play_sound_frontend("menu_select_default", "RDRO_Poker_Sounds", true, 0);
						if (func_1469(uParam1, uParam0->f_485.f_1))
						{
							func_1470(uParam0, 2);
							bVar0 = true;
						}
						else
						{
							func_1470(uParam0, 3);
							bVar0 = true;
						}
					}
					break;
				case 2:
					if (!is_control_pressed(2, -2090825024))
					{
						func_1470(uParam0, 1);
						bVar0 = true;
					}
					else if (func_1471(uParam0, uParam1, uParam2))
					{
						if (func_1469(uParam1, uParam0->f_485.f_1))
						{
							func_1470(uParam0, 2);
						}
						else
						{
							func_1470(uParam0, 3);
						}
						bVar0 = true;
					}
					else
					{
						_uiprompt_set_active_group_this_frame(635838715, "MGPKR_UI_PRETURN_MENU_MP", 1, 0, 0, 0);
						if (!func_152(uParam0->f_485.f_5))
						{
							uParam0->f_485.f_5 = func_1125("MGPKR_UI_PRETURN_CHECK", -1450691735, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
							func_1472(uParam0->f_485.f_5, 635838715, 0, 1);
							if (uParam0->f_485.f_2 == 1)
							{
								func_1462(uParam0->f_485.f_5, 1);
							}
						}
						if (!func_152(uParam0->f_485.f_6))
						{
							uParam0->f_485.f_6 = func_1125("MGPKR_UI_PRETURN_FOLD", 1236577566, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
							func_1472(uParam0->f_485.f_6, 635838715, 0, 1);
							if (uParam0->f_485.f_2 == 5)
							{
								func_1462(uParam0->f_485.f_6, 1);
							}
						}
						if (!func_152(uParam0->f_485.f_7))
						{
							uParam0->f_485.f_7 = func_1125("MGPKR_UI_PRETURN_CHECK_FOLD", 1923731959, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
							func_1472(uParam0->f_485.f_7, 635838715, 0, 1);
							if (uParam0->f_485.f_2 == 2)
							{
								func_1462(uParam0->f_485.f_7, 1);
							}
						}
						if (!func_152(uParam0->f_485.f_8))
						{
							uParam0->f_485.f_8 = func_1125("MGPKR_UI_PRETURN_CANCEL", -385266784, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
							func_1472(uParam0->f_485.f_8, 635838715, 0, 1);
							if (uParam0->f_485.f_2 == 0)
							{
								func_1462(uParam0->f_485.f_8, 1);
							}
						}
						if (func_152(uParam0->f_494))
						{
							func_464(uParam0->f_494, 0, 1);
						}
						if (func_152(uParam0->f_495))
						{
							func_464(uParam0->f_495, 0, 1);
						}
						if (func_152(uParam0->f_499))
						{
							func_464(uParam0->f_499, 0, 1);
						}
						if (func_152(uParam0->f_500))
						{
							func_464(uParam0->f_500, 0, 1);
						}
						if (func_1473(uParam0->f_485.f_5, 1))
						{
							play_sound_frontend("menu_select_default", "RDRO_Poker_Sounds", true, 0);
							func_1474(uParam0, 1, 0);
							func_1470(uParam0, 2);
							bVar0 = true;
						}
						else if (func_1473(uParam0->f_485.f_6, 1))
						{
							play_sound_frontend("menu_select_default", "RDRO_Poker_Sounds", true, 0);
							func_1474(uParam0, 5, 0);
							func_1470(uParam0, 2);
							bVar0 = true;
						}
						else if (func_1473(uParam0->f_485.f_7, 1))
						{
							play_sound_frontend("menu_select_default", "RDRO_Poker_Sounds", true, 0);
							func_1474(uParam0, 2, 0);
							func_1470(uParam0, 2);
							bVar0 = true;
						}
						else if (func_1473(uParam0->f_485.f_8, 1))
						{
							play_sound_frontend("menu_select_default", "RDRO_Poker_Sounds", true, 0);
							func_1475(uParam0);
							func_1470(uParam0, 2);
							bVar0 = true;
						}
					}
					break;
				case 3:
					if (!is_control_pressed(2, -2090825024))
					{
						func_1470(uParam0, 1);
						bVar0 = true;
					}
					else if (func_1471(uParam0, uParam1, uParam2))
					{
						if (func_1469(uParam1, uParam0->f_485.f_1))
						{
							func_1470(uParam0, 2);
						}
						else
						{
							func_1470(uParam0, 3);
						}
						bVar0 = true;
					}
					else
					{
						_uiprompt_set_active_group_this_frame(635838715, "MGPKR_UI_PRETURN_MENU_MP", 1, 0, 0, 0);
						if (!func_152(uParam0->f_485.f_5))
						{
							uParam0->f_485.f_5 = func_1125("MGPKR_UI_PRETURN_CALL_ANY", -1450691735, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
							func_1472(uParam0->f_485.f_5, 635838715, 0, 1);
							if (uParam0->f_485.f_2 == 3)
							{
								func_1462(uParam0->f_485.f_5, 1);
							}
						}
						if (!func_152(uParam0->f_485.f_6))
						{
							uParam0->f_485.f_6 = func_1125("MGPKR_UI_PRETURN_FOLD", 1236577566, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
							func_1472(uParam0->f_485.f_6, 635838715, 0, 1);
							if (uParam0->f_485.f_2 == 5)
							{
								func_1462(uParam0->f_485.f_6, 1);
							}
						}
						if (!func_152(uParam0->f_485.f_8))
						{
							uParam0->f_485.f_8 = func_1125("MGPKR_UI_PRETURN_CANCEL", -385266784, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
							func_1472(uParam0->f_485.f_8, 635838715, 0, 1);
							if (uParam0->f_485.f_2 == 0)
							{
								func_1462(uParam0->f_485.f_8, 1);
							}
						}
						if (func_152(uParam0->f_494))
						{
							func_464(uParam0->f_494, 0, 1);
						}
						if (func_152(uParam0->f_495))
						{
							func_464(uParam0->f_495, 0, 1);
						}
						if (func_152(uParam0->f_499))
						{
							func_464(uParam0->f_499, 0, 1);
						}
						if (func_152(uParam0->f_500))
						{
							func_464(uParam0->f_500, 0, 1);
						}
						if (func_1473(uParam0->f_485.f_5, 1))
						{
							play_sound_frontend("menu_select_default", "RDRO_Poker_Sounds", true, 0);
							func_1474(uParam0, 3, 0);
							func_1470(uParam0, 3);
							bVar0 = true;
						}
						else if (func_1473(uParam0->f_485.f_6, 1))
						{
							play_sound_frontend("menu_select_default", "RDRO_Poker_Sounds", true, 0);
							func_1474(uParam0, 5, 0);
							func_1470(uParam0, 3);
							bVar0 = true;
						}
						else if (func_1473(uParam0->f_485.f_8, 1))
						{
							play_sound_frontend("menu_select_default", "RDRO_Poker_Sounds", true, 0);
							func_1475(uParam0);
							func_1470(uParam0, 3);
							bVar0 = true;
						}
					}
					break;
			}
		}
	}
}

void func_998(var uParam0, int iParam1)
{
	if (&uParam0->f_818[iParam1] == 0)
	{
	}
	else if (uParam0->f_818[iParam1]->f_50)
	{
	}
	else if (uParam0->f_818[iParam1]->f_8 != 1)
	{
	}
	else if (uParam0->f_818[iParam1]->f_1 != 2)
	{
	}
	else
	{
		func_471(uParam0, iParam1, 10);
		func_1133(uParam0, iParam1, 30);
		func_476(uParam0, iParam1, 2);
		if (!uParam0->f_40)
		{
			request_task_move_network_state_transition(&(uParam0->f_818[iParam1]), "PeekEnter");
		}
	}
}

void func_999(var uParam0)
{
	uParam0->f_1454++;
}

bool func_1000(var uParam0, int iParam1, int iParam2)
{
	return (uParam0->f_818[iParam1]->f_48 || (iParam2 && uParam0->f_818[iParam1]->f_47));
}

void func_1001(var uParam0, int iParam1)
{
	if (!uParam0->f_818[iParam1]->f_47 && !uParam0->f_818[iParam1]->f_48)
	{
		uParam0->f_818[iParam1]->f_48 = 1;
	}
}

void func_1002(var uParam0, int iParam1)
{
	iVar0 = player_id();
	if (!network_is_player_active(iVar0) || !network_is_player_a_participant(iVar0))
	{
	}
	else
	{
		iVar1 = network_get_participant_index(iVar0);
		if (!network_is_participant_active(iVar1))
		{
		}
		else
		{
			iVar2 = iVar1;
			if (uParam0->f_1476.f_17[iVar2]->f_3 != iParam1)
			{
				uParam0->f_1476.f_17[iVar2]->f_2 = uParam0->f_416;
				uParam0->f_1476.f_17[iVar2]->f_3 = iParam1;
			}
		}
	}
}

bool func_1003(var uParam0, int iParam1, bool bParam2)
{
	if (func_362(uParam0, iParam1) == 1)
	{
		iVar0 = func_370(uParam0, iParam1);
		if (!network_is_player_active(iVar0) || !network_is_player_a_participant(iVar0))
		{
		}
		else
		{
			iVar1 = network_get_participant_index(iVar0);
			if (!network_is_participant_active(iVar1))
			{
			}
			else
			{
				iVar2 = iVar1;
				if (uParam0->f_416 >= uParam0->f_1476.f_17[iVar2]->f_2)
				{
					*bParam2 = uParam0->f_1476.f_17[iVar2]->f_3;
					return true;
				}
			}
		}
	}
	*bParam2 = 0;
	return false;
}

void func_1004(var uParam0, var uParam1)
{
	if (uParam1->f_1871 != -1)
	{
		if (!func_915(&(uParam0->f_2841), uParam1->f_1871))
		{
			func_1476(uParam1);
		}
	}
}

void func_1005(var uParam0)
{
	if (func_210(&(uParam0->f_2841), uParam0->f_152.f_2173) && func_210(&(uParam0->f_2841), uParam0->f_152.f_2174))
	{
		if (!func_269(&(uParam0->f_152.f_2175)) || func_127(&(uParam0->f_152.f_2175)) >= 0f)
		{
			if (func_1091(&(uParam0->f_2841), uParam0->f_152.f_2173))
			{
				func_1477(&(uParam0->f_2841), uParam0->f_152.f_2173, 1, uParam0->f_152.f_2174);
				func_361(&(uParam0->f_152.f_2175), -100000f);
			}
		}
		if (!func_269(&(uParam0->f_152.f_2178)) || func_127(&(uParam0->f_152.f_2178)) >= 0f)
		{
			if (func_1091(&(uParam0->f_2841), uParam0->f_152.f_2174))
			{
				func_1477(&(uParam0->f_2841), uParam0->f_152.f_2174, 0, uParam0->f_152.f_2173);
				func_361(&(uParam0->f_152.f_2178), -100000f);
			}
		}
	}
}

void func_1006(var uParam0, var uParam1)
{
	if (uParam0->f_2841.f_40)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (&uParam1->f_2067[iVar0] != -1)
		{
			if (func_210(&(uParam0->f_2841), iVar0) && func_1091(&(uParam0->f_2841), iVar0))
			{
				if (func_127(uParam1->f_2081[iVar0]) >= 0f)
				{
					func_1477(&(uParam0->f_2841), iVar0, &(uParam1->f_2074[iVar0]), &(uParam1->f_2067[iVar0]));
					func_1478(uParam1, iVar0);
				}
			}
			else
			{
				func_1478(uParam1, iVar0);
			}
		}
		iVar0++;
	}
	if (uParam1->f_1548 == 4)
	{
		iVar1 = func_1479(&(uParam1->f_416), uParam1->f_416.f_6, 0, 1, 0);
		iVar2 = func_757(&(uParam1->f_416));
		iVar3 = func_1261(&(uParam1->f_416));
		iVar4 = func_1260(&(uParam1->f_416));
	}
	if (uParam1->f_1548 == 5)
	{
		iVar5 = func_1479(&(uParam1->f_416), uParam1->f_416.f_3, 0, 1, 0);
	}
	uParam1->f_2002 = 0;
	iVar7 = 0;
	while (iVar7 < 6)
	{
		bVar6 = true;
		if ((&uParam1->f_416.f_39[iVar7] != -1 && &uParam0->f_2841.f_818[iVar7] != 0) && !is_bit_set(uParam0->f_152.f_1618, iVar7))
		{
			switch (uParam1->f_1548)
			{
				case 1:
				case 2:
					if (uParam1->f_1998 == iVar7)
					{
						bVar6 = false;
					}
					break;
				case 3:
					if (uParam1->f_1998 == iVar7)
					{
						bVar6 = false;
					}
					break;
				case 4:
					if (iVar2 == 1 && func_440(&(uParam1->f_416), iVar7))
					{
						bVar6 = false;
					}
					else if ((iVar3 == 0 || uParam1->f_1549 == 41) || uParam1->f_1549 == 6)
					{
						if (iVar4 == 0 || uParam1->f_416.f_2 == 3)
						{
							if (func_913(&(uParam1->f_416), iVar7))
							{
								bVar6 = false;
							}
						}
						else if (uParam1->f_416.f_2 < 3)
						{
							if (iVar7 == uParam1->f_1998)
							{
								bVar6 = false;
							}
						}
					}
					else if ((iVar7 == uParam1->f_416.f_6 && !(uParam1->f_1549 == 30 && func_127(&(uParam1->f_1550)) > 5f)) || (iVar7 == iVar1 && !(uParam1->f_1549 == 30 && func_127(&(uParam1->f_1550)) > 10f)))
					{
						bVar6 = false;
					}
					break;
				case 5:
					if (uParam1->f_1998 == iVar7 || (iVar5 == iVar7 && uParam1->f_1549 == 27))
					{
						bVar6 = false;
					}
					break;
				case 6:
					if (uParam1->f_1998 == iVar7 || func_913(&(uParam1->f_416), iVar7))
					{
						bVar6 = false;
					}
					break;
				case 7:
				case 8:
				case 9:
					if (func_913(&(uParam1->f_416), iVar7))
					{
						bVar6 = false;
					}
					break;
				case 10:
					if ((uParam1->f_1998 == iVar7 || func_455(&(uParam0->f_2841), iVar7) == 2) || func_793(uParam1))
					{
						bVar6 = false;
					}
					break;
				default:
					bVar6 = false;
					break;
			}
			if (bVar6)
			{
				set_bit(&(uParam1->f_2002), iVar7);
			}
		}
		iVar7++;
	}
	func_1480(&(uParam0->f_2841), uParam1->f_2002, uParam1->f_9);
}

void func_1007(var uParam0, var uParam1, var uParam2)
{
	switch (*uParam2)
	{
		case 1:
			if (func_101(&(uParam2->f_3), 1f))
			{
				if ((!func_210(&(uParam0->f_2841), uParam2->f_1) || !func_915(&(uParam0->f_2841), uParam2->f_1)) || func_101(&(uParam2->f_3), 5f))
				{
					func_1481(uParam0, uParam2->f_2, uParam2->f_1);
					func_1482(uParam1);
				}
			}
			break;
		case 2:
			if (func_101(&(uParam2->f_3), 1f))
			{
				if ((!func_210(&(uParam0->f_2841), uParam2->f_1) || !func_915(&(uParam0->f_2841), uParam2->f_1)) || func_101(&(uParam2->f_3), 5f))
				{
					func_1483(uParam0, uParam2->f_1);
					func_1482(uParam1);
				}
			}
			break;
	}
}

void func_1008()
{
	if (!func_412(67108864))
	{
		func_1484(67108864);
	}
}

void func_1009(var uParam0)
{
	switch (uParam0->f_1403)
	{
		case 0:
			break;
		case 2:
			break;
		case 4:
			func_1014(uParam0, 2);
			break;
	}
}

bool func_1010(var uParam0, bool bParam1)
{
	if ((uParam0->f_58 == 2 || (uParam0->f_58 == 3 && bParam1)) || uParam0->f_58 == 4)
	{
		return true;
	}
	return false;
}

void func_1011(var uParam0, bool bParam1)
{
	func_1485(uParam0, bParam1);
}

void func_1012(var uParam0, bool bParam1)
{
	_databinding_write_data_bool(uParam0->f_29, bParam1);
}

void func_1013(var uParam0)
{
	if (uParam0->f_485 != 0)
	{
		if (uParam0->f_485 != 1)
		{
			func_1470(uParam0, 1);
		}
	}
}

void func_1014(var uParam0, int iParam1)
{
	if (uParam0->f_1404 < iParam1)
	{
		uParam0->f_1404 = iParam1;
	}
}

bool func_1015(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (uParam0->f_1400)
		{
			return false;
		}
	}
	if (uParam0->f_1388 != _minigame_get_next_event_type())
	{
		func_403(uParam0);
		return false;
	}
	if (uParam0->f_1388 == -1857735811)
	{
		iVar0 = uParam0->f_1396 + 1;
		iVar1 = (uParam0->f_1388.f_2 - iVar0);
		return iVar1 > 0;
	}
	return false;
}

void func_1016(var uParam0, var uParam1)
{
	if (uParam1->f_1553 != 0)
	{
	}
	else
	{
		func_1486(uParam0);
	}
}

bool func_1017(var uParam0)
{
	if (_0x3b31732fade5baf3() >= 15)
	{
		if (func_197(uParam0, 0, 0, 0, &iVar0, &uVar1))
		{
			if (iVar0 >= 10)
			{
				return true;
			}
		}
	}
	return false;
}

char* func_1018(int iParam0, int iParam1)
{
	sVar0 = (absi(((iParam0 - iParam1) - 6)) % 6) + 1;
	return _create_var_string(2, "MGPKR_INFO_NAME", sVar0);
}

void func_1019(var uParam0, int iParam1)
{
	if (!&uParam0->f_409[iParam1])
	{
		return;
	}
	*uParam0->f_71[iParam1] = { *uParam0->f_240[iParam1] };
	uParam0->f_240[iParam1] = 0;
	StringCopy(&(uParam0->f_240[iParam1]->f_1), "", 128);
	uParam0->f_240[iParam1]->f_17 = 0;
	uParam0->f_240[iParam1]->f_18 = 255;
	uParam0->f_240[iParam1]->f_26 = 0;
	uParam0->f_240[iParam1]->f_27 = 0;
	uParam0->f_409[iParam1] = 0;
}

void func_1020(var uParam0, int iParam1)
{
	if (&uParam0->f_71[iParam1] == 0)
	{
	}
	else
	{
		uParam0->f_71[iParam1] = 0;
		StringCopy(&(uParam0->f_71[iParam1]->f_1), "", 128);
		uParam0->f_71[iParam1]->f_17 = 0;
		uParam0->f_71[iParam1]->f_18 = 255;
		uParam0->f_71[iParam1]->f_26 = 0;
		uParam0->f_71[iParam1]->f_27 = 0;
	}
}

void func_1021(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, var uParam5)
{
	if (!func_440(uParam1, iParam2))
	{
		*uParam3 = 6;
		*uParam4 = 0;
		*uParam5 = 0;
	}
	else
	{
		func_1487(uParam0, iParam2, func_618(uParam1, iParam2), uParam3, uParam4, uParam5);
	}
}

void func_1022(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_1023(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_617[iParam1]->f_8 != 7)
	{
		uParam0->f_617[iParam1]->f_8 = 7;
		iVar1 = 0;
		while (iVar1 < 2)
		{
			iVar0 = &uParam0->f_617[iParam1]->f_5[iVar1];
			if (does_entity_exist(iVar0))
			{
				if (bParam2)
				{
					if (_0x0b7cb1300cbfe19c(iVar0, 1))
					{
						stop_anim_playback(iVar0, 2, false);
					}
					freeze_entity_position(iVar0, false);
					set_entity_collision(iVar0, true, false);
					set_entity_has_gravity(iVar0, true);
					activate_physics(iVar0);
					set_entity_velocity(iVar0, 0f, 0f, 4f);
				}
				set_object_as_no_longer_needed(uParam0->f_617[iParam1]->f_5[iVar1]);
			}
			uParam0->f_617[iParam1]->f_5[iVar1] = 0;
			iVar1++;
		}
	}
}

void func_1024(var uParam0, int iParam1)
{
	if (does_entity_exist(&(uParam0->f_672.f_11[iParam1])))
	{
		set_object_as_no_longer_needed(uParam0->f_672.f_11[iParam1]);
		uParam0->f_672.f_11[iParam1] = 0;
	}
}

bool func_1025(var uParam0)
{
	if (uParam0->f_128 != -1 || uParam0->f_129 != -1)
	{
		return true;
	}
	return false;
}

void func_1026(var uParam0, int iParam1)
{
	if (uParam0->f_126 == 0)
	{
		return;
	}
	if (uParam0->f_129 != -1)
	{
		func_1488(&(uParam0->f_136));
	}
	if (uParam0->f_128 != -1)
	{
		if (iParam1 > 0)
		{
			render_script_cams(false, true, iParam1, true, false, 0);
		}
		else
		{
			render_script_cams(false, false, 3000, true, false, 0);
		}
	}
	uParam0->f_128 = -1;
	uParam0->f_129 = -1;
	uParam0->f_127 = -1;
}

void func_1027(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_34)
	{
		func_1489(uParam0, iVar0);
		iVar0++;
	}
	_databinding_clear_binding_array(uParam0->f_9);
	uParam0->f_163 = 0;
}

void func_1028(var uParam0, int iParam1)
{
	func_1490(uParam0, iParam1, "");
	func_1491(uParam0, iParam1, "");
}

bool func_1029(int iParam0, int iParam1)
{
	if (!func_1492(iParam0, 0))
	{
		return false;
	}
	if (func_1030(iParam0))
	{
		return func_1493(func_1031(iParam0, 0), iParam1, 0);
	}
	return _0xdee7b3c76ed664be(iParam0, iParam1) > 0;
}

bool func_1030(int iParam0)
{
	if (func_1494(iParam0, 75135761))
	{
		return true;
	}
	return false;
}

int func_1031(int iParam0, bool bParam1)
{
	if (!func_1492(iParam0, 0))
	{
		return func_1496(func_1495(iParam0), bParam1);
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0) || Var0.f_5 == 0)
	{
		return 0;
	}
	if (bParam1 && _0xfbe782b3165ac8ec(Var0.f_5))
	{
		return 0;
	}
	return Var0.f_5;
}

int func_1032(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_1497(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam2)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if ((&Var0[iVar32] == 2084597891 || &Var0[iVar32] == 773203532) || &Var0[iVar32] == -1295114026)
		{
			return Var0[iVar32]->f_1;
		}
		else if (&Var0[iVar32] == 0)
		{
		}
		else
		{
			iVar32++;
		}
	}
	if (!bParam2)
	{
	}
	return 0;
}

bool func_1033(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_1492(iParam0, 0))
	{
		return false;
	}
	*uParam3 = _0xdee7b3c76ed664be(iParam0, iParam1);
	if (*uParam3 == 0)
	{
		if (!bParam5)
		{
		}
		return false;
	}
	if (!bParam5)
	{
	}
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (!_0xad73b614df26cf8a(iParam0, iParam1, iVar0, (*uParam2)[iVar0]))
		{
			Jump @113; //curOff = 101
		}
		else if (!bParam5)
		{
		}
		iVar0++;
	}
	if (bParam4)
	{
		func_1498(iParam0, iParam1, uParam2, *uParam3);
	}
	return true;
}

void func_1034(var uParam0, int iParam1)
{
	uParam0->f_171 = iParam1;
}

void func_1035(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	func_1163(uParam0, iParam1, "OLD", "PWORLD__CREATE_PLAYER_STACKS_FOR_POPULATE()");
	func_1164(uParam0, iParam1, "OLD", 0);
	uVar0 = 4;
	uVar5 = 4;
	uVar10 = 4;
	uVar15 = 4;
	if (bParam4)
	{
		func_1402((iParam2 + iParam3), &uVar0, &uVar10);
		func_1317(iParam2, iParam3, &uVar10, &uVar15);
		func_1499(uParam0, iParam1, &uVar0);
		func_1403(uParam0, iParam1, &uVar0, &uVar10, bParam5);
		func_1500(uParam0, iParam1, &uVar0, &uVar15, bParam5);
	}
	else
	{
		func_1402(iParam2, &uVar0, &uVar10);
		func_1403(uParam0, iParam1, &uVar0, &uVar10, bParam5);
		func_1402(iParam3, &uVar5, &uVar15);
		func_1500(uParam0, iParam1, &uVar5, &uVar15, bParam5);
		func_1499(uParam0, iParam1, &uVar5);
	}
	func_1163(uParam0, iParam1, "NEW", 0);
	func_1164(uParam0, iParam1, "NEW", 0);
}

int func_1036(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (does_entity_exist(&(uParam0->f_672.f_11[iParam1])))
	{
		delete_object(uParam0->f_672.f_11[iParam1]);
	}
	uParam0->f_672.f_11[iParam1] = 0;
	if (!func_477(uParam0, *uParam0->f_672[iParam1], &iVar0))
	{
		iVar0 = uParam0->f_694;
		if (bParam3)
		{
		}
	}
	if (!func_1501(uParam0, iParam1, iParam2, &vVar1, &vVar4, 1))
	{
		return 0;
	}
	iVar7 = create_object(iVar0, vVar1, false, true, false, false, true);
	if (!does_entity_exist(iVar7))
	{
		return 0;
	}
	set_entity_coords(iVar7, vVar1, true, false, true, true);
	set_entity_rotation(iVar7, vVar4, 2, true);
	set_entity_collision(iVar7, false, false);
	freeze_entity_position(iVar7, true);
	if (!bParam4)
	{
		set_entity_visible(iVar7, false);
	}
	uParam0->f_672.f_11[iParam1] = iVar7;
	return 1;
}

void func_1037(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	uParam0->f_617[iParam1]->f_8 = iParam2;
	iVar7 = 0;
	while (iVar7 < 2)
	{
		if (does_entity_exist(&(uParam0->f_617[iParam1]->f_5[iVar7])))
		{
			delete_object(uParam0->f_617[iParam1]->f_5[iVar7]);
		}
		uParam0->f_617[iParam1]->f_5[iVar7] = 0;
		if (!func_477(uParam0, *(*uParam0->f_617[iParam1])[iVar7], &iVar0))
		{
			iVar0 = uParam0->f_694;
			if (bParam4)
			{
			}
		}
		if (iParam2 != 5)
		{
			if (!func_1502(uParam0, iParam1, iVar7, iParam2, &vVar1, &vVar4, 1))
			{
			}
			else
			{
				Jump @180; //curOff = 153
				if (!func_1502(uParam0, iParam3, iVar7, iParam2, &vVar1, &vVar4, 1))
				{
				}
				else
				{
					iVar8 = create_object(iVar0, vVar1, false, true, false, false, true);
					if (!does_entity_exist(iVar8))
					{
					}
					else
					{
						set_entity_coords(iVar8, vVar1, true, false, true, true);
						set_entity_rotation(iVar8, vVar4, 2, true);
						set_entity_collision(iVar8, false, false);
						freeze_entity_position(iVar8, true);
						uParam0->f_617[iParam1]->f_5[iVar7] = iVar8;
					}
				}
			}
			iVar7++;
		}
	}
}

void func_1038(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_617[iParam1]->f_8 = iParam2;
	iVar7 = 0;
	while (iVar7 < 2)
	{
		if (does_entity_exist(&(uParam0->f_617[iParam1]->f_5[iVar7])))
		{
			delete_object(uParam0->f_617[iParam1]->f_5[iVar7]);
		}
		uParam0->f_617[iParam1]->f_5[iVar7] = 0;
		iVar0 = uParam0->f_694;
		if (iParam2 != 5)
		{
			if (!func_1502(uParam0, iParam1, iVar7, iParam2, &vVar1, &vVar4, 1))
			{
			}
			else
			{
				Jump @148; //curOff = 121
				if (!func_1502(uParam0, iParam3, iVar7, iParam2, &vVar1, &vVar4, 1))
				{
				}
				else
				{
					iVar8 = create_object(iVar0, vVar1, false, true, false, false, true);
					if (!does_entity_exist(iVar8))
					{
					}
					else
					{
						set_entity_coords(iVar8, vVar1, true, false, true, true);
						set_entity_rotation(iVar8, vVar4, 2, true);
						set_entity_collision(iVar8, false, false);
						freeze_entity_position(iVar8, true);
						uParam0->f_617[iParam1]->f_5[iVar7] = iVar8;
					}
				}
			}
			iVar7++;
		}
	}
}

char* func_1039(char* sParam0, int iParam1)
{
	sParam0 = _format_player_name_string(sParam0);
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "PLAYER_STRING", sParam0);
	}
	return func_1503(_create_var_string(10, "PLAYER_STRING", sParam0), iParam1);
}

bool func_1040(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9)
{
	iParam3 = func_441(&iParam2, iParam3);
	if (&uParam0->f_818[iParam1] != 0)
	{
	}
	else if (is_ped_injured(iParam2))
	{
	}
	else if (uParam0->f_41 == 2)
	{
	}
	else
	{
		if (!is_ped_a_player(iParam2))
		{
			if (!does_entity_belong_to_this_script(iParam2, true))
			{
				set_ped_config_flag(iParam2, 171, true);
				set_entity_as_mission_entity(iParam2, false, true);
				set_ped_config_flag(iParam2, 171, false);
			}
			if (!does_entity_belong_to_this_script(iParam2, true))
			{
				return false;
			}
		}
		uParam0->f_818[iParam1] = iParam2;
		uParam0->f_818[iParam1]->f_1 = 0;
		uParam0->f_818[iParam1]->f_2 = 0;
		uParam0->f_818[iParam1]->f_3 = 0;
		uParam0->f_818[iParam1]->f_4 = iParam3;
		uParam0->f_818[iParam1]->f_5 = iParam4;
		uParam0->f_818[iParam1]->f_6 = iParam5;
		uParam0->f_818[iParam1]->f_7 = iParam6;
		uParam0->f_818[iParam1]->f_52 = iParam8;
		uParam0->f_818[iParam1]->f_61 = iParam7;
		uParam0->f_818[iParam1]->f_8 = 1;
		uParam0->f_818[iParam1]->f_9 = 0;
		func_361(&(uParam0->f_818[iParam1]->f_16), -get_random_float_in_range(15f, 35f));
		uParam0->f_1197++;
		set_blocking_of_non_temporary_events(iParam2, true);
		set_ped_can_ragdoll(iParam2, false);
		set_current_ped_weapon(iParam2, _0x08ff1099ed2e6e21(iParam2), false, 0, false, false);
		if (!is_ped_a_player(iParam2))
		{
			set_ped_config_flag(iParam2, 453, true);
		}
		iVar0 = 0;
		while (iVar0 < 29)
		{
			if ((((iVar0 == 1 || iVar0 == 7) || iVar0 == 8) || iVar0 == 9) || iVar0 == 10)
			{
				_0x67e21acc5c0c970c(iParam2, iVar0, 0);
			}
			iVar0++;
		}
		if (is_ped_a_player(iParam2))
		{
			func_1504(1900014401, iParam2, 0, 1);
		}
		else
		{
			_set_ped_component_disabled(iParam2, -1229581779, 1);
			_update_ped_variation(iParam2, false, true, true, true, false);
		}
		func_476(uParam0, iParam1, 0);
		func_1505(iParam7, iParam2, sParam9, &(uParam0->f_818[iParam1]->f_62));
		if (iParam7 == player_id())
		{
			func_1504(-859971527, iParam2, 0, 1);
		}
		else
		{
			func_1080(iParam7, 1);
		}
		if (uParam0->f_807 != -1)
		{
			_0xb1a196bafe650402(uParam0->f_807, iParam2);
			sVar1 = func_1507(func_1506(iParam6));
			if ((iParam6 == 92 || is_string_null_or_empty(sVar1)) || are_strings_equal(sVar1, "unknown"))
			{
				_0x3641fcd53e59b335(uParam0->f_807, iParam2, "");
			}
			else
			{
				_0x3641fcd53e59b335(uParam0->f_807, iParam2, sVar1);
			}
		}
		if (uParam0->f_41 != 0)
		{
			func_1404(uParam0, iParam1);
		}
		return true;
	}
	return false;
}

void func_1041(var uParam0, int iParam1)
{
	if (&uParam0->f_818[iParam1] == 0)
	{
	}
	else if (uParam0->f_818[iParam1]->f_50)
	{
	}
	else if (uParam0->f_818[iParam1]->f_8 != 1)
	{
	}
	else if (uParam0->f_818[iParam1]->f_1 != 0)
	{
	}
	else
	{
		func_471(uParam0, iParam1, 6);
		if (!uParam0->f_40)
		{
			iVar0 = &uParam0->f_818[iParam1];
			_hide_ped_weapons(iVar0, 2, true);
			set_entity_alpha(&(uParam0->f_818[iParam1]), 0, false);
			func_459(uParam0, iParam1, "sit_enter_right", 2, 0f, 1040187392, 0, 1);
			func_1137(uParam0, iParam1, 0);
			func_1133(uParam0, iParam1, 6);
		}
		func_475(uParam0, iParam1, 1);
		func_1235(uParam0, iParam1, 0);
		func_476(uParam0, iParam1, 0);
		func_1133(uParam0, iParam1, 6);
	}
}

void func_1042(var uParam0, int iParam1)
{
	if (&uParam0->f_818[iParam1] == 0)
	{
	}
	else if (uParam0->f_818[iParam1]->f_50)
	{
	}
	else if (uParam0->f_818[iParam1]->f_8 != 1)
	{
	}
	else if (uParam0->f_818[iParam1]->f_1 != 0)
	{
	}
	else
	{
		func_471(uParam0, iParam1, 5);
		if (!uParam0->f_40)
		{
			iVar0 = &uParam0->f_818[iParam1];
			_hide_ped_weapons(iVar0, 2, true);
			func_1508(uParam0, iParam1);
		}
		func_475(uParam0, iParam1, 1);
		func_1235(uParam0, iParam1, 0);
		func_1140(uParam0, iParam1, 1);
		func_476(uParam0, iParam1, 0);
		func_1133(uParam0, iParam1, 44);
	}
}

void func_1043(var uParam0, int iParam1, bool bParam2)
{
	if (&uParam0->f_818[iParam1] == 0)
	{
	}
	else if (uParam0->f_818[iParam1]->f_50)
	{
	}
	else
	{
		func_471(uParam0, iParam1, 3);
		if (!uParam0->f_40)
		{
			fVar0 = 0f;
			if (bParam2)
			{
				fVar0 = get_random_float_in_range(0.1f, 0.75f);
			}
			func_459(uParam0, iParam1, "sit_enter_left", 2, 0f, 1040187392, fVar0, !bParam2);
		}
		func_475(uParam0, iParam1, 1);
		func_1235(uParam0, iParam1, 0);
		func_476(uParam0, iParam1, 0);
		func_1137(uParam0, iParam1, 0);
		func_1133(uParam0, iParam1, 6);
	}
}

void func_1044(var uParam0, var uParam1)
{
	uParam0->f_291 = uParam1;
}

void func_1045(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	if (func_203(uParam1, iParam2))
	{
		func_1390(&(uParam0->f_2337), iParam2);
		func_1219(&(uParam0->f_2337), iParam2, iParam2 == uParam1->f_3);
		func_1059(&(uParam0->f_2337), iParam2, 0);
		func_1205(&(uParam0->f_2337), iParam2, func_625(uParam0, iParam2));
		if (func_1218(uParam1, iParam2))
		{
			bVar0 = (uParam0->f_152.f_1548 == 2 || uParam0->f_152.f_1548 == 10);
			if (func_625(uParam0, iParam2) == 0)
			{
				func_1048(&(uParam0->f_2337), iParam2, func_1206());
				func_1052(&(uParam0->f_2337), iParam2, !bVar0);
			}
			else
			{
				func_1048(&(uParam0->f_2337), iParam2, func_1207());
				func_1052(&(uParam0->f_2337), iParam2, !bVar0);
			}
		}
	}
	if (bParam3)
	{
		func_1046(&(uParam0->f_2337));
	}
}

void func_1046(var uParam0)
{
	if (!uParam0->f_292)
	{
		func_1509(uParam0);
		iVar0 = uParam0->f_291;
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		iVar1 = 0;
		while (iVar1 < 6)
		{
			func_1510(uParam0, iVar0);
			iVar0 = (iVar0 - 1);
			if (iVar0 < 0)
			{
				iVar0 += 6;
			}
			iVar1++;
		}
		uParam0->f_292 = 1;
	}
}

char* func_1047(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 > 0)
	{
		if (iParam1 == uParam0->f_152.f_9)
		{
			return _create_var_string(2, "MGPKR_INFO_YOU_ACT", func_1451(&(uParam0->f_2337), iParam2));
		}
		else
		{
			Var0 = { func_443(&(uParam0->f_152), iParam1, 0, 1) };
			return _create_var_string(34, "MGPKR_INFO_THEY_ACT", func_1451(&(uParam0->f_2337), iParam2), &Var0);
		}
	}
	if (iParam1 == uParam0->f_152.f_9)
	{
		return _create_var_string(2, "MGPKR_INFO_YOU_ACT_0");
	}
	Var16 = { func_443(&(uParam0->f_152), iParam1, 0, 1) };
	return _create_var_string(10, "MGPKR_INFO_THEY_ACT_0", &Var16);
}

void func_1048(var uParam0, int iParam1, char* sParam2)
{
	if (iParam1 < 0 || iParam1 >= 6)
	{
	}
	else if (!&uParam0->f_307[iParam1])
	{
	}
	else
	{
		MemCopy(&(uParam0->f_307[iParam1]->f_3), {func_1367(sParam2)}, 16);
		if (!uParam0->f_307[iParam1]->f_19)
		{
			func_1466(uParam0->f_34[iParam1], sParam2);
		}
	}
}

void func_1049(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 < 0 || iParam1 >= 6)
	{
	}
	else if (!&uParam0->f_307[iParam1])
	{
	}
	else
	{
		func_1511(uParam0->f_34[iParam1], bParam2);
	}
}

char* func_1050(var uParam0, int iParam1)
{
	return _create_var_string(2, "MGPKR_INFO_BET", func_1451(uParam0, iParam1));
}

char* func_1051()
{
	return _create_var_string(2, "MGPKR_INFO_FOLD_DONE");
}

void func_1052(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 < 0 || iParam1 >= 6)
	{
	}
	else if (!&uParam0->f_307[iParam1])
	{
	}
	else
	{
		func_1512(uParam0->f_34[iParam1], !bParam2);
	}
}

struct<2> func_1053(var uParam0, int iParam1)
{
	return *uParam0->f_15[iParam1];
}

void func_1054(var uParam0, int iParam1, struct<2> Param2, int iParam4, bool bParam5)
{
	if (bParam5)
	{
	}
	if (iParam1 < 0 || iParam1 >= 5)
	{
	}
	else
	{
		if (iParam4 == 0)
		{
			set_bit(&(uParam0->f_295), iParam1);
			*uParam0->f_295.f_1[iParam1] = { Param2 };
		}
		if (iParam4 == uParam0->f_294)
		{
			func_1513(&Param2, &cVar0);
			func_1514(uParam0, iParam1, &cVar0);
		}
	}
}

int func_1055(var uParam0, int iParam1)
{
	return &(uParam0->f_376[iParam1]);
}

int func_1056(var uParam0)
{
	return uParam0->f_485;
}

void func_1057(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam1 < 0 || iParam1 >= 5)
	{
	}
	else
	{
		uParam0->f_428[iParam1] = 1;
		uParam0->f_428[iParam1]->f_1 = iParam2;
		if (iParam3 <= 1)
		{
			func_1490(uParam0, iParam1, _create_var_string(2, "MGPKR_UI_POT"));
		}
		else if (iParam1 == 0)
		{
			func_1490(uParam0, iParam1, _create_var_string(2, "MGPKR_UI_MAINPOT"));
		}
		else if (iParam1 == 1 && iParam3 == 2)
		{
			func_1490(uParam0, iParam1, _create_var_string(2, "MGPKR_UI_SIDEPOT"));
		}
		else if (iParam1 == 1)
		{
			func_1490(uParam0, iParam1, _create_var_string(2, "MGPKR_UI_1ST_SIDEPOT"));
		}
		else if (iParam1 == 2)
		{
			func_1490(uParam0, iParam1, _create_var_string(2, "MGPKR_UI_2ND_SIDEPOT"));
		}
		else if (iParam1 == 3)
		{
			func_1490(uParam0, iParam1, _create_var_string(2, "MGPKR_UI_3RD_SIDEPOT"));
		}
		else if (iParam1 == 4)
		{
			func_1490(uParam0, iParam1, _create_var_string(2, "MGPKR_UI_4TH_SIDEPOT"));
		}
		else if (iParam1 == 5)
		{
			func_1490(uParam0, iParam1, _create_var_string(2, "MGPKR_UI_5TH_SIDEPOT"));
		}
		else
		{
			func_1490(uParam0, iParam1, _create_var_string(2, "MGPKR_UI_6TH_SIDEPOT"));
		}
		func_1491(uParam0, iParam1, _create_var_string(2, "MGPKR_UI_CASH", func_1451(uParam0, iParam2)));
	}
}

int func_1058(var uParam0)
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_624(uParam0, iVar1))
		{
			iVar0 = (iVar0 + func_618(uParam0, iVar1));
		}
		iVar1++;
	}
	return iVar0;
}

void func_1059(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 >= 6)
	{
	}
	else if (!&uParam0->f_307[iParam1])
	{
	}
	else
	{
		switch (iParam2)
		{
			case 0:
				func_1515(uParam0->f_34[iParam1], 1);
				break;
			case 1:
				func_1516(uParam0->f_34[iParam1], 1);
				break;
		}
	}
}

char* func_1060()
{
	return _create_var_string(2, "MGPKR_INFO_WAIT_REVEAL");
}

void func_1061(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 6)
	{
	}
	else if (!&uParam0->f_307[iParam1])
	{
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			func_1517(uParam0->f_34[iParam1], iVar0, "");
			iVar0++;
		}
	}
}

void func_1062(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
	if (iParam1 < 0 || iParam1 >= 6)
	{
	}
	else if (!&uParam0->f_307[iParam1])
	{
	}
	else if (iParam2 < 0 || iParam2 >= 2)
	{
	}
	else
	{
		func_1513(&uParam3, &cVar0);
		func_1517(uParam0->f_34[iParam1], iParam2, &cVar0);
	}
}

void func_1063(var uParam0, int iParam1, int iParam2)
{
	clear_bit(&(uParam0->f_307[iParam1]->f_1), iParam2);
}

void func_1064(var uParam0, int iParam1, int iParam2)
{
	set_bit(&(uParam0->f_307[iParam1]->f_1), iParam2);
}

void func_1065(var uParam0, var uParam1)
{
	if (uParam0->f_126 == 0)
	{
		return;
	}
	if (!func_1025(uParam0))
	{
		return;
	}
	uParam0->f_127 = uParam1;
}

void func_1066(var uParam0, int iParam1, float fParam2, int iParam3)
{
	if (uParam0->f_126 == 0)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= 8)
	{
		return;
	}
	if (!is_bit_set(&(uParam0->f_124[(iParam1 / 32)]), (iParam1 % 32)))
	{
		return;
	}
	if (uParam0->f_129 != -1)
	{
		func_1488(&(uParam0->f_136));
	}
	func_540(uParam0->f_131, (uParam0->f_134 + fParam2), *uParam0->f_25[iParam1], uParam0->f_25[iParam1]->f_3, &vVar0, &vVar3);
	func_1518(&(uParam0->f_136), vVar0, vVar3, uParam0->f_25[iParam1]->f_6, uParam0->f_25[iParam1]->f_7, uParam0->f_25[iParam1]->f_8, to_float(uParam0->f_25[iParam1]->f_9), uParam0->f_25[iParam1]->f_10, 0, 0, -1f, uParam0->f_25[iParam1]->f_11 == 0f, iParam3, uParam0->f_25[iParam1]->f_11);
	uParam0->f_128 = -1;
	uParam0->f_129 = iParam1;
	uParam0->f_130 = fParam2;
	uParam0->f_127 = -1;
}

void func_1067(var uParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	if (uParam0->f_126 == 0)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= 2)
	{
		return;
	}
	if (!is_bit_set(&(uParam0->f_122[(iParam1 / 32)]), (iParam1 % 32)))
	{
		return;
	}
	if (!does_cam_exist(uParam0->f_135))
	{
		return;
	}
	iVar0 = 0;
	if (iParam3 > 0)
	{
		if (uParam0->f_128 == -1 && uParam0->f_129 == -1)
		{
			iVar0 = iParam3;
			iParam3 = 0;
		}
		else if (uParam0->f_129 != -1)
		{
			if (does_cam_exist(uParam0->f_136))
			{
				func_1519(uParam0->f_136, uParam0->f_135);
			}
			else
			{
				iParam3 = 0;
			}
		}
		else if (uParam0->f_128 != -1)
		{
			func_1519(uParam0->f_135, uParam0->f_135);
		}
	}
	if (uParam0->f_129 != -1)
	{
		func_1488(&(uParam0->f_136));
	}
	func_540(uParam0->f_131, (uParam0->f_134 + fParam2), (*uParam0)[iParam1]->f_8, 0f, 0f, (*uParam0)[iParam1]->f_11, &vVar1, &vVar4);
	func_540(vVar1, vVar4.z, *(*uParam0)[iParam1], (*uParam0)[iParam1]->f_3, &vVar7, &vVar10);
	set_cam_active(uParam0->f_135, true);
	set_cam_params(uParam0->f_135, vVar7, vVar10, (*uParam0)[iParam1]->f_6, iParam3, iParam4, iParam5, 2, 1, 0);
	shake_cam(uParam0->f_135, "HAND_SHAKE", (*uParam0)[iParam1]->f_7);
	if (iVar0 > 0)
	{
		render_script_cams(true, true, iVar0, true, false, 0);
	}
	else
	{
		render_script_cams(true, false, 3000, true, false, 0);
	}
	uParam0->f_128 = iParam1;
	uParam0->f_129 = -1;
	uParam0->f_130 = fParam2;
	uParam0->f_127 = -1;
}

bool func_1068(int iParam0)
{
	if (!func_960(iParam0))
	{
		return false;
	}
	if (iParam0 == 46 || iParam0 == 93)
	{
		return false;
	}
	iVar0 = func_453(iParam0);
	if (((((((((((((iVar0 == 10 || iVar0 == 29) || iVar0 == 4) || iVar0 == 14) || iVar0 == 15) || iVar0 == 16) || iVar0 == 27) || iVar0 == 28) || iVar0 == 35) || iVar0 == 35) || iVar0 == 38) || iVar0 == 29) || iVar0 == 39) || iVar0 == 33)
	{
		return true;
	}
	return false;
}

bool func_1069(int iParam0, int iParam1)
{
	if (!func_960(iParam0))
	{
		return false;
	}
	return (Global_5860.f_2074[iParam0] && iParam1) != 0;
}

void func_1070(int iParam0, int iParam1)
{
	if (!func_960(iParam0))
	{
	}
	else
	{
		Global_5860.f_2074[iParam0] = (Global_5860.f_2074[iParam0] || iParam1);
	}
}

void func_1071(int iParam0, int iParam1)
{
	if (!func_960(iParam0))
	{
	}
	else
	{
		Global_5860.f_2074[iParam0] = (&Global_5860.f_2074[iParam0] - (Global_5860.f_2074[iParam0] && iParam1));
	}
}

void func_1072(int iParam0)
{
	if (iParam0 != -1)
	{
		Global_1915715->f_18246 = iParam0;
	}
}

var func_1073(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

void func_1074(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_818[iParam1]->f_54 = bParam2;
	if (bParam2)
	{
		set_ped_leg_ik_mode(&(uParam0->f_818[iParam1]), 0);
	}
	else if (is_ped_a_player(&(uParam0->f_818[iParam1])))
	{
		set_ped_leg_ik_mode(&(uParam0->f_818[iParam1]), 2);
	}
	else
	{
		set_ped_leg_ik_mode(&(uParam0->f_818[iParam1]), 1);
	}
}

int func_1075(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_1520(iParam1))
	{
		return 0;
	}
	if (!bParam3)
	{
		return 1;
	}
	iVar0 = func_1521(iParam1);
	return func_1522(iParam0, iVar0, bParam2, bParam2, bParam4);
}

void func_1076(var uParam0, int iParam1)
{
	if (uParam0->f_818[iParam1]->f_53)
	{
		uParam0->f_818[iParam1]->f_53 = 0;
		_0xbc781d24aa11f179(&(uParam0->f_818[iParam1]));
	}
}

void func_1077(var uParam0, int iParam1)
{
	if (uParam0->f_818[iParam1]->f_5 >= 2)
	{
	}
	else
	{
		clear_facial_idle_anim_override(&(uParam0->f_818[iParam1]));
	}
}

int func_1078(int iParam0, int iParam1)
{
	if (is_mp_gamer_tag_active(*iParam1))
	{
		remove_mp_gamer_tag(iParam1);
	}
	if (iParam0 == 255 || !network_is_player_active(iParam0))
	{
		return 0;
	}
	func_1523(iParam0);
	func_1524(iParam0);
	return 1;
}

int func_1079(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	return func_1075(iParam0, iParam1, bParam2, 1, bParam3);
}

void func_1080(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!_0x72b2e00c9bac6789(&(Global_1071686->f_21689.f_260), iParam0))
		{
			_0x31010318ba9897ac(&(Global_1071686->f_21689.f_260), iParam0);
		}
	}
	else if (_0x72b2e00c9bac6789(&(Global_1071686->f_21689.f_260), iParam0))
	{
		_0xd426e2e3288469d6(&(Global_1071686->f_21689.f_260), iParam0);
		func_1525(iParam0);
	}
}

void func_1081(var uParam0, int iParam1)
{
	if (_does_anim_scene_exist(uParam0->f_818[iParam1]->f_60))
	{
		_delete_anim_scene(uParam0->f_818[iParam1]->f_60);
	}
	uParam0->f_818[iParam1]->f_60 = -1;
}

void func_1082(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		if ((*Global_1951255)[iParam0]->f_5 == 5 && !func_1526(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, bParam1);
		}
	}
}

bool func_1083(var uParam0)
{
	return uParam0->f_442;
}

void func_1084(var uParam0)
{
	uParam0->f_442 = 0;
	uParam0->f_442.f_2 = 0;
	uParam0->f_442.f_4 = 0;
	func_1086(&(uParam0->f_442.f_20), 1, 1);
	func_1086(&(uParam0->f_442.f_21), 1, 1);
	func_1086(&(uParam0->f_442.f_22), 1, 1);
}

bool func_1085(var uParam0)
{
	return uParam0->f_485 != 0;
}

void func_1086(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_152(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_347(*uParam0);
	if ((*Global_1951255)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_1527(iVar0);
	*uParam0 = 0;
}

void func_1087(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 6)
	{
	}
	else if (!&uParam0->f_307[iParam1])
	{
	}
	else
	{
		func_1421(uParam0->f_34[iParam1], "");
		func_1422(uParam0->f_34[iParam1], "");
		func_1515(uParam0->f_34[iParam1], 1);
		func_1528(uParam0->f_34[iParam1], "");
		func_1466(uParam0->f_34[iParam1], "");
		func_1512(uParam0->f_34[iParam1], 1);
		func_1511(uParam0->f_34[iParam1], 0);
		func_1529(uParam0->f_34[iParam1], -1);
		func_1530(uParam0->f_34[iParam1], 0);
		if (!uParam0->f_293)
		{
			func_1531(uParam0, iParam1);
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			func_1517(uParam0->f_34[iParam1], iVar0, "");
			iVar0++;
		}
		func_593(uParam0, iParam1);
	}
}

void func_1088(var uParam0)
{
	func_1509(uParam0);
	uParam0->f_292 = 0;
}

int func_1089(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
	}
	if (iParam1 == 0)
	{
		uParam0->f_295 = 0;
	}
	if (iParam1 == uParam0->f_294)
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			func_1514(uParam0, iVar0, "");
			iVar0++;
		}
	}
	return 1;
}

void func_1090(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		uParam0->f_428[iVar0] = 0;
		uParam0->f_428[iVar0]->f_1 = 0;
		func_1490(uParam0, iVar0, "");
		func_1491(uParam0, iVar0, "");
		iVar0++;
	}
}

bool func_1091(var uParam0, int iParam1)
{
	return uParam0->f_818[iParam1]->f_57 == 0;
}

void func_1092(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_818[iParam1]->f_57 = iParam2;
}

void func_1093(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_818[iParam1]->f_3 = iParam3;
	uParam0->f_818[iParam1]->f_2 = iParam2;
}

int func_1094(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 0;
		default:
			break;
	}
	return 0;
}

int func_1095(var uParam0, int iParam1)
{
	return uParam0->f_818[iParam1]->f_5;
}

char* func_1096(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "mood_normal_neutral";
		case 1:
			return "concentration_base";
		case 2:
			return "poker_face";
		default:
			break;
	}
	return "Unknown";
}

void func_1097(var uParam0, float fParam1, float fParam2)
{
	uParam0->f_8 = fParam1;
	uParam0->f_9 = fParam2;
}

bool func_1098(int iParam0)
{
	return Global_1138962->f_1[iParam0]->f_1 == 2;
}

bool func_1099(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return (iParam0 == -471827042 || iParam0 == -92667149);
		default:
			break;
	}
	return iParam0 == -92667149;
}

int func_1100(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_1532(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_1101(bool bParam0)
{
	if (!func_257(-931834499, bParam0))
	{
		return 0;
	}
	return 1;
}

bool func_1102()
{
	return !Global_1572887->f_9;
}

bool func_1103()
{
	if (_0xdd73c9838ce7181d())
	{
		return true;
	}
	return false;
}

void func_1104(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_1105(int iParam0, var uParam1)
{
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(4, &Var0, 2, 2);
}

int func_1106()
{
	fVar0 = get_random_float_in_range(0f, 1f);
	if (fVar0 < 0.01f)
	{
		return 19;
	}
	if (fVar0 < 0.16f)
	{
		return 15;
	}
	if (fVar0 < 0.31f)
	{
		return 17;
	}
	if (fVar0 < 0.46f)
	{
		return 16;
	}
	if (fVar0 < 0.61f)
	{
		return 18;
	}
	return 0;
}

int func_1107(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 112;
		case 2:
			return 113;
		case 3:
			return 2;
		case 4:
			return 3;
		case 5:
			return 4;
		case 6:
			return 5;
		case 8:
			return 7;
		case 9:
			return 8;
		case 10:
			return 9;
		case 11:
			return 10;
		case 12:
			return 11;
		case 15:
			return 12;
		case 16:
			return 13;
		case 17:
			return 15;
		case 19:
			return 17;
		case 20:
			return 18;
		case 21:
			return 19;
		case 22:
			return 20;
		case 23:
			return 21;
		case 25:
			return 23;
		case 26:
			return 25;
		case 27:
			return 26;
		case 28:
			return 62;
		case 30:
			return 27;
		case 52:
			return 28;
		case 31:
			return 29;
		case 32:
			return 30;
		case 33:
			return 31;
		case 127:
			return 32;
		case 131:
			return 33;
		case 132:
			return 34;
		case 35:
			return 35;
		case 88:
			return 40;
		case 37:
			return 42;
		case 38:
			return 43;
		case 94:
			return 44;
		case 121:
			return 46;
		case 39:
			return 47;
		case 40:
			return 48;
		case 41:
			return 49;
		case 42:
			return 50;
		case 53:
			return 51;
		case 44:
			return 52;
		case 55:
			return 53;
		case 45:
			return 54;
		case 47:
			return 57;
		case 51:
			return 61;
		case 60:
			return 63;
		case 62:
			return 64;
		case 63:
			return 65;
		case 64:
			return 66;
		case 65:
			return 67;
		case 66:
			return 68;
		case 135:
			return 69;
		case 136:
			return 70;
		case 67:
			return 71;
		case 82:
			return 72;
		case 69:
			return 73;
		case 70:
			return 74;
		case 72:
			return 76;
		case 73:
			return 78;
		case 74:
			return 79;
		case 75:
			return 80;
		case 76:
			return 81;
		case 77:
			return 82;
		case 80:
			return 84;
		case 81:
			return 85;
		case 123:
			return 86;
		case 83:
			return 87;
		case 84:
			return 88;
		case 85:
			return 90;
		case 86:
			return 91;
		case 87:
			return 92;
		case 92:
			return 96;
		case 93:
			return 97;
		case 98:
			return 99;
		case 99:
			return 100;
		case 100:
			return 101;
		case 101:
			return 102;
		case 102:
			return 103;
		case 103:
			return 104;
		case 104:
			return 105;
		case 105:
			return 106;
		case 106:
			return 107;
		case 110:
			return 114;
		case 111:
			return 115;
		case 113:
			return 118;
		case 115:
			return 119;
		case 116:
			return 120;
		case 117:
			return 121;
		case 118:
			return 122;
		case 139:
			return 123;
		default:
			break;
	}
	return 0;
}

int func_1108(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 170;
		case 1:
			return 171;
		case 2:
			return 172;
		case 3:
			return 173;
		case 4:
			return 174;
		case 5:
			return 175;
		case 6:
			return 175;
		case 7:
			return 175;
		case 8:
			return 176;
		case 9:
			return 177;
		case 10:
			return 178;
		case 11:
			return 179;
		case 12:
			return 180;
		case 13:
			return 181;
		case 14:
			return 182;
		case 15:
			return 183;
		case 16:
			return 184;
		default:
			break;
	}
	return -1;
}

void func_1109(var uParam0, var uParam1, var uParam2)
{
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	network_set_rich_presence(3, &vVar0, 3, 3);
}

bool func_1110(struct<2> Param0)
{
	iVar0 = func_1112(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_1111(struct<2> Param0)
{
	iVar0 = func_1112(Param0);
	return (iVar0 == 1 || iVar0 == 2);
}

int func_1112(struct<2> Param0)
{
	if (!func_247(Param0))
	{
		return -1;
	}
	iVar0 = func_1533(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1071686->f_19550.f_1[iVar0]->f_2;
}

void func_1113(struct<2> Param0, int iParam2, int iParam3, int iParam4, int iParam5)
{
	iVar0 = func_1534(func_248(Param0));
	iVar1 = func_491(Param0);
	Var2.f_1 = iParam3;
	Var2 = 0;
	Var2.f_2 = 0;
	if (func_505() == 0)
	{
		Var2 = Global_265377->f_124517.f_71.f_17;
		func_1535(Param0, &Var2);
	}
	if (network_is_player_active(iParam4))
	{
		Var2.f_4 = iParam4;
		Var2.f_3 = iParam5;
	}
	else
	{
		Var2.f_4 = 255;
		Var2.f_3 = 0;
	}
	_0xd5910ecf81a2278c(iVar0, iVar1, iParam2, &Var2);
}

void func_1114(struct<2> Param0, int iParam2)
{
	if (!func_247(Param0))
	{
		return;
	}
	if (iParam2 == 0 || iParam2 == -1)
	{
		func_1536(Param0);
	}
	else
	{
		func_1537(Param0, iParam2);
	}
	func_1538();
}

bool func_1115(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

void func_1116(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 <= 58)
	{
		iVar1 = func_1539(iVar0, 1);
		if ((iVar1 == -173287735 || iVar1 == -715363719) || iVar1 == 1972833301)
		{
		}
		else
		{
			if (bParam0)
			{
				StringCopy(&cVar2, "LAW_UI_DEAD_OR_ALIVE", 24);
				func_1540(cVar2);
			}
			else
			{
				func_1541();
			}
			_0xf611de44aeb36a1d(iVar1, bParam0);
		}
		iVar0++;
	}
}

int func_1117(bool bParam0)
{
	if (!bParam0 && func_1542(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

void func_1118(int iParam0)
{
	Global_1900736 = (Global_1900736 || iParam0);
}

int func_1119(struct<2> Param0)
{
	return func_1544(func_1543(Param0));
}

bool func_1120(struct<2> Param0)
{
	return func_1112(Param0) == 0;
}

void func_1121(struct<2> Param0)
{
	if (func_491(Param0) == 0)
	{
	}
	else if (!_0x01f4d242765c6b24(func_491(Param0)))
	{
		_0x99230691875fc218(func_248(Param0), func_491(Param0), Global_35);
	}
}

bool func_1122(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 3)
	{
		return false;
	}
	return true;
}

bool func_1123(int iParam0, int iParam1)
{
	if (!func_960(iParam0))
	{
		return false;
	}
	return (Global_1915715->f_17884[iParam0] && iParam1) != 0;
}

void func_1124(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_1545(Global_1139381->f_3876.f_2[func_521(iParam0, 1)]);
}

int func_1125(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
{
	if (is_string_null_or_empty(sParam0))
	{
		return 0;
	}
	if (!_0xbc0884bc590951c7(iParam1, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_1526(iVar0, 2))
		{
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_1546(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

void func_1126(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_152(iParam0))
	{
		return;
	}
	iVar0 = func_347(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1951255)[iVar0]->f_3, iParam1, iParam2);
}

var func_1127(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4)
{
	vVar0.x = iParam3;
	vVar0.f_1 = sParam1;
	vVar0.f_2 = sParam2;
	uVar3 = _0x9f2cc2439a04e7ba(uParam0, &vVar0, iParam4);
	return uVar3;
}

char* func_1128(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MG_BJACK";
		case 1:
			return "MG_DOMIN";
		case 2:
			return "MG_POKER";
		case 3:
			return "MG_FILLET";
		case 4:
			return "MG_MILKING_COW";
		case 5:
			return "MG_CLEAN_STALLS";
		case 6:
			return "MG_FENCE_BUILDING";
	}
	return "Unknown Minigame";
}

bool func_1129(var uParam0, char* sParam1)
{
	if (!uParam0->f_49)
	{
		if (get_task_move_network_event(*uParam0, sParam1))
		{
			uParam0->f_49 = 1;
		}
	}
	return (uParam0->f_49 && is_task_move_network_ready_for_transition(*uParam0));
}

bool func_1130(var uParam0, int iParam1, int iParam2)
{
	if (!uParam0->f_818[iParam1]->f_46)
	{
		if (has_anim_event_fired(&(uParam0->f_818[iParam1]), iParam2))
		{
			func_1147(uParam0, iParam1);
			return true;
		}
	}
	return false;
}

bool func_1131(var uParam0, int iParam1, char* sParam2, float fParam3)
{
	iVar0 = uParam0->f_818[iParam1]->f_4;
	iVar1 = &uParam0->f_818[iParam1];
	iVar0 = func_441(&iVar1, iVar0);
	if (!is_ped_injured(iVar1))
	{
		StringCopy(&cVar2, "clipset@", 64);
		StringConCat(&cVar2, uParam0->f_1274[iVar0], 64);
		if (is_entity_playing_anim(iVar1, &cVar2, sParam2, 1) && _get_entity_anim_current_time(iVar1, &cVar2, sParam2) < fParam3)
		{
			return true;
		}
	}
	return false;
}

bool func_1132(var uParam0, int iParam1, bool bParam2)
{
	if (has_anim_event_fired(&(uParam0->f_818[iParam1]), 1426724047))
	{
		if ((!bParam2 || !is_task_move_network_active(&(uParam0->f_818[iParam1]))) || is_task_move_network_ready_for_transition(&(uParam0->f_818[iParam1])))
		{
			return true;
		}
	}
	return false;
}

void func_1133(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_818[iParam1]->f_9 = iParam2;
	uParam0->f_818[iParam1]->f_49 = 0;
	func_268(&(uParam0->f_818[iParam1]->f_13));
}

void func_1134(var uParam0, int iParam1)
{
	if (uParam0->f_818[iParam1]->f_3)
	{
		func_1093(uParam0, iParam1, uParam0->f_818[iParam1]->f_1, 0);
	}
}

int func_1135(int iParam0, vector3 vParam1, int iParam4, int iParam5, float fParam6)
{
	iVar3 = create_itemset(true);
	if (!is_itemset_valid(iVar3))
	{
		return 0;
	}
	func_1547(iParam0, vParam1, iParam4, iParam5, &vVar5, 0);
	func_1548(&iVar2, vVar5, 0f, 0f, 0f, (fParam6 * 2f), (fParam6 * 2f), 1.2f);
	iVar1 = _0x886171a12f400b89(iVar2, iVar3, 3);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar4 = _0x18013392501ce5dc(get_indexed_item_in_itemset(iVar0, iVar3));
		if (!is_entity_dead(iVar4))
		{
			if (func_1549(iParam0, get_entity_model(iVar4)))
			{
				if (get_entity_upright_value(iVar4) > 0.95f)
				{
					func_1550(iVar2);
					_0x20a4bf0e09bee146(iVar3);
					destroy_itemset(iVar3);
					return iVar4;
				}
			}
		}
		iVar0++;
	}
	func_1550(iVar2);
	_0x20a4bf0e09bee146(iVar3);
	destroy_itemset(iVar3);
	return 0;
}

void func_1136(vector3 vParam0, float fParam3, vector3 vParam4, vector3 vParam7, var uParam10, var uParam11)
{
	vVar0 = { vParam4 - vParam0 };
	*uParam10 = ((vVar0.x * cos(-fParam3)) - (vVar0.y * sin(-fParam3)));
	uParam10->f_1 = ((vVar0.x * sin(-fParam3)) + (vVar0.y * cos(-fParam3)));
	uParam10->f_2 = vVar0.z;
	*uParam11 = vParam7.x;
	uParam11->f_1 = vParam7.y;
	uParam11->f_2 = (vParam7.z - fParam3);
}

void func_1137(var uParam0, int iParam1, int iParam2)
{
	if (!is_bit_set(uParam0->f_818[iParam1]->f_45, iParam2))
	{
		uVar0 = uParam0->f_818[iParam1]->f_8;
		set_bit(&(uParam0->f_818[iParam1]->f_45), iParam2);
	}
}

bool func_1138(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_818[iParam1]->f_47)
	{
		if (has_anim_event_fired(&(uParam0->f_818[iParam1]), 1426724047))
		{
			if ((!bParam2 || !is_task_move_network_active(&(uParam0->f_818[iParam1]))) || is_task_move_network_ready_for_transition(&(uParam0->f_818[iParam1])))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_1139(var uParam0)
{
	if (!_does_anim_scene_exist(uParam0->f_798))
	{
		return true;
	}
	return (_is_anim_scene_active(uParam0->f_798) || _0xf94692eb9dc15d74(uParam0->f_798, 0));
}

void func_1140(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_818[iParam1]->f_55 = iParam2;
}

float func_1141(var uParam0, int iParam1, char* sParam2)
{
	iVar0 = uParam0->f_818[iParam1]->f_4;
	iVar1 = &uParam0->f_818[iParam1];
	iVar0 = func_441(&iVar1, iVar0);
	if (!is_ped_injured(iVar1))
	{
		StringCopy(&cVar2, "clipset@", 64);
		StringConCat(&cVar2, uParam0->f_1274[iVar0], 64);
		if (is_entity_playing_anim(iVar1, &cVar2, sParam2, 1))
		{
			return _get_entity_anim_current_time(iVar1, &cVar2, sParam2);
		}
	}
	return 0f;
}

bool func_1142()
{
	if (is_bit_set(get_random_int_in_range(0, 65536), 0))
	{
		return true;
	}
	return false;
}

bool func_1143(var uParam0)
{
	if (!_does_anim_scene_exist(uParam0->f_793))
	{
	}
	else if (_is_anim_scene_loaded(uParam0->f_793, true, false))
	{
		return true;
	}
	else if (!_is_anim_scene_loading(uParam0->f_793, true))
	{
		load_anim_scene(uParam0->f_793);
	}
	return false;
}

int func_1144(var uParam0, int iParam1, int iParam2)
{
	if (!_does_anim_scene_exist(uParam0->f_793))
	{
		return 0;
	}
	set_anim_scene_origin(uParam0->f_793, *uParam0->f_1236[iParam1], *uParam0->f_1255[iParam1], 2);
	set_anim_scene_entity(uParam0->f_793, "plr", &(uParam0->f_818[iParam1]), 0);
	set_anim_scene_entity(uParam0->f_793, "deck", func_1148(uParam0), 0);
	iVar4 = (iParam1 + 1 % 6);
	iVar5 = 0;
	while (iVar5 < 6)
	{
		if (is_bit_set(uParam0->f_794, iVar4))
		{
			if (iVar4 == iParam2)
			{
				func_1037(uParam0, iVar4, 0, 0, 0);
			}
			else
			{
				func_1038(uParam0, iVar4, 0, 0);
			}
			if (iVar4 == iParam1)
			{
				func_1236(uParam0, iVar4, 2);
			}
			else
			{
				func_1236(uParam0, iVar4, 1);
			}
			StringCopy(&cVar0, "card1_seat", 16);
			StringCopy(&cVar2, "card2_seat", 16);
			StringIntConCat(&cVar0, iVar5 + 1, 16);
			StringIntConCat(&cVar2, iVar5 + 1, 16);
			set_anim_scene_entity(uParam0->f_793, &cVar0, func_473(uParam0, iVar4, 0), 0);
			set_anim_scene_entity(uParam0->f_793, &cVar2, func_473(uParam0, iVar4, 1), 0);
		}
		iVar4 = (iVar4 + 1 % 6);
		iVar5++;
	}
	start_anim_scene(uParam0->f_793);
	return 1;
}

bool func_1145(var uParam0)
{
	if (!_does_anim_scene_exist(uParam0->f_793))
	{
		return false;
	}
	return _is_anim_scene_started(uParam0->f_793, false);
}

bool func_1146(var uParam0)
{
	if (!_does_anim_scene_exist(uParam0->f_793))
	{
		return false;
	}
	return (_is_anim_scene_active(uParam0->f_793) || _0xf94692eb9dc15d74(uParam0->f_793, 0));
}

void func_1147(var uParam0, int iParam1)
{
	if (!uParam0->f_818[iParam1]->f_46)
	{
		uParam0->f_818[iParam1]->f_46 = 1;
	}
}

int func_1148(var uParam0)
{
	return uParam0->f_689;
}

void func_1149(var uParam0, int iParam1, bool bParam2)
{
	if (does_entity_exist(&(uParam0->f_672.f_11[iParam1])))
	{
		set_entity_visible(&(uParam0->f_672.f_11[iParam1]), bParam2);
	}
}

int func_1150(var uParam0, int iParam1)
{
	return &(uParam0->f_672.f_11[iParam1]);
}

int func_1151(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_1152(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	if (bParam6)
	{
		iVar1 = &uParam0->f_255[iParam1]->f_5[iParam2];
		iVar2 = &uParam0->f_255[iParam1]->f_10[iParam2];
		if (iParam7 != 0)
		{
			iVar0 = iParam7;
		}
		else if (iVar2 > 0 && iVar1 != iParam3)
		{
			iVar0 = 3;
		}
		else if (iVar2 < iParam4)
		{
			if (iVar2 > 0)
			{
				iVar0 = 3;
			}
			else
			{
				iVar0 = 1;
			}
		}
		else if (iVar2 > iParam4)
		{
			iVar0 = 2;
		}
		else
		{
			return 1;
		}
		func_1551(uParam0, iParam1, iParam2, iVar0);
	}
	if (does_entity_exist(uParam0->f_255[iParam1][iParam2]))
	{
		delete_object((*uParam0->f_255[iParam1])[iParam2]);
	}
	iVar3 = 0;
	if (iParam5 > 0)
	{
		iVar4 = uParam0->f_693;
		if (!func_1552(uParam0, iParam1, iParam2, &vVar5, &vVar8, 0, 1))
		{
			return 0;
		}
		iVar3 = create_object(iVar4, vVar5, false, true, false, false, true);
		if (!does_entity_exist(iVar3))
		{
			return 0;
		}
		set_entity_coords(iVar3, vVar5, true, false, true, true);
		set_entity_rotation(iVar3, vVar8, 2, true);
		set_entity_collision(iVar3, false, false);
		freeze_entity_position(iVar3, true);
		if (bParam6)
		{
			set_entity_alpha(iVar3, 0, false);
		}
		func_1553(iVar3, iParam5, 0);
		func_1554(iVar3, iParam3);
	}
	(*uParam0->f_255[iParam1])[iParam2] = iVar3;
	uParam0->f_255[iParam1]->f_5[iParam2] = iParam3;
	uParam0->f_255[iParam1]->f_10[iParam2] = iParam4;
	return 1;
}

int func_1153(var uParam0, int iParam1, int iParam2)
{
	return uParam0->f_255[iParam1][iParam2];
}

void func_1154(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	iVar2 = *iParam3;
	iVar0 = func_1159(uParam0, iParam1, iVar2);
	iVar1 = &uParam2->f_24[iVar2];
	func_1318(uParam0, iParam1, iVar2, iVar0, iVar1, func_1160(iVar0, iVar1, 10), bParam4, 0);
}

void func_1155(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (iVar2 != *iParam3)
		{
			iVar0 = func_1159(uParam0, iParam1, iVar2);
			iVar1 = &uParam2->f_24[iVar2];
			func_1318(uParam0, iParam1, iVar2, iVar0, iVar1, func_1160(iVar0, iVar1, 10), bParam4, 0);
		}
		iVar2++;
	}
}

void func_1156(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	iVar2 = *iParam3;
	iVar0 = func_1159(uParam0, iParam1, iVar2);
	iVar1 = &uParam2->f_29[iVar2];
	func_1152(uParam0, iParam1, iVar2, iVar0, iVar1, func_1160(iVar0, iVar1, 10), bParam4, 0);
}

void func_1157(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (iVar2 != *iParam3)
		{
			iVar0 = func_1159(uParam0, iParam1, iVar2);
			iVar1 = &uParam2->f_29[iVar2];
			func_1152(uParam0, iParam1, iVar2, iVar0, iVar1, func_1160(iVar0, iVar1, 10), bParam4, 0);
		}
		iVar2++;
	}
}

void func_1158(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (does_entity_exist(uParam0->f_255[iParam1][iParam2]))
	{
		if (bParam3)
		{
			func_1551(uParam0, iParam1, iParam2, 2);
		}
		else if (does_entity_exist(uParam0->f_255[iParam1][iParam2]))
		{
			delete_object((*uParam0->f_255[iParam1])[iParam2]);
			_0x341cdd17efc2472e(iParam1, iParam2);
		}
	}
	(*uParam0->f_255[iParam1])[iParam2] = 0;
	uParam0->f_255[iParam1]->f_5[iParam2] = 0;
	uParam0->f_255[iParam1]->f_10[iParam2] = 0;
}

int func_1159(var uParam0, int iParam1, int iParam2)
{
	return uParam0->f_43[iParam1][iParam2];
}

int func_1160(int iParam0, int iParam1, int iParam2)
{
	fVar0 = (to_float(func_1555(iParam0)) / to_float(10));
	iVar1 = ceil((to_float(iParam1) / fVar0));
	if (iParam2 != -1 && iVar1 > iParam2)
	{
		iVar1 = iParam2;
	}
	return iVar1;
}

void func_1161(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (func_1556(uParam0, iParam2, iParam3))
	{
		if (uParam1->f_1 == 1)
		{
			func_474(uParam0, iParam2, "bet_blind_a_chips", func_1153(uParam0, iParam2, iParam3), 0, 2, -1082130432);
		}
		else if (uParam1->f_43 == 0)
		{
			func_474(uParam0, iParam2, "bet_stack_a_chips", func_1153(uParam0, iParam2, iParam3), 0, 2, -1082130432);
		}
		else if (uParam1->f_43 == 1)
		{
			func_474(uParam0, iParam2, "bet_stack_b_chips", func_1153(uParam0, iParam2, iParam3), 0, 2, -1082130432);
		}
		else if (uParam1->f_43 == 2)
		{
			func_474(uParam0, iParam2, "bet_stack_c_chips", func_1153(uParam0, iParam2, iParam3), 0, 2, -1082130432);
		}
		else if (uParam1->f_43 == 3)
		{
			func_474(uParam0, iParam2, "bet_stack_d_chips", func_1153(uParam0, iParam2, iParam3), 0, 2, -1082130432);
		}
	}
}

int func_1162(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 < iParam1)
	{
		return iParam1;
	}
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	return iParam0;
}

void func_1163(var uParam0, int iParam1, char* sParam2, char* sParam3)
{
}

void func_1164(var uParam0, int iParam1, char* sParam2, int iParam3)
{
}

bool func_1165(var uParam0, int iParam1, int iParam2)
{
	return does_entity_exist(uParam0->f_436[iParam1][iParam2]);
}

int func_1166(var uParam0, int iParam1, int iParam2)
{
	return &(uParam0->f_436[iParam1]->f_10[iParam2]);
}

int func_1167(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	if (bParam6)
	{
		iVar1 = &uParam0->f_436[iParam1]->f_5[iParam2];
		iVar2 = &uParam0->f_436[iParam1]->f_10[iParam2];
		if (iParam7 != 0)
		{
			iVar0 = iParam7;
		}
		else if (iVar2 > 0 && iVar1 != iParam3)
		{
			iVar0 = 3;
		}
		else if (iVar2 < iParam4)
		{
			iVar0 = 1;
		}
		else if (iVar2 > iParam4)
		{
			iVar0 = 2;
		}
		else
		{
			return 1;
		}
		func_1557(uParam0, iParam1, iParam2, iVar0);
	}
	if (does_entity_exist(uParam0->f_436[iParam1][iParam2]))
	{
		delete_object((*uParam0->f_436[iParam1])[iParam2]);
	}
	iVar3 = 0;
	if (iParam5 > 0)
	{
		iVar4 = uParam0->f_693;
		if (!func_1558(uParam0, iParam1, iParam2, &vVar5, &vVar8, 0, 1))
		{
			return 0;
		}
		iVar3 = create_object(iVar4, vVar5, false, true, false, false, true);
		if (!does_entity_exist(iVar3))
		{
			return 0;
		}
		set_entity_coords(iVar3, vVar5, true, false, true, true);
		set_entity_rotation(iVar3, vVar8, 2, true);
		set_entity_collision(iVar3, false, false);
		freeze_entity_position(iVar3, true);
		if (bParam6)
		{
			set_entity_alpha(iVar3, 0, false);
		}
		func_1553(iVar3, iParam5, 0);
		func_1554(iVar3, iParam3);
	}
	(*uParam0->f_436[iParam1])[iParam2] = iVar3;
	uParam0->f_436[iParam1]->f_5[iParam2] = iParam3;
	uParam0->f_436[iParam1]->f_10[iParam2] = iParam4;
	return 1;
}

int func_1168(var uParam0, int iParam1, int iParam2)
{
	return uParam0->f_436[iParam1][iParam2];
}

bool func_1169(var uParam0, int iParam1)
{
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (func_477(uParam0, *(*uParam0->f_617[iParam1])[iVar1], &iVar0))
		{
			if (!has_model_loaded(iVar0))
			{
				return false;
			}
		}
		iVar1++;
	}
	return true;
}

bool func_1170(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (has_anim_event_fired(&(uParam0->f_818[iParam1]), iParam2))
	{
		if ((!bParam3 || !is_task_move_network_active(&(uParam0->f_818[iParam1]))) || is_task_move_network_ready_for_transition(&(uParam0->f_818[iParam1])))
		{
			return true;
		}
	}
	return false;
}

bool func_1171(var uParam0, int iParam1)
{
	iVar0 = &uParam0->f_811[iParam1];
	if (!_does_anim_scene_exist(iVar0))
	{
		return false;
	}
	return _is_anim_scene_loaded(iVar0, true, false);
}

int func_1172(var uParam0, int iParam1, int iParam2)
{
	iVar0 = func_1559(uParam0, iParam2);
	if (!_does_anim_scene_exist(iVar0))
	{
		return 0;
	}
	if (!_is_anim_scene_loaded(iVar0, true, false))
	{
		return 0;
	}
	if (_does_anim_scene_exist(uParam0->f_818[iParam1]->f_60))
	{
		_delete_anim_scene(uParam0->f_818[iParam1]->f_60);
	}
	set_anim_scene_origin(iVar0, *uParam0->f_1236[iParam1], *uParam0->f_1255[iParam1], 2);
	set_anim_scene_entity(iVar0, "player", &(uParam0->f_818[iParam1]), 0);
	iVar3 = 0;
	while (iVar3 < 6)
	{
		iVar5 = (iVar3 - iParam1);
		while (iVar5 <= 0)
		{
			iVar5 += 6;
		}
		iVar4 = 0;
		while (iVar4 < 4)
		{
			StringCopy(&cVar1, "CHIPS_S", 16);
			StringIntConCat(&cVar1, iVar5, 16);
			if (iVar4 == 0)
			{
				StringConCat(&cVar1, "_A", 16);
			}
			else if (iVar4 == 1)
			{
				StringConCat(&cVar1, "_B", 16);
			}
			else if (iVar4 == 2)
			{
				StringConCat(&cVar1, "_C", 16);
			}
			else if (iVar4 == 3)
			{
				StringConCat(&cVar1, "_D", 16);
			}
			if (func_1556(uParam0, iVar3, iVar4))
			{
				set_anim_scene_entity(iVar0, &cVar1, func_1153(uParam0, iVar3, iVar4), 0);
			}
			iVar4++;
		}
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < 6)
	{
		iVar5 = (iVar3 - iParam1);
		while (iVar5 <= 0)
		{
			iVar5 += 6;
		}
		iVar4 = 0;
		while (iVar4 < 4)
		{
			StringCopy(&cVar1, "BANK_S", 16);
			StringIntConCat(&cVar1, iVar5, 16);
			if (iVar4 == 0)
			{
				StringConCat(&cVar1, "_01", 16);
			}
			else if (iVar4 == 1)
			{
				StringConCat(&cVar1, "_02", 16);
			}
			else if (iVar4 == 2)
			{
				StringConCat(&cVar1, "_03", 16);
			}
			else if (iVar4 == 3)
			{
				StringConCat(&cVar1, "_05", 16);
			}
			if (func_1165(uParam0, iVar3, iVar4))
			{
				set_anim_scene_entity(iVar0, &cVar1, func_1168(uParam0, iVar3, iVar4), 0);
			}
			iVar4++;
		}
		iVar3++;
	}
	iVar6 = 0;
	iVar3 = 0;
	while (iVar3 < 6)
	{
		func_1560(uParam0, iVar3, &uVar7);
		func_1232(uParam0, iVar3, &uVar12, 0);
		iVar4 = 0;
		while (iVar4 < 4)
		{
			iVar6 = (iVar6 + func_1160(&(uVar7[iVar4]), &(uVar12[iVar4]), 10));
			iVar4++;
		}
		func_1561(uParam0, iVar3, &uVar7);
		func_1562(uParam0, iVar3, &uVar12);
		iVar4 = 0;
		while (iVar4 < 4)
		{
			iVar6 = (iVar6 + func_1160(&(uVar7[iVar4]), &(uVar12[iVar4]), 10));
			iVar4++;
		}
		iVar3++;
	}
	if (iVar6 <= 5)
	{
		_0x3e93dddcbb6111e4("Game.MiniGame.OddJob.ChipValue", 10f);
	}
	else
	{
		_0x3e93dddcbb6111e4("Game.MiniGame.OddJob.ChipValue", 0f);
	}
	if (uParam0->f_39)
	{
		set_anim_scene_bool(iVar0, "ignoreCamera", true, false);
	}
	start_anim_scene(iVar0);
	uParam0->f_818[iParam1]->f_60 = iVar0;
	func_1563(uParam0, iParam2);
	func_922(uParam0, iParam2);
	uParam0->f_797 = iParam1;
	return 1;
}

bool func_1173(var uParam0, int iParam1)
{
	if (!_does_anim_scene_exist(uParam0->f_818[iParam1]->f_60))
	{
		return false;
	}
	return _is_anim_scene_started(uParam0->f_818[iParam1]->f_60, false);
}

bool func_1174(var uParam0, int iParam1)
{
	if (!_does_anim_scene_exist(uParam0->f_818[iParam1]->f_60))
	{
		return false;
	}
	return _0x4822a65d5af64e69(uParam0->f_818[iParam1]->f_60) >= 1;
}

bool func_1175(var uParam0, int iParam1)
{
	if (!_does_anim_scene_exist(uParam0->f_818[iParam1]->f_60))
	{
		return false;
	}
	return ((_is_anim_scene_active(uParam0->f_818[iParam1]->f_60) || _0xf94692eb9dc15d74(uParam0->f_818[iParam1]->f_60, 0)) || _get_anim_scene_progress(uParam0->f_818[iParam1]->f_60) > 0.99f);
}

void func_1176(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_797 != iParam1)
	{
		return;
	}
	if (_does_anim_scene_exist(uParam0->f_818[iParam1]->f_60))
	{
		iVar2 = 0;
		while (iVar2 < 6)
		{
			iVar4 = (iVar2 - iParam1);
			while (iVar4 <= 0)
			{
				iVar4 += 6;
			}
			iVar3 = 0;
			while (iVar3 < 4)
			{
				if (func_1556(uParam0, iVar2, iVar3))
				{
					iVar0 = func_1564(uParam0, iVar2, iVar3);
					iVar1 = func_1565(uParam0, iVar2, iVar3);
					func_1152(uParam0, iVar2, iVar3, iVar0, iVar1, func_1160(iVar0, iVar1, 10), bParam2, 3);
				}
				iVar3++;
			}
			iVar3 = 0;
			while (iVar3 < 4)
			{
				if (func_1165(uParam0, iVar2, iVar3))
				{
					iVar0 = func_1566(uParam0, iVar2, iVar3);
					iVar1 = func_1166(uParam0, iVar2, iVar3);
					func_1167(uParam0, iVar2, iVar3, iVar0, iVar1, func_1160(iVar0, iVar1, 10), bParam2, 3);
				}
				iVar3++;
			}
			iVar2++;
		}
	}
}

bool func_1177(var uParam0, int iParam1)
{
	return uParam0->f_818[iParam1]->f_46;
}

char* func_1178(int iParam0, int iParam1)
{
	if (!is_bit_set(iParam1, iParam0))
	{
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (is_bit_set(iParam1, iVar1))
		{
			iVar2 = ((iVar1 + 6 - iParam0) % 6);
			set_bit(&iVar0, iVar2);
		}
		iVar1++;
	}
	bVar3 = (is_bit_set(iVar0, 1) || is_bit_set(iVar0, 2));
	bVar4 = (is_bit_set(iVar0, 3) || is_bit_set(iVar0, 4));
	bVar5 = is_bit_set(iVar0, 5);
	if ((bVar3 && bVar4) && bVar5)
	{
		return "PBL_P1P2_P3P4_P5_PLAYER";
	}
	else if (bVar3 && bVar4)
	{
		return "PBL_P1P2_P3P4_PLAYER";
	}
	else if (bVar3 && bVar5)
	{
		return "PBL_P1P2_P5_PLAYER";
	}
	else if (bVar4 && bVar5)
	{
		return "PBL_P3P4_P5_PLAYER";
	}
	else if (bVar3)
	{
		return "PBL_P1P2_PLAYER";
	}
	else if (bVar4)
	{
		return "PBL_P3P4_PLAYER";
	}
	else if (bVar5)
	{
		return "PBL_P5_PLAYER";
	}
	return "PBL_P5_PLAYER";
}

void func_1179(var uParam0, int iParam1, char* sParam2)
{
	iVar0 = &uParam0->f_811[iParam1];
	if (!_does_anim_scene_exist(iVar0))
	{
		return;
	}
	_0xdf7b5144e25cd3fe(iVar0, sParam2);
}

bool func_1180(var uParam0, int iParam1, char* sParam2)
{
	iVar0 = &uParam0->f_811[iParam1];
	if (!_does_anim_scene_exist(iVar0))
	{
		return false;
	}
	return _0x23e33cb9f4a3f547(iVar0, sParam2);
}

void func_1181(var uParam0, int iParam1, int iParam2)
{
	func_471(uParam0, iParam1, 34);
	uParam0->f_818[iParam1]->f_56 = iParam2;
}

void func_1182(var uParam0, int iParam1, char* sParam2)
{
	iVar0 = &uParam0->f_811[iParam1];
	if (!_does_anim_scene_exist(iVar0))
	{
		return;
	}
	_set_anim_scene_playback_list_bool(iVar0, sParam2, true);
}

int func_1183(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 3;
	iVar1 = func_1559(uParam0, iVar0);
	if (!_does_anim_scene_exist(iVar1))
	{
		return 0;
	}
	if (!_is_anim_scene_loaded(iVar1, true, false))
	{
		return 0;
	}
	if (_does_anim_scene_exist(uParam0->f_818[iParam1]->f_60))
	{
		_delete_anim_scene(uParam0->f_818[iParam1]->f_60);
	}
	vVar2 = { *uParam0 };
	vVar5 = { *uParam0->f_1255[iParam1] };
	vVar5.f_2 = (vVar5.z + 180f);
	set_anim_scene_origin(iVar1, vVar2, vVar5, 2);
	if (is_ped_male(&(uParam0->f_818[iParam1])))
	{
		set_anim_scene_entity(iVar1, "mp_player_m_0", &(uParam0->f_818[iParam1]), 0);
	}
	else
	{
		set_anim_scene_entity(iVar1, "mp_player_f_0", &(uParam0->f_818[iParam1]), 0);
	}
	if (func_842(uParam0, iParam1) == 1)
	{
		set_anim_scene_bool(iVar1, "isBASE_CAMP", true, false);
		set_anim_scene_bool(iVar1, "isBASE", false, false);
	}
	else
	{
		set_anim_scene_bool(iVar1, "isBASE_CAMP", false, false);
		set_anim_scene_bool(iVar1, "isBASE", true, false);
	}
	iVar12 = 0;
	while (iVar12 < 6)
	{
		if (is_bit_set(iParam2, iVar12))
		{
			if (iVar12 != iParam1 && !is_ped_injured(&(uParam0->f_818[iVar12])))
			{
				iVar13 = ((iVar12 + 6 - iParam1) % 6);
				if (is_ped_male(&(uParam0->f_818[iVar12])))
				{
					StringCopy(&cVar8, "mp_player_m_", 32);
				}
				else
				{
					StringCopy(&cVar8, "mp_player_f_", 32);
				}
				StringIntConCat(&cVar8, iVar13, 32);
				set_anim_scene_entity(iVar1, &cVar8, &(uParam0->f_818[iVar12]), 0);
			}
		}
		iVar12++;
	}
	iVar16 = 0;
	while (iVar16 < 6)
	{
		iVar18 = (iVar16 - iParam1);
		while (iVar18 <= 0)
		{
			iVar18 += 6;
		}
		iVar17 = 0;
		while (iVar17 < 4)
		{
			StringCopy(&cVar14, "CHIPS_S", 16);
			StringIntConCat(&cVar14, iVar18, 16);
			if (iVar17 == 0)
			{
				StringConCat(&cVar14, "_A", 16);
			}
			else if (iVar17 == 1)
			{
				StringConCat(&cVar14, "_B", 16);
			}
			else if (iVar17 == 2)
			{
				StringConCat(&cVar14, "_C", 16);
			}
			else if (iVar17 == 3)
			{
				StringConCat(&cVar14, "_D", 16);
			}
			if (func_1556(uParam0, iVar16, iVar17))
			{
				set_anim_scene_entity(iVar1, &cVar14, func_1153(uParam0, iVar16, iVar17), 0);
			}
			iVar17++;
		}
		iVar16++;
	}
	iVar16 = 0;
	while (iVar16 < 6)
	{
		iVar18 = (iVar16 - iParam1);
		while (iVar18 <= 0)
		{
			iVar18 += 6;
		}
		iVar17 = 0;
		while (iVar17 < 4)
		{
			StringCopy(&cVar14, "BANK_S", 16);
			StringIntConCat(&cVar14, iVar18, 16);
			if (iVar17 == 0)
			{
				StringConCat(&cVar14, "_01", 16);
			}
			else if (iVar17 == 1)
			{
				StringConCat(&cVar14, "_02", 16);
			}
			else if (iVar17 == 2)
			{
				StringConCat(&cVar14, "_03", 16);
			}
			else if (iVar17 == 3)
			{
				StringConCat(&cVar14, "_05", 16);
			}
			if (func_1165(uParam0, iVar16, iVar17))
			{
				set_anim_scene_entity(iVar1, &cVar14, func_1168(uParam0, iVar16, iVar17), 0);
			}
			iVar17++;
		}
		iVar16++;
	}
	iVar19 = 0;
	iVar16 = 0;
	while (iVar16 < 6)
	{
		func_1560(uParam0, iVar16, &uVar20);
		func_1232(uParam0, iVar16, &uVar25, 0);
		iVar17 = 0;
		while (iVar17 < 4)
		{
			iVar19 = (iVar19 + func_1160(&(uVar20[iVar17]), &(uVar25[iVar17]), 10));
			iVar17++;
		}
		func_1561(uParam0, iVar16, &uVar20);
		func_1562(uParam0, iVar16, &uVar25);
		iVar17 = 0;
		while (iVar17 < 4)
		{
			iVar19 = (iVar19 + func_1160(&(uVar20[iVar17]), &(uVar25[iVar17]), 10));
			iVar17++;
		}
		iVar16++;
	}
	if (iVar19 <= 5)
	{
		_0x3e93dddcbb6111e4("Game.MiniGame.OddJob.ChipValue", 10f);
	}
	else
	{
		_0x3e93dddcbb6111e4("Game.MiniGame.OddJob.ChipValue", 0f);
	}
	if (uParam0->f_39)
	{
		set_anim_scene_bool(iVar1, "ignoreCamera", true, false);
	}
	start_anim_scene(iVar1);
	uParam0->f_818[iParam1]->f_60 = iVar1;
	func_1563(uParam0, iVar0);
	func_922(uParam0, iVar0);
	uParam0->f_797 = iParam1;
	return 1;
}

bool func_1184(var uParam0, int iParam1, int iParam2)
{
	iVar0 = ((iParam1 + 6 - iParam2) % 6);
	if (is_ped_male(&(uParam0->f_818[iParam1])))
	{
		StringCopy(&cVar1, "mp_player_m_", 64);
	}
	else
	{
		StringCopy(&cVar1, "mp_player_f_", 64);
	}
	StringIntConCat(&cVar1, iVar0, 64);
	iVar9 = uParam0->f_818[iParam2]->f_60;
	if (((!_does_anim_scene_exist(iVar9) || !_is_anim_scene_started(iVar9, false)) || _0x005e6f28dd7ed58d(iVar9, &cVar1)) || _0xb89fcff19dafff28(iVar9, &cVar1))
	{
		return true;
	}
	return false;
}

bool func_1185(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_818[iParam1]->f_8 == 34 && uParam0->f_818[iParam1]->f_56 == iParam2)
	{
		return true;
	}
	return false;
}

void func_1186(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_818[iParam1]->f_8 != 34)
	{
	}
	else if (uParam0->f_818[iParam1]->f_56 != iParam2)
	{
	}
	else
	{
		func_471(uParam0, iParam1, 0);
		uParam0->f_818[iParam1]->f_56 = -1;
	}
}

void func_1187(var uParam0, int iParam1)
{
	if (&uParam0->f_818[iParam1] == 0)
	{
	}
	else
	{
		iVar0 = func_460(uParam0, iParam1, 1);
		iVar1 = func_779(uParam0, iParam1);
		if (iVar1 == 2)
		{
			func_1023(uParam0, iParam1, 1);
		}
		if (!is_ped_injured(iVar0))
		{
			set_ped_keep_task(iVar0, true);
			set_ped_as_no_longer_needed(&iVar0);
		}
	}
}

float func_1188(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 < fParam1)
	{
		return fParam1;
	}
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	return fParam0;
}

char* func_1189(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				return "SIT_EXIT_LEFT_WIN_HIGH_A";
			}
			else
			{
				return "SIT_EXIT_LEFT_WIN_HIGH_B";
			}
			break;
		case 1:
			if (iParam1 == 0)
			{
				return "SIT_EXIT_LEFT_WIN_LOW_A";
			}
			else
			{
				return "SIT_EXIT_LEFT_WIN_LOW_B";
			}
			break;
		case 2:
			if (iParam1 == 0)
			{
				return "SIT_EXIT_LEFT_NEU_A";
			}
			else
			{
				return "SIT_EXIT_LEFT_NEU_B";
			}
			break;
		case 3:
			if (iParam1 == 0)
			{
				return "SIT_EXIT_LEFT_LOSS_A";
			}
			else
			{
				return "SIT_EXIT_LEFT_LOSS_B";
			}
			break;
	}
	return "SIT_EXIT_LEFT_NEU_A";
}

bool func_1190(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (does_entity_exist(uParam0->f_74[iParam1][iVar0]))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1191(var uParam0, int iParam1, int iParam2)
{
	return does_entity_exist(uParam0->f_74[iParam1][iParam2]);
}

bool func_1192(char* sParam0, int iParam1, char* sParam2)
{
	StringCopy(sParam2, sParam0, 64);
	switch (iParam1)
	{
		case 0:
			StringConCat(sParam2, "_BANK_01", 64);
			return true;
		case 1:
			StringConCat(sParam2, "_BANK_02", 64);
			return true;
		case 2:
			StringConCat(sParam2, "_BANK_03", 64);
			return true;
		case 3:
			StringConCat(sParam2, "_BANK_05", 64);
			return true;
		case 4:
			StringConCat(sParam2, "_BANK_04", 64);
			return true;
		default:
			break;
	}
	StringCopy(sParam2, "error", 64);
	return false;
}

var func_1193(char[4] cParam0, char[4] cParam1)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

int func_1194(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return -1;
	}
	if (iParam1 <= -1)
	{
		return -1;
	}
	return &(Global_1139381->f_5079[iParam0]->f_5[iParam1]);
}

void func_1195(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 <= -1)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = int_to_playerindex(iParam0);
	if (!network_is_player_active(iVar0))
	{
		return;
	}
	(*Global_1139381->f_5079[iParam0])[iParam1] = iParam2;
}

void func_1196(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		return;
	}
	if (iParam1 <= -1)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = int_to_playerindex(iParam0);
	if (!network_is_player_active(iVar0))
	{
		return;
	}
	Global_1139381->f_5079[iParam0]->f_5[iParam1] = iParam2;
}

int func_1197(int iParam0, int iParam1)
{
	if (iParam1 <= -1)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	iVar0 = int_to_playerindex(iParam0);
	if (!network_is_player_active(iVar0))
	{
		return 0;
	}
	return Global_1139381->f_5079[iParam0][iParam1];
}

void func_1198(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = -1;
	func_1200(&(uParam0->f_7));
	uParam0->f_31.f_24 = -1;
	uParam0->f_31.f_23 = 0;
}

void func_1199(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_9 = 0;
	uParam0->f_17 = 0;
}

void func_1200(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		(*uParam0)[iVar0] = -1;
		(*uParam0)[iVar0]->f_1 = -1;
		iVar0++;
	}
	uParam0->f_23 = 0;
}

void func_1201(var uParam0, bool bParam1, bool bParam2)
{
	func_925(uParam0);
	if (bParam1)
	{
		func_1567(uParam0);
	}
	if (bParam2)
	{
		func_1568(uParam0);
	}
}

char[] func_1202(var uParam0)
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (&uParam0->f_39[iVar1] != -1 && uParam0->f_39[iVar1]->f_2 > 0)
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_1203(var uParam0, char* sParam1, char* sParam2)
{
	uParam0->f_439 = sParam1;
	uParam0->f_440 = sParam2;
	func_1490(uParam0, 0, _create_var_string(2, "MGPKR_UI_INTERVAL_PLAYERS_LABEL"));
	func_1491(uParam0, 0, _create_var_string(2, "MGPKR_UI_INTERVAL_PLAYERS_N", sParam1, sParam2));
}

int func_1204(var uParam0)
{
	return uParam0->f_170;
}

void func_1205(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 >= 6)
	{
	}
	else if (!&uParam0->f_307[iParam1])
	{
	}
	else
	{
		uParam0->f_307[iParam1]->f_2 = iParam2;
		func_1528(uParam0->f_34[iParam1], _create_var_string(2, "MGPKR_UI_CASH", func_1451(uParam0, iParam2)));
	}
}

char* func_1206()
{
	return _create_var_string(2, "MGPKR_INFO_WAITING_FOR_BUYIN");
}

char* func_1207()
{
	return _create_var_string(2, "MGPKR_INFO_WAITING_FOR_NEXT_HAND");
}

bool func_1208(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (uParam0->f_1400)
		{
			return false;
		}
	}
	if (uParam0->f_1388 != _minigame_get_next_event_type())
	{
		func_403(uParam0);
		return false;
	}
	if (uParam0->f_1388 == -1857735811)
	{
		if (bParam1)
		{
			if (uParam0->f_1388.f_2 != uParam0->f_1396 + 1 && uParam0->f_1396 != -1)
			{
				return false;
			}
		}
		if (uParam0->f_1388.f_1 != 1995414514 && uParam0->f_1388.f_1 != 1592704673)
		{
			return true;
		}
	}
	return false;
}

void func_1209(var uParam0, int iParam1)
{
	if (!uParam0->f_818[iParam1]->f_47)
	{
		uParam0->f_818[iParam1]->f_47 = 1;
	}
}

int func_1210(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_793 != -1)
	{
		return 0;
	}
	StringCopy(&cVar8, "PBL_", 16);
	iVar10 = (iParam1 + 1 % 6);
	iVar11 = 0;
	while (iVar11 < 6)
	{
		if (is_bit_set(iParam2, iVar10))
		{
			StringIntConCat(&cVar8, iVar11 + 1, 16);
		}
		else if (iVar10 == iParam1)
		{
			StringIntConCat(&cVar8, iVar11 + 1, 16);
		}
		iVar10 = (iVar10 + 1 % 6);
		iVar11++;
	}
	if ((func_610(uParam0, iParam1, 4, 1) || func_610(uParam0, iParam1, 5, 1)) || func_610(uParam0, iParam1, 3, 1))
	{
		StringCopy(&cVar0, "script@mini_game@poker@fem_deal", 64);
	}
	else if (is_bit_set(iParam2, iParam1))
	{
		StringCopy(&cVar0, "script@mini_game@poker@deal", 64);
	}
	else
	{
		StringCopy(&cVar0, "script@mini_game@poker@deal_casino", 64);
	}
	uParam0->f_793 = _create_anim_scene(&cVar0, 0, &cVar8, false, true);
	uParam0->f_794 = iParam2;
	if (_does_anim_scene_exist(uParam0->f_793))
	{
		load_anim_scene(uParam0->f_793);
		return 1;
	}
	uParam0->f_793 = -1;
	return 0;
}

void func_1211(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_689 == 0)
	{
	}
	else
	{
		uParam0->f_689.f_1 = iParam1;
		uParam0->f_689.f_2 = iParam2;
	}
}

void func_1212(var uParam0, int iParam1, int iParam2, int iParam3, float fParam4)
{
	if (iParam1 == -1)
	{
	}
	else if (iParam2 == -1)
	{
	}
	else
	{
		if (&uParam0->f_2067[iParam1] != -1)
		{
		}
		uParam0->f_2067[iParam1] = iParam2;
		uParam0->f_2074[iParam1] = iParam3;
		func_361(uParam0->f_2081[iParam1], -fParam4);
	}
}

int func_1213(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (is_bit_set(iParam1, iVar0))
		{
			if (!(!is_bit_set(uParam0->f_1618, iVar0) || (&uParam0->f_1619[iVar0] == iParam2 && !bParam3)))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_1214(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (is_bit_set(iParam1, iVar1))
		{
			if (is_bit_set(uParam0->f_1618, iVar1))
			{
				if (&uParam0->f_1619[iVar1] != iParam2)
				{
					iVar0 = 0;
					Jump @98; //curOff = 59
				}
				else if (bParam3)
				{
					iVar0 = 0;
				}
				else
				{
					set_bit(&(uParam0->f_1618), iVar1);
					uParam0->f_1619[iVar1] = iParam2;
				}
				iVar1++;
				return iVar0;
			}
		}
	}
}

int func_1215(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	else if (is_bit_set(uParam0->f_1618, iParam1))
	{
		if (&uParam0->f_1619[iParam1] != iParam2)
		{
			return 0;
		}
		else if (bParam3)
		{
			return 0;
		}
	}
	set_bit(&(uParam0->f_1618), iParam1);
	uParam0->f_1619[iParam1] = iParam2;
	return 1;
}

void func_1216(var uParam0)
{
	uParam0->f_439 = -1;
	uParam0->f_440 = -1;
	uParam0->f_441 = -1;
	func_1490(uParam0, 0, "");
	func_1491(uParam0, 0, "");
	func_1490(uParam0, 1, "");
	func_1491(uParam0, 1, "");
}

var func_1217(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = _show_tooltip(&Var0, &Var13, iParam5);
	return uVar15;
}

bool func_1218(var uParam0, int iParam1)
{
	if (((iParam1 >= 0 && iParam1 < 6) && &uParam0->f_39[iParam1] != -1) && uParam0->f_39[iParam1]->f_6 == -1)
	{
		return true;
	}
	return false;
}

void func_1219(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 < 0 || iParam1 >= 6)
	{
	}
	else if (!&uParam0->f_307[iParam1])
	{
	}
	else
	{
		func_1569(uParam0->f_34[iParam1], bParam2);
	}
}

char* func_1220(var uParam0, int iParam1)
{
	return _create_var_string(2, "MGPKR_INFO_SBLIND", func_1451(uParam0, iParam1));
}

char* func_1221(var uParam0, int iParam1)
{
	return _create_var_string(2, "MGPKR_INFO_SBLIND_ANTE", func_1451(uParam0, iParam1));
}

char* func_1222(var uParam0, int iParam1)
{
	return _create_var_string(2, "MGPKR_INFO_BBLIND", func_1451(uParam0, iParam1));
}

char* func_1223(var uParam0, int iParam1)
{
	return _create_var_string(2, "MGPKR_INFO_ANTE", func_1451(uParam0, iParam1));
}

char* func_1224(var uParam0, int iParam1)
{
	Var0 = { func_443(&(uParam0->f_152), iParam1, 0, 1) };
	return _create_var_string(10, "MGPKR_INFO_WAIT_TURN_MP", &Var0);
}

void func_1225(var uParam0, int iParam1, int iParam2)
{
	if (!uParam0->f_118)
	{
		return;
	}
	iVar0 = 7;
	while (iVar0 > 0)
	{
		*uParam0->f_79[iVar0] = { *(uParam0->f_79[(iVar0 - 1)]) };
		iVar0 = (iVar0 - 1);
	}
	uParam0->f_119++;
	if (uParam0->f_119 >= 8)
	{
		uParam0->f_119 = 8;
	}
	uParam0->f_120++;
	if (uParam0->f_120 >= 8)
	{
		uParam0->f_120 = 8;
	}
	if (&uParam0->f_79[1] == 3)
	{
		uParam0->f_131 = uParam0->f_79[1]->f_1;
	}
	if ((&uParam0->f_79[1] == 2 || &uParam0->f_79[1] == 4) || &uParam0->f_79[1] == 3)
	{
		uParam0->f_132 = uParam0->f_79[1]->f_1;
	}
	uParam0->f_79[0] = iParam1;
	uParam0->f_79[0]->f_1 = iParam2;
	uParam0->f_79[0]->f_2 = 0;
	uParam0->f_79[0]->f_3 = 0;
	uParam0->f_124 = func_1339(&(uParam0->f_121));
	func_268(&(uParam0->f_121));
}

struct<2> func_1226(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_1227(var uParam0, int iParam1, int iParam2)
{
	if (!_stat_id_is_valid(&uParam0))
	{
		return;
	}
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

void func_1228(var uParam0)
{
	uVar0 = 4;
	iVar5 = 0;
	while (iVar5 < 6)
	{
		func_1570(uParam0, iVar5, &uVar0);
		func_1499(uParam0, iVar5, &uVar0);
		func_1571(uParam0, iVar5, "NEW", "PWORLD__ASSIGN_ROUND_DENOMS()");
		iVar5++;
	}
}

bool func_1229(var uParam0, int iParam1, int iParam2, float fParam3, var uParam4, bool bParam5)
{
	bVar0 = true;
	if (iParam2 == 0)
	{
		if (iParam1 == 0)
		{
			vVar1 = { 0.2855f, 0.6374f, 0.8006f };
			vVar4 = { 0.0247f, -0.0879f, 164.3123f };
		}
		else if (iParam1 == 1)
		{
			vVar1 = { 0.6947f, 0.0714f, 0.8006f };
			vVar4 = { 0.0247f, -0.0879f, 104.3123f };
		}
		else if (iParam1 == 2)
		{
			vVar1 = { 0.4092f, -0.5659f, 0.8006f };
			vVar4 = { 0.0247f, -0.0879f, 44.3123f };
		}
		else if (iParam1 == 3)
		{
			vVar1 = { -0.2855f, -0.6374f, 0.8006f };
			vVar4 = { 0.0247f, -0.0879f, -15.6877f };
		}
		else if (iParam1 == 4)
		{
			vVar1 = { -0.6947f, -0.0714f, 0.8006f };
			vVar4 = { 0.0247f, -0.0879f, -75.6877f };
		}
		else if (iParam1 == 5)
		{
			vVar1 = { -0.4092f, 0.5659f, 0.8006f };
			vVar4 = { 0.0247f, -0.0879f, -135.6877f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 0)
	{
		vVar1 = { -0.0088f, 0.3252f, 0.8015f };
		vVar4 = { 0f, 0f, 100.3871f };
	}
	else if (iParam1 == 1)
	{
		vVar1 = { 0.2772f, 0.1702f, 0.8015f };
		vVar4 = { 0f, 0f, 40.3871f };
	}
	else if (iParam1 == 2)
	{
		vVar1 = { 0.286f, -0.155f, 0.8015f };
		vVar4 = { 0f, 0f, -19.6129f };
	}
	else if (iParam1 == 3)
	{
		vVar1 = { 0.0088f, -0.3252f, 0.8015f };
		vVar4 = { 0f, 0f, -79.6129f };
	}
	else if (iParam1 == 4)
	{
		vVar1 = { -0.2772f, -0.1702f, 0.8015f };
		vVar4 = { 0f, 0f, -139.6129f };
	}
	else if (iParam1 == 5)
	{
		vVar1 = { -0.286f, 0.155f, 0.8015f };
		vVar4 = { 0f, 0f, 160.3871f };
	}
	else
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return false;
	}
	else if (bParam5)
	{
		func_540(*uParam0, uParam0->f_3, vVar1, vVar4, fParam3, uParam4);
	}
	else
	{
		*fParam3 = { vVar1 };
		*uParam4 = { vVar4 };
	}
	return true;
}

int func_1230(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	else if (!is_bit_set(uParam0->f_1618, iParam1))
	{
		if (bParam3)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	else if (&uParam0->f_1619[iParam1] != iParam2)
	{
		return 0;
	}
	clear_bit(&(uParam0->f_1618), iParam1);
	return 1;
}

void func_1231(var uParam0, int iParam1, var uParam2)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		(*uParam2)[iVar0] = &uParam0->f_74[iParam1]->f_10[iVar0];
		iVar0++;
	}
}

void func_1232(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		(*uParam2)[iVar0] = &uParam0->f_255[iParam1]->f_10[iVar0];
		if (bParam3)
		{
			(*uParam2)[iVar0] = (&uParam0->f_436[iParam1]->f_10[iVar0] + uParam2[iVar0]);
		}
		iVar0++;
	}
}

int func_1233(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	iVar0 = -1;
	*uParam3 = 0;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		uParam3->f_1[iVar1] = 0;
		iVar1++;
	}
	if (bParam4 && uParam1[0] > 0)
	{
		iVar0 = 0;
	}
	else
	{
		iVar3 = 14;
		if (uParam1[0] > iParam0)
		{
			iVar3 = 15;
		}
		else if ((uParam1[1] == 0 && uParam1[2] == 0) && uParam1[3] == 0)
		{
			iVar3 = 15;
		}
		iVar4 = 0;
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (uParam1[iVar1] >= iParam0)
			{
				set_bit(&iVar4, iVar1);
			}
			iVar1++;
		}
		iVar5 = 0;
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (uParam2[iVar1] == 0)
			{
				set_bit(&iVar5, iVar1);
			}
			iVar1++;
		}
		if (func_365(((iVar4 && iVar5) && iVar3)) != 0)
		{
			iVar6 = get_random_int_in_range(0, func_365(((iVar4 && iVar5) && iVar3)));
			iVar1 = 0;
			while (iVar1 < 4)
			{
				if (is_bit_set(((iVar4 && iVar5) && iVar3), iVar1))
				{
					if (iVar6 == 0)
					{
						iVar0 = iVar1;
					}
					iVar6 = (iVar6 - 1);
				}
				iVar1++;
			}
		}
		else if (func_365((iVar4 && iVar3)) != 0)
		{
			iVar7 = get_random_int_in_range(0, func_365((iVar4 && iVar3)));
			iVar1 = 0;
			while (iVar1 < 4)
			{
				if (is_bit_set((iVar4 && iVar3), iVar1))
				{
					if (iVar7 == 0)
					{
						iVar0 = iVar1;
					}
					iVar7 = (iVar7 - 1);
				}
				iVar1++;
			}
		}
		else
		{
			iVar8 = -1;
			iVar9 = 0;
			iVar1 = 0;
			while (iVar1 < 4)
			{
				if (is_bit_set(iVar3, iVar1))
				{
					if (iVar9 < uParam1[iVar1])
					{
						iVar9 = uParam1[iVar1];
						iVar8 = iVar1;
					}
				}
				iVar1++;
			}
			iVar0 = iVar8;
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = 3;
	}
	*uParam3 = iVar0;
	iVar1 = iVar0;
	iVar2 = func_1151(iParam0, uParam1[iVar1]);
	uParam3->f_1[iVar1] = (&uParam3->f_1[iVar1] + iVar2);
	(*uParam1)[iVar1] = (uParam1[iVar1] - iVar2);
	iParam0 = (iParam0 - iVar2);
	iVar10 = 0;
	while (iVar10 < 4)
	{
		iVar1 = (3 - iVar10);
		iVar2 = func_1151(iParam0, uParam1[iVar1]);
		uParam3->f_1[iVar1] = (&uParam3->f_1[iVar1] + iVar2);
		(*uParam1)[iVar1] = (uParam1[iVar1] - iVar2);
		iParam0 = (iParam0 - iVar2);
		iVar10++;
	}
	if (iParam0 > 0)
	{
	}
	return 1;
}

void func_1234(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	if (&uParam0->f_818[iParam1] == 0)
	{
	}
	else if (uParam0->f_818[iParam1]->f_50)
	{
	}
	else if (uParam0->f_818[iParam1]->f_8 != 1)
	{
	}
	else if (!bParam3 && uParam0->f_818[iParam1]->f_1 != 2)
	{
	}
	else if (bParam3 && uParam0->f_818[iParam1]->f_1 != 1)
	{
	}
	else if (*uParam2 < 0 || *uParam2 >= 4)
	{
	}
	else
	{
		func_471(uParam0, iParam1, 13);
		func_1163(uParam0, iParam1, "OLD", "BET_ADVANCED");
		func_1164(uParam0, iParam1, "OLD", 0);
		func_1231(uParam0, iParam1, &uVar0);
		func_1232(uParam0, iParam1, &uVar5, 0);
		iVar10 = 0;
		while (iVar10 < 4)
		{
			if (&uParam2->f_1[iVar10] < 0)
			{
				uParam2->f_1[iVar10] = 0;
			}
			else if (&uParam2->f_1[iVar10] > &uVar0[iVar10])
			{
				uParam2->f_1[iVar10] = &uVar0[iVar10];
			}
			iVar10++;
		}
		func_1572(uParam0, iParam1, uParam2, 0);
		iVar10 = 0;
		while (iVar10 < 4)
		{
			uParam0->f_818[iParam1]->f_24[iVar10] = (uParam2->f_1[iVar10] - uVar0[iVar10]) // PointerArith;
			uParam0->f_818[iParam1]->f_29[iVar10] = (uParam2->f_1[iVar10] + uVar5[iVar10]) // PointerArith;
			iVar10++;
		}
		iVar11 = *uParam2;
		if (func_610(uParam0, iParam1, 1, 0) || func_610(uParam0, iParam1, 4, 0))
		{
			if (iVar11 == 0)
			{
				iVar11 = 1;
			}
			else if (iVar11 == 1)
			{
				iVar11 = 0;
			}
		}
		if (!uParam0->f_40)
		{
			if (bParam3)
			{
				request_task_move_network_state_transition(&(uParam0->f_818[iParam1]), "BetBlind");
			}
			else
			{
				request_task_move_network_state_transition(&(uParam0->f_818[iParam1]), "Bet");
				set_task_move_network_signal_float(&(uParam0->f_818[iParam1]), "BetType", to_float(iVar11));
			}
		}
		uParam0->f_818[iParam1]->f_19 = *uParam2;
		uParam0->f_818[iParam1]->f_20 = &uParam2->f_1[0];
		uParam0->f_818[iParam1]->f_21 = &uParam2->f_1[1];
		uParam0->f_818[iParam1]->f_22 = &uParam2->f_1[2];
		uParam0->f_818[iParam1]->f_23 = &uParam2->f_1[3];
		uParam0->f_818[iParam1]->f_43 = iVar11;
	}
}

void func_1235(var uParam0, int iParam1, int iParam2)
{
	func_1093(uParam0, iParam1, iParam2, 1);
}

void func_1236(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_617[iParam1]->f_8 == 7)
	{
	}
	else
	{
		uParam0->f_617[iParam1]->f_8 = iParam2;
	}
}

bool func_1237(var uParam0, int iParam1, var uParam2)
{
	return (func_1303(uParam0, iParam1, uParam2) && func_1261(uParam0) > 0);
}

int func_1238(var uParam0, int iParam1)
{
	iParam1 = (iParam1 + 1 % 6);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_1314(uParam0, iParam1))
		{
			return iParam1;
		}
		iParam1 = (iParam1 + 1 % 6);
		iVar0++;
	}
	return -1;
}

bool func_1239(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	if (!uParam2->f_808 || uParam2->f_809)
	{
		return false;
	}
	if (uParam2->f_807 == -1)
	{
		return false;
	}
	if (iParam4 < 0 || iParam4 >= 6)
	{
		return false;
	}
	fVar2 = -1f;
	switch (uParam2->f_818[iParam4]->f_2)
	{
		case 0:
			fVar2 = -1f;
			break;
		case 1:
			fVar2 = 0f;
			break;
		case 2:
			fVar2 = 1f;
			break;
	}
	fVar3 = 0f;
	_0x07706c4cc9c6cc9e(uParam2->f_807, "MgmLookPose", &(uParam2->f_818[iParam4]), 0, fVar2);
	_0x07706c4cc9c6cc9e(uParam2->f_807, "MgmLookVar", &(uParam2->f_818[iParam4]), 0, fVar3);
	iVar4 = uParam0->f_1998;
	iVar5 = -1;
	if (uParam1->f_119 >= 1)
	{
		iVar5 = uParam1->f_79[0]->f_1;
	}
	iVar6 = -1;
	if (uParam1->f_119 >= 2)
	{
		iVar6 = uParam1->f_79[1]->f_1;
	}
	_0x07706c4cc9c6cc9e(uParam2->f_807, "look_atDealer", &(uParam2->f_818[iParam4]), 0, func_1573(iParam4, iVar4));
	_0x07706c4cc9c6cc9e(uParam2->f_807, "look_atCurActor", &(uParam2->f_818[iParam4]), 0, func_1573(iParam4, iVar5));
	_0x07706c4cc9c6cc9e(uParam2->f_807, "look_atPrevActor", &(uParam2->f_818[iParam4]), 0, func_1573(iParam4, iVar6));
	_0x07706c4cc9c6cc9e(uParam2->f_807, "look_atGivenSeat", &(uParam2->f_818[iParam4]), 0, func_1573(iParam4, iParam6));
	if (iParam5 & 2 != 0)
	{
		iVar7 = uParam1->f_131;
		iVar8 = uParam1->f_132;
		iVar9 = func_1574(uParam3, iParam4);
		iVar10 = -1;
		iVar0 = (uParam3->f_6 + 1 % 6);
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (func_440(uParam3, iVar0) && func_1314(uParam3, iVar0))
			{
				iVar10 = iVar0;
			}
			else
			{
				iVar0 = (iVar0 + 1 % 6);
				iVar1++;
			}
		}
		iVar1 = 0;
		if (iVar7 != -1)
		{
			iVar11[iVar1] = iVar7;
			iVar1++;
		}
		if (iVar8 != -1)
		{
			iVar11[iVar1] = iVar8;
			iVar1++;
		}
		if (iVar10 != -1)
		{
			iVar11[iVar1] = iVar10;
			iVar1++;
		}
		if (iVar9 != -1)
		{
			iVar11[iVar1] = iVar9;
			iVar1++;
		}
		iVar22 = -1;
		if (get_random_int_in_range(0, 100) < 90)
		{
			iVar22 = &iVar11[get_random_int_in_range(0, iVar1)];
		}
		_0x07706c4cc9c6cc9e(uParam2->f_807, "look_onAction", &(uParam2->f_818[iParam4]), 0, func_1573(iParam4, iVar22));
		_0x07706c4cc9c6cc9e(uParam2->f_807, "look_atPrevRaiser", &(uParam2->f_818[iParam4]), 0, func_1573(iParam4, iVar7));
	}
	if (iParam5 & 4 != 0)
	{
		iVar23 = (uParam1->f_144 && uParam1->f_141 ^ -1);
		iVar24 = -1;
		iVar0 = (iParam4 + 1 % 6);
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (is_bit_set(iVar23, iVar0))
			{
				iVar24 = iVar0;
			}
			else
			{
				iVar0 = (iVar0 + 1 % 6);
				iVar1++;
			}
		}
		iVar25 = -1;
		if (uParam1->f_145 != iParam4)
		{
			iVar25 = uParam1->f_145;
		}
		else if (uParam1->f_147 != -1)
		{
			iVar25 = uParam1->f_147;
		}
		else
		{
			iVar25 = iVar24;
		}
		_0x07706c4cc9c6cc9e(uParam2->f_807, "look_onReveal", &(uParam2->f_818[iParam4]), 0, func_1573(iParam4, iVar25));
	}
	if (iParam5 & 8 != 0)
	{
		iVar26 = -1;
		iVar27 = 0;
		while (iVar27 < uParam1->f_119)
		{
			if (&uParam1->f_79[iVar27] == 6)
			{
				iVar26 = uParam1->f_79[iVar27]->f_1;
			}
			else
			{
				iVar27++;
			}
		}
		_0x07706c4cc9c6cc9e(uParam2->f_807, "look_onCelebrate", &(uParam2->f_818[iParam4]), 0, func_1573(iParam4, iVar26));
	}
	return true;
}

void func_1240(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (is_bit_set(uParam0->f_1618, iVar0) && &uParam0->f_1619[iVar0] == iParam1)
		{
			func_1230(uParam0, iVar0, iParam1, 1);
		}
		iVar0++;
	}
}

void func_1241(var uParam0)
{
	func_219(&(uParam0->f_2841), 1);
	func_220(&(uParam0->f_2841), 1);
}

void func_1242(var uParam0, int iParam1)
{
	uParam0->f_1628 = iParam1;
}

void func_1243(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (&uParam0->f_2067[iVar0] != -1)
		{
			uParam0->f_2067[iVar0] = -1;
		}
		iVar0++;
	}
}

void func_1244(var uParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	uParam0->f_40 = bParam1;
}

void func_1245(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 < 0 || iParam1 >= 6)
	{
	}
	else if (!&uParam0->f_307[iParam1])
	{
	}
	else
	{
		func_1575(uParam0->f_34[iParam1], bParam2);
	}
}

void func_1246(var uParam0, int iParam1, float fParam2)
{
	if (iParam1 < 0 || iParam1 >= 6)
	{
	}
	else if (!&uParam0->f_307[iParam1])
	{
	}
	else if (fParam2 >= 0f && fParam2 <= 1f)
	{
		func_1529(uParam0->f_34[iParam1], round((fParam2 * 100f)));
		if (fParam2 == 1f)
		{
			func_1049(uParam0, iParam1, 1);
		}
		else
		{
			func_1049(uParam0, iParam1, 0);
			func_1530(uParam0->f_34[iParam1], 1);
		}
	}
	else
	{
		func_1529(uParam0->f_34[iParam1], -1);
		func_1049(uParam0, iParam1, 0);
		func_1530(uParam0->f_34[iParam1], 0);
	}
}

void func_1247(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	if (uParam0->f_485 != 0)
	{
		if (bParam4)
		{
			func_1471(uParam0, uParam1, uParam3);
		}
		switch (uParam0->f_485.f_2)
		{
			case 1:
			case 2:
			case 3:
			case 4:
				if (func_618(uParam1, uParam0->f_485.f_1) == func_1259(uParam1))
				{
					*uParam2 = 4;
					uParam2->f_1 = 0;
				}
				else
				{
					*uParam2 = 3;
					uParam2->f_1 = 0;
				}
				break;
			case 5:
				*uParam2 = 5;
				uParam2->f_1 = 0;
				break;
			default:
				*uParam2 = 0;
				uParam2->f_1 = 0;
				break;
		}
	}
}

bool func_1248(var uParam0)
{
	return *uParam0 != 0;
}

void func_1249(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	if (uParam0->f_166)
	{
		return;
	}
	uParam0->f_442 = 1;
	uParam0->f_442.f_1 = iParam4;
	uParam0->f_442.f_2 = 0;
	uParam0->f_442.f_3 = 0;
	func_1576(uParam1, uParam2, iParam3, &uVar0, &uVar1, &uVar2, 1);
	uParam0->f_442.f_4 = uVar0;
	func_596(&(uParam0->f_442.f_5));
	uParam0->f_442.f_19 = 0;
}

void func_1250(var uParam0, char* sParam1)
{
	if (uParam0->f_165)
	{
		return;
	}
	uParam0->f_172 = func_1577(sParam1, 7500, 0, 0, 0, 0, -1, -1, 0);
}

void func_1251(var uParam0)
{
	iVar0 = player_id();
	if (!network_is_player_active(iVar0) || !network_is_player_a_participant(iVar0))
	{
	}
	else
	{
		iVar1 = network_get_participant_index(iVar0);
		if (!network_is_participant_active(iVar1))
		{
		}
		else
		{
			iVar2 = iVar1;
			uParam0->f_1476.f_17[iVar2] = uParam0->f_416;
			uParam0->f_1476.f_17[iVar2]->f_1 = get_cloud_time_as_int();
		}
	}
}

bool func_1252(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	if (uParam0->f_442 && !bParam4)
	{
		func_1578(&(uParam0->f_442.f_5), func_204(uParam1, iParam3));
		if (uParam0->f_442.f_2 == 0)
		{
			if (!func_152(uParam0->f_442.f_20))
			{
				uParam0->f_442.f_20 = func_1125("MGPKR_UI_BET2", -1450691735, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
				func_1472(uParam0->f_442.f_20, 160258628, 0, 1);
			}
			if (!func_152(uParam0->f_442.f_21))
			{
				if (uParam0->f_442.f_1)
				{
					uParam0->f_442.f_21 = func_1125("MGPKR_UI_FOLD2", 1236577566, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
					func_1472(uParam0->f_442.f_21, 160258628, 0, 1);
				}
			}
			if (!func_152(uParam0->f_442.f_22))
			{
				uParam0->f_442.f_22 = func_1125("MGPKR_UI_ALTER", -1111018514, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
				func_1472(uParam0->f_442.f_22, 160258628, 0, 1);
			}
			func_1576(uParam1, uParam2, iParam3, &iVar0, &iVar1, &iVar2, 1);
			iVar3 = 0;
			iVar3 = func_1449(&(uParam0->f_442.f_5), -get_control_normal(2, -1111018514), 0);
			if (iVar3 != 0)
			{
				iVar4 = (uParam0->f_442.f_4 + iVar3);
				if (iVar4 < iVar0)
				{
					iVar4 = iVar0;
				}
				else if (iVar4 > iVar0 && iVar4 < iVar1)
				{
					if (iVar3 < 0)
					{
						iVar4 = iVar0;
					}
					else
					{
						iVar4 = iVar1;
					}
				}
				else if (iVar4 > iVar2)
				{
					iVar4 = iVar2;
				}
				if (uParam0->f_442.f_4 != iVar4)
				{
					uParam0->f_442.f_4 = iVar4;
					func_1450((iVar4 == iVar0 || iVar4 == iVar2));
				}
			}
			iVar5 = (func_618(uParam1, iParam3) + uParam0->f_442.f_4);
			iVar6 = (iVar5 - func_1259(uParam1));
			if (func_747(uParam0->f_442.f_20, 1))
			{
				if (uParam0->f_442.f_4 == 0)
				{
					play_sound_frontend("menu_select_default", "RDRO_Poker_Sounds", true, 0);
					uParam0->f_442.f_2 = 4;
				}
				else if (iVar6 <= 0)
				{
					play_sound_frontend("menu_select_default", "RDRO_Poker_Sounds", true, 0);
					uParam0->f_442.f_2 = 3;
				}
				else
				{
					play_sound_frontend("menu_select_bet", "RDRO_Poker_Sounds", true, 0);
					uParam0->f_442.f_2 = 2;
					uParam0->f_442.f_3 = iVar6;
				}
			}
			else if (func_747(uParam0->f_442.f_21, 1))
			{
				play_sound_frontend("menu_select_fold", "RDRO_Poker_Sounds", true, 0);
				uParam0->f_442.f_2 = 5;
			}
			if (func_152(uParam0->f_442.f_20))
			{
				if (uParam0->f_442.f_4 == 0)
				{
					func_1579(uParam0->f_442.f_20, "MGPKR_UI_CHECK2", 1);
				}
				else if (uParam0->f_442.f_4 == func_204(uParam1, iParam3))
				{
					func_1579(uParam0->f_442.f_20, "MGPKR_UI_ALLIN2", 1);
				}
				else if (func_1259(uParam1) == 0)
				{
					if (func_1580(uParam1, uParam2, iParam3, uParam0->f_442.f_4))
					{
						func_1579(uParam0->f_442.f_20, "MGPKR_UI_BET_MAX_BET", 1);
					}
					else
					{
						func_1579(uParam0->f_442.f_20, "MGPKR_UI_BET2", 1);
					}
				}
				else if (iVar6 <= 0)
				{
					if (func_1580(uParam1, uParam2, iParam3, uParam0->f_442.f_4))
					{
						func_1579(uParam0->f_442.f_20, "MGPKR_UI_CALL_MAX_BET", 1);
					}
					else
					{
						func_1579(uParam0->f_442.f_20, "MGPKR_UI_CALL2", 1);
					}
				}
				else if (func_1580(uParam1, uParam2, iParam3, uParam0->f_442.f_4))
				{
					func_1579(uParam0->f_442.f_20, "MGPKR_UI_RAISE_MAX_BET", 1);
				}
				else
				{
					func_1579(uParam0->f_442.f_20, "MGPKR_UI_RAISE2", 1);
				}
			}
		}
		if (uParam0->f_442.f_2 != 0)
		{
			func_1086(&(uParam0->f_442.f_20), 1, 1);
			func_1086(&(uParam0->f_442.f_21), 1, 1);
			func_1086(&(uParam0->f_442.f_22), 1, 1);
			return true;
		}
	}
	return false;
}

bool func_1253(var uParam0, var uParam1)
{
	*uParam1 = uParam0->f_442.f_2;
	uParam1->f_1 = uParam0->f_442.f_3;
	return *uParam1 != 0;
}

void func_1254(var uParam0, var uParam1)
{
	if (func_1259(uParam0) == func_618(uParam0, uParam0->f_6))
	{
		*uParam1 = 4;
		uParam1->f_1 = 0;
	}
	else
	{
		*uParam1 = 5;
		uParam1->f_1 = 0;
	}
}

void func_1255(var uParam0)
{
	if (uParam0->f_165)
	{
		return;
	}
	if (func_1581(uParam0->f_172))
	{
		_0x2f901291ef177b02(uParam0->f_172, 0);
	}
}

bool func_1256(var uParam0, int iParam1, var uParam2)
{
	if (func_362(uParam0, iParam1) != 1)
	{
	}
	else
	{
		iVar0 = func_370(uParam0, iParam1);
		if (!network_is_player_active(iVar0) || !network_is_player_a_participant(iVar0))
		{
		}
		else
		{
			iVar1 = network_get_participant_index(iVar0);
			if (!network_is_participant_active(iVar1))
			{
			}
			else
			{
				iVar2 = iVar1;
				if (uParam0->f_416 == &uParam0->f_1476.f_17[iVar2])
				{
					*uParam2 = uParam0->f_1476.f_17[iVar2]->f_1;
					return true;
				}
			}
		}
	}
	*uParam2 = -1;
	return false;
}

float func_1257(int iParam0)
{
	iVar0 = get_cloud_time_as_int();
	return to_float((iVar0 - iParam0));
}

int func_1258(var uParam0)
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_485)
	{
		iVar0 = (&uParam0->f_376[iVar1] + iVar0);
		iVar1++;
	}
	return iVar0;
}

int func_1259(var uParam0)
{
	return uParam0->f_7;
}

int func_1260(var uParam0)
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if ((&uParam0->f_39[iVar1] != -1 && uParam0->f_39[iVar1]->f_6 == 0) && uParam0->f_39[iVar1]->f_2 != 0)
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1261(var uParam0)
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_1314(uParam0, iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_1262(var uParam0, int iParam1, bool bParam2)
{
	if (!uParam0->f_118)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return;
	}
	if (!uParam0[iParam1])
	{
		return;
	}
	(*uParam0)[iParam1]->f_8 = shift_left((*uParam0)[iParam1]->f_8 & 2147483647, 1);
	if (bParam2)
	{
		set_bit(&((*uParam0)[iParam1]->f_8), 0);
	}
}

void func_1263(var uParam0, int iParam1, bool bParam2)
{
	if (!uParam0->f_118)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return;
	}
	if (!uParam0[iParam1])
	{
		return;
	}
	(*uParam0)[iParam1]->f_9 = shift_left((*uParam0)[iParam1]->f_9 & 2147483647, 1);
	if (bParam2)
	{
		set_bit(&((*uParam0)[iParam1]->f_9), 0);
	}
}

void func_1264(var uParam0, int iParam1)
{
	if (!uParam0->f_118)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return;
	}
	if (!uParam0[iParam1])
	{
		return;
	}
	if ((*uParam0)[iParam1]->f_12 > 0)
	{
		if ((*uParam0)[iParam1]->f_12 >= 3)
		{
			set_bit(&(uParam0->f_133), iParam1);
		}
		(*uParam0)[iParam1]->f_12 = 0;
	}
	(*uParam0)[iParam1]->f_12 = ((*uParam0)[iParam1]->f_12 - 1);
}

bool func_1265(var uParam0)
{
	return is_bit_set(uParam0->f_79[0]->f_2, 2);
}

bool func_1266(var uParam0)
{
	return uParam0->f_1871 != -1;
}

bool func_1267(var uParam0, bool bParam1)
{
	if (!bParam1 || uParam0->f_120 >= 2)
	{
		return &uParam0->f_79[1] == 5;
	}
	return false;
}

bool func_1268(var uParam0, bool bParam1)
{
	if (!bParam1 || (uParam0->f_120 >= 2 && uParam0->f_124 < 6f))
	{
		if (&uParam0->f_79[1] == 5)
		{
			return func_1582(uParam0, uParam0->f_79[1]->f_1, 4, 6);
		}
	}
	return false;
}

bool func_1269(var uParam0, bool bParam1)
{
	if (!bParam1 || (uParam0->f_120 >= 2 && uParam0->f_124 < 6f))
	{
		return is_bit_set(uParam0->f_79[1]->f_2, 10);
	}
	return false;
}

int func_1270(var uParam0, bool bParam1)
{
	if (uParam0->f_119 >= 2 && (!bParam1 || (uParam0->f_120 >= 2 && uParam0->f_124 < 6f)))
	{
		return uParam0->f_79[1]->f_1;
	}
	return -1;
}

void func_1271(var uParam0, int iParam1)
{
	if (!uParam0->f_118)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return;
	}
	if (!uParam0[iParam1])
	{
		return;
	}
	(*uParam0)[iParam1]->f_9 = 0;
}

var func_1272(var uParam0)
{
	return uParam0->f_137;
}

var func_1273(var uParam0)
{
	return uParam0->f_139;
}

bool func_1274(var uParam0)
{
	return is_bit_set(uParam0->f_79[0]->f_2, 1);
}

bool func_1275(float fParam0)
{
	return fParam0 >= 0.5f;
}

bool func_1276(float fParam0)
{
	return fParam0 < 0.2f;
}

bool func_1277(float fParam0)
{
	return (fParam0 >= 0.333f && fParam0 < 0.666f);
}

bool func_1278(float fParam0)
{
	return fParam0 < 0.5f;
}

bool func_1279(var uParam0, bool bParam1)
{
	if (!bParam1 || (uParam0->f_120 >= 2 && uParam0->f_124 < 6f))
	{
		return &uParam0->f_79[1] == 3;
	}
	return false;
}

bool func_1280(var uParam0, bool bParam1)
{
	if (!bParam1 || (uParam0->f_120 >= 2 && uParam0->f_124 < 6f))
	{
		return is_bit_set(uParam0->f_79[1]->f_2, 6);
	}
	return false;
}

bool func_1281(var uParam0, bool bParam1)
{
	if (!bParam1 || (uParam0->f_120 >= 2 && uParam0->f_124 < 6f))
	{
		return is_bit_set(uParam0->f_79[1]->f_2, 7);
	}
	return false;
}

bool func_1282(var uParam0, bool bParam1)
{
	if (!bParam1 || (uParam0->f_120 >= 2 && uParam0->f_124 < 6f))
	{
		return is_bit_set(uParam0->f_79[1]->f_2, 8);
	}
	return false;
}

bool func_1283(var uParam0, bool bParam1)
{
	if (!bParam1 || (uParam0->f_120 >= 2 && uParam0->f_124 < 6f))
	{
		return is_bit_set(uParam0->f_79[1]->f_2, 1);
	}
	return false;
}

bool func_1284(var uParam0)
{
	return is_bit_set(uParam0->f_79[0]->f_2, 6);
}

bool func_1285(var uParam0)
{
	return is_bit_set(uParam0->f_79[0]->f_2, 7);
}

bool func_1286(var uParam0)
{
	return is_bit_set(uParam0->f_79[0]->f_2, 8);
}

int func_1287(var uParam0)
{
	if (((uParam0->f_120 >= 2 && &uParam0->f_79[0] == 3) && &uParam0->f_79[1] == 2) && func_1583(uParam0, uParam0->f_79[1]->f_1, 4, 8))
	{
		return 1;
	}
	return 0;
}

int func_1288(var uParam0, int iParam1)
{
	if ((is_bit_set(uParam0->f_79[0]->f_2, 0) && is_bit_set(uParam0->f_79[0]->f_2, 8)) && uParam0->f_119 >= iParam1 + 1)
	{
		iVar0 = 0;
		while (iVar0 < iParam1)
		{
			if (&uParam0->f_79[iVar0 + 1] != 2 && &uParam0->f_79[iVar0 + 1] != 5)
			{
				return 0;
			}
			iVar0++;
		}
		return 1;
	}
	return 0;
}

void func_1289(var uParam0, int iParam1)
{
	if (!uParam0->f_118)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return;
	}
	if (!uParam0[iParam1])
	{
		return;
	}
	(*uParam0)[iParam1]->f_8 = 0;
}

int func_1290(var uParam0, int iParam1, int iParam2)
{
	return &(uParam0->f_74[iParam1]->f_5[iParam2]);
}

int func_1291(var uParam0, int iParam1, int iParam2)
{
	return &(uParam0->f_74[iParam1]->f_10[iParam2]);
}

int func_1292(var uParam0, int iParam1, int iParam2)
{
	(*uParam0->f_436[iParam1])[iParam2] = uParam0->f_74[iParam1][iParam2];
	uParam0->f_436[iParam1]->f_5[iParam2] = &uParam0->f_74[iParam1]->f_5[iParam2];
	uParam0->f_436[iParam1]->f_10[iParam2] = &uParam0->f_74[iParam1]->f_10[iParam2];
	(*uParam0->f_74[iParam1])[iParam2] = 0;
	uParam0->f_74[iParam1]->f_5[iParam2] = 0;
	uParam0->f_74[iParam1]->f_10[iParam2] = 0;
	return 1;
}

bool func_1293(var uParam0, var uParam1, int iParam2)
{
	if (uParam1->f_3 == 1717653435 && uParam1->f_16 > 0)
	{
		if (uParam0->f_39[iParam2]->f_3 >= uParam1->f_16)
		{
			return true;
		}
	}
	return false;
}

char* func_1294(var uParam0, int iParam1)
{
	return _create_var_string(2, "MGPKR_INFO_MAX_BET", func_1451(uParam0, iParam1));
}

char* func_1295(var uParam0, int iParam1)
{
	return _create_var_string(2, "MGPKR_INFO_ALLIN", func_1451(uParam0, iParam1));
}

char* func_1296(var uParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		return _create_var_string(2, "MGPKR_INFO_CHECK", func_1451(uParam0, iParam1));
	}
	return _create_var_string(2, "MGPKR_INFO_CHECK_0");
}

char* func_1297(var uParam0, int iParam1)
{
	return _create_var_string(2, "MGPKR_INFO_CALL", func_1451(uParam0, iParam1));
}

char* func_1298(var uParam0, int iParam1)
{
	return _create_var_string(2, "MGPKR_INFO_RAISE", func_1451(uParam0, iParam1));
}

char* func_1299(var uParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		return _create_var_string(2, "MGPKR_INFO_FOLD", func_1451(uParam0, iParam1));
	}
	return _create_var_string(2, "MGPKR_INFO_FOLD_0");
}

bool func_1300(var uParam0)
{
	return is_bit_set(uParam0->f_79[0]->f_2, 11);
}

bool func_1301(int iParam0, float fParam1)
{
	if (iParam0 == 0 || (iParam0 + round((fParam1 * 1000f))) < get_game_timer())
	{
		return true;
	}
	return false;
}

var func_1302(var uParam0)
{
	return uParam0->f_79[0]->f_1;
}

bool func_1303(var uParam0, int iParam1, var uParam2)
{
	return ((uParam0->f_39[iParam1]->f_6 == 0 && uParam0->f_39[iParam1]->f_2 != 0) && !func_1293(uParam0, uParam2, iParam1));
}

bool func_1304(var uParam0)
{
	if (&uParam0->f_79[0] == 5)
	{
		return func_1583(uParam0, uParam0->f_79[0]->f_1, 4, 8);
	}
	return false;
}

void func_1305(var uParam0)
{
	*uParam0 = get_game_timer();
}

void func_1306(var uParam0, int iParam1)
{
	if (uParam0->f_1871 != -1)
	{
	}
	uParam0->f_1871 = iParam1;
}

var func_1307(var uParam0)
{
	return uParam0->f_131;
}

var func_1308(var uParam0)
{
	return uParam0->f_138;
}

bool func_1309(float fParam0)
{
	return fParam0 >= 0.5f;
}

bool func_1310(float fParam0)
{
	return fParam0 >= 0.8f;
}

bool func_1311(float fParam0)
{
	return fParam0 >= 0.4f;
}

bool func_1312(float fParam0)
{
	return (fParam0 >= 0.2f && fParam0 < 0.4f);
}

bool func_1313(float fParam0)
{
	return fParam0 < 0.15f;
}

bool func_1314(var uParam0, int iParam1)
{
	if (&uParam0->f_39[iParam1] != -1)
	{
		if (uParam0->f_2 == 4)
		{
			if (uParam0->f_39[iParam1]->f_6 == 0)
			{
				return true;
			}
		}
		else if ((uParam0->f_39[iParam1]->f_6 == 0 && uParam0->f_39[iParam1]->f_2 != 0) && (uParam0->f_39[iParam1]->f_4 < uParam0->f_7 || uParam0->f_39[iParam1]->f_5))
		{
			return true;
		}
	}
	return false;
}

bool func_1315(var uParam0)
{
	if (&uParam0->f_79[0] == 5)
	{
		return func_1582(uParam0, uParam0->f_79[0]->f_1, 4, 6);
	}
	return false;
}

void func_1316(var uParam0, int iParam1, var uParam2)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		(*uParam2)[iVar0] = uParam0->f_43[iParam1][iVar0];
		iVar0++;
	}
}

bool func_1317(int iParam0, int iParam1, var uParam2, var uParam3)
{
	iVar0 = func_1584(uParam2);
	iVar1 = func_1584(uParam3);
	if (iVar0 + iVar1) != (iParam0 + iParam1)
	{
		return false;
	}
	iVar2 = (iParam0 - iVar0);
	if (iVar2 > 0)
	{
		iVar5 = 0;
		while (iVar5 < 4)
		{
			if (iVar2 > 0)
			{
				iVar3 = func_1151(iVar2, uParam3[iVar5]);
				(*uParam2)[iVar5] = (uParam2[iVar5] + iVar3);
				(*uParam3)[iVar5] = (uParam3[iVar5] - iVar3);
				iVar2 = (iVar2 - iVar3);
			}
			iVar5++;
		}
	}
	else if (iVar2 < 0)
	{
		iVar2 = -iVar2;
		iVar4 = 0;
		while (iVar4 < 4)
		{
			iVar5 = (3 - iVar4);
			if (iVar2 > 0)
			{
				iVar3 = func_1151(iVar2, uParam2[iVar5]);
				(*uParam3)[iVar5] = (uParam3[iVar5] + iVar3);
				(*uParam2)[iVar5] = (uParam2[iVar5] - iVar3);
				iVar2 = (iVar2 - iVar3);
			}
			iVar4++;
		}
	}
	return true;
}

int func_1318(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	if (bParam6)
	{
		iVar1 = &uParam0->f_74[iParam1]->f_5[iParam2];
		iVar2 = &uParam0->f_74[iParam1]->f_10[iParam2];
		if (iParam7 != 0)
		{
			iVar0 = iParam7;
		}
		else if (iVar2 > 0 && iVar1 != iParam3)
		{
			iVar0 = 3;
		}
		else if (iVar2 < iParam4)
		{
			iVar0 = 1;
		}
		else if (iVar2 > iParam4)
		{
			iVar0 = 2;
		}
		else
		{
			return 1;
		}
		func_1585(uParam0, iParam1, iParam2, iVar0);
	}
	if (does_entity_exist(uParam0->f_74[iParam1][iParam2]))
	{
		delete_object((*uParam0->f_74[iParam1])[iParam2]);
		_0x341cdd17efc2472e(iParam1, iParam2);
	}
	iVar3 = 0;
	if (iParam5 > 0)
	{
		iVar4 = uParam0->f_693;
		if (!func_1586(uParam0, iParam1, iParam2, &vVar5, &vVar8, 0, 1))
		{
			return 0;
		}
		iVar3 = create_object(iVar4, vVar5, false, true, false, false, true);
		if (!does_entity_exist(iVar3))
		{
			return 0;
		}
		set_entity_coords(iVar3, vVar5, true, false, true, true);
		set_entity_rotation(iVar3, vVar8, 2, true);
		set_entity_collision(iVar3, false, false);
		freeze_entity_position(iVar3, true);
		_0x06c5df5ee444bc6b(iParam1, iParam2, vVar5);
		if (bParam6)
		{
			set_entity_alpha(iVar3, 0, false);
		}
		func_1553(iVar3, iParam5, 0);
		func_1554(iVar3, iParam3);
	}
	(*uParam0->f_74[iParam1])[iParam2] = iVar3;
	uParam0->f_74[iParam1]->f_5[iParam2] = iParam3;
	uParam0->f_74[iParam1]->f_10[iParam2] = iParam4;
	return 1;
}

void func_1319(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (does_entity_exist(uParam0->f_436[iParam1][iParam2]))
	{
		if (bParam3)
		{
			func_1557(uParam0, iParam1, iParam2, 2);
		}
		else if (does_entity_exist(uParam0->f_436[iParam1][iParam2]))
		{
			delete_object((*uParam0->f_436[iParam1])[iParam2]);
			_0x341cdd17efc2472e(iParam1, iParam2);
		}
	}
	(*uParam0->f_436[iParam1])[iParam2] = 0;
	uParam0->f_436[iParam1]->f_5[iParam2] = 0;
	uParam0->f_436[iParam1]->f_10[iParam2] = 0;
}

void func_1320(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_993(&(uParam0->f_2337), iVar0))
		{
			if (func_913(uParam1, iVar0))
			{
				if (func_204(uParam1, iVar0) <= 0)
				{
					func_1048(&(uParam0->f_2337), iVar0, func_1587());
				}
				else if (func_1293(uParam1, &(uParam0->f_152.f_11), iVar0))
				{
					func_1048(&(uParam0->f_2337), iVar0, func_1588());
				}
			}
			else if (func_760(uParam1, iVar0))
			{
				func_1048(&(uParam0->f_2337), iVar0, func_1051());
			}
		}
		iVar0++;
	}
}

bool func_1321(var uParam0, int iParam1, int iParam2)
{
	return func_1589(&(uParam0->f_39[iParam1]->f_31), &(uParam0->f_39[iParam2]->f_31)) > 0;
}

int func_1322(var uParam0, int iParam1)
{
	return uParam0->f_39[iParam1]->f_31.f_24;
}

bool func_1323(var uParam0, int iParam1, int iParam2)
{
	return func_1589(&(uParam0->f_39[iParam1]->f_31), &(uParam0->f_39[iParam2]->f_31)) >= 0;
}

bool func_1324(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_485)
	{
		return false;
	}
	else if (iParam2 < 0 || iParam2 >= 6)
	{
		return false;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_376[iParam1]->f_9)
		{
			if (&uParam0->f_376[iParam1]->f_2[iVar0] == iParam2)
			{
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

int func_1325(var uParam0, int iParam1, int iParam2)
{
	iVar0 = uParam0->f_39[iParam1]->f_3;
	iVar1 = 0;
	iVar2 = 0;
	if (iParam2 > 0)
	{
		iVar1 = func_1590(uParam0, (iParam2 - 1));
	}
	iVar2 = func_1590(uParam0, iParam2);
	return (func_1151(iVar2, iVar0) - func_1151(iVar1, iVar0));
}

bool func_1326(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_39[iParam1]->f_31.f_24 == uParam0->f_39[iParam2]->f_31.f_24)
	{
		if (uParam0->f_39[iParam1]->f_31.f_24 > 1)
		{
			return true;
		}
		if (absi((uParam0->f_39[iParam2]->f_31[0] - uParam0->f_39[iParam1]->f_31[0]) // PointerArith) <= 3)
		{
			return true;
		}
	}
	return false;
}

bool func_1327(var uParam0, int iParam1, int iParam2)
{
	return func_1589(&(uParam0->f_39[iParam1]->f_31), &(uParam0->f_39[iParam2]->f_31)) == 0;
}

bool func_1328(var uParam0, int iParam1)
{
	return is_bit_set(uParam0->f_146, iParam1);
}

bool func_1329(var uParam0)
{
	return is_bit_set(uParam0->f_79[0]->f_2, 13);
}

bool func_1330(var uParam0)
{
	return func_365((uParam0->f_141 || uParam0->f_142)) <= 1;
}

bool func_1331(var uParam0)
{
	return uParam0->f_144 == &uParam0->f_134[0];
}

int func_1332(var uParam0)
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_203(uParam0, iVar1))
		{
			set_bit(&iVar0, iVar1);
		}
		iVar1++;
	}
	return iVar0;
}

int func_1333(var uParam0, int iParam1)
{
	if ((((is_bit_set(uParam0->f_144, iParam1) && is_bit_set(uParam0->f_141, iParam1)) && is_bit_set(uParam0->f_146, iParam1)) && uParam0->f_149 != 0) && func_1591(uParam0, iParam1, 2, 5))
	{
		return 1;
	}
	return 0;
}

int func_1334(var uParam0, int iParam1)
{
	if (((is_bit_set(uParam0->f_144, iParam1) && is_bit_set(uParam0->f_141, iParam1)) && is_bit_set(uParam0->f_146, iParam1)) && uParam0->f_149 != 0)
	{
		return 1;
	}
	return 0;
}

int func_1335(var uParam0, int iParam1)
{
	if ((((is_bit_set(uParam0->f_144, iParam1) && is_bit_set(uParam0->f_141, iParam1)) && !is_bit_set(uParam0->f_146, iParam1)) && is_bit_set(uParam0->f_149, iParam1)) && func_1592(uParam0, iParam1, 2, 5))
	{
		return 1;
	}
	return 0;
}

int func_1336(var uParam0, int iParam1)
{
	if (((is_bit_set(uParam0->f_144, iParam1) && is_bit_set(uParam0->f_141, iParam1)) && !is_bit_set(uParam0->f_146, iParam1)) && is_bit_set(uParam0->f_149, iParam1))
	{
		return 1;
	}
	return 0;
}

int func_1337(var uParam0, int iParam1)
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_485)
	{
		iVar2 = 0;
		while (iVar2 < uParam0->f_376[iVar1]->f_9)
		{
			if (&uParam0->f_376[iVar1]->f_2[iVar2] == iParam1)
			{
				iVar0 = (&uParam0->f_376[iVar1] + iVar0);
			}
			iVar2++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_1338(var uParam0, var uParam1, int iParam2)
{
	*uParam1 = { *uParam0 };
	uParam1->f_2 = iParam2;
	uParam1->f_15.f_23 = func_1593(iParam2);
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (func_913(uParam1, iVar2))
		{
			func_1594(&(uParam1->f_39[iVar2]->f_31), &(uParam1->f_39[iVar2]->f_7), &(uParam1->f_15));
		}
		iVar2++;
	}
	iVar0 = 0;
	while (iVar0 < uParam1->f_485)
	{
		iVar3 = -1;
		iVar1 = 0;
		while (iVar1 < uParam1->f_376[iVar0]->f_9)
		{
			iVar2 = &uParam1->f_376[iVar0]->f_2[iVar1];
			if (func_913(uParam1, iVar2))
			{
				if (iVar3 == -1 || func_1321(uParam1, iVar2, iVar3))
				{
					iVar3 = iVar2;
				}
			}
			iVar1++;
		}
		uParam1->f_376[iVar0]->f_17 = 0;
		if (iVar3 != -1)
		{
			iVar1 = 0;
			while (iVar1 < uParam1->f_376[iVar0]->f_9)
			{
				iVar2 = &uParam1->f_376[iVar0]->f_2[iVar1];
				if (func_913(uParam1, iVar2))
				{
					if (iVar2 == iVar3 || func_1323(uParam1, iVar2, iVar3))
					{
						uParam1->f_376[iVar0]->f_10[uParam1->f_376[iVar0]->f_17] = iVar2;
						uParam1->f_376[iVar0]->f_17++;
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

float func_1339(var uParam0)
{
	if (!func_269(uParam0))
	{
		return 0f;
	}
	if (func_275(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_276() - uParam0->f_1);
}

void func_1340(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (&uParam0->f_2021[iVar0] != 0)
		{
			func_1454(uParam0, iVar0);
		}
		iVar0++;
	}
}

void func_1341(var uParam0, int iParam1, int iParam2, float fParam3, float fParam4)
{
	fVar0 = fParam3;
	while (iParam1 & 63 != 0)
	{
		iVar1 = get_random_int_in_range(0, 6);
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (is_bit_set(iParam1, iVar1))
			{
				func_1595(uParam0, iVar1, iParam2, -fVar0);
				clear_bit(&iParam1, iVar1);
				fVar0 = (fVar0 + fParam4);
			}
			else
			{
				iVar1 = (iVar1 + 1 % 6);
				iVar2++;
			}
		}
	}
}

char* func_1342(var uParam0, char* sParam1, int iParam2)
{
	return _create_var_string(10, "MGPKR_INFO_OUTCOME_WON", sParam1, func_1451(uParam0, iParam2));
}

void func_1343(var uParam0, int iParam1)
{
	if (!uParam0->f_118)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return;
	}
	if (!uParam0[iParam1])
	{
		return;
	}
	if ((*uParam0)[iParam1]->f_12 < 0)
	{
		if (-(*uParam0)[iParam1]->f_12 >= 3)
		{
			set_bit(&(uParam0->f_133), iParam1);
		}
		(*uParam0)[iParam1]->f_12 = 0;
	}
	(*uParam0)[iParam1]->f_12++;
}

void func_1344(var uParam0, int iParam1, bool bParam2)
{
	if (!uParam0->f_118)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return;
	}
	if (!uParam0[iParam1])
	{
		return;
	}
	(*uParam0)[iParam1]->f_10 = shift_left((*uParam0)[iParam1]->f_10 & 2147483647, 1);
	if (bParam2)
	{
		set_bit(&((*uParam0)[iParam1]->f_10), 0);
	}
}

void func_1345(var uParam0, int iParam1, bool bParam2)
{
	if (!uParam0->f_118)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return;
	}
	if (!uParam0[iParam1])
	{
		return;
	}
	(*uParam0)[iParam1]->f_11 = shift_left((*uParam0)[iParam1]->f_11 & 2147483647, 1);
	if (bParam2)
	{
		set_bit(&((*uParam0)[iParam1]->f_11), 0);
	}
}

bool func_1346(var uParam0, int iParam1)
{
	if ((iParam1 >= 0 && iParam1 < 6) && &uParam0->f_818[iParam1] != 0)
	{
		if (!is_ped_injured(&(uParam0->f_818[iParam1])))
		{
			return true;
		}
	}
	return false;
}

bool func_1347(var uParam0)
{
	return &uParam0->f_79[0] == 8;
}

var func_1348(var uParam0)
{
	return uParam0->f_165;
}

bool func_1349(var uParam0)
{
	return is_bit_set(uParam0->f_79[0]->f_2, 3);
}

bool func_1350(var uParam0)
{
	return is_bit_set(uParam0->f_79[0]->f_2, 5);
}

bool func_1351(var uParam0, int iParam1)
{
	if (uParam0->f_376[iParam1]->f_17 == 0)
	{
		return false;
	}
	iVar0 = &uParam0->f_376[iParam1]->f_10[0];
	Var3 = 11;
	Var28 = 11;
	iVar56 = 0;
	while (iVar56 < uParam0->f_376[iParam1]->f_9)
	{
		iVar1 = &uParam0->f_376[iParam1]->f_2[iVar56];
		bVar2 = false;
		iVar57 = 0;
		while (iVar57 < uParam0->f_376[iParam1]->f_17)
		{
			if (&uParam0->f_376[iParam1]->f_10[iVar57] == iVar1)
			{
				bVar2 = true;
			}
			else
			{
				iVar57++;
			}
		}
		if (func_702(uParam0, iVar1) && !bVar2)
		{
			Var3 = { uParam0->f_39[iVar0]->f_31 };
			Var28 = { uParam0->f_39[iVar1]->f_31 };
			if (Var3.f_24 == Var28.f_24)
			{
				switch (Var3.f_24)
				{
					case 0:
						iVar53 = 1;
						break;
					case 1:
						iVar53 = 2;
						break;
					case 2:
						iVar53 = 4;
						break;
					case 3:
						iVar53 = 3;
						break;
					case 4:
						iVar53 = 5;
						break;
					case 5:
						iVar53 = 5;
						break;
					case 6:
						iVar53 = 5;
						break;
					case 7:
						iVar53 = 4;
						break;
					case 8:
						iVar53 = 5;
						break;
					case 9:
						iVar53 = 5;
						break;
					default:
						return false;
				}
				bVar55 = true;
				iVar54 = 0;
				while (iVar54 < iVar53)
				{
					if (&Var3[iVar54] != &Var28[iVar54])
					{
						bVar55 = false;
					}
					else
					{
						iVar54++;
					}
				}
				if (bVar55)
				{
					return true;
				}
			}
		}
		iVar56++;
	}
	return false;
}

bool func_1352(var uParam0)
{
	if (uParam0->f_485 > 0)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_485)
		{
			if (uParam0->f_376[0]->f_17 != uParam0->f_376[iVar0]->f_17)
			{
				return false;
			}
			iVar1 = 0;
			while (iVar1 < uParam0->f_376[iVar0]->f_17)
			{
				if (&uParam0->f_376[0]->f_10[iVar1] != &uParam0->f_376[iVar0]->f_10[iVar1])
				{
					return false;
				}
				iVar1++;
			}
			iVar0++;
		}
	}
	return true;
}

char* func_1353()
{
	return _create_var_string(2, "MGPKR_MSG_POT");
}

char* func_1354()
{
	return _create_var_string(2, "MGPKR_MSG_KICKER");
}

char* func_1355(int iParam0)
{
	if (iParam0 <= 1)
	{
		return _create_var_string(2, "MGPKR_MSG_PCOUNT_1");
	}
	if (iParam0 == 2)
	{
		return _create_var_string(2, "MGPKR_MSG_PCOUNT_2");
	}
	if (iParam0 == 3)
	{
		return _create_var_string(2, "MGPKR_MSG_PCOUNT_3");
	}
	if (iParam0 == 4)
	{
		return _create_var_string(2, "MGPKR_MSG_PCOUNT_4");
	}
	if (iParam0 == 5)
	{
		return _create_var_string(2, "MGPKR_MSG_PCOUNT_5");
	}
	if (iParam0 == 6)
	{
		return _create_var_string(2, "MGPKR_MSG_PCOUNT_6");
	}
	return _create_var_string(2, "MGPKR_MSG_PCOUNT_MULTIPLE");
}

int func_1356(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return -1;
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < uParam0->f_485)
		{
			iVar0 = 0;
			while (iVar0 < uParam0->f_376[iVar1]->f_17)
			{
				if (&uParam0->f_376[iVar1]->f_10[iVar0] == iParam1)
				{
					return iVar1;
				}
				iVar0++;
			}
			iVar1++;
		}
	}
	return -1;
}

char* func_1357(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		return _create_var_string(2, "MGPKR_MSG_POT");
	}
	if (iParam0 == 0)
	{
		return _create_var_string(2, "MGPKR_MSG_MAIN_POT");
	}
	if (iParam0 == 1 && iParam1 == 2)
	{
		return _create_var_string(2, "MGPKR_MSG_SIDE_POT");
	}
	return _create_var_string(10, "MGPKR_MSG_NTH_SIDE_POT", func_1368(iParam0));
}

int func_1358(var uParam0)
{
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = 0;
	while (iVar2 < uParam0->f_485)
	{
		if (uParam0->f_376[iVar2]->f_17 > 0)
		{
			if (iVar0 < &uParam0->f_376[iVar2] || iVar1 == -1)
			{
				iVar0 = &uParam0->f_376[iVar2];
				iVar1 = iVar2;
			}
		}
		iVar2++;
	}
	return iVar1;
}

char* func_1359()
{
	return _create_var_string(2, "MGPKR_MSG_LARGEST_POT");
}

void func_1360(int iParam0)
{
	Var0 = { func_1226(-1892463704, iParam0) };
	Var2 = { func_1226(-2115175355, iParam0) };
	Var4 = { func_1226(-23039984, iParam0) };
	_0x6a0184e904cdf25e(&Var0, 1);
	_0x6a0184e904cdf25e(&Var2, 1);
	iVar6 = 0;
	if (stat_id_get_int(&Var2, &iVar6))
	{
		_0x91a4f58e01ed5e4c(&Var4, iVar6);
	}
	stat_id_get_int(&Var0, &uVar7);
	stat_id_get_int(&Var2, &uVar8);
	stat_id_get_int(&Var4, &uVar9);
}

void func_1361(int iParam0)
{
	Var0 = { func_1226(1374282888, iParam0) };
	Var2 = { func_1226(-2115175355, iParam0) };
	_0x6a0184e904cdf25e(&Var0, 1);
	_0x0fee2561120f3333(&Var2);
	stat_id_get_int(&Var0, &uVar4);
	stat_id_get_int(&Var2, &uVar5);
}

bool func_1362(float fParam0)
{
	return fParam0 >= 0.5f;
}

bool func_1363(float fParam0)
{
	return (fParam0 >= 0.25f && fParam0 < 0.5f);
}

bool func_1364(float fParam0)
{
	return fParam0 < 0.25f;
}

int func_1365(var uParam0, int iParam1)
{
	return uParam0->f_307[iParam1]->f_2;
}

char* func_1366(var uParam0, int iParam1)
{
	return _create_var_string(2, "MGPKR_INFO_OUTCOME_STEAL", func_1451(uParam0, iParam1));
}

struct<8> func_1367(char* sParam0)
{
	StringCopy(&cVar0, sParam0, 64);
	return cVar0;
}

char* func_1368(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return _create_var_string(2, "MGPKR_MSG_NTH_MAIN");
		case 1:
			return _create_var_string(2, "MGPKR_MSG_NTH_1ST");
		case 2:
			return _create_var_string(2, "MGPKR_MSG_NTH_2ND");
		case 3:
			return _create_var_string(2, "MGPKR_MSG_NTH_3RD");
		case 4:
			return _create_var_string(2, "MGPKR_MSG_NTH_4TH");
		case 5:
			return _create_var_string(2, "MGPKR_MSG_NTH_5TH");
		case 6:
			return _create_var_string(2, "MGPKR_MSG_NTH_6TH");
		default:
			break;
	}
	return _create_var_string(2, "MGPKR_MSG_NTH_MAIN");
}

int func_1369(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_376[iParam2]->f_17)
	{
		if (&uParam0->f_376[iParam2]->f_10[iVar0] == iParam1)
		{
			return (&uParam0->f_376[iParam2] / uParam0->f_376[iParam2]->f_17);
		}
		iVar0++;
	}
	return 0;
}

bool func_1370(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0->f_307[iParam1]->f_1, iParam2);
}

var func_1371(var uParam0, int iParam1)
{
	return &(uParam0->f_376[iParam1]);
}

char* func_1372()
{
	return _create_var_string(2, "MGPKR_INFO_MUCK");
}

bool func_1373(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_376[iParam2]->f_17)
	{
		if (&uParam0->f_376[iParam2]->f_10[iVar0] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1374(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return false;
	}
	return is_bit_set(uParam0->f_1618, iParam1);
}

void func_1375(var uParam0, int iParam1)
{
	uParam0->f_2011[iParam1] = 0;
}

bool func_1376(var uParam0, int iParam1)
{
	if (!uParam0->f_118)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return false;
	}
	if (!uParam0[iParam1])
	{
		return false;
	}
	return (is_bit_set(uParam0->f_133, iParam1) && (*uParam0)[iParam1]->f_12 < 0);
}

bool func_1377(var uParam0, int iParam1)
{
	if (!uParam0->f_118)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return false;
	}
	if (!uParam0[iParam1])
	{
		return false;
	}
	return (is_bit_set(uParam0->f_133, iParam1) && (*uParam0)[iParam1]->f_12 > 0);
}

bool func_1378(var uParam0, int iParam1)
{
	if (!uParam0->f_118)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return false;
	}
	if (!uParam0[iParam1])
	{
		return false;
	}
	return (*uParam0)[iParam1]->f_12 >= 3;
}

bool func_1379(var uParam0, int iParam1)
{
	if (!uParam0->f_118)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return false;
	}
	if (!uParam0[iParam1])
	{
		return false;
	}
	return -(*uParam0)[iParam1]->f_12 >= 3;
}

bool func_1380(var uParam0, int iParam1)
{
	if (!uParam0->f_118)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return false;
	}
	if (!uParam0[iParam1])
	{
		return false;
	}
	return (*uParam0)[iParam1]->f_12 > 0;
}

bool func_1381(var uParam0, int iParam1)
{
	if (!uParam0->f_118)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return false;
	}
	if (!uParam0[iParam1])
	{
		return false;
	}
	return (*uParam0)[iParam1]->f_12 < 0;
}

void func_1382(var uParam0)
{
	if (!uParam0->f_118)
	{
		return;
	}
	uParam0->f_133 = 0;
}

int func_1383(var uParam0, int iParam1)
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		iVar0 = (&uParam0->f_74[iParam1]->f_10[iVar1] + iVar0);
		iVar1++;
	}
	return iVar0;
}

bool func_1384(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return false;
	}
	return (is_bit_set(uParam0->f_1618, iParam1) && &uParam0->f_1619[iParam1] == iParam2);
}

bool func_1385(var uParam0, var uParam1)
{
	if (func_203(&(uParam1->f_416), uParam1->f_9) && func_625(uParam0, uParam1->f_9) == 0)
	{
		return true;
	}
	return false;
}

bool func_1386(var uParam0, var uParam1)
{
	return func_964() >= func_965(uParam0, uParam1->f_11.f_12);
}

var func_1387(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	return func_1217(sParam0, -1, iParam1, iParam2, 0, iParam3);
}

float func_1388(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return get_heading_from_vector_2d((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

void func_1389(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_1671.f_112 = iParam1;
	uParam0->f_1671.f_112.f_1 = iParam2;
	uParam0->f_1671.f_112.f_2 = iParam3;
	func_268(&(uParam0->f_1671.f_112.f_3));
}

int func_1390(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 6)
	{
	}
	else if (&uParam0->f_307[iParam1])
	{
	}
	else
	{
		uParam0->f_307[iParam1] = 1;
		uParam0->f_307[iParam1]->f_1 = 0;
		uParam0->f_307[iParam1]->f_2 = 0;
		StringCopy(&(uParam0->f_307[iParam1]->f_3), "", 128);
		uParam0->f_307[iParam1]->f_19 = 0;
		func_1420(uParam0, iParam1, &uVar0, &cVar16);
		func_1421(uParam0->f_34[iParam1], &uVar0);
		func_1422(uParam0->f_34[iParam1], &cVar16);
		func_1515(uParam0->f_34[iParam1], 1);
		func_1528(uParam0->f_34[iParam1], _create_var_string(2, "MGPKR_UI_CASH", 0));
		func_1466(uParam0->f_34[iParam1], " ");
		func_1512(uParam0->f_34[iParam1], 1);
		func_1511(uParam0->f_34[iParam1], 0);
		func_1529(uParam0->f_34[iParam1], -1);
		func_1530(uParam0->f_34[iParam1], 0);
		if (!uParam0->f_293)
		{
			func_1596(uParam0, iParam1);
		}
		iVar32 = 0;
		while (iVar32 < 2)
		{
			func_1517(uParam0->f_34[iParam1], iVar32, "");
			iVar32++;
		}
		return 1;
	}
	return 0;
}

var func_1391(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar17 = _show_simple_right_text(&Var0, &Var13, iParam5);
	return uVar17;
}

var func_1392(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1]->f_1;
}

var func_1393(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1]->f_2;
}

var func_1394(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1]->f_5;
}

bool func_1395(float fParam0)
{
	return fParam0 >= 0.8f;
}

char* func_1396()
{
	return _create_var_string(2, "MGPKR_INFO_LEAVING");
}

int func_1397(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 > iParam2 * 2)
	{
		return 0;
	}
	else if (iParam1 > iParam2)
	{
		return 1;
	}
	else if (iParam1 > 0)
	{
		return 2;
	}
	else
	{
		return 3;
	}
	return 2;
}

bool func_1398(var uParam0, int iParam1)
{
	return &uParam0->f_173[iParam1] != 0;
}

struct<2> func_1399(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

char* func_1400(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BANK_S1_01";
		case 1:
			return "BANK_S1_02";
		case 2:
			return "BANK_S1_03";
		case 3:
			return "BANK_S1_05";
		case 4:
			return "BANK_S1_04";
		default:
			break;
	}
	return "";
}

void func_1401(var uParam0, bool bParam1)
{
	_databinding_write_data_bool(uParam0->f_30, bParam1);
}

void func_1402(int iParam0, var uParam1, var uParam2)
{
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		iVar0 = 0;
		iVar1 = 0;
		iVar3 = iVar2 + 1;
		if (iVar2 == 0)
		{
		}
		else
		{
			if (iVar3 == 6)
			{
				iVar0 = 4;
				iVar1 = 0;
			}
			if (iVar0 == 0)
			{
				if (iParam0 <= func_1555(iVar2) * 4)
				{
					iVar0 = 4;
					iVar1 = 0;
				}
				else if (iParam0 <= (func_1555(iVar2) * 3 + func_1555(iVar3) * 1))
				{
					iVar0 = 3;
					iVar1 = 1;
				}
				else if (iParam0 <= (func_1555(iVar2) * 2 + func_1555(iVar3) * 2))
				{
					iVar0 = 2;
					iVar1 = 2;
				}
				else if (iParam0 <= (func_1555(iVar2) * 1 + func_1555(iVar3) * 3))
				{
					iVar0 = 1;
					iVar1 = 3;
				}
			}
			if (iVar0 > 0)
			{
			}
			else
			{
				iVar2++;
			}
			iVar4 = 0;
			while (iVar4 < 4)
			{
				if (iVar4 < iVar0)
				{
					(*uParam1)[iVar4] = iVar2;
				}
				else
				{
					(*uParam1)[iVar4] = iVar3;
				}
				iVar4++;
			}
			iVar5 = func_1151(iParam0, (iVar0 * func_1555(iVar2)));
			iVar4 = 0;
			while (iVar4 < 4)
			{
				if (iVar4 < iVar0)
				{
					(*uParam2)[iVar4] = (iVar5 / iVar0);
					if (iVar4 < (iVar5 % iVar0))
					{
						(*uParam2)[iVar4] = uParam2[iVar4] + 1;
					}
				}
				iVar4++;
			}
			iVar5 = (iParam0 - iVar5);
			iVar4 = 0;
			while (iVar4 < 4)
			{
				if (iVar4 >= iVar0)
				{
					(*uParam2)[iVar4] = (iVar5 / iVar1);
					if (iVar4 - iVar0) < (iVar5 % iVar1)
					{
						(*uParam2)[iVar4] = uParam2[iVar4] + 1;
					}
				}
				iVar4++;
			}
		}
	}
}

void func_1403(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (uParam3[iVar0] > 0)
		{
			func_1318(uParam0, iParam1, iVar0, uParam2[iVar0], uParam3[iVar0], func_1160(uParam2[iVar0], uParam3[iVar0], 10), bParam4, 0);
		}
		else
		{
			func_1405(uParam0, iParam1, iVar0, bParam4);
		}
		iVar0++;
	}
}

void func_1404(var uParam0, int iParam1)
{
	if (uParam0->f_818[iParam1]->f_53)
	{
	}
	else
	{
		uParam0->f_818[iParam1]->f_53 = 1;
		_0x99b2a2e3655deaf1(&(uParam0->f_818[iParam1]), "PokerSeatedNoCards");
		set_blocking_of_non_temporary_events(&(uParam0->f_818[iParam1]), false);
		set_ped_can_ragdoll(&(uParam0->f_818[iParam1]), true);
	}
}

void func_1405(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (does_entity_exist(uParam0->f_74[iParam1][iParam2]))
	{
		if (bParam3)
		{
			func_1585(uParam0, iParam1, iParam2, 2);
		}
		else if (does_entity_exist(uParam0->f_74[iParam1][iParam2]))
		{
			delete_object((*uParam0->f_74[iParam1])[iParam2]);
			_0x341cdd17efc2472e(iParam1, iParam2);
		}
	}
	(*uParam0->f_74[iParam1])[iParam2] = 0;
	uParam0->f_74[iParam1]->f_5[iParam2] = 0;
	uParam0->f_74[iParam1]->f_10[iParam2] = 0;
}

bool func_1406(var uParam0, int iParam1)
{
	if ((iParam1 >= 0 && iParam1 < 6) && &uParam0->f_818[iParam1] != 0)
	{
		iVar0 = &uParam0->f_818[iParam1];
		if (((((!is_ped_injured(iVar0) && !is_ambient_speech_playing(iVar0)) && uParam0->f_818[iParam1]->f_1 != 0) && uParam0->f_818[iParam1]->f_8 != 4) && uParam0->f_818[iParam1]->f_8 != 29) && uParam0->f_818[iParam1]->f_8 != 30)
		{
			return true;
		}
	}
	return false;
}

int func_1407(var uParam0)
{
	iVar0 = 63;
	if (uParam0->f_8 != -1f)
	{
		if (*uParam0 != 0 && get_game_timer() < (*uParam0 + round((uParam0->f_8 * 1000f))))
		{
			return 0;
		}
	}
	if (uParam0->f_9 != -1f)
	{
		iVar1 = 0;
		while (iVar1 < 6)
		{
			if (&uParam0->f_1[iVar1] != 0 && get_game_timer() < (&uParam0->f_1[iVar1] + round((uParam0->f_9 * 1000f))))
			{
				clear_bit(&iVar0, iVar1);
			}
			iVar1++;
		}
	}
	return iVar0;
}

bool func_1408(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	iVar0 = get_random_int_in_range(0, 60000);
	if (iVar0 < iParam4 * 600)
	{
		iVar8 = 0;
		iVar9 = 0;
		while (iVar9 < 6)
		{
			if (is_bit_set(iParam1, iVar9))
			{
				iVar1[iVar8] = iVar9;
				iVar8++;
			}
			iVar9++;
		}
		if (iVar8 > 0)
		{
			iVar9 = &iVar1[get_random_int_in_range(0, iVar8)];
			iVar10 = 0;
			while (iVar10 < 6)
			{
				if (is_bit_set(iParam1, iVar9))
				{
					*iParam6 = -1;
					iVar12 = get_random_int_in_range(0, 6);
					iVar11 = 0;
					while (iVar11 < 6)
					{
						if (is_bit_set(iParam3, iVar12) && iVar12 != iVar9)
						{
							*iParam6 = iVar12;
						}
						else
						{
							iVar12 = (iVar12 + 1 % 6);
							iVar11++;
						}
					}
					if (func_1239(&(uParam0->f_152), &(uParam0->f_152.f_1671), &(uParam0->f_2841), &(uParam0->f_152.f_416), iVar9, 1, *iParam6))
					{
						if (_0x61b2aaef645ddaf0(uParam0->f_2841.f_807, sParam2, &(uParam0->f_2841.f_818[iVar9]), 0, uParam0->f_2841.f_40))
						{
							*iParam5 = iVar9;
							return true;
						}
					}
				}
				iVar9 = (iVar9 + 1 % 6);
				iVar10++;
			}
		}
		return false;
	}
	return false;
}

bool func_1409(var uParam0, int iParam1)
{
	if ((uParam0->f_8 != -1f && *uParam0 != 0) && get_game_timer() < (*uParam0 + round((uParam0->f_8 * 1000f))))
	{
		return false;
	}
	if ((((iParam1 >= 0 && iParam1 < 6) && uParam0->f_9 != -1f) && &uParam0->f_1[iParam1] != 0) && get_game_timer() < (&uParam0->f_1[iParam1] + round((uParam0->f_9 * 1000f))))
	{
		return false;
	}
	return true;
}

bool func_1410(var uParam0)
{
	return uParam0->f_146 != uParam0->f_148;
}

bool func_1411(var uParam0, int iParam1)
{
	return is_bit_set(uParam0->f_146, iParam1) != is_bit_set(uParam0->f_148, iParam1);
}

var func_1412(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1]->f_6;
}

bool func_1413(float fParam0)
{
	return fParam0 > 0f;
}

char* func_1414(var uParam0)
{
	iVar0 = get_random_int_in_range(0, 3);
	switch (iVar0)
	{
		case 0:
			return "PBL_TAKE_POT_A";
		case 1:
			return "PBL_TAKE_POT_B";
		case 2:
			return "PBL_TAKE_POT_C";
		default:
			break;
	}
	return "PBL_TAKE_POT_A";
}

void func_1415(var uParam0)
{
	if (uParam0->f_41 == 0)
	{
	}
	else if (uParam0->f_41 == 1)
	{
		uParam0->f_41 = 2;
	}
}

void func_1416(var uParam0, int iParam1)
{
	if (&uParam0->f_818[iParam1] == 0)
	{
	}
	else if (uParam0->f_818[iParam1]->f_50)
	{
	}
	else
	{
		func_471(uParam0, iParam1, 28);
	}
}

void func_1417(var uParam0, var uParam1)
{
	if (!is_mp_gamer_tag_active(*uParam1))
	{
		return;
	}
	_set_mp_gamer_tag_visibility(*uParam1, func_1597(uParam0));
}

void func_1418(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_34)
	{
		if (&uParam0->f_34[iVar0])
		{
			_databinding_write_data_bool(uParam0->f_34[iVar0]->f_6, iVar0 == iParam1);
		}
		iVar0++;
	}
	uParam0->f_162 = iParam1;
	uParam0->f_161 = get_frame_count() + 30;
}

int func_1419(char* sParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 1;
	}
	iVar0 = int_to_playerindex(iParam1);
	if (!network_is_player_active(iVar0))
	{
		return 1;
	}
	StringCopy(sParam0, "", 128);
	iVar2 = func_1194(iParam1, iParam2);
	switch (iParam2)
	{
		case 0:
			network_handle_from_player(int_to_playerindex(iParam1), &uVar3);
			if (!network_is_handle_valid(&uVar3))
			{
				return 1;
			}
			StringCopy(sParam0, _0xb5c4b18b12a2af23(&uVar3, iParam2), 128);
			return 4;
		case 1:
		case 2:
			switch (iVar2)
			{
				case 0:
				default:
					return 1;
					return 2;
				case 1:
					return 3;
				case 2:
					iVar10 = func_1598(iParam2);
					iVar1 = _local_player_pedshot_texture_download_request(iParam1, iVar10);
					if (iVar1 == -1)
					{
						return 3;
					}
					else if (iVar1 == 0)
					{
						func_1196(iParam1, iParam2, 0);
						return 1;
					}
					func_1195(iParam1, iParam2, iVar1);
					func_1196(iParam1, iParam2, 3);
					break;
				case 3:
					iVar1 = func_1197(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_1196(iParam1, iParam2, 0);
						return 1;
					}
					iVar11 = _get_status_of_texture_download(iVar1);
					switch (iVar11)
					{
						case 0:
							func_1196(iParam1, iParam2, 4);
							return 3;
						case 1:
							return 3;
						case 2:
							func_1196(iParam1, iParam2, 0);
							return 1;
						default:
							break;
					}
					break;
				case 4:
					iVar1 = func_1197(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_1196(iParam1, iParam2, 0);
						return 1;
					}
					sVar12 = texture_download_get_name(iVar1);
					if (_0x375f5870a7b8bec1(sVar12))
					{
						return 3;
					}
					func_1196(iParam1, iParam2, 5);
					break;
				case 5:
					iVar1 = func_1197(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_1196(iParam1, iParam2, 0);
						return 1;
					}
					StringCopy(sParam0, texture_download_get_name(iVar1), 128);
					return 4;
			}
			break;
	}
	return 3;
}

void func_1420(var uParam0, int iParam1, char* sParam2, char* sParam3)
{
	switch (&uParam0->f_173[iParam1])
	{
		case 0:
			StringCopy(sParam2, "avatar_generic", 128);
			StringCopy(sParam3, "minigames_hud", 128);
			break;
		case 3:
			*sParam2 = { *uParam0->f_194[iParam1] };
			*sParam3 = { *uParam0->f_194[iParam1] };
			break;
		case 1:
		case 2:
		case 4:
		default:
			StringCopy(sParam2, "avatar_generic", 128);
			StringCopy(sParam3, "minigames_hud", 128);
			break;
	}
}

void func_1421(var uParam0, char* sParam1)
{
	if (*uParam0 == 0)
	{
		return;
	}
	_databinding_write_data_string(uParam0->f_3, sParam1);
}

void func_1422(var uParam0, char[4] cParam1)
{
	if (*uParam0 == 0)
	{
		return;
	}
	_databinding_write_data_string(uParam0->f_2, cParam1);
}

void func_1423(var uParam0, int iParam1)
{
	set_bit(&(uParam0->f_6), iParam1);
}

bool func_1424()
{
	return (_does_anim_scene_exist(Global_26538) && _is_anim_scene_started(Global_26538, false));
}

int func_1425()
{
	return Global_1301323->f_150.f_4;
}

void func_1426(vector3 vParam0)
{
	if (Global_1139381->f_5079.f_325 >= 50)
	{
		return;
	}
	if (vParam0.x == -1)
	{
		return;
	}
	*Global_1139381->f_5079.f_326[Global_1139381->f_5079.f_324] = { vParam0 };
	Global_1139381->f_5079.f_324 = (Global_1139381->f_5079.f_324 + 1 % 50);
	Global_1139381->f_5079.f_325++;
}

void func_1427(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	*uParam0 = 186;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	trigger_script_event(1, uParam0, 8, 3, &uParam1);
}

void func_1428(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (bParam5)
		{
			_set_random_outfit_variation(iParam0, true);
			bVar0 = true;
		}
	}
	if (is_ped_human(iParam0))
	{
		if (bParam6)
		{
			_0x899a04afcc725d04(iParam0, _0xd42514c182121c23(iParam1));
		}
		if (is_ped_male(iParam0) && !bParam3)
		{
			func_1599(iParam0, 0, 1);
		}
		set_ped_config_flag(iParam0, 502, true);
	}
	else if (_is_this_model_a_horse(get_entity_model(iParam0)))
	{
		if (!bParam5)
		{
			_set_ped_outfit_preset(iParam0, 0, 0);
			bVar0 = true;
		}
		if (bParam4)
		{
			func_1600(iParam0, 0);
			bVar0 = true;
		}
		func_1601(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

int func_1429(int iParam0, bool bParam1)
{
	if (iParam0 == 1)
	{
		return 6;
	}
	else if (iParam0 == 3)
	{
		return 4;
	}
	else if (iParam0 == 2 || iParam0 == 0)
	{
		if (bParam1)
		{
			return 8;
		}
		else
		{
			return 12;
		}
	}
	return 0;
}

int func_1430(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam0 == 1)
	{
		if (iParam2 == -1)
		{
			iParam2 = get_random_int_in_range(0, 6);
		}
		switch (iParam1)
		{
			case 74:
				switch (iParam2)
				{
					case 0:
						return -1043092861;
					case 1:
						return -855293722;
					case 2:
						return 1321911407;
					case 3:
						return 1633413521;
					case 4:
						return -216756988;
					case 5:
						return 368759504;
					default:
						break;
				}
				return -1043092861;
			case 5:
				switch (iParam2)
				{
					case 0:
						return 68127406;
					case 1:
						return 912158539;
					case 2:
						return 629329300;
					case 3:
						return 1371088384;
					case 4:
						return 1263868216;
					case 5:
						return 2106064285;
					default:
						break;
				}
				return 68127406;
			case 40:
				switch (iParam2)
				{
					case 0:
						return 316456870;
					case 1:
						return -661468397;
					case 2:
						return -431954321;
					case 3:
						return -1139797490;
					case 4:
						return -875384429;
					case 5:
						return 436555239;
					default:
						break;
				}
				return 316456870;
		}
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == -1)
		{
			iParam2 = get_random_int_in_range(0, 4);
		}
		switch (iParam1)
		{
			case 81:
				switch (iParam2)
				{
					case 0:
						return -435547108;
					case 1:
						return -128698192;
					case 2:
						return 226255616;
					case 3:
						return -478015708;
					default:
						break;
				}
				return -435547108;
			case 26:
				switch (iParam2)
				{
					case 0:
						return 1752053992;
					case 1:
						return 2013845533;
					case 2:
						return -1950122094;
					case 3:
						return 496214832;
					default:
						break;
				}
				return 1752053992;
			case 98:
				switch (iParam2)
				{
					case 0:
						return 1194574257;
					case 1:
						return 2093821155;
					case 2:
						return -1582008655;
					case 3:
						return -1887776194;
					default:
						break;
				}
				return 1194574257;
		}
	}
	else if (iParam0 == 2 || iParam0 == 0)
	{
		if (bParam3)
		{
			if (iParam2 == -1)
			{
				iParam2 = get_random_int_in_range(0, 8);
			}
			switch (iParam1)
			{
				case 5:
					switch (iParam2)
					{
						case 0:
							return 68127406;
						case 1:
							return 912158539;
						case 2:
							return 629329300;
						case 3:
							return 1371088384;
						case 4:
							return 1263868216;
						case 5:
							return 2106064285;
						case 6:
							return 1754977219;
						case 7:
						default:
							break;
					}
					return -1726696266;
				case 40:
					switch (iParam2)
					{
						case 0:
							return 316456870;
						case 1:
							return -661468397;
						case 2:
							return -431954321;
						case 3:
							return -1139797490;
						case 4:
							return -875384429;
						case 5:
							return 436555239;
						case 6:
							return 666823002;
						case 7:
						default:
							break;
					}
					return 4921971;
				case 121:
					switch (iParam2)
					{
						case 0:
							return 2098938291;
						case 1:
							return 1839440580;
						case 2:
							return 680401050;
						case 3:
							return -1892751910;
						case 4:
							return 1174655877;
						case 5:
							return 979024947;
						case 6:
							return -240866616;
						case 7:
						default:
							break;
					}
					return 1469806260;
				case 81:
					switch (iParam2)
					{
						case 0:
							return -435547108;
						case 1:
							return -128698192;
						case 2:
							return 226255616;
						case 3:
							return -478015708;
						case 4:
							return -194891548;
						case 5:
							return 112776593;
						case 6:
							return 411040031;
						case 7:
						default:
							break;
					}
					return -1387257155;
				case 98:
					switch (iParam2)
					{
						case 0:
							return 1194574257;
						case 1:
							return 2093821155;
						case 2:
							return -1582008655;
						case 3:
							return -1887776194;
						case 4:
							return -967360518;
						case 5:
							return -1276208343;
						case 6:
							return -506398995;
						case 7:
						default:
							break;
					}
					return -815574510;
				case 111:
					switch (iParam2)
					{
						case 0:
							return -1449777556;
						case 1:
							return 1700437490;
						case 2:
							return -2029723322;
						case 3:
							return 1088279801;
						case 4:
							return 1949514659;
						case 5:
							return 772091720;
						case 6:
							return 1338340040;
						case 7:
						default:
							break;
					}
					return -321409750;
				case 80:
					switch (iParam2)
					{
						case 0:
							return -1600439903;
						case 1:
							return 1508387900;
						case 2:
							return 1147797824;
						case 3:
							return 1947066503;
						case 4:
							return 1716995354;
						case 5:
							return 401713232;
						case 6:
							return 163056605;
						case 7:
						default:
							break;
					}
					return 1032745865;
			}
		}
		else
		{
			if (iParam2 == -1)
			{
				iParam2 = get_random_int_in_range(0, 12);
			}
			switch (iParam1)
			{
				case 5:
					switch (iParam2)
					{
						case 0:
							return 68127406;
						case 1:
							return 912158539;
						case 2:
							return 629329300;
						case 3:
							return 1371088384;
						case 4:
							return 1263868216;
						case 5:
							return 2106064285;
						case 6:
							return 1754977219;
						case 7:
							return -1726696266;
						case 8:
							return -1978394955;
						case 9:
							return -820633060;
						case 10:
							return -44073298;
						case 11:
							return -342303967;
						default:
							break;
					}
					return 68127406;
				case 40:
					switch (iParam2)
					{
						case 0:
							return 316456870;
						case 1:
							return -661468397;
						case 2:
							return -431954321;
						case 3:
							return -1139797490;
						case 4:
							return -875384429;
						case 5:
							return 436555239;
						case 6:
							return 666823002;
						case 7:
							return 4921971;
						case 8:
							return 251738079;
						case 9:
							return 478204342;
						case 10:
							return 777155929;
						case 11:
							return 1841389;
						default:
							break;
					}
					return 316456870;
				case 121:
					switch (iParam2)
					{
						case 0:
							return 2098938291;
						case 1:
							return 1839440580;
						case 2:
							return 680401050;
						case 3:
							return -1892751910;
						case 4:
							return 1174655877;
						case 5:
							return 979024947;
						case 6:
							return -240866616;
						case 7:
							return 1469806260;
						case 8:
							return 317713758;
						case 9:
							return 1934601404;
						case 10:
							return 487194674;
						case 11:
							return -1833636986;
						default:
							break;
					}
					return 2098938291;
				case 81:
					switch (iParam2)
					{
						case 0:
							return -435547108;
						case 1:
							return -128698192;
						case 2:
							return 226255616;
						case 3:
							return -478015708;
						case 4:
							return -194891548;
						case 5:
							return 112776593;
						case 6:
							return 411040031;
						case 7:
							return -1387257155;
						case 8:
							return -1087322498;
						case 9:
							return 2089668521;
						case 10:
							return 1791437852;
						case 11:
							return 1426194578;
						default:
							break;
					}
					return -435547108;
				case 98:
					switch (iParam2)
					{
						case 0:
							return 1194574257;
						case 1:
							return 2093821155;
						case 2:
							return -1582008655;
						case 3:
							return -1887776194;
						case 4:
							return -967360518;
						case 5:
							return -1276208343;
						case 6:
							return -506398995;
						case 7:
							return -815574510;
						case 8:
							return 104710086;
						case 9:
							return -1562249180;
						case 10:
							return -1812506033;
						case 11:
							return -1431009331;
						default:
							break;
					}
					return 1194574257;
				case 111:
					switch (iParam2)
					{
						case 0:
							return -1449777556;
						case 1:
							return 1700437490;
						case 2:
							return -2029723322;
						case 3:
							return 1088279801;
						case 4:
							return 1949514659;
						case 5:
							return 772091720;
						case 6:
							return 1338340040;
						case 7:
							return -321409750;
						case 8:
							return -1233239944;
						case 9:
							return 1051251111;
						case 10:
							return -262949646;
						case 11:
							return -726499920;
						default:
							break;
					}
					return -1449777556;
				case 80:
					switch (iParam2)
					{
						case 0:
							return -1600439903;
						case 1:
							return 1508387900;
						case 2:
							return 1147797824;
						case 3:
							return 1947066503;
						case 4:
							return 1716995354;
						case 5:
							return 401713232;
						case 6:
							return 163056605;
						case 7:
							return 1032745865;
						case 8:
							return 793499396;
						case 9:
							return 883482182;
						case 10:
							return 1123711721;
						case 11:
							return -903083698;
						default:
							break;
					}
					return -1600439903;
			}
		}
	}
	return 0;
}

void func_1431(int iParam0, int iParam1)
{
	if (!func_960(iParam0))
	{
		return;
	}
	bVar0 = func_514() == func_1433(iParam0);
	Global_1051439->f_72[iParam1]->f_65 = -1;
	if (func_1602(iParam0, 1048576))
	{
		func_1603(iParam0, 1);
		func_1603(iParam0, 4);
		if (bVar0)
		{
			func_1604(iParam1, 256);
			func_1604(iParam1, 512);
			Global_1051439->f_72[iParam1]->f_65 = 4;
		}
		return;
	}
	iVar1 = func_1433(iParam0);
	if (iVar1 != -1 && func_1434(iVar1, 255))
	{
		func_1603(iParam0, 1);
		func_1603(iParam0, 4);
		if (bVar0)
		{
			func_1604(iParam1, 256);
			func_1604(iParam1, 512);
			Global_1051439->f_72[iParam1]->f_65 = 4;
		}
		return;
	}
	if (func_1432(iParam1) || func_1435(iParam0) == 1)
	{
		func_1603(iParam0, 1);
		func_1603(iParam0, 4);
		func_1604(iParam1, 256);
		func_1604(iParam1, 512);
		Global_1051439->f_72[iParam1]->f_65 = 0;
		return;
	}
	if (iParam1 == 38 && !func_1605(iParam0))
	{
		func_1603(iParam0, 1);
		func_1603(iParam0, 4);
		if (bVar0)
		{
			func_1604(iParam1, 256);
			func_1604(iParam1, 512);
			Global_1051439->f_72[iParam1]->f_65 = 4;
		}
		return;
	}
	if (func_1606())
	{
		func_1604(iParam1, 256);
		func_1604(iParam1, 512);
		Global_1051439->f_72[iParam1]->f_65 = 0;
		return;
	}
	iVar2 = func_382(iParam0);
	if (iVar2 != 0 && (!_unlock_is_visible(iVar2) || !_unlock_is_unlocked(iVar2)))
	{
		func_1603(iParam0, 1);
		func_1603(iParam0, 4);
		if (bVar0)
		{
			func_1604(iParam1, 256);
			func_1604(iParam1, 512);
			Global_1051439->f_72[iParam1]->f_65 = 10;
		}
		return;
	}
	bVar3 = true;
	if (func_1602(iParam0, 1))
	{
		func_1607(iParam0, 1);
	}
	if (func_1602(iParam0, 4))
	{
		func_1607(iParam0, 4);
	}
	iVar4 = Global_1915715->f_20343;
	if (bVar3 && Global_1915715->f_20343 & 128 == 128)
	{
		if (!func_1608(iParam1, 536870912))
		{
			Global_1051439->f_72[iParam1]->f_65 = 13;
			bVar3 = false;
		}
	}
	if (bVar3 && Global_1915715->f_20343 & 8192 == 8192)
	{
		if (iParam1 == 29)
		{
			Global_1051439->f_72[iParam1]->f_65 = 14;
			bVar3 = false;
		}
	}
	if (bVar3 && Global_1915715->f_20343 & 2048 == 2048)
	{
		Global_1051439->f_72[iParam1]->f_65 = 15;
		bVar3 = false;
	}
	func_1609(&iVar4, 2194);
	if (bVar3 && iVar4 != 0)
	{
		bVar3 = false;
	}
	if (((bVar3 && (iParam1 != 28 && iParam1 != 29)) && !Global_1051439->f_72[iParam1]->f_48) && !Global_1051439->f_72[iParam1]->f_49 & 16384 != 0)
	{
		Global_1051439->f_72[iParam1]->f_65 = 6;
		bVar3 = false;
	}
	if (bVar3)
	{
		func_1610(iParam1, 256);
		func_1610(iParam1, 512);
	}
	else
	{
		func_1604(iParam1, 256);
		func_1604(iParam1, 512);
	}
}

bool func_1432(int iParam0)
{
	if (iParam0 == 28 && !func_1611(64))
	{
		return true;
	}
	if (iParam0 == 35)
	{
		if (!func_1612(1))
		{
			return true;
		}
		if (func_1613(0, 0, 1))
		{
			return true;
		}
	}
	if (func_1614(4, 255))
	{
		if (Global_1051439->f_72[iParam0]->f_49 & 1073741824 != 0)
		{
		}
		else
		{
			return true;
		}
	}
	if (func_1615())
	{
		if (!func_1616())
		{
			return true;
		}
		if (iParam0 == 38)
		{
			return true;
		}
	}
	if (func_1617(player_id()))
	{
		if (iParam0 == 39)
		{
			Var0 = -1;
			Var0.f_1 = -1;
			Var0 = { func_246(0) };
			if (func_247(Var0))
			{
				if (func_1618(Var0) == -20166336)
				{
					return false;
				}
				else
				{
					return true;
				}
			}
		}
		else
		{
			return true;
		}
	}
	if (Global_1071686->f_28778)
	{
		return true;
	}
	return false;
}

int func_1433(int iParam0)
{
	if (!func_960(iParam0))
	{
		return -1;
	}
	if (iParam0 == 40 && func_514() == 139)
	{
		return 139;
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 129:
			return 83;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 122:
		case 123:
			return 40;
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 140:
			return 74;
		case 26:
			return 3;
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 124:
		case 125:
			return 5;
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 126:
			return 111;
		case 27:
		case 28:
			return 23;
		case 41:
			return 107;
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 127:
			return 26;
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
		case 91:
		case 120:
		case 121:
			return 81;
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 128:
			return 98;
		case 3:
			return 13;
		case 155:
		case 156:
		case 157:
		case 158:
			return 84;
		case 159:
		case 160:
		case 161:
		case 162:
		case 163:
			return 104;
		case 4:
			return 14;
		case 164:
		case 165:
		case 166:
		case 167:
			return 76;
		case 168:
		case 169:
		case 170:
		case 171:
			return 4;
		case 40:
			return 95;
		case 172:
		case 173:
		case 174:
		case 175:
			return 9;
		case 76:
			return 119;
		case 99:
		case 100:
		case 101:
			return 28;
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
			return 121;
		case 108:
		case 109:
		case 110:
		case 111:
		case 112:
			return 127;
		case 115:
		case 116:
			return 130;
		case 117:
		case 118:
			return 123;
		case 132:
			return 87;
		case 130:
		case 131:
			return 136;
		case 64:
			return 76;
		case 65:
			return 104;
		case 66:
			return 9;
		case 67:
			return 84;
		case 113:
			return 96;
		case 114:
			return 29;
		case 135:
			return 126;
		case 136:
			return 133;
		case 137:
			return 137;
		case 138:
			return 39;
		case 139:
			return 16;
		case 141:
			return 76;
		case 142:
			return 61;
		case 143:
			return 100;
		case 144:
			return 34;
		case 145:
			return 43;
		case 146:
			return 85;
		case 149:
			return 138;
		case 150:
			return 25;
		case 151:
			return 3;
		case 148:
			return 134;
		case 20:
			return -1;
		case 134:
			return -1;
		default:
			break;
	}
	return -1;
}

bool func_1434(int iParam0, int iParam1)
{
	if (func_505() == -1)
	{
		return false;
	}
	if (iParam1 == 255)
	{
		iParam1 = network_player_id_to_int();
	}
	if (iParam1 < 0 || iParam0 == -1)
	{
		return false;
	}
	iVar0 = func_1619(&((*Global_1197355)[iParam1]->f_4), iParam0, 30, 1, 7);
	if (iVar0 == 1)
	{
		return true;
	}
	return false;
}

int func_1435(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_453(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (Global_1051439->f_4682[iVar1]->f_2 != 0 && (&Global_1051439->f_4682[iVar1] == iParam0 || Global_1051439->f_4682[iVar1]->f_1 == iVar0))
		{
			if (Global_1051439->f_4682[iVar1]->f_3 < (get_frame_count() - 1))
			{
				if (Global_1051439->f_4682[iVar1]->f_4 > 0f)
				{
					if (iVar0 == 30 || iVar0 == 31)
					{
						iVar2 = 0;
						while (iVar2 < 4)
						{
							if (&Global_1051439->f_3634[iVar2] == -1 || ((&Global_1051439->f_4682[iVar1] != -1 && &Global_1051439->f_4682[iVar1] != &Global_1051439->f_3634[iVar2]) && &Global_1051439->f_4682[iVar1] != Global_1051439->f_3634[iVar2]->f_9))
							{
							}
							else if (vdist2(Global_35, Global_1051439->f_3634[iVar2]->f_2) > Global_1051439->f_4682[iVar1]->f_4)
							{
								Global_1051439->f_4682[iVar1]->f_2 = 0;
							}
							else
							{
								iVar2++;
							}
						}
					}
					else if (vdist2(Global_35, Global_1051439->f_72[iVar0]->f_3) > Global_1051439->f_4682[iVar1]->f_4)
					{
						Global_1051439->f_4682[iVar1]->f_2 = 0;
					}
				}
				else
				{
					Global_1051439->f_4682[iVar1]->f_2 = 0;
				}
			}
			return Global_1051439->f_4682[iVar1]->f_2;
		}
		iVar1++;
	}
	return 0;
}

void func_1436(var uParam0)
{
	iVar0 = func_453(*uParam0);
	if (does_entity_exist(uParam0->f_4) && !func_1608(iVar0, 65536))
	{
		if (!_0x88ad6cc10d8d35b2(uParam0->f_4))
		{
			set_entity_as_mission_entity(uParam0->f_4, true, true);
		}
		delete_entity(&(uParam0->f_4));
	}
	if (iVar0 == 30)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (&Global_1051439->f_3634[iVar1] == *uParam0)
			{
				if (does_entity_exist(Global_1051439->f_3634[iVar1]->f_8))
				{
					if (!_0x88ad6cc10d8d35b2(Global_1051439->f_3634[iVar1]->f_8))
					{
						set_entity_as_mission_entity(Global_1051439->f_3634[iVar1]->f_8, true, true);
					}
					delete_ped(&(Global_1051439->f_3634[iVar1]->f_8));
				}
				if (does_entity_exist(Global_1051439->f_3634[iVar1]->f_15))
				{
					if (!_0x88ad6cc10d8d35b2(Global_1051439->f_3634[iVar1]->f_15))
					{
						set_entity_as_mission_entity(Global_1051439->f_3634[iVar1]->f_15, true, true);
					}
					delete_ped(&(Global_1051439->f_3634[iVar1]->f_15));
				}
			}
			else
			{
				iVar1++;
			}
		}
	}
	if (func_1620(iVar0, 2097152))
	{
		if (_does_propset_exist(uParam0->f_15))
		{
			_delete_propset(uParam0->f_15, true, true);
		}
		if (does_entity_exist(uParam0->f_16))
		{
			delete_entity(&(uParam0->f_16));
		}
		func_1621(*uParam0, &uVar2, &iVar10);
		if (!is_string_null_or_empty(&uVar2))
		{
			set_ambient_zone_state(&uVar2, false, true);
		}
		if (iVar10 != 0)
		{
			func_1622(iVar10);
		}
	}
	func_1604(iVar0, 2097152);
	uParam0->f_10 = 0;
	if (((func_1620(iVar0, 16384) && func_514() != func_1433(*uParam0)) && func_514() != Global_1051439->f_72[iVar0]->f_2) && func_1623(iVar0))
	{
		if (_does_scenario_point_exist(Global_1051439->f_72[iVar0]->f_6))
		{
			iVar11 = _get_scenario_point_entity(Global_1051439->f_72[iVar0]->f_6, "mp001_s_mp_catalogue01x_noanim_PH_R_HAND");
			_delete_scenario_point(Global_1051439->f_72[iVar0]->f_6);
			if (does_entity_exist(iVar11))
			{
				set_entity_as_no_longer_needed(&iVar11);
			}
		}
		if (_does_scenario_point_exist(Global_1915715->f_3[iVar0]->f_16))
		{
			_delete_scenario_point(Global_1915715->f_3[iVar0]->f_16);
		}
		Global_1051439->f_72[iVar0]->f_6 = 0;
		func_1604(iVar0, 16384);
	}
}

void func_1437(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = { 0f, 0f, 0f };
	uParam0->f_9 = 0;
	if (uParam0->f_6 != 0)
	{
		set_model_as_no_longer_needed(uParam0->f_6);
		uParam0->f_6 = 0;
	}
	if (_is_metaped_outfit_request_valid(uParam0->f_8))
	{
		_release_metaped_outfit_request(uParam0->f_8);
	}
}

int func_1438(int iParam0, var uParam1, var uParam2, var uParam3)
{
	return func_1624(iParam0, "sHash", uParam1, "fHeading", uParam2, "vPos", uParam3);
}

bool func_1439(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

Vector3 func_1440()
{
	vVar0 = { Global_35 };
	if (func_1625(255))
	{
		iVar3 = func_1626();
		iVar4 = get_player_ped(iVar3);
		vVar0 = { get_entity_coords(iVar4, true, false) };
	}
	return vVar0;
}

float func_1441(int iParam0, bool bParam1)
{
	fVar0 = func_1627(iParam0, 0);
	fVar0 = (fVar0 + 20f);
	if (bParam1)
	{
		fVar0 = (fVar0 * fVar0);
	}
	return fVar0;
}

void func_1442(var uParam0, int iParam1)
{
	if (iParam1 == 36)
	{
		if ((does_entity_exist(uParam0->f_4) && !is_entity_dead(uParam0->f_4)) && is_entity_visible(uParam0->f_4))
		{
			set_entity_visible(uParam0->f_4, false);
		}
	}
	switch (uParam0->f_9)
	{
		case 0:
			if ((vdist2(func_1440(), uParam0->f_1) < func_1627(iParam1, 1) && func_1628(iParam1, *uParam0)) && !func_1602(*uParam0, 1))
			{
				func_1629(uParam0, 1);
			}
			break;
		case 1:
			if (!does_entity_exist(func_1630(uParam0->f_5)))
			{
				if (!func_1631(*uParam0, &(uParam0->f_6), &(uParam0->f_7)) || uParam0->f_6 == 0)
				{
					return;
				}
				request_model(uParam0->f_6, false);
				if (!has_model_loaded(uParam0->f_6))
				{
					return;
				}
				if (uParam0->f_7 == 0)
				{
				}
				else if (!_is_metaped_outfit_request_valid(uParam0->f_8))
				{
					uParam0->f_8 = _request_metaped_outfit(uParam0->f_6, uParam0->f_7);
				}
				else if (!_0x610438375e5d1801(uParam0->f_8))
				{
					return;
				}
				uParam0->f_5 = func_954(uParam0->f_6, uParam0->f_1, 0, 0, 1, 0, 1, 1, 1, 0, 0);
				set_entity_invincible(uParam0->f_5, true);
				set_blocking_of_non_temporary_events(uParam0->f_5, true);
				set_entity_proofs(uParam0->f_5, 127, false);
				set_ped_can_ragdoll(uParam0->f_5, false);
				_0xae6004120c18df97(uParam0->f_5, 0, 0);
				set_ped_config_flag(uParam0->f_5, 146, true);
				set_ped_config_flag(uParam0->f_5, 26, true);
				set_ped_config_flag(uParam0->f_5, 44, true);
				if (iParam1 != 15)
				{
					set_ped_config_flag(uParam0->f_5, 422, true);
				}
				if (iParam1 == 2 || iParam1 == 15)
				{
					set_ped_config_flag(uParam0->f_5, 376, true);
				}
				if ((iParam1 == 15 && func_1632(*uParam0, &iVar0)) && iVar0 == -752368041)
				{
					_give_weapon_to_ped_2(uParam0->f_5, -1471716628, 0, false, true, 0, false, 0.5f, 1f, 752097756, true, 0f, true);
					set_current_ped_weapon(uParam0->f_5, -1471716628, true, 0, false, false);
				}
				uParam0->f_4 = func_1630(uParam0->f_5);
				func_1633(uParam0->f_5);
			}
			else
			{
				if (!does_entity_exist(uParam0->f_4) || is_entity_dead(uParam0->f_4))
				{
					func_1629(uParam0, 0);
					return;
				}
				if (uParam0->f_7 == 0)
				{
				}
				else if (!_0xa0bc8faed8cfeb3c(uParam0->f_5))
				{
					return;
				}
				else if (_is_metaped_outfit_request_valid(uParam0->f_8))
				{
					_set_ped_body_component(uParam0->f_5, uParam0->f_7);
					_update_ped_variation(uParam0->f_5, true, true, true, true, false);
					_release_metaped_outfit_request(uParam0->f_8);
				}
				func_1629(uParam0, 2);
			}
			break;
		case 2:
			if (((!does_entity_exist(uParam0->f_4) || is_entity_dead(uParam0->f_4)) || vdist2(func_1440(), get_entity_coords(uParam0->f_4, true, false)) > func_1441(iParam1, 1)) || !func_1628(iParam1, *uParam0))
			{
				func_1436(uParam0);
			}
			if (!does_entity_exist(uParam0->f_4))
			{
				func_1629(uParam0, 0);
			}
			break;
	}
}

int func_1443(int iParam0)
{
	bVar0 = ((func_1432(iParam0) || func_1434(func_1433(&(Global_1051439->f_3745[iParam0])), 255)) || func_1435(&(Global_1051439->f_3745[iParam0])) == 1);
	iVar1 = func_382(&(Global_1051439->f_3745[iParam0]));
	bVar0 = ((bVar0 || !_unlock_is_unlocked(iVar1)) || !_unlock_is_visible(iVar1));
	if (iParam0 == 38)
	{
		bVar0 = (bVar0 || !func_1605(&(Global_1051439->f_3745[iParam0])));
	}
	if (!bVar0)
	{
		if (!func_1620(iParam0, 2097152) && Global_1051439->f_3745[iParam0]->f_10 == 0)
		{
			if (func_1634(&(Global_1051439->f_3745[iParam0]), &(Global_1051439->f_3745[iParam0]->f_11), &(Global_1051439->f_3745[iParam0]->f_14), &(Global_1051439->f_3745[iParam0]->f_10)))
			{
				if (Global_1051439->f_3745[iParam0]->f_10 == 0)
				{
					func_1610(iParam0, 2097152);
				}
			}
		}
		if (Global_1051439->f_3745[iParam0]->f_10 != 0 && vdist2(Global_1051439->f_3745[iParam0]->f_11, func_1440()) < (200f * 200f))
		{
			bVar11 = is_model_valid(Global_1051439->f_3745[iParam0]->f_10);
			if (!func_1620(iParam0, 2097152))
			{
				if ((bVar11 && !does_entity_exist(Global_1051439->f_3745[iParam0]->f_16)) || (!bVar11 && !_does_propset_exist(Global_1051439->f_3745[iParam0]->f_15)))
				{
					if (bVar11)
					{
						request_model(Global_1051439->f_3745[iParam0]->f_10, false);
						if (!has_model_loaded(Global_1051439->f_3745[iParam0]->f_10))
						{
							return 0;
						}
					}
					else
					{
						_request_propset_2(Global_1051439->f_3745[iParam0]->f_10);
						if (!_has_propset_loaded_2(Global_1051439->f_3745[iParam0]->f_10))
						{
							return 0;
						}
					}
					func_1621(&(Global_1051439->f_3745[iParam0]), &uVar2, &iVar10);
					bVar12 = iVar10 != false;
					if (bVar11)
					{
						Global_1051439->f_3745[iParam0]->f_16 = create_object(Global_1051439->f_3745[iParam0]->f_10, Global_1051439->f_3745[iParam0]->f_11, false, true, false, false, true);
						if (!does_entity_exist(Global_1051439->f_3745[iParam0]->f_16))
						{
							return 0;
						}
						set_entity_heading(Global_1051439->f_3745[iParam0]->f_16, Global_1051439->f_3745[iParam0]->f_14);
						freeze_entity_position(Global_1051439->f_3745[iParam0]->f_16, true);
						set_entity_can_be_damaged(Global_1051439->f_3745[iParam0]->f_16, false);
						set_entity_proofs(Global_1051439->f_3745[iParam0]->f_16, -1, false);
						set_entity_invincible(Global_1051439->f_3745[iParam0]->f_16, true);
					}
					else
					{
						Global_1051439->f_3745[iParam0]->f_15 = _create_propset_2(Global_1051439->f_3745[iParam0]->f_10, Global_1051439->f_3745[iParam0]->f_11, 7, Global_1051439->f_3745[iParam0]->f_14, 1200f, false, !bVar12);
						if (!_does_propset_exist(Global_1051439->f_3745[iParam0]->f_15))
						{
							return 0;
						}
					}
					if (!is_string_null_or_empty(&uVar2))
					{
						set_ambient_zone_state(&uVar2, true, true);
						_0x3743ce6948194349(&uVar2, Global_1051439->f_3745[iParam0]->f_11, Global_1051439->f_3745[iParam0]->f_14);
					}
					if (bVar12)
					{
						func_1635(iVar10);
					}
					func_1610(iParam0, 2097152);
				}
				else
				{
					_delete_propset(Global_1051439->f_3745[iParam0]->f_15, true, true);
					func_1621(&(Global_1051439->f_3745[iParam0]), &uVar2, &iVar10);
					if (!is_string_null_or_empty(&uVar2))
					{
						set_ambient_zone_state(&uVar2, false, true);
					}
					if (iVar10 != 0)
					{
						func_1622(iVar10);
					}
				}
			}
			else if ((bVar11 && !does_entity_exist(Global_1051439->f_3745[iParam0]->f_16)) || (!bVar11 && !_does_propset_exist(Global_1051439->f_3745[iParam0]->f_15)))
			{
				func_1604(iParam0, 2097152);
			}
		}
	}
	else if (func_1620(iParam0, 2097152))
	{
		bVar13 = is_model_valid(Global_1051439->f_3745[iParam0]->f_10);
		if ((bVar13 && !does_entity_exist(Global_1051439->f_3745[iParam0]->f_16)) || (!bVar13 && !_does_propset_exist(Global_1051439->f_3745[iParam0]->f_15)))
		{
			if (bVar13)
			{
				_delete_propset(Global_1051439->f_3745[iParam0]->f_15, true, true);
			}
			else
			{
				delete_entity(&(Global_1051439->f_3745[iParam0]->f_16));
			}
			func_1621(&(Global_1051439->f_3745[iParam0]), &uVar2, &iVar10);
			if (!is_string_null_or_empty(&uVar2))
			{
				set_ambient_zone_state(&uVar2, false, true);
			}
			if (iVar10 != 0)
			{
				func_1622(iVar10);
			}
		}
		func_1604(iParam0, 2097152);
	}
	return 1;
}

void func_1444(int iParam0)
{
	iVar0 = func_453(iParam0);
	iVar1 = func_514();
	if (iVar1 != func_1433(iParam0))
	{
		if (Global_1051439->f_3718 != 0)
		{
			func_1636();
		}
		return;
	}
	if (!func_1637(iParam0, iVar0))
	{
		return;
	}
	iVar3 = func_1638(iParam0);
	if (iVar3 == 0)
	{
		return;
	}
	if (Global_1051439->f_3718 != 0)
	{
		if (Global_1051439->f_3718.f_1 != -1)
		{
			if ((!func_1639(iParam0) && vdist2(Global_35, Global_1051439->f_72[Global_1051439->f_3718.f_1]->f_3) > (15f * 15f)) || func_1640())
			{
				if (!is_player_dead(player_id()))
				{
					clear_ped_tasks(Global_34, 1, 0);
				}
				func_1636();
			}
		}
		else
		{
			if (!is_player_dead(player_id()))
			{
				clear_ped_tasks(Global_34, 1, 0);
			}
			func_1636();
			return;
		}
	}
	else if ((vdist2(Global_35, Global_1051439->f_72[iVar0]->f_3) > (15f * 15f) && iVar0 != 36) || func_1640())
	{
		return;
	}
	switch (Global_1051439->f_3718)
	{
		case 0:
			if (func_1639(iParam0) && vdist2(Global_35, Global_1051439->f_72[iVar0]->f_3) > (15f * 15f))
			{
				func_1641(iParam0);
				func_1217("SHOP_NOT_CURRENTLY_ALLOWED", 10000, 0, 0, 0, 1);
				Global_1051439->f_3718.f_1 = iVar0;
				func_1642(3);
			}
			else if (func_1643(iVar0) && (func_1439(Global_1051439->f_3718.f_2) || func_1644(Global_34, Global_1051439->f_3718.f_2, 1) > 1f))
			{
				if (iVar0 == 36)
				{
					func_1217("SHOP_NOT_CURRENTLY_ALLOWED_THEATER", 10000, 0, 0, 0, 1);
				}
				else
				{
					func_1217("SHOP_NOT_CURRENTLY_ALLOWED", 10000, 0, 0, 0, 1);
				}
				Global_1051439->f_3718.f_1 = iVar0;
				func_1642(1);
			}
			break;
		case 1:
			if (is_player_dead(player_id()))
			{
				func_1636();
			}
			else
			{
				iVar7 = get_script_task_status(Global_34, 713668775, true);
				if (((((!iVar7 == 1 && !iVar7 == 0) && !is_ped_falling(Global_34)) && !is_ped_jumping(Global_34)) && !is_ped_climbing(Global_34)) && !is_ped_vaulting(Global_34))
				{
					Global_1051439->f_3718.f_2 = { 0f, 0f, 0f };
					iVar2 = 0;
					while (iVar2 <= (iVar3 - 1))
					{
						func_1645(iParam0, iVar2, &vVar4);
						if (vdist(Global_35, vVar4) < vdist(Global_35, Global_1051439->f_3718.f_2))
						{
							Global_1051439->f_3718.f_2 = { vVar4 };
						}
						iVar2++;
					}
					if (Global_1051439->f_3718.f_6 > 3)
					{
						func_1642(3);
						return;
					}
					if (_is_ped_carrying(Global_34))
					{
						iVar8 = func_1646(Global_34);
						if (does_entity_exist(iVar8) && is_ped_a_player(iVar8))
						{
							func_1642(3);
							return;
						}
					}
					clear_ped_tasks(Global_34, 1, 0);
					_0x013a7ba5015c1372(Global_34, 1);
					_0xfa30e2254461adeb(Global_34, 1);
					task_follow_nav_mesh_to_coord(Global_34, Global_1051439->f_3718.f_2, 1f, 20000, 0.25f, 131072, 40000f);
					set_ped_config_flag(Global_34, 1, true);
					set_ped_config_flag(Global_34, 170, true);
					_0xfd6943b6df77e449(Global_34, true);
					_0xc2266aa617668ad3(Global_34, 0.01f);
					_0x73b6f907b913c860(Global_34, 0.4f);
					Global_1051439->f_3718.f_6++;
				}
				else if (!func_1643(Global_1051439->f_3718.f_1) || func_1644(Global_34, Global_1051439->f_3718.f_2, 1) < 1f)
				{
					Global_1051439->f_3718.f_5 = get_entity_heading(Global_34);
					func_1642(2);
				}
			}
			break;
		case 2:
			if (!is_player_dead(player_id()))
			{
				clear_ped_tasks(Global_34, 1, 0);
				simulate_player_input_gait(player_id(), 1f, 2000, Global_1051439->f_3718.f_5, false, false);
			}
			func_1636();
			break;
		case 3:
			if (!is_screen_faded_out())
			{
				if (!is_screen_fading_out())
				{
					do_screen_fade_out(500);
				}
			}
			else
			{
				func_1647(Global_34, Global_1051439->f_3718.f_2, get_entity_heading(Global_34), 2, 1073741824);
				do_screen_fade_in(500);
				func_1636();
			}
			break;
		default:
			func_1636();
			break;
	}
}

bool func_1445()
{
	if (func_1648(0))
	{
		return false;
	}
	if (func_1640())
	{
		return false;
	}
	if (func_1649(player_id(), 1, 0, 1))
	{
		return true;
	}
	if (func_1650())
	{
		return true;
	}
	if (func_1606())
	{
		return true;
	}
	iVar0 = func_1646(Global_34);
	if (does_entity_exist(iVar0))
	{
		return true;
	}
	return false;
}

int func_1446(int iParam0)
{
	switch (iParam0)
	{
		case 132:
			return -809040070;
		case 6:
			return 443958153;
		case 7:
			return 1035357148;
		case 8:
			return -990591911;
		case 19:
			return 1434435999;
		case 13:
			return 914613127;
		case 14:
			return 277114628;
		case 15:
			return -441298053;
		case 12:
			return -2008988392;
		case 122:
			return 1866591384;
		case 123:
			return -810797676;
		case 5:
			return 1591504033;
		case 9:
			return -1481022983;
		case 10:
			return -200160067;
		case 11:
			return -906556724;
		case 16:
			return 882729775;
		case 17:
			return 1957450109;
		case 18:
			return 1826386989;
		case 23:
			return 213861089;
		case 24:
			return 187124199;
		case 25:
			return -1639286351;
		case 22:
			return 1244472740;
		case 26:
			return -184950877;
		case 45:
			return -922179383;
		case 48:
			return 877339314;
		case 46:
			return 327042733;
		case 49:
			return -1159824322;
		case 42:
			return 187784199;
		case 43:
			return 156869848;
		case 44:
			return 959980967;
		case 50:
			return -605457855;
		case 51:
			return -967272484;
		case 52:
			return 253446434;
		case 53:
			return -24930371;
		case 63:
			return -491616406;
		case 56:
			return 1428271505;
		case 57:
			return -404449802;
		case 60:
			return -2132681852;
		case 124:
			return 1479356600;
		case 125:
			return -1608228131;
		case 54:
			return 1700741106;
		case 55:
			return 509242725;
		case 59:
			return -1243693278;
		case 58:
			return 106026254;
		case 61:
			return -1340467914;
		case 62:
			return -2128099513;
		case 27:
			return -768596287;
		case 28:
			return -1789795772;
		case 33:
			return 986912071;
		case 31:
			return 312948291;
		case 34:
			return 770563571;
		case 35:
			return 288839560;
		case 30:
			return 399352507;
		case 39:
			return -1241147617;
		case 126:
			return 1576805996;
		case 29:
			return -1427623397;
		case 36:
			return 305555540;
		case 37:
			return -697751457;
		case 38:
			return -994915577;
		case 68:
			return 2080716288;
		case 69:
			return 922959422;
		case 70:
			return 1948709075;
		case 71:
			return 599204508;
		case 74:
			return -362796541;
		case 127:
			return -176953214;
		case 75:
			return -1992095599;
		case 72:
			return -553046416;
		case 73:
			return 1410537143;
		case 83:
			return 646741747;
		case 84:
			return -773037432;
		case 85:
			return 1444751354;
		case 78:
			return 709943351;
		case 87:
			return 731746260;
		case 86:
			return 405856312;
		case 82:
			return -1749578899;
		case 88:
			return 1581089825;
		case 81:
			return 1124822890;
		case 91:
			return 1618521465;
		case 90:
			return -442258411;
		case 120:
			return 1665083003;
		case 121:
			return 810431028;
		case 77:
			return 1161446575;
		case 79:
			return -406930559;
		case 80:
			return -1850308061;
		case 89:
			return 787686374;
		case 41:
			return 1523596125;
		case 98:
			return -372049939;
		case 97:
			return 226213668;
		case 93:
			return 1437804895;
		case 96:
			return -1254552445;
		case 94:
			return 1526480524;
		case 95:
			return 470861506;
		case 128:
			return 644508980;
		case 129:
			return -1985767496;
		case 0:
			return 1117878254;
		case 1:
			return 622553269;
		case 2:
			return -1934358691;
		case 101:
			return 94750187;
		case 99:
			return 545745902;
		case 100:
			return 1875117241;
		case 119:
			return -1861588330;
		case 133:
			return -1079912632;
		case 152:
			return -1624899219;
		case 176:
			return 1712034773;
		case 177:
			return 1084233913;
		case 178:
			return -1628307596;
		case 153:
			return 1109728466;
		case 154:
			return 151142181;
		case 147:
			return 191185611;
		case 135:
			return 1689047337;
		case 136:
			return 631237697;
		case 137:
			return 1309294228;
		case 138:
			return -1862366064;
		case 139:
			return -708893514;
		case 140:
			return -61253253;
		case 141:
			return -1674694281;
		case 142:
			return 14391281;
		case 143:
			return -869603674;
		case 144:
			return 2081857521;
		case 145:
			return 526646992;
		case 146:
			return 1672297313;
		case 47:
			return 1025033373;
		case 32:
			return 1025033373;
		case 21:
			return 1025033373;
		case 115:
			return 1025033373;
		case 92:
			return 1025033373;
		case 131:
			return 1025033373;
		case 20:
			return 1025033373;
		case 134:
			return -765151559;
		case 179:
			return 1244193358;
		case 155:
			return -268420964;
		case 156:
			return -283845926;
		case 157:
			return 76731659;
		case 158:
			return 2141489518;
		case 67:
			return 1529797091;
		case 159:
			return 1120323763;
		case 160:
			return -1951530479;
		case 161:
			return 2034257465;
		case 162:
			return 278587369;
		case 65:
			return 1388932648;
		case 164:
			return 1467401843;
		case 165:
			return -1049737591;
		case 166:
			return 1175719437;
		case 167:
			return 2115547696;
		case 64:
			return 878376253;
		case 168:
			return -508879537;
		case 169:
			return -654369397;
		case 170:
			return 1573058547;
		case 171:
			return 1753151614;
		case 172:
			return -2113647360;
		case 173:
			return 1337275619;
		case 174:
			return -237650722;
		case 175:
			return 283754781;
		case 66:
			return -2076086367;
		case 163:
			return -487054121;
		case 108:
			return -1769964380;
		case 110:
			return -1464928880;
		case 109:
			return -812483303;
		case 111:
			return 1315212395;
		case 112:
			return 450843655;
		case 113:
			return -1477315484;
		case 114:
			return -1132316597;
		case 102:
			return -1495157302;
		case 105:
			return -2140031237;
		case 106:
			return -375350;
		case 103:
			return -1829807698;
		case 104:
			return 186603357;
		case 107:
			return -1575817877;
		case 116:
			return 1087483310;
		case 130:
			return -552506176;
		case 117:
			return 441769767;
		case 118:
			return 1318049946;
		case 3:
			return 548657065;
		case 4:
			return 243086140;
		case 40:
			return -305029900;
		case 76:
			return 1008537949;
		case 148:
			return 1239556700;
		case 149:
			return 1968750441;
		case 150:
			return 317019665;
		case 151:
			return 1421441577;
		default:
			break;
	}
	return 0;
}

bool func_1447(int iParam0, int iParam1, var uParam2)
{
	if (func_1651(iParam0, iParam1, &uVar0))
	{
		func_1652(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

int func_1448(var uParam0, int iParam1)
{
	return (iParam1 / uParam0->f_171);
}

int func_1449(var uParam0, float fParam1, bool bParam2)
{
	iVar0 = 0;
	if (fParam1 > uParam0->f_7)
	{
		iVar0 = 1;
	}
	else if (fParam1 < -uParam0->f_7)
	{
		iVar0 = -1;
	}
	if (iVar0 != uParam0->f_11 || bParam2)
	{
		uParam0->f_9 = 0f;
		uParam0->f_10 = *uParam0;
		uParam0->f_11 = iVar0;
		uParam0->f_12 = get_game_timer();
		uParam0->f_13 = 0;
		return iVar0;
	}
	else if (iVar0 != 0)
	{
		uParam0->f_9 = (uParam0->f_9 + (uParam0->f_10 * get_frame_time()));
		if (!uParam0->f_13)
		{
			if ((get_game_timer() - uParam0->f_12) >= floor((uParam0->f_5 * 1000f)) && absf(fParam1) >= uParam0->f_8)
			{
				uParam0->f_13 = 1;
			}
		}
		if (!uParam0->f_13)
		{
			uParam0->f_10 = (uParam0->f_10 + (uParam0->f_3 * get_frame_time()));
			if (uParam0->f_10 > uParam0->f_1)
			{
				uParam0->f_10 = uParam0->f_1;
			}
		}
		else
		{
			uParam0->f_10 = (uParam0->f_10 + (uParam0->f_4 * get_frame_time()));
			if (uParam0->f_10 > uParam0->f_2)
			{
				uParam0->f_10 = uParam0->f_2;
			}
		}
		if (uParam0->f_9 >= 1f)
		{
			iVar1 = floor(uParam0->f_9);
			uParam0->f_9 = (uParam0->f_9 - to_float(iVar1));
			return (iVar1 * iVar0);
		}
	}
	return 0;
}

void func_1450(bool bParam0)
{
	_0x0f2a2175734926d8("BET_AMOUNT", "HUD_POKER");
	if (bParam0)
	{
		play_sound_frontend("BET_MIN_MAX", "HUD_POKER", true, 0);
	}
	else
	{
		play_sound_frontend("BET_AMOUNT", "HUD_POKER", true, 0);
	}
}

char* func_1451(var uParam0, int iParam1)
{
	return (iParam1 * uParam0->f_171);
}

void func_1452(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3 && !func_152(iParam0))
	{
		return;
	}
	iVar0 = func_347(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1951255)[iVar0]->f_3, _create_var_string(2, sParam1, sParam2));
}

void func_1453(var uParam0)
{
	if (uParam0->f_61 != 0)
	{
		uParam0->f_61 = 0;
		func_272(uParam0);
	}
}

void func_1454(var uParam0, int iParam1)
{
	if (&uParam0->f_2021[iParam1] != 0)
	{
		uParam0->f_2021[iParam1] = 0;
	}
}

void func_1455(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	Var0.f_1.f_15 = 11;
	Var0.f_1.f_39 = 6;
	Var0.f_1.f_39.f_1.f_7 = 11;
	Var0.f_1.f_39.f_1.f_31 = 11;
	Var0.f_1.f_39.f_1.f_56.f_7 = 11;
	Var0.f_1.f_39.f_1.f_56.f_31 = 11;
	Var0.f_1.f_39.f_1.f_56.f_56.f_7 = 11;
	Var0.f_1.f_39.f_1.f_56.f_56.f_31 = 11;
	Var0.f_1.f_39.f_1.f_56.f_56.f_56.f_7 = 11;
	Var0.f_1.f_39.f_1.f_56.f_56.f_56.f_31 = 11;
	Var0.f_1.f_39.f_1.f_56.f_56.f_56.f_56.f_7 = 11;
	Var0.f_1.f_39.f_1.f_56.f_56.f_56.f_56.f_31 = 11;
	Var0.f_1.f_39.f_1.f_56.f_56.f_56.f_56.f_56.f_7 = 11;
	Var0.f_1.f_39.f_1.f_56.f_56.f_56.f_56.f_56.f_31 = 11;
	Var0.f_1.f_376 = 6;
	Var0.f_1.f_376.f_1.f_2 = 6;
	Var0.f_1.f_376.f_1.f_10 = 6;
	Var0.f_1.f_376.f_1.f_18.f_2 = 6;
	Var0.f_1.f_376.f_1.f_18.f_10 = 6;
	Var0.f_1.f_376.f_1.f_18.f_18.f_2 = 6;
	Var0.f_1.f_376.f_1.f_18.f_18.f_10 = 6;
	Var0.f_1.f_376.f_1.f_18.f_18.f_18.f_2 = 6;
	Var0.f_1.f_376.f_1.f_18.f_18.f_18.f_10 = 6;
	Var0.f_1.f_376.f_1.f_18.f_18.f_18.f_18.f_2 = 6;
	Var0.f_1.f_376.f_1.f_18.f_18.f_18.f_18.f_10 = 6;
	Var0.f_1.f_376.f_1.f_18.f_18.f_18.f_18.f_18.f_2 = 6;
	Var0.f_1.f_376.f_1.f_18.f_18.f_18.f_18.f_18.f_10 = 6;
	iVar487 = 0;
	iVar488 = 0;
	while (iLocal_498 < 6)
	{
		if (!func_203(&(uParam0->f_416), iLocal_498))
		{
			(*uParam1)[iLocal_498] = 0;
			(*uParam2)[iLocal_498] = 0;
			(*uParam3)[iLocal_498] = 0;
			(*uParam4)[iLocal_498] = 0;
		}
		else
		{
			(*uParam1)[iLocal_498] = 1;
			(*uParam2)[iLocal_498] = func_204(&(uParam0->f_416), iLocal_498);
			(*uParam3)[iLocal_498] = 0;
			(*uParam4)[iLocal_498] = 0;
			set_bit(&iVar487, iLocal_498);
		}
		if (iLocal_498 == uParam0->f_9 && uParam2[iLocal_498] == 0)
		{
			(*uParam2)[iLocal_498] = uParam0->f_1453;
		}
		iVar488 = iLocal_498 + 1;
	}
	*uParam5 = uParam0->f_416.f_11;
	*uParam6 = 0;
	*uParam7 = func_1058(&(uParam0->f_416));
	iVar489 = _0x3b31732fade5baf3();
	while (iLocal_500 < iLocal_499 && !*uParam6)
	{
		if (_0x578907f59ba01b6d(iLocal_500) == -1857735811)
		{
			if (!_0xdf728c5ae137fc14(iLocal_500, &Var0, 487))
			{
			}
			else
			{
				if (Var0.f_1.f_1 == -1442142035)
				{
					*uParam6 = 1;
				}
				if (!*uParam6)
				{
					*uParam5 = Var0.f_1.f_11;
				}
				if (*uParam6)
				{
					*uParam7 = func_1058(&(Var0.f_1));
				}
				iVar488 = 0;
				while (iLocal_498 < 6)
				{
					if (is_bit_set(iLocal_497, iLocal_498))
					{
						if (!func_203(&(Var0.f_1), iLocal_498))
						{
							(*uParam1)[iLocal_498] = 0;
							clear_bit(&iVar487, iLocal_498);
						}
						else
						{
							(*uParam2)[iLocal_498] = func_204(&(Var0.f_1), iLocal_498);
							(*uParam3)[iLocal_498] = func_618(&(Var0.f_1), iLocal_498);
							if (iLocal_498 == uParam0->f_9 && uParam2[iLocal_498] == 0)
							{
								(*uParam2)[iLocal_498] = uParam0->f_1453;
							}
							if (*uParam6)
							{
								if (func_624(&(Var0.f_1), iLocal_498))
								{
									if (Var0.f_1.f_4 == iLocal_498)
									{
										if (uParam3[iLocal_498] > Var0.f_1.f_9)
										{
											(*uParam4)[iLocal_498] = 2;
										}
										else
										{
											(*uParam4)[iLocal_498] = 1;
										}
									}
									else if (Var0.f_1.f_5 == iLocal_498)
									{
										(*uParam4)[iLocal_498] = 3;
									}
									else if (uParam3[iLocal_498] > 0)
									{
										(*uParam4)[iLocal_498] = 4;
									}
									else
									{
										(*uParam4)[iLocal_498] = 5;
									}
								}
								else
								{
									(*uParam4)[iLocal_498] = 6;
								}
							}
						}
					}
					iVar488 = iLocal_498 + 1;
				}
			}
		}
		uVar490 = iLocal_500 + 1;
	}
}

int func_1456(var uParam0)
{
	return uParam0->f_439;
}

int func_1457(var uParam0)
{
	return uParam0->f_440;
}

int func_1458(var uParam0)
{
	return uParam0->f_441;
}

void func_1459(var uParam0)
{
	uParam0->f_441 = -1;
	func_1490(uParam0, 1, "");
	func_1491(uParam0, 1, "");
}

void func_1460(var uParam0, char* sParam1)
{
	uParam0->f_441 = sParam1;
	func_1490(uParam0, 1, _create_var_string(2, "MGPKR_UI_INTERVAL_COUNTDOWN_LABEL"));
	func_1491(uParam0, 1, _create_var_string(2, "MGPKR_UI_INTERVAL_COUNTDOWN_SECS", sParam1));
}

bool func_1461(var uParam0, int iParam1, char* sParam2)
{
	return are_strings_equal(&(uParam0->f_307[iParam1]->f_3), sParam2);
}

void func_1462(int iParam0, bool bParam1)
{
	if (!func_152(iParam0))
	{
		return;
	}
	iVar0 = func_347(iParam0);
	_uiprompt_set_enabled((*Global_1951255)[iVar0]->f_3, !bParam1);
}

void func_1463(var uParam0, bool bParam1)
{
	if (is_bit_set(uParam0->f_126, 0))
	{
		if (!does_cam_exist(uParam0->f_135))
		{
			uParam0->f_135 = create_camera(26379945, false);
			if (does_cam_exist(uParam0->f_135))
			{
			}
		}
		if (uParam0->f_129 != -1)
		{
			func_1653(&(uParam0->f_136), bParam1, 1, 0, 0, 0);
		}
		if (uParam0->f_127 != -1)
		{
			if (func_1025(uParam0))
			{
				if (get_frame_count() >= uParam0->f_127)
				{
					func_1026(uParam0, 0);
				}
			}
			else
			{
				uParam0->f_127 = -1;
			}
		}
	}
}

bool func_1464(var uParam0)
{
	if (uParam0->f_24 >= 0 && uParam0->f_24 <= 9)
	{
		return true;
	}
	return false;
}

char* func_1465(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
		switch (uParam0->f_24)
		{
			case 0:
				sVar0 = _create_var_string(10, "MGPKR_HND_HIGH", func_1654(uParam0[0]));
				break;
			case 1:
				sVar0 = _create_var_string(10, "MGPKR_HND_PAIR", func_1655(uParam0[0]));
				break;
			case 2:
				sVar0 = _create_var_string(42, "MGPKR_HND_TWOPAIR", func_1655(uParam0[0]), func_1655(uParam0[2]));
				break;
			case 3:
				sVar0 = _create_var_string(10, "MGPKR_HND_THREE", func_1655(uParam0[0]));
				break;
			case 4:
				if (func_1656(uParam0[0]))
				{
					sVar0 = _create_var_string(10, "MGPKR_HND_STRAIT1", func_1654(uParam0[0]));
				}
				else
				{
					sVar0 = _create_var_string(10, "MGPKR_HND_STRAIT2", func_1654(uParam0[0]));
				}
				break;
			case 5:
				if (func_1656(uParam0[0]))
				{
					sVar0 = _create_var_string(42, "MGPKR_HND_FLUSH1", func_1654(uParam0[0]), func_1657((*uParam0)[0]->f_1));
				}
				else
				{
					sVar0 = _create_var_string(42, "MGPKR_HND_FLUSH2", func_1654(uParam0[0]), func_1657((*uParam0)[0]->f_1));
				}
				break;
			case 6:
				sVar0 = _create_var_string(42, "MGPKR_HND_HOUSE", func_1655(uParam0[0]), func_1655(uParam0[3]));
				break;
			case 7:
				sVar0 = _create_var_string(10, "MGPKR_HND_FOUR", func_1655(uParam0[0]));
				break;
			case 8:
				if (func_1656(uParam0[0]))
				{
					sVar0 = _create_var_string(42, "MGPKR_HND_STFLUSH1", func_1654(uParam0[0]), func_1657((*uParam0)[0]->f_1));
				}
				else
				{
					sVar0 = _create_var_string(42, "MGPKR_HND_STFLUSH2", func_1654(uParam0[0]), func_1657((*uParam0)[0]->f_1));
				}
				break;
			case 9:
				sVar0 = _create_var_string(2, "MGPKR_HND_RYFLUSH");
				break;
			default:
				sVar0 = "nothing";
				break;
		}
	}
	else
	{
		switch (uParam0->f_24)
		{
			case 0:
				sVar0 = _create_var_string(10, "MGPKR_HND2_HIGH", func_1658(uParam0[0]));
				break;
			case 1:
				sVar0 = _create_var_string(10, "MGPKR_HND2_PAIR", func_1655(uParam0[0]));
				break;
			case 2:
				sVar0 = _create_var_string(42, "MGPKR_HND2_TWOPAIR", func_1655(uParam0[0]), func_1655(uParam0[2]));
				break;
			case 3:
				sVar0 = _create_var_string(10, "MGPKR_HND2_THREE", func_1655(uParam0[0]));
				break;
			case 4:
				sVar0 = _create_var_string(10, "MGPKR_HND2_STRAIT", func_1658(uParam0[0]));
				break;
			case 5:
				sVar0 = _create_var_string(42, "MGPKR_HND2_FLUSH", func_1658(uParam0[0]), func_1657((*uParam0)[0]->f_1));
				break;
			case 6:
				sVar0 = _create_var_string(42, "MGPKR_HND2_HOUSE", func_1655(uParam0[0]), func_1655(uParam0[3]));
				break;
			case 7:
				sVar0 = _create_var_string(10, "MGPKR_HND2_FOUR", func_1655(uParam0[0]));
				break;
			case 8:
				sVar0 = _create_var_string(42, "MGPKR_HND2_STFLUSH", func_1658(uParam0[0]), func_1657((*uParam0)[0]->f_1));
				break;
			case 9:
				sVar0 = _create_var_string(2, "MGPKR_HND2_RYFLUSH");
				break;
			default:
				sVar0 = "nothing";
				break;
		}
	}
	return sVar0;
}

void func_1466(var uParam0, char* sParam1)
{
	if (*uParam0 == 0)
	{
		return;
	}
	_databinding_write_data_string(uParam0->f_7, sParam1);
}

void func_1467(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2 && !func_152(iParam0))
	{
		return;
	}
	iVar0 = func_347(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1951255)[iVar0]->f_3, 11, iParam1);
}

void func_1468(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2 && !func_152(iParam0))
	{
		return;
	}
	iVar0 = func_347(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1951255)[iVar0]->f_3, 10, iParam1);
}

bool func_1469(var uParam0, int iParam1)
{
	if (&uParam0->f_39[iParam1] != -1)
	{
		if ((uParam0->f_39[iParam1]->f_6 == 0 && uParam0->f_39[iParam1]->f_2 != 0) && (uParam0->f_39[iParam1]->f_4 == uParam0->f_7 && uParam0->f_39[iParam1]->f_5))
		{
			return true;
		}
	}
	return false;
}

void func_1470(var uParam0, int iParam1)
{
	uParam0->f_485 = iParam1;
	if (func_152(uParam0->f_494))
	{
		func_464(uParam0->f_494, 1, 1);
	}
	if (func_152(uParam0->f_495))
	{
		func_464(uParam0->f_495, 1, 1);
	}
	if (func_152(uParam0->f_499))
	{
		func_464(uParam0->f_499, 1, 1);
	}
	if (func_152(uParam0->f_500))
	{
		func_464(uParam0->f_500, 1, 1);
	}
	func_1086(&(uParam0->f_485.f_4), 1, 1);
	func_1086(&(uParam0->f_485.f_5), 1, 1);
	func_1086(&(uParam0->f_485.f_6), 1, 1);
	func_1086(&(uParam0->f_485.f_7), 1, 1);
	func_1086(&(uParam0->f_485.f_8), 1, 1);
}

bool func_1471(var uParam0, var uParam1, var uParam2)
{
	if (uParam0->f_485 != 0)
	{
		if (!func_1237(uParam1, uParam0->f_485.f_1, uParam2))
		{
			if (uParam0->f_485.f_2 != 0)
			{
				func_1475(uParam0);
				return true;
			}
		}
		else
		{
			switch (uParam0->f_485.f_2)
			{
				case 1:
					if (!func_1469(uParam1, uParam0->f_485.f_1))
					{
						func_1475(uParam0);
						return true;
					}
					break;
				case 2:
					if (!func_1469(uParam1, uParam0->f_485.f_1))
					{
						func_1474(uParam0, 5, 0);
						return true;
					}
					break;
				case 4:
					if (func_1259(uParam1) > uParam0->f_485.f_3)
					{
						func_1475(uParam0);
						return true;
					}
					break;
				case 3:
				case 5:
					break;
			}
		}
	}
	return false;
}

void func_1472(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_152(iParam0))
	{
		return;
	}
	iVar0 = func_347(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_group((*Global_1951255)[iVar0]->f_3, iParam1, iParam2);
}

bool func_1473(int iParam0, bool bParam1)
{
	if (bParam1 && !func_152(iParam0))
	{
		return false;
	}
	iVar0 = func_347(iParam0);
	return _uiprompt_is_pressed((*Global_1951255)[iVar0]->f_3);
}

void func_1474(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_485.f_2 = iParam1;
	uParam0->f_485.f_3 = iParam2;
}

void func_1475(var uParam0)
{
	uParam0->f_485.f_2 = 0;
	uParam0->f_485.f_3 = 0;
}

void func_1476(var uParam0)
{
	if (uParam0->f_1871 != -1)
	{
		uParam0->f_1871 = -1;
	}
}

void func_1477(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (uParam0->f_818[iParam1]->f_57 != 0)
	{
	}
	else if (iParam1 == iParam3)
	{
	}
	else if (uParam0->f_818[iParam1]->f_2 != 1 && uParam0->f_818[iParam1]->f_2 != 2)
	{
	}
	else if (!is_task_move_network_active(&(uParam0->f_818[iParam1])))
	{
	}
	else
	{
		uParam0->f_818[iParam1]->f_57 = 1;
		uParam0->f_818[iParam1]->f_58 = iParam2;
		uParam0->f_818[iParam1]->f_59 = iParam3;
		iVar0 = ((iParam3 - iParam1) - 1);
		while (iVar0 < 0)
		{
			iVar0 += 6;
		}
		if (uParam0->f_818[iParam1]->f_2 == 1)
		{
			iVar1 = 0;
		}
		else
		{
			iVar1 = 1;
		}
		iVar2 = get_random_int_in_range(0, 3);
		switch (iParam2)
		{
			case 0:
				set_task_move_network_signal_bool(&(uParam0->f_818[iParam1]), "StartQuickMgmLook", true);
				break;
			case 1:
				set_task_move_network_signal_bool(&(uParam0->f_818[iParam1]), "StartMediumMgmLook", true);
				break;
		}
		set_task_move_network_signal_float(&(uParam0->f_818[iParam1]), "MgmLookPose", to_float(iVar1));
		set_task_move_network_signal_float(&(uParam0->f_818[iParam1]), "MgmLookSeat", to_float(iVar0));
		set_task_move_network_signal_float(&(uParam0->f_818[iParam1]), "MgmLookVar", to_float(iVar2));
		func_1092(uParam0, iParam1, 1);
	}
}

void func_1478(var uParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return;
	}
	if (&uParam0->f_2067[iParam1] != -1)
	{
		uParam0->f_2067[iParam1] = -1;
	}
}

int func_1479(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (iParam1 < 0 || iParam1 >= 6)
	{
		if (bParam4)
		{
		}
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam3 == 0)
		{
			if (iParam1 == uParam0->f_3)
			{
				return -1;
			}
		}
		iParam1 = (iParam1 + 1 % 6);
		if (func_624(uParam0, iParam1) && uParam0->f_39[iParam1]->f_6 == iParam2)
		{
			return iParam1;
		}
		iVar0++;
	}
	return -1;
}

void func_1480(var uParam0, int iParam1, var uParam2)
{
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (&uParam0->f_818[iVar1] != 0 && uParam0->f_818[iVar1]->f_8 == 1)
		{
			if (uParam0->f_818[iVar1]->f_51 && is_bit_set(iParam1, iVar1))
			{
				if (func_127(&(uParam0->f_818[iVar1]->f_16)) > 0f && func_920(uParam0, iVar1, 1))
				{
					bVar0 = false;
					if (bVar0)
					{
						func_998(uParam0, iVar1);
						func_1209(uParam0, iVar1);
					}
					else if (get_random_int_in_range(0, 100) < 75)
					{
						func_1659(uParam0, iVar1, 0);
					}
					else
					{
						func_1659(uParam0, iVar1, 1);
					}
					func_361(&(uParam0->f_818[iVar1]->f_16), -get_random_float_in_range(15f, 35f));
				}
			}
		}
		iVar1++;
	}
}

void func_1481(var uParam0, int iParam1, int iParam2)
{
	if (func_1239(&(uParam0->f_152), &(uParam0->f_152.f_1671), &(uParam0->f_2841), &(uParam0->f_152.f_416), iParam1, 1, iParam2))
	{
		if (_0x61b2aaef645ddaf0(uParam0->f_2841.f_807, "arrive_response", &(uParam0->f_2841.f_818[iParam1]), 0, uParam0->f_2841.f_40))
		{
			return;
		}
	}
}

void func_1482(var uParam0)
{
	uParam0->f_1671.f_112 = 0;
	uParam0->f_1671.f_112.f_1 = -1;
	uParam0->f_1671.f_112.f_2 = -1;
	func_478(&(uParam0->f_1671.f_112.f_3));
}

void func_1483(var uParam0, int iParam1)
{
	iVar0 = func_1332(&(uParam0->f_152.f_416));
	clear_bit(&iVar0, iParam1);
	func_897(uParam0, iVar0, "leave_response", iParam1, 100);
}

void func_1484(int iParam0)
{
	func_432(&(Global_1572887->f_106.f_15), iParam0);
}

void func_1485(var uParam0, bool bParam1)
{
	if (uParam0->f_442 && !bParam1)
	{
		_uiprompt_set_active_group_this_frame(160258628, _create_var_string(2, "CASH_STRING", func_1451(uParam0, uParam0->f_442.f_4)), 1, 0, 0, func_1660(uParam0->f_442.f_22));
	}
}

void func_1486(var uParam0)
{
	if (!uParam0->f_57)
	{
		uParam0->f_57 = 1;
	}
}

int func_1487(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5)
{
	*uParam4 = (iParam2 - func_618(uParam0, iParam1));
	*uParam5 = (iParam2 - func_1259(uParam0));
	if (iParam2 == func_618(uParam0, iParam1))
	{
		*uParam3 = 1;
		return 1;
	}
	else if (iParam2 == (func_204(uParam0, iParam1) + func_618(uParam0, iParam1)))
	{
		*uParam3 = 5;
		return 1;
	}
	else if (func_1259(uParam0) == 0)
	{
		*uParam3 = 2;
		return 1;
	}
	else if (func_1259(uParam0) == iParam2)
	{
		*uParam3 = 3;
		return 1;
	}
	else
	{
		*uParam3 = 4;
		return 1;
	}
	return 0;
}

void func_1488(var uParam0)
{
	if (does_cam_exist(*uParam0))
	{
		render_script_cams(false, false, 3000, true, false, 0);
		if (is_cam_active(*uParam0))
		{
			set_cam_active(*uParam0, false);
		}
		destroy_cam(*uParam0, false);
	}
	if (uParam0->f_28)
	{
		unlock_minimap_angle();
		uParam0->f_28 = 0;
	}
	uParam0->f_1 = { 0f, 0f, 0f };
	uParam0->f_4 = { 0f, 0f, 0f };
	uParam0->f_7 = 0f;
	uParam0->f_25 = 0;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0f;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = 0f;
	uParam0->f_12 = 0f;
	uParam0->f_13 = { 0f, 0f, 0f };
	uParam0->f_16 = { 0f, 0f, 0f };
	uParam0->f_19 = { 0f, 0f, 0f };
	uParam0->f_22 = 0f;
	uParam0->f_23 = 0f;
}

void func_1489(var uParam0, int iParam1)
{
	if (&uParam0->f_34[iParam1])
	{
		_databinding_clear_binding_array(uParam0->f_34[iParam1]->f_14);
		_databinding_remove_data_entry(uParam0->f_34[iParam1]->f_14);
		if (*uParam0 == 0)
		{
			_databinding_clear_binding_array(uParam0->f_34[iParam1]->f_15);
			_databinding_remove_data_entry(uParam0->f_34[iParam1]->f_15);
		}
		_databinding_remove_data_entry(uParam0->f_34[iParam1]->f_1);
		uParam0->f_34[iParam1] = 0;
	}
	clear_bit(&(uParam0->f_163), iParam1);
}

void func_1490(var uParam0, int iParam1, char* sParam2)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_10)
	{
		return;
	}
	_databinding_add_data_string(&(uParam0->f_10[iParam1]), "text", sParam2);
}

void func_1491(var uParam0, int iParam1, char* sParam2)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_10)
	{
		return;
	}
	_databinding_add_data_string(&(uParam0->f_10[iParam1]), "moneyText", sParam2);
}

bool func_1492(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

bool func_1493(int iParam0, int iParam1, bool bParam2)
{
	if (!func_1661(iParam0))
	{
		return false;
	}
	if (_0xf540239f9937033b(iParam0, iParam1) == 0)
	{
		return false;
	}
	if (bParam2)
	{
		return !func_1662(iParam0, iParam1);
	}
	return true;
}

bool func_1494(int iParam0, int iParam1)
{
	if (!func_1492(iParam0, 0))
	{
		return func_1663(func_1495(iParam0), iParam1);
	}
	if (iParam1 == 0)
	{
		return false;
	}
	if (_item_database_does_item_have_tag(iParam0, iParam1, 1120943070))
	{
		return true;
	}
	return false;
}

int func_1495(int iParam0)
{
	return iParam0;
}

int func_1496(int iParam0, bool bParam1)
{
	if (!func_1664(iParam0, 2))
	{
		return 0;
	}
	iVar0 = 0;
	if ((iVar0 != 0 && bParam1) && _0xfbe782b3165ac8ec(iVar0))
	{
		return 0;
	}
	return iVar0;
}

bool func_1497(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_1661(iParam0))
	{
		return false;
	}
	*uParam3 = _0xf540239f9937033b(iParam0, iParam1);
	if (*uParam3 == 0)
	{
		if (!bParam4)
		{
		}
		return false;
	}
	if (!bParam4)
	{
	}
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (!_0xf27f01bbf5acd3f3(iParam0, iParam1, iVar0, (*uParam2)[iVar0]))
		{
			Jump @112; //curOff = 100
		}
		else if (!bParam4)
		{
		}
		iVar0++;
	}
	if (bParam5)
	{
		func_1665(iParam0, iParam1, uParam2, *uParam3);
	}
	return true;
}

void func_1498(int iParam0, int iParam1, var uParam2, int iParam3)
{
	if (*uParam2 < 15)
	{
		return;
	}
	else if (iParam3 > *uParam2 || iParam3 < 1)
	{
		return;
	}
	Var7.f_1 = 10;
	if (!_item_database_get_item_price_modifiers(iParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		fVar21[iVar0] = 1f;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Var7)
	{
		uVar6 = &Var7.f_1[iVar1];
		iVar4 = _item_database_get_number_of_modified_prices(uVar6);
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (_item_database_get_modified_price(uVar6, iVar2) != iParam1)
			{
			}
			else
			{
				iVar5 = _item_database_get_number_of_modifiers(uVar6);
				iVar3 = 0;
				while (iVar3 < iVar5)
				{
					if (!_item_database_fillout_modifier(uVar6, iVar3, &Var19))
					{
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < iParam3)
						{
							if (uParam2[iVar0] == Var19)
							{
								fVar21[iVar0] = (&fVar21[iVar0] + (Var19.f_1 - 1f));
							}
							else
							{
								iVar0++;
							}
						}
					}
					iVar3++;
				}
			}
			else
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (&fVar21[iVar0] != 1f && (*uParam2)[iVar0]->f_1 > 0)
		{
			if (uParam2[iVar0] == 773203532)
			{
				(*uParam2)[iVar0]->f_1 = (((100 * (*uParam2)[iVar0]->f_1) * round((&fVar21[iVar0] * 100f))) / 1000000) * 100;
			}
			else
			{
				(*uParam2)[iVar0]->f_1 = (((100 * (*uParam2)[iVar0]->f_1) * round((&fVar21[iVar0] * 100f))) / 10000);
			}
			if ((*uParam2)[iVar0]->f_1 == 0 && func_1666(uParam2[iVar0]) != -829303394)
			{
				(*uParam2)[iVar0]->f_1 = 1;
			}
		}
		iVar0++;
	}
}

void func_1499(var uParam0, int iParam1, var uParam2)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		(*uParam0->f_43[iParam1])[iVar0] = uParam2[iVar0];
		iVar0++;
	}
}

void func_1500(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (uParam3[iVar0] > 0)
		{
			func_1152(uParam0, iParam1, iVar0, uParam2[iVar0], uParam3[iVar0], func_1160(uParam2[iVar0], uParam3[iVar0], 10), bParam4, 0);
		}
		else
		{
			func_1158(uParam0, iParam1, iVar0, bParam4);
		}
		iVar0++;
	}
}

bool func_1501(var uParam0, int iParam1, int iParam2, float fParam3, var uParam4, bool bParam5)
{
	bVar0 = true;
	if (iParam2 == 0)
	{
		if (iParam1 == 0)
		{
			vVar1 = { 0.1398f, 0.3457f, 0.803f };
			vVar4 = { 0f, 0f, 177.1619f };
		}
		else if (iParam1 == 1)
		{
			vVar1 = { 0.0686f, 0.3527f, 0.803f };
			vVar4 = { 0f, 0f, 179.3696f };
		}
		else if (iParam1 == 2)
		{
			vVar1 = { -0.0038f, 0.35f, 0.803f };
			vVar4 = { 0f, 0f, -180f };
		}
		else if (iParam1 == 3)
		{
			vVar1 = { -0.0748f, 0.3543f, 0.803f };
			vVar4 = { 0f, 0f, 178.0068f };
		}
		else if (iParam1 == 4)
		{
			vVar1 = { -0.1462f, 0.3533f, 0.803f };
			vVar4 = { 0f, 0f, -180f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam2 == 1)
	{
		if (iParam1 == 0)
		{
			vVar1 = { 0.3693f, 0.0518f, 0.803f };
			vVar4 = { 0f, 0f, 117.1619f };
		}
		else if (iParam1 == 1)
		{
			vVar1 = { 0.3397f, 0.1169f, 0.803f };
			vVar4 = { 0f, 0f, 119.3696f };
		}
		else if (iParam1 == 2)
		{
			vVar1 = { 0.3012f, 0.1783f, 0.803f };
			vVar4 = { 0f, 0f, 120f };
		}
		else if (iParam1 == 3)
		{
			vVar1 = { 0.2694f, 0.2419f, 0.803f };
			vVar4 = { 0f, 0f, 118.0068f };
		}
		else if (iParam1 == 4)
		{
			vVar1 = { 0.2328f, 0.3032f, 0.803f };
			vVar4 = { 0f, 0f, 120f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam2 == 2)
	{
		if (iParam1 == 0)
		{
			vVar1 = { 0.2295f, -0.2939f, 0.803f };
			vVar4 = { 0f, 0f, 57.1619f };
		}
		else if (iParam1 == 1)
		{
			vVar1 = { 0.2711f, -0.2358f, 0.803f };
			vVar4 = { 0f, 0f, 59.3696f };
		}
		else if (iParam1 == 2)
		{
			vVar1 = { 0.305f, -0.1717f, 0.803f };
			vVar4 = { 0f, 0f, 60f };
		}
		else if (iParam1 == 3)
		{
			vVar1 = { 0.3442f, -0.1124f, 0.803f };
			vVar4 = { 0f, 0f, 58.0068f };
		}
		else if (iParam1 == 4)
		{
			vVar1 = { 0.379f, -0.05f, 0.803f };
			vVar4 = { 0f, 0f, 60f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam2 == 3)
	{
		if (iParam1 == 0)
		{
			vVar1 = { -0.1398f, -0.3457f, 0.803f };
			vVar4 = { 0f, 0f, -2.8381f };
		}
		else if (iParam1 == 1)
		{
			vVar1 = { -0.0686f, -0.3527f, 0.803f };
			vVar4 = { 0f, 0f, -0.6304f };
		}
		else if (iParam1 == 2)
		{
			vVar1 = { 0.0038f, -0.35f, 0.803f };
			vVar4 = { 0f, 0f, 0f };
		}
		else if (iParam1 == 3)
		{
			vVar1 = { 0.0748f, -0.3543f, 0.803f };
			vVar4 = { 0f, 0f, -1.9932f };
		}
		else if (iParam1 == 4)
		{
			vVar1 = { 0.1462f, -0.3533f, 0.803f };
			vVar4 = { 0f, 0f, 0f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam2 == 4)
	{
		if (iParam1 == 0)
		{
			vVar1 = { -0.3693f, -0.0518f, 0.803f };
			vVar4 = { 0f, 0f, -62.8381f };
		}
		else if (iParam1 == 1)
		{
			vVar1 = { -0.3397f, -0.1169f, 0.803f };
			vVar4 = { 0f, 0f, -60.6304f };
		}
		else if (iParam1 == 2)
		{
			vVar1 = { -0.3012f, -0.1783f, 0.803f };
			vVar4 = { 0f, 0f, -60f };
		}
		else if (iParam1 == 3)
		{
			vVar1 = { -0.2694f, -0.2419f, 0.803f };
			vVar4 = { 0f, 0f, -61.9932f };
		}
		else if (iParam1 == 4)
		{
			vVar1 = { -0.2328f, -0.3032f, 0.803f };
			vVar4 = { 0f, 0f, -60f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam2 == 5)
	{
		if (iParam1 == 0)
		{
			vVar1 = { -0.2295f, 0.2939f, 0.803f };
			vVar4 = { 0f, 0f, -122.8381f };
		}
		else if (iParam1 == 1)
		{
			vVar1 = { -0.2711f, 0.2358f, 0.803f };
			vVar4 = { 0f, 0f, -120.6304f };
		}
		else if (iParam1 == 2)
		{
			vVar1 = { -0.305f, 0.1717f, 0.803f };
			vVar4 = { 0f, 0f, -120f };
		}
		else if (iParam1 == 3)
		{
			vVar1 = { -0.3442f, 0.1124f, 0.803f };
			vVar4 = { 0f, 0f, -121.9932f };
		}
		else if (iParam1 == 4)
		{
			vVar1 = { -0.379f, 0.05f, 0.803f };
			vVar4 = { 0f, 0f, -120f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else
	{
		vVar1 = { 0f, 0f, (0.8f - 0.05f) };
		vVar4 = { 0f, 0f, 0f };
		bVar0 = true;
	}
	if (bVar0)
	{
		if (bParam5)
		{
			func_540(*uParam0, uParam0->f_3, vVar1, vVar4, fParam3, uParam4);
		}
		else
		{
			*fParam3 = { vVar1 };
			*uParam4 = { vVar4 };
		}
		return true;
	}
	return false;
}

bool func_1502(var uParam0, int iParam1, int iParam2, int iParam3, float fParam4, var uParam5, bool bParam6)
{
	bVar0 = false;
	if (iParam3 == 1)
	{
		if (iParam1 == 0)
		{
			if (iParam2 == 0)
			{
				vVar1 = { -0.0252f, 0.57f, 0.8033f };
				vVar4 = { 0f, -180f, -172.5264f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { 0.0381f, 0.5555f, 0.805f };
				vVar4 = { 0f, 180f, 176.7731f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 1)
		{
			if (iParam2 == 0)
			{
				vVar1 = { 0.481f, 0.3068f, 0.8033f };
				vVar4 = { 0f, -180f, 127.4737f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { 0.5001f, 0.2447f, 0.805f };
				vVar4 = { 0f, 180f, 116.7731f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam2 == 0)
			{
				vVar1 = { 0.5062f, -0.2631f, 0.8033f };
				vVar4 = { 0f, -180f, 67.4737f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { 0.462f, -0.3108f, 0.805f };
				vVar4 = { 0f, 180f, 56.7731f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 == 0)
			{
				vVar1 = { 0.0252f, -0.57f, 0.8033f };
				vVar4 = { 0f, -180f, 7.4737f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { -0.0381f, -0.5555f, 0.805f };
				vVar4 = { 0f, 180f, -3.2269f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 4)
		{
			if (iParam2 == 0)
			{
				vVar1 = { -0.481f, -0.3068f, 0.8033f };
				vVar4 = { 0f, -180f, -52.5263f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { -0.5001f, -0.2447f, 0.805f };
				vVar4 = { 0f, 180f, -63.2269f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 5)
		{
			if (iParam2 == 0)
			{
				vVar1 = { -0.5062f, 0.2631f, 0.8033f };
				vVar4 = { 0f, -180f, -112.5264f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { -0.462f, 0.3108f, 0.805f };
				vVar4 = { 0f, 180f, -123.2269f };
				bVar0 = true;
			}
		}
	}
	else if (iParam3 == 2)
	{
		if (iParam1 == 0)
		{
			if (iParam2 == 0)
			{
				vVar1 = { -0.0002f, 0.5979f, 0.8033f };
				vVar4 = { 0f, -180f, -173.5319f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { 0.0146f, 0.5994f, 0.805f };
				vVar4 = { 0f, 180f, 177.2384f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 1)
		{
			if (iParam2 == 0)
			{
				vVar1 = { 0.5177f, 0.2991f, 0.8033f };
				vVar4 = { 0f, -180f, 126.4681f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { 0.5264f, 0.2871f, 0.805f };
				vVar4 = { 0f, 180f, 117.2384f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam2 == 0)
			{
				vVar1 = { 0.5179f, -0.2988f, 0.8033f };
				vVar4 = { 0f, -180f, 66.4681f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { 0.5118f, -0.3123f, 0.805f };
				vVar4 = { 0f, 180f, 57.2384f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 == 0)
			{
				vVar1 = { 0.0002f, -0.5979f, 0.8033f };
				vVar4 = { 0f, -180f, 6.4681f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { -0.0146f, -0.5994f, 0.805f };
				vVar4 = { 0f, 180f, -2.7616f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 4)
		{
			if (iParam2 == 0)
			{
				vVar1 = { -0.5177f, -0.2991f, 0.8033f };
				vVar4 = { 0f, -180f, -53.5319f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { -0.5264f, -0.2871f, 0.805f };
				vVar4 = { 0f, 180f, -62.7616f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 5)
		{
			if (iParam2 == 0)
			{
				vVar1 = { -0.5179f, 0.2988f, 0.8033f };
				vVar4 = { 0f, -180f, -113.5319f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { -0.5118f, 0.3123f, 0.805f };
				vVar4 = { 0f, 180f, -122.7616f };
				bVar0 = true;
			}
		}
	}
	else if (iParam3 == 3)
	{
		if (iParam1 == 0)
		{
			if (iParam2 == 0)
			{
				vVar1 = { -0.0048f, 0.6125f, 0.8052f };
				vVar4 = { 0.0007f, 0.0048f, -5.6941f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { 0.0198f, 0.613f, 0.8032f };
				vVar4 = { 0f, 0f, 0f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 1)
		{
			if (iParam2 == 0)
			{
				vVar1 = { 0.5281f, 0.3104f, 0.8052f };
				vVar4 = { 0.0007f, 0.0048f, -65.6941f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { 0.5408f, 0.2893f, 0.8032f };
				vVar4 = { 0f, 0f, -60f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam2 == 0)
			{
				vVar1 = { 0.5328f, -0.3021f, 0.8052f };
				vVar4 = { 0.0007f, 0.0048f, -125.6941f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { 0.521f, -0.3237f, 0.8032f };
				vVar4 = { 0f, 0f, -120f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 == 0)
			{
				vVar1 = { 0.0048f, -0.6125f, 0.8052f };
				vVar4 = { 0.0007f, 0.0048f, 174.3059f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { -0.0198f, -0.613f, 0.8032f };
				vVar4 = { 0f, 0f, 180f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 4)
		{
			if (iParam2 == 0)
			{
				vVar1 = { -0.5281f, -0.3104f, 0.8052f };
				vVar4 = { 0.0007f, 0.0048f, 114.3059f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { -0.5408f, -0.2893f, 0.8032f };
				vVar4 = { 0f, 0f, 120f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 5)
		{
			if (iParam2 == 0)
			{
				vVar1 = { -0.5328f, 0.3021f, 0.8052f };
				vVar4 = { 0.0007f, 0.0048f, 54.3059f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { -0.521f, 0.3237f, 0.8032f };
				vVar4 = { 0f, 0f, 60f };
				bVar0 = true;
			}
		}
	}
	else if (iParam3 == 4)
	{
		if (iParam1 == 0)
		{
			if (iParam2 == 0)
			{
				vVar1 = { 0.0197f, 0.5193f, 0.8014f };
				vVar4 = { 0f, 180f, 135f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { 0.0276f, 0.513f, 0.8032f };
				vVar4 = { 0f, 180f, 126.7335f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 1)
		{
			if (iParam2 == 0)
			{
				vVar1 = { 0.4595f, 0.2426f, 0.8014f };
				vVar4 = { 0f, 180f, 75f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { 0.458f, 0.2326f, 0.8032f };
				vVar4 = { 0f, 180f, 66.7335f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam2 == 0)
			{
				vVar1 = { 0.4399f, -0.2767f, 0.8014f };
				vVar4 = { 0f, 180f, 15f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { 0.4304f, -0.2804f, 0.8032f };
				vVar4 = { 0f, 180f, 6.7335f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 == 0)
			{
				vVar1 = { -0.0197f, -0.5193f, 0.8014f };
				vVar4 = { 0f, 180f, -45f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { -0.0276f, -0.513f, 0.8032f };
				vVar4 = { 0f, 180f, -53.2665f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 4)
		{
			if (iParam2 == 0)
			{
				vVar1 = { -0.4595f, -0.2426f, 0.8014f };
				vVar4 = { 0f, 180f, -105f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { -0.458f, -0.2326f, 0.8032f };
				vVar4 = { 0f, 180f, -113.2665f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 5)
		{
			if (iParam2 == 0)
			{
				vVar1 = { -0.4399f, 0.2767f, 0.8014f };
				vVar4 = { 0f, 180f, -165f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { -0.4304f, 0.2804f, 0.8032f };
				vVar4 = { 0f, 180f, -173.2665f };
				bVar0 = true;
			}
		}
	}
	else if (iParam3 == 5)
	{
		if (iParam1 == 0)
		{
			if (iParam2 == 0)
			{
				vVar1 = { 0.2147f, 0.5145f, 0.803f };
				vVar4 = { 0f, -180f, -149.0357f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { 0.2194f, 0.5192f, 0.8034f };
				vVar4 = { 0f, -180f, -145.6939f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 1)
		{
			if (iParam2 == 0)
			{
				vVar1 = { 0.5529f, 0.0713f, 0.803f };
				vVar4 = { 0f, -180f, 150.9643f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { 0.5593f, 0.0696f, 0.8034f };
				vVar4 = { 0f, -180f, 154.3062f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam2 == 0)
			{
				vVar1 = { 0.3382f, -0.4432f, 0.803f };
				vVar4 = { 0f, -180f, 90.9643f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { 0.3399f, -0.4496f, 0.8034f };
				vVar4 = { 0f, -180f, 94.3061f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 == 0)
			{
				vVar1 = { -0.2147f, -0.5145f, 0.803f };
				vVar4 = { 0f, -180f, 30.9643f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { -0.2194f, -0.5192f, 0.8034f };
				vVar4 = { 0f, -180f, 34.3061f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 4)
		{
			if (iParam2 == 0)
			{
				vVar1 = { -0.5529f, -0.0713f, 0.803f };
				vVar4 = { 0f, -180f, -29.0357f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { -0.5593f, -0.0696f, 0.8034f };
				vVar4 = { 0f, -180f, -25.6939f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 5)
		{
			if (iParam2 == 0)
			{
				vVar1 = { -0.3382f, 0.4432f, 0.803f };
				vVar4 = { 0f, -180f, -89.0357f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { -0.3399f, 0.4496f, 0.8034f };
				vVar4 = { 0f, -180f, -85.6939f };
				bVar0 = true;
			}
		}
	}
	else if (iParam3 == 0)
	{
		vVar1 = { 0f, 0f, (0.8f - 0.05f) };
		vVar4 = { 0f, 0f, 0f };
		bVar0 = true;
	}
	if (bVar0)
	{
		if (bParam6)
		{
			func_540(*uParam0, uParam0->f_3, vVar1, vVar4, fParam4, uParam5);
		}
		else
		{
			*fParam4 = { vVar1 };
			*uParam5 = { vVar4 };
		}
		return true;
	}
	return false;
}

char* func_1503(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

int func_1504(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	return func_1667(iParam0, iParam1, bParam2, bParam3);
}

int func_1505(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	if (iParam0 == 255 || !network_is_player_active(iParam0))
	{
		return 0;
	}
	func_1668(iParam0, 0);
	func_1669(iParam0, 1105014447);
	if (!is_string_null_or_empty(sParam2))
	{
		if (!is_mp_gamer_tag_active(*uParam3))
		{
			*uParam3 = create_fake_mp_gamer_tag(iParam1, sParam2, true, false, "", 0);
			_set_mp_gamer_tag_visibility(*uParam3, 2);
			_set_mp_gamer_tag_top_icon(*uParam3, 1277358601);
			_set_mp_gamer_tag_type(*uParam3, -86326806);
			_set_mp_gamer_tag_colour(*uParam3, 1105014447);
		}
	}
	return 1;
}

int func_1506(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 3;
		case 2:
			return 1;
		case 3:
			return 1;
		case 4:
			return 5;
		case 5:
			return 6;
		case 6:
			return 5;
		case 7:
			return 2;
		case 8:
			return 1;
		case 9:
			return 2;
		case 10:
			return 4;
		case 11:
			return 3;
		case 12:
			return 6;
		case 14:
			return 6;
		case 15:
			return 6;
		case 16:
			return 2;
		case 17:
			return 6;
		case 18:
			return 0;
		case 26:
			return 6;
		case 28:
			return 5;
		case 29:
			return 2;
		case 34:
			return 5;
		case 35:
			return 1;
		case 36:
			return 4;
		case 37:
			return 7;
		case 38:
			return 5;
		case 39:
			return 1;
		case 41:
			return 1;
		case 45:
			return 0;
		case 46:
			return 5;
		case 47:
			return 6;
		case 48:
			return 1;
		case 50:
			return 7;
		case 51:
			return 6;
		case 52:
			return 4;
		case 53:
			return 7;
		case 56:
			return 6;
		case 58:
			return 4;
		case 61:
			return 6;
		case 63:
			return 3;
		case 64:
			return 6;
		case 66:
			return 6;
		case 67:
			return 7;
		case 68:
			return 3;
		case 71:
			return 7;
		case 73:
			return 6;
		case 75:
			return 6;
		case 76:
			return 7;
		default:
			break;
	}
	return 8;
}

char* func_1507(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MINIGAME_VOFX_MALE_AVOID_01";
		case 1:
			return "MINIGAME_VOFX_MALE_AVOID_02";
		case 2:
			return "MINIGAME_VOFX_MALE_AVOID_03";
		case 3:
			return "MINIGAME_VOFX_MALE_AVOID_04";
		case 4:
			return "MINIGAME_VOFX_MALE_AVOID_05";
		case 5:
			return "MINIGAME_VOFX_MALE_AGGRESSIVE_01";
		case 6:
			return "MINIGAME_VOFX_MALE_AGGRESSIVE_03";
		case 7:
			return "MINIGAME_VOFX_MALE_TIMID_01";
		case 8:
			return "unknown";
		default:
			break;
	}
	return "unknown";
}

void func_1508(var uParam0, int iParam1)
{
	if (!_does_anim_scene_exist(uParam0->f_798))
	{
	}
	else
	{
		set_anim_scene_origin(uParam0->f_798, *uParam0->f_1236[iParam1], *uParam0->f_1255[iParam1], 2);
		set_anim_scene_entity(uParam0->f_798, "player", &(uParam0->f_818[iParam1]), 0);
		start_anim_scene(uParam0->f_798);
	}
}

void func_1509(var uParam0)
{
	_databinding_clear_binding_array(uParam0->f_9);
	uParam0->f_163 = 0;
}

void func_1510(var uParam0, int iParam1)
{
	_databinding_insert_ui_item_to_list_from_context_string_alias(uParam0->f_9, -1, "player_stack_item", uParam0->f_34[iParam1]->f_1);
	set_bit(&(uParam0->f_163), iParam1);
}

void func_1511(var uParam0, bool bParam1)
{
	if (*uParam0 == 0)
	{
		return;
	}
	_databinding_write_data_bool(uParam0->f_6, bParam1);
}

void func_1512(var uParam0, bool bParam1)
{
	if (*uParam0 == 0)
	{
		return;
	}
	_databinding_write_data_bool(uParam0->f_4, bParam1);
}

int func_1513(var uParam0, char* sParam1)
{
	switch (uParam0->f_1)
	{
		case 0:
			StringCopy(sParam1, "HEARTS_", 16);
			break;
		case 1:
			StringCopy(sParam1, "DIAMONDS_", 16);
			break;
		case 3:
			StringCopy(sParam1, "CLUBS_", 16);
			break;
		case 2:
			StringCopy(sParam1, "SPADES_", 16);
			break;
		default:
			StringCopy(sParam1, "BACK", 16);
			return 0;
	}
	switch (*uParam0)
	{
		case 2:
			StringConCat(sParam1, "2", 16);
			break;
		case 3:
			StringConCat(sParam1, "3", 16);
			break;
		case 4:
			StringConCat(sParam1, "4", 16);
			break;
		case 5:
			StringConCat(sParam1, "5", 16);
			break;
		case 6:
			StringConCat(sParam1, "6", 16);
			break;
		case 7:
			StringConCat(sParam1, "7", 16);
			break;
		case 8:
			StringConCat(sParam1, "8", 16);
			break;
		case 9:
			StringConCat(sParam1, "9", 16);
			break;
		case 10:
			StringConCat(sParam1, "10", 16);
			break;
		case 11:
			StringConCat(sParam1, "J", 16);
			break;
		case 12:
			StringConCat(sParam1, "Q", 16);
			break;
		case 13:
			StringConCat(sParam1, "K", 16);
			break;
		case 14:
			StringConCat(sParam1, "A", 16);
			break;
		default:
			StringCopy(sParam1, "BACK", 16);
			return 0;
	}
	return 1;
}

void func_1514(var uParam0, int iParam1, char[4] cParam2)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_17)
	{
		return;
	}
	_databinding_write_data_string(&(uParam0->f_17[iParam1]), cParam2);
}

void func_1515(var uParam0, bool bParam1)
{
	if (*uParam0 == 0)
	{
		return;
	}
	_databinding_write_data_bool(uParam0->f_9, bParam1);
}

void func_1516(var uParam0, bool bParam1)
{
	if (*uParam0 == 0)
	{
		return;
	}
	_databinding_write_data_bool(uParam0->f_9, !bParam1);
}

void func_1517(var uParam0, int iParam1, char* sParam2)
{
	if (*uParam0 == 0)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= uParam0->f_16)
	{
		return;
	}
	_databinding_write_data_string(&(uParam0->f_16[iParam1]), sParam2);
}

void func_1518(var uParam0, vector3 vParam1, vector3 vParam4, float fParam7, int iParam8, int iParam9, float fParam10, bool bParam11, int iParam12, int iParam13, float fParam14, bool bParam15, float fParam16, float fParam17)
{
	uParam0->f_1 = { vParam1 };
	uParam0->f_4 = { vParam4 };
	uParam0->f_7 = fParam7;
	uParam0->f_25 = iParam8;
	uParam0->f_26 = iParam9;
	uParam0->f_27 = fParam10;
	uParam0->f_8 = { vParam1 };
	uParam0->f_11 = 1f;
	uParam0->f_12 = 0f;
	uParam0->f_13 = { 0f, 0f, 0f };
	uParam0->f_16 = { 0f, 0f, 0f };
	uParam0->f_19 = { 0f, 0f, 0f };
	uParam0->f_22 = fParam7;
	uParam0->f_23 = (fParam7 + fParam16);
	uParam0->f_28 = iParam12;
	uParam0->f_24 = bParam11;
	*uParam0 = create_cam("DEFAULT_SCRIPTED_CAMERA", false);
	set_cam_active(*uParam0, true);
	set_cam_params(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_23, 0, 1, 1, 2, 1, 0);
	if (!bParam15)
	{
		shake_cam(*uParam0, "HAND_SHAKE", fParam17);
	}
	render_script_cams(true, false, 3000, true, false, 0);
	if (fParam14 > 0f)
	{
		set_cam_near_clip(*uParam0, fParam14);
	}
	if (uParam0->f_28)
	{
		lock_minimap_angle(iParam13);
	}
	uParam0->f_34 = 0;
	uParam0->f_35 = 0;
	uParam0->f_36 = 0;
	uParam0->f_38 = 0;
	uParam0->f_37 = 0;
}

void func_1519(int iParam0, int iParam1)
{
	if (does_cam_exist(iParam0) && does_cam_exist(iParam1))
	{
		set_cam_params(iParam1, get_cam_coord(iParam0), get_cam_rot(iParam0, 2), get_cam_fov(iParam0), 0, 1, 1, 2, 1, 0);
	}
}

bool func_1520(int iParam0)
{
	if (Global_1952637->f_2843.f_1 <= 0)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		Global_1952637->f_2843.f_2 = 0;
		Global_1952637->f_2843.f_1 = 0;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			*Global_1952637->f_2843.f_43[iVar0] = { Var2 };
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < 39)
		{
			Global_1952637->f_2843.f_3[iVar1] = 0;
			iVar1++;
		}
		return true;
	}
	iVar0 = func_1670(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	Global_1952637->f_2843.f_2 = (Global_1952637->f_2843.f_2 - (Global_1952637->f_2843.f_2 && Global_1952637->f_2843.f_43[iVar0]->f_1));
	iVar1 = 0;
	while (iVar1 < 39)
	{
		if (func_1671(iVar1, Global_1952637->f_2843.f_43[iVar0]->f_1))
		{
			func_1672(iVar1, Global_1952637->f_2843.f_43[iVar0]->f_1);
		}
		iVar1++;
	}
	Global_1952637->f_2843.f_1 = (Global_1952637->f_2843.f_1 - 1);
	*Global_1952637->f_2843.f_43[iVar0] = { *Global_1952637->f_2843.f_43[Global_1952637->f_2843.f_1] };
	Global_1952637->f_2843.f_43[Global_1952637->f_2843.f_1]->f_1 = 0;
	Global_1952637->f_2843.f_43[Global_1952637->f_2843.f_1] = 0;
	return true;
}

int func_1521(int iParam0)
{
	Var1 = -961687407;
	if (func_505() == -1)
	{
		Var1 = 1444744190;
	}
	Var1.f_1 = iParam0;
	Var1.f_3 = 0;
	_0x91ded5dd64bb2691(&Var1);
	if (!_0xed4413cee1bf142c(&Var1))
	{
		return 0;
	}
	if (!_0x44b3a36933ac009c(&iVar0, &Var1, -624749060))
	{
		return 0;
	}
	return func_1673(iVar0);
}

int func_1522(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam1 == 0)
	{
		iParam1 = -1;
	}
	if (!func_1674(bParam4))
	{
	}
	if (!bParam2)
	{
		if (is_ped_a_player(iParam0))
		{
			func_1675(2, iParam1, 0, 0, 0);
		}
		else
		{
			func_1675(2, iParam1, 1, iParam0, 0);
		}
		return 1;
	}
	func_1676(&(Global_1952637->f_1675), iParam0, 1, iParam1, 1, bParam3, 1, 1);
	return 1;
}

void func_1523(int iParam0)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_5 != 0)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_5 = 0;
		func_1525(iParam0);
	}
}

void func_1524(int iParam0)
{
	if (Global_1071686->f_21952[iParam0]->f_3 != 0)
	{
		Global_1071686->f_21952[iParam0]->f_3 = 0;
		func_1525(iParam0);
	}
}

void func_1525(int iParam0)
{
	if (!func_1677(iParam0))
	{
		_0x31010318ba9897ac(&(Global_1071686->f_21416.f_260), iParam0);
	}
}

bool func_1526(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1951255)[iParam0]->f_1 && iParam1) != 0;
}

void func_1527(int iParam0)
{
	if (!func_1678(iParam0))
	{
		return;
	}
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		_uiprompt_delete((*Global_1951255)[iParam0]->f_3);
	}
	(*Global_1951255)[iParam0]->f_4 = 0;
	(*Global_1951255)[iParam0] = 1;
	(*Global_1951255)[iParam0]->f_16 = 0;
	(*Global_1951255)[iParam0]->f_1 = 0;
	(*Global_1951255)[iParam0]->f_6 = { 0f, 0f, 0f };
	(*Global_1951255)[iParam0]->f_12 = { 0f, 0f, 0f };
	(*Global_1951255)[iParam0]->f_9 = 0f;
	(*Global_1951255)[iParam0]->f_10 = 0;
	(*Global_1951255)[iParam0]->f_11 = 0;
	(*Global_1951255)[iParam0]->f_2 = 1;
	(*Global_1951255)[iParam0]->f_15 = -1f;
}

void func_1528(var uParam0, char* sParam1)
{
	if (*uParam0 == 0)
	{
		return;
	}
	_databinding_write_data_string(uParam0->f_8, sParam1);
}

void func_1529(var uParam0, int iParam1)
{
	if (*uParam0 == 0)
	{
		return;
	}
	_databinding_write_data_int(uParam0->f_11, iParam1);
}

void func_1530(var uParam0, bool bParam1)
{
	if (*uParam0 == 0)
	{
		return;
	}
	_databinding_write_data_bool(uParam0->f_13, bParam1);
}

void func_1531(var uParam0, int iParam1)
{
	_databinding_write_data_bool(uParam0->f_34[iParam1]->f_5, false);
}

bool func_1532(struct<2> Param0, var uParam2)
{
	if (!func_247(Param0))
	{
		return false;
	}
	func_1679(uParam2);
	switch (Param0)
	{
		case 2:
			_copy_memory(uParam2, Global_1071686->f_636[Param0.f_1], 3);
			return true;
		case 3:
			_copy_memory(uParam2, Global_1071686->f_636.f_602[Param0.f_1], 3);
			return true;
		case 4:
			_copy_memory(uParam2, Global_1071686->f_636.f_2104[Param0.f_1], 3);
			return true;
		case 5:
			_copy_memory(uParam2, Global_1071686->f_636.f_12606[Param0.f_1], 3);
			return true;
		case 6:
			_copy_memory(uParam2, Global_1071686->f_636.f_12908[Param0.f_1], 3);
			return true;
		case 7:
			_copy_memory(uParam2, Global_1071686->f_636.f_15910[Param0.f_1], 3);
			return true;
		case 8:
			_copy_memory(uParam2, Global_1071686->f_636.f_16512[Param0.f_1], 3);
			return true;
		default:
			break;
	}
	return false;
}

int func_1533(struct<2> Param0)
{
	if (Global_1071686->f_19550 <= 0)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_1532(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1071686->f_19550 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_1532(*Global_1071686->f_19550.f_1[iVar8], &vVar3);
		if (vVar3.x > vVar0.x)
		{
			iVar7 = (iVar8 - 1);
		}
		else if (vVar3.x < vVar0.x)
		{
			iVar6 = iVar8 + 1;
		}
		else
		{
			return iVar8;
		}
	}
	return -1;
}

int func_1534(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return -1690863991;
		case 3:
			return 1286170048;
		case 4:
			return -342492333;
		case 5:
			return 1140089012;
		case 8:
			return 634321112;
		case 7:
			return -2079273178;
		case 6:
			return -147846054;
		default:
			break;
	}
	return 0;
}

void func_1535(struct<2> Param0, var uParam2)
{
	if (!network_is_game_in_progress())
	{
		return;
	}
	iVar2 = -1;
	iVar3 = _0x901e0dc25080c8b9(player_id());
	if (iVar3 == 0)
	{
		return;
	}
	switch (func_248(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_1680(func_1618(Param0));
			iVar5 = func_1681(iVar4);
			if (!func_1682(iVar5, 0))
			{
				return;
			}
			break;
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (&Global_1107216->f_33[iVar1] == iVar3)
		{
			iVar2 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	if (iVar2 == -1)
	{
		return;
	}
	iVar0 = Global_1107216->f_33[iVar2]->f_3.f_1;
	if (iVar0 == -1)
	{
		return;
	}
	uParam2->f_2 = Global_1116202[iVar0];
}

int func_1536(struct<2> Param0)
{
	iVar0 = func_1533(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1683(iVar0);
}

int func_1537(struct<2> Param0, int iParam2)
{
	if (Global_1071686->f_19550 >= 32)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_1532(Param0, &vVar0))
	{
		return -1;
	}
	vVar6 = -1;
	vVar6.f_1 = -1;
	vVar6 = { Param0 };
	vVar6.f_2 = iParam2;
	if (Global_1071686->f_19550 == 0)
	{
		*Global_1071686->f_19550.f_1[Global_1071686->f_19550] = { vVar6 };
		Global_1071686->f_19550++;
		return 0;
	}
	iVar9 = 0;
	while (iVar9 < Global_1071686->f_19550)
	{
		func_1532(*Global_1071686->f_19550.f_1[iVar9], &vVar3);
		if (vVar0.x == vVar3.x)
		{
			*Global_1071686->f_19550.f_1[iVar9] = { vVar6 };
			return iVar9;
		}
		else if (vVar0.x > vVar3.x)
		{
			iVar9++;
		}
		else if (vVar0.x < vVar3.x)
		{
			func_1684(iVar9);
			*Global_1071686->f_19550.f_1[iVar9] = { vVar6 };
			return iVar9;
		}
	}
	if (Global_1071686->f_19550 < 31)
	{
		iVar9 = Global_1071686->f_19550;
		*Global_1071686->f_19550.f_1[iVar9] = { vVar6 };
		Global_1071686->f_19550++;
		if (Global_1071686->f_19550 > 32)
		{
			Global_1071686->f_19550 = 32;
		}
		return iVar9;
	}
	return -1;
}

void func_1538()
{
	iVar0 = 0;
	vVar1.f_1 = -1;
	vVar1.f_2 = -1;
	while (iVar0 < Global_1071686->f_19550)
	{
		if (func_1532(*Global_1071686->f_19550.f_1[iVar0], &vVar1))
		{
		}
		iVar0++;
	}
}

int func_1539(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1746095559;
		case 1:
			return 195938434;
		case 2:
			return 416962030;
		case 3:
			return 1314857970;
		case 4:
			return -999071359;
		case 5:
			return -683250308;
		case 6:
			return -857617219;
		case 7:
			return 1780145725;
		case 8:
			return -1521715232;
		case 9:
			return -1560342203;
		case 10:
			return 1343354387;
		case 11:
			return 1052408375;
		case 12:
			return -1759599185;
		case 13:
			return 1481148278;
		case 14:
			return -16106300;
		case 15:
			return 105387183;
		case 16:
			return -2095449173;
		case 17:
			return -2097683294;
		case 18:
			return 1805131596;
		case 19:
			return 314693001;
		case 20:
			return -1728509733;
		case 21:
			return -42817558;
		case 22:
			return 1458462042;
		case 23:
			return 481893872;
		case 24:
			return 1714017012;
		case 25:
			return 1437412331;
		case 26:
			return -493957506;
		case 27:
			return 1224055398;
		case 28:
			return -953803399;
		case 29:
			return 2006449383;
		case 30:
			return -1788230330;
		case 31:
			return 1396375613;
		case 32:
			return -547914843;
		case 33:
			return -1547772340;
		case 34:
			return -59535775;
		case 35:
			return -1701536647;
		case 36:
			return 1923998736;
		case 37:
			return -1103472584;
		case 38:
			return -2051405571;
		case 39:
			return 1135209633;
		case 40:
			return -1810065318;
		case 41:
			return 2140177766;
		case 42:
			return 1685924442;
		case 43:
			return 1171995096;
		case 44:
			return -267442581;
		case 45:
			return -1361146315;
		case 46:
			return 1352191066;
		case 47:
			return -2130852007;
		case 48:
			return -102241052;
		case 49:
			return 1420320220;
		case 50:
			return -1715130379;
		case 51:
			return -661550833;
		case 52:
			return -1358475411;
		case 53:
			return -1848598303;
		case 54:
			return -173287735;
		case 55:
			return -715363719;
		case 56:
			return -1117123933;
		case 57:
			return 1972833301;
		case 58:
			return 0;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

void func_1540(char[12] cParam0)
{
	Global_1939161->f_75.f_67 = { cParam0 };
}

void func_1541()
{
	StringCopy(&(Global_1939161->f_75.f_67), "", 24);
}

bool func_1542(int iParam0)
{
	iVar0 = func_1685(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_1686(iVar1))
	{
		if (Global_1071686->f_19648.f_24 && !func_1687(iParam0))
		{
			return false;
		}
		return (is_bit_set(&(Global_1071686->f_19648[iVar1]), iVar2) || is_bit_set(&(Global_39.f_110[iVar1]), iVar2));
	}
	return is_bit_set(&(Global_39.f_110[iVar1]), iVar2);
}

int func_1543(struct<2> Param0)
{
	if (!func_247(Param0))
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (func_1115(*Global_1900736->f_1[iVar0], Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1544(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_1900736->f_66 == 0)
	{
		return 0;
	}
	if (Global_1900736->f_66 == 1)
	{
		Global_1900736->f_66 = 0;
		func_1688(Global_1900736->f_1[0]);
		return 1;
	}
	func_1688(Global_1900736->f_1[iParam0]);
	Global_1900736->f_66 = (Global_1900736->f_66 - 1);
	func_1689(iParam0, Global_1900736->f_66);
	return 1;
}

void func_1545(var uParam0)
{
	Var0 = 1;
	Var0.f_1 = 1;
	*uParam0 = { Var0 };
}

void func_1546(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	(*Global_1951255)[iParam0]->f_4 = iParam1;
	(*Global_1951255)[iParam0] = iParam4;
	(*Global_1951255)[iParam0]->f_16 = get_id_of_this_thread();
	(*Global_1951255)[iParam0]->f_2 = iParam5;
	(*Global_1951255)[iParam0]->f_6 = { vParam6 };
	(*Global_1951255)[iParam0]->f_9 = fParam9;
	(*Global_1951255)[iParam0]->f_10 = iParam10;
	(*Global_1951255)[iParam0]->f_11 = iParam11;
	(*Global_1951255)[iParam0]->f_12 = { 0f, 0f, 0f };
	(*Global_1951255)[iParam0]->f_5 = iParam12;
	(*Global_1951255)[iParam0]->f_1 = 2;
	(*Global_1951255)[iParam0]->f_17 = -1;
	(*Global_1951255)[iParam0]->f_18 = iParam16;
	(*Global_1951255)[iParam0]->f_19 = iParam15;
	(*Global_1951255)[iParam0]->f_20 = bParam25;
	(*Global_1951255)[iParam0]->f_22 = 0f;
	if (bParam25)
	{
		(*Global_1951255)[iParam0]->f_21 = get_game_timer();
	}
	else
	{
		(*Global_1951255)[iParam0]->f_21 = _get_system_time();
	}
	iVar0 = _uiprompt_register_begin();
	_uiprompt_set_control_action(iVar0, iParam1);
	if (iParam23 != 0)
	{
		_uiprompt_set_control_action(iVar0, iParam23);
	}
	_uiprompt_set_text(iVar0, sParam2);
	if (iParam3 == 4)
	{
		_uiprompt_context_set_point(iVar0, vParam6);
		_uiprompt_context_set_size(iVar0, fParam9);
	}
	else if (iParam3 == 2)
	{
		_0x4d107406667423be(iVar0, iParam10);
	}
	else if (iParam3 == 5)
	{
		_0x4d107406667423be(iVar0, iParam11);
		_uiprompt_context_set_point(iVar0, 0f, 0f, 0f);
		_uiprompt_context_set_size(iVar0, fParam9);
	}
	_uiprompt_set_priority(iVar0, iParam4);
	_uiprompt_set_transport_mode(iVar0, iParam5);
	_uiprompt_set_attribute(iVar0, 18, 1);
	if (bParam22)
	{
		_0x53ce46c01a089da1(iVar0, 1);
	}
	switch (iParam14)
	{
		case 0:
			_uiprompt_set_standard_mode(iVar0, 0);
			break;
		case 2:
			_uiprompt_set_standard_mode(iVar0, 1);
			break;
		case 1:
			_uiprompt_set_pressed_timed_mode(iVar0, iParam16);
			break;
		case 3:
			_uiprompt_set_hold_indefinitely_mode(iVar0);
			break;
		case 6:
			_uiprompt_set_hold_auto_fill_mode(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				_uiprompt_set_attribute(iVar0, 24, 1);
			}
			break;
		case 7:
			_0xa3f2149aa24f3d8e(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				_uiprompt_set_attribute(iVar0, 24, 1);
			}
			break;
		case 8:
			_uiprompt_set_mash_mode(iVar0, iParam17);
			break;
		case 9:
			_uiprompt_set_mash_auto_fill_mode(iVar0, iParam16, iParam17);
			break;
		case 14:
			_uiprompt_set_mash_indefinitely_mode(iVar0);
			break;
		case 16:
			_uiprompt_set_target_mode(iVar0, 0.5f, 0.1f, 0);
			break;
		case 10:
			_uiprompt_set_mash_with_resistance_mode(iVar0, iParam17, iParam18, iParam19);
			break;
		case 4:
		case 5:
			_uiprompt_set_standardized_hold_mode(iVar0, iParam24);
			break;
		case 11:
			_uiprompt_set_mash_with_resistance_can_fail_mode(iVar0, iParam17, iParam18, iParam19);
			break;
		case 12:
			_uiprompt_set_mash_manual_mode(iVar0, (1f / to_float(iParam17)), iParam18, 0f, iParam19);
			break;
		case 13:
			_uiprompt_set_mash_manual_can_fail_mode(iVar0, (1f / to_float(iParam17)), iParam18, 0f, iParam19);
			break;
		case 15:
			_uiprompt_set_rotate_mode(iVar0, iParam20, iParam21);
			_uiprompt_set_attribute(iVar0, 10, 1);
			break;
	}
	_uiprompt_register_end(iVar0);
	(*Global_1951255)[iParam0]->f_3 = iVar0;
	func_1082(iParam0, 1);
	func_1690(iParam0, 1);
	func_1691(iParam0, 128);
}

int func_1547(int iParam0, vector3 vParam1, float fParam4, int iParam5, var uParam6, int iParam7)
{
	if (!func_1692(iParam0))
	{
		return 0;
	}
	if (!func_1693(iParam0, iParam5, &vVar0))
	{
		return 0;
	}
	*uParam6 = { _get_object_offset_from_coords(vParam1, fParam4, vVar0) };
	if (iParam7 == 1)
	{
		if (get_ground_z_for_3d_coord(*uParam6 + Vector(0.1f, 0f, 0f), &uVar3, false))
		{
			uParam6->f_2 = uVar3;
		}
	}
	return 1;
}

void func_1548(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!_does_volume_exist(*iParam0))
	{
		*iParam0 = _create_volume_cylinder_with_custom_name(vParam1, vParam4, vParam7, func_1694());
	}
}

bool func_1549(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 325252933:
					return true;
				case -1740828633:
				case 1609095284:
					return true;
				case -1510839859:
				case 1407600554:
					return true;
				default:
					break;
			}
			break;
		case 2:
			if (iParam1 == -1243444973)
			{
				return true;
			}
			if (iParam1 == -289651159)
			{
				return true;
			}
			if (iParam1 == -1443906703)
			{
				return true;
			}
			if (iParam1 == 325252933)
			{
				return true;
			}
			if (iParam1 == -1763848034)
			{
				return true;
			}
			if (iParam1 == 2096698905)
			{
				return true;
			}
			if (iParam1 == 375867283)
			{
				return true;
			}
			if (iParam1 == 1999055955)
			{
				return true;
			}
			break;
		case 1:
			if (iParam1 == -1025740342)
			{
				return true;
			}
			if (iParam1 == -1937484496)
			{
				return true;
			}
			if (iParam1 == 463271055)
			{
				return true;
			}
			if (iParam1 == 1186910594)
			{
				return true;
			}
			if (iParam1 == 1600083684)
			{
				return true;
			}
			if (iParam1 == 264425748)
			{
				return true;
			}
			if (iParam1 == -1006095118)
			{
				return true;
			}
			break;
		case 3:
			if (iParam1 == -1443906703)
			{
				return true;
			}
			if (iParam1 == -1618805595)
			{
				return true;
			}
			if (iParam1 == 1230724566)
			{
				return true;
			}
			if (iParam1 == 1600083684)
			{
				return true;
			}
			if (iParam1 == -1006095118)
			{
				return true;
			}
			break;
		default:
			return true;
	}
	return false;
}

void func_1550(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

void func_1551(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (does_entity_exist(&(uParam0->f_255[iParam1]->f_15[iParam2])))
	{
		delete_object(uParam0->f_255[iParam1]->f_15[iParam2]);
	}
	uParam0->f_255[iParam1]->f_20[iParam2] = iParam3;
	uParam0->f_255[iParam1]->f_15[iParam2] = uParam0->f_255[iParam1][iParam2];
	uParam0->f_255[iParam1]->f_25[iParam2] = 0f;
	(*uParam0->f_255[iParam1])[iParam2] = 0;
	uParam0->f_255[iParam1]->f_5[iParam2] = 0;
	uParam0->f_255[iParam1]->f_10[iParam2] = 0;
}

bool func_1552(var uParam0, int iParam1, int iParam2, float fParam3, var uParam4, int iParam5, bool bParam6)
{
	bVar0 = true;
	if (iParam1 == 0)
	{
		if (iParam2 == 0)
		{
			vVar1 = { -0.038f, -0.0584f, 0.8029f };
			vVar4 = { 0f, -0.0001f, 11.1898f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.1179f, 0.0527f, 0.8036f };
			vVar4 = { -0.492f, 0.7865f, 1.4459f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.0351f, 0.1703f, 0.8032f };
			vVar4 = { -0.0001f, -0.0002f, 19.0115f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.0718f, -0.0886f, 0.8037f };
			vVar4 = { 0.0004f, 0.002f, 9.99f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 1)
	{
		if (iParam2 == 0)
		{
			vVar1 = { -0.0696f, 0.0037f, 0.8029f };
			vVar4 = { 0f, -0.0001f, -48.8102f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.0133f, 0.1285f, 0.8036f };
			vVar4 = { -0.492f, 0.7865f, -58.5541f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.1651f, 0.0547f, 0.8032f };
			vVar4 = { -0.0001f, -0.0002f, -40.9885f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.0408f, -0.1065f, 0.8037f };
			vVar4 = { 0.0004f, 0.002f, -50.0101f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 2)
	{
		if (iParam2 == 0)
		{
			vVar1 = { -0.0316f, 0.0621f, 0.8029f };
			vVar4 = { 0f, -0.0001f, -108.8102f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.1046f, 0.0758f, 0.8036f };
			vVar4 = { -0.492f, 0.7865f, -118.5541f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.1299f, -0.1156f, 0.8032f };
			vVar4 = { -0.0001f, -0.0002f, -100.9885f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.1126f, -0.0179f, 0.8037f };
			vVar4 = { 0.0004f, 0.002f, -110.0101f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 3)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.038f, 0.0584f, 0.8029f };
			vVar4 = { 0f, -0.0001f, -168.8103f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.1179f, -0.0527f, 0.8036f };
			vVar4 = { -0.492f, 0.7865f, -178.5541f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.0351f, -0.1703f, 0.8032f };
			vVar4 = { -0.0001f, -0.0002f, -160.9886f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.0718f, 0.0886f, 0.8037f };
			vVar4 = { 0.0004f, 0.002f, -170.0101f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 4)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.0696f, -0.0037f, 0.8029f };
			vVar4 = { 0f, -0.0001f, 131.1898f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.0133f, -0.1285f, 0.8036f };
			vVar4 = { -0.492f, 0.7865f, 121.446f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.1651f, -0.0547f, 0.8032f };
			vVar4 = { -0.0001f, -0.0002f, 139.0115f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.0408f, 0.1065f, 0.8037f };
			vVar4 = { 0.0004f, 0.002f, 129.9899f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 5)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.0316f, -0.0621f, 0.8029f };
			vVar4 = { 0f, -0.0001f, 71.1897f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.1046f, -0.0758f, 0.8036f };
			vVar4 = { -0.492f, 0.7865f, 61.4459f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.1299f, 0.1156f, 0.8032f };
			vVar4 = { -0.0001f, -0.0002f, 79.0115f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.1126f, 0.0179f, 0.8037f };
			vVar4 = { 0.0004f, 0.002f, 69.9899f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return false;
	}
	if (iParam5 < 0 || iParam5 >= 10)
	{
		return false;
	}
	if (bParam6)
	{
		func_540(*uParam0, uParam0->f_3, vVar1, vVar4, fParam3, uParam4);
	}
	else
	{
		*fParam3 = { vVar1 };
		*uParam4 = { vVar4 };
	}
	fParam3->f_2 = (fParam3->f_2 + (to_float(iParam5) * 0.006f));
	return true;
}

void func_1553(int iParam0, int iParam1, int iParam2)
{
	iVar1 = 0;
	while (iVar1 < 10)
	{
		if (iVar1 >= iParam2 && iVar1 < (iParam2 + iParam1))
		{
			fVar0 = 0f;
		}
		else
		{
			fVar0 = 1f;
		}
		switch (iVar1)
		{
			case 0:
				_0x669655ffb29ef1a9(iParam0, 2, "Chip01_Ctrl", fVar0);
				break;
			case 1:
				_0x669655ffb29ef1a9(iParam0, 2, "Chip02_Ctrl", fVar0);
				break;
			case 2:
				_0x669655ffb29ef1a9(iParam0, 2, "Chip03_Ctrl", fVar0);
				break;
			case 3:
				_0x669655ffb29ef1a9(iParam0, 2, "Chip04_Ctrl", fVar0);
				break;
			case 4:
				_0x669655ffb29ef1a9(iParam0, 2, "Chip05_Ctrl", fVar0);
				break;
			case 5:
				_0x669655ffb29ef1a9(iParam0, 2, "Chip06_Ctrl", fVar0);
				break;
			case 6:
				_0x669655ffb29ef1a9(iParam0, 2, "Chip07_Ctrl", fVar0);
				break;
			case 7:
				_0x669655ffb29ef1a9(iParam0, 2, "Chip08_Ctrl", fVar0);
				break;
			case 8:
				_0x669655ffb29ef1a9(iParam0, 2, "Chip09_Ctrl", fVar0);
				break;
			case 9:
				_0x669655ffb29ef1a9(iParam0, 2, "Chip10_Ctrl", fVar0);
				break;
		}
		iVar1++;
	}
}

void func_1554(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			_set_object_texture_variation(iParam0, 3);
			break;
		case 1:
			_set_object_texture_variation(iParam0, 18);
			break;
		case 2:
			_set_object_texture_variation(iParam0, 21);
			break;
		case 3:
			_set_object_texture_variation(iParam0, 24);
			break;
		case 4:
			_set_object_texture_variation(iParam0, 27);
			break;
		case 5:
			_set_object_texture_variation(iParam0, 15);
			break;
		default:
			break;
	}
}

int func_1555(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
		case 1:
			return 30;
		case 2:
			return 75;
		case 3:
			return 175;
		case 4:
			return 625;
		case 5:
			return 1000;
		default:
			break;
	}
	return 30;
}

bool func_1556(var uParam0, int iParam1, int iParam2)
{
	return does_entity_exist(uParam0->f_255[iParam1][iParam2]);
}

void func_1557(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (does_entity_exist(&(uParam0->f_436[iParam1]->f_15[iParam2])))
	{
		delete_object(uParam0->f_436[iParam1]->f_15[iParam2]);
	}
	uParam0->f_436[iParam1]->f_20[iParam2] = iParam3;
	uParam0->f_436[iParam1]->f_15[iParam2] = uParam0->f_436[iParam1][iParam2];
	uParam0->f_436[iParam1]->f_25[iParam2] = 0f;
	(*uParam0->f_436[iParam1])[iParam2] = 0;
	uParam0->f_436[iParam1]->f_5[iParam2] = 0;
	uParam0->f_436[iParam1]->f_10[iParam2] = 0;
}

bool func_1558(var uParam0, int iParam1, int iParam2, float fParam3, var uParam4, int iParam5, bool bParam6)
{
	bVar0 = true;
	if (iParam1 == 0)
	{
		if (iParam2 == 0)
		{
			vVar1 = { -0.0353f, 0.196f, 0.804f };
			vVar4 = { 0f, 0f, 0f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.0603f, 0.1639f, 0.804f };
			vVar4 = { 0f, 0f, 0f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.0746f, 0.197f, 0.804f };
			vVar4 = { 0f, 0f, 0f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.112f, 0.1826f, 0.804f };
			vVar4 = { 0f, 0f, 0f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 1)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.1521f, 0.1285f, 0.804f };
			vVar4 = { 0f, 0f, -60f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.1118f, 0.1341f, 0.804f };
			vVar4 = { 0f, 0f, -60f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.1333f, 0.1631f, 0.804f };
			vVar4 = { 0f, 0f, -60f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.1022f, 0.1883f, 0.804f };
			vVar4 = { 0f, 0f, -60f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 2)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.1874f, -0.0674f, 0.804f };
			vVar4 = { 0f, 0f, -120f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.1721f, -0.0298f, 0.804f };
			vVar4 = { 0f, 0f, -120f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.2079f, -0.0339f, 0.804f };
			vVar4 = { 0f, 0f, -120f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.2142f, 0.0057f, 0.804f };
			vVar4 = { 0f, 0f, -120f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 3)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.0353f, -0.196f, 0.804f };
			vVar4 = { 0f, 0f, -180f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.0603f, -0.1639f, 0.804f };
			vVar4 = { 0f, 0f, -180f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.0746f, -0.197f, 0.804f };
			vVar4 = { 0f, 0f, -180f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.112f, -0.1826f, 0.804f };
			vVar4 = { 0f, 0f, -180f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 4)
	{
		if (iParam2 == 0)
		{
			vVar1 = { -0.1521f, -0.1285f, 0.804f };
			vVar4 = { 0f, 0f, 120f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.1118f, -0.1341f, 0.804f };
			vVar4 = { 0f, 0f, 120f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.1333f, -0.1631f, 0.804f };
			vVar4 = { 0f, 0f, 120f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.1022f, -0.1883f, 0.804f };
			vVar4 = { 0f, 0f, 120f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 5)
	{
		if (iParam2 == 0)
		{
			vVar1 = { -0.1874f, 0.0674f, 0.804f };
			vVar4 = { 0f, 0f, 60f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.1721f, 0.0298f, 0.804f };
			vVar4 = { 0f, 0f, 60f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.2079f, 0.0339f, 0.804f };
			vVar4 = { 0f, 0f, 60f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.2142f, -0.0057f, 0.804f };
			vVar4 = { 0f, 0f, 60f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return false;
	}
	if (iParam5 < 0 || iParam5 >= 10)
	{
		return false;
	}
	if (bParam6)
	{
		func_540(*uParam0, uParam0->f_3, vVar1, vVar4, fParam3, uParam4);
	}
	else
	{
		*fParam3 = { vVar1 };
		*uParam4 = { vVar4 };
	}
	fParam3->f_2 = (fParam3->f_2 + (to_float(iParam5) * 0.006f));
	return true;
}

var func_1559(var uParam0, int iParam1)
{
	return &(uParam0->f_811[iParam1]);
}

void func_1560(var uParam0, int iParam1, var uParam2)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		(*uParam2)[iVar0] = &uParam0->f_255[iParam1]->f_5[iVar0];
		iVar0++;
	}
}

void func_1561(var uParam0, int iParam1, var uParam2)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		(*uParam2)[iVar0] = &uParam0->f_436[iParam1]->f_5[iVar0];
		iVar0++;
	}
}

void func_1562(var uParam0, int iParam1, var uParam2)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		(*uParam2)[iVar0] = &uParam0->f_436[iParam1]->f_10[iVar0];
		iVar0++;
	}
}

void func_1563(var uParam0, int iParam1)
{
	uParam0->f_811[iParam1] = -1;
}

var func_1564(var uParam0, int iParam1, int iParam2)
{
	return &(uParam0->f_255[iParam1]->f_5[iParam2]);
}

var func_1565(var uParam0, int iParam1, int iParam2)
{
	return &(uParam0->f_255[iParam1]->f_10[iParam2]);
}

int func_1566(var uParam0, int iParam1, int iParam2)
{
	return &(uParam0->f_436[iParam1]->f_5[iParam2]);
}

void func_1567(var uParam0)
{
	_databinding_insert_ui_item_to_list_from_context_string_alias(uParam0->f_24, 0, "community_cards", uParam0->f_23);
}

void func_1568(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_10)
	{
		_databinding_insert_ui_item_to_list_from_context_string_alias(uParam0->f_24, -1, "money_with_text", &(uParam0->f_10[iVar0]));
		iVar0++;
	}
}

void func_1569(var uParam0, bool bParam1)
{
	if (*uParam0 == 0)
	{
		return;
	}
	_databinding_write_data_bool(uParam0->f_10, bParam1);
}

void func_1570(var uParam0, int iParam1, var uParam2)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		(*uParam2)[iVar0] = &uParam0->f_74[iParam1]->f_5[iVar0];
		iVar0++;
	}
}

void func_1571(var uParam0, int iParam1, char* sParam2, char* sParam3)
{
}

void func_1572(var uParam0, int iParam1, var uParam2, int iParam3)
{
}

float func_1573(int iParam0, int iParam1)
{
	if ((((iParam0 < 0 || iParam0 >= 6) || iParam1 < 0) || iParam1 >= 6) || iParam1 == iParam0)
	{
		return -1f;
	}
	iVar0 = ((iParam1 - iParam0) - 1);
	while (iVar0 < 0)
	{
		iVar0 += 6;
	}
	return to_float(iVar0);
}

int func_1574(var uParam0, int iParam1)
{
	iVar1 = get_random_int_in_range(0, 6);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_440(uParam0, iVar1) && iVar1 != iParam1)
		{
			return iVar1;
		}
		iVar1 = (iVar1 + 1 % 6);
		iVar0++;
	}
	return -1;
}

void func_1575(var uParam0, bool bParam1)
{
	if (*uParam0 == 0)
	{
		return;
	}
	_databinding_write_data_bool(uParam0->f_12, bParam1);
}

void func_1576(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
{
	iVar0 = uParam0->f_7;
	iVar1 = uParam0->f_8;
	if (iVar0 == 0)
	{
		*uParam3 = 0;
		*uParam4 = uParam0->f_10;
	}
	else
	{
		*uParam3 = iVar0;
		*uParam4 = (iVar0 + iVar1);
	}
	if (iVar0 > 0 && iVar1 == 0)
	{
	}
	*uParam5 = (uParam0->f_39[iParam2]->f_2 + uParam0->f_39[iParam2]->f_4);
	if (uParam1->f_3 == 1717653435 && uParam1->f_16 > 0)
	{
		iVar2 = ((uParam1->f_16 - uParam0->f_39[iParam2]->f_3) + uParam0->f_39[iParam2]->f_4);
		if (*uParam5 > iVar2)
		{
			*uParam5 = iVar2;
		}
	}
	if (!uParam0->f_39[iParam2]->f_5)
	{
		if (*uParam5 > iVar0)
		{
			*uParam5 = iVar0;
		}
	}
	if (*uParam3 > *uParam5)
	{
		*uParam3 = *uParam5;
	}
	if (*uParam4 > *uParam5)
	{
		*uParam4 = *uParam5;
	}
	if (bParam6)
	{
		iVar3 = func_618(uParam0, iParam2);
		*uParam3 = (*uParam3 - iVar3);
		*uParam4 = (*uParam4 - iVar3);
		*uParam5 = (*uParam5 - iVar3);
	}
}

var func_1577(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	if (bParam2)
	{
		_0xdd1232b332cbb9e7(3, 1, 1);
	}
	if (Global_1572887->f_13 != -1)
	{
		return func_1695(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_1696(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		_uilog_set_cached_objective(sVar0);
	}
	return func_1695(sVar0, iParam1, 0, 0, 1, 1);
}

void func_1578(var uParam0, int iParam1)
{
	iVar0 = floor(((*uParam0 * uParam0->f_5) + (0.5f * ((uParam0->f_3 * uParam0->f_5) * uParam0->f_5))));
	fVar1 = to_float((iParam1 - iVar0));
	fVar2 = (fVar1 / uParam0->f_6);
	if (fVar2 < uParam0->f_1)
	{
		fVar2 = uParam0->f_1;
	}
	uParam0->f_2 = fVar2;
}

void func_1579(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 && !func_152(iParam0))
	{
		return;
	}
	iVar0 = func_347(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1951255)[iVar0]->f_3, sParam1);
}

bool func_1580(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (uParam1->f_3 == 1717653435 && uParam1->f_16 > 0)
	{
		if ((uParam0->f_39[iParam2]->f_3 + iParam3) >= uParam1->f_16)
		{
			return true;
		}
	}
	return false;
}

bool func_1581(int iParam0)
{
	iVar0 = 6;
	if (func_1697(iParam0))
	{
		iVar0 = _0x59fa676177dbe4c9(iParam0);
	}
	return iVar0 != 6;
}

bool func_1582(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (!uParam0->f_118)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return false;
	}
	if (iParam3 > 32)
	{
		iParam3 = 32;
	}
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < iParam3)
	{
		if (is_bit_set((*uParam0)[iParam1]->f_9, iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0 >= iParam2;
}

bool func_1583(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (!uParam0->f_118)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return false;
	}
	if (iParam3 > 32)
	{
		iParam3 = 32;
	}
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < iParam3)
	{
		if (is_bit_set((*uParam0)[iParam1]->f_8, iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0 >= iParam2;
}

int func_1584(var uParam0)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		iVar1 = (iVar1 + uParam0[iVar0]);
		iVar0++;
	}
	return iVar1;
}

void func_1585(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (does_entity_exist(&(uParam0->f_74[iParam1]->f_15[iParam2])))
	{
		delete_object(uParam0->f_74[iParam1]->f_15[iParam2]);
	}
	if (does_entity_exist(uParam0->f_74[iParam1][iParam2]))
	{
		_0x341cdd17efc2472e(iParam1, iParam2);
	}
	uParam0->f_74[iParam1]->f_20[iParam2] = iParam3;
	uParam0->f_74[iParam1]->f_15[iParam2] = uParam0->f_74[iParam1][iParam2];
	uParam0->f_74[iParam1]->f_25[iParam2] = 0f;
	(*uParam0->f_74[iParam1])[iParam2] = 0;
	uParam0->f_74[iParam1]->f_5[iParam2] = 0;
	uParam0->f_74[iParam1]->f_10[iParam2] = 0;
}

bool func_1586(var uParam0, int iParam1, int iParam2, float fParam3, var uParam4, int iParam5, bool bParam6)
{
	bVar0 = true;
	if (iParam1 == 0)
	{
		if (iParam2 == 0)
		{
			vVar1 = { -0.2469f, 0.657f, 0.804f };
			vVar4 = { 0f, 0f, 0f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.2508f, 0.605f, 0.804f };
			vVar4 = { 0f, 0f, 0f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.2875f, 0.6661f, 0.804f };
			vVar4 = { 0f, 0f, 0f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.3201f, 0.623f, 0.804f };
			vVar4 = { 0f, 0f, 0f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 1)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.4455f, 0.5423f, 0.804f };
			vVar4 = { 0f, 0f, -60f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.3985f, 0.5197f, 0.804f };
			vVar4 = { 0f, 0f, -60f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.4331f, 0.582f, 0.804f };
			vVar4 = { 0f, 0f, -60f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.3795f, 0.5888f, 0.804f };
			vVar4 = { 0f, 0f, -60f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 2)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.6924f, -0.1147f, 0.804f };
			vVar4 = { 0f, 0f, -120f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.6493f, -0.0852f, 0.804f };
			vVar4 = { 0f, 0f, -120f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.7206f, -0.084f, 0.804f };
			vVar4 = { 0f, 0f, -120f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.6996f, -0.0343f, 0.804f };
			vVar4 = { 0f, 0f, -120f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 3)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.2469f, -0.657f, 0.804f };
			vVar4 = { 0f, 0f, -180f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.2508f, -0.605f, 0.804f };
			vVar4 = { 0f, 0f, -180f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.2875f, -0.6661f, 0.804f };
			vVar4 = { 0f, 0f, -180f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.3201f, -0.623f, 0.804f };
			vVar4 = { 0f, 0f, -180f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 4)
	{
		if (iParam2 == 0)
		{
			vVar1 = { -0.4455f, -0.5423f, 0.804f };
			vVar4 = { 0f, 0f, 120f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.3985f, -0.5197f, 0.804f };
			vVar4 = { 0f, 0f, 120f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.4331f, -0.582f, 0.804f };
			vVar4 = { 0f, 0f, 120f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.3795f, -0.5888f, 0.804f };
			vVar4 = { 0f, 0f, 120f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 5)
	{
		if (iParam2 == 0)
		{
			vVar1 = { -0.6924f, 0.1147f, 0.804f };
			vVar4 = { 0f, 0f, 60f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.6493f, 0.0852f, 0.804f };
			vVar4 = { 0f, 0f, 60f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.7206f, 0.084f, 0.804f };
			vVar4 = { 0f, 0f, 60f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.6996f, 0.0343f, 0.804f };
			vVar4 = { 0f, 0f, 60f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return false;
	}
	if (iParam5 < 0 || iParam5 >= 10)
	{
		return false;
	}
	if (bParam6)
	{
		func_540(*uParam0, uParam0->f_3, vVar1, vVar4, fParam3, uParam4);
	}
	else
	{
		*fParam3 = { vVar1 };
		*uParam4 = { vVar4 };
	}
	fParam3->f_2 = (fParam3->f_2 + (to_float(iParam5) * 0.006f));
	return true;
}

char* func_1587()
{
	return _create_var_string(2, "MGPKR_INFO_ALLIN_DONE");
}

char* func_1588()
{
	return _create_var_string(2, "MGPKR_INFO_MAX_BET_DONE");
}

int func_1589(var uParam0, var uParam1)
{
	if (uParam0->f_24 == uParam1->f_24)
	{
		iVar0 = 0;
		while (iVar0 < func_1151(5, func_1151(uParam0->f_23, uParam1->f_23)))
		{
			if (uParam0[iVar0] > uParam1[iVar0])
			{
				return 1;
			}
			else if (uParam0[iVar0] < uParam1[iVar0])
			{
				return -1;
			}
			iVar0++;
		}
		return 0;
	}
	if (uParam0->f_24 > uParam1->f_24)
	{
		return 1;
	}
	if (uParam0->f_24 < uParam1->f_24)
	{
		return -1;
	}
	return 0;
}

int func_1590(var uParam0, int iParam1)
{
	iVar0 = 0;
	iVar3 = 0;
	while (iVar3 < uParam0->f_376[iParam1]->f_9)
	{
		iVar2 = &uParam0->f_376[iParam1]->f_2[iVar3];
		bVar1 = false;
		if (iParam1 < (uParam0->f_485 - 1))
		{
			iVar4 = 0;
			while (iVar4 < (uParam0->f_376[iParam1 + 1])->f_9)
			{
				if (&(uParam0->f_376[iParam1 + 1])->f_2[iVar4] == iVar2)
				{
					bVar1 = true;
				}
				else
				{
					iVar4++;
				}
			}
		}
		if (!bVar1)
		{
			if (iVar0 < uParam0->f_39[iVar2]->f_3)
			{
				iVar0 = uParam0->f_39[iVar2]->f_3;
			}
		}
		iVar3++;
	}
	return iVar0;
}

bool func_1591(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (!uParam0->f_118)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return false;
	}
	if (iParam3 > 32)
	{
		iParam3 = 32;
	}
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < iParam3)
	{
		if (is_bit_set((*uParam0)[iParam1]->f_10, iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0 >= iParam2;
}

bool func_1592(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (!uParam0->f_118)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return false;
	}
	if (iParam3 > 32)
	{
		iParam3 = 32;
	}
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < iParam3)
	{
		if (is_bit_set((*uParam0)[iParam1]->f_11, iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0 >= iParam2;
}

int func_1593(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 3;
		case 2:
			return 4;
		case 3:
			return 5;
		case 4:
			return 5;
		default:
			break;
	}
	return 0;
}

void func_1594(var uParam0, var uParam1, var uParam2)
{
	_0x32a7c216344d623b(uParam1, uParam2, uParam0);
}

void func_1595(var uParam0, int iParam1, int iParam2, float fParam3)
{
	if (&uParam0->f_2021[iParam1] != 0)
	{
	}
	else
	{
		uParam0->f_2021[iParam1] = iParam2;
		func_361(uParam0->f_2028[iParam1], fParam3);
	}
}

void func_1596(var uParam0, int iParam1)
{
	_databinding_write_data_bool(uParam0->f_34[iParam1]->f_5, true);
}

int func_1597(var uParam0)
{
	iVar0 = 0;
	if ((_0x7ec0d68233e391ac(54) == 2 || _0x7ec0d68233e391ac(21) == 2) || _is_app_running(-605293197))
	{
		return 0;
	}
	if (uParam0->f_1402)
	{
		iVar0 = 2;
	}
	return iVar0;
}

int func_1598(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		default:
			return 2;
			return 2;
		case 2:
			return 3;
	}
}

void func_1599(int iParam0, bool bParam1, bool bParam2)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		_0xdf631e4bce1b1fc4(iParam0, -1725579161, 0, 1);
	}
	else
	{
		_set_ped_component_disabled(iParam0, -1725579161, 1);
	}
	if (bParam2)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

void func_1600(int iParam0, bool bParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	_set_ped_body_component(iParam0, 1268180497);
	if (bParam1)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

void func_1601(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		_set_ped_face_feature(iParam0, 41611, 0f);
	}
	else
	{
		_set_ped_face_feature(iParam0, 41611, 1f);
	}
}

bool func_1602(int iParam0, int iParam1)
{
	if (!func_960(iParam0))
	{
		return false;
	}
	return (Global_1051439->f_3073[iParam0] && iParam1) != 0;
}

void func_1603(int iParam0, int iParam1)
{
	if (!func_960(iParam0))
	{
		return;
	}
	Global_1051439->f_3073[iParam0] = (Global_1051439->f_3073[iParam0] || iParam1);
}

void func_1604(int iParam0, int iParam1)
{
	if (func_1620(iParam0, iParam1))
	{
	}
	Global_1051439->f_72[iParam0]->f_1 = (Global_1051439->f_72[iParam0]->f_1 - (Global_1051439->f_72[iParam0]->f_1 && iParam1));
}

bool func_1605(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 == func_1698())
	{
		return true;
	}
	if (&Global_1051439->f_3745[38] == iParam0 && does_entity_exist(Global_1051439->f_3745[38]->f_4))
	{
		return true;
	}
	return false;
}

bool func_1606()
{
	iVar0 = get_frame_count();
	return (Global_1051439->f_3259 == iVar0 || Global_1051439->f_3259 == (iVar0 - 1));
}

void func_1607(int iParam0, int iParam1)
{
	if (!func_960(iParam0))
	{
		return;
	}
	Global_1051439->f_3073[iParam0] = (&Global_1051439->f_3073[iParam0] - (Global_1051439->f_3073[iParam0] && iParam1));
}

bool func_1608(int iParam0, int iParam1)
{
	return (Global_1051439->f_72[iParam0]->f_49 && iParam1) != 0;
}

void func_1609(int iParam0, int iParam1)
{
	func_1022(iParam0, iParam1);
}

void func_1610(int iParam0, int iParam1)
{
	if (!func_1620(iParam0, iParam1))
	{
	}
	Global_1051439->f_72[iParam0]->f_1 = (Global_1051439->f_72[iParam0]->f_1 || iParam1);
}

bool func_1611(int iParam0)
{
	return func_270((*Global_1134390)[network_player_id_to_int()]->f_73, iParam0);
}

bool func_1612(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (!network_is_game_in_progress())
	{
		return false;
	}
	iVar0 = func_1699(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (_unlock_is_unlocked(iVar0))
	{
		iVar1 = func_1700(1, iParam0);
		if (iVar1 == 0)
		{
			return false;
		}
		if (_0xfbe782b3165ac8ec(iVar1))
		{
			return true;
		}
	}
	return false;
}

bool func_1613(int iParam0, bool bParam1, bool bParam2)
{
	if (Global_1572887->f_13 != -1)
	{
		if ((bParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1900736->f_67;
		}
		if ((bParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1900736->f_68;
		}
		if (func_1615())
		{
			return true;
		}
		if (Global_1071686->f_3 && !Global_1572887->f_9)
		{
			if (((*Global_1056141)[network_player_id_to_int()]->f_463 && network_is_game_in_progress()) && network_is_in_tutorial_session())
			{
				return true;
			}
		}
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1900736->f_67;
		}
		else
		{
			return Global_1900736->f_68;
		}
	}
	if (iParam0 == 0 && func_247(func_246(0)))
	{
		return true;
	}
	if ((Global_1940258 && 81919 & (-1 - iParam0)) != 0)
	{
		return true;
	}
	if (!bParam1)
	{
		if ((get_game_timer() - 5000) < &Global_1900871)
		{
			return true;
		}
	}
	switch (func_248(func_246(0)))
	{
		case -1:
			return false;
		case 2:
			return iParam0 & 1 == 0;
		case 5:
			return iParam0 & 2 == 0;
		case 3:
			return iParam0 & 16 == 0;
		case 4:
			return iParam0 & 32 == 0;
		case 7:
			return iParam0 & 1024 == 0;
		default:
			break;
	}
	return false;
}

bool func_1614(int iParam0, int iParam1)
{
	if (!Global_1071686->f_3)
	{
		return false;
	}
	if (!network_is_in_session())
	{
		return false;
	}
	if (iParam1 == 255)
	{
		iParam1 = network_player_id_to_int();
	}
	return (Global_1197355[iParam1] && iParam0) != 0;
}

bool func_1615()
{
	if (&Global_1048576)
	{
		return true;
	}
	if (Global_1572887->f_4)
	{
		return true;
	}
	if (&Global_2883584)
	{
		return true;
	}
	if (&Global_1048577)
	{
		return true;
	}
	if (!func_247(*Global_1051213) && Global_1572887->f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

bool func_1616()
{
	if (func_1701(255) <= 2)
	{
		return false;
	}
	if (Global_265377->f_124517.f_71.f_21.f_2 != -504335712)
	{
		return false;
	}
	if (!func_1702(Global_265377->f_124517.f_71.f_21.f_3))
	{
		return false;
	}
	return true;
}

bool func_1617(int iParam0)
{
	if (!_network_is_player_index_valid(iParam0))
	{
		return false;
	}
	if (!network_is_player_active(iParam0))
	{
		return false;
	}
	iVar0 = func_1703(iParam0);
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return false;
	}
	return func_1704(iVar0);
}

int func_1618(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_1532(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_1619(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	iVar0 = (iParam1 / iParam2);
	iVar1 = (iParam1 % iParam2);
	iVar2 = (shift_left(1, iParam3) - 1);
	iVar3 = 0;
	iVar4 = (iParam3 * iVar1);
	iVar3 = (uParam0[iVar0] && shift_left(iVar2, iVar4));
	iVar3 = shift_right(iVar3, iVar4);
	return iVar3;
}

bool func_1620(int iParam0, int iParam1)
{
	return (Global_1051439->f_72[iParam0]->f_1 && iParam1) != 0;
}

int func_1621(int iParam0, var uParam1, int iParam2)
{
	Var0 = func_1705();
	Var0.f_2 = -738708473;
	Var0.f_3 = func_1446(iParam0);
	if (!_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		return 0;
	}
	Var0.f_2 = -1407851228;
	Var0.f_3 = -1619729610;
	_datafile_get_string(uParam1, &Var0);
	Var0.f_2 = -1407851228;
	Var0.f_3 = 1766438541;
	_datafile_get_hash(iParam2, &Var0);
	return 1;
}

void func_1622(int iParam0)
{
	if (_0xde9bad3292aa6d5e(iParam0))
	{
		_0xdd0bc0edcb2162f6(iParam0);
	}
}

bool func_1623(int iParam0)
{
	if (((((iParam0 == 28 || iParam0 == 29) || iParam0 == 38) || iParam0 == 27) || iParam0 == 15) || iParam0 == 39)
	{
		return true;
	}
	if (func_1608(iParam0, 65536))
	{
		return true;
	}
	return false;
}

int func_1624(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, var uParam6)
{
	Var0 = func_1705();
	Var0.f_2 = -738708473;
	Var0.f_3 = func_1446(iParam0);
	if (!_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		return 0;
	}
	Var0.f_2 = -1407851228;
	Var0.f_3 = get_hash_key(sParam1);
	_datafile_get_hash(iParam2, &Var0);
	Var0.f_2 = 1059891245;
	Var0.f_3 = get_hash_key(sParam3);
	_datafile_get_float(uParam4, &Var0);
	Var0.f_2 = -99852754;
	Var0.f_3 = get_hash_key(sParam5);
	_datafile_get_vector(uParam6, &Var0);
	return 1;
}

bool func_1625(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102219->f_3 & 128 != 0;
	}
	return func_1706(128, iParam0);
}

int func_1626()
{
	iVar0 = 255;
	iVar1 = func_1707();
	if (func_1708(iVar1))
	{
		return player_id();
	}
	if (does_entity_exist(iVar1))
	{
		if (is_entity_a_ped(iVar1))
		{
			iVar2 = get_ped_index_from_entity_index(iVar1);
			if (is_ped_a_player(iVar2))
			{
				iVar0 = network_get_player_index_from_ped(iVar2);
			}
		}
	}
	return iVar0;
}

float func_1627(int iParam0, bool bParam1)
{
	fVar0 = 100f;
	switch (iParam0)
	{
		case 38:
			fVar0 = 200f;
			break;
	}
	if (bParam1)
	{
		fVar0 = (fVar0 * fVar0);
	}
	return fVar0;
}

bool func_1628(int iParam0, int iParam1)
{
	Var0 = -1;
	Var0.f_1 = -1;
	iVar3 = -1;
	switch (iParam0)
	{
		case 2:
			Var0 = { func_246(0) };
			if (func_1709(Var0))
			{
				return false;
			}
			break;
		case 32:
			iVar2 = 0;
			while (iVar2 < 4)
			{
				if (&Global_1051439->f_4427[iVar2] == &Global_1051439->f_3745[32])
				{
					iVar3 = iVar2;
				}
				iVar2++;
			}
			if (iVar3 == -1)
			{
				return false;
			}
			if (Global_1051439->f_4427[iVar3]->f_3 == Global_1051439->f_4427[iVar3]->f_4)
			{
				return true;
			}
			else
			{
				iVar4 = func_1711(func_1710());
				if (Global_1051439->f_4427[iVar3]->f_3 < Global_1051439->f_4427[iVar3]->f_4)
				{
					if (iVar4 >= Global_1051439->f_4427[iVar3]->f_3 && iVar4 < Global_1051439->f_4427[iVar3]->f_4)
					{
						return true;
					}
					else
					{
						return false;
					}
				}
				else if (iVar4 < Global_1051439->f_4427[iVar3]->f_3 && iVar4 >= Global_1051439->f_4427[iVar3]->f_4)
				{
					return false;
				}
				else
				{
					return true;
				}
			}
			break;
		case 31:
			if (func_1602(func_1712(iParam1), 1))
			{
				return false;
			}
			break;
		case 38:
			return func_1605(iParam1);
	}
	return true;
}

void func_1629(var uParam0, int iParam1)
{
	uParam0->f_9 = iParam1;
}

int func_1630(var uParam0)
{
	return uParam0;
}

bool func_1631(int iParam0, var uParam1, var uParam2)
{
	Var1 = func_1705();
	Var1.f_2 = -738708473;
	Var1.f_3 = func_1446(iParam0);
	if (!_datafile_get_data_node_index(&(Var1.f_1), &Var1))
	{
		return false;
	}
	Var1.f_2 = -1407851228;
	Var1.f_3 = -302053561;
	_datafile_get_hash(&uVar0, &Var1);
	*uParam1 = uVar0;
	Var1.f_2 = -1407851228;
	Var1.f_3 = -495343091;
	*uParam2 = 0;
	if (_datafile_get_hash(&uVar0, &Var1))
	{
		*uParam2 = uVar0;
	}
	return true;
}

bool func_1632(int iParam0, int iParam1)
{
	Var0 = Global_1071686->f_28448[48]->f_3;
	Var0.f_2 = -738708473;
	Var0.f_3 = func_1446(iParam0);
	if (!_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		return false;
	}
	Var0.f_2 = -1407851228;
	Var0.f_3 = get_hash_key("sHash");
	_datafile_get_hash(iParam1, &Var0);
	return true;
}

void func_1633(int iParam0)
{
	if (Global_1051439->f_3254 == 623901053)
	{
		if (add_relationship_group("REL_SHOPKEEPER", &(Global_1051439->f_3254)))
		{
			iVar0 = 0;
			while (iVar0 < 32)
			{
				set_relationship_between_groups(2, Global_1051439->f_3254, func_1713(iVar0));
				set_relationship_between_groups(2, func_1713(iVar0), Global_1051439->f_3254);
				iVar0++;
			}
			set_relationship_between_groups(2, func_1714(), Global_1051439->f_3254);
			set_relationship_between_groups(2, Global_1051439->f_3254, 1609284507);
			set_relationship_between_groups(2, -989642646, Global_1051439->f_3254);
			set_ped_relationship_group_hash(iParam0, Global_1051439->f_3254);
		}
	}
	else
	{
		set_relationship_between_groups(2, func_1714(), Global_1051439->f_3254);
		set_relationship_between_groups(2, Global_1051439->f_3254, func_1714());
		set_ped_relationship_group_hash(iParam0, Global_1051439->f_3254);
	}
}

bool func_1634(int iParam0, var uParam1, var uParam2, int iParam3)
{
	Var0 = func_1705();
	Var0.f_2 = -738708473;
	Var0.f_3 = func_1446(iParam0);
	if (!_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		return false;
	}
	Var0.f_2 = -1407851228;
	Var0.f_3 = -1896626193;
	_datafile_get_hash(iParam3, &Var0);
	Var0.f_2 = -99852754;
	Var0.f_3 = -160814000;
	_datafile_get_vector(uParam1, &Var0);
	Var0.f_2 = 1059891245;
	Var0.f_3 = -1317038779;
	_datafile_get_float(uParam2, &Var0);
	return true;
}

void func_1635(int iParam0)
{
	if (!_0xde9bad3292aa6d5e(iParam0))
	{
		_0xdfea23ec90113657(iParam0);
	}
}

void func_1636()
{
	Global_1051439->f_3718.f_1 = -1;
	Global_1051439->f_3718.f_2 = { 0f, 0f, 0f };
	Global_1051439->f_3718.f_6 = 0;
	set_ped_config_flag(Global_34, 1, false);
	set_ped_config_flag(Global_34, 170, false);
	_0xc2266aa617668ad3(Global_34, 1f);
	_0x73b6f907b913c860(Global_34, 1f);
	_0x013a7ba5015c1372(Global_34, 0);
	_0xfa30e2254461adeb(Global_34, 0);
	func_1642(0);
}

bool func_1637(int iParam0, int iParam1)
{
	if (func_1715(iParam1))
	{
		return false;
	}
	return true;
}

int func_1638(int iParam0)
{
	Var0 = func_1705();
	Var0.f_2 = 1164964224;
	Var0.f_3 = func_1446(iParam0);
	iVar5 = 0;
	bVar6 = false;
	while (!bVar6)
	{
		Var0.f_4 = iVar5;
		if (_datafile_get_vector(&uVar7, &Var0))
		{
			iVar5++;
		}
		else
		{
			bVar6 = true;
		}
	}
	return iVar5;
}

bool func_1639(int iParam0)
{
	iVar0 = func_453(iParam0);
	switch (iVar0)
	{
		case 36:
			if (func_1643(iVar0))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_1640()
{
	return func_1716(1, 255);
}

void func_1641(int iParam0)
{
	Global_1051439->f_3718.f_2 = { 0f, 0f, 0f };
	iVar0 = func_1638(iParam0);
	iVar1 = 0;
	while (iVar1 <= (iVar0 - 1))
	{
		func_1645(iParam0, iVar1, &vVar2);
		if (vdist(Global_35, vVar2) < vdist(Global_35, Global_1051439->f_3718.f_2))
		{
			Global_1051439->f_3718.f_2 = { vVar2 };
		}
		iVar1++;
	}
}

void func_1642(int iParam0)
{
	Global_1051439->f_3718 = iParam0;
}

bool func_1643(int iParam0)
{
	if (!_does_volume_exist(Global_1051439->f_72[iParam0]->f_24))
	{
		return false;
	}
	return _0xf256a75210c5c0eb(Global_1051439->f_72[iParam0]->f_24, Global_35);
	return false;
}

float func_1644(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!is_entity_dead(iParam0))
	{
		vVar0 = { get_entity_coords(iParam0, true, false) };
	}
	else
	{
		vVar0 = { get_entity_coords(iParam0, false, false) };
	}
	if (bParam4)
	{
		return vdist2(vVar0, vParam1);
	}
	return func_1717(vVar0, vParam1);
}

bool func_1645(int iParam0, int iParam1, var uParam2)
{
	Var0 = func_1705();
	Var0.f_2 = 1164964224;
	Var0.f_3 = func_1446(iParam0);
	Var0.f_4 = iParam1;
	return _datafile_get_vector(uParam2, &Var0);
}

int func_1646(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	iVar0 = _get_first_entity_ped_is_carrying(iParam0);
	if (does_entity_exist(iVar0))
	{
		if (is_entity_a_ped(iVar0))
		{
			iVar1 = get_ped_index_from_entity_index(iVar0);
			return iVar1;
		}
	}
	return 0;
}

void func_1647(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	bVar4 = is_entity_a_ped(iParam0);
	if (bVar4)
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		bVar3 = _get_ped_crouch_movement(iVar1);
		if (is_ped_ragdoll(iVar1))
		{
			_0x221f4d9912b7fe86(iVar1, 1);
		}
	}
	if (iParam0 == func_1630(Global_34) && is_player_teleport_active())
	{
	}
	if (func_1718(iParam0))
	{
		if (func_1719(get_ped_index_from_entity_index(iParam0)))
		{
			_0x0348469daa17576c(iParam0);
		}
	}
	if (func_270(iParam5, 4) && is_entity_a_ped(iParam0))
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_on_vehicle(iVar1, false))
		{
			iVar0 = get_vehicle_ped_is_in(iVar1, true);
			if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_1647(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (is_ped_on_mount(iVar1))
		{
			iVar2 = get_mount(iVar1);
			if (does_entity_exist(iVar2) && !is_entity_dead(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_1647(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_270(iParam5, 32))
	{
		if (bVar4 && is_entity_attached(iParam0))
		{
			clear_ped_tasks_immediately(get_ped_index_from_entity_index(iParam0), false, true);
		}
	}
	if (func_270(iParam5, 2))
	{
		if (is_entity_a_vehicle(iParam0))
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_270(iParam5, 32), true);
		}
		else
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_270(iParam5, 32), true);
			_0x9587913b9e772d29(iParam0, 0);
		}
	}
	else if (func_270(iParam5, 129))
	{
		if (func_270(iParam5, 128))
		{
			if (get_water_height_no_waves(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		_set_entity_coords_and_heading_no_offset(iParam0, vParam1, fParam4, func_270(iParam5, 32), true);
	}
	else
	{
		_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_270(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_270(iParam5, 16))
		{
			_set_ped_crouch_movement(get_ped_index_from_entity_index(iParam0), bVar3, 0, false);
		}
		if (func_1718(iParam0))
		{
			iVar6 = get_ped_index_from_entity_index(iParam0);
			_0x0348469daa17576c(iVar6);
			if (!func_270(iParam5, 32))
			{
				clear_ped_tasks(iVar6, 1, 0);
				task_stand_still(iVar6, -1);
			}
		}
		set_ped_cloth_package_index(get_ped_index_from_entity_index(iParam0), 1);
		if (get_ped_index_from_entity_index(iParam0) == Global_34 && !func_270(iParam5, 64))
		{
			if (!is_screen_faded_out())
			{
			}
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
	}
}

bool func_1648(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915715->f_20638;
	}
	return (Global_1915715->f_20638 || Global_1915715->f_22504.f_1);
}

int func_1649(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_1720(bParam1, bParam2, bParam3);
	}
	if (Global_1572887->f_13 != -1)
	{
		if (iParam0 == Global_1296859->f_10)
		{
			if (!Global_1296859->f_11)
			{
				return 0;
			}
		}
		else if (!does_entity_exist(get_player_ped(iParam0)))
		{
			return 0;
		}
	}
	else if (!does_entity_exist(get_player_ped(iParam0)))
	{
		return 0;
	}
	if (_0xad401c63158acbaa(iParam0))
	{
		_0xcbfb4951f2e3934c(iParam0, &Var0);
		if ((bParam3 || Var0.f_10 > 0) || get_player_wanted_level(iParam0) > 0)
		{
			return 1;
		}
	}
	else if (bParam2 && !_0x148e7ac8141c9e64(iParam0) == 1370593166)
	{
		return 0;
	}
	iVar17 = 0;
	while (iVar17 < 24)
	{
		if (_0x532c5fddb986ee5c(iParam0, iVar17, &Var18))
		{
			if (Var18.f_10 && (bParam3 || _0xdaefdfdb2aeece37(Var18, Var18.f_7) > 0))
			{
				return 1;
			}
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (_0x69e181772886f48b(iParam0) || _0xf0fbfb9ab15f7734(iParam0, 0, 0))
		{
			if (bParam3 || _0xe083beda81709891(iParam0) > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_1650()
{
	if (func_1721())
	{
		return true;
	}
	if (func_1722())
	{
		return true;
	}
	if (func_1723())
	{
		return true;
	}
	if (func_1724())
	{
		return true;
	}
	return false;
}

bool func_1651(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_1725(iParam0);
	uParam2->f_4 = iParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

void func_1652(var uParam0, int iParam1, var uParam2)
{
	*uParam2 = iParam1;
	uParam0->f_2 = -611386243;
	_datafile_get_int(&(uParam2->f_1), uParam0);
	uParam0->f_2 = -2140901307;
	if (_datafile_get_hash(&uVar0, uParam0))
	{
		uParam2->f_2 = uVar0;
	}
	uParam0->f_2 = -2140901307;
	_datafile_get_string(&(uParam2->f_11), uParam0);
	uParam0->f_2 = 1292053410;
	_datafile_get_string(&(uParam2->f_19), uParam0);
	uParam0->f_2 = 1234058424;
	_datafile_get_string(&(uParam2->f_3), uParam0);
}

void func_1653(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	if (!does_cam_exist(*uParam0))
	{
		return;
	}
	if (bParam4)
	{
		uParam0->f_29[2] = floor((get_disabled_control_unbound_normal(2, 1025725594) * 127f));
		uParam0->f_29[3] = floor((get_disabled_control_unbound_normal(2, -348049185) * 127f));
	}
	else
	{
		uParam0->f_29[2] = floor((get_control_unbound_normal(2, 1025725594) * 127f));
		uParam0->f_29[3] = floor((get_control_unbound_normal(2, -348049185) * 127f));
	}
	if (&uParam0->f_29[2] != 0 || &uParam0->f_29[3] != 0)
	{
	}
	if (uParam0->f_34 == &uParam0->f_29[2] && uParam0->f_35 == &uParam0->f_29[3])
	{
		if (uParam0->f_37 < get_game_timer())
		{
			uParam0->f_34 = 0;
			uParam0->f_35 = 0;
		}
	}
	else
	{
		uParam0->f_34 = &uParam0->f_29[2];
		uParam0->f_35 = &uParam0->f_29[3];
		uParam0->f_37 = get_game_timer() + 4000;
	}
	if (bParam2)
	{
		uParam0->f_13.f_2 = (-(to_float(&(uParam0->f_29[2])) / 127f) * IntToFloat(uParam0->f_25));
		uParam0->f_13.f_1 = ((-uParam0->f_13.f_2 * uParam0->f_27) / IntToFloat(uParam0->f_25));
		if (is_look_inverted())
		{
			uParam0->f_13 = ((to_float(&(uParam0->f_29[3])) / 127f) * IntToFloat(uParam0->f_26));
		}
		else
		{
			uParam0->f_13 = (-(to_float(&(uParam0->f_29[3])) / 127f) * IntToFloat(uParam0->f_26));
		}
	}
	else
	{
		uParam0->f_13 = { 0f, 0f, 0f };
		uParam0->f_34 = 0;
		uParam0->f_35 = 0;
	}
	fVar0 = (30f * timestep());
	if (!func_1726(uParam0->f_1, uParam0->f_8))
	{
		uParam0->f_12 = (uParam0->f_12 + get_frame_time());
		if (uParam0->f_12 > uParam0->f_11)
		{
			uParam0->f_12 = uParam0->f_11;
		}
		fVar1 = (uParam0->f_12 / uParam0->f_11);
		uParam0->f_1 = { func_1727(uParam0->f_1, uParam0->f_8, fVar1) };
	}
	vVar2 = { uParam0->f_13 + uParam0->f_16 };
	uParam0->f_19 = (uParam0->f_19 + func_1728((((vVar2.x - uParam0->f_19) * 0.05f) * fVar0), -3f, 3f));
	uParam0->f_19.f_1 = (uParam0->f_19.f_1 + func_1728((((vVar2.y - uParam0->f_19.f_1) * 0.05f) * fVar0), -3f, 3f));
	uParam0->f_19.f_2 = (uParam0->f_19.f_2 + func_1728((((vVar2.z - uParam0->f_19.f_2) * 0.05f) * fVar0), -3f, 3f));
	if (uParam0->f_36)
	{
		uParam0->f_19 = func_1728(uParam0->f_19, to_float(-uParam0->f_26), to_float(uParam0->f_26));
		uParam0->f_19.f_1 = func_1728(uParam0->f_19.f_1, -uParam0->f_27, uParam0->f_27);
		uParam0->f_19.f_2 = func_1728(uParam0->f_19.f_2, to_float(-uParam0->f_25), to_float(uParam0->f_25));
	}
	uParam0->f_22 = uParam0->f_7;
	if (bParam1)
	{
		if (bParam3)
		{
			if (to_float(&(uParam0->f_29[1])) < 0f)
			{
				uParam0->f_22 = (uParam0->f_22 + IntToFloat(round(((to_float(&(uParam0->f_29[1])) / 128f) * uParam0->f_24))));
			}
		}
		else
		{
			uParam0->f_22 = (uParam0->f_22 + IntToFloat(round(((to_float(&(uParam0->f_29[1])) / 128f) * uParam0->f_24))));
		}
	}
	uParam0->f_23 = (uParam0->f_23 + (((uParam0->f_22 - uParam0->f_23) * get_frame_time()) * (2.5f / 0.65f)));
	set_cam_params(*uParam0, uParam0->f_1, uParam0->f_4 + uParam0->f_19, uParam0->f_23, 0, 1, 1, 2, iParam5, 0);
}

char* func_1654(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "MGPKR_RANKL1_2";
		case 3:
			return "MGPKR_RANKL1_3";
		case 4:
			return "MGPKR_RANKL1_4";
		case 5:
			return "MGPKR_RANKL1_5";
		case 6:
			return "MGPKR_RANKL1_6";
		case 7:
			return "MGPKR_RANKL1_7";
		case 8:
			return "MGPKR_RANKL1_8";
		case 9:
			return "MGPKR_RANKL1_9";
		case 10:
			return "MGPKR_RANKL1_10";
		case 11:
			return "MGPKR_RANKL1_JACK";
		case 12:
			return "MGPKR_RANKL1_QUEEN";
		case 13:
			return "MGPKR_RANKL1_KING";
		case 14:
			return "MGPKR_RANKL1_ACE";
		default:
			break;
	}
	return "unknown";
}

char* func_1655(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "MGPKR_RANKL2_2";
		case 3:
			return "MGPKR_RANKL2_3";
		case 4:
			return "MGPKR_RANKL2_4";
		case 5:
			return "MGPKR_RANKL2_5";
		case 6:
			return "MGPKR_RANKL2_6";
		case 7:
			return "MGPKR_RANKL2_7";
		case 8:
			return "MGPKR_RANKL2_8";
		case 9:
			return "MGPKR_RANKL2_9";
		case 10:
			return "MGPKR_RANKL2_10";
		case 11:
			return "MGPKR_RANKL2_JACK";
		case 12:
			return "MGPKR_RANKL2_QUEEN";
		case 13:
			return "MGPKR_RANKL2_KING";
		case 14:
			return "MGPKR_RANKL2_ACE";
		default:
			break;
	}
	return "unknown";
}

bool func_1656(int iParam0)
{
	if (iParam0 == 8 || iParam0 == 14)
	{
		return false;
	}
	return true;
}

char* func_1657(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MGPKR_SUIT_HEART";
		case 1:
			return "MGPKR_SUIT_DMOND";
		case 2:
			return "MGPKR_SUIT_SPADE";
		case 3:
			return "MGPKR_SUIT_CLUB";
		default:
			break;
	}
	return "unknown";
}

char* func_1658(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "MGPKR_RANKU1_2";
		case 3:
			return "MGPKR_RANKU1_3";
		case 4:
			return "MGPKR_RANKU1_4";
		case 5:
			return "MGPKR_RANKU1_5";
		case 6:
			return "MGPKR_RANKU1_6";
		case 7:
			return "MGPKR_RANKU1_7";
		case 8:
			return "MGPKR_RANKU1_8";
		case 9:
			return "MGPKR_RANKU1_9";
		case 10:
			return "MGPKR_RANKU1_10";
		case 11:
			return "MGPKR_RANKU1_JACK";
		case 12:
			return "MGPKR_RANKU1_QUEEN";
		case 13:
			return "MGPKR_RANKU1_KING";
		case 14:
			return "MGPKR_RANKU1_ACE";
		default:
			break;
	}
	return "unknown";
}

void func_1659(var uParam0, int iParam1, int iParam2)
{
	if (&uParam0->f_818[iParam1] == 0)
	{
	}
	else if (uParam0->f_818[iParam1]->f_50)
	{
	}
	else if (uParam0->f_818[iParam1]->f_8 != 1)
	{
	}
	else if (uParam0->f_818[iParam1]->f_1 != 2 && uParam0->f_818[iParam1]->f_1 != 1)
	{
	}
	else
	{
		func_471(uParam0, iParam1, 26);
		func_1235(uParam0, iParam1, 0);
		switch (iParam2)
		{
			case 0:
				iVar0 = ((uParam0->f_800 + get_random_int_in_range(1, 5)) % 5);
				uParam0->f_800 = iVar0;
				break;
			default:
				iVar0 = ((uParam0->f_801 + get_random_int_in_range(1, 4)) % 4);
				uParam0->f_801 = iVar0;
				break;
		}
		uParam0->f_818[iParam1]->f_42 = iParam2;
		uParam0->f_818[iParam1]->f_43 = iVar0;
		if (!uParam0->f_40)
		{
			switch (iParam2)
			{
				case 0:
					if (uParam0->f_818[iParam1]->f_1 == 2)
					{
						request_task_move_network_state_transition(&(uParam0->f_818[iParam1]), "FidgetHoldCardsSubtle");
					}
					else
					{
						request_task_move_network_state_transition(&(uParam0->f_818[iParam1]), "FidgetNoCardsSubtle");
					}
					break;
				default:
					if (uParam0->f_818[iParam1]->f_1 == 2)
					{
						request_task_move_network_state_transition(&(uParam0->f_818[iParam1]), "FidgetHoldCards");
					}
					else
					{
						request_task_move_network_state_transition(&(uParam0->f_818[iParam1]), "FidgetNoCards");
					}
					break;
			}
			set_task_move_network_signal_float(&(uParam0->f_818[iParam1]), "CheckType", to_float(iVar0));
		}
	}
}

int func_1660(int iParam0)
{
	iVar0 = func_347(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	return (*Global_1951255)[iVar0]->f_3;
}

bool func_1661(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_buy_award_key_valid(iParam0);
}

bool func_1662(int iParam0, int iParam1)
{
	Var0 = 10;
	Var0.f_1.f_4 = 15;
	Var0.f_1.f_36 = 10;
	Var0.f_1.f_47.f_4 = 15;
	Var0.f_1.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	if (!_item_database_fillout_buy_award_acquire_costs(iParam0, &Var0, &uVar471, 10) || iLocal_475 == 0)
	{
		return false;
	}
	iVar473 = 0;
	iVar474 = 0;
	while (iLocal_478 < iLocal_475)
	{
		if (&Var0[iLocal_478] == iParam1)
		{
			iVar473 = Var0[iLocal_478]->f_35;
			iVar475 = 0;
			while (iLocal_479 < iLocal_477)
			{
				uVar472 = &Var0[iLocal_478]->f_36[iLocal_479];
				if (iLocal_476 == 0)
				{
				}
				else if (!_unlock_is_unlocked(iLocal_476))
				{
					return true;
				}
				iVar475 = iLocal_479 + 1;
			}
		}
		iVar474 = iLocal_478 + 1;
	}
	return false;
}

int func_1663(int iParam0, int iParam1)
{
	if (!func_1664(iParam0, 2))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (_0x99c6ea66dfe73757(iParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

bool func_1664(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x4308812a6e9ca62e(iParam0, iParam1);
}

void func_1665(int iParam0, int iParam1, var uParam2, int iParam3)
{
	if (*uParam2 < 15)
	{
		return;
	}
	else if (iParam3 > *uParam2 || iParam3 < 1)
	{
		return;
	}
	Var7.f_1 = 10;
	if (!_0xe81d0378a384e755(iParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		fVar21[iVar0] = 1f;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Var7)
	{
		uVar6 = &Var7.f_1[iVar1];
		iVar4 = _item_database_get_number_of_modified_prices(uVar6);
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (_item_database_get_modified_price(uVar6, iVar2) != iParam1)
			{
			}
			else
			{
				iVar5 = _item_database_get_number_of_modifiers(uVar6);
				iVar3 = 0;
				while (iVar3 < iVar5)
				{
					if (!_item_database_fillout_modifier(uVar6, iVar3, &Var19))
					{
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < iParam3)
						{
							if (uParam2[iVar0] == Var19)
							{
								fVar21[iVar0] = (&fVar21[iVar0] + (Var19.f_1 - 1f));
							}
							else
							{
								iVar0++;
							}
						}
					}
					iVar3++;
				}
			}
			else
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (&fVar21[iVar0] != 1f && (*uParam2)[iVar0]->f_1 > 0)
		{
			if (uParam2[iVar0] == 773203532)
			{
				(*uParam2)[iVar0]->f_1 = (((100 * (*uParam2)[iVar0]->f_1) * round((&fVar21[iVar0] * 100f))) / 1000000) * 100;
			}
			else
			{
				(*uParam2)[iVar0]->f_1 = (((100 * (*uParam2)[iVar0]->f_1) * round((&fVar21[iVar0] * 100f))) / 10000);
			}
			if ((*uParam2)[iVar0]->f_1 == 0 && func_1666(uParam2[iVar0]) != -829303394)
			{
				(*uParam2)[iVar0]->f_1 = 1;
			}
		}
		iVar0++;
	}
}

int func_1666(int iParam0)
{
	if (!func_1492(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_1667(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (Global_1952637->f_2843.f_1 >= 5)
	{
		return 0;
	}
	if (!func_1729(iParam0))
	{
		return 0;
	}
	if (!bParam3)
	{
		return 1;
	}
	iVar0 = func_1521(iParam0);
	return func_1730(iParam1, iVar0, bParam2, 1);
}

void func_1668(int iParam0, int iParam1)
{
	if (Global_1071686->f_21952[iParam0]->f_3 != iParam1)
	{
		Global_1071686->f_21952[iParam0]->f_3 = iParam1;
		func_1525(iParam0);
	}
}

void func_1669(int iParam0, int iParam1)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_5 != iParam1)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_5 = iParam1;
		func_1525(iParam0);
	}
}

int func_1670(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_1952637->f_2843.f_1)
	{
		if (&Global_1952637->f_2843.f_43[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1671(int iParam0, var uParam1)
{
	return (Global_1952637->f_2843.f_3[iParam0] && uParam1) != 0;
}

void func_1672(int iParam0, var uParam1)
{
	Global_1952637->f_2843.f_3[iParam0] = (&Global_1952637->f_2843.f_3[iParam0] - (Global_1952637->f_2843.f_3[iParam0] && uParam1));
}

int func_1673(int iParam0)
{
	switch (iParam0)
	{
		case 708211766:
			return 1;
		case -1815871154:
			return 2;
		case 1053922635:
			return 4;
		case -1248203249:
			return 8;
		case -1275860049:
			return 16;
		case -473313046:
			return 32;
		case 1009605579:
			return 64;
		case -92538845:
			return 256;
		case 350097565:
			return 512;
		case 346761890:
			return 1024;
		case -915377750:
			return 2048;
		case -1283403230:
			return 4096;
		case 1024778115:
			return 8192;
		case 75507907:
			return 16384;
		case -1678578495:
			return 32768;
		case -1925540957:
			return 65536;
		case -1932005642:
			return 131072;
		case -803648582:
			return 128;
		case 351949263:
			return 262144;
		case -597281578:
			return 524288;
		case 465720259:
			return 1048576;
		case 396349281:
			return 2097152;
		case -376594188:
			return -1;
		case -663436545:
			return 112;
		case 1042019528:
			return 2160;
		case -141044514:
			return 8304;
		case 884232794:
			return 16496;
		case 836721350:
			return 40960;
		case -1062102573:
			return 65601;
		case -884591393:
			return 96;
		case -1886898087:
			return 32880;
		case -1629261761:
			return 2049;
		case -366477279:
			return 0;
		default:
			break;
	}
	return 0;
}

bool func_1674(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar2 = func_1731(iVar0, 1);
		if (!func_1732(iVar2, 2))
		{
		}
		else if (&Global_1952637->f_2843.f_3[iVar0] != 0)
		{
		}
		else
		{
			if (bParam0)
			{
				func_1733(iVar0, 0);
				func_1734(Global_1952637->f_2897.f_2[(Global_1952637->f_2897 - 1)], 1, 6);
			}
			func_1735(iVar2, 3, 6);
			Global_1952637->f_2764[iVar0] = 0;
			Global_1952637->f_2764[iVar0]->f_1 = 0;
			iVar1++;
		}
		iVar0++;
	}
	return iVar1 > 0;
}

void func_1675(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_1736(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_1737(Var0);
}

void func_1676(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	Global_1952637->f_925 = 0;
	if (iParam3 == -1 && bParam6)
	{
		_0x0bfa1bd465cdfefd(iParam1);
		if (bParam7)
		{
			func_1738(iParam1, &(Global_1952637->f_4), Global_1952637->f_3481, Global_1956200->f_1431.f_106);
		}
	}
	else
	{
		bParam6 = false;
	}
	if ((func_1739(32768) && func_1732(1108822547, 8)) && func_1740(10, iParam3))
	{
		func_1741(iParam1, 0, 1, 0);
	}
	iVar1 = 0;
	while (iVar1 < Global_1952637->f_592)
	{
		iVar2 = &Global_1952637->f_552[iVar1];
		iVar0 = func_1742(iVar2, 1);
		if (func_1732(iVar2, 8))
		{
		}
		else if (Global_1952637->f_83[iVar0]->f_1 <= 0 || &Global_1952637->f_83[iVar0]->f_3[0] == -1802376732)
		{
		}
		else if (&uParam0->f_1[iVar0] == 0)
		{
		}
		else if (!func_1740(iVar0, iParam3))
		{
		}
		else if ((func_1732(iVar2, 6) || &uParam0->f_1[iVar0] == &Global_1952637->f_83[iVar0]) || uParam0->f_1[iVar0]->f_1 == 289238755)
		{
			if (!func_1732(iVar2, 1) || bParam2)
			{
				Global_1952637->f_925++;
				if (!bParam6)
				{
					func_1743(iParam1, iVar0, 1);
				}
				if (uParam0->f_1[iVar0]->f_1 == 289238755)
				{
					Global_1952637->f_2764[iVar0]->f_1 = 289238755;
				}
				func_1744(iVar2, 1, 6);
			}
		}
		else
		{
			if (!bParam6)
			{
				if ((!bParam2 && &uParam0->f_1[iVar0] == &Global_1952637->f_2764[iVar0]) && uParam0->f_1[iVar0]->f_1 == Global_1952637->f_2764[iVar0]->f_1)
				{
				}
				else
				{
					func_1743(iParam1, iVar0, 1);
					Global_1952637->f_2764[iVar0] = &uParam0->f_1[iVar0];
					Global_1952637->f_2764[iVar0]->f_1 = uParam0->f_1[iVar0]->f_1;
					if (func_1732(iVar2, 1))
					{
						func_1735(iVar2, 1, 6);
					}
					Global_1952637->f_925++;
					func_1745(uParam0->f_1[iVar0], iParam1);
				}
				iVar1++;
				if (Global_1952637->f_925 <= 0)
				{
					return;
				}
				if (bParam4)
				{
					_0xaab86462966168ce(iParam1, 1);
					_update_ped_variation(iParam1, false, true, true, true, bParam5);
				}
			}
		}
	}
}

bool func_1677(int iParam0)
{
	return _0x72b2e00c9bac6789(&(Global_1071686->f_21416.f_260), iParam0);
}

bool func_1678(int iParam0)
{
	return func_1526(iParam0, 2);
}

void func_1679(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

int func_1680(int iParam0)
{
	iVar0 = -1;
	if (func_1746(&Var1, iParam0))
	{
		iVar0 = ((func_1747() - _0xe13634bb6baf0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_1681(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return (*Global_1257541)[iParam0]->f_2;
}

bool func_1682(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1777724963:
		case -1165569262:
		case -697789102:
		case -260420884:
		case -232478158:
		case 78055447:
		case 195932838:
		case 850213441:
		case 974227447:
		case 1532822440:
		case 1918154385:
			return true;
		case 1539023636:
			return iParam1;
		default:
			break;
	}
	return false;
}

int func_1683(int iParam0)
{
	iVar0 = iParam0;
	while (iVar0 < Global_1071686->f_19550)
	{
		if (iVar0 + 1 < 32)
		{
			*Global_1071686->f_19550.f_1[iVar0] = { *(Global_1071686->f_19550.f_1[iVar0 + 1]) };
		}
		iVar0++;
	}
	vVar1 = -1;
	vVar1.f_1 = -1;
	if (Global_1071686->f_19550 < 32)
	{
		*Global_1071686->f_19550.f_1[Global_1071686->f_19550] = { vVar1 };
	}
	Global_1071686->f_19550 = (Global_1071686->f_19550 - 1);
	if (Global_1071686->f_19550 < 0)
	{
		Global_1071686->f_19550 = 0;
	}
	return 1;
}

int func_1684(int iParam0)
{
	iVar0 = (Global_1071686->f_19550 - 1);
	vVar1 = -1;
	vVar1.f_1 = -1;
	while (iVar0 >= iParam0)
	{
		if (iVar0 + 1 < 32)
		{
			*(Global_1071686->f_19550.f_1[iVar0 + 1]) = { *Global_1071686->f_19550.f_1[iVar0] };
		}
		iVar0 = (iVar0 - 1);
	}
	*Global_1071686->f_19550.f_1[iParam0] = { vVar1 };
	Global_1071686->f_19550++;
	if (Global_1071686->f_19550 > 32)
	{
		Global_1071686->f_19550 = 32;
	}
	return 1;
}

int func_1685(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2142074819:
			return 521;
		case -2141419899:
			return 404;
		case -2106445152:
			return 277;
		case -2106214197:
			return 102;
		case -2101264851:
			return 192;
		case -2100409704:
			return 470;
		case -2073072369:
			return 57;
		case -2069570138:
			return 25;
		case -2066272360:
			return 394;
		case -2058120606:
			return 194;
		case -2056579774:
			return 464;
		case -2043909922:
			return 338;
		case -2038424081:
			return 49;
		case -2034257789:
			return 90;
		case -2022369555:
			return 251;
		case -2021582629:
			return 110;
		case -2020023971:
			return 263;
		case -1957523409:
			return 205;
		case -1952856164:
			return 163;
		case -1949204933:
			return 261;
		case -1943367752:
			return 387;
		case -1939389836:
			return 416;
		case -1932919229:
			return 428;
		case -1925798111:
			return 41;
		case -1914141706:
			return 439;
		case -1906892166:
			return 403;
		case -1882707460:
			return 463;
		case -1861414976:
			return 380;
		case -1852605133:
			return 10;
		case -1848799275:
			return 409;
		case -1847672446:
			return 312;
		case -1842033327:
			return 504;
		case -1840704908:
			return 274;
		case -1838712533:
			return 26;
		case -1838352012:
			return 55;
		case -1835851517:
			return 54;
		case -1831552326:
			return 121;
		case -1827602683:
			return 446;
		case -1825294305:
			return 252;
		case -1824738758:
			return 262;
		case -1818850842:
			return 239;
		case -1808329564:
			return 411;
		case -1799960545:
			return 243;
		case -1764522338:
			return 308;
		case -1763509974:
			return 139;
		case -1753769127:
			return 398;
		case -1749433374:
			return 479;
		case -1749043433:
			return 524;
		case -1741667789:
			return 62;
		case -1738165526:
			return 3;
		case -1719055206:
			return 519;
		case -1718674470:
			return 23;
		case -1717960576:
			return 59;
		case -1711895055:
			return 13;
		case -1706438978:
			return 220;
		case -1705799799:
			return 421;
		case -1700452710:
			return 317;
		case -1684974589:
			return 466;
		case -1674179981:
			return 53;
		case -1673998598:
			return 527;
		case -1666278201:
			return 33;
		case -1664435783:
			return 486;
		case -1624627591:
			return 438;
		case -1612662716:
			return 198;
		case -1610966108:
			return 354;
		case -1608141409:
			return 538;
		case -1585840296:
			return 336;
		case -1582926490:
			return 144;
		case -1579419919:
			return 145;
		case -1578292898:
			return 434;
		case -1573753524:
			return 503;
		case -1558439474:
			return 286;
		case -1556041029:
			return 410;
		case -1547280108:
			return 518;
		case -1532284567:
			return 114;
		case -1530132748:
			return 296;
		case -1524512402:
			return 206;
		case -1523910291:
			return 153;
		case -1502194556:
			return 523;
		case -1462313959:
			return 462;
		case -1455998786:
			return 370;
		case -1447311849:
			return 321;
		case -1445041595:
			return 528;
		case -1442844448:
			return 465;
		case -1436021162:
			return 170;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case -1422877860:
			return 472;
		case -1419919497:
			return 22;
		case -1414537028:
			return 71;
		case -1405998267:
			return 103;
		case -1395855864:
			return 478;
		case -1387772214:
			return 407;
		case -1378911044:
			return 475;
		case -1369678628:
			return 487;
		case -1344601768:
			return 347;
		case -1341750998:
			return 476;
		case -1340339190:
			return 362;
		case -1339871203:
			return 532;
		case -1329135070:
			return 138;
		case -1319875891:
			return 437;
		case -1311865656:
			return 37;
		case -1296807958:
			return 352;
		case -1290997627:
			return 461;
		case -1287894233:
			return 426;
		case -1283202000:
			return 353;
		case -1282804314:
			return 255;
		case -1278074582:
			return 169;
		case -1271608261:
			return 96;
		case -1262828457:
			return 423;
		case -1257057567:
			return 21;
		case -1241340344:
			return 285;
		case -1236261996:
			return 222;
		case -1232809834:
			return 111;
		case -1230112817:
			return 168;
		case -1223121209:
			return 124;
		case -1215445344:
			return 129;
		case -1209597203:
			return 365;
		case -1206122982:
			return 154;
		case -1187950766:
			return 45;
		case -1181950077:
			return 400;
		case -1179948750:
			return 134;
		case -1170496998:
			return 46;
		case -1164215952:
			return 221;
		case -1161687045:
			return 391;
		case -1151084372:
			return 122;
		case -1145519186:
			return 98;
		case -1145153057:
			return 339;
		case -1124061431:
			return 229;
		case -1123615607:
			return 29;
		case -1120447016:
			return 443;
		case -1095341658:
			return 408;
		case -1080627546:
			return 314;
		case -1077783786:
			return 191;
		case -1063147448:
			return 149;
		case -1062490780:
			return 77;
		case -1060078174:
			return 226;
		case -1056767524:
			return 174;
		case -1053549743:
			return 56;
		case -1042021329:
			return 382;
		case -1029225159:
			return 104;
		case -1023919011:
			return 431;
		case -1014145132:
			return 273;
		case -1004266677:
			return 460;
		case -978957786:
			return 237;
		case -959357075:
			return 36;
		case -950054349:
			return 150;
		case -947815572:
			return 399;
		case -941648233:
			return 511;
		case -939420910:
			return 44;
		case -931337253:
			return 424;
		case -925071604:
			return 541;
		case -919512195:
			return 40;
		case -911126844:
			return 368;
		case -897750037:
			return 366;
		case -895307590:
			return 500;
		case -895073533:
			return 393;
		case -889906510:
			return 389;
		case -888632790:
			return 505;
		case -879507474:
			return 223;
		case -868076593:
			return 82;
		case -857964358:
			return 81;
		case -853383233:
			return 63;
		case -852602679:
			return 432;
		case -851626677:
			return 371;
		case -839820438:
			return 419;
		case -828139293:
			return 246;
		case -812641169:
			return 534;
		case -811637947:
			return 232;
		case -800891377:
			return 493;
		case -797689456:
			return 514;
		case -796902762:
			return 86;
		case -792853067:
			return 240;
		case -789397228:
			return 248;
		case -785605431:
			return 236;
		case -781631220:
			return 328;
		case -764163380:
			return 215;
		case -748969569:
			return 76;
		case -741351766:
			return 58;
		case -736853952:
			return 302;
		case -734416508:
			return 372;
		case -729679654:
			return 530;
		case -699277634:
			return 4;
		case -693828600:
			return 355;
		case -683458244:
			return 78;
		case -677920206:
			return 458;
		case -666014935:
			return 155;
		case -664512648:
			return 65;
		case -664252410:
			return 188;
		case -644722288:
			return 247;
		case -640663440:
			return 320;
		case -639037538:
			return 183;
		case -635323621:
			return 512;
		case -632127260:
			return 342;
		case -630295963:
			return 494;
		case -628542779:
			return 69;
		case -622554983:
			return 306;
		case -618620429:
			return 185;
		case -604603161:
			return 471;
		case -591815673:
			return 383;
		case -583127403:
			return 506;
		case -574190021:
			return 492;
		case -554519756:
			return 535;
		case -545450213:
			return 313;
		case -538889627:
			return 173;
		case -538880323:
			return 172;
		case -534215902:
			return 128;
		case -524787708:
			return 379;
		case -524145696:
			return 115;
		case -523522517:
			return 300;
		case -515561750:
			return 225;
		case -510945576:
			return 337;
		case -503955743:
			return 235;
		case -502473159:
			return 326;
		case -502324015:
			return 8;
		case -500245243:
			return 515;
		case -492731190:
			return 418;
		case -491981251:
			return 184;
		case -489737721:
			return 401;
		case -468693731:
			return 109;
		case -464836488:
			return 254;
		case -460024530:
			return 349;
		case -448554447:
			return 531;
		case -441204543:
			return 533;
		case -434590080:
			return 212;
		case -414883443:
			return 459;
		case -404698347:
			return 202;
		case -397760715:
			return 141;
		case -396624371:
			return 373;
		case -389056691:
			return 257;
		case -381925743:
			return 507;
		case -371827125:
			return 388;
		case -364475655:
			return 429;
		case -360036154:
			return 304;
		case -356975260:
			return 101;
		case -355531636:
			return 369;
		case -350863510:
			return 160;
		case -349064220:
			return 298;
		case -334729750:
			return 67;
		case -333135263:
			return 334;
		case -330120947:
			return 333;
		case -329176208:
			return 491;
		case -311373772:
			return 539;
		case -306246697:
			return 311;
		case -299522880:
			return 319;
		case -297483764:
			return 433;
		case -279765076:
			return 345;
		case -270094635:
			return 253;
		case -261141318:
			return 30;
		case -259123672:
			return 231;
		case -254562075:
			return 130;
		case -243260793:
			return 417;
		case -238080464:
			return 119;
		case -233743613:
			return 258;
		case -226366310:
			return 522;
		case -223469678:
			return 201;
		case -220282381:
			return 137;
		case -211583122:
			return 516;
		case -209894800:
			return 344;
		case -207792846:
			return 482;
		case -191424539:
			return 147;
		case -182889087:
			return 175;
		case -154581735:
			return 294;
		case -150493654:
			return 95;
		case -129643890:
			return 11;
		case -110352060:
			return 430;
		case -108780030:
			return 350;
		case -108307814:
			return 28;
		case -102827640:
			return 402;
		case -101740709:
			return 498;
		case -99303535:
			return 165;
		case -90486812:
			return 490;
		case -89829333:
			return 422;
		case -86199844:
			return 143;
		case -80522843:
			return 152;
		case -76237062:
			return 309;
		case -75928821:
			return 508;
		case -75024673:
			return 244;
		case -74031276:
			return 440;
		case -70727482:
			return 452;
		case -63926460:
			return 87;
		case -61411516:
			return 357;
		case -38135693:
			return 467;
		case -35658630:
			return 24;
		case -25901845:
			return 275;
		case -9438024:
			return 127;
		case -1:
			return 0;
		case 0:
			return 1;
		case 2639906:
			return 151;
		case 8924991:
			return 282;
		case 16844748:
			return 405;
		case 26054262:
			return 323;
		case 26245360:
			return 224;
		case 38162571:
			return 72;
		case 52706132:
			return 230;
		case 54073871:
			return 74;
		case 61537448:
			return 540;
		case 64896505:
			return 390;
		case 74872959:
			return 331;
		case 84709454:
			return 453;
		case 93964309:
			return 395;
		case 94263042:
			return 276;
		case 106479759:
			return 99;
		case 141950038:
			return 112;
		case 148595040:
			return 529;
		case 153152452:
			return 84;
		case 168171957:
			return 181;
		case 171499483:
			return 268;
		case 187862543:
			return 16;
		case 192515737:
			return 14;
		case 198200492:
			return 228;
		case 210001842:
			return 60;
		case 215903338:
			return 489;
		case 224551212:
			return 140;
		case 227918160:
			return 180;
		case 229371495:
			return 327;
		case 235928616:
			return 271;
		case 237155783:
			return 517;
		case 249726958:
			return 162;
		case 269047710:
			return 52;
		case 273461605:
			return 79;
		case 280705402:
			return 93;
		case 282809459:
			return 117;
		case 299694527:
			return 260;
		case 300221584:
			return 136;
		case 302205488:
			return 322;
		case 311708813:
			return 195;
		case 320943355:
			return 131;
		case 321629486:
			return 509;
		case 330026330:
			return 64;
		case 345808947:
			return 272;
		case 356365161:
			return 47;
		case 371850993:
			return 266;
		case 373691918:
			return 186;
		case 374115931:
			return 88;
		case 404823609:
			return 484;
		case 405586984:
			return 34;
		case 407136781:
			return 171;
		case 409602249:
			return 278;
		case 417081698:
			return 17;
		case 417525590:
			return 288;
		case 420709909:
			return 42;
		case 424920933:
			return 544;
		case 426191476:
			return 15;
		case 434558613:
			return 196;
		case 439465264:
			return 106;
		case 440043364:
			return 31;
		case 442317566:
			return 287;
		case 449774763:
			return 214;
		case 459290420:
			return 316;
		case 468797819:
			return 341;
		case 469053995:
			return 218;
		case 473295046:
			return 2;
		case 476714362:
			return 219;
		case 478884033:
			return 146;
		case 479419429:
			return 290;
		case 509781469:
			return 377;
		case 514932331:
			return 233;
		case 522677506:
			return 264;
		case 526003171:
			return 392;
		case 527226204:
			return 157;
		case 544152906:
			return 113;
		case 559573222:
			return 238;
		case 560154875:
			return 455;
		case 565812320:
			return 447;
		case 582380806:
			return 358;
		case 588987611:
			return 177;
		case 589380360:
			return 340;
		case 618699440:
			return 75;
		case 619839857:
			return 375;
		case 630808005:
			return 126;
		case 640520536:
			return 469;
		case 642824856:
			return 481;
		case 651395116:
			return 279;
		case 664571177:
			return 297;
		case 665676602:
			return 281;
		case 673606600:
			return 499;
		case 689024866:
			return 132;
		case 689930684:
			return 204;
		case 704802028:
			return 176;
		case 715735881:
			return 483;
		case 723021499:
			return 250;
		case 730069127:
			return 474;
		case 747514327:
			return 381;
		case 753127042:
			return 48;
		case 757752139:
			return 107;
		case 784360470:
			return 361;
		case 791041526:
			return 18;
		case 799106423:
			return 454;
		case 803929300:
			return 468;
		case 804063423:
			return 502;
		case 817925178:
			return 227;
		case 826868753:
			return 473;
		case 831940854:
			return 406;
		case 846837291:
			return 450;
		case 865557632:
			return 536;
		case 868326136:
			return 270;
		case 883901517:
			return 384;
		case 885203519:
			return 315;
		case 885378256:
			return 378;
		case 885777893:
			return 374;
		case 896725436:
			return 510;
		case 929582877:
			return 367;
		case 931649776:
			return 211;
		case 932909855:
			return 283;
		case 943561238:
			return 415;
		case 945612176:
			return 234;
		case 965467037:
			return 343;
		case 965986934:
			return 19;
		case 976539083:
			return 295;
		case 982765715:
			return 442;
		case 1010885152:
			return 7;
		case 1015669983:
			return 120;
		case 1028084603:
			return 445;
		case 1032791043:
			return 501;
		case 1050128548:
			return 269;
		case 1064154891:
			return 108;
		case 1074873669:
			return 142;
		case 1112996351:
			return 537;
		case 1126565489:
			return 485;
		case 1140218954:
			return 27;
		case 1151197909:
			return 242;
		case 1153686207:
			return 451;
		case 1157309080:
			return 513;
		case 1159471771:
			return 360;
		case 1160698568:
			return 133;
		case 1164928979:
			return 156;
		case 1166612791:
			return 330;
		case 1167397384:
			return 292;
		case 1177464213:
			return 38;
		case 1186594126:
			return 217;
		case 1193080109:
			return 182;
		case 1195508693:
			return 542;
		case 1203043430:
			return 259;
		case 1205826474:
			return 83;
		case 1207048789:
			return 167;
		case 1213993593:
			return 158;
		case 1221801385:
			return 310;
		case 1232840551:
			return 480;
		case 1238086793:
			return 346;
		case 1248935549:
			return 414;
		case 1250636944:
			return 245;
		case 1279586666:
			return 448;
		case 1280406542:
			return 441;
		case 1287917122:
			return 386;
		case 1302228510:
			return 348;
		case 1306158345:
			return 199;
		case 1321892118:
			return 356;
		case 1325325699:
			return 420;
		case 1341699707:
			return 525;
		case 1350371763:
			return 20;
		case 1350391819:
			return 73;
		case 1352699670:
			return 256;
		case 1358491857:
			return 249;
		case 1360745816:
			return 80;
		case 1362354162:
			return 496;
		case 1376646519:
			return 210;
		case 1399676951:
			return 207;
		case 1410198831:
			return 209;
		case 1421300489:
			return 413;
		case 1433244935:
			return 164;
		case 1441416901:
			return 208;
		case 1453909576:
			return 123;
		case 1466547629:
			return 118;
		case 1478132521:
			return 303;
		case 1480425906:
			return 449;
		case 1485195808:
			return 50;
		case 1485494263:
			return 100;
		case 1488286867:
			return 280;
		case 1488453464:
			return 318;
		case 1494062795:
			return 425;
		case 1497516462:
			return 5;
		case 1500064347:
			return 70;
		case 1509509592:
			return 35;
		case 1512816328:
			return 166;
		case 1517904467:
			return 203;
		case 1517951665:
			return 435;
		case 1521272922:
			return 457;
		case 1522511407:
			return 265;
		case 1549124796:
			return 325;
		case 1557082963:
			return 161;
		case 1561093093:
			return 385;
		case 1582370975:
			return 332;
		case 1583012985:
			return 289;
		case 1591451572:
			return 301;
		case 1601722481:
			return 520;
		case 1607768502:
			return 9;
		case 1609506757:
			return 105;
		case 1626481264:
			return 116;
		case 1643531967:
			return 125;
		case 1649996811:
			return 179;
		case 1660024373:
			return 148;
		case 1665756137:
			return 91;
		case 1666964801:
			return 526;
		case 1691618738:
			return 66;
		case 1698972798:
			return 351;
		case 1703398561:
			return 364;
		case 1703426636:
			return 43;
		case 1708045337:
			return 329;
		case 1713221411:
			return 135;
		case 1743048395:
			return 213;
		case 1744443559:
			return 376;
		case 1766284049:
			return 92;
		case 1774060092:
			return 543;
		case 1776302352:
			return 299;
		case 1788424349:
			return 444;
		case 1812677765:
			return 397;
		case 1822001510:
			return 197;
		case 1846061697:
			return 97;
		case 1850082804:
			return 193;
		case 1866434585:
			return 412;
		case 1867912207:
			return 68;
		case 1881028477:
			return 363;
		case 1884271742:
			return 51;
		case 1891256113:
			return 436;
		case 1908151693:
			return 335;
		case 1926308480:
			return 94;
		case 1932172605:
			return 359;
		case 1944170089:
			return 159;
		case 1947931439:
			return 216;
		case 1952610440:
			return 200;
		case 1954026328:
			return 307;
		case 1982676972:
			return 89;
		case 2008888900:
			return 178;
		case 2013720626:
			return 488;
		case 2016141805:
			return 6;
		case 2019386373:
			return 187;
		case 2024121624:
			return 190;
		case 2024383613:
			return 305;
		case 2024769126:
			return 293;
		case 2037589949:
			return 61;
		case 2048790450:
			return 497;
		case 2051822093:
			return 284;
		case 2068208444:
			return 427;
		case 2068253437:
			return 477;
		case 2077022393:
			return 291;
		case 2079292950:
			return 456;
		case 2080210939:
			return 267;
		case 2091701359:
			return 39;
		case 2103908624:
			return 396;
		case 2109952320:
			return 189;
		case 2113625508:
			return 324;
		case 2127412005:
			return 495;
		case 2127577956:
			return 241;
		case 2136753624:
			return 85;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

bool func_1686(int iParam0)
{
	iVar0 = func_1748(iParam0);
	if (iVar0 < 336)
	{
		return false;
	}
	return true;
}

bool func_1687(int iParam0)
{
	if (iParam0 == 1932172605)
	{
		return true;
	}
	return false;
}

void func_1688(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
}

void func_1689(int iParam0, int iParam1)
{
	if (iParam0 == iParam1)
	{
		return;
	}
	if (iParam1 < iParam0)
	{
		iVar0 = iParam0;
		while (iVar0 > iParam1)
		{
			func_1749((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1749(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_247(*Global_1900736->f_1[0]))
	{
		func_1114(*Global_1900736->f_1[0], 3);
	}
}

void func_1690(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1951255)[iParam0]->f_3, bParam1);
	}
}

void func_1691(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 || iParam1);
}

bool func_1692(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

bool func_1693(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 2:
			if (iParam1 < 0 || iParam1 >= 6)
			{
				return false;
			}
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 0.008654f, 1.171513f, 0.4999996f };
					return true;
				case 1:
					*uParam2 = { 1.018887f, 0.5782621f, 0.4999996f };
					return true;
				case 2:
					*uParam2 = { 1.010233f, -0.5932513f, 0.4999996f };
					return true;
				case 3:
					*uParam2 = { -0.008654f, -1.171513f, 0.4999996f };
					return true;
				case 4:
					*uParam2 = { -1.018887f, -0.5782621f, 0.4999996f };
					return true;
				case 5:
					*uParam2 = { -1.010233f, 0.5932513f, 0.4999996f };
					return true;
				default:
					break;
			}
			return true;
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { Vector(50f, -7.9116f, 112.5219f) / Vector(100f, 100f, 100f) };
					return true;
				case 1:
					*uParam2 = { Vector(50f, -73.55062f, 45.94575f) / Vector(100f, 100f, 100f) };
					return true;
				case 2:
					*uParam2 = { Vector(50f, -72.85871f, -47.61618f) / Vector(100f, 100f, 100f) };
					return true;
				case 3:
					*uParam2 = { Vector(50f, -6.31211f, -113.1842f) / Vector(100f, 100f, 100f) };
					return true;
				case 4:
					*uParam2 = { Vector(50f, 82.1513f, 0.8654f) / Vector(100f, 100f, 100f) };
					return true;
				default:
					break;
			}
			return false;
		case 1:
			fVar0 = 0.98f;
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 0f, 0.66f, fVar0 };
					return true;
				case 1:
					*uParam2 = { 0f, -0.66f, fVar0 };
					return true;
				case 2:
					*uParam2 = { 0.66f, 0f, fVar0 };
					return true;
				case 3:
					*uParam2 = { -0.66f, 0f, fVar0 };
					return true;
				default:
					break;
			}
			return false;
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1f, 0f, 0f };
					return true;
				case 1:
					*uParam2 = { 1f, 0f, 0f };
					return true;
				default:
					break;
			}
			return true;
		default:
			break;
	}
	return true;
}

char* func_1694()
{
	return "unnamed";
}

var func_1695(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = _show_objective(&Var0, &Var13, iParam5);
	return uVar15;
}

char* func_1696(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
{
	switch (iParam0)
	{
		case 1:
			return _create_var_string(2, sParam1, sParam4);
		case 2:
			return _create_var_string(2, sParam1, sParam4, sParam5);
		case 3:
			return _create_var_string(10, sParam1, sParam2);
		case 4:
			return _create_var_string(42, sParam1, sParam2, sParam3);
	}
	return _create_var_string(2, func_1750(sParam1));
}

bool func_1697(int iParam0)
{
	return iParam0 != 0;
}

int func_1698()
{
	if (_0x3aeabae3f3c7600c() && _0xa2e2bea4e83f6270(-92244418) > 0)
	{
		_0xb5e2eda2135e0fa1(-92244418, 0, &iVar0);
	}
	else
	{
		return -1;
	}
	if (iVar0 == 0)
	{
		return -1;
	}
	iVar5 = func_1751(iVar0);
	if (iVar5 < 0 || iVar5 >= 12)
	{
		return -1;
	}
	return (135 + iVar5);
}

int func_1699(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -1519264107;
		case 2:
			return -1349160228;
		case 3:
			return -732709691;
		case 4:
			return 1691387227;
		case 5:
			return -969278268;
		case 6:
			return 650135692;
		case 7:
			return 317202356;
		case 8:
			return 2111135919;
		default:
			break;
	}
	return 0;
}

int func_1700(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return -562854755;
				case 1:
					return -193397860;
				case 2:
					return -1639158743;
				case 3:
					return -545263819;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -331472846;
				case 1:
					return 1266428317;
				case 2:
					return -1342435444;
				case 3:
					return -243002563;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 429079746;
				case 1:
					return 1587973176;
				case 2:
					return 1338229360;
				case 3:
					return -271501111;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return 771711526;
				case 1:
					return -466995375;
				case 2:
					return -398924971;
				case 3:
					return -1232006170;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return -2052512212;
				case 1:
					return -1144971953;
				case 2:
					return 86781479;
				case 3:
					return 416111513;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					return -446960320;
				case 1:
					return -2015262927;
				case 2:
					return -707938197;
				case 3:
					return 2136054096;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					return -1149863246;
				case 1:
					return 407185110;
				case 2:
					return -769170006;
				case 3:
					return -411703805;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return -1554709632;
				case 1:
					return 410660064;
				case 2:
					return -254646314;
				case 3:
					return 1524612084;
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_1701(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = Global_1296859->f_10;
	}
	return Global_263042[iParam0];
}

bool func_1702(int iParam0)
{
	return ((iParam0 == -1759663922 || iParam0 == -318976023) || iParam0 == 772881414);
}

int func_1703(int iParam0)
{
	return Global_1128574[iParam0];
}

bool func_1704(int iParam0)
{
	return func_1752(iParam0, 1);
}

var func_1705()
{
	return Global_1071686->f_28448[48]->f_3;
}

bool func_1706(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102219->f_3 && iParam0) != 0;
	}
	return ((*Global_1100469)[iParam1]->f_3 && iParam0) != 0;
}

int func_1707()
{
	return Global_1102219->f_26.f_3341;
}

bool func_1708(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	iVar0 = get_ped_index_from_entity_index(iParam0);
	if (iVar0 == Global_1102219->f_26.f_3344)
	{
		return true;
	}
	if (iVar0 == get_player_ped(player_id()))
	{
		return true;
	}
	return false;
}

bool func_1709(struct<2> Param0)
{
	return func_1753(Param0, 1, 4);
}

int func_1710()
{
	return &Global_1902818;
}

int func_1711(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_1712(int iParam0)
{
	switch (iParam0)
	{
		case 11:
			return 10;
		case 57:
			return 56;
		case 55:
			return 54;
		case 37:
			return 36;
		case 106:
			return 105;
		case 80:
			return 79;
		case 95:
			return 94;
		default:
			break;
	}
	return -1;
}

int func_1713(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1158905413;
		case 1:
			return 358397622;
		case 2:
			return 65999835;
		case 3:
			return 814443795;
		case 4:
			return 519621102;
		case 5:
			return -1628223003;
		case 6:
			return 1278256225;
		case 7:
			return 2038628101;
		case 8:
			return 1742494648;
		case 9:
			return -1010166918;
		case 10:
			return 660170868;
		case 11:
			return -1278312096;
		case 12:
			return -509158128;
		case 13:
			return -226656579;
		case 14:
			return 2115868159;
		case 15:
			return 1495813101;
		case 16:
			return 1197385818;
		case 17:
			return 1015780020;
		case 18:
			return -1286733825;
		case 19:
			return -1670393277;
		case 20:
			return -415733461;
		case 21:
			return -1207924036;
		case 22:
			return 497702414;
		case 23:
			return 719188085;
		case 24:
			return 43753457;
		case 25:
			return 771290791;
		case 26:
			return 20356387;
		case 27:
			return 309149584;
		case 28:
			return 1613781781;
		case 29:
			return 1693607065;
		case 30:
			return 1132176120;
		case 31:
			return 869270437;
		default:
			break;
	}
	return 623901053;
}

int func_1714()
{
	return get_ped_relationship_group_hash(player_ped_id());
}

bool func_1715(int iParam0)
{
	if (!func_1754(iParam0))
	{
		return false;
	}
	iVar0 = func_1755(func_514(), iParam0);
	switch (iVar0)
	{
		case 22:
		case 24:
		case 31:
		case 78:
		case 98:
		case 101:
		case 130:
			return true;
		default:
			break;
	}
	switch (iParam0)
	{
		case 1:
		case 9:
		case 10:
		case 12:
		case 14:
		case 15:
		case 16:
		case 17:
		case 25:
		case 27:
		case 28:
		case 29:
		case 30:
		case 33:
		case 34:
		case 37:
		case 38:
		case 39:
			return true;
		default:
			break;
	}
	return false;
}

bool func_1716(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_1756(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 == func_1757())
	{
		return func_1756(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1296859->f_22[iParam1])
	{
		return func_1756(&((*Global_1100469)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

float func_1717(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

bool func_1718(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!is_entity_a_ped(iParam0))
	{
		return false;
	}
	iVar0 = get_entity_model(iParam0);
	return _is_this_model_a_horse(iVar0);
}

bool func_1719(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return false;
	}
	if (_is_ped_using_scenario_hash(iParam0, -1805387726))
	{
		return true;
	}
	return false;
}

int func_1720(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1940258->f_12)
	{
		if ((bParam2 || Global_1940258->f_13 > 0) || Global_1940258->f_11 > 0)
		{
			return 1;
		}
	}
	else if (bParam1 && !Global_1940258->f_9 == 1370593166)
	{
		return 0;
	}
	if (Global_1940258->f_14 > 0 || (bParam2 && Global_1940258->f_14 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1940258->f_7)
		{
			if (bParam2 || Global_1940258->f_15 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_1721()
{
	return Global_1108365->f_935.f_28 != -1;
}

bool func_1722()
{
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (func_1758(iVar0, 8192))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1723()
{
	return &Global_1048580;
}

bool func_1724()
{
	return func_1706(131072, 255);
}

int func_1725(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = -1649591222;
			break;
		case -3:
			iVar0 = 1300413597;
			break;
		case 1:
			iVar0 = -1841318328;
			break;
		case -2:
			iVar0 = 1293082345;
			break;
		case 2:
			iVar0 = -1599460565;
			break;
		case 3:
			iVar0 = 1610555441;
			break;
		case 4:
			iVar0 = 2080488347;
			break;
		case 5:
			iVar0 = 1107336882;
			break;
		case 6:
			iVar0 = -1307562954;
			break;
		case 7:
			iVar0 = 1198585370;
			break;
		case 8:
			iVar0 = 1753821005;
			break;
		case 9:
			iVar0 = -1480791665;
			break;
		case 10:
			iVar0 = 1894568478;
			break;
		case 11:
			iVar0 = 1923799069;
			break;
		case 12:
			iVar0 = -605765767;
			break;
		case 13:
			iVar0 = 1252941330;
			break;
		case 14:
			iVar0 = -1930354636;
			break;
		case 15:
			iVar0 = 1332629624;
			break;
		case 16:
			iVar0 = 1746212499;
			break;
		case 17:
			iVar0 = 1859328971;
			break;
		case 18:
			iVar0 = 1151893103;
			break;
		case 19:
			iVar0 = -312924468;
			break;
	}
	return iVar0;
}

bool func_1726(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

Vector3 func_1727(vector3 vParam0, vector3 vParam3, float fParam6)
{
	return FtoV((1f - fParam6)) * vParam0 + Vector(fParam6, fParam6, fParam6) * vParam3;
}

float func_1728(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_1729(var uParam0)
{
	Var2 = -961687407;
	if (func_505() == -1)
	{
		Var2 = 1444744190;
	}
	Var2.f_1 = uParam0;
	Var2.f_3 = 0;
	_0x91ded5dd64bb2691(&Var2);
	if (!_0xed4413cee1bf142c(&Var2))
	{
		return false;
	}
	if (!_0x44b3a36933ac009c(&iVar0, &Var2, -2008906477))
	{
		return false;
	}
	iVar1 = func_1759(uParam0);
	func_1760(iVar0, iVar1);
	while (_0xed4413cee1bf142c(&Var2))
	{
		if (!_0x44b3a36933ac009c(&iVar0, &Var2, -2008906477))
		{
		}
		else
		{
			func_1760(iVar0, iVar1);
		}
	}
	return true;
}

int func_1730(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (iParam1 == 0)
	{
		iParam1 = -1;
	}
	if (!bParam2)
	{
		if (is_ped_a_player(iParam0))
		{
			func_1675(14, iParam1, 0, 0, 0);
		}
		else
		{
			func_1675(14, iParam1, 1, iParam0, 0);
		}
		return 1;
	}
	if (!func_1761(0))
	{
	}
	func_1676(&(Global_1952637->f_1675), iParam0, 1, iParam1, 1, bParam3, 1, 1);
	return 1;
}

int func_1731(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1889597427;
		case 1:
			return -1130352927;
		case 2:
			return 389988485;
		case 3:
			return 1780904876;
		case 4:
			return 1367443060;
		case 5:
			return 735520874;
		case 6:
			return -676503695;
		case 7:
			return 383349088;
		case 8:
			return -1292426046;
		case 9:
			return 1422688607;
		case 10:
			return 1108822547;
		case 11:
			return -338487716;
		case 12:
			return 1742327865;
		case 13:
			return 1600962399;
		case 14:
			return 1849504272;
		case 15:
			return 1672288269;
		case 16:
			return 1250092473;
		case 17:
			return -893163968;
		case 18:
			return -450913544;
		case 19:
			return -1364808185;
		case 20:
			return -1197751823;
		case 21:
			return 304805134;
		case 22:
			return -1505978566;
		case 23:
			return 1145151482;
		case 24:
			return -1176744536;
		case 25:
			return 673166414;
		case 26:
			return -207860920;
		case 27:
			return 99217379;
		case 28:
			return -735900586;
		case 29:
			return -426430150;
		case 30:
			return 1788623170;
		case 31:
			return -1130865351;
		case 32:
			return -1884748965;
		case 33:
			return -1586649372;
		case 34:
			return 788010710;
		case 35:
			return 1958421083;
		case 36:
			return -1944638739;
		case 37:
			return 1900541263;
		case 38:
			return -1489346253;
		case 39:
			return -358215195;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

bool func_1732(int iParam0, int iParam1)
{
	return ((Global_1952637->f_83[func_1742(iParam0, 1)])->f_11 && iParam1) != 0;
}

void func_1733(int iParam0, int iParam1)
{
	if (iParam1 & 8 != 0)
	{
		return;
	}
	func_1762(&(Global_1952637->f_2897), iParam0, iParam1);
}

void func_1734(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_1735(int iParam0, int iParam1, int iParam2)
{
	(Global_1952637->f_83[func_1742(iParam0, 1)])->f_11 = ((Global_1952637->f_83[func_1742(iParam0, 1)])->f_11 - ((Global_1952637->f_83[func_1742(iParam0, 1)])->f_11 && iParam1));
}

void func_1736(int iParam0)
{
	Global_1952637 = (Global_1952637 || iParam0);
}

void func_1737(struct<4> Param0)
{
	switch (Param0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
			if (Global_1952637->f_918 >= 25)
			{
				return;
			}
			if (func_1763(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1952637->f_918)
				{
					iVar1 = ((Global_1952637->f_923 + iVar0) % 25);
					if ((&Global_1952637->f_736[iVar1] == Param0 && Global_1952637->f_736[iVar1]->f_1 == Param0.f_1) && Global_1952637->f_736[iVar1]->f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_1764(Param0);
			*Global_1952637->f_736[Global_1952637->f_924] = { Param0 };
			Global_1952637->f_918++;
			Global_1952637->f_924 = (Global_1952637->f_924 + 1 % 25);
			func_1736(8);
			break;
		case 24:
		case 25:
			if (Global_1952637->f_919 >= 25)
			{
				return;
			}
			if (func_1763(Param0))
			{
				return;
			}
			func_1764(Param0);
			*Global_1952637->f_635[Global_1952637->f_919] = { Param0 };
			Global_1952637->f_919++;
			func_1736(8);
			break;
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 36:
		case 37:
		case 38:
			if (Global_1952637->f_920 >= 20)
			{
				return;
			}
			if (func_1763(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1952637->f_920)
				{
					iVar1 = ((Global_1952637->f_921 + iVar0) % 20);
					if ((&Global_1952637->f_837[iVar1] == Param0 && Global_1952637->f_837[iVar1]->f_1 == Param0.f_1) && Global_1952637->f_837[iVar1]->f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_1764(Param0);
			*Global_1952637->f_837[Global_1952637->f_922] = { Param0 };
			Global_1952637->f_920++;
			Global_1952637->f_922 = (Global_1952637->f_922 + 1 % 20);
			func_1736(8);
			break;
			break;
	}
}

void func_1738(int iParam0, var uParam1, int iParam2, int iParam3)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		_set_ped_face_feature(iParam0, &(Global_1952637->f_4[iVar0]), (*uParam1)[iVar0]->f_1);
		iVar0++;
	}
	if (iParam2 != 0)
	{
		_set_ped_body_component(iParam0, iParam2);
	}
	if (iParam3 != 0)
	{
		_set_ped_body_component(iParam0, iParam3);
	}
}

bool func_1739(int iParam0)
{
	return (Global_1952637 && iParam0) != 0;
}

bool func_1740(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 39)
	{
		return false;
	}
	return (Global_1952637->f_83[iParam0]->f_10 && iParam1) != 0;
}

void func_1741(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar0 = 10;
	if (func_1732(1108822547, 6) || bParam3)
	{
		if (bParam2 || bParam3)
		{
			func_1743(iParam0, iVar0, 0);
			func_1744(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		_0xbc6df00d7a4a6819(iParam0, Global_1952637->f_3467.f_1, &(Global_1952637->f_3467.f_3[0]), &(Global_1952637->f_3467.f_3[1]), &(Global_1952637->f_3467.f_3[2]), Global_1952637->f_3467.f_8, Global_1952637->f_3467.f_9, Global_1952637->f_3467.f_10, Global_1952637->f_3467.f_11);
		func_1735(1108822547, 1, 6);
	}
	Global_1952637->f_925++;
	if (!bParam1)
	{
		return;
	}
	_update_ped_variation(iParam0, false, true, true, true, false);
}

int func_1742(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1944638739:
			return 36;
		case -1889597427:
			return 0;
		case -1884748965:
			return 32;
		case -1586649372:
			return 33;
		case -1505978566:
			return 22;
		case -1489346253:
			return 38;
		case -1364808185:
			return 19;
		case -1292426046:
			return 8;
		case -1197751823:
			return 20;
		case -1176744536:
			return 24;
		case -1130865351:
			return 31;
		case -1130352927:
			return 1;
		case -893163968:
			return 17;
		case -735900586:
			return 28;
		case -676503695:
			return 6;
		case -450913544:
			return 18;
		case -426430150:
			return 29;
		case -358215195:
			return 39;
		case -338487716:
			return 11;
		case -207860920:
			return 26;
		case 99217379:
			return 27;
		case 304805134:
			return 21;
		case 383349088:
			return 7;
		case 389988485:
			return 2;
		case 673166414:
			return 25;
		case 735520874:
			return 5;
		case 788010710:
			return 34;
		case 1108822547:
			return 10;
		case 1145151482:
			return 23;
		case 1250092473:
			return 16;
		case 1367443060:
			return 4;
		case 1422688607:
			return 9;
		case 1600962399:
			return 13;
		case 1672288269:
			return 15;
		case 1742327865:
			return 12;
		case 1780904876:
			return 3;
		case 1788623170:
			return 30;
		case 1849504272:
			return 14;
		case 1900541263:
			return 37;
		case 1958421083:
			return 35;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

void func_1743(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		iVar0 = 0;
		while (iVar0 < Global_1952637->f_83[iParam1]->f_1)
		{
			_0xdf631e4bce1b1fc4(iParam0, &(Global_1952637->f_83[iParam1]->f_3[iVar0]), 0, 1);
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_1952637->f_83[iParam1]->f_1)
		{
			_set_ped_component_disabled(iParam0, &(Global_1952637->f_83[iParam1]->f_3[iVar0]), 0);
			iVar0++;
		}
	}
}

void func_1744(int iParam0, int iParam1, int iParam2)
{
	(Global_1952637->f_83[func_1742(iParam0, 1)])->f_11 = ((Global_1952637->f_83[func_1742(iParam0, 1)])->f_11 || iParam1);
}

void func_1745(var uParam0, int iParam1)
{
	_set_ped_component_enabled(iParam1, *uParam0, false, true, false);
	if (uParam0->f_1 != 0)
	{
		_0x66b957aac2eaaeab(iParam1, *uParam0, uParam0->f_1, 0, 1, 1);
	}
}

bool func_1746(var uParam0, int iParam1)
{
	*uParam0 = Global_1257541->f_8863;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = iParam1;
	return (_0x603ac35fd4602c76(*uParam0) && _datafile_get_data_node_index(&(uParam0->f_1), uParam0));
}

int func_1747()
{
	iVar0 = 0;
	vVar1.x = Global_1257541->f_8863;
	vVar1.f_2 = -1041770777;
	if (_datafile_get_data_node_index(&(vVar1.f_1), &vVar1))
	{
		iVar0 = _datafile_get_num_children(vVar1.x, vVar1.y);
	}
	return iVar0;
}

int func_1748(int iParam0)
{
	return func_1765(iParam0) + 30;
}

void func_1749(int iParam0, int iParam1)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { *Global_1900736->f_1[iParam0] };
	*Global_1900736->f_1[iParam0] = { *Global_1900736->f_1[iParam1] };
	*Global_1900736->f_1[iParam1] = { Var0 };
}

char* func_1750(char* sParam0)
{
	return sParam0;
}

int func_1751(int iParam0)
{
	switch (iParam0)
	{
		case 1056359525:
			return 0;
		case 89248012:
			return 1;
		case -100681112:
			return 2;
		case -1087814448:
			return 3;
		case -1265422428:
			return 4;
		case 2053061437:
			return 5;
		case -804198753:
			return 6;
		case 97833510:
			return 7;
		case -74793582:
			return 8;
		case -1585936017:
			return 9;
		case 792472748:
			return 10;
		case 140861179:
			return 11;
		default:
			break;
	}
	return 0;
}

bool func_1752(int iParam0, int iParam1)
{
	return (Global_1107216->f_33[iParam0]->f_3.f_8 && iParam1) != 0;
}

bool func_1753(struct<2> Param0, int iParam2, int iParam3)
{
	if (!func_247(Param0))
	{
		return false;
	}
	if (Param0 != 2)
	{
		return false;
	}
	iVar0 = func_1766(Param0);
	return (iVar0 >= iParam2 && iVar0 <= iParam3);
}

bool func_1754(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 40);
}

int func_1755(int iParam0, int iParam1)
{
	if (iParam1 == 11)
	{
		return 119;
	}
	else if (iParam1 == 27)
	{
		return 133;
	}
	else if (iParam1 == 34)
	{
		return 152;
	}
	else if (iParam1 == 28)
	{
		return 153;
	}
	else if (iParam1 == 29)
	{
		return 154;
	}
	if (iParam1 == 33)
	{
		return 20;
	}
	switch (iParam0)
	{
		case 84:
			switch (iParam1)
			{
				case 0:
					return 155;
				case 6:
					return 157;
				case 23:
					return 158;
				case 22:
					return 156;
				case 16:
					return 67;
				default:
					break;
			}
			break;
		case 40:
			switch (iParam1)
			{
				case 12:
					return 5;
				case 30:
					return 10;
				case 25:
					return 122;
				case 26:
					return 123;
				case 3:
					return 6;
				case 8:
					return 8;
				case 10:
					return 9;
				case 9:
					return 13;
				case 2:
					return 14;
				case 1:
					return 15;
				case 7:
					return 19;
				case 18:
					return 12;
				default:
					break;
			}
			break;
		case 104:
			switch (iParam1)
			{
				case 0:
					return 159;
				case 6:
					return 161;
				case 23:
					return 162;
				case 22:
					return 160;
				case 16:
					return 65;
				default:
					break;
			}
			break;
		case 74:
			switch (iParam1)
			{
				case 4:
					return 22;
				case 33:
					return 21;
				case 3:
					return 23;
				case 2:
					return 24;
				case 1:
					return 25;
				case 38:
					return 140;
				default:
					break;
			}
			break;
		case 76:
			switch (iParam1)
			{
				case 0:
					return 164;
				case 6:
					return 166;
				case 23:
					return 167;
				case 22:
					return 165;
				case 16:
					return 64;
				case 38:
					return 141;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 168;
				case 6:
					return 170;
				case 23:
					return 171;
				case 22:
					return 169;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 14:
					return 26;
				case 39:
					return 151;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 12:
					return 42;
				case 8:
					return 43;
				case 30:
					return 54;
				case 25:
					return 124;
				case 10:
					return 44;
				case 26:
					return 125;
				case 0:
					return 45;
				case 4:
					return 46;
				case 33:
					return 20;
				case 3:
					return 48;
				case 6:
					return 49;
				case 9:
					return 50;
				case 2:
					return 51;
				case 1:
					return 52;
				case 7:
					return 53;
				case 15:
					return 63;
				case 18:
					return 60;
				case 36:
					return 61;
				default:
					break;
			}
			break;
		case 111:
			switch (iParam1)
			{
				case 12:
					return 29;
				case 30:
					return 36;
				case 25:
					return 126;
				case 10:
					return 30;
				case 4:
					return 31;
				case 33:
					return 32;
				case 3:
					return 33;
				case 6:
					return 34;
				case 2:
					return 35;
				case 1:
					return 39;
				default:
					break;
			}
			break;
		case 107:
			switch (iParam1)
			{
				case 9:
					return 41;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 15:
					return 3;
				default:
					break;
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 2:
					return 27;
				case 1:
					return 28;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 172;
				case 22:
					return 173;
				case 6:
					return 174;
				case 23:
					return 175;
				case 16:
					return 66;
				default:
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 25:
					return 127;
				case 30:
					return 75;
				case 10:
					return 68;
				case 3:
					return 69;
				case 17:
					return 70;
				case 9:
					return 71;
				case 2:
					return 74;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 15:
					return 4;
				default:
					break;
			}
			break;
		case 81:
			switch (iParam1)
			{
				case 12:
					return 77;
				case 8:
					return 78;
				case 30:
					return 79;
				case 25:
					return 120;
				case 10:
					return 82;
				case 26:
					return 121;
				case 0:
					return 83;
				case 3:
					return 84;
				case 6:
					return 85;
				case 9:
					return 86;
				case 2:
					return 87;
				case 1:
					return 88;
				case 17:
					return 90;
				case 36:
					return 89;
				case 38:
					return 136;
				default:
					break;
			}
			break;
		case 98:
			switch (iParam1)
			{
				case 26:
					return 128;
				case 4:
					return 93;
				case 33:
					return 92;
				case 2:
					return 98;
				case 1:
					return 97;
				case 9:
					return 96;
				default:
					break;
			}
			break;
		case 83:
			switch (iParam1)
			{
				case 25:
					return 129;
				case 6:
					return 0;
				case 2:
					return 1;
				case 1:
					return 2;
				default:
					break;
			}
			break;
		case 95:
		case 139:
			switch (iParam1)
			{
				case 15:
					return 40;
				default:
					break;
			}
			break;
		case 28:
			switch (iParam1)
			{
				case 2:
					return 101;
				case 1:
					return 100;
				case 3:
					return 99;
				default:
					break;
			}
			break;
		case 121:
			switch (iParam1)
			{
				case 30:
					return 105;
				case 3:
					return 102;
				case 6:
					return 103;
				case 9:
					return 107;
				case 10:
					return 104;
				default:
					break;
			}
			break;
		case 127:
			switch (iParam1)
			{
				case 3:
					return 108;
				case 2:
					return 111;
				case 1:
					return 112;
				case 35:
					return 109;
				default:
					break;
			}
			break;
		case 130:
			switch (iParam1)
			{
				case 4:
					return 116;
				default:
					break;
			}
			break;
		case 123:
			switch (iParam1)
			{
				case 2:
					return 117;
				case 1:
					return 118;
				default:
					break;
			}
			break;
		case 119:
			switch (iParam1)
			{
				case 15:
					return 76;
				default:
					break;
			}
			break;
		case 136:
			switch (iParam1)
			{
				case 4:
					return 130;
				default:
					break;
			}
			break;
		case 96:
			switch (iParam1)
			{
				case 35:
					return 113;
				default:
					break;
			}
			break;
		case 29:
			switch (iParam1)
			{
				case 35:
					return 114;
				default:
					break;
			}
			break;
		case 126:
			switch (iParam1)
			{
				case 38:
					return 135;
				default:
					break;
			}
			break;
		case 133:
			switch (iParam1)
			{
				case 38:
					return 136;
				default:
					break;
			}
			break;
		case 137:
			switch (iParam1)
			{
				case 38:
					return 137;
				default:
					break;
			}
			break;
		case 39:
			switch (iParam1)
			{
				case 38:
					return 138;
				default:
					break;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 38:
					return 139;
				default:
					break;
			}
			break;
		case 61:
			switch (iParam1)
			{
				case 38:
					return 142;
				default:
					break;
			}
			break;
		case 100:
			switch (iParam1)
			{
				case 38:
					return 143;
				default:
					break;
			}
			break;
		case 34:
			switch (iParam1)
			{
				case 38:
					return 144;
				default:
					break;
			}
			break;
		case 43:
			switch (iParam1)
			{
				case 38:
					return 145;
				default:
					break;
			}
			break;
		case 85:
			switch (iParam1)
			{
				case 38:
					return 146;
				default:
					break;
			}
			break;
		case 138:
			switch (iParam1)
			{
				case 39:
					return 149;
				default:
					break;
			}
			break;
		case 25:
			switch (iParam1)
			{
				case 39:
					return 150;
				default:
					break;
			}
			break;
		case 134:
			switch (iParam1)
			{
				case 15:
					return 148;
				default:
					break;
			}
			break;
	}
	if (iParam1 == 38)
	{
		return 147;
	}
	if (iParam1 == 33)
	{
		return 20;
	}
	if (iParam1 == 37)
	{
		return 134;
	}
	return -1;
}

bool func_1756(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_1757()
{
	return Global_1102219->f_3672;
}

bool func_1758(int iParam0, int iParam1)
{
	return func_270(Global_1196898->f_78[iParam0]->f_6, iParam1);
}

int func_1759(var uParam0)
{
	Global_1952637->f_2843.f_43[Global_1952637->f_2843.f_1] = uParam0;
	iVar0 = Global_1952637->f_2843.f_2 ^ -1;
	iVar0 = (iVar0 && -iVar0);
	Global_1952637->f_2843.f_2 = (Global_1952637->f_2843.f_2 || iVar0);
	Global_1952637->f_2843.f_43[Global_1952637->f_2843.f_1]->f_1 = iVar0;
	Global_1952637->f_2843.f_1++;
	return iVar0;
}

void func_1760(int iParam0, int iParam1)
{
	if (!func_1767(iParam0, &iVar0))
	{
		return;
	}
	if (iVar0 == 20 && func_1494(&(Global_1952637->f_1675.f_1[iVar0]), 343781202))
	{
		iVar1 = func_1768(&(Global_1952637->f_1675.f_1[iVar0]), 1108822547);
		if (1388798186 == func_1666(iVar1))
		{
			func_1769(10, iParam1);
		}
	}
	func_1769(iVar0, iParam1);
}

bool func_1761(bool bParam0)
{
	if (Global_1952637->f_2843.f_1 <= 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar2 = func_1731(iVar0, 1);
		if (func_1732(iVar2, 2))
		{
		}
		else if (&Global_1952637->f_2843.f_3[iVar0] == 0)
		{
		}
		else
		{
			if (bParam0 && func_1770(iVar0) == -1)
			{
				func_1733(iVar0, 0);
				func_1734(Global_1952637->f_2897.f_2[(Global_1952637->f_2897 - 1)], 2, 6);
			}
			func_1744(iVar2, 2, 6);
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 > 0)
	{
		return true;
	}
	return false;
}

void func_1762(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 16)
	{
		return;
	}
	if (!func_1771(uParam0, 1))
	{
		func_1772(uParam0, 1);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (&uParam0->f_2[iVar0] == iParam1)
		{
			uParam0->f_2[iVar0]->f_1 = iParam2;
			return;
		}
		if (Global_1952637->f_83[&uParam0->f_2[iVar0]]->f_2 > Global_1952637->f_83[iParam1]->f_2)
		{
			iVar1 = *uParam0;
			while (iVar1 >= iVar0 + 1)
			{
				*uParam0->f_2[iVar1] = { *(uParam0->f_2[(iVar1 - 1)]) };
				iVar1 = (iVar1 + -1);
			}
			uParam0->f_2[iVar0] = iParam1;
			uParam0->f_2[iVar0]->f_1 = iParam2;
			*uParam0++;
			return;
		}
		iVar0++;
	}
	uParam0->f_2[*uParam0]->f_1 = iParam2;
	uParam0->f_2[*uParam0] = iParam1;
	*uParam0++;
}

bool func_1763(int iParam0)
{
	return &Global_1952637->f_595[iParam0] > 0;
}

void func_1764(int iParam0)
{
	Global_1952637->f_595[iParam0] = &Global_1952637->f_595[iParam0] + 1;
}

int func_1765(int iParam0)
{
	return iParam0 * 31;
}

int func_1766(struct<2> Param0)
{
	if (Param0 == 2)
	{
		return func_1618(Param0);
	}
	return -1;
}

bool func_1767(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1912930450:
			iVar0 = 1742327865;
			if (func_1666(func_1773(iVar0)) != 81053684 && !func_1494(func_1773(iVar0), 160827531))
			{
				return false;
			}
			break;
		case -1745589872:
			iVar0 = 1742327865;
			if (!func_1494(func_1773(iVar0), -1303648999))
			{
				return false;
			}
			break;
		case -1549909015:
			iVar0 = 1108822547;
			iVar1 = func_1666(func_1773(iVar0));
			if (iVar1 != -525676072 && iVar1 != -2061583405)
			{
				return false;
			}
			break;
		case 357406204:
			iVar0 = -1197751823;
			iVar1 = func_1666(func_1773(iVar0));
			if (iVar1 != 294388917)
			{
				return false;
			}
			break;
		case -464635753:
			iVar0 = -450913544;
			iVar1 = func_1666(func_1773(iVar0));
			if (iVar1 != 698653232)
			{
				return false;
			}
			break;
		case 1742327865:
			iVar0 = 1742327865;
			if (func_1494(func_1773(iVar0), -1303648999))
			{
				return false;
			}
			break;
		default:
			iVar0 = iParam0;
			break;
	}
	*iParam1 = func_1742(iVar0, 1);
	return true;
}

int func_1768(var uParam0, int iParam1)
{
	iVar0 = func_1774(0);
	func_1775(&(Global_1952637->f_1043), iVar0, uParam0, 1409451727, 1, iParam1);
	_0x91ded5dd64bb2691(&(Global_1952637->f_1043));
	if (!_0xed4413cee1bf142c(&(Global_1952637->f_1043)))
	{
		return 0;
	}
	if (!_0x44b3a36933ac009c(&uVar1, &(Global_1952637->f_1043), 1373051002))
	{
		return 0;
	}
	return uVar1;
}

void func_1769(int iParam0, int iParam1)
{
	Global_1952637->f_2843.f_3[iParam0] = (Global_1952637->f_2843.f_3[iParam0] || iParam1);
}

int func_1770(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_1952637->f_2897)
	{
		if (&Global_1952637->f_2897.f_2[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1771(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1772(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

int func_1773(int iParam0)
{
	return &(Global_1952637->f_1675.f_1[func_1742(iParam0, 1)]);
}

int func_1774(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_1776();
	}
	if (iParam0 == 2026485318)
	{
		return -1806335803;
	}
	else if (iParam0 == 24043185)
	{
		return -971050805;
	}
	return 0;
}

void func_1775(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5)
{
	*uParam0 = iParam1;
	uParam0->f_1 = uParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
}

int func_1776()
{
	return Global_1952637->f_1;
}

