void __EntryFunction__()
{
	fLocal_14 = 1f;
	fLocal_15 = 1f;
	func_1();
	while (!func_2())
	{
		func_3();
		wait(0);
	}
	func_4(Global_1210882, 4);
	func_4(Global_1210882, 8);
	func_4(Global_1210882, 16);
	func_5(0);
	if (func_6() == 0)
	{
	}
	else
	{
		func_7(0);
	}
	if (func_8() == 0)
	{
	}
	else
	{
		func_9(0);
	}
}

void func_1()
{
	func_10(32, -1);
	func_11();
	if (func_12())
	{
		func_13();
	}
	func_14();
	func_15(0);
	set_this_script_can_be_paused(false);
	register_script_with_audio(1);
	func_16(Global_1210882, 1);
}

bool func_2()
{
	if (func_17(0, 0))
	{
		return true;
	}
	if (&Global_1048577)
	{
		return true;
	}
	return false;
}

void func_3()
{
	if (func_18() != 0)
	{
		return;
	}
	if (!network_is_game_in_progress())
	{
		return;
	}
	if (!_unlock_is_unlocked(956799153))
	{
		return;
	}
	func_19();
	if (!network_is_host_of_this_script())
	{
		if (func_8() != 0)
		{
			func_9(0);
		}
		return;
	}
	switch (func_20())
	{
		case -1:
		default:
			break;
			func_21();
			break;
		case 0:
			func_22();
			break;
		case 1:
			func_23();
			break;
		case 2:
			func_24();
			break;
		case 3:
			func_25();
			break;
	}
}

void func_4(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_5(int iParam0)
{
	if (!network_is_game_in_progress())
	{
		return;
	}
	if (!network_is_host_of_this_script())
	{
		return;
	}
	Global_1211095 = iParam0;
}

int func_6()
{
	return Global_1210882->f_211;
}

void func_7(int iParam0)
{
	Global_1210882->f_211 = iParam0;
}

int func_8()
{
	return Global_1210882->f_1;
}

void func_9(int iParam0)
{
	Global_1210882->f_1 = iParam0;
}

void func_10(int iParam0, int iParam1)
{
	if (!network_is_game_in_progress())
	{
		func_13();
	}
	network_set_this_script_is_network_script(iParam0, false, iParam1);
}

int func_11()
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
			func_13();
		}
		if (_0x9e4ef615e307fbbe())
		{
			switch (_0x54ae4fdeefeab77e())
			{
				case 0:
					break;
				case 1:
					func_13();
					break;
				case 2:
					func_13();
					break;
				case 4:
					func_13();
					break;
				case 3:
					func_13();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_13();
		}
		if (!network_is_game_in_progress())
		{
			func_13();
		}
		if (!network_is_signed_online())
		{
			func_13();
		}
		if (func_18() == 0)
		{
			if (func_26())
			{
				func_13();
			}
		}
		wait(0);
		iVar0 = network_get_script_status();
	}
	if (!network_is_game_in_progress())
	{
		func_13();
	}
	return 1;
}

bool func_12()
{
	if (Global_1572887->f_9)
	{
		return false;
	}
	if (!network_is_game_in_progress())
	{
		return true;
	}
	if (!network_is_signed_online())
	{
		return true;
	}
	return false;
}

void func_13()
{
	terminate_this_thread();
}

void func_14()
{
	func_27(Global_1211095);
	network_register_host_broadcast_variables(Global_1211095, 86, 39);
	func_28(_0xba24095ea96dfe17(Global_1211095), 86, "g_mpDMAmbientManagerHostData");
}

void func_15(bool bParam0)
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
					func_13();
					break;
				case 2:
					func_13();
					break;
				case 4:
					func_13();
					break;
				case 3:
					func_13();
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
			func_13();
			return;
		}
		wait(0);
	}
}

void func_16(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_17(bool bParam0, bool bParam1)
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

int func_18()
{
	return Global_1572887->f_13;
}

void func_19()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < get_number_of_events(1))
	{
		iVar1 = get_event_at_index(1, iVar0);
		if (iVar1 != -507840394)
		{
		}
		else
		{
			get_event_data(1, iVar0, &iVar2, 4);
			if (iVar2 != 184)
			{
			}
			else
			{
				func_29(iVar0);
			}
		}
		iVar0++;
	}
}

int func_20()
{
	return &Global_1211095;
}

void func_21()
{
}

void func_22()
{
	if (func_30(&Global_1210882, 1))
	{
		func_5(1);
	}
}

void func_23()
{
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_1211095->f_5[iVar0]->f_1 == 1)
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 != Global_1211095->f_3)
	{
		Global_1211095->f_3 = iVar1;
	}
	if (Global_1210882->f_1 == 5)
	{
		Global_1211095->f_1++;
		func_9(0);
	}
	if (Global_1211095->f_1 >= 3)
	{
		func_5(2);
		return;
	}
	if (iVar1 >= 3)
	{
		func_5(2);
		return;
	}
	func_31(Global_1211095->f_1);
}

void func_24()
{
	if (func_30(&Global_1210882, 2))
	{
		func_5(3);
		return;
	}
	if (Global_1211095->f_2 < 0)
	{
		Global_1211095->f_2 = 0;
		return;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_1211095->f_5[iVar0]->f_1 == 1)
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 != Global_1211095->f_3)
	{
		Global_1211095->f_3 = iVar1;
	}
	func_32();
	if (Global_1211095->f_1 == -1)
	{
		if (!func_33())
		{
			return;
		}
	}
	if (Global_1211095->f_2 > 0)
	{
		if (func_31(Global_1211095->f_1))
		{
			func_9(0);
			Global_1211095->f_1++;
			Global_1211095->f_2 = (Global_1211095->f_2 - 1);
			if (Global_1211095->f_1 >= 16)
			{
				Global_1211095->f_1 = -1;
			}
		}
	}
	else if (iVar1 < 3)
	{
		Global_1211095->f_2++;
	}
}

void func_25()
{
	Global_1210882 = 0;
	func_34();
	func_27(Global_1211095);
	func_5(0);
}

bool func_26()
{
	return Global_1051252->f_8;
}

void func_27(var uParam0)
{
	if (!network_is_host_of_this_script())
	{
		return;
	}
	Var0 = -1;
	iVar5 = 0;
	iVar5 = 0;
	while (iVar5 < 16)
	{
		*uParam0->f_5[iVar5] = { Var0 };
		iVar5++;
	}
	uParam0->f_2 = 0;
	uParam0->f_1 = 0;
	uParam0->f_4 = 0;
}

