void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (has_force_cleanup_occurred(4))
	{
		func_1();
		terminate_this_thread();
		return;
	}
	func_2();
	bVar0 = false;
	while (!_0x9e4ef615e307fbbe() && !bVar0)
	{
		func_3(&bVar0);
		wait(0);
	}
	func_1();
	terminate_this_thread();
}

void func_1()
{
	func_4();
	_databinding_remove_data_entry(Local_9);
}

void func_2()
{
	func_5();
	Local_9 = _databinding_add_data_container_from_path("", "cheats");
	Local_9.f_3 = _databinding_add_data_container(Local_9, "currentSelection");
	_databinding_add_data_hash(Local_9.f_3, func_6(12), get_hash_key(""));
	_databinding_add_data_hash(Local_9.f_3, func_6(13), get_hash_key(""));
	_databinding_add_data_hash(Local_9.f_3, func_6(16), get_hash_key(""));
	Local_9.f_2 = _databinding_add_data_container(Local_9, "currentGroup");
	_databinding_add_data_hash(Local_9.f_2, func_6(14), get_hash_key("PM_SCR_CHEATS"));
	_databinding_add_data_hash(Local_9.f_2, func_6(15), get_hash_key(""));
	_databinding_add_data_hash(Local_9.f_2, func_6(16), get_hash_key(""));
	Local_9.f_1 = _databinding_add_ui_item_list(Local_9, "dynamicList");
	iVar0 = 0;
	while (iVar0 <= 36)
	{
		func_7(iVar0);
		iVar0++;
	}
	_databinding_write_data_hash_string_from_parent(Local_9.f_3, func_6(13), get_hash_key(func_8(0)));
	func_9();
	func_10();
}

void func_3(bool bParam0)
{
	while (_event_manager_is_event_pending(76559005))
	{
		if (!_event_manager_peek_event(76559005, &vVar0))
		{
		}
		else
		{
			switch (vVar0.x)
			{
				case -1740156697:
					if (vVar0.y < 0 || vVar0.y >= 37)
					{
					}
					else
					{
						if (Local_9.f_43 != vVar0.y)
						{
							if (Local_9.f_43 != -1)
							{
								func_11(Local_9.f_43);
							}
						}
						Local_9.f_43 = vVar0.y;
						func_12(Local_9.f_43);
						Jump @459; //curOff = 147
						switch (vVar0.z)
						{
							case -1943062401:
								*bParam0 = 1;
								break;
							case 172361245:
								func_13();
								break;
							case -1761800988:
								func_14();
								func_15();
								func_12(Local_9.f_43);
								Local_9.f_47 = 1;
								break;
						}
						Jump @459; //curOff = 216
						Jump @459; //curOff = 219
						if (func_16() || Local_9.f_47)
						{
							func_15();
							func_12(Local_9.f_43);
						}
						else
						{
							_request_uiapp_transition_by_hash(1916894743, -1882247919);
						}
						Jump @459; //curOff = 269
						func_17();
						if (func_18(Local_9.f_43))
						{
							_request_uiapp_transition_by_hash(1916894743, -1882247919);
						}
						else
						{
							func_12(Local_9.f_43);
						}
						Jump @459; //curOff = 313
						iVar4 = func_19(vVar0.z);
						if (iVar4 == -1)
						{
							if (vVar0.z == 0)
							{
								Jump @459; //curOff = 340
							}
							else
							{
								_request_uiapp_transition_by_hash(1916894743, 415950302);
							}
							else
							{
								Jump @453; //curOff = 364
								if (func_20(iVar4))
								{
									_request_uiapp_transition_by_hash(1916894743, -1954024225);
								}
								else if (func_21(iVar4) == 0)
								{
									if (!func_22(iVar4))
									{
										_request_uiapp_transition_by_hash(1916894743, -1001071426);
									}
									else
									{
										_request_uiapp_transition_by_hash(1916894743, 526258797);
										func_23(iVar4);
									}
									_event_manager_pop_event(76559005);
								}
							}
						}
					}
					default:
						break;
			}
		}
	}
}

void func_4()
{
	iVar0 = 0;
	while (iVar0 <= (Local_9.f_42 - 1))
	{
		iVar3 = &Local_9.f_4[iVar0];
		if (iVar3 == 0)
		{
		}
		else
		{
			iVar1 = func_24(iVar3);
			if (func_25(iVar3) == 369178237 || func_25(iVar3) == 1726108579)
			{
			}
			else if (func_26(iVar1))
			{
			}
			else
			{
				iVar2 = func_27(iVar1);
				switch (iVar2)
				{
					case 0:
						func_28(iVar3);
						break;
					case 1:
						func_29(iVar3);
						break;
					case 2:
						func_30(iVar3);
						break;
					default:
						break;
				}
			}
		}
		iVar0++;
	}
}

void func_5()
{
	Local_9.f_49 = (999999900 - func_31(1));
	if (func_32() != -1)
	{
		Local_9.f_48 = (func_32() / 50000);
	}
}

char* func_6(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "name";
		case 1:
			return "description";
		case 2:
			return "tipText";
		case 3:
			return "infoBox";
		case 4:
			return "converter";
		case 5:
			return "lockedState";
		case 6:
			return "recentlyUnlocked";
		case 7:
			return "active";
		case 8:
			return "activeText";
		case 9:
			return "value";
		case 10:
			return "minimum";
		case 11:
			return "maximum";
		case 12:
			return "infoBox";
		case 13:
			return "description";
		case 14:
			return "name";
		case 15:
			return "description";
		case 16:
			return "tipText";
		case 17:
			return "cheat";
		case 18:
			return "textValue";
		default:
			break;
	}
	return "";
}