int func_28(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_29(int iParam0)
{
	Var0.f_5 = -1;
	if (!get_event_data(1, iParam0, &Var0, 12))
	{
		return;
	}
	switch (Var0.f_4)
	{
		case 5:
			if (!is_thread_active(&Global_1210161, false))
			{
			}
			else
			{
				iVar12 = _0xb4a25351d79b444c(&Global_1210161);
				if (player_id() != iVar12)
				{
				}
				else
				{
					if (_0xd6f6acf4392187fb(Var0.f_10))
					{
						if (Var0.f_5 != -1)
						{
							func_35(Var0.f_5, Var0.f_10);
						}
					}
					Jump @886; //curOff = 185
					if (!is_thread_active(&Global_1210161, false))
					{
					}
					else
					{
						iVar12 = _0xb4a25351d79b444c(&Global_1210161);
						if (player_id() != iVar12)
						{
						}
						else
						{
							if (Var0.f_5 != -1)
							{
								if (func_36(Var0.f_5))
								{
									Var14.f_5 = -1;
									Var14.f_4 = 4;
									Var14.f_5 = { Var0.f_5 };
									func_38(&Var14, func_37(0, 8));
								}
							}
							Jump @886; //curOff = 286
							if (!network_is_host_of_this_script())
							{
								return;
							}
							func_39(Var0);
							Jump @886; //curOff = 309
							switch (Global_1210882->f_211)
							{
								case 0:
									return;
								case 2:
									return;
								case 3:
									return;
								case 1:
									Global_1210882->f_206 = { Var0.f_5 };
									func_7(2);
									return;
								default:
									break;
							}
							Jump @886; //curOff = 379
							switch (Global_1210882->f_211)
							{
								case 0:
									return;
								case 2:
									return;
								case 3:
									return;
								case 1:
									func_7(3);
									return;
								default:
									break;
							}
							Jump @886; //curOff = 435
							if (!network_is_host_of_this_script())
							{
								return;
							}
							if (Var0.f_5 == -1)
							{
								return;
							}
							iVar13 = 0;
							while (iVar13 < 16)
							{
								if (&Global_1211095->f_5[iVar13] != Var0.f_5)
								{
								}
								else
								{
									func_40(iVar13);
								}
								else
								{
									iVar13++;
								}
							}
							Jump @886; //curOff = 508
							if (!network_is_host_of_this_script())
							{
								return;
							}
							if (Var0.f_5 == -1)
							{
								return;
							}
							Var26.f_5 = -1;
							iVar13 = 0;
							while (iVar13 < 16)
							{
								if (&Global_1211095->f_5[iVar13] != Var0.f_5)
								{
								}
								else
								{
									Var26.f_4 = 8;
									Var26.f_5 = { *Global_1211095->f_5[iVar13] };
									func_38(&Var26, func_37(0, 8));
									func_41(iVar13);
								}
								else
								{
									iVar13++;
								}
							}
							Jump @886; //curOff = 629
							if (!network_is_host_of_this_script())
							{
								return;
							}
							if (Var0.f_5 == -1)
							{
								return;
							}
							iVar13 = 0;
							while (iVar13 < 16)
							{
								if (&Global_1211095->f_5[iVar13] != Var0.f_5)
								{
								}
								else
								{
									func_42(iVar13, Var0.f_11);
								}
								else
								{
									iVar13++;
								}
							}
							Jump @886; //curOff = 706
							if (Var0.f_5 == Global_1210882->f_206)
							{
								Var38 = -1;
								Global_1210882->f_206 = { Var38 };
								func_7(0);
							}
							Jump @886; //curOff = 746
							if (!network_is_host_of_this_script())
							{
								return;
							}
							if (Var0.f_5 == -1)
							{
								return;
							}
							iVar13 = 0;
							while (iVar13 < 16)
							{
								if (&Global_1211095->f_5[iVar13] != Var0.f_5)
								{
								}
								else
								{
									func_43(iVar13);
								}
								else
								{
									iVar13++;
								}
							}
							Jump @886; //curOff = 819
							if (!network_is_host_of_this_script())
							{
								return;
							}
							if (func_30(&Global_1210882, 1))
							{
								return;
							}
							else
							{
								func_16(Global_1210882, 1);
							}
							Jump @886; //curOff = 860
							if (!network_is_host_of_this_script())
							{
								return;
							}
							func_16(Global_1210882, 2);
						}
					}
				}
			}
			default:
				break;
	}
}

bool func_30(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_31(int iParam0)
{
	if (!network_is_host_of_this_script())
	{
		return false;
	}
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = 255;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_8 = 2;
	Var0.f_8.f_1 = -1;
	Var0.f_8.f_5 = -1;
	Var0.f_8.f_5.f_1 = -1;
	Var0.f_8.f_5.f_3 = -1;
	Var0.f_8.f_5.f_4 = -1;
	Var0.f_8.f_5.f_5 = -1;
	Var0.f_8.f_5.f_6 = -1;
	Var0.f_8.f_5.f_6.f_1 = -1;
	Var0.f_8.f_5.f_9 = 2;
	Var0.f_23.f_1 = 1024;
	Var0.f_23.f_4 = -15;
	Var0.f_23.f_5 = 255;
	Var0.f_23.f_8 = 1;
	Var0.f_23.f_8.f_1.f_1 = 2147483647;
	Var0.f_23.f_13 = -1;
	switch (func_8())
	{
		case 0:
			func_9(1);
			break;
		case 1:
			func_9(2);
			break;
		case 2:
			func_44(&Var0, iParam0);
			func_45(&Var0);
			if (func_46((*Global_1201051)[&Global_1296859], &Var0, 0, 0, 0, 0, 0))
			{
				func_9(3);
			}
			else
			{
				iVar40 = func_47((*Global_1201051)[&Global_1296859], &Var0);
				if (iVar40 >= 0)
				{
					func_48((*Global_1201051)[&Global_1296859], iVar40);
				}
				func_9(4);
			}
			break;
		case 3:
			func_44(&Var0, iParam0);
			if (func_47((*Global_1201051)[&Global_1296859], &Var0) != -1)
			{
			}
			else
			{
				Var41 = -1;
				Var41 = func_49(&(Var0.f_8.f_5));
				if (Var41 == -1)
				{
					func_9(4);
				}
				else
				{
					Var41.f_1 = 1;
					*Global_1211095->f_5[iParam0] = { Var41 };
					func_9(5);
					Jump @647; //curOff = 553
					if (Global_1211095->f_4 <= 0)
					{
						Global_1211095->f_4 = absi(get_cloud_time_as_int());
					}
					else if (absi((get_cloud_time_as_int() - Global_1211095->f_4)) < 30)
					{
					}
					else
					{
						Global_1211095->f_4 = 0;
						func_9(1);
						Jump @647; //curOff = 618
						if (&Global_1211095->f_5[iParam0] == -1)
						{
							func_9(0);
						}
						else
						{
							return true;
						}
					}
				}
			}
			return false;
			default:
				break;
	}
}

void func_32()
{
	iVar0 = 0;
	bVar1 = false;
	Var2 = 2;
	Var2.f_1 = -1;
	Var2.f_5 = -1;
	Var2.f_5.f_1 = -1;
	Var2.f_5.f_3 = -1;
	Var2.f_5.f_4 = -1;
	Var2.f_5.f_5 = -1;
	Var2.f_5.f_6 = -1;
	Var2.f_5.f_6.f_1 = -1;
	Var2.f_5.f_9 = 2;
	Var17.f_5 = -1;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_1211095->f_5[iVar0]->f_1 != 2)
		{
		}
		else
		{
			if (!func_50(&(Global_1211095->f_5[iVar0])))
			{
				func_41(iVar0);
				return;
			}
			Var2 = { func_51(&(Global_1211095->f_5[iVar0])) };
			if (Var2.f_5.f_2 == Global_1296859->f_15)
			{
			}
			else
			{
				if (!_0xd6f6acf4392187fb(Var2.f_5.f_2))
				{
					bVar1 = true;
				}
				if (!_0x93a91a351a07360e(Var2.f_5.f_2))
				{
					bVar1 = true;
				}
				if (!_0x0f99f6436528a089(Var2.f_5.f_2))
				{
					bVar1 = true;
				}
				if ((_0x4be6c13a45cca8ec(Var2.f_5.f_2) <= -1 || _0x4be6c13a45cca8ec(Var2.f_5.f_2) == 255) || !network_is_player_active(_0x4be6c13a45cca8ec(Var2.f_5.f_2)))
				{
					bVar1 = true;
				}
				if (bVar1)
				{
					_0xde544b7ec0c187cc(&uVar29);
					if (is_thread_active(&Global_1210161, false))
					{
						iVar30 = _0xb4a25351d79b444c(&Global_1210161);
						if (network_is_player_active(iVar30))
						{
							_0x31010318ba9897ac(&uVar29, iVar30);
						}
					}
					if (!_0x179a6f0ee2e79026(&uVar29))
					{
					}
					else if (absi((&Global_1211181->f_8[iVar0] - get_cloud_time_as_int())) < 2)
					{
					}
					else
					{
						Global_1211181->f_8[iVar0] = get_cloud_time_as_int();
						Var17.f_4 = 5;
						Var17.f_5 = { *Global_1211095->f_5[iVar0] };
						Var17.f_10 = Global_1296859->f_15;
						func_38(&Var17, uVar29);
						return;
					}
				}
			}
		}
		iVar0++;
	}
	func_52();
}

bool func_33()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_1211095->f_5[iVar0]->f_1 != 1)
		{
		}
		else
		{
			Global_1211095->f_1 = iVar0;
			return true;
		}
		iVar0++;
	}
	Global_1211095->f_1 = -1;
	return false;
}

void func_34()
{
	Var0.f_2.f_2 = 5;
	Var0.f_2.f_3 = 5;
	Var0.f_2.f_3.f_1 = -1;
	Var0.f_2.f_3.f_1.f_1 = -1;
	Var0.f_2.f_3.f_1.f_2 = -1;
	Var0.f_2.f_3.f_1.f_3 = 255;
	Var0.f_2.f_3.f_1.f_4 = -1;
	Var0.f_2.f_3.f_1.f_5 = -1;
	Var0.f_2.f_3.f_1.f_6 = -1;
	Var0.f_2.f_3.f_1.f_8 = 2;
	Var0.f_2.f_3.f_1.f_8.f_1 = -1;
	Var0.f_2.f_3.f_1.f_8.f_5 = -1;
	Var0.f_2.f_3.f_1.f_8.f_5.f_1 = -1;
	Var0.f_2.f_3.f_1.f_8.f_5.f_3 = -1;
	Var0.f_2.f_3.f_1.f_8.f_5.f_4 = -1;
	Var0.f_2.f_3.f_1.f_8.f_5.f_5 = -1;
	Var0.f_2.f_3.f_1.f_8.f_5.f_6 = -1;
	Var0.f_2.f_3.f_1.f_8.f_5.f_6.f_1 = -1;
	Var0.f_2.f_3.f_1.f_8.f_5.f_9 = 2;
	Var0.f_2.f_3.f_1.f_23.f_1 = 1024;
	Var0.f_2.f_3.f_1.f_23.f_4 = -15;
	Var0.f_2.f_3.f_1.f_23.f_5 = 255;
	Var0.f_2.f_3.f_1.f_23.f_8 = 1;
	Var0.f_2.f_3.f_1.f_23.f_8.f_1.f_1 = 2147483647;
	Var0.f_2.f_3.f_1.f_23.f_13 = -1;
	Var0.f_2.f_3.f_1.f_40 = -1;
	Var0.f_2.f_3.f_1.f_40.f_1 = -1;
	Var0.f_2.f_3.f_1.f_40.f_2 = -1;
	Var0.f_2.f_3.f_1.f_40.f_3 = 255;
	Var0.f_2.f_3.f_1.f_40.f_4 = -1;
	Var0.f_2.f_3.f_1.f_40.f_5 = -1;
	Var0.f_2.f_3.f_1.f_40.f_6 = -1;
	Var0.f_2.f_3.f_1.f_40.f_8 = 2;
	Var0.f_2.f_3.f_1.f_40.f_8.f_1 = -1;
	Var0.f_2.f_3.f_1.f_40.f_8.f_5 = -1;
	Var0.f_2.f_3.f_1.f_40.f_8.f_5.f_1 = -1;
	Var0.f_2.f_3.f_1.f_40.f_8.f_5.f_3 = -1;
	Var0.f_2.f_3.f_1.f_40.f_8.f_5.f_4 = -1;
	Var0.f_2.f_3.f_1.f_40.f_8.f_5.f_5 = -1;
	Var0.f_2.f_3.f_1.f_40.f_8.f_5.f_6 = -1;
	Var0.f_2.f_3.f_1.f_40.f_8.f_5.f_6.f_1 = -1;
	Var0.f_2.f_3.f_1.f_40.f_8.f_5.f_9 = 2;
	Var0.f_2.f_3.f_1.f_40.f_23.f_1 = 1024;
	Var0.f_2.f_3.f_1.f_40.f_23.f_4 = -15;
	Var0.f_2.f_3.f_1.f_40.f_23.f_5 = 255;
	Var0.f_2.f_3.f_1.f_40.f_23.f_8 = 1;
	Var0.f_2.f_3.f_1.f_40.f_23.f_8.f_1.f_1 = 2147483647;
	Var0.f_2.f_3.f_1.f_40.f_23.f_13 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_1 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_2 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_3 = 255;
	Var0.f_2.f_3.f_1.f_40.f_40.f_4 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_5 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_6 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_8 = 2;
	Var0.f_2.f_3.f_1.f_40.f_40.f_8.f_1 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_8.f_5 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_8.f_5.f_1 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_8.f_5.f_3 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_8.f_5.f_4 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_8.f_5.f_5 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_8.f_5.f_6 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_8.f_5.f_6.f_1 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_8.f_5.f_9 = 2;
	Var0.f_2.f_3.f_1.f_40.f_40.f_23.f_1 = 1024;
	Var0.f_2.f_3.f_1.f_40.f_40.f_23.f_4 = -15;
	Var0.f_2.f_3.f_1.f_40.f_40.f_23.f_5 = 255;
	Var0.f_2.f_3.f_1.f_40.f_40.f_23.f_8 = 1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_23.f_8.f_1.f_1 = 2147483647;
	Var0.f_2.f_3.f_1.f_40.f_40.f_23.f_13 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_1 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_2 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_3 = 255;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_4 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_5 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_6 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_8 = 2;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_8.f_1 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_8.f_5 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_1 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_3 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_4 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_5 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_6 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_6.f_1 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_9 = 2;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_23.f_1 = 1024;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_23.f_4 = -15;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_23.f_5 = 255;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_23.f_8 = 1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_23.f_8.f_1.f_1 = 2147483647;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_23.f_13 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_1 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_2 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_3 = 255;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_4 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_5 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_6 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_8 = 2;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_1 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_1 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_3 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_4 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_5 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_6 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_6.f_1 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_9 = 2;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_1 = 1024;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_4 = -15;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_5 = 255;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_8 = 1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_8.f_1.f_1 = 2147483647;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_13 = -1;
	Var0.f_206 = -1;
	*Global_1210882 = { Var0 };
}

void func_35(int iParam0, var uParam1)
{
	Global_1198046->f_231[iParam0]->f_5.f_2 = uParam1;
}