void func_7(int iParam0)
{
	iVar3 = func_33(iParam0);
	if (iVar3 != 0 && func_34(&(Local_9.f_91), iVar3, 1))
	{
		Local_9.f_50[iParam0] = &Local_9.f_88[iVar3];
		return;
	}
	uVar0 = _databinding_add_data_container(Local_9.f_1, func_35(iParam0));
	iVar1 = func_27(iParam0);
	_databinding_add_data_hash(uVar0, func_6(0), get_hash_key(func_36(iParam0)));
	_databinding_add_data_hash(uVar0, func_6(1), get_hash_key(func_37(iParam0)));
	_databinding_add_data_hash(uVar0, func_6(2), get_hash_key(""));
	_databinding_add_data_hash(uVar0, func_6(3), get_hash_key(""));
	_databinding_add_data_hash(uVar0, func_6(4), func_38(iVar1));
	_databinding_add_data_hash(uVar0, func_6(5), func_39(iParam0));
	_databinding_add_data_bool(uVar0, func_6(6), 0);
	_databinding_add_data_int(uVar0, func_6(17), iParam0);
	switch (iVar1)
	{
		case 0:
			_databinding_add_data_bool(uVar0, func_6(9), 0);
			_databinding_add_data_bool(uVar0, func_6(10), 0);
			_databinding_add_data_bool(uVar0, func_6(11), 1);
			if (iParam0 == 6)
			{
				_databinding_add_data_bool(uVar0, func_6(7), 0);
				if (func_32() == -1)
				{
					if (Local_9.f_49 <= 0)
					{
						_databinding_add_data_string(uVar0, func_6(8), _create_var_string(2, "CHEAT_TIP_AMOUNT_ADDED_MAX"));
					}
					else
					{
						_databinding_add_data_string(uVar0, func_6(8), "");
					}
				}
				else
				{
					if (func_32() >= Local_9.f_49)
					{
						_databinding_add_data_string(uVar0, func_6(8), _create_var_string(2, "CHEAT_TIP_AMOUNT_ADDED_MAX"));
					}
					else
					{
						_databinding_add_data_string(uVar0, func_6(8), _create_var_string(2, "CHEAT_TIP_AMOUNT_ADDED", func_32()));
					}
					_databinding_write_data_bool_from_parent(uVar0, func_6(9), 1);
				}
			}
			else
			{
				_databinding_add_data_bool(uVar0, func_6(7), func_40(iParam0));
			}
			break;
		case 1:
			_databinding_add_data_int(uVar0, func_6(9), func_41(func_40(iParam0), 1, 0));
			_databinding_add_data_int(uVar0, func_6(10), 0);
			_databinding_add_data_int(uVar0, func_6(11), 1);
			break;
		case 2:
			Local_9.f_44[iVar3] = func_42(iVar3) + 1;
			if (&Local_9.f_44[iVar3] == 0)
			{
				iVar2 = func_43(iVar3);
				if (iVar2 != -1)
				{
					Local_9.f_44[iVar3] = func_44(iVar3, iVar2) + 1;
				}
			}
			_databinding_add_data_int(uVar0, func_6(9), &(Local_9.f_44[iVar3]));
			_databinding_add_data_int(uVar0, func_6(10), 0);
			_databinding_add_data_int(uVar0, func_6(11), func_45(iVar3));
			_databinding_add_data_hash(uVar0, func_6(18), func_46(&(Local_9.f_44[iVar3])));
			if (func_47(iVar3))
			{
				if (&Local_9.f_44[iVar3] == 0)
				{
					_databinding_write_data_hash_string_from_parent(uVar0, func_6(5), 427136516);
				}
				else
				{
					_databinding_write_data_hash_string_from_parent(uVar0, func_6(5), func_39(func_48(iVar3)));
				}
			}
			else
			{
				_databinding_write_data_hash_string_from_parent(uVar0, func_6(5), 369178237);
			}
			break;
		default:
			break;
	}
	if (iVar3 != 0)
	{
		func_49(&(Local_9.f_91), iVar3, 1);
		Local_9.f_88[iVar3] = Local_9.f_42;
	}
	_databinding_insert_ui_item_to_list_from_context_hash_alias(Local_9.f_1, Local_9.f_42, func_50(iVar1), uVar0);
	Local_9.f_4[Local_9.f_42] = uVar0;
	Local_9.f_50[iParam0] = Local_9.f_42;
	Local_9.f_42++;
}

char* func_8(int iParam0)
{
	iVar1 = func_24(&(Local_9.f_4[iParam0]));
	iVar0 = func_25(&(Local_9.f_4[iParam0]));
	bVar3 = func_51(&(Local_9.f_4[iParam0]));
	switch (iVar0)
	{
		case 427136516:
			if (func_40(iVar1) || bVar3)
			{
				if (func_52(iVar1))
				{
					return "CHEAT_ACTIVATED_ONE_TIME_USE";
				}
				else if (func_53(iVar1))
				{
					iVar2 = func_48(func_33(iVar1));
					if (iVar2 == -1)
					{
						return func_54(func_33(iVar1));
					}
					else
					{
						return func_37(iVar2);
					}
				}
				else if (iVar1 == 6)
				{
					return func_37(iVar1);
				}
				else
				{
					return "CHEAT_ACTIVATED_DESCRIPTION";
				}
			}
			else
			{
				return func_37(iVar1);
			}
			break;
		case 369178237:
		case 1726108579:
			return "CHEAT_UNLOCK_DESCRIPTION";
		case 866112557:
			if (func_26(iVar1))
			{
				return "CHEAT_DISABLED_DESCRIPTION";
			}
			else if (func_40(iVar1) || bVar3)
			{
				if (func_52(iVar1))
				{
					return "CHEAT_ACTIVATED_ONE_TIME_USE";
				}
				else if (iVar1 == 6)
				{
					return "CHEAT_ACTIVATED_MONEY_MAX";
				}
				else
				{
					return "CHEAT_ACTIVATED_DESCRIPTION";
				}
			}
			else if (iVar1 == 6)
			{
				return "CHEAT_ACTIVATED_MONEY_MAX";
			}
			else
			{
				return "CHEAT_DISABLED_DESCRIPTION";
			}
			break;
		default:
			break;
	}
	return "CHEATS_GROUP_DESC";
}

void func_9()
{
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		iVar1 = iVar0;
		if (iVar1 == 0 || iVar1 == -1)
		{
		}
		else
		{
			func_55(iVar1);
		}
		iVar0++;
	}
}

void func_10()
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar2 = iVar0;
		if (iVar2 == -1 || iVar2 == 0)
		{
			Local_9.f_93[iVar0] = -1;
		}
		else
		{
			iVar1 = func_56(iVar2);
			if (iVar1 == -1)
			{
				Local_9.f_93[iVar0] = -1;
			}
			else
			{
				Local_9.f_93[iVar0] = &Local_9.f_50[iVar1];
				_databinding_write_data_bool_from_parent(&(Local_9.f_4[&Local_9.f_93[iVar0]]), func_6(9), 1);
				_databinding_write_data_bool_from_parent(&(Local_9.f_4[&Local_9.f_93[iVar0]]), func_6(7), 1);
				_databinding_write_data_hash_string_from_parent(&(Local_9.f_4[&Local_9.f_93[iVar0]]), func_6(5), 866112557);
			}
		}
		iVar0++;
	}
}

void func_11(int iParam0)
{
	if (0 == &Local_9.f_4[iParam0])
	{
		return;
	}
	if (_databinding_read_data_bool_from_parent(&(Local_9.f_4[iParam0]), func_6(6)))
	{
		_databinding_write_data_bool_from_parent(&(Local_9.f_4[iParam0]), func_6(6), 0);
	}
}

void func_12(int iParam0)
{
	iVar0 = func_24(&(Local_9.f_4[iParam0]));
	if (func_53(iVar0))
	{
		func_55(func_33(iVar0));
		_databinding_write_data_hash_string_from_parent(Local_9.f_3, func_6(13), func_57(&(Local_9.f_4[iParam0])));
	}
	else
	{
		_databinding_write_data_hash_string_from_parent(Local_9.f_3, func_6(13), get_hash_key(func_8(iParam0)));
	}
}

void func_13()
{
	iVar0 = func_24(&(Local_9.f_4[Local_9.f_43]));
	iVar1 = func_27(iVar0);
	switch (iVar1)
	{
		case 0:
			break;
		case 1:
			_databinding_write_data_int_from_parent(&(Local_9.f_4[Local_9.f_43]), func_6(9), 0);
			break;
		case 2:
			if (!func_53(iVar0))
			{
			}
			else
			{
				iVar2 = func_33(iVar0);
				Local_9.f_44[iVar2] = 0;
				_databinding_write_data_int_from_parent(&(Local_9.f_4[Local_9.f_43]), func_6(9), 0);
			}
			default:
				break;
	}
}

void func_14()
{
	Global_1425247->f_53 = 1;
}