bool func_36(int iParam0)
{
	if (!func_50(iParam0))
	{
		return false;
	}
	Var0 = 2;
	Var0.f_1 = -1;
	Var0.f_5 = -1;
	Var0.f_5.f_1 = -1;
	Var0.f_5.f_3 = -1;
	Var0.f_5.f_4 = -1;
	Var0.f_5.f_5 = -1;
	Var0.f_5.f_6 = -1;
	Var0.f_5.f_6.f_1 = -1;
	Var0.f_5.f_9 = 2;
	Var15 = { *Global_1198046->f_231[iParam0] };
	Var0.f_1 = 0;
	*Global_1198046->f_231[iParam0] = { Var0 };
	iVar30 = Var15;
	iVar31 = Var15.f_5.f_9;
	Global_1198046->f_13[iVar31] = (&Global_1198046->f_13[iVar31] - 1);
	Global_1198046->f_8[iVar30] = (&Global_1198046->f_8[iVar30] - 1);
	if (iVar30 != iVar31)
	{
		Global_1198046->f_18[iVar30] = (&Global_1198046->f_18[iVar30] - 1);
	}
	if (func_53(iParam0))
	{
		Global_1198046->f_23[iVar30] = (&Global_1198046->f_23[iVar30] - 1);
	}
	return true;
}

var func_37(int iParam0, int iParam1)
{
	return func_54(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

void func_38(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	*uParam0 = 184;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	trigger_script_event(1, uParam0, 12, 25, &uParam1);
}

void func_39(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11)
{
	if (!network_is_host_of_this_script())
	{
		return;
	}
	Var0.f_5 = -1;
	if (Global_1211095->f_3 <= 0)
	{
		Var0.f_4 = 2;
		func_38(&Var0, func_55(Param0.f_1));
		return;
	}
	iVar12 = 0;
	bVar13 = false;
	iVar12 = 0;
	while (iVar12 < 16)
	{
		if (Global_1211095->f_5[iVar12]->f_1 != 1)
		{
		}
		else
		{
			Var0.f_5 = { *Global_1211095->f_5[iVar12] };
			bVar13 = true;
		}
		else
		{
			iVar12++;
		}
	}
	if (!bVar13)
	{
		Var0.f_4 = 2;
		func_38(&Var0, func_55(Param0.f_1));
		return;
	}
	Global_1211095->f_5[iVar12]->f_1 = 2;
	Global_1211095->f_5[iVar12]->f_4 = get_cloud_time_as_int();
	Var0.f_4 = 1;
	_0x31010318ba9897ac(&uVar14, Param0.f_1);
	func_38(&Var0, uVar14);
	_0xde544b7ec0c187cc(&uVar14);
	iVar15 = _0x901e0dc25080c8b9(Param0.f_1);
	if (_0xd6f6acf4392187fb(iVar15) && _0x0f99f6436528a089(iVar15))
	{
		Var0.f_10 = iVar15;
	}
	if (is_thread_active(&Global_1210161, false))
	{
		iVar16 = _0xb4a25351d79b444c(&Global_1210161);
		if (network_is_player_active(iVar16))
		{
			_0x31010318ba9897ac(&uVar14, iVar16);
		}
	}
	Var0.f_4 = 5;
	func_38(&Var0, uVar14);
}

void func_40(int iParam0)
{
	if (!network_is_host_of_this_script())
	{
		return;
	}
	if (iParam0 <= -1 || iParam0 >= 16)
	{
		return;
	}
	Global_1211095->f_5[iParam0]->f_2 = 0;
	Global_1211095->f_5[iParam0]->f_1 = 1;
}

void func_41(int iParam0)
{
	if (!network_is_host_of_this_script())
	{
		return;
	}
	if (iParam0 <= -1 || iParam0 >= 16)
	{
		return;
	}
	Global_1211095->f_5[iParam0]->f_2 = 0;
	Global_1211095->f_5[iParam0]->f_1 = 0;
	Global_1211095->f_5[iParam0] = -1;
}

void func_42(int iParam0, bool bParam1)
{
	if (iParam0 <= -1 || iParam0 >= 16)
	{
		return;
	}
	Global_1211095->f_5[iParam0]->f_2 = bParam1;
	if (!bParam1)
	{
		Global_1211095->f_5[iParam0]->f_4 = get_cloud_time_as_int();
	}
}

void func_43(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 16)
	{
		return;
	}
	if (Global_1211095->f_5[iParam0]->f_2)
	{
		return;
	}
	Global_1211095->f_5[iParam0]->f_4 = get_cloud_time_as_int();
}

struct<40> func_44(var uParam0, var uParam1)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = 255;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_8 = 2;
	Var0.f_8.f_1 = -1;
	Var0.f_8.f_5 = -1;
	Var0.f_8.f_5.f_1 = -1;
	Var0.f_8.f_5.f_3 = -1;
	Var0.f_8.f_5.f_4 = -1;
	Var0.f_8.f_5.f_5 = -1;
	Var0.f_8.f_5.f_6 = -1;
	Var0.f_8.f_5.f_6.f_1 = -1;
	Var0.f_8.f_5.f_9 = 2;
	Var0.f_23.f_1 = 1024;
	Var0.f_23.f_4 = -15;
	Var0.f_23.f_5 = 255;
	Var0.f_23.f_8 = 1;
	Var0.f_23.f_8.f_1.f_1 = 2147483647;
	Var0.f_23.f_13 = -1;
	*uParam0 = { Var0 };
	*uParam0 = 1;
	uParam0->f_2 = 6;
	uParam0->f_5 = 0;
	uParam0->f_7 = get_network_time_accurate();
	uParam0->f_8 = 3;
	uParam0->f_8.f_1 = 2;
	uParam0->f_8.f_5.f_2 = Global_1296859->f_15;
	uParam0->f_8.f_5.f_5 = uParam1;
	uParam0->f_8.f_5.f_9 = 3;
	return *uParam0;
}

void func_45(var uParam0)
{
	Var0.f_5 = -1;
	Var0.f_5.f_1 = -1;
	Var0.f_5.f_2 = -1;
	Var0.f_5.f_3 = 255;
	Var0.f_5.f_4 = -1;
	Var0.f_5.f_5 = -1;
	Var0.f_5.f_6 = -1;
	Var0.f_5.f_8 = 2;
	Var0.f_5.f_8.f_1 = -1;
	Var0.f_5.f_8.f_5 = -1;
	Var0.f_5.f_8.f_5.f_1 = -1;
	Var0.f_5.f_8.f_5.f_3 = -1;
	Var0.f_5.f_8.f_5.f_4 = -1;
	Var0.f_5.f_8.f_5.f_5 = -1;
	Var0.f_5.f_8.f_5.f_6 = -1;
	Var0.f_5.f_8.f_5.f_6.f_1 = -1;
	Var0.f_5.f_8.f_5.f_9 = 2;
	Var0.f_5.f_23.f_1 = 1024;
	Var0.f_5.f_23.f_4 = -15;
	Var0.f_5.f_23.f_5 = 255;
	Var0.f_5.f_23.f_8 = 1;
	Var0.f_5.f_23.f_8.f_1.f_1 = 2147483647;
	Var0.f_5.f_23.f_13 = -1;
	Var0.f_5 = { *uParam0 };
	Var0.f_4 = 0;
	func_56(&Var0, func_37(0, 8));
}