void func_15()
{
	iVar0 = func_24(&(Local_9.f_4[Local_9.f_43]));
	iVar2 = func_27(iVar0);
	switch (iVar2)
	{
		case 0:
			if (func_58(iVar0))
			{
				iVar3 = func_59(iVar0);
				if (iVar3 != -1 && iVar3 != 0)
				{
					if (&Local_9.f_93[iVar3] != -1)
					{
						if (func_60(iVar0) != 0)
						{
							if (func_61())
							{
							}
							else
							{
								iVar1 = func_24(&(Local_9.f_4[&Local_9.f_93[iVar3]]));
								_databinding_write_data_bool_from_parent(&(Local_9.f_4[&Local_9.f_93[iVar3]]), func_6(9), 0);
								_databinding_write_data_bool_from_parent(&(Local_9.f_4[&Local_9.f_93[iVar3]]), func_6(7), 0);
								if (func_26(iVar1))
								{
									_databinding_write_data_hash_string_from_parent(&(Local_9.f_4[&Local_9.f_93[iVar3]]), func_6(5), 866112557);
								}
								else if (func_20(iVar1))
								{
									_databinding_write_data_hash_string_from_parent(&(Local_9.f_4[&Local_9.f_93[iVar3]]), func_6(5), 427136516);
								}
								else
								{
									_databinding_write_data_hash_string_from_parent(&(Local_9.f_4[&Local_9.f_93[iVar3]]), func_6(5), 369178237);
								}
								Local_9.f_93[iVar3] = Local_9.f_43;
								_databinding_write_data_bool_from_parent(&(Local_9.f_4[Local_9.f_43]), func_6(6), 0);
								_databinding_write_data_bool_from_parent(&(Local_9.f_4[Local_9.f_43]), func_6(9), 1);
								if (iVar0 == 6)
								{
									Local_9.f_48++;
									iVar4 = (50000 * Local_9.f_48);
									iVar4 = func_62(iVar4, 0, Local_9.f_49);
									func_63(iVar4);
									if (iVar4 >= Local_9.f_49)
									{
										_databinding_write_data_string_from_parent(&(Local_9.f_4[Local_9.f_43]), func_6(8), _create_var_string(2, "CHEAT_TIP_AMOUNT_ADDED_MAX"));
										_databinding_write_data_hash_string_from_parent(&(Local_9.f_4[Local_9.f_43]), func_6(5), 866112557);
									}
									else
									{
										_databinding_write_data_string_from_parent(&(Local_9.f_4[Local_9.f_43]), func_6(8), _create_var_string(2, "CHEAT_TIP_AMOUNT_ADDED", iVar4));
									}
								}
								else
								{
									_databinding_write_data_bool_from_parent(&(Local_9.f_4[Local_9.f_43]), func_6(7), 1);
									_databinding_write_data_hash_string_from_parent(&(Local_9.f_4[Local_9.f_43]), func_6(5), 866112557);
								}
								Jump @549; //curOff = 537
								Jump @549; //curOff = 540
							}
						}
					}
				}
			}
			default:
				break;
	}
}

bool func_16()
{
	return Global_1425247->f_53;
}

void func_17()
{
	iVar0 = Local_9.f_43;
	iVar1 = func_24(&(Local_9.f_4[iVar0]));
	if (!func_53(iVar1))
	{
		return;
	}
	iVar2 = func_33(iVar1);
	Local_9.f_44[func_33(iVar1)] = func_64(&(Local_9.f_4[iVar0]));
	func_65(iVar0, &(Local_9.f_44[iVar2]), iVar2);
}

bool func_18(int iParam0)
{
	if (func_16())
	{
		return false;
	}
	if (Local_9.f_47)
	{
		return false;
	}
	if (func_64(&(Local_9.f_4[iParam0])) == 0)
	{
		return false;
	}
	return func_25(&(Local_9.f_4[iParam0])) == 427136516;
}

int func_19(int iParam0)
{
	switch (iParam0)
	{
		case 581914968:
			return 0;
		case -1135265458:
			return 1;
		case -204990980:
			return 2;
		case 191810668:
			return 3;
		case 811595622:
			return 4;
		case -1622621761:
			return 5;
		case -607335704:
			return 6;
		case 1610351013:
			return 7;
		case -1591149431:
			return 8;
		case 1089618026:
			return 9;
		case 628479678:
			return 10;
		case 51531122:
			return 11;
		case 1176666639:
			return 12;
		case -947916363:
			return 13;
		case 1129394776:
			return 14;
		case 754345461:
			return 15;
		case -307358511:
			return 16;
		case 2110824426:
			return 17;
		case -568384875:
			return 18;
		case -372443002:
			return 19;
		case -398091677:
			return 20;
		case 1398216266:
			return 21;
		case 1376520660:
			return 22;
		case -1761439609:
			return 23;
		case -1815939956:
			return 24;
		case -55979384:
			return 25;
		case 849826687:
			return 26;
		case -1241222984:
			return 27;
		case 532296387:
			return 28;
		case 230711733:
			return 29;
		case 1287277822:
			return 30;
		case 1783177390:
			return 31;
		case -2101408762:
			return 32;
		case -1738520838:
			return 33;
		case 1006082220:
			return 34;
		case 741921176:
			return 35;
		case 1956723308:
			return 36;
		default:
			break;
	}
	return -1;
}

bool func_20(int iParam0)
{
	return func_34(&(Global_40.f_12000), iParam0, 2);
}

int func_21(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 0;
		case 3:
			return 2;
		case 4:
			return 2;
		case 5:
			return 0;
		case 6:
			return 2;
		case 7:
			return 1;
		case 8:
			return 2;
		case 9:
			return 1;
		case 10:
			return 0;
		case 11:
			return 2;
		case 12:
			return 2;
		case 13:
			return 2;
		case 14:
			return 0;
		case 15:
			return 2;
		case 16:
			return 2;
		case 17:
			return 2;
		case 18:
			return 2;
		case 19:
			return 2;
		case 20:
			return 1;
		case 21:
			return 2;
		case 22:
			return 0;
		case 23:
			return 2;
		case 24:
			return 2;
		case 25:
			return 2;
		case 26:
			return 2;
		case 27:
			return 0;
		case 28:
			return 1;
		case 29:
			return 2;
		case 30:
			return 2;
		case 31:
			return 2;
		case 32:
			return 1;
		case 33:
			return 0;
		case 34:
			return 1;
		case 35:
			return 2;
		case 36:
			return 2;
		default:
			break;
	}
	return -1;
}

bool func_22(int iParam0)
{
	if (func_20(iParam0))
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 <= (func_66(iParam0) - 1))
	{
		if (func_68(func_67(iParam0, iVar0)))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_23(int iParam0)
{
	iVar0 = &Local_9.f_50[iParam0];
	if (0 == &Local_9.f_4[iVar0])
	{
		return;
	}
	func_69(iParam0);
	if (func_53(iParam0))
	{
		if (func_25(&(Local_9.f_4[iVar0])) != 369178237)
		{
			if (!func_70(iParam0, &(Local_9.f_44[func_33(iParam0)])))
			{
				_databinding_write_data_bool_from_parent(&(Local_9.f_4[iVar0]), func_6(6), 1);
				return;
			}
		}
	}
	_databinding_write_data_hash_string_from_parent(&(Local_9.f_4[iVar0]), func_6(5), func_39(iParam0));
	_databinding_write_data_bool_from_parent(&(Local_9.f_4[iVar0]), func_6(6), 1);
}

int func_24(int iParam0)
{
	return _databinding_read_data_int_from_parent(iParam0, func_6(17));
}

int func_25(int iParam0)
{
	return _databinding_read_data_hash_string_from_parent(iParam0, func_6(5));
}

bool func_26(int iParam0)
{
	return (((func_71() || func_72()) || func_34(&(Global_1425247->f_3), iParam0, 2)) || func_73(iParam0));
}

int func_27(int iParam0)
{
	if (func_53(iParam0))
	{
		return 2;
	}
	if (func_74(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_28(int iParam0)
{
	iVar0 = func_24(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (!func_20(iVar0))
	{
		return;
	}
	if (!func_75(iParam0))
	{
		if (!func_52(iVar0))
		{
			if (func_40(iVar0))
			{
				func_76(iVar0);
			}
		}
		return;
	}
	func_77(iVar0);
	switch (iVar0)
	{
		case 5:
			func_78();
			break;
	}
}

void func_29(int iParam0)
{
	iVar0 = func_24(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (!func_20(iVar0))
	{
		return;
	}
	iVar1 = func_64(iParam0);
	if (func_40(iVar0))
	{
		if (iVar1 <= 0)
		{
			func_79(iVar0);
		}
	}
	else if (iVar1 == 1)
	{
		func_77(iVar0);
	}
}

void func_30(int iParam0)
{
	iVar3 = func_24(iParam0);
	if (!func_53(iVar3))
	{
		return;
	}
	iVar0 = func_33(iVar3);
	iVar1 = func_48(iVar0);
	iVar2 = func_80(iVar0);
	if (iVar1 == iVar2 && iVar2 != -1)
	{
		return;
	}
	iVar4 = func_43(iVar0);
	if (iVar1 == iVar4 && iVar4 != -1)
	{
		return;
	}
	if (iVar1 == -1)
	{
		if (iVar2 == -1)
		{
			if (iVar4 != -1)
			{
				func_76(iVar4);
			}
		}
		else
		{
			func_79(iVar2);
		}
	}
	else if (func_20(iVar1) && !func_26(iVar1))
	{
		if (iVar4 != -1)
		{
			func_76(iVar4);
		}
		func_77(iVar1);
	}
}

int func_31(int iParam0)
{
	return _money_get_cash_balance();
}

int func_32()
{
	return Global_1425247->f_58;
}

int func_33(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 0;
		case 2:
			return 0;
		case 3:
			return 0;
		case 4:
			return 0;
		case 5:
			return 0;
		case 6:
			return 0;
		case 7:
			return 0;
		case 8:
			return 0;
		case 9:
			return 0;
		case 10:
			return 0;
		case 11:
			return 0;
		case 12:
			return 0;
		case 13:
			return 0;
		case 14:
			return 0;
		case 15:
			return 1;
		case 16:
			return 1;
		case 17:
			return 1;
		case 18:
			return 1;
		case 19:
			return 1;
		case 20:
			return 0;
		case 21:
			return 0;
		case 22:
			return 0;
		case 23:
			return 0;
		case 24:
			return 0;
		case 25:
			return 0;
		case 26:
			return 0;
		case 27:
			return 0;
		case 28:
			return 0;
		case 29:
			return 0;
		case 30:
			return 0;
		case 31:
			return 0;
		case 32:
			return 0;
		case 33:
			return 0;
		case 34:
			return 0;
		case 35:
			return 0;
		case 36:
			return 0;
		default:
			break;
	}
	return -1;
}

bool func_34(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

char* func_35(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CHEAT_INFINITE_AMMO";
		case 1:
			return "CHEAT_BASIC_WEAPONS";
		case 2:
			return "CHEAT_HEAVY_WEAPONS";
		case 3:
			return "CHEAT_STEALTH_WEAPONS";
		case 4:
			return "CHEAT_GUNSLINGER";
		case 5:
			return "CHEAT_REMOVE_FOG_OF_WAR";
		case 6:
			return "CHEAT_ADD_MONEY";
		case 7:
			return "CHEAT_UNLOCK_ALL_PLAYER_OUTFITS";
		case 8:
			return "CHEAT_UNLOCK_ALL_RECIPES";
		case 9:
			return "CHEAT_INCREASE_CAMP_UPGRADES_TO_MAX";
		case 10:
			return "CHEAT_INCREASE_HONOR_TO_MAX";
		case 11:
			return "CHEAT_DECREASE_HONOR_TO_MIN";
		case 12:
			return "CHEAT_RESET_HONOR_TO_NEUTRAL";
		case 13:
			return "CHEAT_INFINITE_DEADEYE";
		case 14:
			return "CHEAT_INFINITE_STAMINA";
		case 15:
			return "CHEAT_SET_DEADEYE_TO_LEVEL_1";
		case 16:
			return "CHEAT_SET_DEADEYE_TO_LEVEL_2";
		case 17:
			return "CHEAT_SET_DEADEYE_TO_LEVEL_3";
		case 18:
			return "CHEAT_SET_DEADEYE_TO_LEVEL_4";
		case 19:
			return "CHEAT_SET_DEADEYE_TO_LEVEL_5";
		case 20:
			return "CHEAT_SET_RPG_TANKS_TO_FULL";
		case 21:
			return "CHEAT_SET_RPG_TANK_STAT_LEVEL_TO_FULL";
		case 22:
			return "CHEAT_SET_RPG_TANKS_TO_FULL_AND_OVERPOWERED";
		case 23:
			return "CHEAT_INCREASE_HORSE_BOND_TO_MAX";
		case 24:
			return "CHEAT_SET_HORSE_TO_SPAWN_NEAR_PLAYER_ON_WHISTLE";
		case 25:
			return "CHEAT_BECOME_DRUNK";
		case 26:
			return "CHEAT_SPAWN_RACE_HORSE";
		case 27:
			return "CHEAT_SPAWN_WAR_HORSE";
		case 28:
			return "CHEAT_SPAWN_SUPERIOR_HORSE";
		case 29:
			return "CHEAT_SPAWN_RANDOM_HORSE";
		case 30:
			return "CHEAT_SPAWN_STAGECOACH";
		case 31:
			return "CHEAT_SPAWN_WAGON";
		case 32:
			return "CHEAT_SPAWN_BUGGY";
		case 33:
			return "CHEAT_SPAWN_CIRCUS_WAGON";
		case 34:
			return "CHEAT_INCREASE_WANTED_LEVEL_BY_1";
		case 35:
			return "CHEAT_DECREASE_WANTED_LEVEL_BY_1";
		case 36:
			return "CHEAT_CLEAR_ALL_BOUNTIES_AND_LOCKDOWN_AREAS";
		default:
			break;
	}
	return "UNKNOWN_CHEAT";
}

char* func_36(int iParam0)
{
	switch (func_33(iParam0))
	{
		case 0:
			return func_35(iParam0);
		case 1:
			return "CHEAT_DEADEYE_LEVEL";
		default:
			break;
	}
	return "";
}

char* func_37(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CHEAT_INFINITE_AMMO_DESC";
		case 1:
			return "CHEAT_BASIC_WEAPONS_DESC";
		case 2:
			return "CHEAT_HEAVY_WEAPONS_DESC";
		case 3:
			return "CHEAT_STEALTH_WEAPONS_DESC";
		case 4:
			return "CHEAT_GUNSLINGER_DESC";
		case 5:
			return "CHEAT_REMOVE_FOG_OF_WAR_DESC";
		case 6:
			return "CHEAT_ADD_MONEY_DESC";
		case 7:
			return "CHEAT_UNLOCK_ALL_PLAYER_OUTFITS_DESC";
		case 8:
			return "CHEAT_UNLOCK_ALL_RECIPES_DESC";
		case 9:
			return "CHEAT_INCREASE_CAMP_UPGRADES_TO_MAX_DESC";
		case 10:
			return "CHEAT_INCREASE_HONOR_TO_MAX_DESC";
		case 11:
			return "CHEAT_DECREASE_HONOR_TO_MIN_DESC";
		case 12:
			return "CHEAT_RESET_HONOR_TO_NEUTRAL_DESC";
		case 13:
			return "CHEAT_INFINITE_DEADEYE_DESC";
		case 14:
			return "CHEAT_INFINITE_STAMINA_DESC";
		case 15:
			return "CHEAT_SET_DEADEYE_TO_LEVEL_1_DESC";
		case 16:
			return "CHEAT_SET_DEADEYE_TO_LEVEL_2_DESC";
		case 17:
			return "CHEAT_SET_DEADEYE_TO_LEVEL_3_DESC";
		case 18:
			return "CHEAT_SET_DEADEYE_TO_LEVEL_4_DESC";
		case 19:
			return "CHEAT_SET_DEADEYE_TO_LEVEL_5_DESC";
		case 20:
			return "CHEAT_SET_RPG_TANKS_TO_FULL_DESC";
		case 21:
			return "CHEAT_SET_RPG_TANK_STAT_LEVEL_TO_FULL_DESC";
		case 22:
			return "CHEAT_SET_RPG_TANKS_TO_FULL_AND_OVERPOWERED_DESC";
		case 23:
			return "CHEAT_INCREASE_HORSE_BOND_TO_MAX_DESC";
		case 24:
			return "CHEAT_SET_HORSE_TO_SPAWN_NEAR_PLAYER_ON_WHISTLE_DESC";
		case 25:
			return "CHEAT_BECOME_DRUNK_DESC";
		case 26:
			return "CHEAT_SPAWN_RACE_HORSE_DESC";
		case 27:
			return "CHEAT_SPAWN_WAR_HORSE_DESC";
		case 28:
			return "CHEAT_SPAWN_SUPERIOR_HORSE_DESC";
		case 29:
			return "CHEAT_SPAWN_RANDOM_HORSE_DESC";
		case 30:
			return "CHEAT_SPAWN_STAGECOACH_DESC";
		case 31:
			return "CHEAT_SPAWN_WAGON_DESC";
		case 32:
			return "CHEAT_SPAWN_BUGGY_DESC";
		case 33:
			return "CHEAT_SPAWN_CIRCUS_WAGON_DESC";
		case 34:
			return "CHEAT_INCREASE_WANTED_LEVEL_BY_1_DESC";
		case 35:
			return "CHEAT_DECREASE_WANTED_LEVEL_BY_1_DESC";
		case 36:
			return "CHEAT_CLEAR_ALL_BOUNTIES_AND_LOCKDOWN_AREAS_DESC";
		default:
			break;
	}
	return "UNKNOWN_CHEAT";
}

int func_38(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 268532472;
		case 1:
			return 268532472;
		case 2:
			return 0;
		default:
			break;
	}
	return 0;
}

int func_39(int iParam0)
{
	if (func_53(iParam0))
	{
		iVar0 = func_33(iParam0);
		if (func_47(iVar0))
		{
			if (func_26(iParam0))
			{
				return 866112557;
			}
			else if (func_20(iParam0))
			{
				return 427136516;
			}
			else
			{
				return 1726108579;
			}
		}
		else
		{
			return 369178237;
		}
	}
	if (func_20(iParam0))
	{
		if (func_26(iParam0))
		{
			return 866112557;
		}
		else if (iParam0 == 6)
		{
			if (Local_9.f_49 <= 0 || func_32() >= Local_9.f_49)
			{
				return 866112557;
			}
			else
			{
				return 427136516;
			}
		}
		else if (func_60(iParam0) != 0)
		{
			if (func_61())
			{
				return 866112557;
			}
			else
			{
				return 427136516;
			}
		}
		else if (func_40(iParam0))
		{
			iVar1 = func_27(iParam0);
			if (iVar1 == 0)
			{
				return 866112557;
			}
			else
			{
				return 427136516;
			}
		}
		else
		{
			return 427136516;
		}
	}
	return 369178237;
}

bool func_40(int iParam0)
{
	return func_34(Global_1425247, iParam0, 2);
}

int func_41(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_42(int iParam0)
{
	iVar1 = func_80(iParam0);
	if (iVar1 == -1)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= (func_81(iParam0) - 1))
	{
		if (func_82(iParam0, iVar0) == iVar1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_43(int iParam0)
{
	iVar1 = func_81(iParam0);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		iVar2 = func_82(iParam0, iVar0);
		if (iVar2 == -1)
		{
		}
		else if (func_83(iVar2) == 4)
		{
			return iVar2;
		}
		iVar0++;
	}
	return -1;
}

int func_44(int iParam0, int iParam1)
{
	iVar1 = func_81(iParam0);
	if (iParam1 == -1)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		if (iParam1 == func_82(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_45(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 36)
	{
		iVar2 = iVar0;
		if (func_33(iVar2) == iParam0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_46(int iParam0)
{
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 712650642;
			break;
		case 1:
			iVar0 = -283422691;
			break;
		case 2:
			iVar0 = 14021522;
			break;
		case 3:
			iVar0 = 232066452;
			break;
		case 4:
			iVar0 = 461023455;
			break;
		case 5:
			iVar0 = 709936779;
			break;
	}
	return iVar0;
}

bool func_47(int iParam0)
{
	iVar1 = func_81(iParam0);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		iVar2 = func_82(iParam0, iVar0);
		if (iVar2 == -1)
		{
		}
		else if (func_20(iVar2))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_48(int iParam0)
{
	if (&Local_9.f_44[iParam0] == 0)
	{
		return -1;
	}
	return func_82(iParam0, (&Local_9.f_44[iParam0] - 1));
}

bool func_49(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

int func_50(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -2093359759;
		case 1:
			return -949812163;
		case 2:
			return 401446359;
		default:
			break;
	}
	return 0;
}

bool func_51(int iParam0)
{
	iVar0 = func_24(iParam0);
	iVar1 = func_27(iVar0);
	switch (iVar1)
	{
		case 0:
			return func_75(iParam0);
		case 1:
			return func_64(iParam0) != 0;
		case 2:
			return func_64(iParam0) != 0;
		default:
			break;
	}
	return false;
}

bool func_52(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return false;
		case 1:
			return false;
		case 2:
			return false;
		case 3:
			return false;
		case 4:
			return false;
		case 5:
			return true;
		case 6:
			return false;
		case 7:
			return true;
		case 8:
			return true;
		case 9:
			return true;
		case 10:
			return false;
		case 11:
			return false;
		case 12:
			return false;
		case 13:
			return false;
		case 14:
			return false;
		case 15:
			return false;
		case 16:
			return false;
		case 17:
			return false;
		case 18:
			return false;
		case 19:
			return false;
		case 20:
			return false;
		case 21:
			return true;
		case 22:
			return false;
		case 23:
			return false;
		case 24:
			return false;
		case 25:
			return false;
		case 26:
			return false;
		case 27:
			return false;
		case 28:
			return false;
		case 29:
			return false;
		case 30:
			return false;
		case 31:
			return false;
		case 32:
			return false;
		case 33:
			return false;
		case 34:
			return false;
		case 35:
			return false;
		case 36:
			return false;
		default:
			break;
	}
	return false;
}

bool func_53(int iParam0)
{
	iVar0 = func_33(iParam0);
	return (iVar0 != -1 && iVar0 != 0);
}

char* func_54(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "CHEAT_SET_DEADEYE_TO_LEVEL_DESC";
		default:
			break;
	}
	return "";
}

void func_55(int iParam0)
{
	uVar1 = &Local_9.f_4[&Local_9.f_88[iParam0]];
	iVar0 = func_48(iParam0);
	if (iVar0 == -1)
	{
		if (func_47(iParam0))
		{
			_databinding_write_data_hash_string_from_parent(uVar1, func_6(1), get_hash_key(func_54(iParam0)));
			_databinding_write_data_hash_string_from_parent(uVar1, func_6(18), func_46(0));
		}
		else
		{
			_databinding_write_data_hash_string_from_parent(uVar1, func_6(1), get_hash_key("CHEAT_UNLOCK_DESCRIPTION"));
		}
	}
	else
	{
		_databinding_write_data_hash_string_from_parent(uVar1, func_6(1), get_hash_key(func_8(&(Local_9.f_88[iParam0]))));
		_databinding_write_data_hash_string_from_parent(uVar1, func_6(18), func_46(&(Local_9.f_44[iParam0])));
	}
}

int func_56(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 36)
	{
		iVar1 = iVar0;
		iVar2 = func_59(iVar1);
		if (iVar2 != iParam0)
		{
		}
		else if (!func_40(iVar1))
		{
		}
		else
		{
			return iVar1;
		}
		iVar0++;
	}
	return -1;
}

var func_57(int iParam0)
{
	return _databinding_read_data_int_from_parent(iParam0, func_6(1));
}

bool func_58(int iParam0)
{
	iVar0 = func_59(iParam0);
	return (iVar0 != -1 && iVar0 != 0);
}

int func_59(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 0;
		case 2:
			return 0;
		case 3:
			return 0;
		case 4:
			return 0;
		case 5:
			return 0;
		case 6:
			return 0;
		case 7:
			return 0;
		case 8:
			return 0;
		case 9:
			return 0;
		case 10:
			return 2;
		case 11:
			return 2;
		case 12:
			return 2;
		case 13:
			return 0;
		case 14:
			return 0;
		case 15:
			return 0;
		case 16:
			return 0;
		case 17:
			return 0;
		case 18:
			return 0;
		case 19:
			return 0;
		case 20:
			return 0;
		case 21:
			return 0;
		case 22:
			return 0;
		case 23:
			return 0;
		case 24:
			return 0;
		case 25:
			return 0;
		case 26:
			return 1;
		case 27:
			return 1;
		case 28:
			return 1;
		case 29:
			return 1;
		case 30:
			return 1;
		case 31:
			return 1;
		case 32:
			return 1;
		case 33:
			return 1;
		case 34:
			return 3;
		case 35:
			return 3;
		case 36:
			return 3;
		default:
			break;
	}
	return -1;
}

int func_60(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 0;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			return 0;
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
		case 24:
		case 25:
			return 0;
		case 26:
		case 27:
		case 28:
		case 29:
			return 2;
		case 30:
		case 31:
		case 32:
		case 33:
			return 1;
		case 34:
		case 35:
		case 36:
			return 0;
		default:
			break;
	}
	return 0;
}

bool func_61()
{
	return Global_1425247->f_76.f_1 != -1;
}

int func_62(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_63(int iParam0)
{
	Global_1425247->f_58 = iParam0;
}

int func_64(int iParam0)
{
	return _databinding_read_data_int_from_parent(iParam0, func_6(9));
}

void func_65(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_25(&(Local_9.f_4[iParam0]));
	if (iParam1 == 0)
	{
		_databinding_write_data_hash_string_from_parent(&(Local_9.f_4[iParam0]), func_6(5), 427136516);
		_databinding_write_data_hash_string_from_parent(&(Local_9.f_4[iParam0]), func_6(18), func_46(iParam1));
		return;
	}
	iVar1 = func_82(iParam2, (iParam1 - 1));
	if (iVar1 == -1)
	{
		_databinding_write_data_hash_string_from_parent(&(Local_9.f_4[iParam0]), func_6(5), 369178237);
		return;
	}
	if (func_20(iVar1))
	{
		if (iVar0 != 427136516)
		{
			_databinding_write_data_hash_string_from_parent(&(Local_9.f_4[iParam0]), func_6(5), 427136516);
		}
	}
	else if (iVar0 != 1726108579)
	{
		_databinding_write_data_hash_string_from_parent(&(Local_9.f_4[iParam0]), func_6(5), 1726108579);
	}
	_databinding_write_data_hash_string_from_parent(&(Local_9.f_4[iParam0]), func_6(18), func_46(iParam1));
}

int func_66(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 2:
			return 3;
		case 5:
			return 3;
		case 10:
			return 3;
		case 14:
			return 3;
		case 22:
			return 3;
		case 27:
			return 3;
		case 33:
			return 3;
		default:
			break;
	}
	return 0;
}

int func_67(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return func_84(iParam1);
		case 2:
			return func_85(iParam1);
		case 5:
			return func_86(iParam1);
		case 10:
			return func_87(iParam1);
		case 14:
			return func_88(iParam1);
		case 22:
			return func_89(iParam1);
		case 27:
			return func_90(iParam1);
		case 33:
			return func_91(iParam1);
		default:
			break;
	}
	return 0;
}

bool func_68(int iParam0)
{
	return func_92(iParam0, 1, 0);
}

void func_69(int iParam0)
{
	iVar0 = iParam0;
	if (func_49(&(Global_40.f_12000), iVar0, 2))
	{
	}
	func_93(iParam0, 2);
}

bool func_70(int iParam0, int iParam1)
{
	iVar0 = func_33(iParam0);
	if (iParam1 == 0)
	{
		return false;
	}
	return func_82(iVar0, (iParam1 - 1)) == iParam0;
}

var func_71()
{
	return Global_1425247->f_56;
}

var func_72()
{
	return Global_1425247->f_57;
}

bool func_73(int iParam0)
{
	return func_34(&(Global_1425247->f_9), iParam0, 2);
}

bool func_74(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return true;
		case 1:
			return true;
		case 2:
			return true;
		case 3:
			return true;
		case 4:
			return true;
		case 5:
			return false;
		case 6:
			return false;
		case 7:
			return false;
		case 8:
			return false;
		case 9:
			return false;
		case 10:
			return false;
		case 11:
			return false;
		case 12:
			return false;
		case 13:
			return true;
		case 14:
			return true;
		case 15:
			return true;
		case 16:
			return true;
		case 17:
			return true;
		case 18:
			return true;
		case 19:
			return true;
		case 20:
			return false;
		case 21:
			return false;
		case 22:
			return false;
		case 23:
			return false;
		case 24:
			return true;
		case 25:
			return true;
		case 26:
			return false;
		case 27:
			return false;
		case 28:
			return false;
		case 29:
			return false;
		case 30:
			return false;
		case 31:
			return false;
		case 32:
			return false;
		case 33:
			return false;
		case 34:
			return false;
		case 35:
			return false;
		case 36:
			return false;
		default:
			break;
	}
	return true;
}

bool func_75(int iParam0)
{
	return _databinding_read_data_bool_from_parent(iParam0, func_6(9));
}

void func_76(int iParam0)
{
	func_94(iParam0);
	if (func_20(iParam0))
	{
		func_93(iParam0, 2);
	}
	else
	{
		func_93(iParam0, 0);
	}
}

void func_77(int iParam0)
{
	iVar0 = iParam0;
	if (func_26(iParam0))
	{
		func_95(12);
		return;
	}
	if (!func_20(iParam0))
	{
		return;
	}
	iVar1 = func_96(iParam0);
	if (iVar1 != 0)
	{
		switch (iVar1)
		{
			case 0:
				break;
			case 1:
				func_95(5);
				break;
			case 2:
				func_95(6);
				break;
			case 4:
				if (func_97(59))
				{
					func_95(9);
				}
				else
				{
					func_95(8);
				}
				break;
			case 3:
				func_95(7);
				break;
			case 5:
				func_95(11);
				break;
			default:
				break;
		}
		return;
	}
	if (func_60(iParam0) != 0)
	{
		if (func_98() != iParam0)
		{
			func_99(iParam0);
		}
	}
	else if (func_83(iParam0) == 4)
	{
		return;
	}
	if (func_49(Global_1425247, iVar0, 2))
	{
	}
	else
	{
		return;
	}
	func_93(iParam0, 4);
}

void func_78()
{
	switch (func_83(5))
	{
		case 4:
			if (func_26(5))
			{
			}
			else
			{
				func_100(5);
				func_101(1);
				func_93(5, 3);
			}
			default:
				break;
	}
}

void func_79(int iParam0)
{
	if (func_26(iParam0))
	{
		func_95(13);
		return;
	}
	func_94(iParam0);
	func_93(iParam0, 5);
}

var func_80(int iParam0)
{
	return &(Global_1425247->f_50[iParam0]);
}

int func_81(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 5;
		default:
			break;
	}
	return -1;
}

int func_82(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			break;
		case 1:
			return func_102(iParam1);
		default:
			break;
	}
	return -1;
}

int func_83(int iParam0)
{
	return &(Global_1425247->f_12[iParam0]);
}

int func_84(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -14157738;
		case 1:
			return 1767753378;
		case 2:
			return 1566650197;
		default:
			break;
	}
	return 0;
}