bool func_46(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (func_57(uParam0))
	{
		return false;
	}
	if (!func_58(&(uParam1->f_8)))
	{
		return false;
	}
	if (uParam1->f_2 == -1)
	{
		return false;
	}
	if (uParam1->f_2 == 5)
	{
		uParam1->f_3 = player_id();
	}
	if (uParam1->f_5 == -1)
	{
		return false;
	}
	if (uParam1->f_8 != uParam1->f_8.f_5.f_9)
	{
		return false;
	}
	iVar0 = func_47(uParam0, uParam1);
	if (iVar0 >= 0)
	{
		return false;
	}
	switch (uParam1->f_5)
	{
		case 0:
		case 1:
		case 3:
		default:
			break;
			if (!func_59(uParam1, bParam2, iParam3, iParam4, iParam5, iParam6))
			{
				return false;
			}
			break;
	}
	uParam1->f_7 = get_network_time_accurate();
	iVar1 = ((uParam0->f_1 + *uParam0) % uParam0->f_2);
	uParam1->f_4 = iVar1;
	*uParam0->f_3[iVar1] = { *uParam1 };
	func_60(uParam0->f_3[iVar1], 0);
	*uParam0++;
	return true;
}

int func_47(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		iVar1 = ((uParam0->f_1 + iVar0) % uParam0->f_2);
		if (func_61(uParam1, uParam0->f_3[iVar1]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

struct<40> func_48(var uParam0, int iParam1)
{
	Var0 = { func_62(uParam0, iParam1) };
	func_63(uParam0, iParam1);
	return Var0;
}

int func_49(var uParam0)
{
	if (!func_64(uParam0))
	{
		return -1;
	}
	iVar0 = func_65(uParam0, uParam0->f_9);
	if (iVar0 != -1)
	{
		return iVar0;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (iVar1 == uParam0->f_9)
		{
		}
		else
		{
			iVar0 = func_65(uParam0, iVar1);
			if (iVar0 != -1)
			{
				return iVar0;
			}
		}
		iVar1++;
	}
	return -1;
}

bool func_50(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 71);
}

struct<15> func_51(int iParam0)
{
	Var0 = 2;
	Var0.f_1 = -1;
	Var0.f_5 = -1;
	Var0.f_5.f_1 = -1;
	Var0.f_5.f_3 = -1;
	Var0.f_5.f_4 = -1;
	Var0.f_5.f_5 = -1;
	Var0.f_5.f_6 = -1;
	Var0.f_5.f_6.f_1 = -1;
	Var0.f_5.f_9 = 2;
	if (!func_50(iParam0))
	{
		return Var0;
	}
	return *Global_1198046->f_231[iParam0];
}

void func_52()
{
	Var0 = -1;
	iVar5 = 0;
	Var7.f_5 = -1;
	iVar5 = 0;
	while (iVar5 < 16)
	{
		Var0 = { *Global_1211095->f_5[iVar5] };
		if (Var0 == -1)
		{
		}
		else if (Var0.f_1 != 2)
		{
		}
		else if (func_66(iVar5))
		{
		}
		else
		{
			iVar6 = absi((get_cloud_time_as_int() - Var0.f_4));
			if (iVar6 >= 60)
			{
				func_67(&Var0, 0);
				Var7.f_4 = 6;
				Var7.f_5 = { Var0 };
				func_38(&Var7, func_37(0, 8));
			}
			*Global_1211095->f_5[iVar5] = { Var0 };
		}
		iVar5++;
	}
}

bool func_53(int iParam0)
{
	if (iParam0 < 3)
	{
		return false;
	}
	if (iParam0 < (&Global_1198046->f_3[1] + 3))
	{
		return false;
	}
	if (iParam0 < 35)
	{
		return true;
	}
	if (iParam0 < (&Global_1198046->f_3[2] + 35))
	{
		return false;
	}
	if (iParam0 < (&Global_1198046->f_3[2] + 35) + 16)
	{
		return false;
	}
	return true;
}

var func_54(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	_0xde544b7ec0c187cc(&uVar0);
	if (!network_is_game_in_progress())
	{
		return uVar0;
	}
	if (func_68() != 0)
	{
		iVar1 = player_id();
		if (iVar1 >= 0 && iVar1 < 32)
		{
			_0x31010318ba9897ac(&uVar0, iVar1);
		}
		return uVar0;
	}
	iVar2 = 0;
	bVar3 = false;
	bVar4 = false;
	iVar5 = Global_1296859->f_10;
	iVar6 = Global_1296859->f_15;
	bVar7 = true;
	iVar9 = iParam10;
	if (vmag2(vParam6) < 1f)
	{
		bVar7 = false;
	}
	else
	{
		switch (iParam9)
		{
			case 665633627:
				iVar8 = _create_volume_cylinder_with_custom_name(vParam0, vParam3, vParam6, func_69());
				break;
			case -432403087:
				iVar8 = _create_volume_sphere_with_custom_name(vParam0, vParam3, vParam6, func_69());
				break;
			case -1612834106:
				iVar8 = _create_volume_box_with_custom_name(vParam0, vParam3, vParam6, func_69());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_70(get_player_team(iVar5)));
	}
	if (iVar9 & 8 != 0 && iVar9 & 32768 != 0)
	{
		iVar9 |= 65536;
		iVar9 = (iVar9 - iVar9 & 40952);
	}
	if (iVar9 & 4 != 0)
	{
		if (!network_get_this_script_is_network_script())
		{
			iVar9 = (iVar9 - iVar9 & 4);
			iVar9 |= 0;
		}
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (network_is_player_active(&(Global_1296859->f_154[iVar2])))
		{
			iVar10 = &Global_1296859->f_154[iVar2];
			bVar3 = false;
			bVar4 = false;
			if (iVar9 & 1 != 0 && iVar10 == iVar5)
			{
				bVar3 = true;
			}
			if (func_71(iVar2))
			{
				bVar3 = true;
			}
			iVar11 = get_player_ped(iVar10);
			if (!bVar3)
			{
				if (iVar9 & 2 != 0)
				{
					if (!does_entity_exist(iVar11))
					{
						bVar3 = true;
					}
					else if (&Global_1296859->f_88[iVar2])
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8192 != 0 && func_72(iVar2) != 1)
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 16384 != 0 && _0xb655db7582aec805(iVar11))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 4 != 0 && !network_is_player_a_participant(iVar10))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8176 != 0)
				{
					switch (get_player_team(iVar10))
					{
						case -1:
							if (iVar9 & 16 != 0)
							{
								bVar4 = true;
							}
							break;
						case 0:
							if (iVar9 & 32 != 0)
							{
								bVar4 = true;
							}
							break;
						case 1:
							if (iVar9 & 64 != 0)
							{
								bVar4 = true;
							}
							break;
						case 2:
							if (iVar9 & 128 != 0)
							{
								bVar4 = true;
							}
							break;
						case 3:
							if (iVar9 & 256 != 0)
							{
								bVar4 = true;
							}
							break;
						case 4:
							if (iVar9 & 512 != 0)
							{
								bVar4 = true;
							}
							break;
						case 5:
							if (iVar9 & 1024 != 0)
							{
								bVar4 = true;
							}
							break;
						case 6:
							if (iVar9 & 2048 != 0)
							{
								bVar4 = true;
							}
							break;
						case 8:
							if (iVar9 & 4096 != 0)
							{
								bVar4 = true;
							}
							break;
					}
					if (!bVar4)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 32768 != 0)
				{
					if (_0x901e0dc25080c8b9(iVar10) != iVar6)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 65536 != 0)
				{
					if (!func_73(iVar10))
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3 && bVar7)
			{
				if (!_0xf256a75210c5c0eb(iVar8, get_entity_coords(iVar11, false, false)))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				_0x31010318ba9897ac(&uVar0, iVar2);
			}
		}
		iVar2++;
	}
	if (bVar7)
	{
		_delete_volume(iVar8);
	}
	return uVar0;
}