int func_85(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 109840158;
		case 1:
			return -849973848;
		case 2:
			return -1594812622;
		default:
			break;
	}
	return 0;
}

int func_86(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 903996873;
		case 1:
			return 1012860904;
		case 2:
			return -358162791;
		default:
			break;
	}
	return 0;
}

int func_87(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 706727493;
		case 1:
			return -1680391208;
		case 2:
			return 368626453;
		default:
			break;
	}
	return 0;
}

int func_88(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1454682982;
		case 1:
			return -1253105631;
		case 2:
			return 543847666;
		default:
			break;
	}
	return 0;
}

int func_89(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 18296369;
		case 1:
			return -1261034125;
		case 2:
			return -634222073;
		default:
			break;
	}
	return 0;
}

int func_90(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -279147844;
		case 1:
			return 1787203230;
		case 2:
			return 662019373;
		default:
			break;
	}
	return 0;
}

int func_91(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -413074747;
		case 1:
			return 1737771952;
		case 2:
			return 1032348365;
		default:
			break;
	}
	return 0;
}

bool func_92(int iParam0, int iParam1, bool bParam2)
{
	if (!func_103(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_104(iParam0);
	if (iVar0 == -427144552)
	{
		if (has_ped_got_weapon(Global_35, iParam0, 0, false))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (iVar0 == 307971639)
	{
		if (!func_105(iParam0, 1))
		{
			return false;
		}
	}
	return func_106(iParam0, 0, bParam2) >= iParam1;
}

void func_93(int iParam0, int iParam1)
{
	Global_1425247->f_12[iParam0] = iParam1;
}

void func_94(int iParam0)
{
	if (func_107(Global_1425247, iParam0, 2))
	{
	}
}

void func_95(int iParam0)
{
	iVar0 = _0xc17f69e1418cd11f(1);
	if (iVar0 != 0)
	{
		_0xdd1232b332cbb9e7(1, 1, 0);
	}
	func_109(func_108(iParam0), 10000, 0, 0, 0, 1);
}

int func_96(int iParam0)
{
	if (func_110())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			break;
		case 5:
		case 6:
		case 7:
		case 8:
			break;
		case 9:
			if (func_111())
			{
				return 4;
			}
			if (Global_43891)
			{
				return 3;
			}
			break;
		case 10:
		case 11:
		case 12:
			if (func_112(0))
			{
				return 2;
			}
			break;
		case 13:
		case 14:
			break;
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			if (func_113(0, 0, 1))
			{
				return 1;
			}
			break;
		case 20:
		case 21:
		case 22:
			break;
		case 23:
		case 24:
			if (Global_43891)
			{
				return 3;
			}
			break;
		case 25:
			if (func_113(0, 0, 1))
			{
				return 1;
			}
			if (func_110())
			{
				return 1;
			}
			break;
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
			if (func_113(0, 0, 1))
			{
				return 1;
			}
			if (Global_1394141->f_1328)
			{
				return 1;
			}
			if (Global_43891)
			{
				return 3;
			}
			if (func_111())
			{
				return 4;
			}
			if (func_112(0))
			{
				return 2;
			}
			if (Global_1430231->f_4)
			{
				return 1;
			}
			break;
		case 34:
			if (func_97(59))
			{
				if (func_114() == 22)
				{
					return 5;
				}
			}
		case 35:
		case 36:
			if (func_113(0, 0, 1))
			{
				return 1;
			}
			if (Global_1394141->f_1328)
			{
				return 1;
			}
			if (func_112(0))
			{
				return 2;
			}
			if (Global_1430231->f_4)
			{
				return 1;
			}
			break;
		default:
			break;
	}
	return 0;
}

bool func_97(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_115((*Global_1835011)[iParam0]->f_1, 1);
	}
	return (_unlock_is_unlocked((*Global_1835011)[iParam0]->f_2) && !_unlock_is_visible((*Global_1835011)[iParam0]->f_2));
}

int func_98()
{
	return Global_1425247->f_76.f_1;
}

void func_99(int iParam0)
{
	Global_1425247->f_76.f_2 = iParam0;
}

void func_100(int iParam0)
{
	func_116(iParam0);
}

void func_101(bool bParam0)
{
	set_minimap_hide_fow(bParam0);
	if (bParam0)
	{
		_reveal_minimap_fow(0);
	}
	else
	{
		_reset_minimap_fow(0);
	}
}

int func_102(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15;
		case 1:
			return 16;
		case 2:
			return 17;
		case 3:
			return 18;
		case 4:
			return 19;
		default:
			break;
	}
	return -1;
}