var func_55(int iParam0)
{
	_0x31010318ba9897ac(&uVar0, iParam0);
	return uVar0;
}

void func_56(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	*uParam0 = 4;
	uParam0->f_1 = player_id();
	trigger_script_event(1, uParam0, 45, 37, &uParam1);
}

bool func_57(var uParam0)
{
	return *uParam0 == uParam0->f_2;
}

bool func_58(var uParam0)
{
	if (uParam0->f_1 == -1)
	{
		return false;
	}
	if (!func_64(&(uParam0->f_5)))
	{
		return false;
	}
	return true;
}

bool func_59(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var33 = -1;
	Var33.f_1 = -1;
	if (func_74(uParam0->f_8.f_5))
	{
		Var33 = { uParam0->f_8.f_5 };
	}
	else if (func_74(uParam0->f_8.f_5.f_6))
	{
		Var33 = { uParam0->f_8.f_5.f_6 };
	}
	else
	{
		return true;
	}
	bVar35 = false;
	if (func_75(uParam0->f_8.f_2))
	{
		bVar35 = true;
	}
	else
	{
		bVar35 = false;
	}
	if (bParam1)
	{
		Var0.f_25 = iParam2;
		Var0.f_26 = iParam3;
		Var0.f_27 = iParam4;
		Var0.f_28 = iParam5;
	}
	else if (!func_77(func_76(Var33), &Var0))
	{
		return false;
	}
	if (Var0.f_25 <= 0 || Var0.f_25 > 50)
	{
		if (Var0.f_25 != 0)
		{
		}
		iVar36[0] = 0;
	}
	else
	{
		iVar36[0] = 1;
	}
	if (Var0.f_26 <= 0 || Var0.f_26 > 10)
	{
		if (Var0.f_26 != 0)
		{
		}
		iVar36[1] = 0;
	}
	else
	{
		iVar36[1] = 1;
	}
	if (Var0.f_27 <= 0 || Var0.f_27 > 25)
	{
		if (Var0.f_27 != 0)
		{
		}
		iVar36[2] = 0;
	}
	else
	{
		iVar36[2] = 1;
	}
	if (Var0.f_28 <= 0 || Var0.f_28 > 10)
	{
		if (Var0.f_28 != 0)
		{
		}
		iVar36[3] = 0;
	}
	else
	{
		iVar36[3] = 1;
	}
	if (bVar35)
	{
		iVar43 = get_num_reserved_mission_peds(1);
		iVar44 = get_num_reserved_mission_vehicles(1);
		iVar45 = get_num_reserved_mission_objects(1);
		iVar46 = _0x62be3ecc79fbd004(1);
	}
	else
	{
		_0x5e71e72a94985214(uParam0->f_8.f_2, 0, &iVar43, &iVar44, &iVar45, &iVar46);
	}
	iVar41 = 0;
	while (iVar41 < 4)
	{
		iVar47 = iVar41;
		if (iVar47 == -1)
		{
		}
		else if (!&iVar36[iVar41])
		{
		}
		else
		{
			switch (iVar47)
			{
				case 0:
					iVar42 = (get_max_num_network_peds() - iVar43);
					if (iVar42 < Var0.f_25)
					{
						return false;
					}
					break;
					break;
				case 1:
					iVar42 = (get_max_num_network_vehicles() - iVar44);
					if (iVar42 < Var0.f_26)
					{
						return false;
					}
					break;
					break;
				case 2:
					iVar42 = (get_max_num_network_objects() - iVar45);
					if (iVar42 < Var0.f_27)
					{
						return false;
					}
					break;
					break;
				case 3:
					iVar42 = (get_max_num_network_pickups() - iVar46);
					if (iVar42 < Var0.f_28)
					{
						return false;
					}
					break;
					break;
			}
		}
		iVar41++;
	}
	return true;
}

void func_60(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_61(var uParam0, var uParam1)
{
	if (uParam1->f_2 == -1)
	{
		return false;
	}
	if (uParam0->f_2 == -1)
	{
		return false;
	}
	if (uParam1->f_2 != uParam0->f_2)
	{
		return false;
	}
	if (uParam1->f_5 == -1)
	{
		return false;
	}
	if (uParam0->f_5 == -1)
	{
		return false;
	}
	if (uParam1->f_5 != uParam0->f_5)
	{
		return false;
	}
	if (uParam1->f_8 != uParam0->f_8)
	{
		return false;
	}
	if (uParam1->f_8.f_1 != uParam0->f_8.f_1)
	{
		return false;
	}
	if (!func_78(uParam1->f_8.f_5, uParam0->f_8.f_5))
	{
		return false;
	}
	if (uParam1->f_8.f_5.f_4 != uParam0->f_8.f_5.f_4)
	{
		return false;
	}
	if (uParam1->f_8.f_5.f_2 != uParam0->f_8.f_5.f_2)
	{
		return false;
	}
	return true;
}

struct<40> func_62(var uParam0, int iParam1)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = 255;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_8 = 2;
	Var0.f_8.f_1 = -1;
	Var0.f_8.f_5 = -1;
	Var0.f_8.f_5.f_1 = -1;
	Var0.f_8.f_5.f_3 = -1;
	Var0.f_8.f_5.f_4 = -1;
	Var0.f_8.f_5.f_5 = -1;
	Var0.f_8.f_5.f_6 = -1;
	Var0.f_8.f_5.f_6.f_1 = -1;
	Var0.f_8.f_5.f_9 = 2;
	Var0.f_23.f_1 = 1024;
	Var0.f_23.f_4 = -15;
	Var0.f_23.f_5 = 255;
	Var0.f_23.f_8 = 1;
	Var0.f_23.f_8.f_1.f_1 = 2147483647;
	Var0.f_23.f_13 = -1;
	if (!func_79(uParam0, iParam1))
	{
		return Var0;
	}
	Var40 = { *uParam0->f_3[iParam1] };
	*uParam0->f_3[iParam1] = { Var0 };
	return Var40;
}

void func_63(var uParam0, int iParam1)
{
	iVar0 = (((uParam0->f_1 + *uParam0) - 1) % uParam0->f_2);
	if (uParam0->f_1 == iParam1)
	{
		iVar2 = *uParam0;
		iVar1 = 0;
		while (iVar1 < *uParam0)
		{
			iVar3 = ((uParam0->f_1 + iVar1) % uParam0->f_2);
			if (&uParam0->f_3[iVar3] != -1)
			{
			}
			else
			{
				if (uParam0->f_3[iVar3]->f_4 != -1)
				{
					func_62(uParam0, iVar3);
				}
				iVar2 = (iVar2 - 1);
				iVar1++;
			}
		}
		uParam0->f_1 = iVar3;
		*uParam0 = iVar2;
	}
	else if (iVar0 == iParam1)
	{
		iVar2 = *uParam0;
		iVar1 = 0;
		while (iVar1 < *uParam0)
		{
			iVar4 = ((iVar0 - iVar1) + 5 % uParam0->f_2);
			if (&uParam0->f_3[iVar4] != -1)
			{
			}
			else
			{
				func_62(uParam0, iVar4);
				iVar2 = (iVar2 - 1);
				iVar1++;
			}
		}
		*uParam0 = iVar2;
	}
}