bool func_103(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_104(int iParam0)
{
	if (!func_103(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_105(int iParam0, int iParam1)
{
	if (!func_103(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_117(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_118("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_119(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_120(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_121(iVar1);
				return true;
			}
			iVar3++;
		}
		func_121(iVar1);
	}
	return false;
}

int func_106(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_103(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_104(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_117(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_122(iParam0, 0);
	}
	uVar2 = _0xe787f05dfc977bde(func_123(bParam2), iParam0, 0);
	return uVar2;
}

bool func_107(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	clear_bit((*uParam0)[iVar0], iVar1);
	return bVar2;
}

char* func_108(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CHEAT_FAIL_TO_FIND_CREATE_LOCATION";
		case 1:
			return "CHEAT_FAIL_TO_CREATE";
		case 3:
			return "CHEAT_ADDED_OUTFITS";
		case 2:
			return "CHEAT_FAILED_TO_ADD_OUTFITS";
		case 4:
			return "CHEAT_UNLOCKED_RECIPES";
		case 5:
			return "CHEAT_UNABLE_TO_ACTIVATE";
		case 6:
			return "CHEAT_UNABLE_TO_ACTIVATE_SHOP";
		case 8:
			return "CHEAT_UNABLE_TO_ACTIVATE_CAMP";
		case 9:
			return "CHEAT_UNABLE_TO_ACTIVATE_HOME";
		case 7:
			return "CHEAT_UNABLE_TO_ACTIVATE_GUAMA";
		case 10:
			return "CHEAT_WEAPON_ACTIVATE";
		case 11:
			return "CHEAT_INVALID_LOCATION";
		case 12:
			return "CHEAT_UNABLE_TO_ACTIVATE_DISABLED";
		case 13:
			return "CHEAT_UNABLE_TO_DEACTIVATE_DISABLED";
		case 14:
			return "CHEAT_DISABLED_WHILE_ACTIVE";
		default:
			break;
	}
	return "INVALID_CHEAT_HELP";
}

var func_109(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_110()
{
	return &Global_1956584;
}

bool func_111()
{
	return func_124(32768);
}

bool func_112(bool bParam0)
{
	if (bParam0)
	{
		return Global_1914319->f_17370;
	}
	return (Global_1914319->f_17370 || Global_1914319->f_18996.f_1);
}

bool func_113(int iParam0, bool bParam1, bool bParam2)
{
	if (Global_1572887->f_12 != -1)
	{
		if ((bParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1898164->f_163;
		}
		if ((bParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1898164->f_164;
		}
		if (func_125())
		{
			return true;
		}
		if (Global_1058888->f_3 && !Global_1572887->f_8)
		{
			if ((*Global_1055058)[network_player_id_to_int()]->f_114 && network_is_in_tutorial_session())
			{
				return true;
			}
		}
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1898164->f_163;
		}
		else
		{
			return Global_1898164->f_164;
		}
	}
	if (Global_1898164->f_1[0]->f_2 == 8)
	{
		iVar0 = func_126(&(Global_1898164->f_1[0]));
		if (func_127(iVar0) && func_128((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_129(&(Global_1898164->f_1[0])))
	{
		return true;
	}
	if ((Global_1935630 && 40959 & (-1 - iParam0)) != 0)
	{
		return true;
	}
	if (!bParam1)
	{
		if ((get_game_timer() - 5000) < &Global_1898438)
		{
			return true;
		}
	}
	switch (Global_1898164->f_1[0]->f_2)
	{
		case 0:
			return false;
		case 1:
			return iParam0 & 1 == 0;
		case 4:
			return iParam0 & 2 == 0;
		case 6:
			return iParam0 & 4 == 0;
		case 2:
			return iParam0 & 16 == 0;
		case 5:
			return iParam0 & 32 == 0;
		case 9:
			return iParam0 & 64 == 0;
		case 8:
			return iParam0 & 8 == 0;
		case 10:
			return iParam0 & 512 == 0;
		case 3:
			return iParam0 & 128 == 0;
		case 11:
			return iParam0 & 256 == 0;
		default:
			break;
	}
	return false;
}

int func_114()
{
	return Global_1894899->f_2;
}

int func_115(int iParam0, bool bParam1)
{
	switch (func_130(iParam0))
	{
		case 5:
			return 1;
		case 6:
			if (bParam1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_116(int iParam0)
{
	iVar0 = iParam0;
	if (func_49(&(Global_1425247->f_6), iVar0, 2))
	{
	}
	func_14();
	_unlock_set_unlocked(-816321659, false);
}

int func_117(int iParam0, int iParam1)
{
	if (!func_103(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_104(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_131(iParam0, 1399091007))
	{
		func_132(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_118(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_123(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_119(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 < 0)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		return false;
	}
	if (!_0x82fa24c3d3fcd9b7(iParam2, iParam1, uParam0))
	{
		return false;
	}
	return true;
}

bool func_120(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

int func_121(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!_0x42a2f33a1942e865(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_122(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_133(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_135(&Var0, func_134(0));
	}
	if (!func_136(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_121(iVar14);
	return uVar15;
}

int func_123(bool bParam0)
{
	if (func_137() == -1)
	{
		if (!bParam0 && _0x7c7e4ab748ea3b07())
		{
			return 5;
		}
		return 1;
	}
	if (!bParam0 && _inventory_get_ped_inventory_id(player_ped_id()) == 3)
	{
		return 3;
	}
	return 2;
}

bool func_124(int iParam0)
{
	switch (func_137())
	{
		case -1:
			return (Global_1357549->f_1494 && iParam0) != 0;
	}
	return false;
}

bool func_125()
{
	if (&Global_1048576)
	{
		return true;
	}
	if (Global_1572887->f_4)
	{
		return true;
	}
	if (&Global_524298)
	{
		return true;
	}
	if (&Global_1048577)
	{
		return true;
	}
	if (&Global_1051043 == -1 && Global_1572887->f_6 & 1 != 0)
	{
		return true;
	}
	return false;
}

int func_126(int iParam0)
{
	if (!func_129(iParam0))
	{
		return -1;
	}
	return func_139(func_138(iParam0));
}

bool func_127(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_128(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_129(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_130(int iParam0)
{
	if (!func_129(iParam0))
	{
		return -1;
	}
	return func_140(iParam0);
}

bool func_131(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
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

void func_132(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case 1234009870:
			*uParam1 = 1802325493;
			*uParam2 = 1681219929;
			break;
		case -1202134084:
			*uParam1 = -864693164;
			*uParam2 = 1681219929;
			break;
		case 1297050066:
			*uParam1 = -603289736;
			*uParam2 = 1232099469;
			break;
		case -1780177928:
			*uParam1 = -1803237008;
			*uParam2 = -2084181920;
			break;
		case -1467836497:
			*uParam1 = -1175521284;
			*uParam2 = 1950175060;
			break;
		case 1723805622:
			*uParam1 = -1559549888;
			*uParam2 = 1950175060;
			break;
		case -153287664:
			*uParam1 = -1650796693;
			*uParam2 = 836939099;
			break;
		case 1845082736:
			*uParam1 = -1521597660;
			*uParam2 = -1411815376;
			break;
		case 406755377:
			*uParam1 = -1288829256;
			*uParam2 = 218444191;
			break;
		case 1469029564:
			*uParam1 = 1393841762;
			*uParam2 = 218444191;
			break;
		case 45760211:
			*uParam1 = -851229814;
			*uParam2 = 1654725195;
			break;
		case -276295943:
			*uParam1 = 914704115;
			*uParam2 = 1858824185;
			break;
		case -2029793397:
			*uParam1 = -219896679;
			*uParam2 = -1330115686;
			break;
		case 2120467495:
			*uParam1 = 516838334;
			*uParam2 = -1330115686;
			break;
		case -2075613923:
			*uParam1 = -385817936;
			*uParam2 = -578347576;
			break;
		case 122656217:
			*uParam1 = 1192843172;
			*uParam2 = 231465488;
			break;
		case 2107187484:
			*uParam1 = 954871696;
			*uParam2 = -1878508229;
			break;
		case -791844268:
			*uParam1 = -1217273132;
			*uParam2 = -1878508229;
			break;
		case 305770744:
			*uParam1 = -2087227528;
			*uParam2 = 314966081;
			break;
		case 550900979:
			*uParam1 = -618066518;
			*uParam2 = 2113196069;
			break;
	}
}

struct<14> func_133(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_13 = -1;
	if (iParam0 != 0)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1591664384)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0 && iParam3 != -1591664384)
	{
		Var0.f_3 = iParam3;
	}
	if (iParam4 != 0)
	{
		Var0.f_4 = iParam4;
	}
	if (iParam5 != 0)
	{
		Var0.f_5 = iParam5;
	}
	return Var0;
}

struct<4> func_134(bool bParam0)
{
	iVar0 = func_123(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_142(923904168, func_141(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_142(923904168, func_141(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_142(923904168, func_141(bParam0), -740156546, 0);
}

void func_135(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_136(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_123(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_137()
{
	return Global_1572887->f_12;
}

int func_138(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_12106[iParam0]);
	}
	if (iParam0 < 0 || iParam0 >= 20001)
	{
		return 0;
	}
	return &(Global_1058888->f_498[iParam0]);
}

int func_139(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

int func_140(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_143(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

struct<4> func_141(bool bParam0)
{
	return func_142(1328661203, func_144(), -1591664384, bParam0);
}

struct<4> func_142(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_103(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_123(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_143(int iParam0)
{
	if (Global_1058888->f_40501 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar1 = (Global_1058888->f_40501 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if (&Global_1058888->f_40501.f_1[iVar2] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if (&Global_1058888->f_40501.f_1[iVar2] < iParam0)
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

struct<4> func_144()
{
	return Var0;
}