bool func_64(var uParam0)
{
	if (func_74(*uParam0))
	{
		return true;
	}
	if (uParam0->f_2 != 0)
	{
		if (uParam0->f_3 != -1)
		{
			return true;
		}
		if (uParam0->f_4 != -1)
		{
			return true;
		}
		if (uParam0->f_5 != -1)
		{
			return true;
		}
	}
	return false;
}

int func_65(var uParam0, int iParam1)
{
	iVar0 = func_80(iParam1);
	iVar1 = ((&Global_1198046->f_3[iParam1] + iVar0) - 1);
	if (&Global_1198046->f_23[iParam1] != 0)
	{
		iVar1 = ((iVar0 + func_81(iParam1)) - 1);
	}
	bVar2 = func_74(*uParam0);
	bVar3 = (uParam0->f_2 != 0 && uParam0->f_3 != -1);
	bVar4 = (uParam0->f_2 != 0 && uParam0->f_4 != -1);
	bVar5 = (uParam0->f_2 != 0 && uParam0->f_5 != -1);
	iVar6 = iVar0;
	while (iVar6 <= iVar1)
	{
		if (bVar2)
		{
			if (func_78(Global_1198046->f_231[iVar6]->f_5, *uParam0))
			{
				return iVar6;
			}
		}
		if (bVar3)
		{
			if (Global_1198046->f_231[iVar6]->f_5.f_2 == uParam0->f_2 && Global_1198046->f_231[iVar6]->f_5.f_3 == uParam0->f_3)
			{
				return iVar6;
			}
		}
		if (bVar4)
		{
			if (Global_1198046->f_231[iVar6]->f_5.f_2 == uParam0->f_2 && Global_1198046->f_231[iVar6]->f_5.f_4 == uParam0->f_4)
			{
				return iVar6;
			}
		}
		if (bVar5)
		{
			if (Global_1198046->f_231[iVar6]->f_5.f_2 == uParam0->f_2 && Global_1198046->f_231[iVar6]->f_5.f_5 == uParam0->f_5)
			{
				return iVar6;
			}
		}
		iVar6++;
	}
	return -1;
}

bool func_66(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 16)
	{
		return false;
	}
	return Global_1211095->f_5[iParam0]->f_2;
}

void func_67(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

int func_68()
{
	return Global_1051252->f_12;
}

char* func_69()
{
	return "unnamed";
}

int func_70(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case -1:
			iVar0 = 16;
			break;
		case 0:
			iVar0 = 32;
			break;
		case 1:
			iVar0 = 64;
			break;
		case 2:
			iVar0 = 128;
			break;
		case 3:
			iVar0 = 256;
			break;
		case 4:
			iVar0 = 512;
			break;
		case 5:
			iVar0 = 1024;
			break;
		case 6:
			iVar0 = 2048;
			break;
		case 8:
			iVar0 = 4096;
			break;
	}
	return iVar0;
}

bool func_71(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return func_82(36, iParam0);
}

int func_72(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102219->f_1;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 26;
	}
	if (&Global_1296859->f_22[iParam0])
	{
		return (*Global_1100469)[iParam0]->f_1;
	}
	return 26;
}

bool func_73(int iParam0)
{
	if (func_83(iParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) != 1)
		{
			func_84(iParam0);
		}
		return true;
	}
	return _0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) == 1;
}

bool func_74(struct<2> Param0)
{
	if (!func_85(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_86(Param0))
	{
		return false;
	}
	return true;
}

bool func_75(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_76(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_87(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

bool func_77(int iParam0, var uParam1)
{
	Var0 = { func_88(iParam0) };
	if (!func_74(Var0))
	{
		return false;
	}
	func_89(Var0, iParam0, uParam1);
	return true;
}

bool func_78(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_79(var uParam0, int iParam1)
{
	return (iParam1 >= 0 && iParam1 < uParam0->f_2);
}

int func_80(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 3;
		case 2:
			return 35;
		case 3:
			return 55;
		default:
			break;
	}
	return 0;
}

int func_81(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			if (&Global_1198046->f_3[iParam0] * 2 <= 32)
			{
				return &Global_1198046->f_3[iParam0] * 2;
			}
			return 32;
		case 2:
			if (&Global_1198046->f_3[iParam0] * 2 <= 20)
			{
				return &Global_1198046->f_3[iParam0] * 2;
			}
			return 20;
		case 3:
			if (&Global_1198046->f_3[iParam0] * 2 <= 16)
			{
				return &Global_1198046->f_3[iParam0] * 2;
			}
			return 16;
		default:
			break;
	}
	return 0;
}

bool func_82(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_90(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 == func_91())
	{
		return func_90(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1296859->f_22[iParam1])
	{
		return func_90(&((*Global_1100469)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

bool func_83(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), iParam0))
	{
		return true;
	}
	return false;
}

void func_84(int iParam0)
{
	if (Global_1572887->f_16 != 0 || Global_1572887->f_13 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (!&Global_1296859->f_22[iVar0])
	{
		func_92(iParam0);
		return;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] == 1)
	{
		return;
	}
	func_93(iVar0);
	_0x51951de06c0d1c40(iParam0, 1);
	Global_1071686->f_21416.f_1[iVar0] = 1;
}

bool func_85(int iParam0)
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

int func_86(int iParam0)
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

bool func_87(struct<2> Param0, var uParam2)
{
	if (!func_74(Param0))
	{
		return false;
	}
	func_94(uParam2);
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

struct<2> func_88(int iParam0)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { func_95(iParam0, 2) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_95(iParam0, 7) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_95(iParam0, 5) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_95(iParam0, 6) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_95(iParam0, 8) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_95(iParam0, 3) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_95(iParam0, 4) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	return func_96();
}

int func_89(int iParam0, int iParam1, var uParam2)
{
	if (!func_97(iParam0))
	{
		return 0;
	}
	if (func_98(iParam0, iParam1, &uVar0))
	{
		func_99(iParam0, &uVar0, uParam2);
	}
	else
	{
		return 0;
	}
	return 1;
}

bool func_90(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_91()
{
	return Global_1102219->f_3672;
}

void func_92(int iParam0)
{
	if (Global_1572887->f_16 != 0 || Global_1572887->f_13 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] == 0)
	{
		return;
	}
	func_93(iVar0);
	_0x51951de06c0d1c40(iParam0, 0);
	Global_1071686->f_21416.f_1[iVar0] = 0;
}

void func_93(int iParam0)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_1 != 0)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_2 = 0;
		Global_1071686->f_21416.f_1[iParam0]->f_1 = 0;
	}
}

void func_94(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

struct<2> func_95(int iParam0, int iParam1)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = iParam1;
	switch (iParam1)
	{
		case 2:
			Var0.f_1 = func_100(iParam0, &(Global_1071686->f_636), func_86(iParam1));
			break;
		case 3:
			Var0.f_1 = func_100(iParam0, &(Global_1071686->f_636.f_602), func_86(iParam1));
			break;
		case 4:
			Var0.f_1 = func_100(iParam0, &(Global_1071686->f_636.f_2104), func_86(iParam1));
			break;
		case 5:
			Var0.f_1 = func_100(iParam0, &(Global_1071686->f_636.f_12606), func_86(iParam1));
			break;
		case 6:
			Var0.f_1 = func_100(iParam0, &(Global_1071686->f_636.f_12908), func_86(iParam1));
			break;
		case 7:
			Var0.f_1 = func_100(iParam0, &(Global_1071686->f_636.f_15910), func_86(iParam1));
			break;
		case 8:
			Var0.f_1 = func_100(iParam0, &(Global_1071686->f_636.f_16512), func_86(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_96();
	}
	return Var0;
}

struct<2> func_96()
{
	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

bool func_97(int iParam0)
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

bool func_98(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_101(iParam0);
	uParam2->f_4 = iParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

void func_99(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	_datafile_get_int(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_102(iParam0, uParam2->f_1);
	uParam1->f_2 = -2140901307;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_2 = iVar0;
	uParam1->f_2 = -2140901307;
	_datafile_get_string(&(uParam2->f_9), uParam1);
	uParam1->f_2 = 1292053410;
	_datafile_get_string(&(uParam2->f_17), uParam1);
	if (*uParam2 == 3)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_103(iVar0);
		}
	}
	else if (*uParam2 == 4)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = iVar0;
		}
	}
	else if (*uParam2 == 5)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_104(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_105(iVar0);
		}
		uParam1->f_2 = 162343104;
		_datafile_get_int(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_106(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		_datafile_get_int(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_7 = func_107(iVar0);
	uParam1->f_2 = 1060782978;
	_datafile_get_hash(&(uParam2->f_8), uParam1);
	uParam1->f_2 = 162343104;
	_datafile_get_int(&(uParam2->f_6), uParam1);
	uParam1->f_2 = -733480474;
	_datafile_get_int(&(uParam2->f_25), uParam1);
	uParam1->f_2 = 492825771;
	_datafile_get_int(&(uParam2->f_26), uParam1);
	uParam1->f_2 = -839279581;
	_datafile_get_int(&(uParam2->f_27), uParam1);
	uParam1->f_2 = -640941103;
	_datafile_get_int(&(uParam2->f_28), uParam1);
	iVar0 = 0;
	uParam1->f_2 = -2025968302;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_29 = iVar0;
	iVar0 = 0;
	uParam1->f_2 = -1829781569;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_30 = iVar0;
	iVar0 = 0;
	uParam1->f_2 = -1999176766;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_31 = iVar0;
	iVar0 = 0;
	uParam1->f_2 = -739728609;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_32 = iVar0;
}

int func_100(int iParam0, var uParam1, int iParam2)
{
	iVar0 = 0;
	iVar1 = (iParam2 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if (uParam1[iVar2] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if (uParam1[iVar2] < iParam0)
		{
			iVar0 = iVar2 + 1;
		}
		else
		{
			return iVar2;
		}
	}
	return -1;
}

int func_101(int iParam0)
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

int func_102(int iParam0, var uParam1)
{
	if (func_108(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_103(int iParam0)
{
	switch (iParam0)
	{
		case 1336837986:
			return 0;
		case 2124631622:
			return 1;
		case -66250361:
			return 2;
		case 1443764480:
			return 3;
		case -668110249:
			return 4;
		case -1381389849:
			return 5;
		case 536699577:
			return 6;
		case 541147288:
			return 7;
		case 377122918:
			return 8;
		case 1158195437:
			return 9;
		case -1261475678:
			return 10;
		case -621956193:
			return 11;
		case 1081776803:
			return 12;
		case -218697175:
			return 13;
		case -867762478:
			return 14;
		case 602097925:
			return 15;
		case 1724417419:
			return 16;
		case -728200180:
			return 17;
		case 1404415665:
			return 18;
		case 339077182:
			return 20;
		case 650120418:
			return 21;
		case 1695693301:
			return 28;
		case -1809176396:
			return 19;
		case 349772825:
			return 22;
		case 1657045547:
			return 23;
		case -590482787:
			return 24;
		case -1711308722:
			return 25;
		case -409129282:
			return 26;
		case -1790985606:
			return 27;
		case 1518877519:
			return 30;
		default:
			break;
	}
	return -1;
}

int func_104(int iParam0)
{
	switch (iParam0)
	{
		case -747096482:
			return 0;
		case 390152599:
			return 1;
		case 348001928:
			return 2;
		case 687137831:
			return 3;
		case 1221273613:
			return 4;
		case -669486032:
			return 5;
		case -1044132584:
			return 6;
		default:
			break;
	}
	return -1;
}

int func_105(int iParam0)
{
	switch (iParam0)
	{
		case 1697883736:
			return 0;
		case 1927192818:
			return 1;
		case -1363591469:
			return 2;
		case 1635448909:
			return 3;
		case -604494871:
			return 4;
		case -993281498:
			return 5;
		case -1871525158:
			return 6;
		case -596286663:
			return 15;
		case 923956646:
			return 16;
		case 1459450644:
			return 17;
		case -2071675432:
			return 18;
		case -552339597:
			return 8;
		case 2144670272:
			return 10;
		case 996459079:
			return 9;
		case 1996177174:
			return 11;
		case -1702168032:
			return 12;
		case -27117790:
			return 13;
		case 1653867545:
			return 14;
		case -142235487:
			return 7;
		default:
			break;
	}
	return -1;
}

int func_106(int iParam0)
{
	switch (iParam0)
	{
		case 2049341823:
			return 0;
		case 1655635003:
			return 1;
		case -435635781:
			return 2;
		case 2006131499:
			return 3;
		case -1641798436:
			return 4;
		case 352400957:
			return 5;
		case 1211286129:
			return 6;
		case 787592898:
			return 7;
		case -568832219:
			return 8;
		case -1103026985:
			return 9;
		case 1039801657:
			return 10;
		default:
			break;
	}
	return 0;
}

int func_107(int iParam0)
{
	switch (iParam0)
	{
		case 987444055:
			return -1;
		case 1330140418:
			return 0;
		case -640677282:
			return 1;
		case -1950303839:
			return 2;
		case 1322114923:
			return 3;
		case -525004462:
			return 4;
		case 1419735597:
			return 5;
		case 1004744465:
			return 6;
		case 672178273:
			return 7;
		case 1777227915:
			return 8;
		case 408825843:
			return 9;
		case -42959138:
			return 10;
		case 64621749:
			return 11;
		case -1346830927:
			return 12;
		case -218234180:
			return 13;
		case 751663875:
			return 14;
		case 1766283257:
			return 15;
		case -269943670:
			return 16;
		case 522313648:
			return 17;
		case 1976336482:
			return 18;
		case -713504854:
			return 19;
		case 753957709:
			return 20;
		case 1054483531:
			return 21;
		case 547199896:
			return 22;
		default:
			break;
	}
	return -1;
}

bool func_108(int iParam0, var uParam1, var uParam2)
{
	if (func_109(iParam0, uParam1, &uVar0))
	{
		func_110(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_109(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_101(iParam0);
	uParam2->f_4 = uParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

void func_110(var uParam0, int iParam1, var uParam2)
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

