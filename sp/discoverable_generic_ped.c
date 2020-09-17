void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	uLocal_268 = uVar308;
	Local_269.f_1 = ScriptParam_0.f_1;
	if (has_force_cleanup_occurred(514))
	{
		func_1(&Local_269);
	}
	if (!_does_scenario_point_exist(ScriptParam_0.f_1))
	{
		func_1(&Local_269);
	}
	while (func_2())
	{
		switch (iVar265)
		{
			case 0:
				if (func_3(&Local_269))
				{
					iLocal_267 = 1;
					if (Local_269.f_4 != -1)
					{
					}
					else
					{
						Local_269.f_4 = func_4(&Local_269);
					}
				}
				break;
			case 1:
				if (func_5(&Local_269))
				{
					func_6(&Local_269);
				}
				func_7(&Local_269);
				func_8(&Local_269);
				break;
		}
		wait(0);
	}
	func_1(&Local_269);
}

void func_1(int iParam0)
{
	func_9(iParam0);
	_0xe7282390542f570d(uVar265);
	terminate_this_thread();
}

bool func_2()
{
	if (_0x9e4ef615e307fbbe())
	{
		return false;
	}
	return true;
}

bool func_3(int iParam0)
{
	if (iVar266 == 0)
	{
		iVar0 = _get_scenario_point_type(iParam0->f_1);
		Local_269 = func_10(iVar0);
		return false;
	}
	if (func_11(iVar266, 4) || Global_40.f_8863.f_156)
	{
		func_1(iParam0);
		return false;
	}
	func_12(iParam0);
	return true;
}

int func_4(int iParam0)
{
	iVar2 = -1;
	if (is_entity_dead(Global_35))
	{
		return -1;
	}
	if (*iParam0 == -544327665)
	{
		iVar1 = 3;
	}
	else if (*iParam0 == 1120968795)
	{
		iVar1 = 2;
	}
	else if (*iParam0 == -834293086)
	{
		iVar1 = 10;
	}
	else if (*iParam0 == 1519472817)
	{
		iVar1 = 2;
	}
	else if (*iParam0 == -1859023693)
	{
		iVar1 = 11;
	}
	else if (*iParam0 == 2000209669)
	{
		iVar1 = 12;
	}
	else if (*iParam0 == -1761578407)
	{
		iVar1 = 11;
	}
	else if (*iParam0 == -1243267511)
	{
		iVar1 = 5;
	}
	else if (*iParam0 == -1272862985)
	{
		iVar1 = 4;
	}
	else if (*iParam0 == 1535254161)
	{
		iVar1 = 4;
	}
	else if (*iParam0 == 870958936)
	{
		iVar1 = 5;
	}
	else if (*iParam0 == 513110082)
	{
		iVar1 = 3;
	}
	else if (*iParam0 == -321841939)
	{
		iVar1 = 20;
	}
	else if (*iParam0 == -890175011)
	{
		iVar1 = 5;
	}
	else if (*iParam0 == 677950956)
	{
		iVar1 = 6;
	}
	else if (*iParam0 == 503180747)
	{
		iVar1 = 2;
	}
	else
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		if (iVar2 == -1)
		{
			iVar2 = iVar0;
			fVar3 = func_14(Global_35, func_13(iParam0, iVar0), 1);
		}
		else if (fVar3 > func_14(Global_35, func_13(iParam0, iVar0), 1))
		{
			iVar2 = iVar0;
			fVar3 = func_14(Global_35, func_13(iParam0, iVar0), 1);
		}
		iVar0++;
	}
	return iVar2;
}

bool func_5(int iParam0)
{
	switch (*iParam0)
	{
		case -2009137002:
		case -1960242214:
		case -1958832660:
		case -1891628345:
		case -1887999095:
		case -1787770845:
		case -1761578407:
		case -1761189332:
		case -1646022773:
		case -1636964661:
		case -1614148516:
		case -1609238411:
		case -1505275983:
		case -1300082860:
		case -1287911066:
		case -1272862985:
		case -1243267511:
		case -1109016944:
		case -1053108445:
		case -986176781:
		case -979575591:
		case -890175011:
		case -849582265:
		case -780455182:
		case -739986731:
		case -709811179:
		case -607940493:
		case -415839138:
		case -321841939:
		case -232974724:
		case -161804536:
		case -148407339:
		case 58958195:
		case 247563739:
		case 308500632:
		case 373034311:
		case 404434344:
		case 429544447:
		case 657666087:
		case 921081956:
		case 1034793488:
		case 1284679164:
		case 1519228573:
		case 1535254161:
		case 1673499939:
		case 1734766691:
		case 1982045664:
		case 1986618633:
		case 2000209669:
		case 2134589549:
			return true;
		case 677950956:
			if (func_15())
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case 1861313914:
			if (func_16(59))
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
	}
	return false;
}

void func_6(int iParam0)
{
	if (iParam0->f_5 > 0 && iParam0->f_5 < 7)
	{
		if (!func_17(iParam0))
		{
			func_18(iParam0);
			func_19(iParam0, 0);
		}
	}
	switch (iParam0->f_5)
	{
		case 0:
			if (!func_17(iParam0))
			{
				return;
			}
			if ((*iParam0 == -890175011 || *iParam0 == 677950956) || *iParam0 == -321841939)
			{
				if (func_20(iParam0))
				{
					func_19(iParam0, 7);
				}
			}
			func_21(iParam0);
			if (func_22(iParam0->f_6.f_2))
			{
				func_19(iParam0, 7);
				return;
			}
			func_19(iParam0, 1);
			break;
		case 1:
			if (func_14(Global_35, iParam0->f_6.f_2, 1) <= iParam0->f_6)
			{
				func_23(&(iParam0->f_6.f_5));
				if ((((func_11(*iParam0, 2) || func_11(*iParam0, 16)) || *iParam0 == -890175011) || *iParam0 == 677950956) || (*iParam0 == -1761578407 && func_20(iParam0)))
				{
					func_19(iParam0, 3);
				}
				else
				{
					func_19(iParam0, 2);
				}
			}
			break;
		case 2:
			if (!func_24(&(iParam0->f_6.f_5)))
			{
				set_pad_shake(0, 150, 100);
				func_25(&(iParam0->f_6.f_5));
			}
			else if (func_26(&(iParam0->f_6.f_5)) > 300)
			{
				set_pad_shake(0, 150, 100);
				func_19(iParam0, 3);
			}
			break;
		case 3:
			if (func_14(Global_35, iParam0->f_6.f_2, 1) > (iParam0->f_6 + 5f))
			{
				func_18(iParam0);
				func_19(iParam0, 1);
			}
			else if (func_27(iParam0, 0))
			{
				func_28(iParam0);
				if ((func_11(*iParam0, 2) || func_11(*iParam0, 16)) || (*iParam0 == -1761578407 && func_20(iParam0)))
				{
					func_19(iParam0, 6);
				}
				else
				{
					func_19(iParam0, 4);
				}
			}
			break;
		case 4:
			func_30(iParam0, iParam0->f_6.f_8, func_29(iParam0), 0);
			if (func_14(Global_35, iParam0->f_6.f_2, 1) > (iParam0->f_6 + 5f))
			{
				func_18(iParam0);
				func_19(iParam0, 1);
			}
			else if (func_27(iParam0, 1))
			{
				func_18(iParam0);
				func_19(iParam0, 3);
			}
			else if (func_31(iParam0))
			{
				if (!func_11(*iParam0, 16))
				{
					func_32(*iParam0, 16);
					if (func_33(iParam0->f_6.f_8))
					{
						func_34(iParam0->f_6.f_8, 0, 1);
					}
					func_35(iParam0);
					func_36(iParam0, 1);
					if (!*iParam0 == -321841939)
					{
						func_37(1, -1);
					}
				}
				else if (func_33(iParam0->f_6.f_8))
				{
					func_34(iParam0->f_6.f_8, 0, 1);
				}
				func_25(&(iParam0->f_6.f_5));
				func_19(iParam0, 5);
			}
			else if (func_38(iParam0->f_6.f_8, 1) > 0f)
			{
				if (!func_11(*iParam0, 16))
				{
					if (!func_39(iParam0->f_3, 2))
					{
						func_40(&(iParam0->f_3), 2);
						if (!*iParam0 == -1761578407 && !*iParam0 == 404434344)
						{
							func_41(iParam0);
						}
					}
					if (!*iParam0 == -1761578407 && !*iParam0 == 404434344)
					{
						set_gameplay_coord_hint(iParam0->f_6.f_2, -1, 2000, 2000, 0);
						func_42(iParam0);
					}
				}
			}
			else if (func_39(iParam0->f_3, 2))
			{
				func_43(&(iParam0->f_3), 2);
				if (!*iParam0 == -1761578407 && !*iParam0 == 404434344)
				{
					if (is_gameplay_hint_active())
					{
						stop_gameplay_hint(false);
					}
				}
			}
			break;
		case 5:
			if (*iParam0 == -890175011 || *iParam0 == 677950956)
			{
				set_gameplay_coord_hint(iParam0->f_6.f_2, -1, 2000, 2000, 0);
			}
			func_30(iParam0, iParam0->f_6.f_8, func_29(iParam0), 0);
			if (!*iParam0 == -1761578407 && !*iParam0 == 404434344)
			{
				func_42(iParam0);
			}
			if (func_14(Global_35, iParam0->f_6.f_2, 1) > (iParam0->f_6 + 5f))
			{
				func_18(iParam0);
				func_19(iParam0, 1);
			}
			else if (is_control_pressed(0, -719620017))
			{
			}
			else if (func_26(&(iParam0->f_6.f_5)) >= 2000)
			{
				if (!*iParam0 == -1761578407 && !*iParam0 == 404434344)
				{
					if (is_gameplay_hint_active())
					{
						stop_gameplay_hint(false);
					}
				}
				if (func_39(iParam0->f_3, 2))
				{
					func_43(&(iParam0->f_3), 2);
				}
				if (!*iParam0 == -1761578407 && !*iParam0 == 404434344)
				{
					func_44(iParam0);
				}
				if ((*iParam0 == -890175011 || *iParam0 == 677950956) || *iParam0 == -321841939)
				{
					func_18(iParam0);
					func_19(iParam0, 7);
				}
				else
				{
					func_19(iParam0, 6);
				}
			}
			break;
		case 6:
			func_30(iParam0, iParam0->f_6.f_8, func_29(iParam0), 0);
			if (func_14(Global_35, iParam0->f_6.f_2, 1) > (iParam0->f_6 + 5f))
			{
				func_18(iParam0);
				func_19(iParam0, 1);
			}
			else if (func_27(iParam0, 1))
			{
				func_18(iParam0);
				func_19(iParam0, 3);
			}
			break;
		case 7:
			break;
	}
}

void func_7(int iParam0)
{
	if (!func_39(iParam0->f_3, 8))
	{
		if (func_45(*iParam0) && _does_volume_exist(iParam0->f_2))
		{
			if (func_46(&(iParam0->f_2)))
			{
				iVar0 = 3;
				if (*iParam0 == -849582265 && Global_40.f_11953)
				{
					iVar0 = 4;
				}
				func_47(iVar0, 0, 0, 0, 0, 0, 1065353216, 0);
				func_40(&(iParam0->f_3), 8);
				if (*iParam0 == -849582265)
				{
					Global_40.f_11953 = 1;
				}
			}
		}
	}
}

void func_8(int iParam0)
{
	if (is_entity_dead(Global_35))
	{
		return;
	}
	if (Local_51 > 0 && Local_51 < 13)
	{
		if (*iParam0 == 1861313914)
		{
			if (func_16(59))
			{
				iVar0 = 0;
				while (iVar0 <= (10 - 1))
				{
					if (does_entity_exist(&(Local_63.f_1[iVar0])))
					{
						if (is_entity_dead(&(Local_63.f_1[iVar0])))
						{
						}
					}
					iVar0++;
				}
			}
		}
	}
	switch (Local_51)
	{
		case 0:
			if (func_39(iParam0->f_3, 1))
			{
				func_43(&(iParam0->f_3), 1);
			}
			if (*iParam0 == -415839138)
			{
				if (!func_48(iParam0))
				{
					return;
				}
				if (!func_49(iParam0))
				{
					return;
				}
				if (func_50(48))
				{
					return;
				}
				if (func_51(iParam0))
				{
					return;
				}
			}
			else if (*iParam0 == -2008558277)
			{
				if (!func_52(iParam0))
				{
					return;
				}
			}
			else if (*iParam0 == 1861313914)
			{
				if (!func_52(iParam0))
				{
					return;
				}
			}
			else if ((!*iParam0 == -654238687 && !*iParam0 == -2008558277) && !*iParam0 == 1861313914)
			{
				if (func_53(*iParam0))
				{
					func_54(&Local_51, 13, 1);
					return;
				}
			}
			func_55(iParam0);
			func_56(iParam0);
			func_54(&Local_51, 2, 1);
			break;
		case 2:
			if (!func_57(iParam0) || func_58())
			{
				return;
			}
			if (*iParam0 == -654238687)
			{
				if (!_0x5c16855277819bbf() == 10)
				{
					return;
				}
			}
			else if (*iParam0 == -2008558277)
			{
				if (!_0x5c16855277819bbf() == 7)
				{
					return;
				}
			}
			else if (!_0x5c16855277819bbf() == 1)
			{
				return;
			}
			func_54(&Local_51, 3, 1);
			break;
		case 3:
			if (func_59(iParam0))
			{
				func_60(iParam0, &uLocal_31);
				func_54(&Local_51, 10, 1);
			}
			break;
		case 10:
			if (!*iParam0 == 1861313914 && !*iParam0 == -415839138)
			{
				if (!func_39(iParam0->f_3, 1))
				{
					func_40(&(iParam0->f_3), 1);
				}
			}
			func_61(iParam0);
			if (*iParam0 == 1861313914)
			{
				func_62(iParam0);
			}
			else if (*iParam0 == -415839138)
			{
				func_63(iParam0);
			}
			else
			{
				func_64(iParam0);
			}
			func_65(iParam0);
			if (*iParam0 == -2008558277)
			{
				if (func_52(iParam0))
				{
					if (_does_volume_exist(iLocal_41) && is_entity_in_volume(Global_35, iLocal_41, true, 0))
					{
						if (!func_11(*iParam0, 32))
						{
							func_66(*iParam0);
						}
					}
					if (!func_53(*iParam0))
					{
						if (((((((&Local_87[0] == 23 || is_entity_dead(&(Local_63.f_1[0]))) && (&Local_87[1] == 23 || is_entity_dead(&(Local_63.f_1[1])))) && (&Local_87[2] == 23 || is_entity_dead(&(Local_63.f_1[2])))) && (&Local_87[3] == 23 || is_entity_dead(&(Local_63.f_1[3])))) && (&Local_87[4] == 23 || is_entity_dead(&(Local_63.f_1[4])))) && (&Local_87[5] == 23 || is_entity_dead(&(Local_63.f_1[5])))) && (&Local_87[6] == 23 || is_entity_dead(&(Local_63.f_1[6]))))
						{
							func_67(iParam0);
							func_68(iParam0);
							func_54(&Local_51, 13, 1);
						}
					}
				}
				else
				{
					func_69(&Local_63, 1);
					func_68(iParam0);
					func_54(&Local_51, 13, 1);
				}
			}
			else if (*iParam0 == -654238687)
			{
				if ((!func_11(*iParam0, 8) && _does_volume_exist(iLocal_41)) && is_entity_in_volume(Global_35, iLocal_41, true, 0))
				{
					func_70(iParam0);
				}
				if (!func_53(*iParam0))
				{
					if (func_72(Global_35, func_71(iParam0, 0), 5f, 1, 1))
					{
						if (func_73())
						{
							if (func_75(func_74(iParam0, 0)))
							{
								func_67(iParam0);
							}
						}
					}
				}
			}
			else if (*iParam0 == 1861313914)
			{
				if (!func_52(iParam0))
				{
					func_68(iParam0);
					func_54(&Local_51, 13, 1);
				}
				if (_does_volume_exist(iLocal_41) && is_entity_in_volume(Global_35, iLocal_41, true, 0))
				{
					if (!&iLocal_14[2])
					{
						if (func_33(&(iLocal_48[0])))
						{
							if (func_76(Global_35))
							{
								func_77(&(iLocal_48[0]), 1);
							}
							else
							{
								func_77(&(iLocal_48[0]), 0);
							}
							if (func_78(&(iLocal_48[0]), 1))
							{
								func_34(&(iLocal_48[0]), 0, 1);
								if (func_16(59))
								{
									if (!func_39(Global_40.f_8863.f_152, 65536))
									{
										func_40(&(Global_40.f_8863.f_152), 65536);
									}
									if (!does_cam_exist(iLocal_47))
									{
										iLocal_47 = create_camera_with_params(26379945, 895.2926f, -1968.114f, 45.0332f, 0f, 0f, 0f, 65f, false, 2);
										set_cam_fov(iLocal_47, 30f);
										point_cam_at_coord(iLocal_47, 894.5633f, -1969.691f, 44.2007f);
									}
									bLocal_23 = true;
									if (does_cam_exist(iLocal_47))
									{
										set_cam_active(iLocal_47, true);
									}
									render_script_cams(true, true, 2000, true, false, 0);
									if (is_player_control_on(get_player_index()))
									{
										set_player_control(get_player_index(), false, 0, false);
									}
								}
								else
								{
									if (!func_39(Global_40.f_8863.f_152, 32768))
									{
										func_40(&(Global_40.f_8863.f_152), 32768);
									}
									if (_does_volume_exist(iLocal_43))
									{
										_0x2c87c3e1c7b96ee2(iLocal_43);
										_0x74c2b3dc0b294102(iLocal_43);
										_0x0cab404cd2db41f5(Global_1935630->f_40, iLocal_43);
										_0xf74e134f40192884(Global_1935630->f_40, 0);
										_delete_volume(iLocal_43);
									}
									func_79(iLocal_48[0], 1, 1);
									iLocal_14[1] = 1;
								}
								func_54(&Local_51, 11, 1);
							}
						}
					}
				}
				if (!func_53(*iParam0))
				{
					if (func_16(59))
					{
						if (func_39(Global_40.f_8863.f_152, 65536))
						{
							func_67(iParam0);
						}
					}
					else if (func_11(*iParam0, 16))
					{
						func_67(iParam0);
					}
				}
			}
			else if (*iParam0 == -35775921)
			{
				if (!bLocal_23)
				{
					if (is_entity_dead(&(Local_63.f_1[0])))
					{
						if (!is_entity_dead(&(Local_157[0])))
						{
							bLocal_23 = true;
							_0x78b4567e18b54480(&(Local_157[0]));
						}
					}
				}
				else if (does_entity_exist(&(Local_157[0])) && _get_carrier_as_ped(&(Local_157[0])) == Global_35)
				{
					func_67(iParam0);
					func_68(iParam0);
					func_54(&Local_51, 13, 1);
				}
				else if (func_80(Global_35, &(Local_63.f_1[0])))
				{
					if (does_entity_exist(&(Local_157[0])))
					{
						detach_entity(&(Local_157[0]), true, true);
						func_81(&Local_157, 0, 0);
					}
					func_83(func_82(iParam0, 0), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					func_67(iParam0);
					func_68(iParam0);
					func_54(&Local_51, 13, 1);
				}
				else if (_0x8de41e9902e85756(&(Local_63.f_1[0])))
				{
					if (does_entity_exist(&(Local_157[0])))
					{
						detach_entity(&(Local_157[0]), true, true);
						func_81(&Local_157, 0, 0);
					}
					func_83(func_82(iParam0, 0), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					func_67(iParam0);
					func_68(iParam0);
					func_54(&Local_51, 13, 1);
				}
				else if (func_73())
				{
					if (func_75(func_82(iParam0, 0)))
					{
						func_67(iParam0);
						func_68(iParam0);
						func_54(&Local_51, 13, 1);
					}
				}
			}
			else if (*iParam0 == -415839138)
			{
				if (!func_53(*iParam0))
				{
					if (func_11(*iParam0, 16))
					{
						func_67(iParam0);
					}
				}
			}
			else if (!func_53(*iParam0))
			{
				if (_does_volume_exist(iLocal_41) && is_entity_in_volume(Global_35, iLocal_41, true, 0))
				{
					func_67(iParam0);
					func_68(iParam0);
					func_54(&Local_51, 13, 1);
				}
			}
			break;
		case 11:
			if (*iParam0 == 1861313914)
			{
				if (!func_52(iParam0))
				{
					func_68(iParam0);
					func_54(&Local_51, 13, 1);
				}
				if (func_16(59))
				{
					if (bLocal_23)
					{
						if (func_26(&(Local_51.f_1)) >= 4000)
						{
							if (func_33(&(iLocal_48[0])))
							{
								if (!func_84(&(iLocal_48[0]), 1))
								{
									func_54(&Local_51, 12, 1);
								}
							}
						}
					}
					else if (func_26(&(Local_51.f_1)) >= 2000)
					{
						if (func_33(&(iLocal_48[0])))
						{
							func_34(&(iLocal_48[0]), 1, 1);
						}
						if (!is_player_control_on(get_player_index()))
						{
							set_player_control(get_player_index(), true, 0, false);
						}
						if (does_cam_exist(iLocal_47))
						{
							destroy_cam(iLocal_47, false);
						}
						func_54(&Local_51, 10, 1);
					}
				}
				else
				{
					func_54(&Local_51, 10, 1);
				}
			}
			break;
		case 12:
			if (*iParam0 == 1861313914)
			{
				if (!func_84(&(iLocal_48[0]), 1))
				{
					bLocal_23 = false;
					if (func_16(59))
					{
						render_script_cams(false, true, 2000, true, false, 0);
						if (does_cam_exist(iLocal_47))
						{
							set_cam_active(iLocal_47, false);
						}
					}
					if (!func_39(iParam0->f_3, 1))
					{
						func_40(&(iParam0->f_3), 1);
					}
					func_54(&Local_51, 11, 1);
				}
			}
			break;
		case 13:
			break;
		default:
			break;
	}
}

void func_9(int iParam0)
{
	func_68(iParam0);
	if (_does_volume_exist(iLocal_41))
	{
		_delete_volume(iLocal_41);
	}
	if (_does_volume_exist(iLocal_42))
	{
		_delete_volume(iLocal_42);
	}
	if (_does_volume_exist(iLocal_43))
	{
		_0x2c87c3e1c7b96ee2(iLocal_43);
		_0x74c2b3dc0b294102(iLocal_43);
		_0x0cab404cd2db41f5(Global_1935630->f_40, iLocal_43);
		_0xf74e134f40192884(Global_1935630->f_40, 0);
		_delete_volume(iLocal_43);
	}
	if (*iParam0 == 1861313914 || *iParam0 == -2008558277)
	{
		remove_shocking_event(iLocal_36);
	}
	func_69(&Local_63, 1);
	func_85(iParam0, &uLocal_31);
	func_86(iParam0);
}

int func_10(int iParam0)
{
	switch (iParam0)
	{
		case 1208255499:
			return -261997819;
		case 1329911409:
			return 870958936;
		case -285871200:
			return 677950956;
		case 457229797:
			return -35775921;
		case 1211791851:
			return -1084929085;
		case 944017471:
			return 2135153015;
		case 1665997921:
			return 1347913620;
		case -2085458327:
			return -599506500;
		case 2135478933:
			return -1568839185;
		case 2057536374:
			return 1937333853;
		case 1366101372:
			return -321841939;
		case 284604988:
			return 1034793488;
		case 615465554:
			return -2009137002;
		case 550135642:
			return -1646022773;
		case 1241103201:
			return -1787770845;
		case 1115410643:
			return -1761578407;
		case 1602500054:
			return 404434344;
		case 1247293257:
			return 503180747;
		case 2124474718:
			return 308500632;
		case 2085223846:
			return 74587361;
		case 918603353:
			return -709811179;
		case 1443601258:
			return 118535038;
		case 2015617886:
			return -1609238411;
		case 1920390250:
			return -1614148516;
		case 1292765231:
			return 173549940;
		case -238317386:
			return 1424723727;
		case 816253701:
			return -1308658310;
		case -1452428628:
			return -1761189332;
		case -796563359:
			return -1420566543;
		case 1580303291:
			return -1208846034;
		case 1828659542:
			return 1048086072;
		case 2126824673:
			return 939555152;
		case 1953753789:
			return -161804536;
		case 673669550:
			return -30872859;
		case 1801467173:
			return 1519228573;
		case 1193272637:
			return -1505275983;
		case 376902028:
			return -890175011;
		case 1290045011:
			return 733338689;
		case 402062501:
			return -986176781;
		case 1071768797:
			return -1824429070;
		case 858952896:
			return 1734766691;
		case 2006959770:
			return -920971071;
		case 385483619:
			return -979575591;
		case 656484143:
			return 464413478;
		case 313051664:
			return 657666087;
		case 795896456:
			return -715636193;
		case 1917865597:
			return -607940493;
		case 597525083:
			return 425000526;
		case 1391618133:
			return -544327665;
		case 984162035:
			return -1053108445;
		case 569502820:
			return 230001763;
		case 713309702:
			return 2000209669;
		case 1665886065:
			return -1859023693;
		case 1326945204:
			return 1861313914;
		case -31708551:
			return -2108030724;
		case 902935343:
			return 58958195;
		case 1224129984:
			return -1891628345;
		case 899090818:
			return 1464664327;
		case 1055001530:
			return -654238687;
		case 1762028978:
			return 1986618633;
		case 1962698324:
			return 918206817;
		case 655415262:
			return -2008558277;
		case 602269758:
			return -834293086;
		case 190237998:
			return 1335921989;
		case 1755633483:
			return -739986731;
		case 1823800245:
			return -148407339;
		case 501995673:
			return -1960242214;
		case 339892059:
			return 1187689415;
		case 668685328:
			return 1673499939;
		case 393469536:
			return -1177787273;
		case 899984418:
			return 1342653896;
		case 870395400:
			return -1714262909;
		case 1675065699:
			return -1283611369;
		case 433005472:
			return -415839138;
		case 430219797:
			return -763376358;
		case 2017758854:
			return 1801731633;
		case 1550351677:
			return 1490223565;
		case 1324260340:
			return -1427565340;
		case 1640554197:
			return -232974724;
		case -2145018399:
			return -1272862985;
		case 158172139:
			return -1061274876;
		case 1633229561:
			return 221420861;
		case 201911354:
			return 1535254161;
		case 16632229:
			return 683269210;
		case 1681309457:
			return 373034311;
		case -108928342:
			return 2072029413;
		case -1033847736:
			return -1427565340;
		case -262561469:
			return -499529359;
		case -1497005692:
			return -780455182;
		case -1563294374:
			return -2019711818;
		case -990094658:
			return -1636964661;
		case -147728984:
			return 1154568952;
		case -357210169:
			return 2134589549;
		case 51085445:
			return -1109016944;
		case -912234551:
			return 1124200691;
		case -1823178954:
			return -357364973;
		case -1049130960:
			return -641229542;
		case -25476944:
			return -777592153;
		case -44323190:
			return -1859413640;
		case -582384899:
			return -1686810506;
		case -1771237190:
			return 2072069278;
		case -289116185:
			return 1120968795;
		case -424836434:
			return -409986722;
		case -1987709625:
			return -1882503209;
		case -628899594:
			return 1431862613;
		case -842594626:
			return -657632;
		case -232587958:
			return -1958832660;
		case -768523571:
			return -1481450947;
		case -753681029:
			return 1982045664;
		case -1893254403:
			return -849582265;
		case -1437877958:
			return 149709049;
		case -537565063:
			return 1284679164;
		case -1736298289:
			return -1923503631;
		case -821795036:
			return -1144800837;
		case -1520281639:
			return -1887999095;
		case -826079709:
			return -1457751321;
		case -695748117:
			return 1187917501;
		case -2084592674:
			return 1091556515;
		case -1605488611:
			return 1351526287;
		case -1847100017:
			return -1300082860;
		case -1928592714:
			return 397377585;
		case -1554719581:
			return -777150535;
		case -1512709755:
			return -919236330;
		case -246112144:
			return -968854939;
		case -1386344008:
			return 1519472817;
		case -854999443:
			return 247563739;
		case -1708277338:
			return -1848895400;
		case -109126822:
			return -2060865802;
		case -1965501170:
			return -1841331114;
		case -537909116:
			return 949011950;
		case -1354885594:
			return 1505050944;
		case -1053011105:
			return -1243267511;
		case -479194009:
			return 233600584;
		case -1754824674:
			return 429544447;
		case -2014047549:
			return 1833243216;
		case -2016277239:
			return -1494823099;
		case -981693493:
			return 921081956;
		case -88450435:
			return 513110082;
		case -446987974:
			return -490142739;
		case -906256657:
			return 330993088;
		case -1532808475:
			return 435290930;
		case -1093245144:
			return -1287911066;
		case -1566714772:
			return -1240932004;
		case -1298970333:
			return -1829339703;
		default:
			break;
	}
	return 0;
}

bool func_11(int iParam0, int iParam1)
{
	if (!func_87(iParam0))
	{
		return false;
	}
	return (Global_40.f_8863[func_88(iParam0, 1)] && iParam1) != 0;
}

void func_12(int iParam0)
{
	if (func_45(*iParam0))
	{
		if (!_does_volume_exist(iParam0->f_2))
		{
			switch (*iParam0)
			{
				case 683269210:
					vVar0 = { -5576.82f, -2583.934f, -9.541f };
					vVar3 = { 0f, 0f, 30.534f };
					vVar6 = { 13.524f, 10.157f, 15.906f };
					sVar9 = "DLAM_Attack";
					break;
				case 2072029413:
					vVar0 = { 808.518f, 2299.105f, 250.32f };
					vVar3 = { 0f, 0f, 21.51f };
					vVar6 = { 5f, 4f, 9f };
					sVar9 = "DLAT_Attack";
					break;
				case -849582265:
					vVar0 = { -2587.832f, -81.85f, 166.262f };
					vVar3 = { 0f, 0f, 9.056f };
					vVar6 = { 52.076f, 56.679f, 16.103f };
					sVar9 = "DLIB_Attack";
					break;
				case 1861313914:
					vVar0 = { 894.559f, -1969.353f, 43.7f };
					vVar3 = { 0f, 0f, 51.997f };
					vVar6 = { 4.5f, 4.5f, 6f };
					sVar9 = "DLBS_Attack";
					break;
				case -641229542:
					vVar0 = { 1750.836f, -2091.653f, 40.941f };
					vVar3 = { 0f, 0f, -30.078f };
					vVar6 = { 2.215f, 3.182f, 2.394f };
					sVar9 = "DLRC_Attack";
					break;
				case -499529359:
					vVar0 = { 2285.546f, 97.363f, 49.583f };
					vVar3 = { 0f, 0f, -30.998f };
					vVar6 = { 7.132f, 4.645f, 4.596f };
					sVar9 = "DLDCG_Attack";
					break;
				case -780455182:
					vVar0 = { -988.307f, 1692.387f, 243.864f };
					vVar3 = { 0f, 0f, 0f };
					vVar6 = { 4.673f, 3.887f, 3.06f };
					sVar9 = "DLDG_Attack";
					break;
				case 429544447:
					vVar0 = { -6314.771f, -3467f, -11.247f };
					vVar3 = { 0f, 0f, 32.675f };
					vVar6 = { 2.852f, 3.164f, 3.06f };
					sVar9 = "DLJM_Attack";
					break;
				case 230001763:
					vVar0 = { 2133.283f, 145.452f, 75.745f };
					vVar3 = { 0f, 0f, 58.303f };
					vVar6 = { 17.167f, 17.176f, 9.904f };
					sVar9 = "DLOG_Attack";
					break;
				case 921081956:
					vVar0 = { 2415.271f, -738.691f, 41f };
					vVar3 = { 0f, 0f, 89.245f };
					vVar6 = { 6.662f, 6.841f, 12.231f };
					sVar9 = "DLORC_Attack";
					break;
				case 949011950:
					vVar0 = { -2341.024f, -2180.015f, 70f };
					vVar3 = { 0f, 0f, 123.618f };
					vVar6 = { 7.322f, 10.134f, 10.231f };
					sVar9 = "DLOH_Attack";
					break;
				case -739986731:
					vVar0 = { -2905.353f, -254.294f, 186.571f };
					vVar3 = { 0f, 0f, 129.763f };
					vVar6 = { 7.64f, 7.534f, 4f };
					sVar9 = "DLPR_Attack";
					break;
				case -657632:
					vVar0 = { 2684.651f, 71.256f, 59f };
					vVar3 = { 0f, 0f, 111.493f };
					vVar6 = { 4.343f, 3.084f, 3.303f };
					sVar9 = "DLRG_Attack";
					break;
				case -1761578407:
					if (Global_36 > -1200f)
					{
						vVar0 = { -762.369f, -1910.463f, 51f };
						vVar3 = { 0f, 0f, 43.472f };
						vVar6 = { 3.896f, 3.266f, 3.303f };
						sVar9 = "DLG1_Attack";
					}
					else
					{
						vVar0 = { -1738f, -996f, 114f };
						vVar3 = { 0f, 0f, -54.795f };
						vVar6 = { 4.369f, 3.487f, 3.303f };
						sVar9 = "DLG2_Attack";
					}
					break;
				case 404434344:
					if (Global_36 > -1200f)
					{
						vVar0 = { -762.369f, -1910.463f, 51f };
						vVar3 = { 0f, 0f, 43.472f };
						vVar6 = { 3.896f, 3.266f, 3.303f };
						sVar9 = "DLG1_Attack";
					}
					else
					{
						vVar0 = { -1738f, -996f, 114f };
						vVar3 = { 0f, 0f, -54.795f };
						vVar6 = { 4.369f, 3.487f, 3.303f };
						sVar9 = "DLG2_Attack";
					}
					break;
				case -1891628345:
					vVar0 = { -2694.572f, -1500.398f, 150f };
					vVar3 = { 0f, 0f, 1.841f };
					vVar6 = { 16.663f, 12.967f, 11.141f };
					sVar9 = "DLUW_Attack";
					break;
				case -1859413640:
					vVar0 = { 2195.32f, -554.613f, 40.995f };
					vVar3 = { 0f, 0f, -74.605f };
					vVar6 = { 1.691f, 1.755f, 2.318f };
					sVar9 = "DLSW_Attack";
					break;
			}
			iParam0->f_2 = _create_volume_box_with_custom_name(vVar0, vVar3, vVar6, sVar9);
		}
	}
}

Vector3 func_13(int iParam0, int iParam1)
{
	switch (*iParam0)
	{
		case -544327665:
			if (iParam1 == 0)
			{
				return 500.882f, 80.003f, 139.28f;
			}
			else if (iParam1 == 1)
			{
				return 759.079f, -1133.282f, 55.059f;
			}
			else if (iParam1 == 2)
			{
				return -3667.897f, -2805.515f, -7.129f;
			}
			break;
		case 1120968795:
			if (iParam1 == 0)
			{
				return -1521.811f, 519.1222f, 101.6756f;
			}
			else if (iParam1 == 1)
			{
				return 2417.936f, 853.4788f, 72.5143f;
			}
			break;
		case -834293086:
			if (iParam1 == 0)
			{
				return 1747.022f, -267.8047f, 73.0826f;
			}
			else if (iParam1 == 1)
			{
				return 1978.289f, -60.4567f, 59.4946f;
			}
			else if (iParam1 == 2)
			{
				return 640.8188f, -1062.613f, 48.0237f;
			}
			else if (iParam1 == 3)
			{
				return 839.6257f, -1174.002f, 54.9616f;
			}
			else if (iParam1 == 4)
			{
				return 1917.611f, 10.6206f, 77.6881f;
			}
			else if (iParam1 == 5)
			{
				return -85.5144f, 76.4358f, 93.2066f;
			}
			else if (iParam1 == 6)
			{
				return 76.4646f, 854.9302f, 207.8816f;
			}
			else if (iParam1 == 7)
			{
				return 1871.215f, 643.5952f, 119.9651f;
			}
			else if (iParam1 == 8)
			{
				return 2572.759f, 690.9401f, 83.9642f;
			}
			else if (iParam1 == 9)
			{
				return 2264.918f, 934.7651f, 81.1843f;
			}
			break;
		case -1859023693:
			if (iParam1 == 0)
			{
				return 525.7659f, 373.9645f, 107.9581f;
			}
			else if (iParam1 == 1)
			{
				return 610.1569f, -142.2089f, 146.4651f;
			}
			else if (iParam1 == 2)
			{
				return 1253.233f, 40.0713f, 94.2498f;
			}
			else if (iParam1 == 3)
			{
				return 886.287f, 470.977f, 103.937f;
			}
			else if (iParam1 == 4)
			{
				return 370.7786f, 1072.15f, 190.1675f;
			}
			else if (iParam1 == 5)
			{
				return -3575.866f, -2199.067f, -13.415f;
			}
			else if (iParam1 == 6)
			{
				return -5159.03f, -3162.67f, -18.5954f;
			}
			else if (iParam1 == 7)
			{
				return -3970.804f, -3027.692f, -12.9605f;
			}
			else if (iParam1 == 8)
			{
				return -3242.678f, -3077.875f, -0.5597f;
			}
			else if (iParam1 == 9)
			{
				return -3686.284f, -3258.813f, -4.4117f;
			}
			else if (iParam1 == 10)
			{
				return 795.2883f, 1013.304f, 118.3968f;
			}
			break;
		case 1519472817:
			if (iParam1 == 0)
			{
				return -2519.475f, 820.6946f, 146.4494f;
			}
			else if (iParam1 == 1)
			{
				return -1349.727f, -923.9958f, 69.342f;
			}
			break;
		case 2000209669:
			return func_89(iParam0, iParam1);
		case -1761578407:
		case 404434344:
			if (iParam1 == 9)
			{
				return -762.4968f, -1910.661f, 50.4933f;
			}
			else if (iParam1 == 10)
			{
				return -1738.282f, -995.4295f, 113.6716f;
			}
			else
			{
				return func_90(iParam0, iParam1);
			}
			break;
		case 870958936:
			return func_91(iParam0, iParam1);
		case 513110082:
			if (iParam1 == 0)
			{
				return -2531.5f, 1174.4f, 225.9f;
			}
			else if (iParam1 == 1)
			{
				return 3026.4f, 1778f, 84.2f;
			}
			else if (iParam1 == 2)
			{
				return -4389.58f, -2166.55f, 50.81f;
			}
			break;
		case 503180747:
			if (iParam1 == 0)
			{
				return 2325.978f, 1070.32f, 44.9401f;
			}
			else if (iParam1 == 1)
			{
				return -2698.656f, 697.2829f, 162.889f;
			}
			break;
		case 1535254161:
			return func_90(iParam0, iParam1);
		case -1272862985:
			return func_90(iParam0, iParam1);
		case -1243267511:
			return func_90(iParam0, iParam1);
		case -321841939:
			return func_90(iParam0, iParam1);
		case -890175011:
			return func_90(iParam0, iParam1);
		case 677950956:
			return func_90(iParam0, iParam1);
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_14(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

bool func_15()
{
	if (func_92() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

bool func_16(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_93((*Global_1835011)[iParam0]->f_1, 1);
	}
	return (_unlock_is_unlocked((*Global_1835011)[iParam0]->f_2) && !_unlock_is_visible((*Global_1835011)[iParam0]->f_2));
}

bool func_17(int iParam0)
{
	if (func_39(iParam0->f_3, 1))
	{
		return true;
	}
	return false;
}

void func_18(int iParam0)
{
	if (func_33(iParam0->f_6.f_8))
	{
		func_79(&(iParam0->f_6.f_8), 1, 1);
	}
	func_25(&(iParam0->f_6.f_5));
	if (func_39(iParam0->f_3, 2))
	{
		func_43(&(iParam0->f_3), 2);
	}
}

void func_19(int iParam0, int iParam1)
{
	iParam0->f_5 = iParam1;
}

bool func_20(int iParam0)
{
	switch (*iParam0)
	{
		case -544327665:
			if (iParam0->f_4 == 0)
			{
				if (func_39(Global_40.f_8863.f_152, 1))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 1)
			{
				if (func_39(Global_40.f_8863.f_152, 2))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 2)
			{
				if (func_39(Global_40.f_8863.f_152, 4))
				{
					return true;
				}
			}
			break;
		case 2000209669:
			if (iParam0->f_4 == 0)
			{
				if (func_39(Global_40.f_8863.f_152, 8))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 1)
			{
				if (func_39(Global_40.f_8863.f_152, 16))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 2)
			{
				if (func_39(Global_40.f_8863.f_152, 32))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 3)
			{
				if (func_39(Global_40.f_8863.f_152, 64))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 4)
			{
				if (func_39(Global_40.f_8863.f_152, 128))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 5)
			{
				if (func_39(Global_40.f_8863.f_152, 256))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 6)
			{
				if (func_39(Global_40.f_8863.f_152, 512))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 7)
			{
				if (func_39(Global_40.f_8863.f_152, 1024))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 11)
			{
				if (func_39(Global_40.f_8863.f_152, 16384))
				{
					return true;
				}
			}
			break;
		case 1120968795:
			if (iParam0->f_4 == 0)
			{
				if (func_39(Global_40.f_8863.f_153, 1024))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 1)
			{
				if (func_39(Global_40.f_8863.f_153, 2048))
				{
					return true;
				}
			}
			break;
		case 1519472817:
			if (iParam0->f_4 == 0)
			{
				if (func_39(Global_40.f_8863.f_153, 8388608))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 1)
			{
				if (func_39(Global_40.f_8863.f_153, 16777216))
				{
					return true;
				}
			}
			break;
		case -834293086:
			if (iParam0->f_4 == 0)
			{
				if (func_39(Global_40.f_8863.f_153, 1))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 1)
			{
				if (func_39(Global_40.f_8863.f_153, 2))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 2)
			{
				if (func_39(Global_40.f_8863.f_153, 4))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 3)
			{
				if (func_39(Global_40.f_8863.f_153, 8))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 4)
			{
				if (func_39(Global_40.f_8863.f_153, 16))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 5)
			{
				if (func_39(Global_40.f_8863.f_153, 32))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 6)
			{
				if (func_39(Global_40.f_8863.f_153, 64))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 7)
			{
				if (func_39(Global_40.f_8863.f_153, 128))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 8)
			{
				if (func_39(Global_40.f_8863.f_153, 256))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 9)
			{
				if (func_39(Global_40.f_8863.f_153, 512))
				{
					return true;
				}
			}
			break;
		case -1859023693:
			if (iParam0->f_4 == 0)
			{
				if (func_39(Global_40.f_8863.f_153, 4096))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 1)
			{
				if (func_39(Global_40.f_8863.f_153, 8192))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 2)
			{
				if (func_39(Global_40.f_8863.f_153, 16384))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 3)
			{
				if (func_39(Global_40.f_8863.f_153, 32768))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 4)
			{
				if (func_39(Global_40.f_8863.f_153, 65536))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 5)
			{
				if (func_39(Global_40.f_8863.f_153, 131072))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 6)
			{
				if (func_39(Global_40.f_8863.f_153, 262144))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 7)
			{
				if (func_39(Global_40.f_8863.f_153, 524288))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 8)
			{
				if (func_39(Global_40.f_8863.f_153, 1048576))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 9)
			{
				if (func_39(Global_40.f_8863.f_153, 2097152))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 10)
			{
				if (func_39(Global_40.f_8863.f_153, 4194304))
				{
					return true;
				}
			}
			break;
		case 404434344:
			if (func_39(Global_40.f_8863.f_154, 1))
			{
				return true;
			}
			break;
		case -1761578407:
			if (iParam0->f_4 == 0)
			{
				if (func_39(Global_40.f_8863.f_154, 1))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 1)
			{
				if (func_39(Global_40.f_8863.f_154, 2))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 2)
			{
				if (func_39(Global_40.f_8863.f_154, 4))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 3)
			{
				if (func_39(Global_40.f_8863.f_154, 8))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 4)
			{
				if (func_39(Global_40.f_8863.f_154, 16))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 5)
			{
				if (func_39(Global_40.f_8863.f_154, 32))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 6)
			{
				if (func_39(Global_40.f_8863.f_154, 64))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 7)
			{
				if (func_39(Global_40.f_8863.f_154, 128))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 8)
			{
				if (func_39(Global_40.f_8863.f_154, 256))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 9)
			{
				if (func_39(Global_40.f_8863.f_154, 512))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 10)
			{
				if (func_39(Global_40.f_8863.f_154, 1024))
				{
					return true;
				}
			}
			break;
		case -321841939:
			if (iParam0->f_4 == 0)
			{
				if (func_39(Global_40.f_8863.f_148, 2))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 1)
			{
				if (func_39(Global_40.f_8863.f_148, 4))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 2)
			{
				if (func_39(Global_40.f_8863.f_148, 8))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 3)
			{
				if (func_39(Global_40.f_8863.f_148, 16))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 4)
			{
				if (func_39(Global_40.f_8863.f_148, 32))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 5)
			{
				if (func_39(Global_40.f_8863.f_148, 64))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 6)
			{
				if (func_39(Global_40.f_8863.f_148, 128))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 7)
			{
				if (func_39(Global_40.f_8863.f_148, 256))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 8)
			{
				if (func_39(Global_40.f_8863.f_148, 512))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 9)
			{
				if (func_39(Global_40.f_8863.f_148, 1024))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 10)
			{
				if (func_39(Global_40.f_8863.f_148, 2048))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 11)
			{
				if (func_39(Global_40.f_8863.f_148, 4096))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 12)
			{
				if (func_39(Global_40.f_8863.f_148, 8192))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 13)
			{
				if (func_39(Global_40.f_8863.f_148, 16384))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 14)
			{
				if (func_39(Global_40.f_8863.f_148, 32768))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 15)
			{
				if (func_39(Global_40.f_8863.f_148, 65536))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 16)
			{
				if (func_39(Global_40.f_8863.f_148, 131072))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 17)
			{
				if (func_39(Global_40.f_8863.f_148, 262144))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 18)
			{
				if (func_39(Global_40.f_8863.f_148, 524288))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 19)
			{
				if (func_39(Global_40.f_8863.f_148, 1048576))
				{
					return true;
				}
			}
			break;
		case 870958936:
			if (iParam0->f_4 == 0)
			{
				if (func_39(Global_40.f_8863.f_149, 1))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 1)
			{
				if (func_39(Global_40.f_8863.f_149, 2))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 2)
			{
				if (func_39(Global_40.f_8863.f_149, 4))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 3)
			{
				if (func_39(Global_40.f_8863.f_149, 8))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 4)
			{
				if (func_39(Global_40.f_8863.f_149, 16))
				{
					return true;
				}
			}
			break;
		case 513110082:
			switch (iParam0->f_4)
			{
				case 0:
					if (func_39(Global_40.f_8863.f_150, 1))
					{
						return true;
					}
					break;
				case 1:
					if (func_39(Global_40.f_8863.f_150, 2))
					{
						return true;
					}
					break;
				case 2:
					if (((((func_39(Global_40.f_8863.f_150, 4) && func_39(Global_40.f_8863.f_150, 8)) && func_39(Global_40.f_8863.f_150, 16)) && func_39(Global_40.f_8863.f_150, 32)) && func_39(Global_40.f_8863.f_150, 64)) && func_39(Global_40.f_8863.f_150, 128))
					{
						return true;
					}
					break;
				default:
					break;
			}
			break;
		case -890175011:
			if (iParam0->f_4 == 0)
			{
				if (func_39(Global_40.f_8863.f_154, 2048))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 1)
			{
				if (func_39(Global_40.f_8863.f_154, 4096))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 2)
			{
				if (func_39(Global_40.f_8863.f_154, 8192))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 3)
			{
				if (func_39(Global_40.f_8863.f_154, 16384))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 4)
			{
				if (func_39(Global_40.f_8863.f_154, 32768))
				{
					return true;
				}
			}
			break;
		case 677950956:
			if (iParam0->f_4 == 0)
			{
				if (func_39(Global_40.f_8863.f_154, 65536))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 1)
			{
				if (func_39(Global_40.f_8863.f_154, 131072))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 2)
			{
				if (func_39(Global_40.f_8863.f_154, 262144))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 3)
			{
				if (func_39(Global_40.f_8863.f_154, 524288))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 4)
			{
				if (func_39(Global_40.f_8863.f_154, 1048576))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 5)
			{
				if (func_39(Global_40.f_8863.f_154, 2097152))
				{
					return true;
				}
			}
			break;
		case -1272862985:
			if (iParam0->f_4 == 0)
			{
				if (func_39(Global_40.f_8863.f_152, 262144))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 1)
			{
				if (func_39(Global_40.f_8863.f_152, 524288))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 2)
			{
				if (func_39(Global_40.f_8863.f_152, 1048576))
				{
					return true;
				}
			}
			else if (iParam0->f_4 == 3)
			{
				if (func_39(Global_40.f_8863.f_152, 2097152))
				{
					return true;
				}
			}
			break;
		default:
			break;
	}
	return false;
}

void func_21(int iParam0)
{
	iParam0->f_6.f_2 = { func_90(iParam0, iParam0->f_4) };
	iParam0->f_6.f_1 = 5f;
	iParam0->f_6 = 10f;
	switch (*iParam0)
	{
		case 1535254161:
			iParam0->f_6 = 20f;
			iParam0->f_6.f_1 = 10f;
			func_94(iParam0);
			break;
		case -1958832660:
		case -1109016944:
			iParam0->f_6 = 48f;
			iParam0->f_6.f_1 = 24f;
			break;
		case -1960242214:
		case -1300082860:
		case -161804536:
		case 657666087:
		case 1673499939:
		case 1734766691:
			iParam0->f_6 = 30f;
			iParam0->f_6.f_1 = 15f;
			break;
		case -1891628345:
		case -986176781:
		case -849582265:
		case 247563739:
		case 1982045664:
		case 1986618633:
			iParam0->f_6 = 20f;
			iParam0->f_6.f_1 = 10f;
			break;
		case -1646022773:
		case 1284679164:
		case 2000209669:
			iParam0->f_6 = 6f;
			iParam0->f_6.f_1 = 3f;
			break;
		case -1614148516:
			iParam0->f_6 = 3f;
			iParam0->f_6.f_1 = 1.5f;
			break;
		case -1243267511:
			iParam0->f_6 = 10f;
			func_94(iParam0);
			break;
		case -607940493:
			iParam0->f_6 = 30f;
			func_94(iParam0);
			break;
		case -321841939:
			iParam0->f_6 = 10f;
			break;
		case -1761578407:
		case 404434344:
			iParam0->f_6 = 10f;
			func_94(iParam0);
			break;
		case -890175011:
			iParam0->f_6 = 3f;
			iParam0->f_6.f_1 = 1.5f;
			if (((iParam0->f_4 == 0 || iParam0->f_4 == 1) || iParam0->f_4 == 3) || iParam0->f_4 == 4)
			{
				func_94(iParam0);
			}
			break;
		case 677950956:
			iParam0->f_6 = 6f;
			iParam0->f_6.f_1 = 3f;
			if (iParam0->f_4 == 1 || iParam0->f_4 == 5)
			{
				func_94(iParam0);
			}
			break;
		default:
			iParam0->f_6 = 10f;
			iParam0->f_6.f_1 = 5f;
			break;
	}
}

bool func_22(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_23(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_24(var uParam0)
{
	return func_95(*uParam0, 1);
}

void func_25(var uParam0)
{
	func_96(uParam0, 0f);
}

int func_26(var uParam0)
{
	if (!func_24(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_97(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_98() - round((uParam0->f_1 * 1000f)));
}

bool func_27(int iParam0, bool bParam1)
{
	if (is_entity_dead(Global_35))
	{
		return false;
	}
	if (bParam1)
	{
		if (!func_33(iParam0->f_6.f_8))
		{
			return true;
		}
		if (func_99(iParam0))
		{
			return true;
		}
		if (!func_100(iParam0, 0))
		{
			return true;
		}
		if (is_ped_active_in_scenario(Global_35, 1) || is_ped_using_any_scenario(Global_35))
		{
			return true;
		}
		if ((((*iParam0 == -1761578407 || *iParam0 == 404434344) || *iParam0 == -1243267511) || *iParam0 == -607940493) || *iParam0 == 1535254161)
		{
			if (!_does_volume_exist(iParam0->f_6.f_9))
			{
				return false;
			}
			if (!is_entity_in_volume(Global_35, iParam0->f_6.f_9, true, 0) || !func_101(Global_35, iParam0->f_6.f_2, 0))
			{
				return true;
			}
		}
		else if (func_14(Global_35, iParam0->f_6.f_2, 1) > (iParam0->f_6.f_1 + 0.5f) || !func_101(Global_35, iParam0->f_6.f_2, 0))
		{
			return true;
		}
	}
	else
	{
		if (func_99(iParam0))
		{
			return false;
		}
		if (!func_100(iParam0, 0))
		{
			return false;
		}
		if (is_ped_active_in_scenario(Global_35, 1) || is_ped_using_any_scenario(Global_35))
		{
			return false;
		}
		if ((((*iParam0 == -1761578407 || *iParam0 == 404434344) || *iParam0 == -1243267511) || *iParam0 == -607940493) || *iParam0 == 1535254161)
		{
			if (!_does_volume_exist(iParam0->f_6.f_9))
			{
				return false;
			}
			if (is_entity_in_volume(Global_35, iParam0->f_6.f_9, true, 0) && func_101(Global_35, iParam0->f_6.f_2, 0))
			{
				return true;
			}
		}
		else if (func_14(Global_35, iParam0->f_6.f_2, 1) <= iParam0->f_6.f_1 && func_101(Global_35, iParam0->f_6.f_2, 0))
		{
			return true;
		}
	}
	return false;
}

void func_28(int iParam0)
{
	if (!func_33(iParam0->f_6.f_8))
	{
		if (*iParam0 == 404434344)
		{
			if (func_53(*iParam0))
			{
				iParam0->f_6.f_8 = func_102("DISCO_FOCUS", -719620017, Global_35, 0, 0, 0, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
				func_34(iParam0->f_6.f_8, 0, 1);
			}
			else
			{
				iParam0->f_6.f_8 = func_102("DISCO_EXAMINE", -719620017, Global_35, 0, 0, 0, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
			}
		}
		else if (*iParam0 == -1761578407)
		{
			if (iParam0->f_4 == 2)
			{
				if (func_39(Global_40.f_8863.f_154, 4))
				{
					iParam0->f_6.f_8 = func_102("DISCO_FOCUS", -719620017, Global_35, 0, 0, 0, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
					func_34(iParam0->f_6.f_8, 0, 1);
				}
				else
				{
					iParam0->f_6.f_8 = func_102("DISCO_EXAMINE", -719620017, Global_35, 0, 0, 0, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
				}
			}
			else if (iParam0->f_4 == 3)
			{
				if (func_39(Global_40.f_8863.f_154, 8))
				{
					iParam0->f_6.f_8 = func_102("DISCO_FOCUS", -719620017, Global_35, 0, 0, 0, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
					func_34(iParam0->f_6.f_8, 0, 1);
				}
				else
				{
					iParam0->f_6.f_8 = func_102("DISCO_EXAMINE", -719620017, Global_35, 0, 0, 0, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
				}
			}
			else if (func_20(iParam0))
			{
				iParam0->f_6.f_8 = func_102("DISCO_FOCUS", -719620017, Global_35, 0, 0, 0, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
				func_34(iParam0->f_6.f_8, 0, 1);
			}
			else
			{
				iParam0->f_6.f_8 = func_102("DISCO_EXAMINE", -719620017, Global_35, 0, 0, 0, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
			}
		}
		else if (*iParam0 == 1861313914)
		{
			if (func_11(*iParam0, 2) || func_11(*iParam0, 16))
			{
				iParam0->f_6.f_8 = func_102("DISCO_FOCUS", -719620017, Global_35, 0, 0, 0, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
				func_34(iParam0->f_6.f_8, 0, 1);
			}
			else
			{
				iParam0->f_6.f_8 = func_102("DISCO_EXAMINE", -719620017, Global_35, 2, 0, 0, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, 1753096650, 0, 0);
			}
		}
		else if (*iParam0 == -415839138)
		{
			if (func_11(*iParam0, 2) || func_11(*iParam0, 16))
			{
				iParam0->f_6.f_8 = func_102("DISCO_FOCUS", -719620017, Global_35, 0, 0, 0, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
				func_34(iParam0->f_6.f_8, 0, 1);
			}
			else
			{
				iParam0->f_6.f_8 = func_102("DISCO_EXAMINE", -719620017, Global_35, 2, 0, 0, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, 1753096650, 0, 0);
			}
		}
		else if (func_11(*iParam0, 2) || func_11(*iParam0, 16))
		{
			iParam0->f_6.f_8 = func_102("DISCO_FOCUS", -719620017, Global_35, 0, 0, 0, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
			func_34(iParam0->f_6.f_8, 0, 1);
		}
		else
		{
			iParam0->f_6.f_8 = func_102("DISCO_EXAMINE", -719620017, Global_35, 0, 0, 0, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, 1753096650, 0, 0);
		}
		func_103(iParam0->f_6.f_8, 13, 1, 1);
		func_104(iParam0->f_6.f_8);
	}
}

char* func_29(int iParam0)
{
	if (*iParam0 == 404434344)
	{
		if (func_53(*iParam0))
		{
			return "DISCO_GRAVE_AM";
		}
		else
		{
			return "DISCO_GRAVE";
		}
	}
	else if (*iParam0 == -1761578407)
	{
		if (func_20(iParam0))
		{
			if (iParam0->f_4 == 0)
			{
				return "DISCO_GRAVE_AM";
			}
			else if (iParam0->f_4 == 1)
			{
				return "DISCO_GRAVE_JC";
			}
			else if (iParam0->f_4 == 2)
			{
				return "DISCO_GRAVE_HM";
			}
			else if (iParam0->f_4 == 3)
			{
				return "DISCO_GRAVE_LS";
			}
			else if (iParam0->f_4 == 4)
			{
				return "DISCO_GRAVE_SM";
			}
			else if (iParam0->f_4 == 5)
			{
				return "DISCO_GRAVE_DC";
			}
			else if (iParam0->f_4 == 6)
			{
				return "DISCO_GRAVE_KD";
			}
			else if (iParam0->f_4 == 7)
			{
				return "DISCO_GRAVE_SG";
			}
			else if (iParam0->f_4 == 8)
			{
				return "DISCO_GRAVE_EF";
			}
		}
		else
		{
			return "DISCO_GRAVE";
		}
	}
	else if (*iParam0 == -890175011)
	{
		return "DISCO_VAMP";
	}
	else if (*iParam0 == 677950956)
	{
		return "DISCO_VAMP";
	}
	else if (*iParam0 == -321841939)
	{
		return "DISCO_DREAM";
	}
	else if (func_11(*iParam0, 2) || func_11(*iParam0, 16))
	{
		if (*iParam0 == -1958832660)
		{
			return "DISCO_AC";
		}
		else if (*iParam0 == -1300082860)
		{
			return "DISCO_AW";
		}
		else if (*iParam0 == 247563739)
		{
			return "DISCO_ATP";
		}
		else if (*iParam0 == -1287911066)
		{
			return "DISCO_BR";
		}
		else if (*iParam0 == 1861313914)
		{
			return "DISCO_BS";
		}
		else if (*iParam0 == 1734766691)
		{
			return "DISCO_FIRE";
		}
		else if (*iParam0 == 657666087)
		{
			return "DISCO_CW";
		}
		else if (*iParam0 == 1535254161)
		{
			return "DISCO_CWB";
		}
		else if (*iParam0 == 58958195)
		{
			return "DISCO_CA";
		}
		else if (*iParam0 == -1109016944)
		{
			return "DISCO_DT";
		}
		else if (*iParam0 == -780455182)
		{
			return "DISCO_DG";
		}
		else if (*iParam0 == -1636964661)
		{
			return "DISCO_DL";
		}
		else if (*iParam0 == -2009137002)
		{
			return "DISCO_FIC";
		}
		else if (*iParam0 == -1243267511)
		{
			return "DISCO_FT";
		}
		else if (*iParam0 == -1053108445)
		{
			return "DISCO_FLY";
		}
		else if (*iParam0 == -1646022773)
		{
			return "DISCO_FO";
		}
		else if (*iParam0 == 1284679164)
		{
			return "DISCO_FR";
		}
		else if (*iParam0 == 2134589549)
		{
			return "DISCO_FS";
		}
		else if (*iParam0 == -1787770845)
		{
			return "DISCO_GM";
		}
		else if (*iParam0 == -1887999095)
		{
			return "DISCO_GS";
		}
		else if (*iParam0 == 1519228573)
		{
			return "DISCO_HS";
		}
		else if (*iParam0 == 1982045664)
		{
			return "DISCO_HW";
		}
		else if (*iParam0 == 308500632)
		{
			return "DISCO_HT";
		}
		else if (*iParam0 == -849582265)
		{
			return "DISCO_IB";
		}
		else if (*iParam0 == 429544447)
		{
			return "DISCO_JM";
		}
		else if (*iParam0 == -148407339)
		{
			return "DISCO_MA";
		}
		else if (*iParam0 == -415839138)
		{
			return "DISCO_MONK";
		}
		else if (*iParam0 == 1673499939)
		{
			return "DISCO_MH";
		}
		else if (*iParam0 == -709811179)
		{
			return "DISCO_MT";
		}
		else if (*iParam0 == -979575591)
		{
			return "DISCO_OB";
		}
		else if (*iParam0 == -1609238411)
		{
			return "DISCO_OWS";
		}
		else if (*iParam0 == 921081956)
		{
			return "DISCO_ORC";
		}
		else if (*iParam0 == -739986731)
		{
			return "DISCO_PR";
		}
		else if (*iParam0 == 1034793488)
		{
			return "DISCO_PIC";
		}
		else if (*iParam0 == -1614148516)
		{
			return "DISCO_PH";
		}
		else if (*iParam0 == -1761189332)
		{
			return "DISCO_RR";
		}
		else if (*iParam0 == -607940493)
		{
			return "DISCO_SM";
		}
		else if (*iParam0 == 1986618633)
		{
			return "DISCO_SW";
		}
		else if (*iParam0 == -161804536)
		{
			return "DISCO_ST";
		}
		else if (*iParam0 == 2000209669)
		{
			return "DISCO_SS";
		}
		else if (*iParam0 == -232974724)
		{
			return "DISCO_TP";
		}
		else if (*iParam0 == -1272862985)
		{
			return "DISCO_TT";
		}
		else if (*iParam0 == -1891628345)
		{
			return "DISCO_UTE";
		}
		else if (*iParam0 == -1960242214)
		{
			return "DISCO_UCB";
		}
		else if (*iParam0 == -1505275983)
		{
			return "DISCO_WT";
		}
		else if (*iParam0 == -986176781)
		{
			return "DISCO_WB";
		}
		else if (*iParam0 == 373034311)
		{
			return "DISCO_AA";
		}
	}
	else if (((*iParam0 == -986176781 || *iParam0 == 1986618633) || *iParam0 == -1787770845) || *iParam0 == -148407339)
	{
		return "DISCO_BONES";
	}
	else if ((((((*iParam0 == -1958832660 || *iParam0 == 921081956) || *iParam0 == 247563739) || *iParam0 == -232974724) || *iParam0 == -1300082860) || *iParam0 == -979575591) || *iParam0 == 1673499939)
	{
		return "DISCO_STRUCT";
	}
	else if (*iParam0 == -780455182)
	{
		return "DISCO_GRAVE";
	}
	else if (*iParam0 == -2009137002)
	{
		return "DISCO_SCULPT";
	}
	else if ((*iParam0 == -1243267511 || *iParam0 == -1272862985) || *iParam0 == -1505275983)
	{
		return "DISCO_TREE";
	}
	else if (*iParam0 == 1034793488 || *iParam0 == 373034311)
	{
		return "DISCO_PAINT";
	}
	else if ((((((((*iParam0 == -1646022773 || *iParam0 == 1284679164) || *iParam0 == 2134589549) || *iParam0 == -1887999095) || *iParam0 == 1519228573) || *iParam0 == -1287911066) || *iParam0 == -1636964661) || *iParam0 == 429544447) || *iParam0 == -739986731)
	{
		return "DISCO_CORPSE";
	}
	else if ((((((((((*iParam0 == -1109016944 || *iParam0 == 1535254161) || *iParam0 == -849582265) || *iParam0 == -161804536) || *iParam0 == -1891628345) || *iParam0 == -1960242214) || *iParam0 == -607940493) || *iParam0 == 308500632) || *iParam0 == 1734766691) || *iParam0 == -415839138) || *iParam0 == 1982045664)
	{
		return "DISCO_SITE";
	}
	else if (*iParam0 == -1614148516)
	{
		return "DISCO_DEVICE";
	}
	else if ((*iParam0 == -1761189332 || *iParam0 == -1609238411) || *iParam0 == -709811179)
	{
		return "DISCO_ROCK";
	}
	else if ((*iParam0 == 58958195 || *iParam0 == -1053108445) || *iParam0 == 657666087)
	{
		return "DISCO_WRECK";
	}
	else if (*iParam0 == 1861313914)
	{
		if (func_16(59))
		{
			return "DISCO_CORPSE";
		}
		else
		{
			return "DISCO_SITE";
		}
	}
	else if (*iParam0 == 2000209669)
	{
		if (iParam0->f_4 == 11)
		{
			return "DISCO_PAINT";
		}
		else
		{
			return "DISCO_SCULPT";
		}
	}
	else
	{
		return "DISCO_UNKNOWN";
	}
	return "";
}

void func_30(int iParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!func_33(iParam1))
	{
		return;
	}
	iVar0 = func_105(iParam1);
	if (_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		if ((!*iParam0 == -890175011 && !*iParam0 == 677950956) && !*iParam0 == -1308658310)
		{
			if (bParam3)
			{
				func_40(&uVar1, 12);
			}
			else
			{
				func_40(&uVar1, 8);
			}
		}
		if ((*iParam0 == 1861313914 || *iParam0 == -1308658310) || *iParam0 == -415839138)
		{
			if (func_11(*iParam0, 16))
			{
				iVar2 = 0;
			}
			else
			{
				iVar2 = 2;
			}
		}
		else
		{
			iVar2 = 0;
		}
		_uiprompt_set_ambient_group_this_frame(Global_35, 1f, iVar2, 1, 1710353528, sParam2, uVar1);
	}
}

bool func_31(int iParam0)
{
	if (func_78(iParam0->f_6.f_8, 1))
	{
		return true;
	}
	return false;
}

void func_32(int iParam0, int iParam1)
{
	if (!func_87(iParam0))
	{
		return;
	}
	Global_40.f_8863[func_88(iParam0, 1)] = (Global_40.f_8863[func_88(iParam0, 1)] || iParam1);
}

bool func_33(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 48)
	{
		return false;
	}
	if ((*Global_1945938)[iParam0]->f_1 & 2 == 0)
	{
		return false;
	}
	return _uiprompt_is_valid((*Global_1945938)[iParam0]->f_3);
}

void func_34(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_33(iParam0))
	{
		return;
	}
	iVar0 = func_105(iParam0);
	func_106(iVar0, bParam1);
}

void func_35(int iParam0)
{
	if (func_92() != -1)
	{
		return;
	}
	if (*iParam0 == -321841939)
	{
		if (func_107(iParam0->f_4) != 0)
		{
			if (!_map_is_discovery_active(iParam0->f_4))
			{
				_0xd8c7162ab2e2af45(func_107(iParam0->f_4));
			}
			func_32(*iParam0, 8);
		}
	}
	else
	{
		if (func_108(*iParam0, iParam0->f_4) != 0)
		{
			if (!_map_is_discovery_active(func_108(*iParam0, iParam0->f_4)))
			{
				_0xd8c7162ab2e2af45(func_108(*iParam0, iParam0->f_4));
			}
			func_32(*iParam0, 8);
		}
		func_70(iParam0);
	}
}

void func_36(int iParam0, bool bParam1)
{
	if (*iParam0 == -321841939)
	{
		if (bParam1)
		{
			if (func_109() < (20 - 1))
			{
				return;
			}
		}
		else if (!func_110())
		{
			return;
		}
	}
	if (bParam1)
	{
		iVar0 = func_112(*iParam0, func_111(), iParam0->f_4);
	}
	else
	{
		iVar0 = func_113(*iParam0, iParam0->f_4);
	}
	if (iVar0 != 0)
	{
		if (bParam1)
		{
			func_114(iVar0, 0);
			if (*iParam0 == -890175011)
			{
				if (func_115() == (5 - 1))
				{
					if (func_111())
					{
						func_114(-533137209, 0);
						iVar0 = -533137209;
					}
					else
					{
						func_114(642612355, 0);
						iVar0 = 642612355;
					}
				}
			}
		}
		if (func_116())
		{
			Global_1357518 = iVar0;
			if (bParam1 == 1)
			{
				*Global_1357519 = { iParam0->f_6.f_2 };
			}
		}
	}
}

void func_37(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_117(&Global_0, 8);
	}
	if (!func_118() || func_92() != -1)
	{
		return;
	}
	func_117(&Global_0, 1);
}

float func_38(int iParam0, bool bParam1)
{
	if (bParam1 && !func_33(iParam0))
	{
		return 0f;
	}
	iVar0 = func_105(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_get_mash_mode_progress((*Global_1945938)[iVar0]->f_3);
	}
	return _0x81801291806dbc50((*Global_1945938)[iVar0]->f_3);
}

bool func_39(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_40(var uParam0, int iParam1)
{
	func_119(uParam0, iParam1);
}

void func_41(int iParam0)
{
	iParam0->f_6.f_10.f_21 = 4;
	iParam0->f_6.f_10.f_17 = 4;
	iParam0->f_6.f_10.f_18 = 1;
	iParam0->f_6.f_10.f_23 = 2;
	iParam0->f_6.f_10.f_24 = 2;
	iParam0->f_6.f_10 = { func_90(iParam0, iParam0->f_4) };
}

void func_42(int iParam0)
{
	if (!is_entity_dead(Global_35))
	{
		_0x66f9eb44342bb4c5(Global_35, &(iParam0->f_6.f_10));
	}
}

void func_43(var uParam0, int iParam1)
{
	func_120(uParam0, iParam1);
}

void func_44(int iParam0)
{
	if (!is_entity_dead(Global_35))
	{
		_0x0eabf182fbb63d72(Global_35, 6, 0);
	}
}

bool func_45(int iParam0)
{
	switch (iParam0)
	{
		case -1891628345:
		case -1859413640:
		case -1761578407:
		case -849582265:
		case -780455182:
		case -739986731:
		case -641229542:
		case -499529359:
		case -657632:
		case 230001763:
		case 404434344:
		case 429544447:
		case 683269210:
		case 921081956:
		case 949011950:
		case 1861313914:
		case 2072029413:
			return true;
	}
	return false;
}

bool func_46(var uParam0)
{
	if (_does_volume_exist(*uParam0))
	{
		func_121(*uParam0, &Var0);
		if (_get_entity_inside_explosion_area(-1, Var0, Var0.f_3, Var0.f_6) == func_122(Global_35))
		{
			return true;
		}
		else if (is_bullet_in_angled_area(Var0, Var0.f_3, Var0.f_6, true))
		{
			vVar7 = { 0f, 0f, 0f };
			if (get_ped_last_weapon_impact_coord(Global_35, &vVar7))
			{
				if (is_point_in_angled_area(vVar7, Var0, Var0.f_3, Var0.f_6, false, true))
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_47(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	if (func_92() != -1)
	{
		return;
	}
	if ((Global_36616 && func_123(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_124(iParam0);
	iVar0 = round((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_125(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
	}
	else
	{
		iVar1 = -1;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (iVar1 < 0)
			{
				if (&Global_1347477->f_155[iVar2] == 0)
				{
					iVar1 = iVar2;
				}
			}
			iVar2++;
		}
		if (iVar1 >= 0)
		{
			func_126(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_125(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

bool func_48(int iParam0)
{
	iVar0 = func_127();
	iVar1 = func_128(iVar0);
	switch (*iParam0)
	{
		case -415839138:
			if (iVar1 > 9 && iVar1 < 16)
			{
				return true;
			}
			break;
		case 1535254161:
			if (iVar1 >= 0 && iVar1 <= 4)
			{
				return true;
			}
			else if (iVar1 >= 23 && iVar1 <= 24)
			{
				return true;
			}
			break;
		default:
			break;
	}
	return false;
}

bool func_49(int iParam0)
{
	iVar0 = _get_prev_weather_type_hash_name();
	iVar1 = _get_next_weather_type_hash_name();
	if (func_129(iParam0, &iVar0))
	{
		return true;
	}
	return false;
}

bool func_50(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_130((*Global_1835011)[iParam0]->f_1);
}

bool func_51(int iParam0)
{
	if (func_72(Global_35, func_131(iParam0, 0), 110f, 1, 1))
	{
		if (!func_72(Global_35, func_131(iParam0, 0), 45f, 1, 1))
		{
			if (!bLocal_24)
			{
				if (iLocal_40 >= 10)
				{
					bLocal_24 = true;
					iLocal_39 = create_tracked_point();
					set_tracked_point_info(iLocal_39, func_131(iParam0, 0), 2f);
					iLocal_40 = 0;
					return true;
				}
				else
				{
					iLocal_40++;
					return true;
				}
			}
			else if (iLocal_40 >= 10)
			{
				if (is_tracked_point_visible(iLocal_39))
				{
					return true;
				}
			}
			else
			{
				iLocal_40++;
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_52(int iParam0)
{
	switch (*iParam0)
	{
		case 404434344:
			if (!func_132() && !func_133())
			{
				if (!func_132())
				{
				}
				if (!func_133())
				{
				}
				return false;
			}
			else if (func_50(77))
			{
				return false;
			}
			else if (func_134() != 0)
			{
				return false;
			}
			break;
		case -1761578407:
			if (iParam0->f_4 == 0)
			{
				if (!func_132() && !func_133())
				{
					if (!func_132())
					{
					}
					if (!func_133())
					{
					}
					return false;
				}
			}
			else if (iParam0->f_4 == 2 || iParam0->f_4 == 3)
			{
				if (!func_135(8924991) && !func_135(665676602))
				{
					if (!func_135(8924991))
					{
					}
					if (!func_135(665676602))
					{
					}
					return false;
				}
			}
			else if (iParam0->f_4 == 4)
			{
				if (!func_135(1488286867))
				{
					return false;
				}
			}
			else if (iParam0->f_4 == 6)
			{
				if (!func_135(651395116))
				{
					return false;
				}
			}
			else if (iParam0->f_4 == 7)
			{
				if (!func_135(-1241340344))
				{
					return false;
				}
			}
			else if (iParam0->f_4 == 8)
			{
				if (!func_135(409602249))
				{
					return false;
				}
			}
			else if (iParam0->f_4 == 5)
			{
			}
			else if (iParam0->f_4 == 1)
			{
			}
			break;
		case -2108030724:
			if (!func_16(26))
			{
				return false;
			}
			break;
		case -1887999095:
			if (!func_16(21))
			{
				return false;
			}
			break;
		case -1240932004:
			if (!func_16(77))
			{
				return false;
			}
			break;
		case 118535038:
			if (!func_16(12))
			{
				return false;
			}
			break;
		case -2008558277:
			if (func_136(19))
			{
				return false;
			}
			break;
		case 221420861:
			if (func_136(29))
			{
				return false;
			}
			break;
		case -1308658310:
			if (func_136(11))
			{
				return false;
			}
			break;
		case 308500632:
			if (!&Global_40.f_11623[20] > 0)
			{
				return false;
			}
			break;
		case 1861313914:
			if (func_50(19) || func_136(4))
			{
				return false;
			}
			break;
		case 1982045664:
			if (func_50(66))
			{
				return false;
			}
			break;
		case 677950956:
			if (!func_15())
			{
				return false;
			}
			break;
	}
	return true;
}

bool func_53(int iParam0)
{
	return func_11(iParam0, 2);
}

void func_54(int iParam0, int iParam1, bool bParam2)
{
	*iParam0 = iParam1;
	if (bParam2)
	{
		func_25(&(iParam0->f_1));
	}
}

void func_55(int iParam0)
{
	func_137(iParam0);
	func_138(iParam0);
	func_139(iParam0);
}

void func_56(int iParam0)
{
	if (*iParam0 == -654238687)
	{
		_0xf008e0ba1fe1d644(10);
	}
	else if (*iParam0 == -2008558277)
	{
		_0xf008e0ba1fe1d644(7);
	}
	else
	{
		_0xf008e0ba1fe1d644(1);
	}
	func_140(&Local_63);
	func_141(&Local_157);
	if (*iParam0 == -415839138)
	{
		func_142(iParam0, &uLocal_31, 64);
	}
	else
	{
		func_142(iParam0, &uLocal_31, 0);
	}
	if (*iParam0 == -415839138)
	{
		request_waypoint_recording("discoverable_monk_flee");
		func_143(iParam0);
	}
}

bool func_57(int iParam0)
{
	if ((!func_144(&Local_63) || !func_145(&Local_157)) || !func_146(iParam0, &uLocal_31))
	{
		return false;
	}
	if (*iParam0 == -415839138)
	{
		if (!get_is_waypoint_recording_loaded("discoverable_monk_flee"))
		{
			return false;
		}
		if (!func_147(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_58()
{
	return func_148(&Global_1935630, 4096);
}

bool func_59(int iParam0)
{
	if (*iParam0 == 1861313914)
	{
		if (func_16(59))
		{
			func_150(&Local_63, func_131(iParam0, 1), func_149(iParam0, 1), 0, 0, 1);
		}
		else
		{
			func_150(&Local_63, func_131(iParam0, 0), func_149(iParam0, 0), 0, 1, 1);
		}
	}
	else if (!func_151(iParam0, &Local_63, &uLocal_86, 0, 1, 1))
	{
		return false;
	}
	if ((*iParam0 == 1861313914 || *iParam0 == -415839138) || *iParam0 == -35775921)
	{
		iVar0 = 0;
		while (iVar0 <= (10 - 1))
		{
			if (!is_entity_dead(&(Local_63.f_1[iVar0])))
			{
				if (!_0xa0bc8faed8cfeb3c(&(Local_63.f_1[iVar0])))
				{
					return false;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (10 - 1))
		{
			if (!is_entity_dead(&(Local_63.f_1[iVar0])))
			{
				if (*iParam0 == 1861313914)
				{
					if (iVar0 == 0)
					{
						if (func_16(59))
						{
							func_153(&(Local_63.f_1[iVar0]), func_152(iParam0, 1));
						}
						else
						{
							func_153(&(Local_63.f_1[iVar0]), func_152(iParam0, 0));
						}
					}
				}
				else
				{
					func_153(&(Local_63.f_1[iVar0]), func_152(iParam0, iVar0));
				}
			}
			iVar0++;
		}
	}
	if (*iParam0 == -415839138)
	{
		if (!is_entity_dead(&(Local_63.f_1[0])))
		{
			stop_ped_speaking(&(Local_63.f_1[0]), true);
			set_ped_config_flag(&(Local_63.f_1[0]), 297, true);
		}
		if (_does_volume_exist(iLocal_41))
		{
			if (!_0x91a5f9cbebb9d936(uLocal_46))
			{
				uLocal_46 = func_154(iLocal_41, 0, 0, 0);
			}
		}
		if (func_15())
		{
			func_155(&uLocal_169, Global_35, "JOHN", 0);
		}
		else
		{
			func_155(&uLocal_169, Global_35, "ARTHUR", 0);
		}
	}
	else if (*iParam0 == -2008558277)
	{
		iVar0 = 0;
		while (iVar0 <= (10 - 1))
		{
			if (!is_entity_dead(&(Local_63.f_1[iVar0])))
			{
				set_blocking_of_non_temporary_events(&(Local_63.f_1[iVar0]), false);
				func_157(&(Local_63.f_1[iVar0]), func_156(iParam0, 0), func_131(iParam0, iVar0), func_149(iParam0, iVar0), 0, 0, 1, 0, -1082130432);
				_0xf1c03a5352243a30(&(Local_63.f_1[iVar0]));
			}
			iVar0++;
		}
	}
	else if (*iParam0 == -654238687)
	{
		if (!func_53(*iParam0))
		{
			if (!func_159(&Local_157, func_71(iParam0, 0), func_158(iParam0, 0), 0))
			{
				return false;
			}
			if (!is_entity_dead(&(Local_157[0])))
			{
				freeze_entity_position(&(Local_157[0]), true);
			}
		}
	}
	else if (*iParam0 == 1861313914)
	{
		if (!is_entity_dead(&(Local_63.f_1[0])))
		{
			stop_ped_speaking(&(Local_63.f_1[0]), true);
			set_ped_can_be_targetted(&(Local_63.f_1[0]), false);
			set_ped_config_flag(&(Local_63.f_1[0]), 273, true);
			set_entity_invincible(&(Local_63.f_1[0]), true);
			set_entity_proofs(&(Local_63.f_1[0]), 127, false);
		}
		if (_does_volume_exist(iLocal_41))
		{
			if (!_0x91a5f9cbebb9d936(uLocal_46))
			{
				uLocal_46 = func_154(iLocal_41, 0, 0, 0);
			}
		}
		func_160(iParam0);
	}
	else if (*iParam0 == -35775921)
	{
		if (!is_entity_dead(&(Local_63.f_1[0])))
		{
			func_161(&(Local_63.f_1[0]), 1);
		}
		if (!func_159(&Local_157, func_71(iParam0, 0), func_158(iParam0, 0), 0))
		{
			return false;
		}
		if (!is_entity_dead(&(Local_157[0])))
		{
			if (!is_entity_dead(&(Local_63.f_1[0])))
			{
				attach_entity_to_entity(&(Local_157[0]), &(Local_63.f_1[0]), get_ped_bone_index(&(Local_63.f_1[0]), 14285), func_162(iParam0), func_163(iParam0), false, false, false, false, 2, true, false, false);
			}
		}
	}
	return true;
}

void func_60(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		func_164(iParam0, (*uParam1)[iVar0], iVar0);
		iVar0++;
	}
}

void func_61(int iParam0)
{
	if (iLocal_59 > 0 && iLocal_59 < 4)
	{
	}
	switch (iLocal_59)
	{
		case 0:
			func_165(&iLocal_59, 4, 1);
			break;
		case 2:
			iLocal_14[7] = 0;
			func_165(&iLocal_59, 1, 1);
			break;
		case 3:
			iLocal_14[6] = 0;
			func_165(&iLocal_59, 1, 1);
			break;
		case 1:
			if (&iLocal_14[6])
			{
				func_165(&iLocal_59, 3, 1);
			}
			else if (&iLocal_14[7])
			{
				func_165(&iLocal_59, 2, 1);
			}
			break;
		case 4:
			break;
	}
}

void func_62(int iParam0)
{
	if (!is_entity_dead(&(Local_63.f_1[0])))
	{
		if (&Local_87[0] > 0 && &Local_87[0] < 23)
		{
			if (!func_16(59))
			{
				if (func_50(19))
				{
					func_166(Local_63.f_1[0], 0);
					func_68(iParam0);
					func_54(&Local_51, 13, 1);
				}
			}
		}
		switch (&Local_87[0])
		{
			case 0:
				if (func_16(59))
				{
					func_167(Local_87[0], 23, 1);
				}
				else if (func_72(Global_35, func_131(iParam0, 0), 30f, 1, 1))
				{
					if (func_33(&(iLocal_48[0])))
					{
						if (!func_168(&(iLocal_48[0]), 0))
						{
							func_169(&(iLocal_48[0]), 1, 1);
							func_34(&(iLocal_48[0]), 1, 1);
						}
					}
					func_170(uLocal_31[0], "base_bool", 1);
					func_171(uLocal_31[0], "pb_mid_a");
					func_171(uLocal_31[0], "pb_count");
					func_167(Local_87[0], 1, 1);
				}
				break;
			case 1:
				if (iLocal_38 < 3)
				{
					if (func_172(&(Local_87[0]->f_1)) >= 4f)
					{
						iLocal_38++;
						force_sonar_blips_this_frame();
						allow_sonar_blips(true);
						_trigger_sonar_blip_2(1715123483, &(Local_63.f_1[0]));
						func_25(&(Local_87[0]->f_1));
					}
				}
				if (func_72(Global_35, func_131(iParam0, 0), 10f, 1, 1))
				{
					if (_does_anim_scene_exist(&(uLocal_31[0])) && _is_anim_scene_loaded(&(uLocal_31[0]), true, false))
					{
						if (_0xa9016536015de29d(&(uLocal_31[0]), "pb_mid_a") && _0x23e33cb9f4a3f547(&(uLocal_31[0]), "pb_mid_a"))
						{
							iLocal_38 = 0;
							func_170(uLocal_31[0], "base_bool", 0);
							func_173(uLocal_31[0], "pb_mid_a");
							func_174(uLocal_31[0], "pb_intial_visit_a");
							func_171(uLocal_31[0], "pb_mid_b");
							func_171(uLocal_31[0], "pb_peek_n");
							func_171(uLocal_31[0], "pb_peek_l");
							func_171(uLocal_31[0], "pb_peek_r");
							func_167(Local_87[0], 2, 1);
						}
					}
				}
				else if (func_175(&(Local_63.f_1[0]), 0, &uLocal_128, &uLocal_156, 0, 0))
				{
					func_171(uLocal_31[0], "pb_scream");
					func_171(uLocal_31[0], "pb_cower_count");
					func_167(Local_87[0], 17, 1);
				}
				else if (_0xa9016536015de29d(&(uLocal_31[0]), "pb_intial_visit_a") && _0x1f0e401031e20146(&(uLocal_31[0]), "pb_intial_visit_a"))
				{
					if (_0x8d81e7824b7753f7(&(uLocal_31[0]), "DIALOG_A_FAR", 1))
					{
						if (get_anim_scene_bool(&(uLocal_31[0]), "base_bool"))
						{
							func_170(uLocal_31[0], "base_bool", 0);
						}
					}
				}
				break;
			case 2:
				if (iLocal_38 < 3)
				{
					if (func_172(&(Local_87[0]->f_1)) >= 4f)
					{
						iLocal_38++;
						force_sonar_blips_this_frame();
						allow_sonar_blips(true);
						_trigger_sonar_blip_2(249295937, &(Local_63.f_1[0]));
						func_25(&(Local_87[0]->f_1));
					}
				}
				if (!func_72(Global_35, func_131(iParam0, 0), 30f, 1, 1))
				{
					func_171(uLocal_31[0], "pb_intial_visit_b");
					func_167(Local_87[0], 19, 1);
				}
				else if (&iLocal_14[1])
				{
					func_174(uLocal_31[0], "pb_mid_a");
					func_174(uLocal_31[0], "pb_mid_b");
					func_174(uLocal_31[0], "pb_mid_c");
					func_174(uLocal_31[0], "pb_intial_visit_a");
					func_174(uLocal_31[0], "pb_intial_visit_b");
					func_167(Local_87[0], 15, 1);
				}
				else if (func_175(&(Local_63.f_1[0]), 0, &uLocal_128, &uLocal_156, 0, 0))
				{
					func_171(uLocal_31[0], "pb_scream");
					func_171(uLocal_31[0], "pb_cower_count");
					func_167(Local_87[0], 17, 1);
				}
				else if (_does_anim_scene_exist(&(uLocal_31[0])) && _is_anim_scene_loaded(&(uLocal_31[0]), true, false))
				{
					if (_0xa9016536015de29d(&(uLocal_31[0]), "pb_mid_a") && _0x1f0e401031e20146(&(uLocal_31[0]), "pb_mid_a"))
					{
						if (_0x8d81e7824b7753f7(&(uLocal_31[0]), "base", 1))
						{
							iLocal_38 = 0;
							func_171(uLocal_31[0], "pb_mid_c");
							func_170(uLocal_31[0], "base_bool", 0);
							func_173(uLocal_31[0], "pb_mid_b");
							func_167(Local_87[0], 4, 1);
						}
					}
				}
				break;
			case 4:
				if (iLocal_38 < 3)
				{
					if (func_172(&(Local_87[0]->f_1)) >= 4f)
					{
						iLocal_38++;
						force_sonar_blips_this_frame();
						allow_sonar_blips(true);
						_trigger_sonar_blip_2(249295937, &(Local_63.f_1[0]));
						func_25(&(Local_87[0]->f_1));
					}
				}
				if (!func_72(Global_35, func_131(iParam0, 0), 30f, 1, 1))
				{
					func_171(uLocal_31[0], "pb_intial_visit_b");
					func_167(Local_87[0], 19, 1);
				}
				else if (&iLocal_14[1])
				{
					func_174(uLocal_31[0], "pb_mid_a");
					func_174(uLocal_31[0], "pb_mid_b");
					func_174(uLocal_31[0], "pb_mid_c");
					func_174(uLocal_31[0], "pb_intial_visit_a");
					func_174(uLocal_31[0], "pb_intial_visit_b");
					func_167(Local_87[0], 15, 1);
				}
				else if (func_175(&(Local_63.f_1[0]), 0, &uLocal_128, &uLocal_156, 0, 0))
				{
					func_171(uLocal_31[0], "pb_scream");
					func_171(uLocal_31[0], "pb_cower_count");
					func_167(Local_87[0], 17, 1);
				}
				else if (_does_anim_scene_exist(&(uLocal_31[0])) && _is_anim_scene_loaded(&(uLocal_31[0]), true, false))
				{
					if (_0xa9016536015de29d(&(uLocal_31[0]), "pb_mid_b") && _0x1f0e401031e20146(&(uLocal_31[0]), "pb_mid_b"))
					{
						if (_0x8d81e7824b7753f7(&(uLocal_31[0]), "base", 1))
						{
							iLocal_38 = 0;
							func_170(uLocal_31[0], "base_bool", 0);
							func_173(uLocal_31[0], "pb_mid_c");
							func_167(Local_87[0], 6, 1);
						}
					}
				}
				break;
			case 6:
				if (iLocal_38 < 3)
				{
					if (func_172(&(Local_87[0]->f_1)) >= 4f)
					{
						iLocal_38++;
						force_sonar_blips_this_frame();
						allow_sonar_blips(true);
						_trigger_sonar_blip_2(249295937, &(Local_63.f_1[0]));
						func_25(&(Local_87[0]->f_1));
					}
				}
				if (!func_72(Global_35, func_131(iParam0, 0), 30f, 1, 1))
				{
					func_171(uLocal_31[0], "pb_intial_visit_b");
					func_167(Local_87[0], 19, 1);
				}
				else if (&iLocal_14[1])
				{
					func_174(uLocal_31[0], "pb_mid_a");
					func_174(uLocal_31[0], "pb_mid_b");
					func_174(uLocal_31[0], "pb_mid_c");
					func_174(uLocal_31[0], "pb_intial_visit_a");
					func_174(uLocal_31[0], "pb_intial_visit_b");
					func_167(Local_87[0], 15, 1);
				}
				else if (func_175(&(Local_63.f_1[0]), 0, &uLocal_128, &uLocal_156, 0, 0))
				{
					func_171(uLocal_31[0], "pb_scream");
					func_171(uLocal_31[0], "pb_cower_count");
					func_167(Local_87[0], 17, 1);
				}
				else if (_does_anim_scene_exist(&(uLocal_31[0])) && _is_anim_scene_loaded(&(uLocal_31[0]), true, false))
				{
					if (_0xa9016536015de29d(&(uLocal_31[0]), "pb_mid_c") && _0x1f0e401031e20146(&(uLocal_31[0]), "pb_mid_c"))
					{
						if (_0x8d81e7824b7753f7(&(uLocal_31[0]), "base", 1))
						{
							func_171(uLocal_31[0], "pb_intial_visit_b");
							func_167(Local_87[0], 19, 1);
						}
					}
				}
				break;
			case 19:
				if (_does_anim_scene_exist(&(uLocal_31[0])) && _is_anim_scene_loaded(&(uLocal_31[0]), true, false))
				{
					if (!_0x23e33cb9f4a3f547(&(uLocal_31[0]), "pb_intial_visit_b"))
					{
						func_171(uLocal_31[0], "pb_intial_visit_b");
					}
					if (_0xa9016536015de29d(&(uLocal_31[0]), "pb_intial_visit_b") && _0x23e33cb9f4a3f547(&(uLocal_31[0]), "pb_intial_visit_b"))
					{
						func_170(uLocal_31[0], "base_bool", 0);
						func_173(uLocal_31[0], "pb_intial_visit_b");
						func_174(uLocal_31[0], "pb_mid_a");
						func_174(uLocal_31[0], "pb_mid_b");
						func_174(uLocal_31[0], "pb_mid_c");
						func_167(Local_87[0], 20, 1);
					}
				}
				break;
			case 20:
				if (&iLocal_14[1])
				{
					func_174(uLocal_31[0], "pb_mid_a");
					func_174(uLocal_31[0], "pb_mid_b");
					func_174(uLocal_31[0], "pb_mid_c");
					func_174(uLocal_31[0], "pb_intial_visit_a");
					func_174(uLocal_31[0], "pb_intial_visit_b");
					func_167(Local_87[0], 15, 1);
				}
				else if (func_175(&(Local_63.f_1[0]), 0, &uLocal_128, &uLocal_156, 0, 0))
				{
					func_171(uLocal_31[0], "pb_scream");
					func_171(uLocal_31[0], "pb_cower_count");
					func_167(Local_87[0], 17, 1);
				}
				else if (_does_anim_scene_exist(&(uLocal_31[0])) && _is_anim_scene_loaded(&(uLocal_31[0]), true, false))
				{
					if ((!get_anim_scene_bool(&(uLocal_31[0]), "base_bool") && _0x8d81e7824b7753f7(&(uLocal_31[0]), "base", 1)) && _get_anim_scene_time(&(uLocal_31[0])) <= 14.27f)
					{
						if (func_72(Global_35, func_131(iParam0, 0), (10f - 1f), 1, 1))
						{
							func_170(uLocal_31[0], "base_bool", 1);
						}
					}
					if (_0xa9016536015de29d(&(uLocal_31[0]), "pb_intial_visit_b") && _0x1f0e401031e20146(&(uLocal_31[0]), "pb_intial_visit_b"))
					{
						if (_0x8d81e7824b7753f7(&(uLocal_31[0]), "DIALOG_B_FAR", 1))
						{
							if (get_anim_scene_bool(&(uLocal_31[0]), "base_bool"))
							{
								func_170(uLocal_31[0], "base_bool", 0);
							}
						}
					}
				}
				break;
			case 15:
				if (_does_volume_exist(iLocal_42) && is_entity_in_volume(Global_35, iLocal_42, true, 0))
				{
					StringCopy(&cLocal_25, "pb_peek_n", 24);
					iLocal_37 = 0;
				}
				else if (func_176(Global_35, func_131(iParam0, 0), func_149(iParam0, 0), 1065353216))
				{
					StringCopy(&cLocal_25, "pb_peek_l", 24);
					iLocal_37 = 1;
				}
				else
				{
					StringCopy(&cLocal_25, "pb_peek_r", 24);
					iLocal_37 = 2;
				}
				task_follow_nav_mesh_to_coord(Global_35, func_177(iParam0, iLocal_37), 1f, 20000, 0.25f, 0, 40000f);
				func_167(Local_87[0], 16, 1);
				break;
			case 16:
				if (func_72(Global_35, func_177(iParam0, iLocal_37), 0.5f, 1, 1))
				{
					func_167(Local_87[0], 7, 1);
				}
				else if (get_script_task_status(Global_35, 713668775, true) == 8)
				{
					func_167(Local_87[0], 7, 1);
				}
				else if (func_172(&(Local_87[0]->f_1)) >= 10f)
				{
					func_167(Local_87[0], 7, 1);
				}
				break;
			case 7:
				func_173(uLocal_31[0], &cLocal_25);
				func_171(uLocal_31[0], "pb_count");
				func_170(uLocal_31[0], "base_bool", 0);
				func_167(Local_87[0], 8, 1);
				break;
			case 8:
				if (_does_anim_scene_exist(&(uLocal_31[0])) && _is_anim_scene_loaded(&(uLocal_31[0]), true, false))
				{
					if (_0xa9016536015de29d(&(uLocal_31[0]), &cLocal_25) && _0x1f0e401031e20146(&(uLocal_31[0]), &cLocal_25))
					{
						if (!&iLocal_14[3])
						{
							if (_get_anim_scene_time(&(uLocal_31[0])) >= 3.5f)
							{
								iLocal_14[3] = 1;
								iLocal_36 = add_shocking_event_for_entity(-171567092, &(Local_63.f_1[0]), -1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
							}
						}
						if (_get_anim_scene_time(&(uLocal_31[0])) >= 5.5f)
						{
							if (!func_39(iParam0->f_3, 1))
							{
								func_40(&(iParam0->f_3), 1);
							}
						}
						if (_0x8d81e7824b7753f7(&(uLocal_31[0]), "base", 1))
						{
							func_170(uLocal_31[0], "count_loop", 0);
							func_173(uLocal_31[0], "pb_count");
							func_167(Local_87[0], 13, 1);
						}
					}
				}
				break;
			case 13:
				if (func_175(&(Local_63.f_1[0]), 0, &uLocal_128, &uLocal_156, 0, 0))
				{
					func_171(uLocal_31[0], "pb_scream");
					func_171(uLocal_31[0], "pb_cower_count");
					func_167(Local_87[0], 17, 1);
				}
				break;
			case 17:
				if (_does_anim_scene_exist(&(uLocal_31[0])) && _is_anim_scene_loaded(&(uLocal_31[0]), true, false))
				{
					if (_0xa9016536015de29d(&(uLocal_31[0]), "pb_scream") && _0x23e33cb9f4a3f547(&(uLocal_31[0]), "pb_scream"))
					{
						iLocal_14[2] = 1;
						func_79(iLocal_48[0], 1, 1);
						func_173(uLocal_31[0], "pb_scream");
						func_167(Local_87[0], 18, 1);
					}
				}
				break;
			case 18:
				if (_does_anim_scene_exist(&(uLocal_31[0])) && _is_anim_scene_loaded(&(uLocal_31[0]), true, false))
				{
					if (_0xa9016536015de29d(&(uLocal_31[0]), "pb_scream") && _0x1f0e401031e20146(&(uLocal_31[0]), "pb_scream"))
					{
						if (_get_anim_scene_time(&(uLocal_31[0])) >= 4.75f)
						{
							func_170(uLocal_31[0], "base_bool", 0);
							func_173(uLocal_31[0], "pb_cower_count");
							func_167(Local_87[0], 22, 1);
						}
					}
				}
				break;
			case 22:
				break;
			case 23:
				break;
		}
	}
}

void func_63(int iParam0)
{
	if (!is_entity_dead(&(Local_63.f_1[0])))
	{
		if (&Local_87[0] > 0 && &Local_87[0] < 23)
		{
			if (func_50(48))
			{
				func_166(Local_63.f_1[0], 0);
				func_68(iParam0);
				func_54(&Local_51, 13, 1);
			}
			if (!&iLocal_14[6])
			{
				if (func_72(Global_35, func_131(iParam0, 0), 20f, 1, 1))
				{
					iLocal_14[6] = 1;
					set_ped_lod_multiplier(&(Local_63.f_1[0]), 2f);
				}
			}
			else if (!func_72(Global_35, func_131(iParam0, 0), 21f, 1, 1))
			{
				iLocal_14[6] = 0;
				set_ped_lod_multiplier(&(Local_63.f_1[0]), 1f);
			}
		}
		switch (&Local_87[0])
		{
			case 0:
				iLocal_38 = 0;
				iLocal_37 = 0;
				bLocal_23 = false;
				if (bLocal_23)
				{
					StringCopy(&cLocal_25, "pbl_base_b", 24);
					func_174(uLocal_31[0], "pbl_base_a");
					func_174(uLocal_31[0], "pbl_brkout_ba_on_l");
					func_174(uLocal_31[0], "pbl_brkout_ba_on_r");
					func_174(uLocal_31[0], "pbl_brkout_ba_on_n");
					func_171(uLocal_31[0], "pbl_base_b");
					func_171(uLocal_31[0], "pbl_brkout_bb_on_l");
					func_171(uLocal_31[0], "pbl_brkout_bb_on_r");
					func_171(uLocal_31[0], "pbl_brkout_bb_on_n");
				}
				else
				{
					StringCopy(&cLocal_25, "pbl_base_a", 24);
					func_174(uLocal_31[0], "pbl_base_b");
					func_174(uLocal_31[0], "pbl_brkout_bb_on_l");
					func_174(uLocal_31[0], "pbl_brkout_bb_on_r");
					func_174(uLocal_31[0], "pbl_brkout_bb_on_n");
					func_171(uLocal_31[0], "pbl_base_a");
					func_171(uLocal_31[0], "pbl_brkout_ba_on_l");
					func_171(uLocal_31[0], "pbl_brkout_ba_on_r");
					func_171(uLocal_31[0], "pbl_brkout_ba_on_n");
				}
				func_174(uLocal_31[0], "pbl_ba_lvl_1_l");
				func_174(uLocal_31[0], "pbl_ba_lvl_1_r");
				func_174(uLocal_31[0], "pbl_ba_lvl_2_l");
				func_174(uLocal_31[0], "pbl_ba_lvl_2_r");
				func_174(uLocal_31[0], "pbl_ba_lvl_3_l");
				func_174(uLocal_31[0], "pbl_ba_lvl_3_r");
				func_174(uLocal_31[0], "pbl_bb_lvl_1_l");
				func_174(uLocal_31[0], "pbl_bb_lvl_1_r");
				func_174(uLocal_31[0], "pbl_bb_lvl_2_l");
				func_174(uLocal_31[0], "pbl_bb_lvl_2_r");
				func_174(uLocal_31[0], "pbl_bb_lvl_3_l");
				func_174(uLocal_31[0], "pbl_bb_lvl_3_r");
				func_178(&uLocal_128);
				func_167(Local_87[0], 14, 1);
				break;
			case 14:
				if (_does_anim_scene_exist(&(uLocal_31[0])) && _is_anim_scene_loaded(&(uLocal_31[0]), true, false))
				{
					if (_0xa9016536015de29d(&(uLocal_31[0]), &cLocal_25) && _0x23e33cb9f4a3f547(&(uLocal_31[0]), &cLocal_25))
					{
						func_173(uLocal_31[0], &cLocal_25);
						func_167(Local_87[0], 13, 1);
					}
				}
				break;
			case 13:
				if (func_72(Global_35, func_131(iParam0, 0), 6f, 1, 1))
				{
					_0x870708a6e147a9ad(&(Local_63.f_1[0]), "", 6f, 0, 0, 0, 0, 0, 0, -1);
					if (iLocal_38 == 0)
					{
						func_174(uLocal_31[0], "pbl_ba_lvl_2_l");
						func_174(uLocal_31[0], "pbl_ba_lvl_2_r");
						func_174(uLocal_31[0], "pbl_bb_lvl_2_l");
						func_174(uLocal_31[0], "pbl_bb_lvl_2_r");
						func_96(&(Local_87[0]->f_1), 2f);
						func_167(Local_87[0], 1, 0);
					}
					else if (iLocal_38 == 1)
					{
						func_174(uLocal_31[0], "pbl_ba_lvl_3_l");
						func_174(uLocal_31[0], "pbl_ba_lvl_3_r");
						func_174(uLocal_31[0], "pbl_bb_lvl_3_l");
						func_174(uLocal_31[0], "pbl_bb_lvl_3_r");
						func_96(&(Local_87[0]->f_1), 2f);
						func_167(Local_87[0], 3, 0);
					}
					else if (iLocal_38 == 2)
					{
						func_174(uLocal_31[0], "pbl_ba_lvl_1_l");
						func_174(uLocal_31[0], "pbl_ba_lvl_1_r");
						func_174(uLocal_31[0], "pbl_bb_lvl_1_l");
						func_174(uLocal_31[0], "pbl_bb_lvl_1_r");
						func_96(&(Local_87[0]->f_1), 2f);
						func_167(Local_87[0], 5, 0);
					}
				}
				else if (func_175(&(Local_63.f_1[0]), 0, &uLocal_128, &uLocal_156, 0, 0))
				{
					if (bLocal_23)
					{
						func_171(uLocal_31[0], "pbl_brkout_bb_on_l");
						func_171(uLocal_31[0], "pbl_brkout_bb_on_r");
						func_171(uLocal_31[0], "pbl_brkout_bb_on_n");
					}
					else
					{
						func_171(uLocal_31[0], "pbl_brkout_ba_on_l");
						func_171(uLocal_31[0], "pbl_brkout_ba_on_r");
						func_171(uLocal_31[0], "pbl_brkout_ba_on_n");
					}
					func_167(Local_87[0], 19, 1);
				}
				break;
			case 1:
				if (func_172(&(Local_87[0]->f_1)) >= 2f)
				{
					if (!func_72(Global_35, func_131(iParam0, 0), 6f, 1, 1))
					{
						_0xe98d55c5983f2509(&(Local_63.f_1[0]));
						func_167(Local_87[0], 13, 1);
					}
					else if (func_175(&(Local_63.f_1[0]), 0, &uLocal_128, &uLocal_156, 0, 0))
					{
						_0xe98d55c5983f2509(&(Local_63.f_1[0]));
						if (bLocal_23)
						{
							func_171(uLocal_31[0], "pbl_brkout_bb_on_l");
							func_171(uLocal_31[0], "pbl_brkout_bb_on_r");
							func_171(uLocal_31[0], "pbl_brkout_bb_on_n");
						}
						else
						{
							func_171(uLocal_31[0], "pbl_brkout_ba_on_l");
							func_171(uLocal_31[0], "pbl_brkout_ba_on_r");
							func_171(uLocal_31[0], "pbl_brkout_ba_on_n");
						}
						func_167(Local_87[0], 19, 1);
					}
					else if (func_179(Local_63.f_1[0]))
					{
						func_160(iParam0);
						if (bLocal_23)
						{
							func_171(uLocal_31[0], "pbl_bb_lvl_1_l");
							func_171(uLocal_31[0], "pbl_bb_lvl_1_r");
						}
						else
						{
							func_171(uLocal_31[0], "pbl_ba_lvl_1_l");
							func_171(uLocal_31[0], "pbl_ba_lvl_1_r");
						}
						func_167(Local_87[0], 2, 1);
					}
				}
				break;
			case 2:
				if (!func_72(Global_35, func_131(iParam0, 0), 6f, 1, 1))
				{
					_0xe98d55c5983f2509(&(Local_63.f_1[0]));
					if (func_33(&(iLocal_48[0])))
					{
						func_79(iLocal_48[0], 1, 1);
					}
					if (func_33(&(iLocal_48[1])))
					{
						func_79(iLocal_48[1], 1, 1);
					}
					func_167(Local_87[0], 13, 1);
				}
				else if (func_175(&(Local_63.f_1[0]), 0, &uLocal_128, &uLocal_156, 0, 0))
				{
					_0xe98d55c5983f2509(&(Local_63.f_1[0]));
					if (func_33(&(iLocal_48[0])))
					{
						func_79(iLocal_48[0], 1, 1);
					}
					if (func_33(&(iLocal_48[1])))
					{
						func_79(iLocal_48[1], 1, 1);
					}
					if (bLocal_23)
					{
						func_171(uLocal_31[0], "pbl_brkout_bb_on_l");
						func_171(uLocal_31[0], "pbl_brkout_bb_on_r");
						func_171(uLocal_31[0], "pbl_brkout_bb_on_n");
					}
					else
					{
						func_171(uLocal_31[0], "pbl_brkout_ba_on_l");
						func_171(uLocal_31[0], "pbl_brkout_ba_on_r");
						func_171(uLocal_31[0], "pbl_brkout_ba_on_n");
					}
					func_167(Local_87[0], 19, 1);
				}
				else if (!func_179(Local_63.f_1[0]))
				{
					if (func_33(&(iLocal_48[0])))
					{
						func_79(iLocal_48[0], 1, 1);
					}
					if (func_33(&(iLocal_48[1])))
					{
						func_79(iLocal_48[1], 1, 1);
					}
					func_167(Local_87[0], 13, 1);
				}
				else if (func_33(&(iLocal_48[0])) && func_180(&(iLocal_48[0]), 1))
				{
					if (!func_39(iParam0->f_3, 1))
					{
						func_40(&(iParam0->f_3), 1);
					}
					if (func_33(&(iLocal_48[0])))
					{
						func_79(iLocal_48[0], 1, 1);
					}
					if (func_33(&(iLocal_48[1])))
					{
						func_79(iLocal_48[1], 1, 1);
					}
					if (func_176(Global_35, func_131(iParam0, 0), func_149(iParam0, 0), 1065353216))
					{
						if (bLocal_23)
						{
							StringCopy(&cLocal_25, "pbl_bb_lvl_1_r", 24);
						}
						else
						{
							StringCopy(&cLocal_25, "pbl_ba_lvl_1_r", 24);
						}
					}
					else if (bLocal_23)
					{
						StringCopy(&cLocal_25, "pbl_bb_lvl_1_l", 24);
					}
					else
					{
						StringCopy(&cLocal_25, "pbl_ba_lvl_1_l", 24);
					}
					func_173(uLocal_31[0], &cLocal_25);
					iLocal_38 = 1;
					if (func_181(1))
					{
						func_182(1, 0, 0);
					}
					if (func_15())
					{
						StringCopy(&cLocal_28, "DMONK_GREET_J", 24);
					}
					else
					{
						StringCopy(&cLocal_28, "DMONK_GREET_A", 24);
					}
					func_183(&uLocal_169, cLocal_28, 0, -1, 0, 0);
					func_167(Local_87[0], 3, 1);
				}
				else if (func_33(&(iLocal_48[1])) && func_180(&(iLocal_48[1]), 1))
				{
					if (!func_39(iParam0->f_3, 1))
					{
						func_40(&(iParam0->f_3), 1);
					}
					if (func_33(&(iLocal_48[0])))
					{
						func_79(iLocal_48[0], 1, 1);
					}
					if (func_33(&(iLocal_48[1])))
					{
						func_79(iLocal_48[1], 1, 1);
					}
					if (func_176(Global_35, func_131(iParam0, 0), func_149(iParam0, 0), 1065353216))
					{
						if (bLocal_23)
						{
							StringCopy(&cLocal_25, "pbl_bb_lvl_1_r", 24);
						}
						else
						{
							StringCopy(&cLocal_25, "pbl_ba_lvl_1_r", 24);
						}
					}
					else if (bLocal_23)
					{
						StringCopy(&cLocal_25, "pbl_bb_lvl_1_l", 24);
					}
					else
					{
						StringCopy(&cLocal_25, "pbl_ba_lvl_1_l", 24);
					}
					func_173(uLocal_31[0], &cLocal_25);
					iLocal_38 = 1;
					if (func_181(1))
					{
						func_182(1, 0, 0);
					}
					if (func_15())
					{
						StringCopy(&cLocal_28, "DMONK_ANTAG_J", 24);
					}
					else
					{
						StringCopy(&cLocal_28, "DMONK_ANTAG_A", 24);
					}
					func_183(&uLocal_169, cLocal_28, 0, -1, 0, 0);
					func_167(Local_87[0], 3, 1);
				}
				break;
			case 3:
				if (func_172(&(Local_87[0]->f_1)) >= 2f)
				{
					if (!func_72(Global_35, func_131(iParam0, 0), 6f, 1, 1))
					{
						_0xe98d55c5983f2509(&(Local_63.f_1[0]));
						func_167(Local_87[0], 13, 1);
					}
					else if (func_175(&(Local_63.f_1[0]), 0, &uLocal_128, &uLocal_156, 0, 0))
					{
						_0xe98d55c5983f2509(&(Local_63.f_1[0]));
						if (bLocal_23)
						{
							func_171(uLocal_31[0], "pbl_brkout_bb_on_l");
							func_171(uLocal_31[0], "pbl_brkout_bb_on_r");
							func_171(uLocal_31[0], "pbl_brkout_bb_on_n");
						}
						else
						{
							func_171(uLocal_31[0], "pbl_brkout_ba_on_l");
							func_171(uLocal_31[0], "pbl_brkout_ba_on_r");
							func_171(uLocal_31[0], "pbl_brkout_ba_on_n");
						}
						func_167(Local_87[0], 19, 1);
					}
					else if (func_179(Local_63.f_1[0]))
					{
						func_160(iParam0);
						if (bLocal_23)
						{
							func_171(uLocal_31[0], "pbl_bb_lvl_2_l");
							func_171(uLocal_31[0], "pbl_bb_lvl_2_r");
						}
						else
						{
							func_171(uLocal_31[0], "pbl_ba_lvl_2_l");
							func_171(uLocal_31[0], "pbl_ba_lvl_2_r");
						}
						func_167(Local_87[0], 4, 1);
					}
				}
				break;
			case 4:
				if (!func_72(Global_35, func_131(iParam0, 0), 6f, 1, 1))
				{
					_0xe98d55c5983f2509(&(Local_63.f_1[0]));
					if (func_33(&(iLocal_48[0])))
					{
						func_79(iLocal_48[0], 1, 1);
					}
					if (func_33(&(iLocal_48[1])))
					{
						func_79(iLocal_48[1], 1, 1);
					}
					func_167(Local_87[0], 13, 1);
				}
				else if (func_175(&(Local_63.f_1[0]), 0, &uLocal_128, &uLocal_156, 0, 0))
				{
					_0xe98d55c5983f2509(&(Local_63.f_1[0]));
					if (func_33(&(iLocal_48[0])))
					{
						func_79(iLocal_48[0], 1, 1);
					}
					if (func_33(&(iLocal_48[1])))
					{
						func_79(iLocal_48[1], 1, 1);
					}
					if (bLocal_23)
					{
						func_171(uLocal_31[0], "pbl_brkout_bb_on_l");
						func_171(uLocal_31[0], "pbl_brkout_bb_on_r");
						func_171(uLocal_31[0], "pbl_brkout_bb_on_n");
					}
					else
					{
						func_171(uLocal_31[0], "pbl_brkout_ba_on_l");
						func_171(uLocal_31[0], "pbl_brkout_ba_on_r");
						func_171(uLocal_31[0], "pbl_brkout_ba_on_n");
					}
					func_167(Local_87[0], 19, 1);
				}
				else if (!func_179(Local_63.f_1[0]))
				{
					if (func_33(&(iLocal_48[0])))
					{
						func_79(iLocal_48[0], 1, 1);
					}
					if (func_33(&(iLocal_48[1])))
					{
						func_79(iLocal_48[1], 1, 1);
					}
					func_167(Local_87[0], 13, 1);
				}
				else if (func_33(&(iLocal_48[0])) && func_180(&(iLocal_48[0]), 1))
				{
					if (func_33(&(iLocal_48[0])))
					{
						func_79(iLocal_48[0], 1, 1);
					}
					if (func_33(&(iLocal_48[1])))
					{
						func_79(iLocal_48[1], 1, 1);
					}
					if (func_176(Global_35, func_131(iParam0, 0), func_149(iParam0, 0), 1065353216))
					{
						if (bLocal_23)
						{
							StringCopy(&cLocal_25, "pbl_bb_lvl_2_r", 24);
						}
						else
						{
							StringCopy(&cLocal_25, "pbl_ba_lvl_2_r", 24);
						}
					}
					else if (bLocal_23)
					{
						StringCopy(&cLocal_25, "pbl_bb_lvl_2_l", 24);
					}
					else
					{
						StringCopy(&cLocal_25, "pbl_ba_lvl_2_l", 24);
					}
					func_173(uLocal_31[0], &cLocal_25);
					iLocal_38 = 2;
					if (func_181(1))
					{
						func_182(1, 0, 0);
					}
					if (func_15())
					{
						StringCopy(&cLocal_28, "DMONK_GREET_J", 24);
					}
					else
					{
						StringCopy(&cLocal_28, "DMONK_GREET_A", 24);
					}
					func_183(&uLocal_169, cLocal_28, 0, -1, 0, 0);
					func_167(Local_87[0], 5, 1);
				}
				else if (func_33(&(iLocal_48[1])) && func_180(&(iLocal_48[1]), 1))
				{
					if (func_33(&(iLocal_48[0])))
					{
						func_79(iLocal_48[0], 1, 1);
					}
					if (func_33(&(iLocal_48[1])))
					{
						func_79(iLocal_48[1], 1, 1);
					}
					if (func_176(Global_35, func_131(iParam0, 0), func_149(iParam0, 0), 1065353216))
					{
						if (bLocal_23)
						{
							StringCopy(&cLocal_25, "pbl_bb_lvl_2_r", 24);
						}
						else
						{
							StringCopy(&cLocal_25, "pbl_ba_lvl_2_r", 24);
						}
					}
					else if (bLocal_23)
					{
						StringCopy(&cLocal_25, "pbl_bb_lvl_2_l", 24);
					}
					else
					{
						StringCopy(&cLocal_25, "pbl_ba_lvl_2_l", 24);
					}
					func_173(uLocal_31[0], &cLocal_25);
					iLocal_38 = 2;
					if (func_181(1))
					{
						func_182(1, 0, 0);
					}
					if (func_15())
					{
						StringCopy(&cLocal_28, "DMONK_ANTAG_J", 24);
					}
					else
					{
						StringCopy(&cLocal_28, "DMONK_ANTAG_A", 24);
					}
					func_183(&uLocal_169, cLocal_28, 0, -1, 0, 0);
					func_167(Local_87[0], 5, 1);
				}
				break;
			case 5:
				if (func_172(&(Local_87[0]->f_1)) >= 2f)
				{
					if (!func_72(Global_35, func_131(iParam0, 0), 6f, 1, 1))
					{
						_0xe98d55c5983f2509(&(Local_63.f_1[0]));
						func_167(Local_87[0], 13, 1);
					}
					else if (func_175(&(Local_63.f_1[0]), 0, &uLocal_128, &uLocal_156, 0, 0))
					{
						_0xe98d55c5983f2509(&(Local_63.f_1[0]));
						if (bLocal_23)
						{
							func_171(uLocal_31[0], "pbl_brkout_bb_on_l");
							func_171(uLocal_31[0], "pbl_brkout_bb_on_r");
							func_171(uLocal_31[0], "pbl_brkout_bb_on_n");
						}
						else
						{
							func_171(uLocal_31[0], "pbl_brkout_ba_on_l");
							func_171(uLocal_31[0], "pbl_brkout_ba_on_r");
							func_171(uLocal_31[0], "pbl_brkout_ba_on_n");
						}
						func_167(Local_87[0], 19, 1);
					}
					else if (func_179(Local_63.f_1[0]))
					{
						func_160(iParam0);
						func_174(uLocal_31[0], "pbl_ba_lvl_1_l");
						func_174(uLocal_31[0], "pbl_ba_lvl_1_r");
						func_174(uLocal_31[0], "pbl_bb_lvl_1_l");
						func_174(uLocal_31[0], "pbl_bb_lvl_1_r");
						if (bLocal_23)
						{
							func_171(uLocal_31[0], "pbl_bb_lvl_3_l");
							func_171(uLocal_31[0], "pbl_bb_lvl_3_r");
						}
						else
						{
							func_171(uLocal_31[0], "pbl_ba_lvl_3_l");
							func_171(uLocal_31[0], "pbl_ba_lvl_3_r");
						}
						func_167(Local_87[0], 6, 1);
					}
				}
				break;
			case 6:
				if (!func_72(Global_35, func_131(iParam0, 0), 6f, 1, 1))
				{
					_0xe98d55c5983f2509(&(Local_63.f_1[0]));
					if (func_33(&(iLocal_48[0])))
					{
						func_79(iLocal_48[0], 1, 1);
					}
					if (func_33(&(iLocal_48[1])))
					{
						func_79(iLocal_48[1], 1, 1);
					}
					func_167(Local_87[0], 13, 1);
				}
				else if (func_175(&(Local_63.f_1[0]), 0, &uLocal_128, &uLocal_156, 0, 0))
				{
					_0xe98d55c5983f2509(&(Local_63.f_1[0]));
					if (func_33(&(iLocal_48[0])))
					{
						func_79(iLocal_48[0], 1, 1);
					}
					if (func_33(&(iLocal_48[1])))
					{
						func_79(iLocal_48[1], 1, 1);
					}
					if (bLocal_23)
					{
						func_171(uLocal_31[0], "pbl_brkout_bb_on_l");
						func_171(uLocal_31[0], "pbl_brkout_bb_on_r");
						func_171(uLocal_31[0], "pbl_brkout_bb_on_n");
					}
					else
					{
						func_171(uLocal_31[0], "pbl_brkout_ba_on_l");
						func_171(uLocal_31[0], "pbl_brkout_ba_on_r");
						func_171(uLocal_31[0], "pbl_brkout_ba_on_n");
					}
					func_167(Local_87[0], 19, 1);
				}
				else if (!func_179(Local_63.f_1[0]))
				{
					if (func_33(&(iLocal_48[0])))
					{
						func_79(iLocal_48[0], 1, 1);
					}
					if (func_33(&(iLocal_48[1])))
					{
						func_79(iLocal_48[1], 1, 1);
					}
					func_167(Local_87[0], 13, 1);
				}
				else if (func_33(&(iLocal_48[0])) && func_180(&(iLocal_48[0]), 1))
				{
					if (func_33(&(iLocal_48[0])))
					{
						func_79(iLocal_48[0], 1, 1);
					}
					if (func_33(&(iLocal_48[1])))
					{
						func_79(iLocal_48[1], 1, 1);
					}
					if (func_176(Global_35, func_131(iParam0, 0), func_149(iParam0, 0), 1065353216))
					{
						if (bLocal_23)
						{
							StringCopy(&cLocal_25, "pbl_bb_lvl_3_r", 24);
						}
						else
						{
							StringCopy(&cLocal_25, "pbl_ba_lvl_3_r", 24);
						}
					}
					else if (bLocal_23)
					{
						StringCopy(&cLocal_25, "pbl_bb_lvl_3_l", 24);
					}
					else
					{
						StringCopy(&cLocal_25, "pbl_ba_lvl_3_l", 24);
					}
					func_173(uLocal_31[0], &cLocal_25);
					iLocal_38 = 0;
					if (iLocal_37 == 0)
					{
						iLocal_37 = 1;
						bLocal_23 = true;
					}
					else
					{
						iLocal_37 = 0;
						bLocal_23 = false;
					}
					if (func_181(1))
					{
						func_182(1, 0, 0);
					}
					if (func_15())
					{
						StringCopy(&cLocal_28, "DMONK_GREET_J", 24);
					}
					else
					{
						StringCopy(&cLocal_28, "DMONK_GREET_A", 24);
					}
					func_183(&uLocal_169, cLocal_28, 0, -1, 0, 0);
					func_167(Local_87[0], 1, 1);
				}
				else if (func_33(&(iLocal_48[1])) && func_180(&(iLocal_48[1]), 1))
				{
					if (func_33(&(iLocal_48[0])))
					{
						func_79(iLocal_48[0], 1, 1);
					}
					if (func_33(&(iLocal_48[1])))
					{
						func_79(iLocal_48[1], 1, 1);
					}
					if (func_176(Global_35, func_131(iParam0, 0), func_149(iParam0, 0), 1065353216))
					{
						if (bLocal_23)
						{
							StringCopy(&cLocal_25, "pbl_bb_lvl_3_r", 24);
						}
						else
						{
							StringCopy(&cLocal_25, "pbl_ba_lvl_3_r", 24);
						}
					}
					else if (bLocal_23)
					{
						StringCopy(&cLocal_25, "pbl_bb_lvl_3_l", 24);
					}
					else
					{
						StringCopy(&cLocal_25, "pbl_ba_lvl_3_l", 24);
					}
					func_173(uLocal_31[0], &cLocal_25);
					iLocal_38 = 0;
					if (iLocal_37 == 0)
					{
						iLocal_37 = 1;
						bLocal_23 = true;
					}
					else
					{
						iLocal_37 = 0;
						bLocal_23 = false;
					}
					if (func_181(1))
					{
						func_182(1, 0, 0);
					}
					if (func_15())
					{
						StringCopy(&cLocal_28, "DMONK_ANTAG_J", 24);
					}
					else
					{
						StringCopy(&cLocal_28, "DMONK_ANTAG_A", 24);
					}
					func_183(&uLocal_169, cLocal_28, 0, -1, 0, 0);
					func_167(Local_87[0], 1, 1);
				}
				break;
			case 19:
				if (!func_39(iParam0->f_3, 1))
				{
					func_40(&(iParam0->f_3), 1);
				}
				if (bLocal_23)
				{
					if (_does_volume_exist(iLocal_41) && is_entity_in_volume(Global_35, iLocal_41, true, 0))
					{
						StringCopy(&cLocal_25, "pbl_brkout_bb_on_n", 24);
					}
					else if (func_176(Global_35, func_131(iParam0, 0), func_149(iParam0, 0), 1065353216))
					{
						StringCopy(&cLocal_25, "pbl_brkout_bb_on_r", 24);
					}
					else
					{
						StringCopy(&cLocal_25, "pbl_brkout_bb_on_l", 24);
					}
				}
				else if (_does_volume_exist(iLocal_41) && is_entity_in_volume(Global_35, iLocal_41, true, 0))
				{
					StringCopy(&cLocal_25, "pbl_brkout_ba_on_n", 24);
				}
				else if (func_176(Global_35, func_131(iParam0, 0), func_149(iParam0, 0), 1065353216))
				{
					StringCopy(&cLocal_25, "pbl_brkout_ba_on_r", 24);
				}
				else
				{
					StringCopy(&cLocal_25, "pbl_brkout_ba_on_l", 24);
				}
				func_173(uLocal_31[0], &cLocal_25);
				func_167(Local_87[0], 20, 1);
				break;
			case 20:
				if (_does_anim_scene_exist(&(uLocal_31[0])) && _is_anim_scene_loaded(&(uLocal_31[0]), true, false))
				{
					if (_0xa9016536015de29d(&(uLocal_31[0]), &cLocal_25) && _0x1f0e401031e20146(&(uLocal_31[0]), &cLocal_25))
					{
						if (_get_anim_scene_progress(&(uLocal_31[0])) >= 0.9f)
						{
							func_167(Local_87[0], 21, 1);
						}
					}
				}
				break;
			case 21:
				set_blocking_of_non_temporary_events(&(Local_63.f_1[0]), true);
				open_sequence_task(&iLocal_44);
				task_follow_waypoint_recording(0, "discoverable_monk_flee", 0, 9226, -1, 0, 0, -1);
				task_smart_flee_ped(0, Global_35, 350f, -1, 0, 1077936128, 0);
				close_sequence_task(iLocal_44);
				task_perform_sequence(&(Local_63.f_1[0]), iLocal_44);
				clear_sequence_task(&iLocal_44);
				func_167(Local_87[0], 22, 1);
				break;
			case 22:
				if (!func_184(&(Local_63.f_1[0]), Global_35, 90f, 1))
				{
					set_blocking_of_non_temporary_events(&(Local_63.f_1[0]), false);
					set_ped_keep_task(&(Local_63.f_1[0]), true);
					func_166(Local_63.f_1[0], 1);
					func_167(Local_87[0], 23, 1);
				}
				else if (func_172(&(Local_87[0]->f_1)) >= 90f)
				{
					set_blocking_of_non_temporary_events(&(Local_63.f_1[0]), false);
					set_ped_keep_task(&(Local_63.f_1[0]), true);
					func_166(Local_63.f_1[0], 1);
					func_167(Local_87[0], 23, 1);
				}
				break;
			case 23:
				break;
		}
	}
}

void func_64(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (!is_entity_dead(&(Local_63.f_1[iVar0])))
		{
			if (&Local_87[iVar0] > 0 && &Local_87[iVar0] < 23)
			{
			}
			switch (&Local_87[iVar0])
			{
				case 0:
					if (func_33(&(iLocal_48[0])))
					{
						if (func_168(&(iLocal_48[0]), 0))
						{
							func_169(&(iLocal_48[0]), 0, 1);
							func_34(&(iLocal_48[0]), 0, 1);
						}
					}
					if (*iParam0 == -654238687 || *iParam0 == -35775921)
					{
						set_blocking_of_non_temporary_events(&(Local_63.f_1[iVar0]), false);
						if (_does_volume_exist(iLocal_42))
						{
							task_wander_in_volume(&(Local_63.f_1[iVar0]), iLocal_42, 1077936128, 1086324736, 0);
						}
						func_167(Local_87[iVar0], 13, 1);
					}
					else if (*iParam0 == -2008558277)
					{
						func_167(Local_87[iVar0], 13, 1);
					}
					else
					{
						func_167(Local_87[iVar0], 23, 1);
					}
					break;
				case 1:
					if (func_72(Global_35, func_131(iParam0, 0), 90f, 1, 1))
					{
						if (!_does_scenario_point_exist(iLocal_45))
						{
							iLocal_45 = func_186(func_156(iParam0, 0), func_91(iParam0, 0), func_185(iParam0, 0), 0, 0, 0);
						}
						else
						{
							iLocal_14[7] = 1;
							_0xf1c03a5352243a30(&(Local_63.f_1[iVar0]));
							set_blocking_of_non_temporary_events(&(Local_63.f_1[iVar0]), false);
							open_sequence_task(&iLocal_44);
							task_follow_nav_mesh_to_coord(0, func_91(iParam0, 0), 1f, 20000, 0.25f, 0, 40000f);
							_task_use_scenario_point(0, iLocal_45, func_187(iParam0), -1, true, false, func_156(iParam0, 0), false, -1f, false);
							close_sequence_task(iLocal_44);
							task_perform_sequence(&(Local_63.f_1[iVar0]), iLocal_44);
							clear_sequence_task(&iLocal_44);
							func_167(Local_87[iVar0], 2, 1);
						}
					}
					break;
				case 2:
					break;
				case 15:
					iLocal_14[1] = 1;
					func_167(Local_87[iVar0], 13, 1);
					break;
				case 13:
					if ((*iParam0 == -654238687 || *iParam0 == -2008558277) || *iParam0 == -35775921)
					{
						if (*iParam0 == -2008558277)
						{
							if (!is_ped_using_any_scenario(&(Local_63.f_1[iVar0])))
							{
								set_blocking_of_non_temporary_events(&(Local_63.f_1[iVar0]), true);
								open_sequence_task(&iLocal_44);
								task_fly_away(0, get_player_ped(get_player_index()));
								close_sequence_task(iLocal_44);
								task_perform_sequence(&(Local_63.f_1[iVar0]), iLocal_44);
								clear_sequence_task(&iLocal_44);
								_0xfdb008b3bcf5992f(&(Local_63.f_1[iVar0]), 30f, 30f);
								_0x2df3d457d86f8e57(&(Local_63.f_1[iVar0]), 100f);
								if (!&iLocal_14[2])
								{
									iLocal_14[2] = 1;
									if (iVar0 == 5 || iVar0 == 6)
									{
										iLocal_36 = add_shocking_event_at_position(-998484125, func_188(0), -1f, -1f, -1f, -1f, -1f, 3, 1);
									}
									else
									{
										iLocal_36 = add_shocking_event_at_position(-998484125, func_188(1), -1f, -1f, -1f, -1f, -1f, 3, 1);
									}
									if (does_entity_exist(get_mount(Global_35)) && !is_entity_dead(get_mount(Global_35)))
									{
										_0x23bde06596a22cec(get_mount(Global_35), 1, 0.15f, &(Local_63.f_1[iVar0]));
									}
									_0x23bde06596a22cec(Global_35, 1, 1f, &(Local_63.f_1[iVar0]));
								}
								func_167(Local_87[iVar0], 20, 1);
							}
						}
						else if (*iParam0 == -654238687)
						{
							if (_does_volume_exist(iLocal_41) && is_entity_in_volume(Global_35, iLocal_41, true, 0))
							{
								func_189(&Local_63, 1, iVar0);
							}
						}
					}
					else if (!func_48(iParam0) || !func_49(iParam0))
					{
						func_167(Local_87[iVar0], 19, 1);
					}
					else if (func_175(&(Local_63.f_1[iVar0]), 0, &uLocal_128, &uLocal_156, 0, 0))
					{
						func_167(Local_87[iVar0], 17, 1);
					}
					break;
				case 17:
					iLocal_14[2] = 1;
					func_79(iLocal_48[0], 1, 1);
					set_blocking_of_non_temporary_events(&(Local_63.f_1[iVar0]), true);
					task_cower(&(Local_63.f_1[iVar0]), -1, 0, 0);
					func_167(Local_87[iVar0], 19, 1);
					break;
				case 19:
					if (func_33(&(iLocal_48[0])))
					{
						func_79(iLocal_48[0], 1, 1);
					}
					if (!is_entity_in_volume(Global_35, iLocal_41, true, 0) && !func_72(Global_35, func_91(iParam0, 0), 1.5f, 1, 1))
					{
						iLocal_14[4] = 1;
						iLocal_14[7] = 1;
						set_blocking_of_non_temporary_events(&(Local_63.f_1[iVar0]), true);
						task_follow_nav_mesh_to_coord(&(Local_63.f_1[iVar0]), func_131(iParam0, 0), 1.5f, 20000, 0.25f, 0, 40000f);
						func_167(Local_87[iVar0], 20, 1);
					}
					break;
				case 20:
					if (*iParam0 == -2008558277)
					{
						if (!func_72(&(Local_63.f_1[iVar0]), func_131(iParam0, 0), 90f, 1, 1))
						{
							func_166(Local_63.f_1[iVar0], 1);
							func_167(Local_87[iVar0], 23, 1);
						}
					}
					else if (func_172(&(Local_87[iVar0]->f_1)) >= 10f)
					{
						iLocal_14[6] = 1;
						func_166(Local_63.f_1[iVar0], 0);
						func_167(Local_87[iVar0], 23, 1);
					}
					else if (is_valid_interior(get_interior_from_entity(&(Local_63.f_1[iVar0]))))
					{
						func_166(Local_63.f_1[iVar0], 0);
						func_167(Local_87[iVar0], 23, 1);
					}
					else if (get_script_task_status(&(Local_63.f_1[iVar0]), 713668775, true) == 8)
					{
						iLocal_14[6] = 1;
						func_166(Local_63.f_1[iVar0], 0);
						func_167(Local_87[iVar0], 23, 1);
					}
					else if (get_script_task_status(&(Local_63.f_1[iVar0]), 713668775, true) == 1)
					{
					}
					break;
				case 22:
					if (!func_72(&(Local_63.f_1[iVar0]), func_131(iParam0, 1), 90f, 1, 1))
					{
						if (!func_190(&(Local_63.f_1[iVar0]), 110f, -1082130432, -1082130432, -1082130432))
						{
							func_166(Local_63.f_1[iVar0], 0);
							func_167(Local_87[iVar0], 23, 1);
						}
					}
					break;
				case 23:
					if (!*iParam0 == -2008558277)
					{
						if (!&iLocal_14[5])
						{
							iLocal_14[5] = 1;
						}
					}
					break;
			}
		}
		iVar0++;
	}
}

void func_65(int iParam0)
{
	if (iLocal_55 > 0 && iLocal_55 < 11)
	{
	}
	switch (iLocal_55)
	{
		case 0:
			func_191(&iLocal_55, 11, 1);
			break;
		case 1:
			break;
		case 11:
			break;
	}
}

void func_66(int iParam0)
{
	if (!func_11(iParam0, 32))
	{
		func_32(iParam0, 32);
		_0xf5ead898ef387e73(iParam0);
		if (func_192(iParam0))
		{
			func_194(func_193(795577402), 1);
		}
	}
}

void func_67(int iParam0)
{
	if (!func_53(*iParam0))
	{
		func_195(*iParam0);
		func_70(iParam0);
	}
}

void func_68(int iParam0)
{
	if (_does_volume_exist(iLocal_41))
	{
		func_196(&uLocal_46, iLocal_41, 0);
	}
	if (_does_scenario_point_exist(iLocal_45))
	{
		_delete_scenario_point(iLocal_45);
	}
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		func_79(iLocal_48[iVar0], 1, 1);
		iVar0++;
	}
	if (does_cam_exist(iLocal_47))
	{
		destroy_cam(iLocal_47, false);
	}
	if (*iParam0 == -415839138)
	{
		if (func_181(1))
		{
			func_182(1, 0, 0);
		}
		if (_is_tracked_point_valid(iLocal_39))
		{
			destroy_tracked_point(iLocal_39);
		}
		func_197();
		if (_does_anim_scene_exist(&(uLocal_31[0])))
		{
			_delete_anim_scene(&(uLocal_31[0]));
		}
	}
	if (*iParam0 == -654238687)
	{
		func_69(&Local_63, 1);
	}
}

void func_69(var uParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		func_189(uParam0, bParam1, iVar0);
		iVar0++;
	}
}

void func_70(int iParam0)
{
	if (func_92() != -1)
	{
		return;
	}
	if (func_198(*iParam0) != 0)
	{
		if (!_map_is_discovery_active(func_198(*iParam0)))
		{
			_0xd8c7162ab2e2af45(func_198(*iParam0));
		}
		func_32(*iParam0, 8);
	}
}

Vector3 func_71(int iParam0, int iParam1)
{
	switch (*iParam0)
	{
		case -1481450947:
			switch (iParam1)
			{
				case 0:
					return 1268.29f, -386.947f, 88.4659f;
				default:
					break;
			}
			break;
		case -1427565340:
			switch (iParam1)
			{
				case 0:
					return 2255.46f, -753.712f, 42.5807f;
				case 1:
					return 2255.29f, -753.756f, 42.8407f;
				default:
					break;
			}
			break;
		case -763376358:
			switch (iParam1)
			{
				case 0:
					return 2545.93f, 800.34f, 77.013f;
				default:
					break;
			}
			break;
		case 1801731633:
			switch (iParam1)
			{
				case 0:
					return 2286.46f, -727.94f, 42.98f;
				default:
					break;
			}
			break;
		case 1490223565:
			switch (iParam1)
			{
				case 0:
					return -5151.3f, -2118.4f, 13f;
				default:
					break;
			}
			break;
		case -777592153:
			switch (iParam1)
			{
				case 0:
					return 1123.43f, 430.557f, 95.3598f;
				default:
					break;
			}
			break;
		case 1342653896:
			switch (iParam1)
			{
				case 0:
					return -3338.99f, -2501.585f, 1.926f;
				default:
					break;
			}
			break;
		case -1308658310:
			switch (iParam1)
			{
				case 0:
					return -2334.66f, 102.11f, 221.988f;
				case 1:
					return -2351.106f, 111.0932f, 217f;
				case 2:
					return -2351.33f, 110.337f, 216.825f;
				default:
					break;
			}
			break;
		case 425000526:
			switch (iParam1)
			{
				case 0:
					return -2367.9f, 124.4f, 215.94f;
				case 1:
					return -2366.67f, 124.726f, 215.914f;
				default:
					break;
			}
			break;
		case 2134589549:
			switch (iParam1)
			{
				case 0:
					return -1619.97f, 1353.525f, 356.399f;
				default:
					break;
			}
			break;
		case 733338689:
			switch (iParam1)
			{
				case 0:
					return 2383.35f, 1695.3f, 96.018f;
				default:
					break;
			}
			break;
		case 1124200691:
			switch (iParam1)
			{
				case 0:
					return 2442.855f, 287.212f, 66.39f;
				default:
					break;
			}
			break;
		case -1859413640:
			switch (iParam1)
			{
				case 0:
					return 2195.15f, -554.37f, 41.02f;
				case 1:
					return 2195.38f, -554.33f, 41.02f;
				default:
					break;
			}
			break;
		case -1300082860:
			switch (iParam1)
			{
				case 0:
					return 365.9631f, -16.5072f, 99.3002f;
				default:
					break;
			}
			break;
		case -1420566543:
			switch (iParam1)
			{
				case 0:
					return 1068.42f, -2024.7f, 49.25f;
				default:
					break;
			}
			break;
		case -1208846034:
			switch (iParam1)
			{
				case 0:
					return 1581.16f, -1383.19f, 55.3f;
				default:
					break;
			}
			break;
		case 1048086072:
			switch (iParam1)
			{
				case 0:
					return -2311.151f, -2380.23f, 64.66f;
				default:
					break;
			}
			break;
		case 939555152:
			switch (iParam1)
			{
				case 0:
					return 1139.765f, 464.21f, 98.375f;
				default:
					break;
			}
			break;
		case -657632:
			switch (iParam1)
			{
				case 0:
					return 2685.89f, 70.2216f, 58.3001f;
				default:
					break;
			}
			break;
		case -1061274876:
			switch (iParam1)
			{
				case 0:
					return 180.217f, 1304.7f, 178.603f;
				case 1:
					return 180.267f, 1304.62f, 178.607f;
				case 2:
					return 180.387f, 1304.79f, 178.601f;
				case 3:
					return 180.397f, 1304.7f, 178.605f;
				case 4:
					return 180.437f, 1304.66f, 178.599f;
				default:
					break;
			}
			break;
		case 513110082:
			if (iParam0->f_4 == 0)
			{
				switch (iParam1)
				{
					case 0:
						return -2530.628f, 1173.581f, 225.1708f;
					default:
						break;
				}
			}
			else if (iParam0->f_4 == 1)
			{
				switch (iParam1)
				{
					case 0:
						return 3029.425f, 1775.791f, 83.79f;
					default:
						break;
				}
			}
			else if (iParam0->f_4 == 2)
			{
				switch (iParam1)
				{
					case 0:
						return -4394.6f, -2159.37f, 47.498f;
					case 1:
						return -4394.685f, -2159.115f, 47.5059f;
					case 2:
						return -4394.76f, -2159.05f, 47.498f;
					case 3:
						return -4394.446f, -2159.219f, 47.523f;
					case 4:
						return -4394.639f, -2159.254f, 47.499f;
					default:
						break;
				}
			}
			break;
		case 1335921989:
			switch (iParam1)
			{
				case 0:
					return 2811.864f, 996.6885f, 53.9353f;
				default:
					break;
			}
			break;
		case 2135153015:
			switch (iParam1)
			{
				case 0:
					return -161.8621f, 1734.902f, 170.799f;
				case 1:
					return -161.862f, 1734.9f, 170.687f;
				default:
					break;
			}
			break;
		case -35775921:
			switch (iParam1)
			{
				case 0:
					return 1141.463f, 763.3734f, 95.371f;
				default:
					break;
			}
			break;
		case -709811179:
			switch (iParam1)
			{
				case 0:
					return 2289.75f, 2081.3f, 199.581f;
				default:
					break;
			}
			break;
		case 464413478:
			switch (iParam1)
			{
				case 0:
					return 494.1373f, -301.9945f, 147.9723f;
				case 1:
					return 494.1373f, -301.9945f, 147f;
				default:
					break;
			}
			break;
		case 949011950:
			switch (iParam1)
			{
				case 0:
					return -2343.751f, -2181.372f, 73.3274f;
				case 1:
					return -2343.751f, -2181.372f, 73.3274f;
				default:
					break;
			}
			break;
		case 429544447:
			switch (iParam1)
			{
				case 0:
					return -5886.735f, -2762.121f, -5.0027f;
				default:
					break;
			}
			break;
		case 1673499939:
			switch (iParam1)
			{
				case 0:
					return 2476.28f, 1997.81f, 166.918f;
				default:
					break;
			}
			break;
		case 373034311:
			switch (iParam1)
			{
				case 0:
					return 2316.89f, 1072.69f, 94.409f;
				default:
					break;
			}
			break;
		case -780455182:
			switch (iParam1)
			{
				case 0:
					return -1019.89f, 1692.11f, 244.105f;
				case 1:
					return -988.1135f, 1692.075f, 243.3826f;
				default:
					break;
			}
			break;
		case -739986731:
			switch (iParam1)
			{
				case 0:
					return -2904.945f, -254.221f, 187.3f;
				default:
					break;
			}
			break;
		case 2000209669:
			switch (iParam1)
			{
				case 0:
					return 830.571f, 1924.11f, 258.798f;
				case 1:
					return 830.641f, 1924.09f, 258.798f;
				case 2:
					return 830.611f, 1924.12f, 258.825f;
				default:
					break;
			}
			break;
		case -654238687:
			switch (iParam1)
			{
				case 0:
					return -1413.56f, -2669.16f, 42.2f;
				default:
					break;
			}
			break;
		case -1144800837:
			switch (iParam1)
			{
				case 0:
					return 398.28f, -1267.89f, 40.737f;
				default:
					break;
			}
			break;
		case 1347913620:
			switch (iParam1)
			{
				case 0:
					return 2443.16f, 290.578f, 66.5052f;
				default:
					break;
			}
			break;
		case -1614148516:
			switch (iParam1)
			{
				case 0:
					return 2307.592f, -330.3333f, 41.6732f;
				default:
					break;
			}
			break;
		case -1494823099:
			switch (iParam1)
			{
				case 0:
					return -5854.019f, -3745.071f, -25.5216f;
				case 1:
					return -5854.012f, -3744.898f, -25.519f;
				default:
					break;
			}
			break;
		case 1937333853:
			switch (iParam1)
			{
				case 0:
					return 1593.43f, -1769.6f, 52.5869f;
				default:
					break;
			}
			break;
		case 118535038:
			switch (iParam1)
			{
				case 0:
					return -1530.689f, -308.1162f, 141.4804f;
				case 1:
					return -1532.051f, -308.3718f, 141.5067f;
				case 2:
					return -1530.594f, -308.8933f, 141.4845f;
				default:
					break;
			}
			break;
		case -1891628345:
			switch (iParam1)
			{
				case 0:
					return -2694.601f, -1500.248f, 150.5708f;
				default:
					break;
			}
			break;
		case 657666087:
			switch (iParam1)
			{
				case 0:
					return -1755.078f, -1623.864f, 90.579f;
				default:
					break;
			}
			break;
		case -2009137002:
			switch (iParam1)
			{
				case 0:
					return 1259.735f, 1294.358f, 216.0961f;
				case 1:
					return 1259.735f, 1294.358f, 216.0961f;
				default:
					break;
			}
			break;
		case -161804536:
			switch (iParam1)
			{
				case 0:
					return 2385.799f, 1696.725f, 95.7555f;
				case 1:
					return 2385.81f, 1696.69f, 95.7678f;
				default:
					break;
			}
			break;
		case -1761578407:
			switch (iParam1)
			{
				case 0:
					return 1735.312f, -1894.472f, 44.5668f;
				default:
					break;
			}
			break;
		case 247563739:
			switch (iParam1)
			{
				case 0:
					return 2448.58f, 2097.729f, 172.2719f;
				default:
					break;
			}
			break;
		case -2108030724:
		case -2060865802:
		case -2008558277:
		case -1887999095:
		case -1841331114:
		case -1829339703:
		case -1824429070:
		case -1761189332:
		case -1714262909:
		case -1636964661:
		case -1287911066:
		case -1272862985:
		case -1240932004:
		case -1177787273:
		case -968854939:
		case -641229542:
		case -599506500:
		case -499529359:
		case -415839138:
		case -357364973:
		case -261997819:
		case -232974724:
		case -30872859:
		case 149709049:
		case 221420861:
		case 308500632:
		case 330993088:
		case 435290930:
		case 683269210:
		case 870958936:
		case 1187689415:
		case 1187917501:
		case 1284679164:
		case 1424723727:
		case 1464664327:
		case 1505050944:
		case 1535254161:
		case 1861313914:
		case 2072029413:
		case 2072069278:
			break;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_72(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (bParam6)
	{
		if (vdist2(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
		{
			return true;
		}
	}
	else if (func_199(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

bool func_73()
{
	iVar0 = _0xd04241bbf6d03a5e(Global_35);
	if (_does_scenario_point_exist(iVar0))
	{
		return true;
	}
	return false;
}

int func_74(int iParam0, int iParam1)
{
	switch (*iParam0)
	{
		case -1427565340:
			switch (iParam1)
			{
				case 1:
					return -1041821887;
				default:
					break;
			}
			break;
		case -1859413640:
			switch (iParam1)
			{
				case 0:
					return 688258043;
				case 1:
					return 1533677103;
				default:
					break;
			}
			break;
		case 2000209669:
			switch (iParam1)
			{
				case 0:
					return 146855730;
				case 1:
					return 146855730;
				case 2:
					return 146855730;
				default:
					break;
			}
			break;
		case 373034311:
			switch (iParam1)
			{
				case 0:
					return -172243588;
				default:
					break;
			}
			break;
		case -654238687:
			switch (iParam1)
			{
				case 0:
					return 2036668281;
				default:
					break;
			}
			break;
		default:
			break;
	}
	return 0;
}

bool func_75(int iParam0)
{
	if (_0xd04241bbf6d03a5e(Global_35) != 0)
	{
		iVar10 = 0;
		while (iVar10 < get_number_of_events(0))
		{
			if (get_event_at_index(0, iVar10) == -1730772208)
			{
				if (get_event_data(0, iVar10, &vVar0, 10))
				{
					if (vVar0.z == iParam0 || iParam0 == 0)
					{
						return true;
					}
				}
			}
			iVar10++;
		}
	}
	return false;
}

bool func_76(int iParam0)
{
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	return is_ped_on_mount(iParam0);
}

void func_77(int iParam0, bool bParam1)
{
	if (!func_33(iParam0))
	{
		return;
	}
	iVar0 = func_105(iParam0);
	_uiprompt_set_enabled((*Global_1945938)[iVar0]->f_3, !bParam1);
}

bool func_78(int iParam0, bool bParam1)
{
	if (bParam1 && !func_33(iParam0))
	{
		return false;
	}
	iVar0 = func_105(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

void func_79(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_33(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_105(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_200(iVar0);
	*uParam0 = 0;
}

bool func_80(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	if (_get_carrier_as_ped(iParam1) != iParam0)
	{
		return false;
	}
	iVar0 = _0x61914209c36efddb(iParam1);
	if (iVar0 == 5)
	{
		return true;
	}
	if (iVar0 == 7)
	{
		return true;
	}
	return false;
}

void func_81(var uParam0, bool bParam1, int iParam2)
{
	if (does_entity_exist(uParam0[iParam2]))
	{
		if (bParam1)
		{
			set_object_as_no_longer_needed((*uParam0)[iParam2]);
		}
		else
		{
			delete_object((*uParam0)[iParam2]);
		}
	}
}

int func_82(int iParam0, int iParam1)
{
	switch (*iParam0)
	{
		case -2108030724:
			return 1826539842;
		case -777592153:
		case -35775921:
			return 1478239863;
		case 425000526:
		case 464413478:
			return -1682377294;
		case -161804536:
			return -2067990682;
		case -1177787273:
			return -812427869;
		case -709811179:
		case 1673499939:
			return 1205599754;
		case -1494823099:
			switch (iParam1)
			{
				case 0:
					return 318818236;
				case 1:
					return 1202155616;
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_83(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!func_201(iParam0, 0))
	{
		return 0;
	}
	if (!func_202(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_203(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_204(iParam0, bParam2);
	iVar2 = 0;
	if (func_205(iParam0, 0, 0) == 0)
	{
		if (func_206(iParam0))
		{
			iVar5 = func_207(iParam0);
			iVar6 = func_208(iVar5);
			iVar7 = func_209(iVar6) + 1;
			func_210(iVar5);
			if (func_211(38))
			{
				func_212(483, 0);
			}
			else
			{
				func_212(482, 0);
			}
			if (iVar7 == func_213(iVar6))
			{
				func_83(func_214(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_118() && func_215(4))
				{
					if (func_118() && (func_216(38) || func_211(38)))
					{
						func_218(38, func_214(iVar6), 0, 0, func_217(), 0, -1, 0);
						func_219(2);
					}
					else
					{
						func_218(38, func_214(iVar6), 0, 0, func_217(), 0, -1, 0);
						func_219(1);
					}
				}
			}
			else if (func_118() && func_215(4))
			{
				if (func_118() && (func_216(38) || func_211(38)))
				{
					func_218(38, 0, 0, 0, func_217(), 0, -1, 0);
					func_219(2);
				}
				else
				{
					func_218(38, 0, 0, 0, func_217(), 0, -1, 0);
					func_219(1);
				}
			}
			if (func_118() && func_215(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_118() && (func_216(38) || func_211(38)))
					{
						func_220(38, _0x13aaecda43318bfe(-2076669067, iVar6), _0xd52d20b0c76bb26d(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_220(38, get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_221(iParam0) == -1037537535)
	{
		if ((!func_222(iParam0, 866047851) && !func_222(iParam0, -1979000645)) && !func_222(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_223(iParam0, 8388608) && !func_224(28))
	{
		func_225(28);
	}
	if (!bVar3)
	{
		if (func_222(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_226(iParam0) == -1447088266)
			{
				iVar1 = func_228(func_227(iParam0, 1), 0);
				if (is_weapon_valid(iVar1))
				{
					if (func_92() == -1)
					{
						func_229(iVar1);
					}
					if (func_230(0) && func_231(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_232(iParam0, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
			else
			{
				iVar1 = _get_ammo_type_for_weapon(iParam0);
				if (_is_ammo_valid(iVar1))
				{
					if (func_92() == -1)
					{
						func_229(iParam0);
					}
					if (func_230(0) && func_231(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_232(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_221(iParam0) == -427144552)
		{
			if (!func_233(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_221(iParam0) == 307971639 && func_234(iParam0))
		{
			if (!func_235(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_222(iParam0, 866047851))
		{
			func_236(iParam0);
		}
		else if (func_222(iParam0, 2000026003))
		{
			func_237(iParam0);
		}
		else if (func_222(iParam0, -103750053))
		{
			func_194(func_238(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_194(func_239(-717883113, 2091222383), iVar0);
		}
		else if (func_222(iParam0, -121341956) && !func_222(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_93((*Global_1835011)[4]->f_1, 1))
				{
					func_212(498, 0);
				}
			}
			if (func_222(iParam0, -2017733358) || func_222(iParam0, -1369131378))
			{
				func_240(iParam0);
			}
		}
		else if (func_222(iParam0, -136654233))
		{
			if (func_222(iParam0, -1021472396))
			{
			}
		}
		else if (func_222(iParam0, -1466706512) && func_222(iParam0, 1147021565))
		{
			func_212(484, 0);
		}
		else if (func_222(iParam0, 1147021565) && func_222(iParam0, -524514947))
		{
		}
		else if (func_222(iParam0, 554195525))
		{
		}
		else if (func_222(iParam0, 589988438))
		{
			if (func_241())
			{
				func_242(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_222(iParam0, 787083290) && func_222(iParam0, 949916894))
		{
			func_243(iParam0);
		}
		else if (func_222(iParam0, -1718133314))
		{
			func_244(iParam0);
		}
		else if (func_222(iParam0, -1738650224))
		{
			func_245(iParam0);
		}
		else if (func_222(iParam0, -1112814642) && func_222(iParam0, 949916894))
		{
			func_246(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_222(iParam0, 1841149704))
		{
			func_247();
		}
		else if (func_222(iParam0, 606799272))
		{
			func_248(iParam0, iParam1);
			func_249(iParam0);
		}
		else if (func_222(iParam0, -1112814642) && func_222(iParam0, -1697809989))
		{
			func_250(iParam0, 0, 0, 0);
		}
		else if (func_222(iParam0, -2017733358) || func_222(iParam0, -1369131378))
		{
			func_240(iParam0);
		}
		else if (func_222(iParam0, -1921346699))
		{
			if (func_92() != -1)
			{
				return 0;
			}
			func_251(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_222(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_252(215778062, 1, 0))
					{
						func_83(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_252(670273567, 1, 0))
					{
						func_83(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_252(-967317137, 1, 0))
					{
						func_83(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_252(526074061, 1, 0))
					{
						func_83(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_252(-1045488665, 1, 0))
					{
						func_83(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_252(471514780, 1, 0))
					{
						func_83(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_222(iParam0, -839724752) && func_223(iParam0, 4))
		{
			if (!func_211(42))
			{
				func_253(iParam0);
			}
		}
		else if (func_222(iParam0, 1399091007))
		{
			func_254(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_222(iParam0, 1248798204))
		{
			iVar8 = 0;
			switch (iParam0)
			{
				case -593948563:
					iVar8 = -1281487556;
					break;
				case -1421669656:
					iVar8 = -59585102;
					break;
				case -830181022:
					iVar8 = 1018123892;
					break;
				case 917695895:
					iVar8 = -1455768246;
					break;
				case -1580595448:
					iVar8 = -921879912;
					break;
				case 1309992709:
					iVar8 = 982182330;
					break;
				case 1541618973:
					iVar8 = -1406390556;
					break;
			}
			if (iVar8 != 0)
			{
				func_83(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
		switch (iParam0)
		{
			case 990323211:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1930309310;
				break;
			case 1143540373:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1372580021;
				break;
			case -1073808995:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1557306571;
				break;
			case 1903483453:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 306085243;
				break;
			case 224572565:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 627131028;
				break;
			case -13395913:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 627131028;
				break;
			case 1859340712:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 239008065;
				break;
			case -1614861441:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 239008065;
				break;
			case -1336735809:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1930727055;
				break;
			case -1109613870:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1930727055;
				break;
			case 637788839:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2118798877;
				break;
			case -1161163727:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2118798877;
				break;
			case 648503798:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -978517238;
				break;
			case -1434556002:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -978517238;
				break;
			case -843069275:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1367906801;
				break;
			case 1356680930:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1367906801;
				break;
			case -1185145312:
				func_225(24);
				if (&Global_1946804->f_1497.f_1[27] == &Global_1946804->f_57[27])
				{
					func_255(player_ped_id(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_256(&iVar9, 0))
				{
					func_231(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303:
				if (func_92() == -1 && &Global_1946804->f_1497.f_1[25] == &Global_1946804->f_57[25])
				{
					func_255(player_ped_id(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case -160924582:
				break;
			case 2131771850:
				func_212(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_257();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_258();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_259();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_260();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_261();
				break;
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584:
				func_262(499813453, 854119837, 0);
				func_263(499813453, 0);
				func_264(1);
				break;
			case 2127812557:
				func_262(499813453, -1292544588, 0);
				func_263(499813453, 0);
				func_264(2);
				break;
			case 808991383:
				func_262(499813453, -1003325394, 0);
				func_263(499813453, 0);
				func_264(4);
				break;
			case 1134518629:
				func_262(666607663, -335460405, 0);
				func_263(666607663, 0);
				func_265(1);
				break;
			case 902940106:
				func_262(666607663, 903797617, 0);
				func_263(666607663, 0);
				func_265(2);
				break;
			case -418174898:
				func_262(666607663, 669728650, 0);
				func_263(666607663, 0);
				func_265(4);
				break;
			case -648114971:
				func_262(-220219788, 1214120047, 0);
				func_263(-220219788, 0);
				func_266(1);
				break;
			case 211153747:
				func_262(-220219788, 655769340, 0);
				func_263(-220219788, 0);
				func_266(2);
				break;
			case -32876996:
				func_262(-220219788, 885316185, 0);
				func_263(-220219788, 0);
				func_266(4);
				break;
			case 1191437462:
				func_262(218622660, -1491419385, 0);
				func_263(218622660, 0);
				func_267(1);
				break;
			case 1119149048:
				func_262(218622660, 1809565830, 0);
				func_263(218622660, 0);
				func_267(2);
				break;
			case 506073827:
				func_262(390004462, -628873767, 0);
				func_263(390004462, 0);
				func_268(1);
				break;
			case -1876986168:
				func_262(390004462, -405421956, 0);
				func_263(390004462, 0);
				func_268(2);
				break;
			case 2142623221:
				func_262(390004462, -1108972386, 0);
				func_263(390004462, 0);
				func_268(4);
				break;
			case 1508215381:
				func_262(6410548, 1053716392, 0);
				func_263(6410548, 0);
				func_269(1);
				break;
			case -888935280:
				func_262(6410548, 806507056, 0);
				func_263(6410548, 0);
				func_269(2);
				break;
			case -1252474566:
				func_262(6410548, 1571925350, 0);
				func_263(6410548, 0);
				func_269(4);
				break;
			case -1465702449:
				func_262(6410548, 1330352282, 0);
				func_263(6410548, 0);
				func_269(8);
				break;
			case -21093309:
				func_271(242, func_270(-21093309), 0);
				break;
			case 204375141:
				func_271(240, func_270(204375141), 0);
				break;
			case -417963070:
				func_271(241, func_270(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_272(594, 1934060482, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1067476102:
			case -541584777:
			case 206762213:
			case 1566032147:
			case 1973952589:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_272(594, 1110018439, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -653299524:
			case -486559882:
			case -324053813:
			case -223790555:
			case 998010398:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_272(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_272(594, -1228016946, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -2034071102:
			case -1939600995:
			case -1760041550:
			case -1708424762:
			case -1598782722:
			case -1505924449:
			case -1403873319:
			case -1335566375:
			case -1192685521:
			case 144810727:
			case 567164682:
			case 1174625611:
			case 1955751248:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_272(595, -103579, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1977068039:
			case -399865011:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_272(595, -1531530025, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case 80178851:
				func_212(488, 0);
				break;
			case 1613651027:
				func_212(491, 0);
				break;
			case -885810591:
				func_212(485, 0);
				if ((get_random_int_in_range(0, 65536) % 3) == 0)
				{
					func_83(func_273(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_83(func_274(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535:
				if (func_224(1))
				{
					func_212(487, 0);
				}
				break;
			case -898386032:
				func_212(486, 0);
				break;
			case -2035110427:
				if (func_92() == -1)
				{
					iParam0 = -1448210800;
				}
				break;
			case 1510719693:
				func_212(496, 0);
				break;
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (iVar0 <= 0)
		{
			return 0;
		}
		iVar10 = iParam0;
		func_275(&iVar10);
		if (!func_276(iVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_230(0))
		{
			return 1;
		}
		if (func_221(iParam0) == -1037537535)
		{
			func_277(iParam0);
		}
		if (func_222(iParam0, -1979000645))
		{
			func_278(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_230(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			_0x48e4d50f87a96aa5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_83(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_279(iVar2, 0);
		}
	}
	Var35 = { func_280(iParam0) };
	if (_stat_id_is_valid(&Var35))
	{
		_0x6a0184e904cdf25e(&Var35, iVar0);
	}
	func_281(iParam0);
	if (fParam6 > 0f)
	{
		if (func_222(iParam0, -839724752))
		{
			func_282(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_283(iParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

bool func_84(int iParam0, bool bParam1)
{
	if (bParam1 && !func_33(iParam0))
	{
		return false;
	}
	iVar0 = func_105(iParam0);
	if (!_uiprompt_has_hold_mode((*Global_1945938)[iVar0]->f_3))
	{
		return is_control_pressed(2, (*Global_1945938)[iVar0]->f_4);
	}
	return _uiprompt_is_hold_mode_running((*Global_1945938)[iVar0]->f_3);
}

void func_85(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		if (!is_string_null_or_empty(func_284(iParam0, iVar0, 2, 0)))
		{
			func_285(uParam1, iVar0);
		}
		iVar0++;
	}
}

void func_86(int iParam0)
{
	func_286(&Local_63);
	func_287(&Local_157);
	func_85(iParam0, &uLocal_31);
	if (*iParam0 == -415839138)
	{
		remove_waypoint_recording("discoverable_monk_flee");
		func_288(iParam0);
	}
}

bool func_87(int iParam0)
{
	iVar0 = func_88(iParam0, 1);
	return (iVar0 >= 0 && iVar0 < 143);
}

int func_88(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2108030724:
			return 138;
		case -2060865802:
			return 116;
		case -2019711818:
			return 9;
		case -2009137002:
			return 34;
		case -2008558277:
			return 59;
		case -1960242214:
			return 125;
		case -1958832660:
			return 49;
		case -1923503631:
			return 117;
		case -1891628345:
			return 124;
		case -1887999095:
			return 89;
		case -1882503209:
			return 50;
		case -1859413640:
			return 28;
		case -1859023693:
			return 64;
		case -1848895400:
			return 113;
		case -1841331114:
			return 94;
		case -1829339703:
			return 141;
		case -1824429070:
			return 66;
		case -1787770845:
			return 16;
		case -1761578407:
			return 17;
		case -1761189332:
			return 115;
		case -1714262909:
			return 76;
		case -1686810506:
			return 112;
		case -1646022773:
			return 13;
		case -1636964661:
			return 10;
		case -1614148516:
			return 48;
		case -1609238411:
			return 21;
		case -1568839185:
			return 6;
		case -1505275983:
			return 31;
		case -1494823099:
			return 61;
		case -1481450947:
			return 53;
		case -1457751321:
			return 123;
		case -1427565340:
			return 47;
		case -1420566543:
			return 23;
		case -1308658310:
			return 45;
		case -1300082860:
			return 51;
		case -1287911066:
			return 2;
		case -1283611369:
			return 78;
		case -1272862985:
			return 139;
		case -1243267511:
			return 81;
		case -1240932004:
			return 140;
		case -1208846034:
			return 24;
		case -1177787273:
			return 127;
		case -1144800837:
			return 111;
		case -1109016944:
			return 15;
		case -1084929085:
			return 4;
		case -1061274876:
			return 96;
		case -1053108445:
			return 84;
		case -986176781:
			return 25;
		case -979575591:
			return 103;
		case -968854939:
			return 68;
		case -920971071:
			return 83;
		case -919236330:
			return 79;
		case -890175011:
			return 137;
		case -849582265:
			return 92;
		case -834293086:
			return 91;
		case -780455182:
			return 8;
		case -777592153:
			return 3;
		case -777150535:
			return 100;
		case -763376358:
			return 55;
		case -739986731:
			return 110;
		case -715636193:
			return 95;
		case -709811179:
			return 20;
		case -654238687:
			return 104;
		case -641229542:
			return 46;
		case -607940493:
			return 118;
		case -599506500:
			return 38;
		case -544327665:
			return 106;
		case -499529359:
			return 74;
		case -490142739:
			return 130;
		case -415839138:
			return 98;
		case -409986722:
			return 88;
		case -357364973:
			return 44;
		case -321841939:
			return 11;
		case -261997819:
			return 37;
		case -232974724:
			return 135;
		case -161804536:
			return 29;
		case -148407339:
			return 97;
		case -35775921:
			return 40;
		case -30872859:
			return 30;
		case -657632:
			return 114;
		case 0:
			return 143;
		case 58958195:
			return 72;
		case 74587361:
			return 35;
		case 118535038:
			return 101;
		case 149709049:
			return 67;
		case 173549940:
			return 22;
		case 221420861:
			return 132;
		case 230001763:
			return 107;
		case 233600584:
			return 54;
		case 247563739:
			return 52;
		case 308500632:
			return 136;
		case 330993088:
			return 131;
		case 373034311:
			return 0;
		case 397377585:
			return 87;
		case 404434344:
			return 18;
		case 425000526:
			return 75;
		case 429544447:
			return 93;
		case 435290930:
			return 60;
		case 464413478:
			return 128;
		case 503180747:
			return 19;
		case 513110082:
			return 121;
		case 657666087:
			return 70;
		case 677950956:
			return 142;
		case 683269210:
			return 134;
		case 733338689:
			return 32;
		case 870958936:
			return 1;
		case 918206817:
			return 82;
		case 921081956:
			return 108;
		case 939555152:
			return 27;
		case 949011950:
			return 109;
		case 1034793488:
			return 33;
		case 1048086072:
			return 26;
		case 1091556515:
			return 122;
		case 1120968795:
			return 105;
		case 1124200691:
			return 43;
		case 1154568952:
			return 12;
		case 1187689415:
			return 126;
		case 1187917501:
			return 71;
		case 1284679164:
			return 85;
		case 1335921989:
			return 58;
		case 1342653896:
			return 69;
		case 1347913620:
			return 5;
		case 1351526287:
			return 86;
		case 1424723727:
			return 39;
		case 1431862613:
			return 80;
		case 1464664327:
			return 129;
		case 1490223565:
			return 57;
		case 1505050944:
			return 77;
		case 1519228573:
			return 42;
		case 1519472817:
			return 63;
		case 1535254161:
			return 133;
		case 1673499939:
			return 99;
		case 1734766691:
			return 65;
		case 1801731633:
			return 56;
		case 1833243216:
			return 102;
		case 1861313914:
			return 62;
		case 1937333853:
			return 7;
		case 1982045664:
			return 90;
		case 1986618633:
			return 119;
		case 2000209669:
			return 120;
		case 2072029413:
			return 36;
		case 2072069278:
			return 73;
		case 2134589549:
			return 14;
		case 2135153015:
			return 41;
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

Vector3 func_89(int iParam0, int iParam1)
{
	switch (*iParam0)
	{
		case 2000209669:
			if (iParam1 == 0)
			{
				return 827.9519f, 1925.23f, 258.7208f;
			}
			else if (iParam1 == 1)
			{
				return 832.673f, 1922.286f, 258.7208f;
			}
			else if (iParam1 == 2)
			{
				return 829.6969f, 1926.987f, 258.7208f;
			}
			else if (iParam1 == 3)
			{
				return 832.1583f, 1926.718f, 258.7208f;
			}
			else if (iParam1 == 4)
			{
				return 828.2374f, 1922.771f, 258.7208f;
			}
			else if (iParam1 == 5)
			{
				return 830.3385f, 1921.46f, 258.7208f;
			}
			else if (iParam1 == 6)
			{
				return 833.4829f, 1924.626f, 258.7208f;
			}
			else if (iParam1 == 7)
			{
				return 830.591f, 1924.07f, 258.795f;
			}
			else if (iParam1 == 11)
			{
				return -160.9032f, 1599.633f, 180.2413f;
			}
			break;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_90(int iParam0, int iParam1)
{
	switch (*iParam0)
	{
		case -780455182:
			return func_71(iParam0, 1);
		case -1614148516:
			return func_71(iParam0, 0);
		case 2134589549:
			return func_71(iParam0, 0);
		case 373034311:
			return func_71(iParam0, 0);
		case -1887999095:
		case -1636964661:
		case -1287911066:
		case -415839138:
		case 429544447:
		case 1519228573:
		case 1982045664:
			return func_131(iParam0, 0);
		case -1300082860:
			return 365.725f, -15.4104f, 110.5399f;
		case -1958832660:
			return 1591.863f, -1845.292f, 65.196f;
		case 247563739:
			return 2450.049f, 2104.19f, 173.9434f;
		case 1861313914:
			return 894.6589f, -1969.363f, 44.554f;
		case 1734766691:
			return -270.2353f, 114.9477f, 62.751f;
		case 58958195:
			return -2565.258f, 756.6277f, 153.3524f;
		case 308500632:
			return -2664.789f, 690.7282f, 185.3162f;
		case -739986731:
			return -2904.952f, -254.2731f, 186.965f;
		case 1986618633:
			return -4688.022f, -3419.115f, 17.2107f;
		case -986176781:
			return -2774.109f, -431.3145f, 174.3467f;
		case -232974724:
			return 189.6525f, -414.4084f, 87.8956f;
		case -1053108445:
			return -4346.388f, -2604.249f, -1.1693f;
		case 1673499939:
			return 2476.001f, 1997.824f, 167.269f;
		case -709811179:
			return 2291.568f, 2080.932f, 200.7657f;
		case -979575591:
			return -2937.443f, -138.5504f, 199.3164f;
		case -1609238411:
			return 3220.522f, 1463.278f, 52.9448f;
		case 921081956:
			return 2417.172f, -738.7664f, 42.3038f;
		case -148407339:
			return -1732.145f, 2191.086f, 293.2867f;
		case -1109016944:
			return 1733.116f, -424.945f, 48.4327f;
		case -1646022773:
			return 2148.987f, 1918.443f, 194.4452f;
		case 1284679164:
			return 2782.746f, 536.9514f, 72.1612f;
		case -1505275983:
			return 947.541f, 238.4814f, 127.5118f;
		case -1761189332:
			return 703.7369f, 427.9747f, 108.3372f;
		case -2009137002:
			return 1260.331f, 1296.422f, 217.8313f;
		case -1787770845:
			return -1915.618f, -30.6525f, 287.4662f;
		case -161804536:
			return 2388.642f, 1690.187f, 95.5056f;
		case -1891628345:
			return -2694.149f, -1499.7f, 150.6036f;
		case -1960242214:
			return 749.9653f, 1825.082f, 240.1131f;
		case 1034793488:
			return 1705.885f, -1006.939f, 43.8407f;
		case -849582265:
			return -2588.29f, -93.565f, 167.61f;
		case 657666087:
			return -1749.065f, -1624.292f, 90.1441f;
		case -607940493:
			return 2698.995f, 410.8617f, 77.4735f;
		case 2000209669:
			if (iParam1 == 11)
			{
				return func_89(iParam0, 11);
			}
			else
			{
				return func_89(iParam0, 7);
			}
			break;
		case -1272862985:
			switch (iParam1)
			{
				case 0:
					return 2135.355f, 1069.851f, 122.7836f;
				case 1:
					return 2150.689f, 1124.094f, 130.4564f;
				case 2:
					return 2210.914f, 1134.496f, 141.0999f;
				case 3:
					return 2251.706f, 1198.574f, 121.7253f;
				default:
					break;
			}
			Jump @2418; //curOff = 1102
			switch (iParam1)
			{
				case 0:
					return -2693.879f, -402.3976f, 148.1729f;
				case 1:
					return -2687.993f, -402.3363f, 148.3894f;
				case 2:
					return -2686.917f, -410.486f, 148.4376f;
				case 3:
					return -2694.168f, -412.4018f, 148.8531f;
				case 4:
					return -2697.285f, -408.3287f, 149.3549f;
				default:
					break;
			}
			Jump @2418; //curOff = 1236
			switch (iParam1)
			{
				case 0:
					return 1478.761f, -1831.449f, 52.0191f;
				case 1:
					return 1487.726f, -1822.523f, 53.4034f;
				case 2:
					return 1501.093f, -1813.105f, 53.2804f;
				case 3:
					return 1520.822f, -1805.398f, 52.6965f;
				default:
					break;
			}
			Jump @2418; //curOff = 1346
			switch (iParam1)
			{
				case 0:
					return -941.5482f, 1011.45f, 198.416f;
				case 1:
					return -490.2726f, 1355.536f, 205.7345f;
				case 2:
					return 299.3675f, 1795.301f, 197.5344f;
				case 3:
					return 1884.704f, 1927.334f, 249.5903f;
				case 4:
					return 2549.506f, 1624.281f, 93.5729f;
				case 5:
					return 2489.881f, 1375.156f, 107.1609f;
				case 6:
					return 2657.062f, 1286.715f, 117.8777f;
				case 7:
					return 2577.385f, 1161.844f, 158.058f;
				case 8:
					return 2342.925f, 844.4003f, 82.3675f;
				case 9:
					return 1698.323f, 719.6797f, 125.0664f;
				case 10:
					return 1986.145f, -208.0823f, 51.4904f;
				case 11:
					return 1263.596f, 528.7397f, 88.8471f;
				case 12:
					return 1626.372f, -0.4718f, 87.7166f;
				case 13:
					return 1562.581f, -219.7309f, 84.4919f;
				case 14:
					return 111.1142f, 639.3316f, 125.9073f;
				case 15:
					return -20.3564f, 217.8298f, 109.194f;
				case 16:
					return 714.7566f, 22.1708f, 154.0224f;
				case 17:
					return -547.9435f, 557.9953f, 104.2689f;
				case 18:
					return -540.1378f, 256.6357f, 44.7136f;
				case 19:
					return -525.3924f, -277.1231f, 62.9066f;
				default:
					break;
			}
			Jump @2418; //curOff = 1840
			return 794.4265f, 1777.108f, 281.0706f;
			if (iParam1 == 0)
			{
				return 794.4265f, 1777.108f, 281.0706f;
			}
			else if (iParam1 == 1)
			{
				return -1277.741f, 2895.727f, 386.2982f;
			}
			else if (iParam1 == 2)
			{
				return 2577.433f, -627.2448f, 42.97695f;
			}
			else if (iParam1 == 3)
			{
				return 2579.389f, -627.8698f, 42.96334f;
			}
			else if (iParam1 == 4)
			{
				return 672.4651f, -974.1768f, 54.4574f;
			}
			else if (iParam1 == 5)
			{
				return -1307.091f, 2468.892f, 309.8042f;
			}
			else if (iParam1 == 6)
			{
				return 1735.903f, -1893.929f, 45.189f;
			}
			else if (iParam1 == 7)
			{
				return 2157.916f, 795.1056f, 156.5394f;
			}
			else if (iParam1 == 8)
			{
				return 514.147f, 1932.534f, 200.2069f;
			}
			Jump @2418; //curOff = 2102
			switch (iParam1)
			{
				case 0:
					return 2826.679f, -1323.043f, 46.43373f;
				case 1:
					return 2736.732f, -1339.335f, 46.65415f;
				case 2:
					return 2698.488f, -1306.194f, 49.48277f;
				case 3:
					return 2773.848f, -1182.319f, 48.53596f;
				case 4:
					return 2820.003f, -1230.709f, 47.52145f;
				default:
					break;
			}
			Jump @2418; //curOff = 2236
			switch (iParam1)
			{
				case 0:
					return -834.465f, -1365.791f, 48.5643f;
				case 1:
					return -781.2938f, -1320.024f, 44.8353f;
				case 2:
					return -729.9185f, -1219.616f, 41.4298f;
				case 3:
					return -773.6366f, -1354.466f, 44.1805f;
				case 4:
					return -756.8423f, -1276.124f, 49.337f;
				case 5:
					return -816.6586f, -1310.757f, 43.2499f;
				default:
					break;
			}
			Jump @2418; //curOff = 2394
			return -353.4487f, -133.7923f, 46.4927f;
			return 0f, 0f, 0f;
		}

Vector3 func_91(int iParam0, int iParam1)
{
	switch (*iParam0)
	{
		case -1859413640:
			return 2195.23f, -554.23f, 40.86f;
		case -1481450947:
			return 1268.257f, -387.328f, 88.459f;
		case -1427565340:
			return 2255.135f, -754.127f, 41.793f;
		case -1887999095:
			return 1772.964f, -1359.736f, 44.18f;
		case 2000209669:
			return 830.53f, 1923.9f, 258.33f;
		case -161804536:
			return 2385.593f, 1696.987f, 94.94f;
		case 733338689:
			return 2388.11f, 1688.02f, 94.66f;
		case 2135153015:
			return -161.88f, 1734.6f, 169.73f;
		case 2072029413:
			return 808.47f, 2300.12f, 250.82f;
		case 1464664327:
			switch (iParam1)
			{
				case 0:
					return 1182.68f, 2036.35f, 322.98f;
				case 1:
					return 1227.191f, 2007.389f, 319.3389f;
			}
			break;
		case 513110082:
			switch (iParam1)
			{
				case 0:
					return -2532.075f, 1173.143f, 224.93f;
				case 1:
					return 3028.165f, 1781.019f, 83.127f;
				case 2:
					return -4394.824f, -2159.366f, 47.3844f;
				default:
					break;
			}
			Jump @652; //curOff = 402
			switch (iParam1)
			{
				case 0:
					return 2783.187f, 532.9774f, 70.28662f;
				case 1:
					return 2783.885f, 534.9501f, 70.2896f;
				case 2:
					return 2784.209f, 532.77f, 70.28524f;
				case 3:
					return 2782.702f, 535.7864f, 70.28931f;
				default:
					break;
			}
			Jump @652; //curOff = 512
			switch (iParam1)
			{
				case 0:
					return -1518.81f, 533.46f, 101.45f;
				case 1:
					return 1251.4f, 1165.7f, 149.09f;
				case 2:
					return -150.285f, 1498.717f, 114.935f;
				case 3:
					return 2939.35f, 1422.56f, 44.58f;
				case 4:
					return 1973.787f, 1192.337f, 170.517f;
				default:
					break;
			}
			return 0f, 0f, 0f;
		}

int func_92()
{
	return Global_1572887->f_12;
}

bool func_93(int iParam0, bool bParam1)
{
	switch (func_289(iParam0))
	{
		case 5:
			return true;
		case 6:
			if (bParam1)
			{
				return true;
			}
			break;
	}
	return false;
}

void func_94(int iParam0)
{
	if (*iParam0 == 404434344)
	{
		vVar0 = { 796.1158f, 1777.652f, 281.4886f };
		vVar3 = { 0f, 0f, -74.42887f };
		vVar6 = { 2.5f, 3f, 5f };
		if (!_does_volume_exist(iParam0->f_6.f_9))
		{
			iParam0->f_6.f_9 = _create_volume_box_with_custom_name(vVar0, vVar3, vVar6, func_290(iParam0));
		}
	}
	else if (*iParam0 == -1761578407)
	{
		if (iParam0->f_4 == 0)
		{
			vVar0 = { 796.1158f, 1777.652f, 281.4886f };
			vVar3 = { 0f, 0f, -74.42887f };
			vVar6 = { 2.5f, 3f, 5f };
		}
		else if (iParam0->f_4 == 1)
		{
			vVar0 = { -1279.247f, 2896.268f, 386.576f };
			vVar3 = { 0f, 0f, -21.05487f };
			vVar6 = { 2.5f, 3f, 5f };
		}
		else if (iParam0->f_4 == 2)
		{
			vVar0 = { 2576.871f, -628.9302f, 42.2934f };
			vVar3 = { 0f, 0f, -110.7924f };
			vVar6 = { 2.5f, 1.61286f, 5f };
		}
		else if (iParam0->f_4 == 3)
		{
			vVar0 = { 2578.758f, -629.6465f, 42.2934f };
			vVar3 = { 0f, 0f, -110.7924f };
			vVar6 = { 2.5f, 1.61286f, 5f };
		}
		else if (iParam0->f_4 == 4)
		{
			vVar0 = { 673.9809f, -974.8455f, 54.0894f };
			vVar3 = { 0f, 0f, -23.06569f };
			vVar6 = { 2.5f, 3f, 5f };
		}
		else if (iParam0->f_4 == 5)
		{
			vVar0 = { -1305.871f, 2468.329f, 309.4034f };
			vVar3 = { 0f, 0f, -21.05487f };
			vVar6 = { 2.5f, 3f, 5f };
		}
		else if (iParam0->f_4 == 6)
		{
			vVar0 = { 1734.58f, -1895.353f, 45.189f };
			vVar3 = { 0f, 0f, -41.82871f };
			vVar6 = { 2.5f, 3f, 5f };
		}
		else if (iParam0->f_4 == 7)
		{
			vVar0 = { 2155.717f, 794.849f, 156.1776f };
			vVar3 = { 0f, 0f, 280f };
			vVar6 = { 2.5f, 3f, 5f };
		}
		else if (iParam0->f_4 == 8)
		{
			vVar0 = { 512.7686f, 1932.379f, 199.7092f };
			vVar3 = { 0f, 0f, -2.622487f };
			vVar6 = { 2.5f, 3f, 5f };
		}
		if (!_does_volume_exist(iParam0->f_6.f_9))
		{
			iParam0->f_6.f_9 = _create_volume_box_with_custom_name(vVar0, vVar3, vVar6, func_290(iParam0));
		}
	}
	else if ((*iParam0 == -1243267511 || *iParam0 == 1535254161) || *iParam0 == -607940493)
	{
		if (*iParam0 == -1243267511)
		{
			vVar0 = { -2691.41f, -407.6143f, 146.533f };
			vVar3 = { 0f, 0f, 0f };
			vVar6 = { 5f, 5f, 5f };
		}
		else if (*iParam0 == 1535254161)
		{
			vVar0 = { 1503.231f, -1819.476f, 56.89473f };
			vVar3 = { 0f, 0f, 31.7625f };
			vVar6 = { 44.60546f, 27.38259f, 6f };
		}
		else if (*iParam0 == -607940493)
		{
			vVar0 = { 2704.939f, 435.9636f, 91.37785f };
			vVar3 = { 0f, 0f, -54.20028f };
			vVar6 = { 3.346154f, 3.339972f, 8.648747f };
		}
		if (!_does_volume_exist(iParam0->f_6.f_9))
		{
			if (*iParam0 == -607940493)
			{
				iParam0->f_6.f_9 = _create_volume_box_with_custom_name(vVar0, vVar3, vVar6, func_290(iParam0));
			}
			else
			{
				iParam0->f_6.f_9 = _create_volume_cylinder_with_custom_name(vVar0, vVar3, vVar6, func_290(iParam0));
			}
		}
	}
	else if (*iParam0 == -890175011)
	{
		if (iParam0->f_4 == 0)
		{
			vVar0 = { 2825.817f, -1322.569f, 45.7557f };
			vVar3 = { 0f, 0f, -40.04137f };
			vVar6 = { 1.479112f, 3.339972f, 8.648747f };
		}
		else if (iParam0->f_4 == 1)
		{
			vVar0 = { 2736.975f, -1340.535f, 46.51682f };
			vVar3 = { 0f, 0f, -44.91362f };
			vVar6 = { 1.006241f, 1.334083f, 4.408258f };
		}
		else if (iParam0->f_4 == 3)
		{
			vVar0 = { 2773.553f, -1183.345f, 48.74084f };
			vVar3 = { 0f, 0f, -23.65903f };
			vVar6 = { 1.282358f, 0.740535f, 5.648747f };
		}
		else if (iParam0->f_4 == 4)
		{
			vVar0 = { 2821.369f, -1229.302f, 46.5088f };
			vVar3 = { 0f, 0f, -34.54109f };
			vVar6 = { 3.346154f, 3.339972f, 8.648747f };
		}
		if (!_does_volume_exist(iParam0->f_6.f_9))
		{
			iParam0->f_6.f_9 = _create_volume_box_with_custom_name(vVar0, vVar3, vVar6, func_290(iParam0));
		}
	}
	else if (*iParam0 == 677950956)
	{
		if (iParam0->f_4 == 1)
		{
			vVar0 = { -781.6985f, -1321.918f, 42.8842f };
			vVar3 = { 0f, 0f, -90.32019f };
			vVar6 = { 3.080742f, 6.954088f, 8.648747f };
		}
		else if (iParam0->f_4 == 5)
		{
			vVar0 = { -816.7859f, -1313.109f, 44.64705f };
			vVar3 = { 0f, 0f, -89.95428f };
			vVar6 = { 2.607229f, 7.43211f, 4.408258f };
		}
		if (!_does_volume_exist(iParam0->f_6.f_9))
		{
			iParam0->f_6.f_9 = _create_volume_box_with_custom_name(vVar0, vVar3, vVar6, func_290(iParam0));
		}
	}
}

bool func_95(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_96(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_291() - fParam1);
	func_292(uParam0, 1);
	func_293(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_97(var uParam0)
{
	return func_95(*uParam0, 2);
}

int func_98()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

bool func_99(int iParam0)
{
	switch (*iParam0)
	{
		case -1300082860:
			if (func_72(Global_35, func_71(iParam0, 0), 3f, 1, 1))
			{
				return true;
			}
			break;
		case -890175011:
			if (((iParam0->f_4 == 0 || iParam0->f_4 == 1) || iParam0->f_4 == 3) || iParam0->f_4 == 4)
			{
				if (_does_volume_exist(iParam0->f_6.f_9) && is_entity_in_volume(Global_35, iParam0->f_6.f_9, true, 0))
				{
					return true;
				}
			}
			break;
		case 677950956:
			if (iParam0->f_4 == 1 || iParam0->f_4 == 5)
			{
				if (_does_volume_exist(iParam0->f_6.f_9) && is_entity_in_volume(Global_35, iParam0->f_6.f_9, true, 0))
				{
					return true;
				}
			}
			break;
	}
	return false;
}

bool func_100(int iParam0, int iParam1)
{
	if (is_entity_dead(Global_35))
	{
		return false;
	}
	if (!func_294(iParam1, 1))
	{
		if (is_ped_in_combat(Global_35, 0))
		{
			return false;
		}
		if (_0xc8b29d18022ea2b7(Global_35))
		{
			return false;
		}
	}
	if (is_ped_being_arrested(Global_35))
	{
		return false;
	}
	if (!func_294(iParam1, 2) && !func_295())
	{
		return false;
	}
	if (!func_294(iParam1, 4) && !func_296())
	{
		return false;
	}
	if (!func_294(iParam1, 128) && !func_297())
	{
		return false;
	}
	if (!func_294(iParam1, 2048) && !func_298(0))
	{
		return false;
	}
	if (!func_294(iParam1, 32) && !func_299(iParam1))
	{
		return false;
	}
	if (!func_294(iParam1, 64) && !func_300())
	{
		return false;
	}
	if (!func_294(iParam1, 256) && is_cinematic_cam_rendering())
	{
		return false;
	}
	if (!func_294(iParam1, 512))
	{
		if (_get_ped_crouch_movement(Global_35))
		{
			return false;
		}
	}
	if (!func_294(iParam1, 1024))
	{
		if (is_ped_in_cover(Global_35, 0, 1))
		{
			return false;
		}
	}
	if (_0x1204eb53a5fbc63d())
	{
		return false;
	}
	if (_0x3ab6c7b0bb0df4b1(Global_35, -1))
	{
		return false;
	}
	else if (func_301(Global_35, 1369124074))
	{
		return false;
	}
	else if (func_301(Global_35, 713668775))
	{
		return false;
	}
	return true;
}

bool func_101(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { get_entity_forward_vector(iParam0) };
	vVar3 = { vParam1 - get_entity_coords(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > fParam4;
}

int func_102(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
{
	if (is_string_null_or_empty(sParam0))
	{
		return 0;
	}
	if (!_0xbc0884bc590951c7(iParam1, 0))
	{
		return 0;
	}
	if (!does_entity_exist(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_302(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == (*Global_1945938)[iVar0]->f_11 && iParam1 == (*Global_1945938)[iVar0]->f_4)
				{
					if (iParam3 <= Global_1945938[iVar0])
					{
						return iVar0;
					}
				}
				Jump @140; //curOff = 127
				if (iVar1 == 0)
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
			if (iVar1 != 0)
			{
				func_303(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_103(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_33(iParam0))
	{
		return;
	}
	iVar0 = func_105(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1945938)[iVar0]->f_3, iParam1, iParam2);
}

void func_104(int iParam0)
{
	if (!func_33(iParam0))
	{
		return;
	}
	iVar0 = func_105(iParam0);
	if (_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		_uiprompt_set_group((*Global_1945938)[iVar0]->f_3, 1710353528, 0);
	}
}

int func_105(int iParam0)
{
	return iParam0;
}

void func_106(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_302(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

int func_107(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1280505101;
		case 1:
			return 437457038;
		case 2:
			return 787823186;
		case 3:
			return -22914651;
		case 4:
			return -207797345;
		case 5:
			return 152333965;
		case 6:
			return -705591224;
		case 7:
			return -307775564;
		case 8:
			return -1166159519;
		case 9:
			return -164804701;
		case 10:
			return -1562042092;
		case 11:
			return -1717629304;
		case 12:
			return -1669917636;
		case 13:
			return -884608551;
		case 14:
			return -1143188730;
		case 15:
			return 1856092306;
		case 16:
			return 1445824426;
		case 17:
			return -2082446577;
		case 18:
			return 2030128465;
		case 19:
			return -597126414;
		default:
			break;
	}
	return 0;
}

int func_108(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -780455182:
			return 1614617630;
		case -1287911066:
			return -617882357;
		case -1636964661:
			return 1599532233;
		case -1646022773:
			return -65357919;
		case 2134589549:
			return 2004715705;
		case -1109016944:
			return -1451193020;
		case 308500632:
			return 1553391542;
		case -709811179:
			return 317656811;
		case -1609238411:
			return 1910189712;
		case -986176781:
			return -1896654834;
		case -161804536:
			return -126421233;
		case -2009137002:
			return -440810089;
		case 1519228573:
			return -703551507;
		case -1614148516:
			return -1705330644;
		case -1958832660:
			return -245016475;
		case -1300082860:
			return 1529964155;
		case 247563739:
			return 325616917;
		case 1861313914:
			return 1067266077;
		case 1734766691:
			return 1292039078;
		case 657666087:
			return -1721762433;
		case 58958195:
			return 712585684;
		case -1243267511:
			return -1482291365;
		case -1053108445:
			return -1576735250;
		case 1982045664:
			return -1173476934;
		case -849582265:
			return 2097588565;
		case 429544447:
			return -159963867;
		case -148407339:
			return -1155213091;
		case -415839138:
			return 979428630;
		case 1673499939:
			return -720689005;
		case -979575591:
			return 463289412;
		case 921081956:
			return 731487006;
		case -739986731:
			return 371066;
		case -1761189332:
			return 270899202;
		case -607940493:
			return 894739389;
		case 1986618633:
			return -2113673964;
		case -1891628345:
			return -804420153;
		case -1960242214:
			return 1747567809;
		case -232974724:
			return -792295257;
		case 1535254161:
			return -452661064;
		case -1505275983:
			return 387715582;
		case 1284679164:
			return -1245190585;
		case -1787770845:
			return 422665644;
		case -1887999095:
			return -95543768;
		case 1034793488:
			return 120200140;
		case 2000209669:
			switch (iParam1)
			{
				case 11:
					return -615993722;
				default:
					break;
			}
			return -866955093;
		case -1272862985:
			switch (iParam1)
			{
				case 0:
					return 493724241;
				case 1:
					return 1378917331;
				case 2:
					return -1267048347;
				case 3:
					return 1840337620;
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_109()
{
	iVar0 = 0;
	while (iVar0 <= (20 - 1))
	{
		iVar2 = func_304(iVar0);
		if (func_39(Global_40.f_8863.f_148, iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_110()
{
	iVar0 = 0;
	while (iVar0 <= (20 - 1))
	{
		iVar1 = func_304(iVar0);
		if (!func_39(Global_40.f_8863.f_148, iVar1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_111()
{
	if (func_92() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 225514697)
	{
		return true;
	}
	return false;
}

int func_112(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1 == 1)
	{
		switch (iParam0)
		{
			case -321841939:
				return -1099171777;
			case -1958832660:
				return 443793586;
			case 247563739:
				return -1240692636;
			case -1300082860:
				return 3075517;
			case -1287911066:
				return 1336990636;
			case 1861313914:
				return 1964547316;
			case 1734766691:
				return -460989844;
			case 657666087:
				return -1735207738;
			case 1535254161:
				return -1018340507;
			case 58958195:
				return 1699788918;
			case -1109016944:
				return -764076835;
			case -780455182:
				return -1048196910;
			case -1636964661:
				return 276159606;
			case -2009137002:
				return -1450540639;
			case -1243267511:
				return 595762271;
			case -1053108445:
				return 1411852139;
			case -1646022773:
				return 2104695167;
			case 1284679164:
				return 899380023;
			case 2134589549:
				return -1051688219;
			case -1787770845:
				return -936503465;
			case -1887999095:
				return -1387877395;
			case 1519228573:
				return 133231560;
			case 1982045664:
				return -123431304;
			case 308500632:
				return -2009629516;
			case -849582265:
				return 1042178190;
			case 429544447:
				return -462983094;
			case -148407339:
				return -1419041917;
			case -415839138:
				return -1547870200;
			case -709811179:
				return 1008388265;
			case 1673499939:
				return 841815548;
			case -979575591:
				return -1736624325;
			case -1609238411:
				return 1333773802;
			case 921081956:
				return -2119790235;
			case -739986731:
				return 1437695839;
			case 1034793488:
				return -1324667819;
			case -1614148516:
				return 344894142;
			case -1761189332:
				return -1509887801;
			case -607940493:
				return 907274245;
			case 1986618633:
				return -261392068;
			case -161804536:
				return -2101238167;
			case 2000209669:
				if (iParam2 == 11)
				{
					return 664846144;
				}
				else
				{
					return 470395879;
				}
				break;
			case -232974724:
				return 1671677748;
			case -1272862985:
				if (iParam2 == 0)
				{
					return 306789431;
				}
				else if (iParam2 == 1)
				{
					return -648356304;
				}
				else if (iParam2 == 2)
				{
					return -1016027240;
				}
				else if (iParam2 == 3)
				{
					return 98524525;
				}
				break;
			case -1891628345:
				return -244494475;
			case -1960242214:
				return 1312605337;
			case -1505275983:
				return 1963540825;
			case -890175011:
				if (iParam2 == 0)
				{
					return -421616371;
				}
				else if (iParam2 == 1)
				{
					return 1136001003;
				}
				else if (iParam2 == 2)
				{
					return 345827951;
				}
				else if (iParam2 == 3)
				{
					return 1234082698;
				}
				else if (iParam2 == 4)
				{
					return -871261476;
				}
				break;
			case -986176781:
				return 1496143424;
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case -321841939:
				return -1967056269;
			case -1958832660:
				return -648759467;
			case 247563739:
				return 255109463;
			case -1300082860:
				return 383250899;
			case 677950956:
				if (iParam2 == 0)
				{
					return -73611983;
				}
				else if (iParam2 == 1)
				{
					return -1198691744;
				}
				else if (iParam2 == 2)
				{
					return 1983661621;
				}
				else if (iParam2 == 3)
				{
					return -1513446044;
				}
				else if (iParam2 == 4)
				{
					return -928373393;
				}
				else if (iParam2 == 5)
				{
					return -1085802945;
				}
				break;
			case -1287911066:
				return -1174358134;
			case 1734766691:
				return 591206754;
			case 657666087:
				return 732639128;
			case 1535254161:
				return -1087659594;
			case 58958195:
				return 2146731777;
			case -1109016944:
				return 1545716728;
			case -780455182:
				return -1852987413;
			case -1636964661:
				return -869178017;
			case -2009137002:
				return -1814020955;
			case -1243267511:
				return 2132597694;
			case -1053108445:
				return 174557649;
			case -1646022773:
				return 2146742726;
			case 1284679164:
				return -1071111037;
			case 2134589549:
				return -34990673;
			case -1787770845:
				return -166634067;
			case -1887999095:
				return -291947039;
			case 1519228573:
				return -1480640586;
			case 1982045664:
				return 1720275147;
			case 308500632:
				return -662282713;
			case -849582265:
				return -1815546802;
			case 429544447:
				return 1059199814;
			case -148407339:
				return -926136175;
			case -415839138:
				return -396787177;
			case -709811179:
				return -1049062461;
			case 1673499939:
				return -1917407050;
			case -979575591:
				return -1821865947;
			case -1609238411:
				return 364371639;
			case 921081956:
				return -1267601737;
			case -739986731:
				return -1045962986;
			case 1034793488:
				return -1911908440;
			case -1614148516:
				return 408494028;
			case -1761189332:
				return 1049962829;
			case -607940493:
				return -1306230772;
			case 1986618633:
				return -1172234904;
			case -161804536:
				return 684380081;
			case 2000209669:
				if (iParam2 == 11)
				{
					return 2070016093;
				}
				else
				{
					return -871264392;
				}
				break;
			case -232974724:
				return 1876202217;
			case -1272862985:
				if (iParam2 == 0)
				{
					return 1896812829;
				}
				else if (iParam2 == 1)
				{
					return 1453616421;
				}
				else if (iParam2 == 2)
				{
					return 748324258;
				}
				else if (iParam2 == 3)
				{
					return -319332707;
				}
				break;
			case -1891628345:
				return 1447580982;
			case -1960242214:
				return 556103947;
			case -1505275983:
				return 767041924;
			case -986176781:
				return 252093804;
			case -890175011:
				if (iParam2 == 0)
				{
					return 1861008860;
				}
				else if (iParam2 == 1)
				{
					return 1746563727;
				}
				else if (iParam2 == 2)
				{
					return 508009009;
				}
				else if (iParam2 == 3)
				{
					return -788581731;
				}
				else if (iParam2 == 4)
				{
					return -209526346;
				}
				break;
			default:
				break;
		}
	}
	return 0;
}

int func_113(int iParam0, int iParam1)
{
	iVar0 = func_112(iParam0, 1, iParam1);
	if (!_journal_can_write_entry(iVar0))
	{
		return iVar0;
	}
	iVar0 = func_112(iParam0, 0, iParam1);
	if (!_journal_can_write_entry(iVar0))
	{
		return iVar0;
	}
	return 0;
}

void func_114(int iParam0, int iParam1)
{
	_journal_write_entry(iParam0);
	if (iParam1 == 1)
	{
		func_305(1);
	}
}

int func_115()
{
	iVar0 = 0;
	if (func_39(Global_40.f_8863.f_154, 2048))
	{
		iVar0++;
	}
	if (func_39(Global_40.f_8863.f_154, 4096))
	{
		iVar0++;
	}
	if (func_39(Global_40.f_8863.f_154, 8192))
	{
		iVar0++;
	}
	if (func_39(Global_40.f_8863.f_154, 16384))
	{
		iVar0++;
	}
	if (func_39(Global_40.f_8863.f_154, 32768))
	{
		iVar0++;
	}
	return iVar0;
}

bool func_116()
{
	if (!func_252(-569063887, 1, 0))
	{
		_0xbfff81e12a745a5f();
		return false;
	}
	if (!func_306(16))
	{
		_0xbfff81e12a745a5f();
		return false;
	}
	if (_0xec7e480ff8bd0bed(Global_35) && !has_anim_event_fired(Global_35, 108107462))
	{
		return false;
	}
	if (_0x3ab6c7b0bb0df4b1(Global_35, -1) || func_301(Global_35, 1369124074))
	{
		return false;
	}
	if ((((((is_control_just_pressed(0, -473983589) || is_control_just_pressed(0, -719620017)) || is_control_just_pressed(0, 1367437629)) || is_control_just_pressed(0, 992265328)) || is_control_just_pressed(0, -1053137564)) || is_control_just_pressed(0, 129547951)) || is_control_just_pressed(0, -1300031296))
	{
		return false;
	}
	iVar0 = -569063887;
	if (_0x3d10d7179d7034af(func_307(0), iVar0, 0))
	{
		return false;
	}
	Global_36620 = get_game_timer() + 1000;
	func_308();
	disable_control_action(0, -209515122, false);
	_task_item_interaction(player_ped_id(), iVar0, 1928812891, 1, 0, -1082130432);
	return true;
}

void func_117(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_118()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

void func_119(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_120(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_121(int iParam0, var uParam1)
{
	if (!_does_volume_exist(iParam0))
	{
		return 0;
	}
	vVar0 = { _0x3e2a25b2416dd67e(iParam0) };
	uParam1->f_6 = vVar0.y;
	vVar0 = { vVar0 * Vector(0.5f, 0.5f, 0.5f) };
	vVar3 = { _0xf70f00013a62f866(iParam0) };
	vVar6 = { _0x18675bc914891122(iParam0) };
	fVar9 = vVar6.z;
	*uParam1 = { _get_object_offset_from_coords(vVar3, fVar9, -vVar0.x, 0f, -vVar0.z) };
	uParam1->f_3 = { _get_object_offset_from_coords(vVar3, fVar9, vVar0.x, 0f, vVar0.z) };
	return 1;
}

int func_122(var uParam0)
{
	return uParam0;
}

int func_123(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 2139774588:
			return 1;
		case 1142025875:
			return 2;
		case 1587891565:
			return 4;
		case 1877013492:
			return 32;
		case -643014279:
			return 64;
		case -597116214:
			return 128;
		case 551416228:
			return 256;
		case 1022576842:
			return 512;
		case 953325896:
			return 1024;
		case 508358508:
			return 2048;
		case -735200598:
			return 4096;
		case -856432278:
			return 8192;
		case -2010847721:
			return 16384;
		case 446961221:
			return 32768;
		case -1972216640:
			return 65536;
		case 530833824:
			return 131072;
		case 1682361219:
			return 262144;
		case 158959085:
			return 524288;
		case 1919819559:
			return 1048576;
		case 1461411082:
			return 2097152;
		case -549508280:
			return 4194304;
		default:
			break;
	}
	return 0;
}

int func_124(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return -2;
		case 2:
			return -5;
		case 3:
			return -10;
		case 4:
			return -20;
		case 5:
			return -40;
		case 6:
			return -160;
		case 7:
			return -320;
		case 8:
			return -480;
		case 18:
			return -640;
		case 9:
			return 0;
		case 10:
			return 1;
		case 11:
			return 2;
		case 12:
			return 5;
		case 13:
			return 10;
		case 14:
			return 20;
		case 15:
			return 40;
		case 16:
			return 160;
		case 17:
			return 640;
		default:
			break;
	}
	return 0;
}

void func_125(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = func_309();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_310(iParam0);
		}
		if (does_entity_exist(iParam5))
		{
			if (decor_exist_on(iParam5, "honor_override"))
			{
				iParam0 = (decor_get_int(iParam5, "honor_override") * -1);
				decor_remove(iParam5, "honor_override");
			}
			else if (decor_exist_on(iParam5, "honor_bank"))
			{
				iParam0 = (iParam0 - decor_get_int(iParam5, "honor_bank"));
				decor_set_int(iParam5, "honor_bank", 0);
			}
		}
	}
	iVar2 = 240;
	iVar3 = -240;
	fVar4 = 1f;
	if (func_224(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_15())
		{
			if (((iParam2 >= 0 && iParam2 <= 4) || (iParam2 >= 10 && iParam2 <= 14)) && iParam3 != 446961221)
			{
				fVar4 = 1.5f;
			}
		}
	}
	if (iParam0 > 0)
	{
		iVar5 = ceil((IntToFloat(iParam0) * fVar4));
	}
	else
	{
		iVar5 = floor((IntToFloat(iParam0) * fVar4));
	}
	Global_40.f_11095.f_35 = (Global_40.f_11095.f_35 + iVar5);
	Global_40.f_11095.f_35 = func_311(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_309();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || bParam7)
	{
		iVar6 = func_312(iVar1);
		func_314(func_313(), 0, 4000);
		func_315(Global_40.f_11095.f_35);
		if ((iVar6 > Global_40.f_11095.f_36 && iVar1 > 0) || (iVar6 > Global_40.f_11095.f_37 && iVar1 < 0))
		{
			if (iVar1 < 0)
			{
				Global_40.f_11095.f_37 = iVar6;
			}
			else
			{
				Global_40.f_11095.f_36 = iVar6;
			}
		}
		func_316(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_194(func_193(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (does_entity_exist(iParam5))
			{
				decor_set_int(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_124(14))
				{
					sVar7 = "Honor_Increase_Big";
					animpostfx_play("PlayerHonorLevelGood");
				}
				else
				{
					sVar7 = "Honor_Increase_Small";
				}
				if (is_string_null_or_empty(sParam4))
				{
					sParam4 = func_317(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_318(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_318(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_194(func_193(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_124(4))
				{
					sVar7 = "Honor_Decrease_Big";
					animpostfx_play("PlayerHonorLevelBad");
				}
				else
				{
					sVar7 = "Honor_Decrease_Small";
				}
				if (is_string_null_or_empty(sParam4))
				{
					sParam4 = func_317(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_318(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_318(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_193(-1990689970) };
	stat_id_set_int(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		_0xe6b763c7f4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_319(10, 1);
	}
}

void func_126(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0] = iParam1;
	Global_1347477->f_155[iParam0]->f_2 = iParam2;
	Global_1347477->f_155[iParam0]->f_3 = iParam3;
	Global_1347477->f_155[iParam0]->f_4 = iParam4;
	Global_1347477->f_155[iParam0]->f_5 = bParam5;
	Global_1347477->f_155[iParam0]->f_1 = get_game_timer() + 500;
}

int func_127()
{
	return &Global_1899515;
}

int func_128(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

bool func_129(int iParam0, int iParam1)
{
	switch (*iParam0)
	{
		case -415839138:
			switch (*iParam1)
			{
				case -1148613331:
				case -702816767:
				case -173507739:
				case 433385945:
				case 821931868:
				case 1500834021:
				case 1632247697:
					return true;
			}
			break;
		case 1535254161:
			switch (*iParam1)
			{
				case -1233681761:
				case 2082228755:
					return true;
			}
			break;
		case 397377585:
			switch (*iParam1)
			{
				case -1721991356:
				case -1148613331:
				case -702816767:
				case -173507739:
				case 433385945:
				case 821931868:
				case 1500834021:
				case 1632247697:
					return true;
			}
			break;
		default:
			break;
	}
	return false;
}

bool func_130(int iParam0)
{
	iVar0 = func_289(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

Vector3 func_131(int iParam0, int iParam1)
{
	switch (*iParam0)
	{
		case -777592153:
			switch (iParam1)
			{
				case 0:
					return 1122.582f, 430.9633f, 96.2455f;
				case 1:
					return 1123.024f, 430.963f, 95.7573f;
				default:
					break;
			}
			break;
		case 949011950:
			switch (iParam1)
			{
				case 0:
					return -2339.886f, -2176.59f, 71.4468f;
				case 1:
					return -2337.024f, -2179.854f, 71.9464f;
				case 2:
					return -2343.997f, -2181.427f, 70.977f;
				default:
					break;
			}
			break;
		case 1342653896:
			switch (iParam1)
			{
				case 0:
					return -3339.953f, -2500.892f, 1.8466f;
				default:
					break;
			}
			break;
		case 2072069278:
			switch (iParam1)
			{
				case 0:
					return -2334.939f, 903.981f, 157.7555f;
				case 1:
					return -2334.179f, 904.0247f, 157.8905f;
				default:
					break;
			}
			break;
		case 425000526:
			switch (iParam1)
			{
				case 0:
					return -2366.936f, 124.0762f, 216.8527f;
				default:
					break;
			}
			break;
		case -1636964661:
			switch (iParam1)
			{
				case 0:
					return -3815.849f, -2982.679f, -5.7608f;
				default:
					break;
			}
			break;
		case -2060865802:
			switch (iParam1)
			{
				case 0:
					return 2793.436f, 855.1691f, 71.7447f;
				default:
					break;
			}
			break;
		case 1937333853:
			switch (iParam1)
			{
				case 0:
					return 1593.37f, -1769.114f, 51.5788f;
				default:
					break;
			}
			break;
		case -654238687:
			switch (iParam1)
			{
				case 0:
					return -1413.266f, -2671.288f, 41.17608f;
				case 1:
					return -1411.035f, -2671.661f, 41.17608f;
				case 2:
					return -1411.408f, -2672.634f, 41.1746f;
				case 3:
					return -1413.048f, -2671.595f, 41.1746f;
				case 4:
					return -1412.823f, -2670.672f, 41.1746f;
				case 5:
					return -1412.741f, -2672.306f, 41.1746f;
				case 6:
					return -1413.745f, -2671.585f, 41.1746f;
				case 7:
					return -1412.558f, -2671.803f, 41.1746f;
				case 8:
					return -1412.088f, -2671.957f, 41.1746f;
				case 9:
					return -1412.338f, -2671.517f, 41.1746f;
				default:
					break;
			}
			break;
		case -1300082860:
			switch (iParam1)
			{
				case 0:
					return 368.6882f, -13.6098f, 108.217f;
				default:
					break;
			}
			break;
		case 149709049:
			switch (iParam1)
			{
				case 0:
					return -328.35f, -147.69f, 52.62f;
				case 1:
					return -328.35f, -147.69f, 52.62f;
				default:
					break;
			}
			break;
		case -1568839185:
			switch (iParam1)
			{
				case 0:
					return -2261.68f, -1433.048f, 138.7403f;
				case 1:
					return -2261.088f, -1434.147f, 138.5787f;
				case 2:
					return -2261.852f, -1433.882f, 138.6091f;
				case 3:
					return -2261.244f, -1434.466f, 138.7101f;
				case 4:
					return -2261.025f, -1432.579f, 138.68f;
				case 5:
					return -2260.271f, -1432.243f, 138.9447f;
				case 6:
					return -2260.379f, -1433.973f, 138.763f;
				case 7:
					return -2259.772f, -1432.779f, 138.7855f;
				case 8:
					return -2262.282f, -1433.536f, 138.7945f;
				case 9:
					return -2259.818f, -1433.147f, 138.9421f;
				default:
					break;
			}
			break;
		case -641229542:
			switch (iParam1)
			{
				case 0:
					return 1750.49f, -2091.79f, 40.94f;
				default:
					break;
			}
			break;
		case 1673499939:
			switch (iParam1)
			{
				case 0:
					return 2476.028f, 1996.19f, 168.2534f;
				case 1:
					return 2475.049f, 1998.073f, 168.2685f;
				case 2:
					return 2474.894f, 1999.316f, 168.2582f;
				default:
					break;
			}
			break;
		case -415839138:
			switch (iParam1)
			{
				case 0:
					return 1026.078f, 1575.433f, 360.6882f;
				case 1:
					return 1080.511f, 1659.407f, 372.3716f;
				default:
					break;
			}
			break;
		case -1177787273:
			switch (iParam1)
			{
				case 0:
					return -4859.858f, -2421.918f, 7.61f;
				case 1:
					return -4757.666f, -2424.231f, 8.0423f;
				case 2:
					return -4756.033f, -2420.065f, 7.9381f;
				case 3:
					return -4757.72f, -2419.863f, 7.8109f;
				default:
					break;
			}
			break;
		case -1287911066:
			switch (iParam1)
			{
				case 0:
					return 546.5995f, 1794.07f, 127.9608f;
				default:
					break;
			}
			break;
		case -2008558277:
			switch (iParam1)
			{
				case 0:
					return -5419.692f, -3655.095f, -20f;
				case 1:
					return -5419.692f, -3651.995f, -20f;
				case 2:
					return -5419.692f, -3653.495f, -20f;
				case 3:
					return -5419.792f, -3655.34f, -17.72f;
				case 4:
					return -5419.792f, -3654.34f, -17.72f;
				case 5:
					return -5429.492f, -3655.095f, -20f;
				case 6:
					return -5429.492f, -3653.61f, -20f;
				default:
					break;
			}
			break;
		case 1861313914:
			switch (iParam1)
			{
				case 0:
					return 894.7463f, -1969.915f, 44.5785f;
				case 1:
					return 1047.956f, -1880.671f, 45.402f;
				default:
					break;
			}
			break;
		case -1824429070:
			switch (iParam1)
			{
				case 0:
					return -1330.84f, -88.9414f, 97.5094f;
				case 1:
					return -1332.349f, -87.4579f, 97.4614f;
				case 2:
					return -1330.415f, -89.829f, 97.5879f;
				default:
					break;
			}
			break;
		case -1841331114:
			switch (iParam1)
			{
				case 0:
					return -3714.425f, -3602.42f, 45.4395f;
				case 1:
					return -3712.339f, -3602.567f, 44.9224f;
				case 2:
					return -3716.815f, -3604.644f, 44.6678f;
				case 3:
					return -3716.111f, -3602.837f, 46.7136f;
				default:
					break;
			}
			break;
		case -35775921:
			switch (iParam1)
			{
				case 0:
					return 1141.463f, 763.3734f, 95.371f;
				default:
					break;
			}
			break;
		case 657666087:
			switch (iParam1)
			{
				case 0:
					return -1741.339f, -1624.245f, 89.9356f;
				case 1:
					return -1755.518f, -1624.026f, 90.635f;
				default:
					break;
			}
			break;
		case 1464664327:
			switch (iParam1)
			{
				case 0:
					return 1217.047f, 2002.68f, 319.2006f;
				default:
					break;
			}
			break;
		case 429544447:
			switch (iParam1)
			{
				case 0:
					return -6314.926f, -3466.984f, -10.575f;
				default:
					break;
			}
			break;
		case 1519228573:
			switch (iParam1)
			{
				case 0:
					return 2023.15f, -1708.104f, 40.5575f;
				default:
					break;
			}
			break;
		case -1714262909:
			switch (iParam1)
			{
				case 0:
					return 1763.535f, -560.0701f, 46.6156f;
				default:
					break;
			}
			break;
		case -920971071:
			switch (iParam1)
			{
				case 0:
					return 1245.788f, 1152.984f, 151.5137f;
				default:
					break;
			}
			break;
		case -739986731:
			switch (iParam1)
			{
				case 0:
					return -2905.723f, -254.32f, 186.8714f;
				default:
					break;
			}
			break;
		case -2108030724:
			switch (iParam1)
			{
				case 0:
					return 1010.224f, -1764.319f, 46.4285f;
				default:
					break;
			}
			break;
		case 1187917501:
			switch (iParam1)
			{
				case 0:
					return -2222.461f, -618.8527f, 135.3655f;
				case 1:
					return -2222.735f, -616.4194f, 135.0682f;
				default:
					break;
			}
			break;
		case -1887999095:
			switch (iParam1)
			{
				case 0:
					return 1772.332f, -1360.154f, 44.1704f;
				default:
					break;
			}
			break;
		case 1982045664:
			switch (iParam1)
			{
				case 0:
					return -2532.369f, 1173.309f, 225.1319f;
				default:
					break;
			}
			break;
		case -2009137002:
			switch (iParam1)
			{
				case 0:
					return 1256.994f, 1257.913f, 171.0152f;
				default:
					break;
			}
			break;
		case -1829339703:
			switch (iParam1)
			{
				case 0:
					return 2518.04f, 564.7737f, 70.937f;
				case 1:
					return 2519.439f, 562.9084f, 70.9917f;
				default:
					break;
			}
			break;
		case 404434344:
			switch (iParam1)
			{
				case 0:
					if (func_132())
					{
						return 792.7722f, 1776.509f, 281.5611f;
					}
					else if (func_133())
					{
						return 794.3322f, 1778.012f, 280.3784f;
					}
					break;
			}
			break;
		case -1240932004:
			switch (iParam1)
			{
				case 0:
					return -1497.558f, 1251.074f, 313.1244f;
				default:
					break;
			}
			break;
		case -1891628345:
		case -1859413640:
		case -1761189332:
		case -1494823099:
		case -1481450947:
		case -1420566543:
		case -1272862985:
		case -1208846034:
		case -1144800837:
		case -1061274876:
		case -968854939:
		case -780455182:
		case -763376358:
		case -709811179:
		case -599506500:
		case -499529359:
		case -357364973:
		case -261997819:
		case -30872859:
		case -657632:
		case 221420861:
		case 308500632:
		case 330993088:
		case 435290930:
		case 464413478:
		case 513110082:
		case 683269210:
		case 733338689:
		case 870958936:
		case 939555152:
		case 1048086072:
		case 1124200691:
		case 1187689415:
		case 1284679164:
		case 1335921989:
		case 1424723727:
		case 1490223565:
		case 1505050944:
		case 1535254161:
		case 1801731633:
		case 2072029413:
		case 2134589549:
		case 2135153015:
			break;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_132()
{
	if (func_135(932909855))
	{
		return true;
	}
	return false;
}

bool func_133()
{
	if (func_135(2051822093))
	{
		return true;
	}
	return false;
}

int func_134()
{
	return Global_0.f_7;
}

bool func_135(int iParam0)
{
	iVar0 = func_320(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

bool func_136(int iParam0)
{
	if (func_92() != -1)
	{
		return false;
	}
	if (!func_321(iParam0))
	{
		return false;
	}
	return func_130((*Global_1347702)[iParam0]->f_15);
}

void func_137(int iParam0)
{
	if (!_does_volume_exist(iLocal_41))
	{
		if (_does_scenario_point_exist(iParam0->f_1))
		{
			vVar0 = { _get_scenario_point_coords(iParam0->f_1, true) };
		}
		if (func_22(vVar0))
		{
		}
		vVar6 = { 2f, 2f, 3f };
		vVar3 = { 0f, 0f, 0f };
		if ((*iParam0 == -654238687 || *iParam0 == -2008558277) || *iParam0 == -415839138)
		{
			if (*iParam0 == -654238687)
			{
				vVar0 = { -1412.403f, -2671.542f, 42.06424f };
				vVar3 = { 0f, 0f, 24.67129f };
				vVar6 = { 3.836484f, 5.953217f, 4.016988f };
			}
			else if (*iParam0 == -2008558277)
			{
				vVar0 = { -5424.684f, -3654.149f, -20.72006f };
				vVar3 = { 0f, 0f, 0f };
				vVar6 = { 24.41619f, 14.68522f, 8.667062f };
			}
			else if (*iParam0 == -415839138)
			{
				vVar0 = { 1025.944f, 1574.258f, 361.924f };
				vVar3 = { 0f, 0f, 0f };
				vVar6 = { 2.515867f, 3f, 3.65f };
			}
			iLocal_41 = _create_volume_box_with_custom_name(vVar0, vVar3, vVar6, func_322(iParam0));
		}
		else
		{
			if (*iParam0 == -35775921)
			{
				vVar6.x = (10f * 2f);
				vVar6.f_1 = (10f * 2f);
				vVar6.f_2 = (10f * 3f);
			}
			iLocal_41 = _create_volume_cylinder_with_custom_name(vVar0, vVar3, vVar6, func_322(iParam0));
		}
	}
	if ((*iParam0 == -654238687 || *iParam0 == 1861313914) || *iParam0 == -35775921)
	{
		if (!_does_volume_exist(iLocal_42))
		{
			if (*iParam0 == -654238687)
			{
				vVar6 = { 1.267693f, 1.436306f, 4.016988f };
				iLocal_42 = _create_volume_box_with_custom_name(vVar0, vVar3, vVar6, "DISC_VOL_CABIN_WANDER");
			}
			else if (*iParam0 == 1861313914)
			{
				if (func_16(59))
				{
					vVar0 = { 895.6285f, -1968.128f, 43.71555f };
					vVar3 = { 0f, 0f, -37.38475f };
					vVar6 = { 1.309918f, 1.509376f, 4.169786f };
				}
				else
				{
					vVar0 = { 895.55f, -1968.068f, 43.71555f };
					vVar3 = { 0f, 0f, -37.38475f };
					vVar6 = { 3f, 1.509376f, 4.169786f };
				}
				iLocal_42 = _create_volume_box_with_custom_name(vVar0, vVar3, vVar6, "DISC_VOL_BRAITH_ENTER");
			}
			else if (*iParam0 == -35775921)
			{
				vVar0 = { 1158.427f, 696.2158f, 96.65366f };
				vVar3 = { 0f, 0f, 0f };
				vVar6 = { 98.8934f, 94.77499f, 52.6483f };
				iLocal_42 = _create_volume_cylinder_with_custom_name(vVar0, vVar3, vVar6, "DISC_VOL_SHEEP_WANDER");
			}
		}
		if (!_does_volume_exist(iLocal_43) && *iParam0 == 1861313914)
		{
			vVar0 = { 895.55f, -1968.068f, 43.71555f };
			vVar3 = { 0f, 0f, 0f };
			vVar6 = { 3f, 3f, 4f };
			iLocal_43 = _create_volume_cylinder_with_custom_name(vVar0, vVar3, vVar6, "DISC_VOL_BRAITH_AVOID");
			_0x19c7567d2f2287d6(iLocal_43, 15);
			_0xb56d41a694e42e86(iLocal_43, 2238463, 0, 0, -1, -1, 10);
			_0xe9b168527b337bf0(Global_1935630->f_40, iLocal_43);
			_0xf74e134f40192884(Global_1935630->f_40, 1);
		}
	}
}

void func_138(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		Local_63.f_12[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		Local_157.f_6[iVar0] = 0;
		iVar0++;
	}
	switch (*iParam0)
	{
		case -654238687:
			Local_63.f_12[0] = 989669666;
			Local_63.f_12[1] = 989669666;
			Local_63.f_12[2] = 989669666;
			Local_63.f_12[3] = 989669666;
			Local_63.f_12[4] = 989669666;
			Local_63.f_12[5] = 989669666;
			Local_63.f_12[6] = 989669666;
			Local_63.f_12[7] = 989669666;
			Local_63.f_12[8] = 989669666;
			Local_63.f_12[9] = 989669666;
			Local_157.f_6[0] = 1590578527;
			break;
		case -415839138:
			Local_63.f_12[0] = -263328130;
			break;
		case -2008558277:
			Local_63.f_12[0] = 674267496;
			Local_63.f_12[1] = 674267496;
			Local_63.f_12[2] = 674267496;
			Local_63.f_12[3] = 674267496;
			Local_63.f_12[4] = 674267496;
			Local_63.f_12[5] = 674267496;
			Local_63.f_12[6] = 674267496;
			break;
		case 1861313914:
			Local_63.f_12[0] = 1960786232;
			break;
		case -35775921:
			Local_63.f_12[0] = 40345436;
			Local_157.f_6[0] = -1202096295;
			break;
		default:
			break;
	}
}

void func_139(int iParam0)
{
	if ((*iParam0 == -654238687 || *iParam0 == -2008558277) || *iParam0 == -35775921)
	{
		func_323(&uLocal_31);
	}
}

void func_140(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (!&uParam0->f_12[iVar0] == 0)
		{
			request_model(&(uParam0->f_12[iVar0]), false);
		}
		iVar0++;
	}
}

void func_141(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		if (!&uParam0->f_6[iVar0] == 0)
		{
			request_model(&(uParam0->f_6[iVar0]), false);
		}
		iVar0++;
	}
}

void func_142(int iParam0, var uParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		func_324(iParam0, uParam1, iVar0, iParam2);
		iVar0++;
	}
}

void func_143(int iParam0)
{
	if (_does_text_database_exist(func_325(iParam0)))
	{
		_text_database_request(func_325(iParam0));
	}
}

bool func_144(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (!&uParam0->f_12[iVar0] == 0)
		{
			if (!has_model_loaded(&(uParam0->f_12[iVar0])))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_145(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		if (!&uParam0->f_6[iVar0] == 0)
		{
			if (!has_model_loaded(&(uParam0->f_6[iVar0])))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_146(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		if (!is_string_null_or_empty(func_284(iParam0, iVar0, 2, 0)))
		{
			if (!_is_anim_scene_loaded(uParam1[iVar0], true, false))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_147(int iParam0)
{
	if (_does_text_database_exist(func_325(iParam0)))
	{
		if (!_text_database_has_loaded(func_325(iParam0)))
		{
			return false;
		}
	}
	return true;
}

bool func_148(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_149(int iParam0, int iParam1)
{
	switch (*iParam0)
	{
		case -777592153:
			switch (iParam1)
			{
				case 0:
					return -12.03f;
				case 1:
					return -22.89f;
				default:
					break;
			}
			break;
		case 949011950:
			switch (iParam1)
			{
				case 0:
					return 165.69f;
				case 1:
					return -97.7f;
				case 2:
					return 130.42f;
				default:
					break;
			}
			break;
		case 1342653896:
			switch (iParam1)
			{
				case 0:
					return -90f;
				default:
					break;
			}
			break;
		case 2072069278:
			switch (iParam1)
			{
				case 0:
					return -46.21f;
				case 1:
					return 135.66f;
				default:
					break;
			}
			break;
		case 425000526:
			switch (iParam1)
			{
				case 0:
					return 72.28f;
				default:
					break;
			}
			break;
		case -1636964661:
			switch (iParam1)
			{
				case 0:
					return 132.16f;
				default:
					break;
			}
			break;
		case -2060865802:
			switch (iParam1)
			{
				case 0:
					return 186.76f;
				default:
					break;
			}
			break;
		case 1937333853:
			switch (iParam1)
			{
				case 0:
					return 43.65f;
				default:
					break;
			}
			break;
		case -654238687:
			switch (iParam1)
			{
				case 0:
					return -96.76f;
				case 1:
					return 120.75f;
				case 2:
					return 0f;
				case 3:
					return 30f;
				case 4:
					return 60f;
				case 5:
					return -15f;
				case 6:
					return -30f;
				case 7:
					return -60f;
				case 8:
					return -120f;
				case 9:
					return 15f;
				default:
					break;
			}
			break;
		case -1300082860:
			switch (iParam1)
			{
				case 0:
					return -174f;
				default:
					break;
			}
			break;
		case 149709049:
			switch (iParam1)
			{
				case 0:
					return 0f;
				case 1:
					return 0f;
				default:
					break;
			}
			break;
		case -1568839185:
			switch (iParam1)
			{
				case 0:
					return -98.66f;
				case 1:
					return 3.79f;
				case 2:
					return -93.21f;
				case 3:
					return -72.99f;
				case 4:
					return 130.68f;
				case 5:
					return 117.29f;
				case 6:
					return -133f;
				case 7:
					return -86.34f;
				case 8:
					return 93.9f;
				case 9:
					return 110.42f;
				default:
					break;
			}
			break;
		case -641229542:
			switch (iParam1)
			{
				case 0:
					return 162.86f;
				default:
					break;
			}
			break;
		case 1673499939:
			switch (iParam1)
			{
				case 0:
					return -19.53f;
				case 1:
					return 133.99f;
				case 2:
					return -105.95f;
				default:
					break;
			}
			break;
		case -415839138:
			switch (iParam1)
			{
				case 0:
					return 175f;
				default:
					break;
			}
			break;
		case -1177787273:
			switch (iParam1)
			{
				case 0:
					return -167.58f;
				case 1:
					return 0f;
				case 2:
					return 117.57f;
				case 3:
					return 179.95f;
				default:
					break;
			}
			break;
		case -1287911066:
			switch (iParam1)
			{
				case 0:
					return -86.12f;
				default:
					break;
			}
			break;
		case -2008558277:
			switch (iParam1)
			{
				case 0:
					return -90f;
				case 1:
					return -90f;
				case 2:
					return -90f;
				case 3:
					return -90f;
				case 4:
					return -90f;
				case 5:
					return 90f;
				case 6:
					return 90f;
				default:
					break;
			}
			break;
		case 1861313914:
			switch (iParam1)
			{
				case 0:
					return -38.1f;
				case 1:
					return 56.97f;
				default:
					break;
			}
			break;
		case -1824429070:
			switch (iParam1)
			{
				case 0:
					return -2.39f;
				case 1:
					return -38.07f;
				case 2:
					return -132.4f;
				default:
					break;
			}
			break;
		case -1841331114:
			switch (iParam1)
			{
				case 0:
					return 59.57f;
				case 1:
					return 180f;
				case 2:
					return 180f;
				case 3:
					return -170.06f;
				default:
					break;
			}
			break;
		case -35775921:
			switch (iParam1)
			{
				case 0:
					return 0f;
				default:
					break;
			}
			break;
		case 657666087:
			switch (iParam1)
			{
				case 0:
					return -115.63f;
				case 1:
					return 280.0316f;
				default:
					break;
			}
			break;
		case 1464664327:
			switch (iParam1)
			{
				case 0:
					return 349.2461f;
				default:
					break;
			}
			break;
		case 429544447:
			switch (iParam1)
			{
				case 0:
					return 180f;
				default:
					break;
			}
			break;
		case 1519228573:
			switch (iParam1)
			{
				case 0:
					return -75.35f;
				default:
					break;
			}
			break;
		case -920971071:
			switch (iParam1)
			{
				case 0:
					return -26.24f;
				default:
					break;
			}
			break;
		case -739986731:
			switch (iParam1)
			{
				case 0:
					return -90.47f;
				default:
					break;
			}
			break;
		case -2108030724:
			switch (iParam1)
			{
				case 0:
					return 175.4f;
				default:
					break;
			}
			break;
		case 1187917501:
			switch (iParam1)
			{
				case 0:
					return 165.69f;
				case 1:
					return 0f;
				default:
					break;
			}
			break;
		case -1887999095:
			switch (iParam1)
			{
				case 0:
					return -99.19f;
				default:
					break;
			}
			break;
		case -2009137002:
			switch (iParam1)
			{
				case 0:
					return 0f;
				default:
					break;
			}
			break;
		case -1829339703:
			switch (iParam1)
			{
				case 0:
					return 142.69f;
				case 1:
					return 165.69f;
				default:
					break;
			}
			break;
		case 404434344:
			switch (iParam1)
			{
				case 0:
					if (func_132())
					{
						return 275f;
					}
					else if (func_133())
					{
						return 275f;
					}
					break;
			}
			break;
		case -1240932004:
			switch (iParam1)
			{
				case 0:
					return 150.68f;
				default:
					break;
			}
			break;
		case -1891628345:
		case -1859413640:
		case -1761189332:
		case -1714262909:
		case -1494823099:
		case -1481450947:
		case -1420566543:
		case -1272862985:
		case -1208846034:
		case -1144800837:
		case -1061274876:
		case -968854939:
		case -780455182:
		case -763376358:
		case -709811179:
		case -599506500:
		case -499529359:
		case -357364973:
		case -261997819:
		case -30872859:
		case -657632:
		case 221420861:
		case 308500632:
		case 330993088:
		case 435290930:
		case 464413478:
		case 513110082:
		case 683269210:
		case 733338689:
		case 870958936:
		case 939555152:
		case 1048086072:
		case 1124200691:
		case 1187689415:
		case 1284679164:
		case 1335921989:
		case 1424723727:
		case 1490223565:
		case 1505050944:
		case 1535254161:
		case 1801731633:
		case 2072029413:
		case 2134589549:
		case 2135153015:
			break;
		default:
			break;
	}
	return 0f;
}

void func_150(var uParam0, vector3 vParam1, float fParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (!&uParam0->f_12[iParam5] == 0)
	{
		if (!does_entity_exist(&(uParam0->f_1[iParam5])))
		{
			uParam0->f_1[iParam5] = func_326(&(uParam0->f_12[iParam5]), vParam1, fParam4, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0);
			if (!is_entity_dead(&(uParam0->f_1[iParam5])))
			{
				if (bParam6)
				{
					_0x9587913b9e772d29(&(uParam0->f_1[iParam5]), 0);
				}
				set_blocking_of_non_temporary_events(&(uParam0->f_1[iParam5]), true);
				task_stand_still(&(uParam0->f_1[iParam5]), -1);
				if (!bParam7)
				{
					set_entity_visible(&(uParam0->f_1[iParam5]), false);
				}
				*uParam0++;
			}
		}
		else
		{
			*uParam0++;
		}
	}
	else
	{
		*uParam0++;
	}
}

bool func_151(int iParam0, var uParam1, var uParam2, bool bParam3, float fParam4, int iParam5)
{
	if (bParam3)
	{
		while (*uParam1 < 10)
		{
			func_150(uParam1, func_131(iParam0, *uParam1), func_149(iParam0, *uParam1), *uParam1, fParam4, iParam5);
		}
		func_327(uParam2, 2);
		return true;
	}
	else
	{
		switch (*uParam2)
		{
			case 0:
				func_327(uParam2, 1);
				break;
			case 1:
				if (*uParam1 < 10)
				{
					func_150(uParam1, func_131(iParam0, *uParam1), func_149(iParam0, *uParam1), *uParam1, fParam4, iParam5);
				}
				else
				{
					func_327(uParam2, 2);
				}
				break;
			case 2:
				return true;
		}
	}
	return false;
}

int func_152(int iParam0, int iParam1)
{
	switch (*iParam0)
	{
		case 1861313914:
			switch (iParam1)
			{
				case 0:
					return 41788943;
				case 1:
					return 1689938120;
				default:
					break;
			}
			break;
		case -35775921:
			switch (iParam1)
			{
				case 0:
					return -314862125;
				default:
					break;
			}
			break;
		case -415839138:
			switch (iParam1)
			{
				case 0:
					return 41788943;
				default:
					break;
			}
			break;
		default:
			break;
	}
	return 41788943;
}

void func_153(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_328(iParam0, iParam1))
		{
			if (func_329(iParam0, iParam1))
			{
				if (func_330(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_331(iParam0);
				}
			}
			else
			{
				_set_ped_body_component(iParam0, iParam1);
				_update_ped_variation(iParam0, false, true, true, true, false);
			}
			_0xe3144b932dfdff65(iParam0, 0f, -1, 1, 1);
			clear_ped_damage_decal_by_zone(iParam0, 10, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 3);
			clear_ped_blood_damage_by_zone(iParam0, 0);
			clear_ped_blood_damage_by_zone(iParam0, 5);
			clear_ped_blood_damage_by_zone(iParam0, 7);
			clear_ped_blood_damage_by_zone(iParam0, 8);
			clear_ped_blood_damage_by_zone(iParam0, 9);
		}
	}
}

var func_154(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!_does_volume_exist(iParam0))
	{
		return uVar0;
	}
	func_332(iParam0, bParam2);
	_0x18262cafebb5fbe1(iParam0, iParam3, 0, 0, -1, -1, 0);
	_0xb56d41a694e42e86(iParam0, iParam3, 0, 0, -1, -1, 2);
	uVar0 = _0x4c39c95ae5db1329(iParam0, bParam2, 15);
	return uVar0;
}

void func_155(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_333(uParam0, iParam1, sParam2))
	{
		if (!is_ped_injured(iParam1))
		{
			if (!network_is_game_in_progress() || (network_is_game_in_progress() && network_has_control_of_entity(iParam1)))
			{
				set_ped_can_play_ambient_anims(iParam1, bParam3);
			}
		}
	}
}

int func_156(int iParam0, int iParam1)
{
	switch (*iParam0)
	{
		case -1859413640:
			return 1962997581;
		case -2008558277:
			return -884758938;
		case -1481450947:
			return -25545633;
		case -1427565340:
			return -1052361389;
		case -1887999095:
			return -1206647372;
		case 2000209669:
			return -1060784354;
		case -161804536:
			return -1623205626;
		case 733338689:
			return 1431646125;
		case 2072029413:
			return 2098990049;
		case 247563739:
			return 1677800332;
		case -35775921:
			return 526291251;
		case 2135153015:
			return -1005995225;
		case 513110082:
			return -1893200246;
		case 1464664327:
			switch (iParam1)
			{
				case 0:
					return 757635078;
				case 1:
					return -1689755873;
			}
			break;
		case 1284679164:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
					return -1206647372;
				default:
					break;
			}
			break;
		case 870958936:
			switch (iParam1)
			{
				case 0:
					return -1848017478;
				case 1:
					return -1142656965;
				case 2:
					return 1841152801;
				case 3:
					return 1244848886;
				case 4:
					return 1257007277;
				default:
					break;
			}
			return 0;
		}

void func_157(int iParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, bool bParam7, bool bParam8, char* sParam9, float fParam10)
{
	task_start_scenario_at_position(iParam0, iParam1, vParam2, fParam5, iParam6, bParam7, bParam8, sParam9, fParam10, false);
}

Vector3 func_158(int iParam0, int iParam1)
{
	switch (*iParam0)
	{
		case -1481450947:
			switch (iParam1)
			{
				case 0:
					return 5f, 0f, 213f;
				default:
					break;
			}
			break;
		case -1427565340:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -48f;
				case 1:
					return 20f, 88.84f, -94.66f;
				default:
					break;
			}
			break;
		case -763376358:
			switch (iParam1)
			{
				case 0:
					return 65f, 0f, 90f;
				default:
					break;
			}
			break;
		case 1801731633:
			switch (iParam1)
			{
				case 0:
					return 15f, 0f, -42f;
				default:
					break;
			}
			break;
		case 1490223565:
			switch (iParam1)
			{
				case 0:
					return 25f, 0f, -75f;
				default:
					break;
			}
			break;
		case -777592153:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case 1342653896:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case -1308658310:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 155f;
				case 1:
					return 0f, 0f, 0f;
				case 2:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case 425000526:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				case 1:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case 2134589549:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -95f;
				default:
					break;
			}
			break;
		case 733338689:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -144.36f;
				default:
					break;
			}
			break;
		case 1124200691:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -35.981f;
				default:
					break;
			}
			break;
		case -1859413640:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				case 1:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case -1300082860:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case -1420566543:
			switch (iParam1)
			{
				case 0:
					return -10f, 0f, 33f;
				default:
					break;
			}
			break;
		case -1208846034:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case 1048086072:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case 939555152:
			switch (iParam1)
			{
				case 0:
					return 15f, 0f, 0f;
				default:
					break;
			}
			break;
		case -657632:
			switch (iParam1)
			{
				case 0:
					return 1.24f, 0f, 0f;
				default:
					break;
			}
			break;
		case -1061274876:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 12f;
				case 1:
					return 180f, 0f, 108f;
				case 2:
					return 180f, 0f, 208f;
				case 3:
					return 0f, 0f, 30f;
				case 4:
					return 180f, 0f, 35f;
				default:
					break;
			}
			break;
		case 513110082:
			if (iParam0->f_4 == 0)
			{
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, -45f;
					default:
						break;
				}
			}
			else if (iParam0->f_4 == 1)
			{
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, -110f;
					default:
						break;
				}
			}
			else if (iParam0->f_4 == 2)
			{
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, -49.418f;
					case 1:
						return 0f, 0f, -33.718f;
					case 2:
						return 0f, 0f, -26.718f;
					case 3:
						return 0f, 0f, -41.7187f;
					case 4:
						return 0f, 0f, -33.718f;
					default:
						break;
				}
			}
			break;
		case 1335921989:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case 2135153015:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				case 1:
					return 0f, 0f, 90f;
				default:
					break;
			}
			break;
		case -35775921:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case -709811179:
			switch (iParam1)
			{
				case 0:
					return 90f, 0f, 105f;
				default:
					break;
			}
			break;
		case 464413478:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				case 1:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case 949011950:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				case 1:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case 429544447:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 121.94f;
				default:
					break;
			}
			break;
		case 1673499939:
			switch (iParam1)
			{
				case 0:
					return -90f, 0f, 90f;
				default:
					break;
			}
			break;
		case 373034311:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case -780455182:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -48f;
				case 1:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case -739986731:
			switch (iParam1)
			{
				case 0:
					return 30f, 5f, 99f;
				default:
					break;
			}
			break;
		case 2000209669:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 169f;
				case 1:
					return 0f, 0f, 169f;
				case 2:
					return 0f, 0f, 169f;
				default:
					break;
			}
			break;
		case -654238687:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 116f;
				default:
					break;
			}
			break;
		case -1144800837:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -55f;
				default:
					break;
			}
			break;
		case 1347913620:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 90f;
				default:
					break;
			}
			break;
		case 1937333853:
			switch (iParam1)
			{
				case 0:
					return -10f, 90f, 30f;
				default:
					break;
			}
			break;
		case 118535038:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				case 1:
					return 0f, 0f, 0f;
				case 2:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case -2009137002:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				case 1:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case -161804536:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				case 1:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case -2108030724:
		case -2060865802:
		case -2008558277:
		case -1891628345:
		case -1887999095:
		case -1841331114:
		case -1829339703:
		case -1824429070:
		case -1761189332:
		case -1714262909:
		case -1636964661:
		case -1494823099:
		case -1287911066:
		case -1272862985:
		case -1240932004:
		case -1177787273:
		case -968854939:
		case -641229542:
		case -599506500:
		case -499529359:
		case -415839138:
		case -357364973:
		case -261997819:
		case -30872859:
		case 149709049:
		case 221420861:
		case 308500632:
		case 330993088:
		case 435290930:
		case 657666087:
		case 683269210:
		case 870958936:
		case 1187689415:
		case 1187917501:
		case 1284679164:
		case 1424723727:
		case 1464664327:
		case 1505050944:
		case 1535254161:
		case 1861313914:
		case 2072029413:
		case 2072069278:
			break;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_159(var uParam0, vector3 vParam1, vector3 vParam4, int iParam7)
{
	if (!&uParam0->f_6[iParam7] == 0)
	{
		if (!does_entity_exist(uParam0[iParam7]))
		{
			(*uParam0)[iParam7] = create_object(&(uParam0->f_6[iParam7]), vParam1, true, true, false, false, true);
			if (!is_entity_dead(uParam0[iParam7]))
			{
				set_entity_coords(uParam0[iParam7], vParam1, true, false, true, true);
				set_entity_rotation(uParam0[iParam7], vParam4, 2, true);
			}
			else
			{
				return false;
			}
		}
	}
	return true;
}

void func_160(int iParam0)
{
	if (*iParam0 == 1861313914)
	{
		if (_does_volume_exist(iLocal_41))
		{
			if (!func_33(&(iLocal_48[0])))
			{
				if (func_16(59))
				{
					iLocal_48[0] = func_334("PEEK_DOOR", -1053137564, iLocal_42, 2, 0, 0, 4, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
				}
				else
				{
					iLocal_48[0] = func_334("PEEK_DOOR", -1053137564, iLocal_41, 2, 0, 0, 4, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
				}
			}
		}
	}
	else if (*iParam0 == -415839138)
	{
		iVar0 = 0;
		while (iVar0 <= (2 - 1))
		{
			if (!func_33(&(iLocal_48[iVar0])))
			{
				if (iVar0 == 0)
				{
					iLocal_48[iVar0] = func_102("INTERACT_GREET", -473983589, Global_35, 2, 0, 0, 0, 0, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
					func_336(&(iLocal_48[iVar0]), &(Local_63.f_1[0]), func_335(iParam0));
				}
				else if (iVar0 == 1)
				{
					iLocal_48[iVar0] = func_102("INTERACT_INSULT", 992265328, Global_35, 2, 0, 0, 0, 0, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
					func_336(&(iLocal_48[iVar0]), &(Local_63.f_1[0]), func_335(iParam0));
				}
			}
			iVar0++;
		}
	}
}

void func_161(int iParam0, bool bParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (bParam1)
		{
			set_ped_config_flag(iParam0, 263, !bParam1);
		}
		set_ped_config_flag(iParam0, 138, bParam1);
		set_ped_config_flag(iParam0, 488, bParam1);
	}
}

Vector3 func_162(int iParam0)
{
	switch (*iParam0)
	{
		case -35775921:
			return -0.04f, 0.189f, 0f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_163(int iParam0)
{
	switch (*iParam0)
	{
		case -35775921:
			return 0f, 0f, 90f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_164(int iParam0, var uParam1, int iParam2)
{
	if (!*uParam1 == -1)
	{
		if (_does_anim_scene_exist(*uParam1))
		{
			if (_is_anim_scene_loaded(*uParam1, true, false))
			{
				func_337(iParam0, uParam1, iParam2);
				start_anim_scene(*uParam1);
			}
		}
	}
}

void func_165(int iParam0, int iParam1, bool bParam2)
{
	*iParam0 = iParam1;
	if (bParam2)
	{
		func_25(&(iParam0->f_1));
	}
}

void func_166(int* iParam0, bool bParam1)
{
	if (does_entity_exist(*iParam0))
	{
		if (_0xa7e51b53309eac97(*iParam0))
		{
			return;
		}
		if (!does_entity_belong_to_this_script(*iParam0, false))
		{
			return;
		}
		if (bParam1)
		{
			set_ped_as_no_longer_needed(iParam0);
		}
		else
		{
			if (!is_entity_dead(*iParam0) && is_ped_in_any_vehicle(*iParam0, true))
			{
			}
			delete_ped(iParam0);
		}
	}
}

void func_167(var uParam0, int iParam1, bool bParam2)
{
	*uParam0 = iParam1;
	if (bParam2)
	{
		func_25(&(uParam0->f_1));
	}
}

bool func_168(int iParam0, bool bParam1)
{
	if (bParam1 && !func_33(iParam0))
	{
		return false;
	}
	return !func_302(iParam0, 4);
}

void func_169(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_33(iParam0))
	{
		return;
	}
	iVar0 = func_105(iParam0);
	if (bParam1)
	{
		func_338(iParam0, 4);
		func_106(iVar0, 1);
		func_339(iVar0, 1);
	}
	else
	{
		func_340(iParam0, 4);
		func_339(iVar0, 0);
	}
}

void func_170(var uParam0, char* sParam1, bool bParam2)
{
	if (_does_anim_scene_exist(*uParam0))
	{
		if (_is_anim_scene_loaded(*uParam0, true, false))
		{
			if (!is_string_null_or_empty(sParam1))
			{
				if (_0x6f1f0b17109309da(*uParam0, sParam1))
				{
					set_anim_scene_bool(*uParam0, sParam1, bParam2, false);
				}
			}
		}
	}
}

void func_171(var uParam0, char* sParam1)
{
	if (_0xa9016536015de29d(*uParam0, sParam1))
	{
		_0xdf7b5144e25cd3fe(*uParam0, sParam1);
	}
}

float func_172(var uParam0)
{
	if (!func_24(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_97(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_291() - uParam0->f_1);
}

void func_173(var uParam0, char* sParam1)
{
	if (_does_anim_scene_exist(*uParam0))
	{
		if (_is_anim_scene_loaded(*uParam0, true, false))
		{
			if (!is_string_null_or_empty(sParam1))
			{
				if (_0xa9016536015de29d(*uParam0, sParam1))
				{
					if (_0x23e33cb9f4a3f547(*uParam0, sParam1) && !_0x1f0e401031e20146(*uParam0, sParam1))
					{
						_set_anim_scene_playback_list_bool(*uParam0, sParam1, true);
					}
				}
			}
		}
	}
}

void func_174(var uParam0, char* sParam1)
{
	if (_0xa9016536015de29d(*uParam0, sParam1))
	{
		_0xae6ada8fe7e84acc(*uParam0, sParam1);
	}
}

bool func_175(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	iVar0 = get_frame_count();
	if (iVar0 > uParam2->f_5)
	{
		func_341(uParam2, 1, iVar0);
	}
	if (!Global_1935630->f_12 && !is_entity_dead(iParam0))
	{
		if (fParam5 > 0f)
		{
			uParam2->f_12 = fParam5;
		}
		else
		{
			uParam2->f_12 = vdist(Global_36, get_entity_coords(iParam0, true, false));
		}
		if (!uParam2->f_1 & 128 != 0)
		{
			if (func_342(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_343(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_344(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_343(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (func_345(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_343(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_346(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_343(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_26 && func_347(player_id(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_343(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_348(uParam2, 1065353216))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_349(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_343(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_350(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_343(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_351(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_343(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (func_351(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_343(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_352(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_343(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || uParam2->f_12 < 20f)
			{
				if (func_353(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_343(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_354(uParam2, 4000))
				{
					if ((func_355(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_356(uParam2, iParam0)) && func_357(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_343(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_355(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_356(uParam2, iParam0)) && func_357(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_343(iParam0, uParam2, *uParam3);
					return true;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_358(iParam0, Global_1935630->f_41))
							{
								func_359();
								*uParam3 = 2;
								func_343(iParam0, uParam2, *uParam3);
								return true;
							}
						}
					}
				}
			}
			else if (Global_1935630->f_40 == 0)
			{
				if (Global_1935630->f_41 != 0)
				{
					if (*uParam2 & 131072 == 0)
					{
						if (func_358(iParam0, Global_1935630->f_41))
						{
							func_359();
							*uParam3 = 2;
							func_343(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_360(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_98() - uParam2->f_9) < 2000))
				{
					if (is_ped_ragdoll(iParam0))
					{
						func_359();
						*uParam3 = 2;
						func_343(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_361())
					{
						if (func_358(iParam0, Global_1935630->f_42))
						{
							func_359();
							*uParam3 = 2;
							func_343(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_362(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_343(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_363(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_343(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_364(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_343(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_365(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_343(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_366(uParam2, 4000))
				{
					if (func_367(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_343(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_368(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_343(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (does_entity_exist(iParam0))
		{
			if (func_369(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_343(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

bool func_176(int iParam0, vector3 vParam1, float fParam4, float fParam5)
{
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (func_370(vParam1, _get_object_offset_from_coords(vParam1, fParam4, 0f, fParam5, 0f), get_entity_coords(iParam0, true, false)))
	{
		return false;
	}
	return true;
}

Vector3 func_177(int iParam0, int iParam1)
{
	switch (*iParam0)
	{
		case 1861313914:
			if (iParam1 == 0)
			{
				return 895.5682f, -1967.894f, 44.1192f;
			}
			else if (iParam1 == 1)
			{
				return 896.0502f, -1968.553f, 44.1192f;
			}
			else if (iParam1 == 2)
			{
				return 894.9471f, -1967.736f, 44.1192f;
			}
			break;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_178(var uParam0)
{
	func_371(uParam0, 0);
	func_372(uParam0, 0);
	func_373(uParam0, 1);
	func_374(uParam0, 1);
	func_375(uParam0, 0);
	func_376(uParam0, 1);
	func_377(uParam0, 1, 1, 1);
}

bool func_179(var uParam0)
{
	if (!does_entity_exist(*uParam0))
	{
		return false;
	}
	if (_0x3ee1f7a8c32f24e1(get_player_index(), &iVar0, 0, 0))
	{
		if (*uParam0 == get_ped_index_from_entity_index(iVar0))
		{
			return true;
		}
	}
	return false;
}

bool func_180(int iParam0, bool bParam1)
{
	if (bParam1 && !func_33(iParam0))
	{
		return false;
	}
	iVar0 = func_105(iParam0);
	return _uiprompt_is_just_pressed((*Global_1945938)[iVar0]->f_3);
}

bool func_181(int iParam0)
{
	return _0xa2cac9def0195e6f(iParam0);
}

void func_182(int iParam0, int iParam1, int iParam2)
{
	_0x36559148b78853b3(iParam0, iParam1, iParam2);
}

bool func_183(char[4] cParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (!_0xd89504d9d7d5057d(&cParam1))
	{
		bVar0 = create_new_scripted_conversation(&cParam1);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_378(cParam1, cParam0);
		if (bParam6)
		{
			preload_script_conversation(&cParam1, true, true, bParam7);
		}
		else
		{
			start_script_conversation(&cParam1, true, true, bParam7);
		}
		if (bParam4)
		{
			_0x40ca665ab9d8d505(&cParam1, iParam5);
		}
	}
	return bVar0;
}

bool func_184(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	if (vdist2(get_entity_coords(iParam0, bParam3, false), get_entity_coords(iParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return true;
	}
	return false;
}

float func_185(int iParam0, int iParam1)
{
	switch (*iParam0)
	{
		case -1859413640:
			return -162.606f;
		case -1481450947:
			return 0f;
		case -1427565340:
			return -49.4f;
		case -1887999095:
			return 40f;
		case 2000209669:
			return -13f;
		case -161804536:
			return -160f;
		case 733338689:
			return -5.848f;
		case 2072029413:
			return -155.926f;
		case 2135153015:
			return 3.97f;
		case 1464664327:
			switch (iParam1)
			{
				case 0:
					return 80.219f;
				case 1:
					return 103.5514f;
			}
			break;
		case 513110082:
			switch (iParam1)
			{
				case 0:
					return -173f;
				case 1:
					return 0f;
				case 2:
					return 0f;
				default:
					break;
			}
			Jump @410; //curOff = 250
			switch (iParam1)
			{
				case 0:
					return 108.929f;
				case 1:
					return -98.32f;
				case 2:
					return -76.119f;
				case 3:
					return -156.164f;
				default:
					break;
			}
			Jump @410; //curOff = 320
			switch (iParam1)
			{
				case 0:
					return -156f;
				case 1:
					return -156f;
				case 2:
					return 20f;
				case 3:
					return -142.537f;
				case 4:
					return 30f;
				default:
					break;
			}
			return 0f;
		}

int func_186(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7)
{
	return create_scenario_point(iParam0, vParam1, fParam4, iParam5, iParam6, iParam7);
}

char* func_187(int iParam0)
{
	switch (*iParam0)
	{
		case -2008558277:
			return "WORLD_ANIMAL_BAT_HANGING";
		default:
			break;
	}
	return "";
}

Vector3 func_188(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -5433.8f, -3654.524f, -20.5f;
		case 1:
			return -5415.489f, -3653.351f, -20.5f;
		case 2:
			return -5415.223f, -3655.013f, -18.6317f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_189(var uParam0, bool bParam1, int iParam2)
{
	if (does_entity_exist(&(uParam0->f_1[iParam2])))
	{
		if (bParam1)
		{
			set_ped_as_no_longer_needed(uParam0->f_1[iParam2]);
		}
		else
		{
			delete_ped(uParam0->f_1[iParam2]);
		}
	}
}

bool func_190(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (fParam3 > 0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = func_14(iParam0, Global_36, 1);
	}
	if (fParam2 > 0f)
	{
		if (fVar0 < fParam2)
		{
			return true;
		}
	}
	if (fVar0 < fParam1)
	{
		if (_0x5102307ce88798eb(iParam0))
		{
			if (fParam4 > 0f)
			{
				if (_0x164cecc59e70df86(iParam0, fParam4))
				{
					return true;
				}
			}
			else if (is_tracked_ped_visible(iParam0))
			{
				return true;
			}
		}
		else if (!is_entity_occluded(iParam0))
		{
			if (is_entity_on_screen(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_191(int iParam0, int iParam1, bool bParam2)
{
	*iParam0 = iParam1;
	if (bParam2)
	{
		func_25(&(iParam0->f_1));
	}
}

bool func_192(int iParam0)
{
	switch (iParam0)
	{
		case -2009137002:
		case -1960242214:
		case -1958832660:
		case -1891628345:
		case -1887999095:
		case -1787770845:
		case -1761189332:
		case -1646022773:
		case -1636964661:
		case -1614148516:
		case -1609238411:
		case -1505275983:
		case -1300082860:
		case -1287911066:
		case -1272862985:
		case -1243267511:
		case -1109016944:
		case -1053108445:
		case -986176781:
		case -979575591:
		case -849582265:
		case -780455182:
		case -739986731:
		case -709811179:
		case -607940493:
		case -415839138:
		case -232974724:
		case -161804536:
		case -148407339:
		case 58958195:
		case 247563739:
		case 308500632:
		case 429544447:
		case 657666087:
		case 921081956:
		case 1034793488:
		case 1284679164:
		case 1519228573:
		case 1535254161:
		case 1673499939:
		case 1734766691:
		case 1861313914:
		case 1982045664:
		case 1986618633:
		case 2000209669:
		case 2134589549:
			return true;
	}
	return false;
}

struct<2> func_193(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

void func_194(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

void func_195(int iParam0)
{
	func_32(iParam0, 2);
	func_66(iParam0);
}

void func_196(var uParam0, int iParam1, bool bParam2)
{
	if (!_does_volume_exist(iParam1))
	{
		return;
	}
	clear_ped_non_creation_area();
	_0xa1cfb35069d23c23(iParam1);
	_0x74c2b3dc0b294102(iParam1);
	if (_0x91a5f9cbebb9d936(*uParam0))
	{
		remove_scenario_blocking_area(*uParam0, bParam2);
	}
}

void func_197()
{
	func_174(uLocal_31[0], "pbl_base_a");
	func_174(uLocal_31[0], "pbl_base_b");
	func_174(uLocal_31[0], "pbl_ba_lvl_1_l");
	func_174(uLocal_31[0], "pbl_ba_lvl_1_r");
	func_174(uLocal_31[0], "pbl_ba_lvl_2_l");
	func_174(uLocal_31[0], "pbl_ba_lvl_2_r");
	func_174(uLocal_31[0], "pbl_ba_lvl_3_l");
	func_174(uLocal_31[0], "pbl_ba_lvl_3_r");
	func_174(uLocal_31[0], "pbl_brkout_ba_on_l");
	func_174(uLocal_31[0], "pbl_brkout_ba_on_r");
	func_174(uLocal_31[0], "pbl_brkout_ba_on_n");
	func_174(uLocal_31[0], "pbl_bb_lvl_1_l");
	func_174(uLocal_31[0], "pbl_bb_lvl_1_r");
	func_174(uLocal_31[0], "pbl_bb_lvl_2_l");
	func_174(uLocal_31[0], "pbl_bb_lvl_2_r");
	func_174(uLocal_31[0], "pbl_bb_lvl_3_l");
	func_174(uLocal_31[0], "pbl_bb_lvl_3_r");
	func_174(uLocal_31[0], "pbl_brkout_bb_on_l");
	func_174(uLocal_31[0], "pbl_brkout_bb_on_r");
	func_174(uLocal_31[0], "pbl_brkout_bb_on_n");
}

int func_198(int iParam0)
{
	switch (iParam0)
	{
		case 683269210:
			return 993246734;
		case -1300082860:
			return -1212881551;
		case 247563739:
			return 1352537560;
		case 149709049:
			return 2021420613;
		case 1347913620:
			return 460210291;
		case -1109016944:
			return -2011320133;
		case -919236330:
			return 539572870;
		case 918206817:
			return -1262808306;
		case -920971071:
			return 1582457845;
		case 1673499939:
			return 1195199040;
		case -654238687:
			return 2056389698;
		case -2060865802:
			return -1988847961;
		case -232974724:
			return -942443338;
		case -1960242214:
			return 66159563;
		case 1464664327:
			return 387869270;
		case -1240932004:
			return -875696111;
		default:
			break;
	}
	return 0;
}

float func_199(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

void func_200(int iParam0)
{
	if (!func_379(iParam0))
	{
		return;
	}
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_delete((*Global_1945938)[iParam0]->f_3);
	}
	(*Global_1945938)[iParam0]->f_4 = 0;
	(*Global_1945938)[iParam0] = 1;
	(*Global_1945938)[iParam0]->f_16 = 0;
	(*Global_1945938)[iParam0]->f_1 = 0;
	(*Global_1945938)[iParam0]->f_6 = { 0f, 0f, 0f };
	(*Global_1945938)[iParam0]->f_12 = { 0f, 0f, 0f };
	(*Global_1945938)[iParam0]->f_9 = 0f;
	(*Global_1945938)[iParam0]->f_10 = 0;
	(*Global_1945938)[iParam0]->f_11 = 0;
	(*Global_1945938)[iParam0]->f_2 = 1;
	(*Global_1945938)[iParam0]->f_15 = -1f;
}

bool func_201(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

bool func_202(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_92() == -1)
	{
		if (func_380(iParam0) && func_381(iParam0))
		{
			func_382(iParam0, iParam1, 1, &bParam2, iParam3);
			return false;
		}
	}
	else if (iParam0 == 1259508039)
	{
		bParam2 = true;
	}
	else if (iParam0 == -1569615261)
	{
		return false;
	}
	return true;
}

bool func_203(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = iParam2;
	func_383(iParam0, iParam1);
	Var0 = { func_384(iParam0, 0, 1) };
	iVar5 = func_385(iParam0, &Var0, 0, 0);
	iVar6 = func_386(iParam0, 0);
	if ((iVar5 > 1 && !func_387()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_222(iParam0, -2051813666))
		{
			func_212(583, 1);
		}
		else
		{
			func_212(582, 0);
		}
	}
	if (func_388(iParam0, &Var0, *iParam1, 0, 0))
	{
		if (iVar6 < iVar5)
		{
			*iParam1 = (iVar5 - iVar6);
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_204(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_389(iParam0, -949239683))
	{
		case -1565009253:
		case -1273369295:
		case -1239610997:
		case -1229959999:
		case -1050374492:
		case -873135685:
		case -164980960:
		case 10252101:
		case 24248412:
		case 82200319:
		case 632545869:
		case 733893097:
		case 871191033:
		case 1513351077:
		case 1712126263:
		case 1894156335:
			Global_1935496->f_59.f_6 = 1;
			Global_1935496->f_59.f_7 = 0;
			Global_1935496->f_59.f_1 = iParam0;
			Global_1935496->f_59.f_5 = get_game_timer();
			break;
	}
}

int func_205(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_201(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_221(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_390(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_391(iParam0, 0);
	}
	iVar2 = _0xe787f05dfc977bde(func_307(bParam2), iParam0, 0);
	return iVar2;
}

bool func_206(int iParam0)
{
	if (func_92() != -1)
	{
		return false;
	}
	return func_207(iParam0) != 0;
}

int func_207(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_392())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_393(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_208(int iParam0)
{
	return _0x6052b4de6657684f(iParam0);
}

int func_209(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_392())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_208(iVar0))
		{
			if (func_252(func_393(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_210(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
	func_394(48);
	func_37(0, -1);
}

bool func_211(int iParam0)
{
	if (func_92() != -1)
	{
		return false;
	}
	return func_93((*Global_1347702)[iParam0]->f_15, 1);
}

void func_212(int iParam0, bool bParam1)
{
	func_395(iParam0, &iVar0, &iVar1);
	if (!func_396(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_397(iVar0, iVar1);
}

int func_213(int iParam0)
{
	return _0x62cab7db62ead434(-2076669067, iParam0);
}

int func_214(int iParam0)
{
	return _0x93f2e7b5db85657b(-2076669067, iParam0);
}

bool func_215(int iParam0)
{
	if (func_92() != -1)
	{
		return false;
	}
	return func_93((*Global_1835011)[iParam0]->f_1, 1);
}

bool func_216(int iParam0)
{
	if (func_92() != -1)
	{
		return false;
	}
	if (!func_321(iParam0))
	{
		return false;
	}
	return func_130((*Global_1347702)[iParam0]->f_15);
}

int func_217()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_252(func_398(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_218(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_118() && (func_216(38) || func_211(38)))
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_02";
				sVar5 = "COL_CC_INTRO";
				iVar11 = get_hash_key("BLIP_RC_PHINEAS");
				iVar13 = 38816757;
			}
			else
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_01";
				sVar5 = "COL_CC_INTRO_PRE";
				iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD");
				iVar13 = 578982838;
			}
			sVar4 = "COL_CC_TITLE";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = 12;
			iVar14 = -2076669067;
			break;
		case 39:
			if (func_118() && (func_216(39) || func_211(39)))
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_02";
				sVar5 = "COL_DB_INTRO";
				iVar9 = 3;
				iVar11 = 1162303770;
				iVar13 = -1223580455;
			}
			else
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_01";
				sVar5 = "COL_DB_INTRO_PRE";
				iVar9 = 1;
				iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_DINOBONES");
				iVar13 = 349797279;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_DB_TITLE";
			vVar6 = { 122.7758f, -185.4978f, 116.4383f };
			iVar10 = 30;
			iVar14 = -440187297;
			break;
		case 43:
			if (iParam3 == -1791518714)
			{
				sVar0 = "MISSION_RCEXO1";
				sVar3 = "RCEXO1_DESC";
				iVar10 = 30;
			}
			else if (iParam3 == -2087881550)
			{
				sVar0 = "MISSION_RCEXO2";
				sVar3 = "RCEXO2_DESC";
				iVar10 = 37;
			}
			else if (iParam3 == 1908068621)
			{
				sVar0 = "MISSION_RCEXO3";
				sVar3 = "RCEXO3_DESC";
				iVar10 = 40;
			}
			else if (iParam3 == 1611247019)
			{
				sVar0 = "MISSION_RCEXO4";
				sVar3 = "RCEXO4_DESC";
				iVar10 = 50;
			}
			else if (iParam3 == 1319635688)
			{
				sVar0 = "MISSION_RCEXO5";
				sVar3 = "RCEXO5_DESC";
				iVar10 = 25;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_EX_TITLE";
			sVar5 = "COL_EX_INTRO";
			vVar6 = { 2585.668f, -1009.616f, 44.97972f };
			iVar9 = func_399(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963;
			break;
		case 41:
			if (func_118() && (func_216(41) || func_211(41)))
			{
				sVar0 = "MISSION_RCFSH2";
			}
			else
			{
				sVar0 = "MISSION_RCFSH1";
			}
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_RARE_FISH_01";
			sVar4 = "COL_LF_TITLE";
			sVar5 = "COL_LF_INTRO";
			vVar6 = { 337.3075f, -684.5404f, 41.8362f };
			iVar9 = 13;
			iVar14 = 1995362678;
			iVar11 = -273196610;
			iVar13 = -1666208710;
			break;
		case 49:
			if (func_118() && (func_216(49) || func_211(49)))
			{
				sVar0 = "MISSION_RCRKF2";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_02";
				sVar5 = "COL_RC_INTRO";
				iVar9 = 3;
				iVar11 = -781551276;
				iVar13 = -170865073;
			}
			else
			{
				sVar0 = "MISSION_RCRKF1";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_01";
				sVar5 = "COL_RC_INTRO_PRE";
				iVar9 = 1;
				iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_ROCKFACES");
				iVar13 = 1974744712;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_RC_TITLE";
			vVar6 = { -2178.646f, -245.6886f, 191.1569f };
			iVar10 = 10;
			iVar14 = 2103522376;
			break;
		case 51:
			sVar0 = "MISSION_RCTAX1";
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_TAXIDERMY_01";
			sVar4 = "COL_TX_TITLE";
			sVar5 = "COL_TX_INTRO";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = func_399(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931;
			iVar13 = -1424865411;
			break;
	}
	sVar2 = func_400(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar12 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar12 = get_hash_key("toast_log_blips");
	}
	if (func_401(iParam0, iVar13, iVar14))
	{
	}
	if (func_402(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_403(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_404(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_405(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_406(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_219(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_220(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_118() && (func_216(38) || func_211(38)))
			{
				sVar1 = "COL_CC_INTRO";
				iVar4 = get_hash_key("BLIP_RC_PHINEAS");
			}
			else
			{
				sVar1 = "COL_CC_INTRO_PRE";
				iVar4 = get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD");
			}
			iVar6 = 38816757;
			break;
		case 39:
			sVar0 = "COL_DB_TITLE";
			sVar3 = "COL_DB_FOUND";
			iVar7 = -440187297;
			if (func_118() && (func_216(39) || func_211(39)))
			{
				sVar1 = "COL_DB_INTRO";
				iVar4 = 1162303770;
			}
			else
			{
				sVar1 = "COL_DB_INTRO_PRE";
				iVar4 = get_hash_key("BLIP_RC_COLLECTABLE_DINOBONES");
			}
			iVar6 = -1223580455;
			break;
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			sVar0 = "COL_EX_TITLE";
			sVar3 = "COL_EX_ITEMS_COLLECTED";
			sVar1 = "COL_EX_INTRO";
			iVar7 = -1531394072;
			iVar4 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar6 = 911890963;
			break;
		case 41:
			sVar0 = "COL_LF_TITLE";
			sVar3 = "COL_LF_CAUGHT";
			sVar1 = "COL_LF_INTRO";
			iVar7 = 1995362678;
			iVar4 = -273196610;
			iVar6 = -1666208710;
			break;
		case 49:
			sVar0 = "COL_RC_TITLE";
			sVar3 = "COL_RC_FOUND";
			iVar7 = 2103522376;
			if (func_118() && (func_216(49) || func_211(49)))
			{
				sVar1 = "COL_RC_INTRO";
				iVar4 = -781551276;
			}
			else
			{
				sVar1 = "COL_RC_INTRO_PRE";
				iVar4 = get_hash_key("BLIP_RC_COLLECTABLE_ROCKFACES");
			}
			iVar6 = -170865073;
			break;
		case 51:
			sVar0 = "COL_TX_TITLE";
			sVar3 = "COL_TX_CARCASS_COLLECTED";
			sVar1 = "COL_TX_INTRO";
			iVar7 = 678508515;
			iVar4 = 1986498931;
			iVar6 = -1424865411;
			break;
	}
	if (iParam5 == 2)
	{
		sVar0 = "MISSION_COMPLETE";
		iVar4 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar5 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar5 = get_hash_key("toast_log_blips");
		sVar1 = "COL_ALL_LOG_UPDATED";
	}
	sVar2 = "COL_CTX_PLAYER_LOG";
	if (iVar7 == -2076669067)
	{
		if (func_118() && (func_216(38) || func_211(38)))
		{
			iVar6 = 38816757;
		}
		else
		{
			iVar6 = 578982838;
		}
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 0)
		{
			iVar5 = iParam1;
			iVar4 = iParam2;
		}
		if (iParam5 == 2)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			iParam3 = 12;
			iParam4 = 12;
			func_407(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_407(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_409(_create_var_string(2, sVar0), _create_var_string(2, func_408(func_214(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_407(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_407(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_118() && (func_216(39) || func_211(39)))
		{
			iVar6 = -1223580455;
		}
		else
		{
			iVar6 = 349797279;
		}
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_407(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_407(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_118() && (func_216(49) || func_211(49)))
		{
			iVar6 = -170865073;
		}
		else
		{
			iVar6 = 1974744712;
		}
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_407(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_407(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_407(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_407(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_221(int iParam0)
{
	if (!func_201(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_222(int iParam0, int iParam1)
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

bool func_223(int iParam0, int iParam1)
{
	if (!func_201(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

bool func_224(int iParam0)
{
	if (!func_410(iParam0))
	{
		return false;
	}
	return func_411(iParam0);
}

void func_225(int iParam0)
{
	if (!func_410(iParam0))
	{
		return;
	}
	func_412(iParam0);
	func_413(iParam0);
}

int func_226(int iParam0)
{
	if (!func_201(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_227(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1639263599:
			iVar0 = -764310200;
			break;
		case 1222378998:
			iVar0 = -764310200;
			break;
		case 2074469742:
			iVar0 = -764310200;
			break;
		case 480079517:
			iVar0 = -1504859554;
			break;
		case 840671577:
			iVar0 = -1504859554;
			break;
		case 1446246869:
			iVar0 = 1885857703;
			break;
		case -2006166057:
			iVar0 = 1885857703;
			break;
		case 1235846615:
			iVar0 = -1511427369;
			break;
		case -228768324:
			iVar0 = 2133046983;
			break;
		case -1411922943:
			iVar0 = -1511427369;
			break;
		case -834103244:
			iVar0 = -1511427369;
			break;
		case 424030678:
			iVar0 = 165751297;
			break;
		case 446901936:
			iVar0 = 710736342;
			break;
		case -1092841802:
			iVar0 = -462374995;
			break;
		case -1452241321:
			iVar0 = 567069252;
			break;
		case -1188697038:
			iVar0 = -281894307;
			break;
		case 1671758975:
			iVar0 = -1127860381;
			break;
		case -893514737:
			iVar0 = -1894785522;
			break;
		case -2063089161:
			iVar0 = 469927692;
			break;
		case -452897925:
			iVar0 = 1960591597;
			break;
		default:
			break;
	}
	if (func_201(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_414(iVar0) || func_415(iVar0))
			{
				return iVar0;
			}
		}
		else
		{
			return iVar0;
		}
	}
	return iParam0;
}

int func_228(int iParam0, bool bParam1)
{
	if (!func_201(iParam0, 0))
	{
		return 0;
	}
	if (is_weapon_valid(iParam0))
	{
		return iParam0;
	}
	if (!bParam1)
	{
	}
	return 0;
}

void func_229(int iParam0)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_416(iParam0))
	{
		return;
	}
	iVar0 = _get_weapon_unlock(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	_unlock_set_unlocked(iVar0, true);
}

bool func_230(bool bParam0)
{
	if (func_92() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_307(bParam0));
}

bool func_231(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	if (_is_weapon_melee(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (has_ped_got_weapon(Global_35, iParam0, 0, false))
	{
		Var0 = { func_384(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_417((386 + iVar28), 1);
			if (func_418(iParam0, &Var0, iVar5, 0))
			{
				if (func_419(iParam0, &Var6, iVar5))
				{
					Var29 = { func_420(iParam0, Var0, iVar5, 0) };
					func_421(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_230(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_232(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_422(iParam0, iParam1);
					return true;
				}
				if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
				{
					return false;
				}
				if (iParam1 > 0)
				{
				}
				_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return true;
			}
		}
	}
}

bool func_232(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_234(iParam0))
	{
		return false;
	}
	if (!func_230(0))
	{
		return false;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return true;
}

bool func_233(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_228(iParam0, 0);
	if (is_weapon_valid(iVar0))
	{
		if (func_92() == -1)
		{
			func_229(iVar0);
			if (iParam1 == 1248274121)
			{
				func_423(iVar0);
			}
		}
		if (!func_388(iParam0, &uVar1, 1, 0, 0))
		{
			func_382(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_424(iVar0);
			if (_is_weapon_sniper(iVar0))
			{
				func_231(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == -1415022764 || iVar0 == -160924582)
			{
				func_231(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == 2055893578)
			{
				func_231(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (_is_weapon_melee(iVar0))
			{
				if (iVar0 == 494733111 && !func_15())
				{
					return false;
				}
				if (_0x2c83212a7aa51d3d(iParam0))
				{
				}
				else if (!func_425(iVar0))
				{
					func_231(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_231(iVar0, _get_weapon_clip_size(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (_is_weapon_one_handed(iVar0))
			{
				iVar7 = func_426(Global_35, 2, 0, 1);
				if ((((func_416(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_224(24)) && bParam4)
				{
					_0xe9bd19f8121ade3e(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_416(iVar7) && func_224(24))
				{
					if (!func_231(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_231(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_231(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
			{
				return false;
			}
		}
	}
	else
	{
		return false;
	}
	if (_0x9f0e1892c7f228a8(1) != 0 && iParam1 == 1248274121)
	{
		func_212(480, 1);
	}
	return true;
}

bool func_234(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

bool func_235(int iParam0, int iParam1, int iParam2)
{
	if (!func_234(iParam0))
	{
		return false;
	}
	iVar4 = _get_weapon_type_from_ammo_type(iParam0);
	iVar3 = get_ped_ammo_by_type(Global_35, iParam0);
	if (func_416(iVar4))
	{
		get_max_ammo(Global_35, &iVar2, iVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (_is_weapon_bow(iVar4))
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = _get_weapon_clip_size(iVar4);
	}
	if (*iParam1 > 0)
	{
		iVar6 = *iParam1;
	}
	else if (*iParam1 < 0)
	{
		iVar6 = (iVar1 * absi(*iParam1));
	}
	if (func_252(611073244, 1, 0) && iParam2 == -897553835)
	{
		iVar6 = ceil((IntToFloat(iVar6) * 1.1f));
	}
	if (iVar5 >= iVar6)
	{
		iVar0 = iVar6;
	}
	else if (iVar5 < iVar6 && iVar5 >= 1)
	{
		iVar0 = iVar5;
	}
	else
	{
		func_271(func_427(iParam0), func_270(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_92() == -1)
		{
			if (func_93((*Global_1835011)[14]->f_1, 1))
			{
				func_212(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_230(0))
	{
		if (func_232(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_276(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_236(int iParam0)
{
	if ((iParam0 == -615217896 && !func_428()) || iParam0 != -615217896)
	{
		if (func_429(Global_35, iParam0, &uVar0))
		{
			func_255(player_ped_id(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case -62615415:
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_261();
			break;
		case -832719552:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_261();
			break;
		case -1941112926:
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_261();
			break;
		case -615217896:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_259();
			break;
		case -121629511:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_257();
			break;
	}
}

void func_237(int iParam0)
{
	switch (iParam0)
	{
		case -224110471:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_257();
			break;
		case 1289585739:
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_258();
			break;
		case 1441506783:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 780305678:
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case -935153695:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_259();
			break;
		case 655868243:
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_260();
			break;
		case 1299744282:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 1631240196:
			Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
			break;
		case 1768869276:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.15f);
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.15f);
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.15f);
			func_261();
			break;
		case -569248339:
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_430();
			break;
		case -1196089647:
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case -982895431:
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_431();
			break;
		case -1056342069:
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_238(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

struct<2> func_239(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_240(int iParam0)
{
	bVar0 = func_222(iParam0, -2017733358);
	if (func_432() < 3)
	{
		if (bVar0)
		{
			if (func_434(func_433(iParam0), iParam0))
			{
				func_271(79, func_270(func_433(iParam0)), 1);
			}
			else
			{
				func_271(78, func_270(func_433(iParam0)), 1);
			}
		}
		else
		{
			func_271(80, func_270(func_435(iParam0)), 1);
		}
	}
}

bool func_241()
{
	if (((((func_436(839908568, 400) || func_436(-1134030454, 400)) || func_436(623353496, 400)) || func_436(-344413337, 400)) || func_436(-1664948962, 400)) || func_436(1795228059, 400))
	{
		return true;
	}
	return false;
}

int func_242(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	iVar0 = func_437(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_438(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_439(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_243(int iParam0)
{
	switch (iParam0)
	{
		case -625427311:
			func_218(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_220(51, 0, 0, 0, 0, -1, 0);
			func_440(8192);
			break;
		case 581047644:
			func_218(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_220(51, 0, 0, 0, 0, -1, 0);
			func_440(524288);
			break;
		case -644199619:
			func_218(39, 0, 0, 0, 0, 0, 1, 0);
			func_220(39, 0, 0, 0, 0, -1, 0);
			func_441(16);
			break;
		case 684296857:
			func_218(41, 0, 0, 0, 0, 0, 1, 0);
			func_220(41, 0, 0, 0, 0, -1, 0);
			func_442(8);
			break;
		case 466137807:
			func_218(49, 0, 0, 0, 0, 0, 1, 0);
			func_220(49, 0, 0, 0, 0, -1, 0);
			func_443(16);
			break;
		case -1087522507:
			func_218(43, 0, 0, -1791518714, func_444(1), 0, -1, 0);
			func_445(1);
			break;
		case -405829000:
			func_218(43, 0, 0, -2087881550, func_444(2), 0, -1, 0);
			func_445(2);
			break;
		case 378660860:
			func_218(43, 0, 0, 1908068621, func_444(4), 0, -1, 0);
			func_445(4);
			break;
		case 1566111097:
			func_218(43, 0, 0, 1611247019, func_444(8), 0, -1, 0);
			func_445(8);
			break;
		case 1276007140:
			func_218(43, 0, 0, 1319635688, func_444(16), 0, -1, 0);
			func_445(16);
			break;
	}
}

void func_244(int iParam0)
{
	if (func_446() == 1)
	{
		if (func_211(39))
		{
			func_212(342, 0);
		}
		else
		{
			func_212(343, 0);
			func_441(1);
		}
	}
	if (func_446() >= 30)
	{
		func_212(344, 0);
	}
	func_218(39, 0, 0, 0, 0, 0, -1, 0);
	func_220(39, 0, 0, func_446(), 30, 1, 0);
}

void func_245(int iParam0)
{
	if (func_447() == 1)
	{
		if (func_211(49))
		{
			func_212(409, 0);
		}
		else
		{
			func_212(410, 0);
			func_443(1);
		}
	}
	if (func_447() >= 10)
	{
		func_212(411, 0);
	}
	func_218(49, 0, 0, 0, 0, 0, -1, 0);
	func_220(49, 0, 0, func_447(), 10, 1, 0);
}

void func_246(int iParam0)
{
	switch (iParam0)
	{
		case 1369162587:
			_0x3ea62e56f386c997(-949689219, 1);
			func_212(437, 0);
			func_212(440, 0);
			func_448(-949689219, 444160793, &sVar0, 1, 0, 0);
			func_218(51, 0, 0, -949689219, sVar0, 0, -1, 0);
			func_220(51, 0, 0, sVar0, func_399(-949689219, 20), 1, 0);
			func_440(1);
			func_449(-748969569, 0, 0);
			break;
		case 1610047510:
			_0x3ea62e56f386c997(-1248968496, 1);
			func_448(-1248968496, -1969404854, &sVar0, 1, 0, 0);
			func_218(51, 0, 0, -1248968496, sVar0, 0, -1, 0);
			func_220(51, 0, 0, sVar0, func_399(-1248968496, 20), 1, 0);
			func_440(8);
			break;
		case 1317879106:
			_0x3ea62e56f386c997(1706369307, 1);
			func_448(1706369307, -832850511, &sVar0, 1, 0, 0);
			func_218(51, 0, 0, 1706369307, sVar0, 0, -1, 0);
			func_220(51, 0, 0, sVar0, func_399(1706369307, 20), 1, 0);
			func_440(64);
			break;
		case 1062444751:
			_0x3ea62e56f386c997(1520110311, 1);
			func_448(1520110311, -100913452, &sVar0, 1, 0, 0);
			func_218(51, 0, 0, 1520110311, sVar0, 0, -1, 0);
			func_220(51, 0, 0, sVar0, func_399(1520110311, 20), 1, 0);
			func_440(512);
			break;
		case 754186760:
			_0x3ea62e56f386c997(-1992824800, 1);
			func_212(438, 0);
			func_448(-1992824800, 905173572, &sVar0, 1, 0, 0);
			func_218(51, 0, 0, -1992824800, sVar0, 0, -1, 0);
			func_220(51, 0, 0, sVar0, func_399(-1992824800, 20), 1, 0);
			func_440(32768);
			break;
		default:
			func_212(439, 0);
			break;
	}
}

void func_247()
{
	if (chal_get_num_ranks_completed(-1278339625) < 2)
	{
		chal_add_goal_progress_int(-1278339625, -1316535105, 1);
	}
}

void func_248(int iParam0, int iParam1)
{
	iVar1 = 0;
	if (func_92() == -1)
	{
		if (!func_211(43))
		{
			if (iParam0 == 281887510)
			{
				func_212(348, 0);
			}
			else if (iParam0 == -164081697)
			{
				func_212(350, 0);
			}
			else if (iParam0 == -1161319399)
			{
				func_212(352, 0);
			}
			else if (iParam0 == 728781265)
			{
				func_212(400, 0);
			}
		}
		else if (func_222(iParam0, 412399755))
		{
			func_450(-1791518714);
			if (func_451() == 0)
			{
				func_37(0, 10);
				iVar1 = func_452(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_453(iParam0) < func_454(iParam0))
					{
						func_218(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_220(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_211(44))
		{
			if (iParam0 == -222563712)
			{
				func_212(354, 0);
			}
			else if (iParam0 == 1794857344)
			{
				func_212(399, 0);
			}
			else if (iParam0 == 1952409553)
			{
				func_212(401, 0);
			}
		}
		else if (func_222(iParam0, 709057512))
		{
			func_450(-2087881550);
			if (func_451() == 1)
			{
				func_37(0, 10);
				iVar1 = func_452(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_453(iParam0) < func_454(iParam0))
					{
						func_218(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_220(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_211(45))
		{
			if (iParam0 == 2116770557)
			{
				func_212(359, 0);
			}
			else if (iParam0 == -651064726)
			{
				func_212(394, 0);
			}
			else if (iParam0 == -404270094)
			{
				func_212(395, 0);
			}
			else if (iParam0 == 2093126853)
			{
				func_212(398, 0);
			}
		}
		else if (func_222(iParam0, -1478961327))
		{
			func_450(1908068621);
			if (func_451() == 2)
			{
				func_37(0, 10);
				iVar1 = func_452(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_455(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
					{
						func_456(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
						func_394(48);
					}
					if (func_453(iParam0) < func_454(iParam0))
					{
						func_218(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_220(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_453(iParam0) < func_454(iParam0))
					{
						func_218(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_220(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_211(46))
		{
			if (iParam0 == 2085530337)
			{
				func_212(356, 0);
			}
			else if (iParam0 == -150591160)
			{
				func_212(402, 0);
			}
			else if (iParam0 == -323969289)
			{
				func_212(404, 0);
			}
			else if (iParam0 == 1504361882)
			{
				func_212(406, 0);
			}
		}
		else if (func_222(iParam0, -1238404098))
		{
			func_450(1611247019);
			if (func_451() == 3)
			{
				func_37(0, 10);
				iVar1 = func_452(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_453(iParam0) < func_454(iParam0))
					{
						func_218(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_220(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_211(47))
		{
			if (iParam0 == -1521783510)
			{
				func_212(396, 0);
			}
			else if (iParam0 == 1714875242)
			{
				func_212(397, 0);
			}
			else if (iParam0 == 927763737)
			{
				func_212(405, 0);
			}
			else if (iParam0 == 1019229063)
			{
				func_212(403, 0);
			}
		}
		else if (func_222(iParam0, 1160548794))
		{
			func_450(1319635688);
			if (func_451() == 4)
			{
				func_37(0, 10);
				iVar1 = func_452(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_453(iParam0) < func_454(iParam0))
					{
						func_218(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_220(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_249(int iParam0)
{
	if (iParam0 == 2116770557)
	{
		if (!func_455(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
		{
			func_456(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
			func_394(48);
		}
	}
}

void func_250(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = _0x126cbebba46693cf(iVar1, 678508515, -1160144609);
		if (func_252(func_457(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_458(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_459(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_251(int iParam0, int iParam1, int iParam2)
{
	if (func_92() == -1)
	{
		if (does_entity_exist(iParam2))
		{
			iVar0 = _0x6f02b5e50511721e(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_242(0, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255:
			func_242(-949580860, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493:
			func_242(-1171997683, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627:
			func_242(-2140931002, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1124867377:
			func_242(-1116228267, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1790920086:
			func_242(2112896861, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -2001202686:
			func_242(-1915150712, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1111063991:
			func_242(994220262, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1576210101:
			func_242(-1388440107, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 675090918:
			func_242(-1531790128, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 355838765:
			func_242(1351791770, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -343824903:
			func_242(-161493966, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1142684684:
			func_242(668131102, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1243851340:
			if (!func_460())
			{
				func_242(1330954593, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case -525490740:
			func_242(817681514, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1736635264:
			func_242(1404311868, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1302860970:
			func_242(-175152067, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1027115192:
			func_242(-526915387, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1064332555:
			func_242(101362741, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1954478446:
			func_242(1458818027, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -518592739:
			func_242(-1957208512, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -2010073778:
			func_242(2066857461, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -700133011:
			func_242(803940201, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1415414735:
			func_242(-1717765429, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 2045548742:
			func_242(1379920914, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 830381058:
			func_242(447209691, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

bool func_252(int iParam0, int iParam1, bool bParam2)
{
	if (!func_201(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_221(iParam0);
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
		if (!func_461(iParam0, 1))
		{
			return false;
		}
	}
	return func_205(iParam0, 0, bParam2) >= iParam1;
}

void func_253(int iParam0)
{
	if (func_211(41))
	{
		func_212(363, 0);
	}
	else
	{
		func_212(362, 0);
	}
	switch (iParam0)
	{
		case 323124696:
			func_462(-1865241121);
			func_463(-642026005);
			func_464(-642026005);
			func_37(0, 10);
			break;
		case -2108314374:
			func_462(2117142684);
			func_463(-940584364);
			func_464(-940584364);
			func_37(0, 10);
			break;
		case -1193798153:
			func_462(-1409326024);
			func_463(1972645282);
			func_464(1972645282);
			func_37(0, 10);
			break;
		case -787702678:
			func_462(-641744968);
			func_463(1667205433);
			func_464(1667205433);
			func_37(0, 10);
			break;
		case -804542901:
			func_462(-946988203);
			func_463(1362715885);
			func_464(1362715885);
			func_37(0, 10);
			break;
		case -1696275132:
			func_462(-646136018);
			func_463(1053540370);
			func_464(1053540370);
			func_37(0, 10);
			break;
		case -161595323:
			func_462(-955835837);
			func_463(-1100103852);
			func_464(-1100103852);
			func_37(0, 10);
			break;
		case -1114363619:
			func_462(-179276075);
			func_463(-1409869209);
			func_464(-1409869209);
			func_37(0, 10);
			break;
		case -368407134:
			func_462(-492711560);
			func_463(-1760235357);
			func_464(-1760235357);
			func_37(0, 10);
			break;
		case 1997759228:
			func_462(1764383959);
			func_463(-138366827);
			func_464(-138366827);
			func_37(0, 10);
			break;
		case 1265573293:
			func_462(317501533);
			func_463(-1261163843);
			func_464(-1261163843);
			func_37(0, 10);
			break;
		case -1030441283:
			func_462(817753087);
			func_463(-963523016);
			func_464(-963523016);
			func_37(0, 10);
			break;
		case -1490884871:
			func_462(576606016);
			func_463(560825326);
			func_464(560825326);
			func_37(0, 10);
			break;
		case -395458616:
			func_462(814934957);
			func_463(858269539);
			func_464(858269539);
			break;
	}
}

void func_254(int iParam0, int iParam1)
{
	func_465(iParam0, iParam1, &uVar0);
}

int func_255(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_384(iParam1, 1, 0) };
		iParam3 = func_466(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_468(iParam1, iParam2, func_467(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_469(1, (func_92() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != &Global_1946804->f_57[func_467(iParam3, 1)])
			{
				func_470(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_471(32768) && iParam1 != &Global_1946804->f_57[func_467(iParam3, 1)])
			{
				func_472();
				func_470(22, iParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(iParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_470(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_473(iParam3);
	if (is_ped_a_player(iParam0))
	{
		func_470(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_474(0);
			func_475(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_470(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

bool func_256(int iParam0, bool bParam1)
{
	Var3.f_9 = -1591664384;
	bVar17 = false;
	*iParam0 = 0;
	iVar18 = func_426(get_player_ped(get_player_index()), 2, 1, 0);
	iVar19 = func_426(get_player_ped(get_player_index()), 3, 1, 0);
	if (func_476("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_477(&Var3, iVar2, iVar0, iVar1))
			{
				if (_is_weapon_one_handed(Var3.f_4))
				{
					if (!bParam1)
					{
						if (Var3.f_4 == iVar18 || Var3.f_4 == iVar19)
						{
						}
						else
						{
							if (!bVar17)
							{
								*iParam0 = Var3.f_4;
								bVar17 = true;
							}
						}
						iVar2++;
						func_478(iVar0);
						if (*iParam0 != 0)
						{
							return true;
						}
						return false;
					}
				}
			}
		}
	}
}

void func_257()
{
	_0x11a7ff918ef6bc66(player_id(), (1f - Global_40.f_11095.f_60));
}

void func_258()
{
	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	_0x497a6539bb0e8787(player_id(), (1f - fVar0), (1f - fVar1));
}

void func_259()
{
	_0xe0d6c2a146a5c993(player_id(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_260()
{
	_0xb427911ea6dffef3(player_id(), (1f - Global_40.f_11095.f_63));
}

void func_261()
{
	func_479();
	func_480();
	func_481();
}

void func_262(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_JACK_HALL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -293111728;
			break;
		case 666607663:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_HIGH_STAKES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = 1406403390;
			break;
		case -220219788:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_POISONOUS_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = 917780075;
			break;
		case 218622660:
			sVar3 = "COL_TH_SUB_TRESOR_DES_MORTS";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -857004026;
			break;
		case 390004462:
			sVar3 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -1108821735;
			break;
		case 6410548:
			sVar3 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -208135085;
			break;
	}
	switch (iParam1)
	{
		case 854119837:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_01";
			break;
		case -1292544588:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_02";
			break;
		case -1003325394:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_03";
			break;
		case -696705861:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_04";
			break;
		case -335460405:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_01";
			break;
		case 903797617:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_02";
			break;
		case 669728650:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_03";
			break;
		case 1595354593:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_04";
			break;
		case 1214120047:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_01";
			break;
		case 655769340:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_02";
			break;
		case 885316185:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_03";
			break;
		case -2016706455:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_04";
			break;
		case -1491419385:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_01";
			break;
		case 1809565830:
			sVar1 = "COL_TH_OBJ_RDL";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_02";
			break;
		case 2056119786:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_03";
			break;
		case -628873767:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_01";
			break;
		case -405421956:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_02";
			break;
		case -1108972386:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_03";
			break;
		case -878376933:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_04";
			break;
		case 1053716392:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_01";
			break;
		case 806507056:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_02";
			break;
		case 1571925350:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_03";
			break;
		case 1330352282:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_04";
			break;
		case 975496781:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_05";
			break;
	}
	if (_uilog_is_entry_registered(3, iVar0))
	{
		_uilog_remove_entry(3, iVar0);
	}
	if (!_uilog_is_entry_registered(3, iVar0))
	{
		_uilog_add_entry_hash(3, iVar0, vVar4, get_hash_key("COL_TH_TITLE"), get_hash_key(sVar2), 0);
	}
	if (bParam2)
	{
		switch (iParam0)
		{
			case 499813453:
				sVar1 = "COL_TH_JACK_HALL_COMPLETE";
				break;
			case 666607663:
				sVar1 = "COL_TH_HIGH_STAKES_COMPLETE";
				break;
			case -220219788:
				sVar1 = "COL_TH_POISONOUS_TRAIL_COMPLETE";
				break;
			case 218622660:
				sVar1 = "COL_TH_TRESOR_DES_MORTS_COMPLETE";
				break;
			case 390004462:
				sVar1 = "COL_TH_ELEMENTAL_TRAIL_COMPLETE";
				break;
			case 6410548:
				sVar1 = "COL_TH_LANDMARKS_OF_RICHES_COMPLETE";
				break;
		}
	}
	_uilog_add_or_update_objective(3, iVar0, get_hash_key(sVar1), sVar1, false, false, false);
	_uilog_set_entry_pinned(3, iVar0, true);
	_uilog_set_entry_icon_texture(3, iVar0, get_hash_key("BLIP_RC_TREASURE_HUNTER"), get_hash_key("toast_log_blips"));
	_uilog_set_entry_brief_texture(3, iVar0, get_hash_key("MISSION_RETH"), get_hash_key("SP_MISSIONS_19"));
	_uilog_update_entry_subheader(3, iVar0, _create_var_string(2, sVar3));
}

void func_263(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_JACK_HALL";
			iVar0 = -293111728;
			break;
		case 666607663:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_HIGH_STAKES";
			iVar0 = 1406403390;
			break;
		case -220219788:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_POISONOUS_TRAIL";
			iVar0 = 917780075;
			break;
		case 218622660:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_TRESOR_DES_MORTS";
			iVar0 = -857004026;
			break;
		case 390004462:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			iVar0 = -1108821735;
			break;
		case 6410548:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			iVar0 = -208135085;
			break;
	}
	sVar3 = "COL_CTX_PLAYER_LOG";
	if (bParam1)
	{
		sVar1 = "MISSION_COMPLETE";
	}
	_uilog_set_pending_details_id(1, iVar0);
	func_407(_create_var_string(2, sVar1), _create_var_string(2, sVar2), get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_TREASURE_HUNTER"), 1433015236, _create_var_string(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_264(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_265(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_266(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_267(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_268(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_269(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_270(int iParam0)
{
	if (!func_201(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_271(int iParam0, int iParam1, bool bParam2)
{
	func_395(iParam0, &iVar0, &iVar1);
	if (!func_396(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_482(iParam0, 1024))
	{
		return;
	}
	func_397(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = iParam1;
	Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 2;
}

void func_272(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_395(iParam0, &iVar0, &iVar1);
	if (!func_396(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_482(iParam0, 1024))
	{
		return;
	}
	func_397(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = iParam1;
	if (!bParam3)
	{
		Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 1;
	}
	else
	{
		Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 5;
	}
}

int func_273()
{
	iVar0 = _0x5461c821d00fe15a(-2076669067, 0);
	if (iVar0 == func_392())
	{
		return func_274();
	}
	iVar4 = (func_392() - iVar0);
	iVar5 = get_random_int_in_range(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_392())
	{
		iVar1 = _0x126cbebba46693cf(iVar2, -2076669067, 0);
		if (!func_483(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_393(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_274()
{
	iVar0 = get_random_int_in_range(0, func_392());
	return func_393(_0x126cbebba46693cf(iVar0, -2076669067, 0));
}

void func_275(int iParam0)
{
	switch (*iParam0)
	{
		case -1424823393:
			*iParam0 = -885810591;
			break;
		case 998010398:
			*iParam0 = -324053813;
			break;
		case 1358243310:
			*iParam0 = 1463786584;
			break;
		case -541584777:
			*iParam0 = 206762213;
			break;
	}
}

int func_276(int iParam0, int iParam1, int iParam2)
{
	if (!func_201(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_384(iParam0, 0, 1) };
	Var5 = { func_420(iParam0, Var0, Var0.f_4, 0) };
	return func_484(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_277(int iParam0)
{
	if (func_92() != -1)
	{
		return;
	}
	switch (func_226(iParam0))
	{
		case 81053684:
			if (iParam0 == -1623728698 && func_485(81053684, 0) <= 0)
			{
				func_470(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == -1535516064 || iParam0 == -763730846)
			{
				func_470(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_486(iParam0);
			if (func_487(iVar0))
			{
				func_488(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_470(30, iParam0, 0, 0, 0);
			}
			if (func_489() == -2125499975 || func_489() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_470(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_489() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024:
						func_470(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_490(-525676072, 0))
			{
				if (func_491(-525676072, &iVar1))
				{
					func_470(33, iVar1, 0, 0, 0);
				}
			}
			func_470(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == -1185145312)
	{
		if (!func_492(99217379))
		{
			func_255(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_225(24);
		if (func_256(&iVar2, 0))
		{
			func_231(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_278(int iParam0)
{
	if (func_222(iParam0, 943695443))
	{
		func_493(0, iParam0);
	}
	else if (func_222(iParam0, -2096528786))
	{
		func_493(1, iParam0);
	}
	else if (func_222(iParam0, -1094167013))
	{
		func_493(2, iParam0);
	}
	else if (func_222(iParam0, 1936654645))
	{
		func_493(3, iParam0);
	}
	else if (func_222(iParam0, 1306489306))
	{
		func_493(4, iParam0);
	}
	else if (func_222(iParam0, 435762317))
	{
		func_493(5, iParam0);
	}
	else if (func_222(iParam0, 1259363210))
	{
		func_493(6, iParam0);
	}
	else if (func_222(iParam0, 881398259))
	{
		func_493(7, iParam0);
	}
	else if (func_222(iParam0, -541549214))
	{
		func_493(8, iParam0);
	}
	else if (func_222(iParam0, 130796156))
	{
		func_493(-1, iParam0);
	}
}

int func_279(int iParam0, int iParam1)
{
	Var4.f_1 = 10;
	func_494(&Var4, 1356624740);
	return func_495(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_280(int iParam0)
{
	if (!func_201(iParam0, 0))
	{
		return Var0;
	}
	if (func_222(iParam0, -305066475))
	{
		if (func_92() == -1)
		{
			if (func_222(iParam0, -537818634))
			{
				return func_193(189951448);
			}
			else
			{
				return func_193(1176172851);
			}
		}
	}
	else if (func_222(iParam0, -537818634))
	{
		return func_193(-963660207);
	}
	if (func_222(iParam0, 2084895747))
	{
		return func_193(1694039471);
	}
	return Var2;
}

void func_281(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			if (func_92() == -1)
			{
				if (func_93((*Global_1835011)[4]->f_1, 1))
				{
					func_212(109, 1);
				}
			}
			break;
	}
}

void func_282(int iParam0, char* sParam1)
{
	sVar0 = func_497(func_496(0));
	func_318(_create_var_string(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_498(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_283(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_201(iParam0, 0))
	{
		return;
	}
	if (iParam0 == 1807503187)
	{
		return;
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (!func_499())
	{
		func_500(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_501(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_501(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_223(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_221(iParam0);
	iVar10 = 0;
	iVar11 = 805880880;
	if ((iVar6 == 307971639 && iParam0 != 424030678) && iParam0 != -1188697038)
	{
		iVar10 = 622449822;
		iVar11 = 622449822;
	}
	if (iVar6 == -1013984273 || iVar6 == 658570475)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_502(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (get_hash_key(Var7) == 121560594)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (is_string_null_or_empty(Var7))
	{
		return;
	}
	iVar12 = 109029619;
	sVar13 = "Transaction_Positive";
	iVar14 = 0;
	if (bVar0)
	{
		iVar12 = 619977481;
		sVar13 = "Transaction_Negative";
		iVar14 = 1;
	}
	if (_item_database_is_overpowered_item(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar12 = -856358433;
		}
		else
		{
			iVar12 = -1905433004;
		}
	}
	sVar15 = func_503(_create_var_string(10, &cVar2, _create_var_string(0, func_270(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_222(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = _create_var_string(0, func_270(iParam0));
	}
	func_318(sVar15, Var7.f_1, get_hash_key(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

char* func_284(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (*iParam0)
	{
		case -777592153:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@deadman_and_sheep@pose";
						case 3:
							return "pl_base";
						default:
							break;
					}
					break;
			}
			break;
		case 949011950:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@overturned_hearse@overturned_hearse";
						case 3:
							return "pl_Overturned_Hearse";
						default:
							break;
					}
					break;
			}
			break;
		case 1342653896:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@dead_chinese_traveler@dead_chinese_traveler";
						case 3:
							return "pl_dead_chinese_traveler";
						default:
							break;
					}
					break;
			}
			break;
		case 2072069278:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@dead_bear@pose";
						default:
							break;
					}
					break;
			}
			break;
		case 425000526:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@dead_miner@pose";
						default:
							break;
					}
					break;
			}
			break;
		case -1308658310:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return "";
						case 1:
							return "";
						default:
							break;
					}
					break;
			}
			break;
		case -1636964661:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@donkey_lady@donkey_lady";
						case 3:
							return "pl_donkey_lady";
						default:
							break;
					}
					break;
			}
			break;
		case 1937333853:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@dead_soldier@dead_soldier";
						case 3:
							return "pl_Action";
						default:
							break;
					}
					break;
			}
			break;
		case -1300082860:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@corpse_abandoned_oil_drill@pose";
						default:
							break;
					}
					break;
			}
			break;
		case 149709049:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@burned_settlement@pose";
						default:
							break;
					}
					break;
			}
			break;
		case -1568839185:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@corpse_pit@pose";
						default:
							break;
					}
					break;
			}
			break;
		case -641229542:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@corpse_of_slave@dead";
						default:
							break;
					}
					break;
			}
			break;
		case 1673499939:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@meteor_house@pose";
						default:
							break;
					}
					break;
			}
			break;
		case -1177787273:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@water_diviner@water_diviner";
						case 3:
							return "pl_water_diviner";
						default:
							break;
					}
					break;
			}
			break;
		case -1287911066:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@barrel_rider@barrel_rider";
						default:
							break;
					}
					break;
			}
			break;
		case -1824429070:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@buck_carcasses@pose";
						default:
							break;
					}
					break;
			}
			break;
		case -1841331114:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@lightning_alley@lightning_alley";
						default:
							break;
					}
					break;
			}
			break;
		case 657666087:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@circuswagon@circuswagon";
						default:
							break;
					}
					break;
				case 1:
					switch (iParam2)
					{
						case 0:
							return "mech_melee@unarmed@_male@_ambient@_healthy@_noncombat";
						case 1:
							return "att_sucker_punch_dist_close_v1";
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return "s_lev_des_mission";
						case 1:
							return "s_fortuneteller01x";
						default:
							break;
					}
					break;
				case 3:
					switch (iParam2)
					{
						case 2:
							return "lightrig@misc@discoverable_circus_wagon";
						case 3:
							return "plMain";
						default:
							break;
					}
					break;
			}
			break;
		case 1861313914:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							if (func_16(59))
							{
								return "script@beat@wilderness@discoverables@braithwaites_secret_endless_summer@braithwaites_secret_endless_summer";
							}
							else
							{
								return "script@ambient@discoverables@braithwaites@secret";
							}
							break;
						case 3:
							if (func_16(59))
							{
								return "";
							}
							else
							{
								return "pb_intial_visit_a";
							}
							break;
					}
					break;
			}
			break;
		case -415839138:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@ambient@discoverables@meditating_monk@main";
						case 3:
							return "pbl_base_a";
						default:
							break;
					}
					break;
			}
			break;
		case 429544447:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@jesuit_missionary@pose";
						case 3:
							return "pl_jesuit_missionary";
						default:
							break;
					}
					break;
			}
			break;
		case -2060865802:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@roadside_brothel@roadside_brothel";
						case 3:
							return "";
						default:
							break;
					}
					break;
			}
			break;
		case 1519228573:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@swamp_freak@pose";
						default:
							break;
					}
					break;
			}
			break;
		case -920971071:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@flattened_cabin@flattened_cabin";
						case 3:
							return "pl_DeadCorpse";
						default:
							break;
					}
					break;
			}
			break;
		case -1761578407:
			if ((((((((iParam3 == 0 || iParam3 == 1) || iParam3 == 2) || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 6) || iParam3 == 7) || iParam3 == 8)
			{
				switch (iParam1)
				{
					case 0:
						switch (iParam2)
						{
							case 0:
								return "script_common@grieving@player@unarmed@upper";
							case 1:
								return "intro";
							default:
								break;
						}
						break;
				}
			}
			break;
		case 404434344:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return "script_common@grieving@player@unarmed@upper";
						case 1:
							return "intro";
						default:
							break;
					}
					break;
			}
			break;
		case -739986731:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@pagan_ritual@pagan_ritual";
						case 3:
							return "pl_pagan_pose";
						default:
							break;
					}
					break;
			}
			break;
		case 2000209669:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return "script_amb@discoverables@strange_statues@push_button";
						case 1:
							return "push_button_short";
						default:
							break;
					}
					break;
			}
			break;
		case -2108030724:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@braithwaitesburnedcorpse@braithwaitesburnedcorpse";
						case 3:
							return "pl_deadPose";
						default:
							break;
					}
					break;
			}
			break;
		case 1187917501:
			switch (iParam1)
			{
				case 0:
					if (!func_53(*iParam0))
					{
						switch (iParam2)
						{
							case 2:
								return "script@beat@wilderness@discoverables@conestoga_wagon@conestoga_wagon";
							default:
								break;
						}
					}
					break;
				case 1:
					switch (iParam2)
					{
						case 2:
							return "script@ambient@discoverables@Conestoga_Wagon@SlideCamera";
						case 3:
							return "pl_ACTION";
						default:
							break;
					}
					break;
			}
			break;
		case -1887999095:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@grayssecret@grayssecret";
						case 3:
							return "pl_deadPose";
						default:
							break;
					}
					break;
			}
			break;
		case -1829339703:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@wilderness_chest_3@wilderness_chest_3";
						default:
							break;
					}
					break;
			}
			break;
		case -1240932004:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@dead_micah@dead_micah";
						case 3:
							return "pl_micah";
						default:
							break;
					}
					break;
			}
			break;
		case -2008558277:
		case -1891628345:
		case -1859413640:
		case -1761189332:
		case -1714262909:
		case -1494823099:
		case -1420566543:
		case -1272862985:
		case -1208846034:
		case -1144800837:
		case -1061274876:
		case -968854939:
		case -780455182:
		case -763376358:
		case -709811179:
		case -654238687:
		case -599506500:
		case -499529359:
		case -357364973:
		case -261997819:
		case -35775921:
		case -30872859:
		case -657632:
		case 221420861:
		case 308500632:
		case 330993088:
		case 435290930:
		case 513110082:
		case 683269210:
		case 733338689:
		case 870958936:
		case 939555152:
		case 1048086072:
		case 1124200691:
		case 1187689415:
		case 1284679164:
		case 1335921989:
		case 1424723727:
		case 1464664327:
		case 1490223565:
		case 1505050944:
		case 1535254161:
		case 1801731633:
		case 2072029413:
		case 2134589549:
		case 2135153015:
			break;
		default:
			break;
	}
	return "";
}

void func_285(var uParam0, int iParam1)
{
	if (_does_anim_scene_exist(uParam0[iParam1]))
	{
		_delete_anim_scene(uParam0[iParam1]);
	}
}

void func_286(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (!&uParam0->f_12[iVar0] == 0)
		{
			set_model_as_no_longer_needed(&(uParam0->f_12[iVar0]));
		}
		iVar0++;
	}
}

void func_287(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		if (!&uParam0->f_6[iVar0] == 0)
		{
			set_model_as_no_longer_needed(&(uParam0->f_6[iVar0]));
		}
		iVar0++;
	}
}

void func_288(int iParam0)
{
	if (_does_text_database_exist(func_325(iParam0)))
	{
		if (_text_database_has_loaded(func_325(iParam0)))
		{
			_text_database_delete(func_325(iParam0));
		}
	}
}

int func_289(int iParam0)
{
	if (!func_504(iParam0))
	{
		return -1;
	}
	return func_505(iParam0);
}

char* func_290(int iParam0)
{
	switch (*iParam0)
	{
		case 404434344:
			return "DISC_VOL_GRAVE_ARTHUR_I";
		case -1761578407:
			if (iParam0->f_4 == 0)
			{
				return "DISC_VOL_GRAVE_ARTHUR_I";
			}
			else if (iParam0->f_4 == 1)
			{
				return "DISC_VOL_GRAVE_JENNY_I";
			}
			else if (iParam0->f_4 == 2)
			{
				return "DISC_VOL_GRAVE_HOSEA_I";
			}
			else if (iParam0->f_4 == 3)
			{
				return "DISC_VOL_GRAVE_LENNY_I";
			}
			else if (iParam0->f_4 == 4)
			{
				return "DISC_VOL_GRAVE_SEAN_I";
			}
			else if (iParam0->f_4 == 5)
			{
				return "DISC_VOL_GRAVE_DAVEY_I";
			}
			else if (iParam0->f_4 == 6)
			{
				return "DISC_VOL_GRAVE_KIERAN_I";
			}
			else if (iParam0->f_4 == 7)
			{
				return "DISC_VOL_GRAVE_SUSAN_I";
			}
			else if (iParam0->f_4 == 8)
			{
				return "DISC_VOL_GRAVE_EAGLE_I";
			}
			break;
		case -1243267511:
			return "DISC_VOL_FACE_TREES_I";
		case 1535254161:
			return "DISC_VOL_CIV_WAR_I";
		case -607940493:
			return "DISC_VOL_SERPENT_MOUND_I";
		case -890175011:
			if (iParam0->f_4 == 0)
			{
				return "DISC_VOL_VAMP_CLUES_1_I";
			}
			else if (iParam0->f_4 == 1)
			{
				return "DISC_VOL_VAMP_CLUES_2_I";
			}
			else if (iParam0->f_4 == 2)
			{
				return "DISC_VOL_VAMP_CLUES_3_I";
			}
			else if (iParam0->f_4 == 3)
			{
				return "DISC_VOL_VAMP_CLUES_4_I";
			}
			else if (iParam0->f_4 == 4)
			{
				return "DISC_VOL_VAMP_CLUES_5_I";
			}
			break;
		case 677950956:
			if (iParam0->f_4 == 0)
			{
				return "DISC_VOL_AZTEC_CLUES_1_I";
			}
			else if (iParam0->f_4 == 1)
			{
				return "DISC_VOL_AZTEC_CLUES_2_I";
			}
			else if (iParam0->f_4 == 2)
			{
				return "DISC_VOL_AZTEC_CLUES_3_I";
			}
			else if (iParam0->f_4 == 3)
			{
				return "DISC_VOL_AZTEC_CLUES_4_I";
			}
			else if (iParam0->f_4 == 4)
			{
				return "DISC_VOL_AZTEC_CLUES_5_I";
			}
			else if (iParam0->f_4 == 5)
			{
				return "DISC_VOL_AZTEC_CLUES_6_I";
			}
			break;
	}
	return "";
}

float func_291()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_292(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_293(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_294(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_295()
{
	if (_is_ped_hogtied(Global_35))
	{
		return false;
	}
	if (_is_ped_hogtying(Global_35))
	{
		return false;
	}
	if (_is_ped_lassoed(Global_35))
	{
		return false;
	}
	if (_0xef3a8772f085b4aa(Global_35))
	{
		return false;
	}
	if (!_get_lassoed_entity(Global_35) == 0)
	{
		return false;
	}
	if (_0x226cf9b159e38f42(Global_35))
	{
		return false;
	}
	if (_0x3bdfcf25b58b0415(Global_35))
	{
		return false;
	}
	if (_0x0e99e3bf11bb6367(Global_35) || is_ped_performing_melee_action(Global_35, 4096, 0))
	{
		return false;
	}
	if (is_ped_performing_melee_action(Global_35, 32768, 0))
	{
		return false;
	}
	return true;
}

bool func_296()
{
	if (_is_ped_sliding(Global_35))
	{
		return false;
	}
	if (is_ped_swimming(Global_35))
	{
		return false;
	}
	if (is_ped_climbing(Global_35))
	{
		return false;
	}
	if (func_506(Global_35))
	{
		return false;
	}
	if (is_ped_falling(Global_35))
	{
		return false;
	}
	if (_0x3e592d0486dec0f6(Global_35))
	{
		return false;
	}
	if (is_ped_ragdoll(Global_35))
	{
		return false;
	}
	if (is_ped_vaulting(Global_35))
	{
		return false;
	}
	if (is_ped_running(Global_35))
	{
		return false;
	}
	if (is_ped_getting_up(Global_35))
	{
		return false;
	}
	return true;
}

bool func_297()
{
	if (func_507(Global_35) && !Global_1392040->f_2)
	{
		return false;
	}
	if (func_508(Global_35) && !Global_1392040->f_2)
	{
		return false;
	}
	return true;
}

bool func_298(bool bParam0)
{
	if (_is_ped_carrying(Global_35) && !Global_1392040->f_2)
	{
		if (bParam0)
		{
			func_509("ITEM_UNUSABLE_CARRYING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	return true;
}

bool func_299(int iParam0)
{
	if (_0x1d46b417f926d34d(Global_35))
	{
		return false;
	}
	else if (is_ped_in_any_vehicle(Global_35, true))
	{
		if (!is_ped_in_any_vehicle(Global_35, false))
		{
			return false;
		}
		iVar0 = get_vehicle_ped_is_using(Global_35);
		iVar1 = get_entity_model(iVar0);
		switch (iVar1)
		{
			case -1613317544:
			case 1493442814:
				return false;
			case -1988548788:
			case 518773733:
			case 742064790:
			case 749266870:
				return false;
		}
		if ((!func_294(iParam0, 16) && !is_ped_on_mount(Global_35)) && _0x2963b5c1637e8a27(iVar0) == Global_35)
		{
			return false;
		}
	}
	else if (is_ped_getting_into_a_vehicle(Global_35))
	{
		return false;
	}
	else if (is_ped_on_mount(Global_35))
	{
		if (!func_510(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_300()
{
	if (is_ped_hanging_on_to_vehicle(Global_35))
	{
		return false;
	}
	return true;
}

bool func_301(int iParam0, int iParam1)
{
	iVar0 = get_script_task_status(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

bool func_302(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

void func_303(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	(*Global_1945938)[iParam0]->f_4 = iParam1;
	(*Global_1945938)[iParam0] = iParam4;
	(*Global_1945938)[iParam0]->f_16 = get_id_of_this_thread();
	(*Global_1945938)[iParam0]->f_2 = iParam5;
	(*Global_1945938)[iParam0]->f_6 = { vParam6 };
	(*Global_1945938)[iParam0]->f_9 = fParam9;
	(*Global_1945938)[iParam0]->f_10 = iParam10;
	(*Global_1945938)[iParam0]->f_11 = iParam11;
	(*Global_1945938)[iParam0]->f_12 = { 0f, 0f, 0f };
	(*Global_1945938)[iParam0]->f_5 = iParam12;
	(*Global_1945938)[iParam0]->f_1 = 2;
	(*Global_1945938)[iParam0]->f_17 = -1;
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
			_uiprompt_set_mash_mode(iVar0, iParam17);
			break;
		case 8:
			_uiprompt_set_mash_auto_fill_mode(iVar0, iParam16, iParam17);
			break;
		case 13:
			_uiprompt_set_mash_indefinitely_mode(iVar0);
			break;
		case 15:
			_uiprompt_set_target_mode(iVar0, 0.5f, 0.1f, 0);
			break;
		case 9:
			_uiprompt_set_mash_with_resistance_mode(iVar0, iParam17, iParam18, iParam19);
			break;
		case 4:
		case 5:
			_uiprompt_set_standardized_hold_mode(iVar0, iParam24);
			break;
		case 10:
			_uiprompt_set_mash_with_resistance_can_fail_mode(iVar0, iParam17, iParam18, iParam19);
			break;
		case 11:
			_uiprompt_set_mash_manual_mode(iVar0, (1f / to_float(iParam17)), iParam18, 0f, iParam19);
			break;
		case 12:
			_uiprompt_set_mash_manual_can_fail_mode(iVar0, (1f / to_float(iParam17)), iParam18, 0f, iParam19);
			break;
		case 14:
			_uiprompt_set_rotate_mode(iVar0, iParam20, iParam21);
			_uiprompt_set_attribute(iVar0, 10, 1);
			break;
	}
	_uiprompt_register_end(iVar0);
	(*Global_1945938)[iParam0]->f_3 = iVar0;
	func_106(iParam0, 1);
	func_339(iParam0, 1);
	func_340(iParam0, 128);
}

int func_304(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 1:
			return 4;
		case 2:
			return 8;
		case 3:
			return 16;
		case 4:
			return 32;
		case 5:
			return 64;
		case 6:
			return 128;
		case 7:
			return 256;
		case 8:
			return 512;
		case 9:
			return 1024;
		case 10:
			return 2048;
		case 11:
			return 4096;
		case 12:
			return 8192;
		case 13:
			return 16384;
		case 14:
			return 32768;
		case 15:
			return 65536;
		case 16:
			return 131072;
		case 17:
			return 262144;
		case 18:
			return 524288;
		case 19:
			return 1048576;
		default:
			break;
	}
	return 1;
}

void func_305(bool bParam0)
{
	if (bParam0)
	{
		func_511(&(Global_40.f_12019.f_42), 1);
	}
	else
	{
		func_512(&(Global_40.f_12019.f_42), 1);
	}
}

bool func_306(int iParam0)
{
	return func_513(iParam0);
}

int func_307(bool bParam0)
{
	if (func_92() == -1)
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

void func_308()
{
	disable_control_action(0, 1367437629, false);
	disable_control_action(0, 992265328, false);
	disable_control_action(0, -473983589, false);
	disable_control_action(0, -719620017, false);
	disable_control_action(0, -1053137564, false);
	disable_control_action(0, 129547951, false);
	disable_control_action(0, -1300031296, false);
}

int func_309()
{
	iVar0 = func_514();
	if (iVar0 <= -320)
	{
		return -320;
	}
	if (iVar0 <= -280)
	{
		return -280;
	}
	if (iVar0 <= -240)
	{
		return -240;
	}
	if (iVar0 <= -200)
	{
		return -200;
	}
	if (iVar0 <= -160)
	{
		return -160;
	}
	if (iVar0 <= -120)
	{
		return -120;
	}
	if (iVar0 <= -80)
	{
		return -80;
	}
	if (iVar0 <= -40)
	{
		return -40;
	}
	if (iVar0 >= 320)
	{
		return 320;
	}
	if (iVar0 >= 280)
	{
		return 280;
	}
	if (iVar0 >= 240)
	{
		return 240;
	}
	if (iVar0 >= 200)
	{
		return 200;
	}
	if (iVar0 >= 160)
	{
		return 160;
	}
	if (iVar0 >= 120)
	{
		return 120;
	}
	if (iVar0 >= 80)
	{
		return 80;
	}
	if (iVar0 >= 40)
	{
		return 40;
	}
	return 0;
}

int func_310(int iParam0)
{
	if (func_92() != -1)
	{
		return iParam0;
	}
	if (Global_1347477->f_2 + 120000) < get_game_timer()
	{
		Global_1347477->f_3 = 1;
		Global_1347477->f_2 = get_game_timer();
		return iParam0;
	}
	fVar0 = 1f;
	Global_1347477->f_2 = get_game_timer();
	Global_1347477->f_3++;
	if (Global_1347477->f_3 >= 10)
	{
		fVar0 = 2f;
	}
	else if (Global_1347477->f_3 >= 3)
	{
		fVar0 = 1.5f;
	}
	fVar1 = (to_float(iParam0) * fVar0);
	fVar1 = func_515(absf(fVar1) < 1f, func_515(fVar1 < 0f, -1f, 1f), fVar1);
	return ceil(fVar1);
}

int func_311(int iParam0, int iParam1, int iParam2)
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

int func_312(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case -40:
		case 40:
			return 1;
		case -80:
		case 80:
			return 2;
		case -120:
		case 120:
			return 3;
		case -160:
		case 160:
			return 4;
		case -200:
		case 200:
			return 5;
		case -240:
		case 240:
			return 6;
		case -280:
		case 280:
			return 7;
		case -320:
		case 320:
			return 8;
	}
	return 0;
}

int func_313()
{
	if (Global_40.f_11095.f_35 <= -320)
	{
		return 1;
	}
	else if (Global_40.f_11095.f_35 <= -280)
	{
		return 2;
	}
	else if (Global_40.f_11095.f_35 <= -240)
	{
		return 3;
	}
	else if (Global_40.f_11095.f_35 <= -200)
	{
		return 4;
	}
	else if (Global_40.f_11095.f_35 <= -160)
	{
		return 5;
	}
	else if (Global_40.f_11095.f_35 <= -120)
	{
		return 6;
	}
	else if (Global_40.f_11095.f_35 <= -80)
	{
		return 7;
	}
	else if (Global_40.f_11095.f_35 < 0)
	{
		return 8;
	}
	else if (Global_40.f_11095.f_35 <= 40)
	{
		return 9;
	}
	else if (Global_40.f_11095.f_35 >= 320)
	{
		return 16;
	}
	else if (Global_40.f_11095.f_35 >= 280)
	{
		return 15;
	}
	else if (Global_40.f_11095.f_35 >= 240)
	{
		return 14;
	}
	else if (Global_40.f_11095.f_35 >= 200)
	{
		return 13;
	}
	else if (Global_40.f_11095.f_35 >= 160)
	{
		return 12;
	}
	else if (Global_40.f_11095.f_35 >= 120)
	{
		return 11;
	}
	else if (Global_40.f_11095.f_35 >= 80)
	{
		return 10;
	}
	return 9;
}

void func_314(int iParam0, bool bParam1, int iParam2)
{
	func_516((get_game_timer() + iParam2), !bParam1);
	_databinding_write_data_int(Global_1955569->f_1.f_2.f_1, iParam0);
	func_517(iParam0);
}

void func_315(int iParam0)
{
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[2]), false);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[2]), true);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[2]), func_518(iParam0));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[2]), "pausemenu_player");
}

void func_316(bool bParam0)
{
	bVar3 = false;
	if (func_519(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_520(iVar5, &iVar2, &iVar0))
			{
				if (!func_201(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_521(iVar2);
					if (_unlock_is_unlocked(iVar1))
					{
						if (bParam0)
						{
							_unlock_set_unlocked(iVar1, false);
						}
					else
					{
						}
						else
						{
							if (func_221(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_309() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_309() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_522();
							}
							if (bVar3)
							{
								_unlock_set_unlocked(iVar1, true);
								bVar3 = false;
							}
						}
						iVar5++;
					}
				}
			}
		}
	}
}

char* func_317(int iParam0)
{
	switch (iParam0)
	{
		case 2139774588:
			return "HONOR_EVENT_LOOT_INNOCENT";
		case 1142025875:
			return "HONOR_EVENT_AMBIENT_KILL";
		case 1587891565:
			return "HONOR_EVENT_AMBIENT_KO";
		case 1877013492:
			return "HONOR_EVENT_SCARE";
		case -643014279:
			return "HONOR_EVENT_KILL_VERMIN";
		case -597116214:
			return "HONOR_EVENT_KILL_FARM_ANIMAL";
		case 551416228:
			return "HONOR_EVENT_KILL_HORSE";
		case 1022576842:
			return "HONOR_EVENT_STEAL_HORSE";
		case 953325896:
			return "HONOR_EVENT_STEAL_DONKEY";
		case 508358508:
			return "HONOR_EVENT_STEAL_MULE";
		case -856432278:
			return "HONOR_EVENT_STEAL_WAGON";
		case -735200598:
			return "HONOR_EVENT_TRAMPLED_INNOCENT";
		case -2010847721:
			return "HONOR_EVENT_ABANDON_ANIMALS";
		case 446961221:
			return "HONOR_EVENT_ANIMAL_BLEEDOUT";
		case -1972216640:
			return "HONOR_EVENT_ANTAGONIZE";
		case 530833824:
			return "HONOR_EVENT_THEFT";
		case 1682361219:
			return "HONOR_EVENT_INTERVENED";
		case 158959085:
			return "HONOR_EVENT_WANTED_IN_CAMP";
		case 1919819559:
			return "HONOR_EVENT_DONATED_GAME";
		case 1461411082:
			return "HONOR_EVENT_ITEM_REQUEST";
		case -549508280:
			return "HONOR_EVENT_LONG_ABSENCE";
		case -1787248475:
			return "HONOR_EVENT_CRUEL_DEATH";
		case 932872355:
			return "HONOR_EVENT_JUSTICE_SERVED";
		case -1091304842:
			return "HONOR_EVENT_CHEAT";
		default:
			break;
	}
	return "";
}

var func_318(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
{
	Var0 = -2;
	Var0.f_1 = sParam5;
	Var0.f_2 = sParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = iParam4;
	Var13.f_6 = 0;
	uVar20 = _0xb249ebcb30dd88e0(&Var0, &Var13, iParam8);
	func_523(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_319(int iParam0, int iParam1)
{
	if (!func_524(iParam0))
	{
		return 0;
	}
	if (!func_118())
	{
		return 0;
	}
	if (!func_525(iParam0, &iVar0, &iVar1))
	{
		return 0;
	}
	if (iVar0 == -816321659 && Global_1572887->f_12 != -1)
	{
		return 0;
	}
	chal_add_goal_progress_int(iVar0, iVar1, iParam1);
	return 1;
}

int func_320(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2106445152:
			return 292;
		case -2106214197:
			return 104;
		case -2101264851:
			return 195;
		case -2073072369:
			return 59;
		case -2069570138:
			return 25;
		case -2066272360:
			return 357;
		case -2058120606:
			return 197;
		case -2038424081:
			return 49;
		case -2034257789:
			return 92;
		case -2022369555:
			return 265;
		case -2021582629:
			return 112;
		case -2020023971:
			return 278;
		case -1957523409:
			return 208;
		case -1952856164:
			return 165;
		case -1949204933:
			return 276;
		case -1925798111:
			return 41;
		case -1861414976:
			return 353;
		case -1852605133:
			return 10;
		case -1847672446:
			return 376;
		case -1840704908:
			return 289;
		case -1838712533:
			return 26;
		case -1838352012:
			return 57;
		case -1835851517:
			return 56;
		case -1831552326:
			return 123;
		case -1825294305:
			return 266;
		case -1824738758:
			return 277;
		case -1818850842:
			return 253;
		case -1799960545:
			return 257;
		case -1764522338:
			return 372;
		case -1763509974:
			return 141;
		case -1741667789:
			return 64;
		case -1738165526:
			return 3;
		case -1718674470:
			return 23;
		case -1717960576:
			return 61;
		case -1711895055:
			return 13;
		case -1706438978:
			return 233;
		case -1700452710:
			return 53;
		case -1674179981:
			return 55;
		case -1666278201:
			return 33;
		case -1612662716:
			return 201;
		case -1610966108:
			return 322;
		case -1582926490:
			return 146;
		case -1579419919:
			return 147;
		case -1558439474:
			return 301;
		case -1556423728:
			return 218;
		case -1532284567:
			return 116;
		case -1530132748:
			return 311;
		case -1524512402:
			return 209;
		case -1523910291:
			return 155;
		case -1455998786:
			return 338;
		case -1447311849:
			return 215;
		case -1436021162:
			return 172;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case -1419919497:
			return 22;
		case -1414537028:
			return 73;
		case -1405998267:
			return 105;
		case -1344601768:
			return 314;
		case -1340339190:
			return 331;
		case -1329135070:
			return 140;
		case -1318987693:
			return 222;
		case -1311865656:
			return 37;
		case -1296807958:
			return 320;
		case -1283202000:
			return 321;
		case -1282804314:
			return 270;
		case -1278074582:
			return 171;
		case -1271608261:
			return 98;
		case -1257057567:
			return 21;
		case -1241340344:
			return 300;
		case -1236261996:
			return 235;
		case -1232809834:
			return 113;
		case -1230112817:
			return 170;
		case -1223121209:
			return 126;
		case -1215445344:
			return 131;
		case -1209597203:
			return 333;
		case -1206122982:
			return 156;
		case -1187950766:
			return 45;
		case -1179948750:
			return 136;
		case -1170496998:
			return 46;
		case -1164215952:
			return 234;
		case -1151084372:
			return 124;
		case -1145519186:
			return 100;
		case -1124061431:
			return 242;
		case -1123615607:
			return 29;
		case -1080627546:
			return 378;
		case -1077783786:
			return 194;
		case -1063147448:
			return 151;
		case -1062490780:
			return 79;
		case -1060078174:
			return 239;
		case -1056767524:
			return 176;
		case -1053549743:
			return 58;
		case -1029225159:
			return 106;
		case -1014145132:
			return 288;
		case -978957786:
			return 251;
		case -959357075:
			return 36;
		case -950054349:
			return 152;
		case -939420910:
			return 44;
		case -939114198:
			return 221;
		case -919512195:
			return 40;
		case -911126844:
			return 336;
		case -897750037:
			return 334;
		case -895073533:
			return 356;
		case -879507474:
			return 236;
		case -868076593:
			return 84;
		case -857964358:
			return 83;
		case -853383233:
			return 65;
		case -851626677:
			return 339;
		case -828139293:
			return 260;
		case -811637947:
			return 245;
		case -796902762:
			return 88;
		case -792853067:
			return 254;
		case -789397228:
			return 262;
		case -785605431:
			return 250;
		case -781631220:
			return 345;
		case -764163380:
			return 228;
		case -748969569:
			return 78;
		case -741351766:
			return 60;
		case -736853952:
			return 366;
		case -734416508:
			return 340;
		case -699277634:
			return 4;
		case -693828600:
			return 323;
		case -683458244:
			return 80;
		case -666014935:
			return 157;
		case -664512648:
			return 67;
		case -664252410:
			return 191;
		case -644722288:
			return 261;
		case -640663440:
			return 214;
		case -639037538:
			return 185;
		case -628542779:
			return 71;
		case -622554983:
			return 370;
		case -618620429:
			return 187;
		case -545450213:
			return 377;
		case -538889627:
			return 175;
		case -538880323:
			return 174;
		case -534215902:
			return 130;
		case -524787708:
			return 352;
		case -524145696:
			return 117;
		case -523522517:
			return 364;
		case -515561750:
			return 238;
		case -503955743:
			return 249;
		case -502473159:
			return 343;
		case -502324015:
			return 8;
		case -491981251:
			return 186;
		case -468693731:
			return 111;
		case -464836488:
			return 268;
		case -460024530:
			return 316;
		case -434590080:
			return 225;
		case -404698347:
			return 205;
		case -397760715:
			return 143;
		case -389056691:
			return 272;
		case -360036154:
			return 368;
		case -356975260:
			return 103;
		case -355531636:
			return 337;
		case -351362068:
			return 220;
		case -350863510:
			return 162;
		case -349064220:
			return 362;
		case -334729750:
			return 69;
		case -333135263:
			return 361;
		case -330120947:
			return 360;
		case -306246697:
			return 375;
		case -299522880:
			return 213;
		case -270094635:
			return 267;
		case -261141318:
			return 30;
		case -259123672:
			return 244;
		case -254562075:
			return 132;
		case -238080464:
			return 121;
		case -233743613:
			return 273;
		case -223469678:
			return 204;
		case -220282381:
			return 139;
		case -191424539:
			return 149;
		case -182889087:
			return 177;
		case -154581735:
			return 309;
		case -150493654:
			return 97;
		case -144653976:
			return 219;
		case -129643890:
			return 11;
		case -108780030:
			return 317;
		case -108307814:
			return 28;
		case -99303535:
			return 167;
		case -86199844:
			return 145;
		case -80522843:
			return 154;
		case -76237062:
			return 373;
		case -75024673:
			return 258;
		case -63926460:
			return 89;
		case -61411516:
			return 325;
		case -35658630:
			return 24;
		case -25901845:
			return 290;
		case -9438024:
			return 129;
		case -1:
			return 0;
		case 0:
			return 1;
		case 2639906:
			return 153;
		case 8924991:
			return 297;
		case 26054262:
			return 248;
		case 26245360:
			return 237;
		case 38162571:
			return 74;
		case 52706132:
			return 243;
		case 54073871:
			return 76;
		case 74872959:
			return 348;
		case 93964309:
			return 358;
		case 94263042:
			return 291;
		case 106479759:
			return 101;
		case 141950038:
			return 114;
		case 153152452:
			return 86;
		case 168171957:
			return 183;
		case 171107021:
			return 381;
		case 171499483:
			return 283;
		case 187862543:
			return 16;
		case 192515737:
			return 14;
		case 198200492:
			return 241;
		case 210001842:
			return 62;
		case 224551212:
			return 142;
		case 227918160:
			return 182;
		case 229371495:
			return 344;
		case 235928616:
			return 286;
		case 249726958:
			return 164;
		case 269047710:
			return 54;
		case 273461605:
			return 81;
		case 280705402:
			return 95;
		case 282809459:
			return 119;
		case 299694527:
			return 275;
		case 300221584:
			return 138;
		case 302205488:
			return 216;
		case 311708813:
			return 198;
		case 320943355:
			return 133;
		case 330026330:
			return 66;
		case 345808947:
			return 287;
		case 356365161:
			return 47;
		case 371850993:
			return 281;
		case 373691918:
			return 188;
		case 374115931:
			return 90;
		case 405586984:
			return 34;
		case 407136781:
			return 173;
		case 409602249:
			return 293;
		case 417081698:
			return 17;
		case 417525590:
			return 303;
		case 420709909:
			return 42;
		case 426191476:
			return 15;
		case 434558613:
			return 199;
		case 439465264:
			return 108;
		case 440043364:
			return 31;
		case 442317566:
			return 302;
		case 449774763:
			return 227;
		case 459290420:
			return 52;
		case 469053995:
			return 231;
		case 473295046:
			return 2;
		case 476714362:
			return 232;
		case 478884033:
			return 148;
		case 479419429:
			return 305;
		case 509781469:
			return 350;
		case 514932331:
			return 246;
		case 522677506:
			return 279;
		case 526003171:
			return 355;
		case 527226204:
			return 159;
		case 544152906:
			return 115;
		case 559573222:
			return 252;
		case 582380806:
			return 326;
		case 588987611:
			return 179;
		case 618699440:
			return 77;
		case 630808005:
			return 128;
		case 651395116:
			return 294;
		case 657241756:
			return 189;
		case 664571177:
			return 312;
		case 665676602:
			return 296;
		case 682839815:
			return 327;
		case 689024866:
			return 134;
		case 689930684:
			return 207;
		case 704802028:
			return 178;
		case 723021499:
			return 264;
		case 747514327:
			return 354;
		case 753127042:
			return 48;
		case 757752139:
			return 109;
		case 784360470:
			return 330;
		case 791041526:
			return 18;
		case 817925178:
			return 240;
		case 868326136:
			return 285;
		case 885203519:
			return 379;
		case 885378256:
			return 351;
		case 929582877:
			return 335;
		case 931649776:
			return 224;
		case 932909855:
			return 298;
		case 945612176:
			return 247;
		case 965986934:
			return 19;
		case 976539083:
			return 310;
		case 1010885152:
			return 7;
		case 1015669983:
			return 122;
		case 1050128548:
			return 284;
		case 1064154891:
			return 110;
		case 1067254646:
			return 319;
		case 1074873669:
			return 144;
		case 1140218954:
			return 27;
		case 1151197909:
			return 256;
		case 1159471771:
			return 329;
		case 1160698568:
			return 135;
		case 1164928979:
			return 158;
		case 1166612791:
			return 347;
		case 1167397384:
			return 307;
		case 1177464213:
			return 38;
		case 1186594126:
			return 230;
		case 1193080109:
			return 184;
		case 1203043430:
			return 274;
		case 1205826474:
			return 85;
		case 1207048789:
			return 169;
		case 1213993593:
			return 160;
		case 1216784232:
			return 269;
		case 1221801385:
			return 374;
		case 1238086793:
			return 313;
		case 1250636944:
			return 259;
		case 1302228510:
			return 315;
		case 1306158345:
			return 202;
		case 1321892118:
			return 324;
		case 1350371763:
			return 20;
		case 1350391819:
			return 75;
		case 1352699670:
			return 271;
		case 1358491857:
			return 263;
		case 1360745816:
			return 82;
		case 1376646519:
			return 223;
		case 1399676951:
			return 210;
		case 1410198831:
			return 217;
		case 1433244935:
			return 166;
		case 1441416901:
			return 211;
		case 1446719356:
			return 380;
		case 1453909576:
			return 125;
		case 1466547629:
			return 120;
		case 1478132521:
			return 367;
		case 1485195808:
			return 50;
		case 1485494263:
			return 102;
		case 1488286867:
			return 295;
		case 1488453464:
			return 212;
		case 1497516462:
			return 5;
		case 1500064347:
			return 72;
		case 1509509592:
			return 35;
		case 1512816328:
			return 168;
		case 1517904467:
			return 206;
		case 1522511407:
			return 280;
		case 1549124796:
			return 342;
		case 1557082963:
			return 163;
		case 1582370975:
			return 359;
		case 1583012985:
			return 304;
		case 1591451572:
			return 365;
		case 1607768502:
			return 9;
		case 1609506757:
			return 107;
		case 1626481264:
			return 118;
		case 1643531967:
			return 127;
		case 1649996811:
			return 181;
		case 1660024373:
			return 150;
		case 1665756137:
			return 93;
		case 1672143046:
			return 383;
		case 1691618738:
			return 68;
		case 1698972798:
			return 318;
		case 1703398561:
			return 332;
		case 1703426636:
			return 43;
		case 1708045337:
			return 346;
		case 1713221411:
			return 137;
		case 1743048395:
			return 226;
		case 1744443559:
			return 349;
		case 1766284049:
			return 94;
		case 1776302352:
			return 363;
		case 1804403874:
			return 382;
		case 1822001510:
			return 200;
		case 1846061697:
			return 99;
		case 1850082804:
			return 196;
		case 1867912207:
			return 70;
		case 1884271742:
			return 51;
		case 1926308480:
			return 96;
		case 1932172605:
			return 328;
		case 1944170089:
			return 161;
		case 1947931439:
			return 229;
		case 1952610440:
			return 203;
		case 1954026328:
			return 371;
		case 1982676972:
			return 91;
		case 2008888900:
			return 180;
		case 2016141805:
			return 6;
		case 2019386373:
			return 190;
		case 2024121624:
			return 193;
		case 2024383613:
			return 369;
		case 2024769126:
			return 308;
		case 2037589949:
			return 63;
		case 2051822093:
			return 299;
		case 2077022393:
			return 306;
		case 2080210939:
			return 282;
		case 2091701359:
			return 39;
		case 2109952320:
			return 192;
		case 2113625508:
			return 341;
		case 2127577956:
			return 255;
		case 2136753624:
			return 87;
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

bool func_321(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

char* func_322(int iParam0)
{
	switch (*iParam0)
	{
		case -654238687:
			return "DISC_VOL_OLD_DIRTY_CABIN";
		case -415839138:
			return "DISC_VOL_MEDITATING_MONK";
		case -2008558277:
			return "DISC_VOL_BATS_IN_BARN";
		case 1861313914:
			return "DISC_VOL_BRAITH_SECRET";
		case -35775921:
			return "DISC_VOL_BLACK_SHEEP";
		default:
			break;
	}
	return "";
}

void func_323(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		func_526(uParam0, iVar0);
		iVar0++;
	}
}

void func_324(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (!is_string_null_or_empty(func_284(iParam0, iParam2, 2, 0)))
	{
		if (!_does_anim_scene_exist(uParam1[iParam2]))
		{
			if (!is_string_null_or_empty(func_284(iParam0, iParam2, 3, 0)))
			{
				(*uParam1)[iParam2] = _create_anim_scene(func_284(iParam0, iParam2, 2, 0), iParam3, func_284(iParam0, iParam2, 3, 0), false, true);
			}
			else
			{
				(*uParam1)[iParam2] = _create_anim_scene(func_284(iParam0, iParam2, 2, 0), iParam3, 0, false, true);
			}
			load_anim_scene(uParam1[iParam2]);
		}
	}
}

char* func_325(int iParam0)
{
	switch (*iParam0)
	{
		case 657666087:
			return "FTELLAU";
		case 1673499939:
			return "DSMEHAU";
		case -415839138:
			return "DMONKAU";
		default:
			break;
	}
	return "";
}

int func_326(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_527(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_327(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_328(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	bVar0 = _does_metaped_outfit_exist_for_ped_model(iParam1, get_entity_model(iParam0));
	if (bVar0)
	{
	}
	return bVar0;
}

bool func_329(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!decor_exist_on(iParam0, "metaped_outfit_request") || !decor_exist_on(iParam0, "metaped_outfit_request_name"))
	{
		return false;
	}
	iVar0 = decor_get_int(iParam0, "metaped_outfit_request_name");
	if (iVar0 == iParam1)
	{
		return true;
	}
	return false;
}

bool func_330(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!decor_exist_on(iParam0, "metaped_outfit_request") || !decor_exist_on(iParam0, "metaped_outfit_request_name"))
	{
		return false;
	}
	iVar0 = decor_get_int(iParam0, "metaped_outfit_request_name");
	if (!func_328(iParam0, iVar0))
	{
		return true;
	}
	if (iVar0 != iParam1)
	{
		return false;
	}
	iVar1 = decor_get_int(iParam0, "metaped_outfit_request");
	return _0x610438375e5d1801(iVar1);
}

void func_331(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

void func_332(int iParam0, bool bParam1)
{
	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(iParam0, iVar0);
}

bool func_333(var uParam0, int iParam1, char* sParam2)
{
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < uParam0->f_97 && !bVar0)
	{
		if (are_strings_equal(sParam2, &((*uParam0)[iVar1]->f_1)))
		{
			(*uParam0)[iVar1] = iParam1;
			bVar0 = true;
		}
		iVar1++;
	}
	if (!bVar0)
	{
		if (uParam0->f_97 < 24)
		{
			(*uParam0)[uParam0->f_97] = iParam1;
			StringCopy(&((*uParam0)[uParam0->f_97]->f_1), sParam2, 24);
			uParam0->f_97++;
			bVar0 = true;
		}
	}
	return bVar0;
}

int func_334(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13)
{
	if (is_string_null_or_empty(sParam0))
	{
		return 0;
	}
	if (!_0xbc0884bc590951c7(iParam1, 0))
	{
		return 0;
	}
	if (!_does_volume_exist(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_302(iVar0, 2))
		{
			if (iParam2 == (*Global_1945938)[iVar0]->f_10 && iParam1 == (*Global_1945938)[iVar0]->f_4)
			{
				return iVar0;
			}
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_303(iVar1, iParam1, sParam0, 2, iParam3, iParam4, 0f, 0f, 0f, 0f, iParam2, 0, 1, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, 1065353216, 0, 0, 0, iParam12, bParam13);
		return iVar1;
	}
	return 0;
}

int func_335(int iParam0)
{
	switch (*iParam0)
	{
		case -415839138:
			return -1980449911;
		default:
			break;
	}
	return 1542656504;
}

void func_336(int iParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_a_ped(iParam1))
	{
		if (is_entity_dead(iParam1))
		{
		}
	}
	else if (is_entity_dead(get_object_index_from_entity_index(iParam1)))
	{
	}
	if (!func_33(iParam0))
	{
		return;
	}
	iVar0 = func_105(iParam0);
	if (_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		_uiprompt_set_group((*Global_1945938)[iVar0]->f_3, _uiprompt_get_group_id_for_target_entity(iParam1), 0);
		if (is_entity_a_ped(iParam1))
		{
			_0xfca8fb9e15fa80d3(get_ped_index_from_entity_index(iParam1), iParam2);
		}
		else
		{
			_0xd503d6f0986d58bc(get_object_index_from_entity_index(iParam1), iParam2);
		}
	}
}

void func_337(int iParam0, var uParam1, int iParam2)
{
	if (!*uParam1 == -1)
	{
		if (_does_anim_scene_exist(*uParam1))
		{
			if (_is_anim_scene_loaded(*uParam1, true, false))
			{
				if (iParam2 == 0)
				{
					iVar0 = 0;
					while (iVar0 <= (10 - 1))
					{
						if (!is_entity_dead(&(Local_63.f_1[iVar0])))
						{
							if (_0x6f1f0b17109309da(*uParam1, func_528(iParam0, iVar0)))
							{
								set_anim_scene_entity(*uParam1, func_528(iParam0, iVar0), &(Local_63.f_1[iVar0]), 0);
							}
						}
						iVar0++;
					}
					if (*iParam0 == 1861313914)
					{
						if (!is_entity_dead(Global_35))
						{
							if (_0x6f1f0b17109309da(*uParam1, "player"))
							{
								set_anim_scene_entity(*uParam1, "player", Global_35, 0);
							}
						}
					}
					if (!is_string_null_or_empty(func_284(iParam0, iParam2, 3, 0)))
					{
						if (_0xa9016536015de29d(*uParam1, func_284(iParam0, iParam2, 3, 0)))
						{
							_set_anim_scene_playback_list_bool(*uParam1, func_284(iParam0, iParam2, 3, 0), true);
						}
					}
				}
			}
		}
	}
}

void func_338(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_339(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_340(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

void func_341(var uParam0, bool bParam1, int iParam2)
{
	func_529(iParam2);
	if (Global_1572887->f_12 == -1)
	{
		if (!does_entity_exist(Global_35))
		{
			return;
		}
		if (Global_1935630->f_12)
		{
			return;
		}
	}
	else
	{
		if (!Global_1225639->f_11)
		{
			return;
		}
		if (Global_1225639->f_12)
		{
			return;
		}
	}
	if (bParam1)
	{
		uParam0->f_10 = 0;
	}
	uParam0->f_5 = iParam2;
	if (Global_1572887->f_12 == -1)
	{
		uParam0->f_13 = Global_1935630->f_44;
	}
	else
	{
		uParam0->f_13 = func_530(0);
	}
	switch (uParam0->f_6)
	{
		case 0:
			if (*uParam0 & 16 != 0)
			{
				if (!*uParam0 & 33554432 != 0)
				{
					if (uParam0->f_13 == -1504859554)
					{
						if (is_ped_planting_bomb(Global_35))
						{
							func_511(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_531(1))
						{
							func_511(uParam0, 33554432);
						}
					}
				}
				else if (!is_ped_planting_bomb(Global_35) && (!func_531(1) || *uParam0 & 8192 != 0))
				{
					func_512(uParam0, 33554432);
				}
			}
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
	if (!uParam0->f_1 & 1024 != 0)
	{
		if (!does_entity_exist(uParam0->f_14))
		{
			if (func_532(uParam0))
			{
				uParam0->f_15 = func_98();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_98() - uParam0->f_15) > 500)
			{
				if (!is_ped_on_mount(uParam0->f_14))
				{
					uParam0->f_14 = 0;
					uParam0->f_15 = 0;
				}
			}
		}
	}
	uParam0->f_6++;
	if (uParam0->f_6 >= 4)
	{
		uParam0->f_6 = 0;
		uParam0->f_7++;
		if (uParam0->f_7 > 4)
		{
			uParam0->f_7 = 0;
		}
	}
	func_533(uParam0);
}

bool func_342(int iParam0, var uParam1)
{
	if (!_0x1d1b448d719415ab(iParam0))
	{
		return false;
	}
	iVar0 = _0x796eecff0c6d39be(iParam0, 0, 0);
	if (iVar0 == 0)
	{
		return false;
	}
	switch (iVar0)
	{
		case -196899787:
		case 178452260:
		case 869302489:
		case 1589923363:
			iVar1 = _0x822a001bcea5bd81(iParam0, iVar0, 0, 0);
			if (!is_entity_a_ped(iVar1))
			{
				return false;
			}
			iVar2 = get_ped_index_from_entity_index(iVar1);
			if (!is_ped_human(iVar2))
			{
				return false;
			}
			if (decor_exist_on(iVar2, "bIgnoreDamageChecking"))
			{
				return false;
			}
			if (iVar2 == Global_1935630->f_33)
			{
				return false;
			}
			if (iVar2 == Global_1935630->f_32)
			{
				return false;
			}
			if (!func_534(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_535(iParam0, iVar2) <= func_536(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_343(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_537(iParam2, 1, 1, 1, 0))
	{
		func_511(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_538(uParam1, 1);
	func_539();
}

bool func_344(int iParam0, var uParam1)
{
	fVar0 = 85f;
	if (!is_entity_dead(iParam0))
	{
		if (func_540(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_541(uParam1);
			if (func_542(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = get_game_timer();
				}
				iVar2 = (get_game_timer() - uParam1->f_2);
				iVar3 = func_543(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_538(uParam1, 1);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_538(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_345(int iParam0, int iParam1, var uParam2)
{
	if (iParam1 == 0)
	{
		return false;
	}
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	if (is_entity_dead(iParam1))
	{
		return false;
	}
	fVar0 = 85f;
	if (func_544(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_541(uParam2);
		if (func_542(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = get_game_timer();
			}
			if (uParam2->f_2 != 0)
			{
				if (get_game_timer() - uParam2->f_2) > func_543(uParam2)
				{
					func_538(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_346(int iParam0, var uParam1)
{
	if (!get_entity_player_is_free_aiming_at(player_id(), &iVar0))
	{
		return false;
	}
	if (_0x3ee1f7a8c32f24e1(player_id(), &iVar2, 0, 0))
	{
		if (iVar2 == iVar0)
		{
			return false;
		}
	}
	if (!is_entity_a_ped(iVar0))
	{
		return false;
	}
	if (Global_1935630->f_40 != 0)
	{
		if (_get_rider_of_mount(Global_1935630->f_40, true) == iParam0)
		{
			return false;
		}
	}
	iVar1 = get_ped_index_from_entity_index(iVar0);
	if (func_534(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = get_game_timer();
		}
		else if (get_game_timer() - uParam1->f_3) > func_543(uParam1)
		{
			fVar3 = func_541(uParam1);
			if (uParam1->f_12 < fVar3)
			{
				if (has_entity_clear_los_to_entity(iParam0, Global_35, 17) && has_entity_clear_los_to_entity(iParam0, iVar1, 17))
				{
					if (_0x06087579e7aa85a9(iParam0, Global_35, -1f, fVar3, -1f, -1f) && _0x06087579e7aa85a9(iParam0, iVar1, -1f, fVar3, -1f, -1f))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

int func_347(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_545(bParam1, bParam2, bParam3);
	}
	if (Global_1572887->f_12 != -1)
	{
		if (iParam0 == Global_1225639->f_10)
		{
			if (!Global_1225639->f_11)
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

bool func_348(var uParam0, float fParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_98();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_349(var uParam0, int iParam1, var uParam2)
{
	if (!is_entity_dead(iParam1))
	{
		if (!network_is_in_session())
		{
			fVar0 = func_546(uParam2);
			if (!is_weapon_valid(Global_1935630->f_46) || Global_1935630->f_46 == -1569615261)
			{
				_0xd355e2f1bb41087e(iParam1, fVar0);
			}
			else if (is_weapon_valid(Global_1935630->f_46) && _0xea522f991e120d45(Global_1935630->f_46))
			{
				_0xd355e2f1bb41087e(iParam1, 5f);
			}
			else
			{
				_0xd355e2f1bb41087e(iParam1, fVar0);
			}
		}
		if ((!is_weapon_valid(Global_1935630->f_46) || Global_1935630->f_46 == -1569615261) || (is_weapon_valid(Global_1935630->f_46) && _0x5809dbca0a37c82b(Global_1935630->f_46)))
		{
			fVar2 = 3f;
			iVar1 = 3000;
		}
		else
		{
			fVar2 = 1f;
			iVar1 = 1000;
		}
		if (_0x9c81338b2e62ce0a(player_id(), iParam1, iVar1) && _0x285d36c5c72b0569(uParam0) <= fVar2)
		{
			if (func_357(uParam2, iParam1))
			{
				func_538(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_350(var uParam0, int iParam1, var uParam2)
{
	if (uParam2->f_12 < IntToFloat(func_547(uParam2)))
	{
		if ((is_weapon_valid(Global_1935630->f_46) && !_0x5809dbca0a37c82b(Global_1935630->f_46)) || get_current_ped_vehicle_weapon(Global_35, &uVar0))
		{
			if (func_357(uParam2, iParam1))
			{
				if (_0x285d36c5c72b0569(uParam0) <= 1f)
				{
					func_538(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_351(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vVar0 = { get_entity_coords(iParam1, false, true) };
	iVar3 = func_548(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, uParam2->f_22))
				{
					func_538(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (is_shocking_event_in_sphere(956330317, vVar0, uParam2->f_27))
				{
					func_538(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_26, &vVar4, 0, 0);
					if (func_549(iParam1, vVar0, vVar4))
					{
						func_538(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	else
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, uParam2->f_22))
				{
					func_538(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_26, &vVar7, 0, 0);
					if (func_549(iParam1, vVar0, vVar7))
					{
						func_538(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_352(int iParam0, var uParam1)
{
	vVar9 = { get_entity_coords(iParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_534(iParam0, uParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_550(&(Global_1935630->f_34[iVar0]));
			fVar1 = vdist(get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_551(&(Global_1935630->f_34[iVar0])))
			{
				if (fVar1 < 35f)
				{
					if ((decor_exist_on(&(Global_1935630->f_34[iVar0]), "HorseTeamA") && decor_exist_on(iParam0, "HorseOwnerTeamA")) || (decor_exist_on(&(Global_1935630->f_34[iVar0]), "HorseTeamB") && decor_exist_on(iParam0, "HorseOwnerTeamB")))
					{
						*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
						*vVar2[1] = { vVar9 };
						uParam1->f_10 = iParam0;
						return true;
					}
				}
			}
			if (func_552(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_553(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_554(uParam1, iParam0, fVar1, iVar0))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_353(int iParam0, var uParam1)
{
	if (!_0x1d1b448d719415ab(*iParam0))
	{
		return false;
	}
	iVar0 = _0x796eecff0c6d39be(*iParam0, 0, 0);
	switch (iVar0)
	{
		case -1695849405:
		case 2044016570:
			iVar1 = _0x822a001bcea5bd81(*iParam0, iVar0, 0, 0);
			iVar2 = _0x38497f139981c5c9(*iParam0, iVar0, 0, 0);
			vVar5 = { get_entity_coords(iVar1, false, false) };
			vVar8 = { get_entity_coords(iVar2, false, false) };
			_0x1a5c5d350068a673(*iParam0, 0);
			return true;
	}
	return false;
}

bool func_354(var uParam0, int iParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_98();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_355(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = player_ped_id();
	if (!bParam3)
	{
		if (has_entity_been_damaged_by_any_ped(iParam0) || has_entity_been_damaged_by_any_vehicle(iParam0))
		{
			if (has_entity_been_damaged_by_entity(iParam0, iVar0, 1, 1))
			{
				return 1;
			}
			iVar1 = get_players_last_vehicle();
			if (!is_entity_dead(iVar1))
			{
				if (has_entity_been_damaged_by_entity(iParam0, iVar1, 1, 1))
				{
					return 1;
				}
			}
			if (is_ped_on_mount(iVar0))
			{
				if (!is_entity_dead(get_mount(iVar0)))
				{
					if (has_entity_been_damaged_by_entity(iParam0, get_mount(iVar0), 1, 1))
					{
						return 1;
					}
				}
			}
			else if (does_entity_exist(iParam1))
			{
				if (!is_entity_dead(iParam1))
				{
					if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
					{
						return 1;
					}
				}
			}
		}
	}
	else if (!bParam2)
	{
		if (func_555(iVar0, &iVar2))
		{
			if ((is_ped_ragdoll(iParam0) || _0x947e43f544b6ab34(iParam0, player_id(), 10, 1000)) || (!bParam4 && is_entity_touching_entity(iVar2, iParam0)))
			{
				return 1;
			}
		}
	}
	if (!bParam2)
	{
		if (_0x29fce825613fefca(iParam0, 400))
		{
			return 1;
		}
	}
	if (func_556(iVar0, iParam0))
	{
		return 1;
	}
	if (_0xd0b7aeb56229d317(player_ped_id()) == iParam0)
	{
		if (_0x0e99e3bf11bb6367(player_ped_id()))
		{
			return 1;
		}
	}
	if (!is_entity_dead(iParam0))
	{
		if (is_ped_being_jacked(iParam0))
		{
			if (get_peds_jacker(iParam0) == iVar0)
			{
				return 1;
			}
		}
	}
	if (is_ped_performing_melee_action(iVar0, 8, 0))
	{
		if (get_ped_config_flag(iParam0, 9, true) || is_ped_being_stealth_killed(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_356(var uParam0, int iParam1)
{
	if (!decor_exist_on(iParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = decor_get_int(iParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (decor_set_int(iParam1, "iDamageFrame", uParam0->f_5))
		{
		}
	}
	else if (uParam0->f_5 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

bool func_357(var uParam0, int iParam1)
{
	if (func_557(uParam0))
	{
		return true;
	}
	if (_0x29fce825613fefca(iParam1, 400))
	{
		return true;
	}
	if (is_ped_dead_or_dying(iParam1, true))
	{
		return false;
	}
	if ((is_ped_performing_melee_action(Global_35, 8, 0) || get_ped_config_flag(iParam1, 9, true)) || is_ped_being_stealth_killed(iParam1))
	{
		return false;
	}
	if (is_ped_performing_melee_action(Global_35, 16, 0) || get_ped_config_flag(iParam1, 10, true))
	{
		return false;
	}
	if (_get_lassoed_entity(Global_35) != 0)
	{
		return true;
	}
	if (!is_ped_ragdoll(iParam1))
	{
		return true;
	}
	return false;
}

bool func_358(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_558(iParam0, iParam1, 1, 1) < 4f)
		{
			if (is_entity_touching_entity(iParam0, iParam1) && is_ped_ragdoll(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_359()
{
}

bool func_360(var uParam0, int iParam1)
{
	iVar0 = get_vehicle_ped_is_using(Global_35);
	if (iVar0 != 0 && !is_this_model_a_train(get_entity_model(iVar0)))
	{
		vVar1 = { get_entity_coords(iParam1, false, false) };
		if (func_559(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_98();
			return true;
		}
		else if (_0xa19447d83294e29f(iVar0, &iVar5, &iVar4))
		{
			if (iVar5 <= 0)
			{
				return false;
			}
			else if (iVar4 == iVar5)
			{
				iVar6 = 0;
				while (iVar6 < iVar4)
				{
					iVar7 = _get_ped_in_draft_seat(iVar0, iVar6);
					if (does_entity_exist(iVar7))
					{
						if (func_14(iVar7, vVar1, 1) < 3f)
						{
							if (is_entity_touching_entity(iVar7, iParam1))
							{
								uParam0->f_9 = func_98();
								return true;
							}
						}
					}
					iVar6++;
				}
			}
		}
	}
	return false;
}

bool func_361()
{
	if (Global_1935630->f_42 == 0)
	{
		return false;
	}
	if (Global_1935630->f_42 == Global_1935630->f_40)
	{
		return false;
	}
	if (Global_1935630->f_43 <= 0)
	{
		return false;
	}
	if ((func_98() - Global_1935630->f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_362(var uParam0, int iParam1)
{
	if (!does_entity_exist(uParam0->f_14))
	{
		return false;
	}
	if (!is_ped_human(iParam1))
	{
		return false;
	}
	fVar0 = func_536(uParam0);
	if (uParam0->f_12 > func_560(uParam0) && uParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_561(iParam1);
	iVar1 = func_562(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((_0x06087579e7aa85a9(iParam1, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, Global_35, 17)) && _0x7f9b9791d4cb71f6(iParam1, Global_35, 1, 0) == 1)) || ((_0x06087579e7aa85a9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, uParam0->f_14, 17)) && _0x7f9b9791d4cb71f6(iParam1, uParam0->f_14, 1, 0) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_363(int iParam0, int iParam1, var uParam2)
{
	if (uParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return func_563(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

bool func_364(int iParam0, var uParam1)
{
	if (*uParam1 & 67108864 != 0)
	{
		return true;
	}
	if (Global_1935630->f_24)
	{
		return true;
	}
	if (*uParam1 & 33554432 != 0)
	{
		if (func_564(iParam0, uParam1, 1))
		{
			return true;
		}
		if ((_0x06087579e7aa85a9(iParam0, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam0, Global_35, 17)) && _0x7f9b9791d4cb71f6(iParam0, Global_35, 1, 0) == 1)
		{
			return true;
		}
	}
	iVar0 = get_jack_target(Global_35);
	if (does_entity_exist(iVar0) && !does_entity_belong_to_this_script(iVar0, true))
	{
		if (_0x06087579e7aa85a9(iParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return true;
		}
	}
	if (!_0x1d1b448d719415ab(iParam0))
	{
		return false;
	}
	iVar1 = _0x796eecff0c6d39be(iParam0, 0, 0);
	if (iVar1 == 0)
	{
		return false;
	}
	switch (iVar1)
	{
		case -2027383723:
		case -870494873:
		case 73464052:
		case 1201762715:
			iVar2 = _0x822a001bcea5bd81(iParam0, iVar1, 0, 0);
			iVar3 = _0x38497f139981c5c9(iParam0, iVar1, 0, 0);
			if (!is_entity_a_ped(iVar2) || !is_entity_a_ped(iVar3))
			{
				_0x1a5c5d350068a673(iParam0, 0);
				return false;
			}
			iVar4 = get_ped_index_from_entity_index(iVar2);
			iVar5 = get_ped_index_from_entity_index(iVar3);
			if (iVar4 != Global_35)
			{
				_0x1a5c5d350068a673(iParam0, 0);
				return false;
			}
			if (_0x88ad6cc10d8d35b2(iVar5))
			{
				_0x1a5c5d350068a673(iParam0, 0);
				return false;
			}
			return true;
		case -1601932249:
			iVar2 = _0x822a001bcea5bd81(iParam0, iVar1, 0, 0);
			iVar3 = _0x38497f139981c5c9(iParam0, iVar1, 0, 0);
			if (!is_entity_a_ped(iVar2) || !is_entity_a_ped(iVar3))
			{
				_0x1a5c5d350068a673(iParam0, 0);
				return false;
			}
			iVar4 = get_ped_index_from_entity_index(iVar2);
			iVar5 = get_ped_index_from_entity_index(iVar3);
			if (_0x06087579e7aa85a9(iParam0, iVar4, -1f, -1f, -1f, -1f) && _0x06087579e7aa85a9(iParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (has_entity_clear_los_to_entity(iParam0, iVar4, 17) && has_entity_clear_los_to_entity(iParam0, Global_35, 17))
				{
					if (!func_565(uParam1, iParam0))
					{
						if (func_14(iVar4, Global_36, 1) < 7f)
						{
							return true;
						}
					}
				}
			}
			break;
	}
	return false;
}

bool func_365(int iParam0, var uParam1)
{
	if (!func_566(0))
	{
		return false;
	}
	if (is_ped_facing_ped(iParam0, Global_35, 90f))
	{
		if (has_entity_clear_los_to_entity(iParam0, Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

bool func_366(var uParam0, int iParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_98();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_367(int iParam0, var uParam1)
{
	return _0xe33f98bd76490abc(*iParam0, player_id(), 0);
}

int func_368(int iParam0, var uParam1)
{
	if (!is_ped_human(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_98();
	}
	else if (func_98() - uParam1->f_4) > func_567(uParam1)
	{
		return func_568(iParam0, uParam1, 0, -1082130432);
	}
	return 0;
}

bool func_369(var uParam0, int iParam1)
{
	iVar0 = get_ped_source_of_death(iParam1);
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (decor_exist_on(iParam1, "bIgnoreDamageChecking"))
	{
		return false;
	}
	iVar1 = get_ped_index_from_entity_index(iVar0);
	if (Global_35 == iVar1 || Global_1935630->f_40 == iVar1)
	{
		return true;
	}
	return false;
}

bool func_370(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

void func_371(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_512(&(uParam0->f_1), 16384);
	}
	else
	{
		func_511(&(uParam0->f_1), 16384);
	}
}

void func_372(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_512(&(uParam0->f_1), 2048);
	}
	else
	{
		func_511(&(uParam0->f_1), 2048);
	}
}

void func_373(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_512(&(uParam0->f_1), 256);
	}
	else
	{
		func_511(&(uParam0->f_1), 256);
	}
}

void func_374(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_511(uParam0, 16);
	}
	else
	{
		func_512(uParam0, 67108864);
		func_512(uParam0, 16);
	}
}

void func_375(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_512(&(uParam0->f_1), 128);
	}
	else
	{
		func_511(&(uParam0->f_1), 128);
	}
}

void func_376(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_511(uParam0, 256);
	}
	else
	{
		func_512(uParam0, 256);
	}
}

void func_377(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_511(uParam0, 268435456);
	}
	else
	{
		func_512(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_511(uParam0, 1073741824);
	}
	else
	{
		func_512(uParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_511(uParam0, 536870912);
	}
	else
	{
		func_512(uParam0, 536870912);
	}
}

void func_378(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)
{
	iVar0 = 0;
	while (iVar0 < cParam3->f_97)
	{
		if (does_entity_exist(cParam3[iVar0]))
		{
			if (!is_entity_dead(cParam3[iVar0]))
			{
				add_ped_to_conversation(&cParam0, cParam3[iVar0], &((*cParam3)[iVar0]->f_1));
			}
		}
		iVar0++;
	}
}

bool func_379(int iParam0)
{
	return func_302(iParam0, 2);
}

bool func_380(int iParam0)
{
	return func_221(iParam0) == -427144552;
}

bool func_381(int iParam0)
{
	if (func_92() != -1)
	{
		return false;
	}
	if (func_223(iParam0, 1048576))
	{
		return false;
	}
	if (is_weapon_valid(iParam0))
	{
		return func_388(iParam0, &uVar0, 1, 0, 0);
	}
	return func_252(iParam0, 1, 0);
}

void func_382(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (func_221(iParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_228(iParam0, 0);
	if (!is_weapon_valid(iVar0))
	{
		return;
	}
	if (bParam2 || !func_415(iVar0))
	{
		if (func_92() == -1)
		{
			func_229(iVar0);
		}
		if (bParam2 || (!has_ped_got_weapon(Global_35, iVar0, 0, false) && func_205(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_283(iParam0, iParam1, 0, 0, 0);
				play_sound_frontend("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_383(int iParam0, int iParam1)
{
	if (func_222(iParam0, 58855631))
	{
		func_569(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

struct<5> func_384(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_570(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_221(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_420(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_571(bParam1) };
			if (bParam2 && func_572(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_418(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_418(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_419(iParam0, &Var5, 1728382685))
				{
					Var0.f_4 = 1728382685;
				}
				else
				{
					Var0.f_4 = -649335959;
				}
			}
			else
			{
				Var0.f_4 = 1728382685;
			}
			break;
		case -1784221369:
			Var0.f_4 = 1782082944;
			break;
		case -1650247667:
			Var0.f_4 = -813824107;
			Var0 = { func_573(bParam1) };
			switch (func_226(iParam0))
			{
				case 664784405:
					Var0.f_4 = -1150938404;
					break;
				case 2020212423:
					Var0.f_4 = -1756997214;
					break;
				case 874188557:
					Var0.f_4 = -241855024;
					break;
				case -2101244071:
					Var0.f_4 = -268116367;
					break;
			}
			break;
		case -2130996531:
			if (func_574(iParam0, -1823706425))
			{
				Var0 = { func_420(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_574(iParam0, -1483207246))
			{
				Var0 = { func_420(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else if (_inventory_fits_slot_id(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
		default:
			if (_inventory_fits_slot_id(iParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (_inventory_fits_slot_id(iParam0, -833319691))
			{
				Var27.f_9 = -1591664384;
				if (!func_575(Var0, &Var27, bParam1, 0))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var27.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else
			{
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 1328661203);
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

int func_385(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_201(iParam0, 0))
	{
		return 0;
	}
	if (!func_230(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_307(bParam3), iParam0);
}

int func_386(int iParam0, bool bParam1)
{
	if (func_234(iParam0))
	{
		return get_ped_ammo_by_type(Global_35, iParam0);
	}
	return _0xe787f05dfc977bde(func_307(bParam1), iParam0, 0);
}

bool func_387()
{
	if (func_92() != -1)
	{
		return false;
	}
	if (!func_118())
	{
		return false;
	}
	if (!func_93((*Global_1835011)[1]->f_1, 1))
	{
		return true;
	}
	if ((func_93((*Global_1835011)[2]->f_1, 1) && func_93((*Global_1347702)[120]->f_15, 1)) && !func_93((*Global_1835011)[4]->f_1, 1))
	{
		return true;
	}
	if (func_93((*Global_1835011)[37]->f_1, 1) && !func_93((*Global_1835011)[39]->f_1, 1))
	{
		return true;
	}
	if (func_93((*Global_1835011)[57]->f_1, 1) && !func_93((*Global_1835011)[60]->f_1, 1))
	{
		return true;
	}
	if (func_93((*Global_1835011)[26]->f_1, 1) && !func_93((*Global_1347702)[67]->f_15, 1))
	{
		return true;
	}
	if ((func_93((*Global_1835011)[62]->f_1, 1) && func_93((*Global_1835011)[63]->f_1, 1)) && !func_93((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if (func_93((*Global_1835011)[75]->f_1, 1) && !func_93((*Global_1347702)[1]->f_15, 1))
	{
		return true;
	}
	if (func_93((*Global_1835011)[76]->f_1, 1) && !func_93((*Global_1835011)[77]->f_1, 1))
	{
		return true;
	}
	if ((func_93((*Global_1835011)[40]->f_1, 1) && func_93((*Global_1835011)[41]->f_1, 1)) && !func_93((*Global_1835011)[44]->f_1, 1))
	{
		return true;
	}
	if ((func_93((*Global_1835011)[62]->f_1, 1) && func_93((*Global_1835011)[63]->f_1, 1)) && !func_93((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if ((func_93((*Global_1835011)[65]->f_1, 1) && func_93((*Global_1835011)[66]->f_1, 1)) && !func_93((*Global_1835011)[67]->f_1, 1))
	{
		return true;
	}
	return false;
}

bool func_388(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_576(&iParam0);
	if (!func_201(iParam0, 0))
	{
		return false;
	}
	if (!func_230(0))
	{
		bParam3 = true;
	}
	if (func_380(iParam0) && _0x705be297eebdb95d(iParam0))
	{
		if (_is_weapon_one_handed(iParam0))
		{
			Var0 = { func_571(0) };
			Var4.f_9 = -1591664384;
			if (!func_418(iParam0, &Var0, 1728382685, 0))
			{
				return false;
			}
			else if (func_419(iParam0, &Var4, 1728382685))
			{
				return false;
			}
			if (func_572(iParam0, 1))
			{
				if (!func_418(iParam0, &Var0, -649335959, 0))
				{
					return false;
				}
				else if (func_419(iParam0, &Var4, -649335959))
				{
					return false;
				}
			}
		}
		else if (!func_577(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_385(iParam0, uParam1, bParam3, bParam4);
	if (iVar27 < 0)
	{
		return false;
	}
	else if (iVar27 == 0)
	{
		return true;
	}
	if (bParam3)
	{
		iVar28 = func_578(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = _0xe787f05dfc977bde(func_307(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_389(int iParam0, int iParam1)
{
	if (_item_database_fillout_tag_data(iParam0, &Var0, &iVar41, 20))
	{
		iVar42 = 0;
		while (iVar42 < iVar41)
		{
			if (Var0[iVar42]->f_1 == iParam1)
			{
				return &(Var0[iVar42]);
			}
			iVar42++;
		}
	}
	return 0;
}

int func_390(int iParam0, int iParam1)
{
	if (!func_201(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_221(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_222(iParam0, 1399091007))
	{
		func_465(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_391(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_579(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_580(&Var0, func_571(0));
	}
	if (!func_581(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_478(iVar14);
	return uVar15;
}

int func_392()
{
	return _0x62cab7db62ead434(-2076669067, 0);
}

int func_393(int iParam0)
{
	return _0xec3959e9950bf56b(iParam0);
}

void func_394(int iParam0)
{
	if (func_92() != -1)
	{
		return;
	}
	iVar0 = func_582(iParam0);
	fVar1 = func_583(iParam0);
	if ((Global_1347477->f_117 || !func_224(31)) || !func_584(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_585(iVar0) >= 7)
	{
		return;
	}
	if (iVar0 == 1)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_57));
	}
	else if (iVar0 == 0)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_55));
	}
	else if (iVar0 == 2)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_56));
	}
	fVar1 = (fVar1 * IntToFloat(Global_1347477->f_182));
	fVar1 = to_float(round(fVar1));
	func_586(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_318(_create_var_string(6, func_587(iParam0), fVar1), "itemtype_textures", func_588(iVar0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_395(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_396(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_589(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_590(iParam0))
	{
		return false;
	}
	if (func_591(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_482(iParam0, 1)) || func_592(32768))
	{
		if (!func_482(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_593())
	{
		return false;
	}
	return true;
}

void func_397(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

int func_398(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 554799588;
		case 1:
			return -1021394391;
		case 2:
			return -987306668;
		case 3:
			return -1028735103;
		case 4:
			return 515229791;
		case 5:
			return -1230863414;
		case 6:
			return 232875659;
		case 7:
			return 1423129537;
		case 8:
			return -435742319;
		case 9:
			return -1854702679;
		case 10:
			return 1265323898;
		case 11:
			return -479775696;
		default:
			break;
	}
	return 0;
}

int func_399(int iParam0, int iParam1)
{
	if (!func_594(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_int(&uVar5, &Var0);
	return uVar5;
}

char* func_400(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
{
	switch (iParam1)
	{
		case -2076669067:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_CC_COMPLETE";
			}
			else if (func_217() >= 12)
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_POSTED_OBJ", func_595(), 12);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_FOUND_OBJ", func_596(), 12);
			}
			break;
		case -440187297:
			if (iParam2 == 0)
			{
				sParam3 = _create_var_string(2, "COL_DB_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = _create_var_string(2, "COL_DB_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = _create_var_string(2, "COL_DB_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_DB_COMPLETE";
			}
			else if (func_446() >= 30)
			{
				sParam3 = _create_var_string(2, "COL_DB_POSTED_OBJ", func_597(), 30);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_DB_FOUND_OBJ", func_446(), 30);
			}
			break;
		case -1531394072:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_EX_COMPLETE";
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_EX_ITEMS_COLLECTED_OBJ", sParam4, sParam5);
			}
			break;
		case 1995362678:
			if (iParam2 == 0)
			{
				sParam3 = _create_var_string(2, "COL_LF_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = _create_var_string(2, "COL_LF_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = _create_var_string(2, "COL_LF_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_LF_COMPLETE";
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_LF_CAUGHT_OBJ", func_598(), 13);
			}
			break;
		case 2103522376:
			if (iParam2 == 0)
			{
				sParam3 = _create_var_string(2, "COL_RC_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = _create_var_string(2, "COL_RC_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = _create_var_string(2, "COL_RC_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_RC_COMPLETE";
			}
			else if (func_447() >= 10)
			{
				sParam3 = _create_var_string(2, "COL_RC_POSTED_OBJ", func_599(), 10);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_RC_FOUND_OBJ", func_447(), 10);
			}
			break;
		case 678508515:
			if (iParam2 == 3)
			{
				sParam3 = _create_var_string(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 4)
			{
				sParam3 = _create_var_string(2, "COL_TX_READ_VACATION");
			}
			else if (iParam2 == 5)
			{
				sParam3 = _create_var_string(2, "COL_TX_ON_VACATION");
			}
			else if (iParam2 == 0)
			{
				sParam3 = _create_var_string(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = _create_var_string(2, "COL_TX_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = _create_var_string(2, "COL_TX_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_RETURN_POST_OFFICE";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_TX_COMPLETE";
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_399(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_401(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -2076669067)
	{
		if (iParam1 == 38816757)
		{
			if (_uilog_is_entry_registered(3, 578982838))
			{
				_uilog_remove_entry(3, 578982838);
			}
		}
	}
	else if (iParam2 == -440187297)
	{
		if (iParam1 == -1223580455)
		{
			if (_uilog_is_entry_registered(3, 349797279))
			{
				_uilog_remove_entry(3, 349797279);
			}
		}
	}
	else if (iParam2 == 2103522376)
	{
		if (iParam1 == -170865073)
		{
			if (_uilog_is_entry_registered(3, 1974744712))
			{
				_uilog_remove_entry(3, 1974744712);
			}
		}
	}
	if (_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_remove_entry(3, iParam1);
	}
	return true;
}

bool func_402(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_add_entry_hash(3, iParam1, vParam2, get_hash_key(sParam5), get_hash_key(sParam6), 0);
	}
	return true;
}

bool func_403(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	_uilog_add_or_update_objective(3, iParam1, get_hash_key(sParam2), sParam2, false, false, false);
	_uilog_set_entry_pinned(3, iParam1, true);
	_uilog_set_entry_brief_texture(3, iParam1, get_hash_key(sParam4), get_hash_key(sParam5));
	_uilog_set_entry_icon_texture(3, iParam1, iParam6, iParam7);
	_uilog_update_entry_subheader(3, iParam1, _create_var_string(2, sParam3));
	return true;
}

bool func_404(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_600(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_252(iVar2, 1, 0) || func_602(func_601(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_408(func_600(iVar0))), func_408(func_600(iVar0)), bVar1, true, false);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_446() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_603(iVar0)), func_603(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_597() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_603(iVar0)), func_603(iVar0), bVar1, true, false);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_603(iVar0)), func_603(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_457(iParam3, func_604(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_453(iVar2) - iParam7) >= func_399(iParam3, func_605(iVar0));
				}
				else
				{
					bVar1 = func_453(iVar2) >= func_399(iParam3, func_605(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_453(iVar2) + iParam7) >= func_399(iParam3, func_605(iVar0));
			}
			else
			{
				bVar1 = func_453(iVar2) >= func_399(iParam3, func_605(iVar0));
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_606(iVar2)), func_606(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_607(_0x126cbebba46693cf(iVar0, 1995362678, 0)))
			{
				bVar1 = true;
			}
			else if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = false;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_608(_0x126cbebba46693cf(iVar0, iParam2, 0))), func_608(_0x126cbebba46693cf(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_447() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_609(iVar0)), func_609(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_599() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_609(iVar0)), func_609(iVar0), bVar1, true, false);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_609(iVar0)), func_609(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_457(iParam3, func_604(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_453(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_610(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_610(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_611(iVar2)), func_611(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_405(int iParam0, int iParam1, int iParam2, int iParam3)
{
	bVar0 = false;
	if (iParam3 == 8)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (iParam2 == -2076669067)
	{
		_uilog_add_or_update_objective(3, iParam1, get_hash_key("COL_CC_ITEMS_DELIVERED"), "COL_CC_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (iParam2 == -1531394072)
	{
		_uilog_add_or_update_objective(3, iParam1, get_hash_key("COL_EX_ITEMS_DELIVERED"), "COL_EX_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (iParam2 == 1995362678)
	{
		if (func_598() >= 13)
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
		}
		_uilog_add_or_update_objective(3, iParam1, get_hash_key("COL_LF_ITEMS_DELIVERED"), "COL_LF_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (((((((iParam3 == 7 || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 0) || iParam3 == 1) || iParam3 == 2) || iParam3 == 8)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (iParam2 == 678508515)
	{
		_uilog_add_or_update_objective(3, iParam1, get_hash_key("COL_TX_CARCASSES_MAILED"), "COL_TX_CARCASSES_MAILED", bVar0, true, false);
	}
	return true;
}

bool func_406(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_504(func_612(0)) && ((func_613(0) == 1 || func_613(0) == 8) || func_613(0) == 6))
	{
		iParam3 = 7;
	}
	if ((iParam2 == -440187297 || iParam2 == 1995362678) || iParam2 == 2103522376)
	{
		if (iParam3 == 7)
		{
			_uilog_mark_entry_availability(3, iParam1, 1, "");
		}
	}
	else if (iParam2 == 678508515)
	{
		if (iParam3 == 7)
		{
			if (bParam4)
			{
			}
			else
			{
				_uilog_mark_entry_availability(3, iParam1, 1, "");
			}
		}
	}
	return true;
}

var func_407(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	Var0 = -2;
	Var0 = iParam7;
	Var0.f_1 = sParam8;
	Var0.f_2 = sParam9;
	Var0.f_3 = iParam11;
	Var0.f_4 = iParam4;
	Var0.f_4.f_1 = iParam6;
	Var0.f_4.f_2 = sParam5;
	Var13.f_7 = 1;
	Var13 = iParam10;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = _show_advanced_notification(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

char* func_408(int iParam0)
{
	switch (iParam0)
	{
		case 554799588:
			return "COL_CC_GUN_SET";
		case -1021394391:
			return "COL_CC_ART_SET";
		case -987306668:
			return "COL_CC_LND_SET";
		case -1028735103:
			return "COL_CC_GRL_SET";
		case 515229791:
			return "COL_CC_PLT_SET";
		case -1230863414:
			return "COL_CC_ACT_SET";
		case 232875659:
			return "COL_CC_AML_SET";
		case 1423129537:
			return "COL_CC_VEH_SET";
		case -435742319:
			return "COL_CC_SPT_SET";
		case -1854702679:
			return "COL_CC_INV_SET";
		case 1265323898:
			return "COL_CC_HOR_SET";
		case -479775696:
			return "COL_CC_PAM_SET";
		default:
			break;
	}
	return "";
}

var func_409(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	Var0 = -2;
	Var0 = iParam4;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam8;
	Var13.f_7 = 1;
	Var13 = iParam7;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = _show_advanced_notification(&Var0, &Var13, iParam9, iParam10);
	return uVar21;
}

bool func_410(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_411(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_412(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	set_bit(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_413(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 11:
			func_614(1);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			break;
		case 18:
			_uitutorial_set_rpg_icon_visibility(5, 0);
			_uitutorial_set_rpg_icon_visibility(4, 0);
			func_615(1);
			break;
		case 19:
			_uitutorial_set_rpg_icon_visibility(1, 0);
			_uitutorial_set_rpg_icon_visibility(0, 0);
			func_615(2);
			break;
		case 20:
			_uitutorial_set_rpg_icon_visibility(3, 0);
			_uitutorial_set_rpg_icon_visibility(2, 0);
			func_615(3);
			break;
		case 21:
			_uitutorial_set_rpg_icon_visibility(7, 0);
			_uitutorial_set_rpg_icon_visibility(6, 0);
			break;
		case 22:
			_uitutorial_set_rpg_icon_visibility(9, 0);
			_uitutorial_set_rpg_icon_visibility(8, 0);
			break;
		case 31:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 32:
			break;
		case 33:
			func_616(1);
			break;
		case 34:
			func_617(1);
			break;
		case 35:
			func_618(1);
			break;
		case 36:
			break;
		case 37:
			func_619(0);
			break;
		case 38:
			func_620(0);
			break;
		case 39:
			func_621(0);
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 43:
			break;
		case 1:
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_level(get_player_index(), 1);
			break;
		case 2:
			if ((!&Global_1879534 && func_118()) && _is_deadeye_ability_locked(get_player_index(), 2))
			{
				func_409("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_level(get_player_index(), 2);
			func_212(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_118()) && _is_deadeye_ability_locked(get_player_index(), 3))
			{
				func_409("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_level(get_player_index(), 3);
			func_212(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_118()) && _is_deadeye_ability_locked(get_player_index(), 4))
			{
				func_409("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_level(get_player_index(), 4);
			func_212(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_118()) && _is_deadeye_ability_locked(get_player_index(), 5))
			{
				func_409("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_locked(get_player_index(), 5, false);
			_set_deadeye_ability_level(get_player_index(), 5);
			func_212(589, 0);
			break;
		case 24:
			_unlock_set_unlocked(-200143754, true);
			_unlock_set_visible(-200143754, true);
			_0x83b8d50eb9446bba(player_ped_id(), 1);
			if (func_92() == -1)
			{
				if (!func_492(99217379) || func_622(99217379) == 2110595215)
				{
					if (func_15())
					{
						iVar0 = -1515874150;
					}
					else
					{
						iVar0 = 899611344;
					}
					if (!func_252(iVar0, 1, 0))
					{
						func_276(iVar0, 1, 752097756);
					}
					func_255(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_92() == -1)
			{
				if (!func_252(1013902307, 1, 0))
				{
					func_276(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_92() == -1)
			{
				if (!func_252(1013902307, 1, 0))
				{
					func_276(1013902307, 1, 752097756);
				}
				if (!func_252(142640135, 1, 0))
				{
					func_276(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_92() == -1)
			{
				if (!func_252(786809402, 1, 0))
				{
					func_276(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_92() == -1)
			{
				if (!func_252(786809402, 1, 0))
				{
					func_276(786809402, 1, 752097756);
				}
				if (!func_252(-518019409, 1, 0))
				{
					func_276(-518019409, 1, 752097756);
				}
			}
			break;
		case 23:
			_0x5b9813ecf7633fe8(0);
			break;
		case 25:
			break;
		case 26:
			break;
		case 27:
			break;
		case 28:
			break;
		case 29:
			break;
		case 30:
			break;
		case 44:
			break;
		case 45:
			_unlock_set_unlocked(-843169622, true);
			Global_1935630->f_47 = 1;
			set_ambient_zone_list_state_persistent("AZL_Endlesss_Summer_Enable", true, true);
			set_ambient_zone_list_state_persistent("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 46:
			func_623();
			break;
		case 47:
			_0xa63fcad3a6fec6d2(get_player_index(), 1);
			break;
		case 52:
			_unlock_set_unlocked(-78935213, true);
			break;
		case 53:
			_unlock_set_unlocked(-384786155, true);
			break;
		case 54:
			_unlock_set_unlocked(296662302, true);
			break;
		case 55:
			_unlock_set_unlocked(-1871453000, true);
			break;
		case 56:
			_unlock_set_unlocked(1397349651, true);
			break;
	}
}

bool func_414(int iParam0)
{
	iVar0 = _get_weapon_unlock(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (_unlock_is_visible(iVar0))
	{
		return true;
	}
	return false;
}

bool func_415(int iParam0)
{
	iVar0 = _get_weapon_unlock(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (_unlock_is_unlocked(iVar0))
	{
		return true;
	}
	return false;
}

bool func_416(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

int func_417(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1782082944;
		case 1:
			return 1704602624;
		case 2:
			return 1214181762;
		case 3:
			return -430578371;
		case 4:
			return -730381952;
		case 5:
			return -253503777;
		case 6:
			return 1352275534;
		case 7:
			return 1666399168;
		case 8:
			return -1911121386;
		case 9:
			return 1756656691;
		case 10:
			return -1774867076;
		case 11:
			return -421952220;
		case 12:
			return -1087003323;
		case 13:
			return 1231618917;
		case 14:
			return -1183777174;
		case 15:
			return -841767082;
		case 16:
			return 1043717005;
		case 17:
			return 142663787;
		case 18:
			return 1718143051;
		case 19:
			return -6605744;
		case 20:
			return 953047564;
		case 21:
			return 769706682;
		case 22:
			return 1635590003;
		case 23:
			return -2047978619;
		case 24:
			return -586319254;
		case 25:
			return 249896112;
		case 26:
			return -1060513333;
		case 27:
			return 1317351007;
		case 28:
			return -500478573;
		case 29:
			return -806573802;
		case 30:
			return -1109949204;
		case 31:
			return -740156546;
		case 32:
			return -684532710;
		case 33:
			return 1158805436;
		case 34:
			return -559473670;
		case 35:
			return -797147251;
		case 36:
			return -382216265;
		case 37:
			return 1419177114;
		case 38:
			return 1704297235;
		case 39:
			return -1139016418;
		case 40:
			return 897705377;
		case 41:
			return 17961769;
		case 42:
			return 205582207;
		case 43:
			return 900740963;
		case 44:
			return -1369589344;
		case 45:
			return -1695823795;
		case 46:
			return -41453074;
		case 47:
			return 539767227;
		case 48:
			return 1210490314;
		case 49:
			return -399684751;
		case 50:
			return 2138893455;
		case 51:
			return -1617010487;
		case 52:
			return -832377028;
		case 53:
			return -428040245;
		case 54:
			return 1279288897;
		case 55:
			return -594897905;
		case 56:
			return -1360459240;
		case 57:
			return 1838428396;
		case 58:
			return -1467846997;
		case 59:
			return -490610263;
		case 60:
			return -1885413079;
		case 61:
			return 708884155;
		case 62:
			return -134459952;
		case 63:
			return -1912136700;
		case 64:
			return -1268031552;
		case 65:
			return 1177953227;
		case 66:
			return 2130805296;
		case 67:
			return 38093490;
		case 68:
			return -269153218;
		case 69:
			return -1995068011;
		case 70:
			return -164284834;
		case 71:
			return 1446463345;
		case 72:
			return 1501315823;
		case 73:
			return -750379482;
		case 74:
			return -929560937;
		case 75:
			return 608323241;
		case 76:
			return 1030796013;
		case 77:
			return 1915057434;
		case 78:
			return -1582276476;
		case 79:
			return 692059311;
		case 80:
			return 2062839241;
		case 81:
			return -1884531872;
		case 82:
			return -866434534;
		case 83:
			return -1252192421;
		case 84:
			return 1243288963;
		case 85:
			return -1953772189;
		case 86:
			return 754411745;
		case 87:
			return 545309006;
		case 88:
			return -1089810811;
		case 89:
			return 1957869400;
		case 90:
			return -241412332;
		case 91:
			return -1548010959;
		case 92:
			return 550150488;
		case 93:
			return 946565453;
		case 94:
			return 434443248;
		case 95:
			return -1709914938;
		case 96:
			return 366686112;
		case 97:
			return -1370063350;
		case 98:
			return 2126829550;
		case 99:
			return 226552910;
		case 100:
			return 721193431;
		case 101:
			return -315672460;
		case 102:
			return 623544501;
		case 103:
			return 259556714;
		case 104:
			return -2125361825;
		case 105:
			return 1078230356;
		case 106:
			return 1885364811;
		case 107:
			return 1630382737;
		case 108:
			return 1738245512;
		case 109:
			return 1540262216;
		case 110:
			return 1016871472;
		case 111:
			return 13829069;
		case 112:
			return 737051352;
		case 113:
			return 1734614610;
		case 114:
			return -208715295;
		case 115:
			return 1435062936;
		case 116:
			return 1483055553;
		case 117:
			return 380335002;
		case 118:
			return -1079385677;
		case 119:
			return 676610411;
		case 120:
			return 2145419552;
		case 121:
			return 657238733;
		case 122:
			return 1850579281;
		case 123:
			return -1923957384;
		case 124:
			return -1142828108;
		case 125:
			return -1400618531;
		case 126:
			return -1433857135;
		case 127:
			return 209987206;
		case 128:
			return 1686943047;
		case 129:
			return -59178517;
		case 130:
			return 2134884601;
		case 131:
			return 651707517;
		case 132:
			return -633788535;
		case 133:
			return 116394463;
		case 134:
			return -1196973875;
		case 135:
			return 801752086;
		case 136:
			return 184475332;
		case 137:
			return -1880922659;
		case 138:
			return -898138634;
		case 139:
			return -2107418444;
		case 140:
			return -679970099;
		case 141:
			return -1531392549;
		case 142:
			return 1612483376;
		case 143:
			return 463930900;
		case 144:
			return -632148238;
		case 145:
			return 55303249;
		case 146:
			return 2108322089;
		case 147:
			return -1358896714;
		case 148:
			return 74475632;
		case 149:
			return -28710953;
		case 150:
			return -1791599168;
		case 151:
			return 1605938169;
		case 152:
			return 1255242276;
		case 153:
			return 636467727;
		case 154:
			return -1567688525;
		case 155:
			return -77886679;
		case 156:
			return -1057900679;
		case 157:
			return -1960888134;
		case 158:
			return -1719717295;
		case 159:
			return -1779244911;
		case 160:
			return -670540863;
		case 161:
			return 223362311;
		case 162:
			return 1150824567;
		case 163:
			return 974471191;
		case 164:
			return 1989683968;
		case 165:
			return 254804477;
		case 166:
			return 192057609;
		case 167:
			return 1553957817;
		case 168:
			return 2099829015;
		case 169:
			return -840300007;
		case 170:
			return -1948423372;
		case 171:
			return 981083654;
		case 172:
			return 1283289876;
		case 173:
			return -606884489;
		case 174:
			return -100418572;
		case 175:
			return 663645231;
		case 176:
			return 1442217033;
		case 177:
			return 1410986244;
		case 178:
			return 847409839;
		case 179:
			return 923926911;
		case 180:
			return 109995826;
		case 181:
			return -747412737;
		case 182:
			return 1114341727;
		case 183:
			return -539456939;
		case 184:
			return 45887121;
		case 185:
			return 913271624;
		case 186:
			return -1652812715;
		case 187:
			return -1791365775;
		case 188:
			return -979299941;
		case 189:
			return 713062001;
		case 190:
			return -575045963;
		case 191:
			return 1852965262;
		case 192:
			return -1398836354;
		case 193:
			return -1829885298;
		case 194:
			return -1773850357;
		case 195:
			return -564258009;
		case 196:
			return 2016532685;
		case 197:
			return -1070563798;
		case 198:
			return -1619221343;
		case 199:
			return -345571691;
		case 200:
			return 544288390;
		case 201:
			return 159578294;
		case 202:
			return -76852849;
		case 203:
			return 1110295244;
		case 204:
			return 2104563477;
		case 205:
			return 1947827651;
		case 206:
			return -933072766;
		case 207:
			return 2104388648;
		case 208:
			return -1677140601;
		case 209:
			return -2133097881;
		case 210:
			return -826678792;
		case 211:
			return -513522325;
		case 212:
			return 1970588249;
		case 213:
			return -2080032591;
		case 214:
			return 1758847745;
		case 215:
			return 895010282;
		case 216:
			return -511891179;
		case 217:
			return -1207567168;
		case 218:
			return -1315407613;
		case 219:
			return 1786352060;
		case 220:
			return -833319691;
		case 221:
			return 1591329969;
		case 222:
			return 2123222014;
		case 223:
			return -1578397674;
		case 224:
			return 1473261684;
		case 225:
			return -241855024;
		case 226:
			return 12999093;
		case 227:
			return -6796437;
		case 228:
			return -268116367;
		case 229:
			return -636470867;
		case 230:
			return 1737668280;
		case 231:
			return 892807236;
		case 232:
			return -733247890;
		case 233:
			return 24047176;
		case 234:
			return -1561999014;
		case 235:
			return -2052774042;
		case 236:
			return -997150586;
		case 237:
			return -1189569496;
		case 238:
			return 46488141;
		case 239:
			return 1046566686;
		case 240:
			return 325139909;
		case 241:
			return -1585141069;
		case 242:
			return 802754820;
		case 243:
			return 1415981582;
		case 244:
			return -1886147520;
		case 245:
			return 654877947;
		case 246:
			return -415648720;
		case 247:
			return 1221327846;
		case 248:
			return 923162715;
		case 249:
			return 625423581;
		case 250:
			return 326668608;
		case 251:
			return 669530755;
		case 252:
			return 429759982;
		case 253:
			return -2111934838;
		case 254:
			return 1886178087;
		case 255:
			return 1587783573;
		case 256:
			return -279722001;
		case 257:
			return 1310070322;
		case 258:
			return 724026534;
		case 259:
			return 137387616;
		case 260:
			return -653439684;
		case 261:
			return 1376835592;
		case 262:
			return -1824203570;
		case 263:
			return -1654197998;
		case 264:
			return 798987653;
		case 265:
			return 976923323;
		case 266:
			return 1167442289;
		case 267:
			return 986998820;
		case 268:
			return -2119169513;
		case 269:
			return -2015960939;
		case 270:
			return 1132377945;
		case 271:
			return 739936401;
		case 272:
			return 1201880974;
		case 273:
			return 819728896;
		case 274:
			return 1746010219;
		case 275:
			return 1433393959;
		case 276:
			return -1287636759;
		case 277:
			return -706917073;
		case 278:
			return -2166805;
		case 279:
			return -1391602433;
		case 280:
			return 1782075221;
		case 281:
			return 1282544585;
		case 282:
			return 1732594027;
		case 283:
			return -1058817012;
		case 284:
			return 1090546265;
		case 285:
			return -1783120823;
		case 286:
			return -1535745896;
		case 287:
			return -2086922122;
		case 288:
			return -1675198649;
		case 289:
			return 1189497682;
		case 290:
			return -1565675519;
		case 291:
			return -268973591;
		case 292:
			return 1039159916;
		case 293:
			return 1111816631;
		case 294:
			return 405591388;
		case 295:
			return 897456793;
		case 296:
			return 104187473;
		case 297:
			return 773808542;
		case 298:
			return -1120669954;
		case 299:
			return -1389278274;
		case 300:
			return 552979403;
		case 301:
			return -1571578784;
		case 302:
			return -708312114;
		case 303:
			return 688823508;
		case 304:
			return -1622147240;
		case 305:
			return 830292162;
		case 306:
			return 226276782;
		case 307:
			return -678416628;
		case 308:
			return -1098528034;
		case 309:
			return 316207340;
		case 310:
			return -1909200748;
		case 311:
			return -939652363;
		case 312:
			return -1990194462;
		case 313:
			return -375447933;
		case 314:
			return 537014919;
		case 315:
			return 1784584921;
		case 316:
			return -140655024;
		case 317:
			return 1084182731;
		case 318:
			return -1045471300;
		case 319:
			return 1617414719;
		case 320:
			return -787761753;
		case 321:
			return -490616606;
		case 322:
			return 1491346514;
		case 323:
			return -1360128126;
		case 324:
			return -1311702610;
		case 325:
			return -904250715;
		case 326:
			return 1034665895;
		case 327:
			return -101524555;
		case 328:
			return 1419152594;
		case 329:
			return -451359317;
		case 330:
			return -1915385310;
		case 331:
			return 1315162488;
		case 332:
			return -361152079;
		case 333:
			return -2041626192;
		case 334:
			return -2077812539;
		case 335:
			return -1371514637;
		case 336:
			return 1730017037;
		case 337:
			return 892816668;
		case 338:
			return -1994943603;
		case 339:
			return 603133554;
		case 340:
			return -30160144;
		case 341:
			return -1248299493;
		case 342:
			return 727393558;
		case 343:
			return 755611221;
		case 344:
			return -170255458;
		case 345:
			return 1011151573;
		case 346:
			return 1122339631;
		case 347:
			return 454815308;
		case 348:
			return 990701735;
		case 349:
			return -246340825;
		case 350:
			return -1410671073;
		case 351:
			return 1547608292;
		case 352:
			return -714132970;
		case 353:
			return 732290690;
		case 354:
			return 971340545;
		case 355:
			return -234132662;
		case 356:
			return -2143057988;
		case 357:
			return -993947465;
		case 358:
			return -486552269;
		case 359:
			return -1156317860;
		case 360:
			return 1229625803;
		case 361:
			return -388596167;
		case 362:
			return -1204639465;
		case 363:
			return -1384685096;
		case 364:
			return -2026728113;
		case 365:
			return -1228057307;
		case 366:
			return 1835126290;
		case 367:
			return 1890833594;
		case 368:
			return -751549960;
		case 369:
			return -1682270750;
		case 370:
			return -1839865333;
		case 371:
			return -1990383629;
		case 372:
			return 1712094016;
		case 373:
			return 1532953697;
		case 374:
			return 1620318083;
		case 375:
			return -307230331;
		case 376:
			return -1034549620;
		case 377:
			return -1293064293;
		case 378:
			return -1540142553;
		case 379:
			return -1769886012;
		case 380:
			return -1983081126;
		case 381:
			return -1106117124;
		case 382:
			return -1873108338;
		case 383:
			return -2097543219;
		case 384:
			return 155413195;
		case 385:
			return -1162387149;
		case 386:
			return 1728382685;
		case 387:
			return -649335959;
		case 388:
			return -1876502240;
		case 389:
			return -2107032155;
		case 390:
			return 1570861011;
		case 391:
			return 1075981185;
		case 392:
			return 960195961;
		case 393:
			return 1150460649;
		case 394:
			return 1689424794;
		case 395:
			return 619103418;
		case 396:
			return 1355448197;
		case 397:
			return 1681762005;
		case 398:
			return 1026887814;
		case 399:
			return 354352628;
		case 400:
			return 1519366642;
		case 401:
			return -82757515;
		case 402:
			return 386306655;
		case 403:
			return 1243962119;
		case 404:
			return 756214903;
		case 405:
			return -718417579;
		case 406:
			return -1445516411;
		case 407:
			return 1232060796;
		case 408:
			return -672392892;
		case 409:
			return 1465341584;
		case 410:
			return -427758369;
		case 411:
			return -735647142;
		case 412:
			return 1535838048;
		case 413:
			return -602272282;
		case 414:
			return 2051264661;
		case 415:
			return 487172188;
		case 416:
			return 282270687;
		case 417:
			return 1607708943;
		case 418:
			return 1686264939;
		case 419:
			return 314786149;
		case 420:
			return 1402841185;
		case 421:
			return 1099170772;
		case 422:
			return 2125676786;
		case 423:
			return -363896735;
		case 424:
			return -468790222;
		case 425:
			return -1779133048;
		case 426:
			return 1732537631;
		case 427:
			return 1755095401;
		case 428:
			return 835771095;
		case 429:
			return 1963317232;
		case 430:
			return 259627919;
		case 431:
			return 1299075397;
		case 432:
			return -1509094230;
		case 433:
			return 61132362;
		case 434:
			return 1549741908;
		case 435:
			return 288484254;
		case 436:
			return -1877032947;
		case 437:
			return -1395676456;
		case 438:
			return 1136146715;
		case 439:
			return 468034421;
		case 440:
			return 1079459546;
		case 441:
			return -140369351;
		case 442:
			return 1822341990;
		case 443:
			return 1219701681;
		case 444:
			return 1601295268;
		case 445:
			return -1692460667;
		case 446:
			return 1471419228;
		case 447:
			return 907446160;
		case 448:
			return -1126482585;
		case 449:
			return 1911050315;
		case 450:
			return -1343525599;
		case 451:
			return 1261891225;
		case 452:
			return 763162704;
		case 453:
			return 1335861197;
		case 454:
			return 526744654;
		case 455:
			return -1177461517;
		case 456:
			return -241638635;
		case 457:
			return 1024262875;
		case 458:
			return 853355463;
		case 459:
			return -337288221;
		case 460:
			return 361381308;
		case 461:
			return -1264898804;
		case 462:
			return -585289073;
		case 463:
			return 1423542233;
		case 464:
			return -948489286;
		case 465:
			return 2063859257;
		case 466:
			return -1652627327;
		case 467:
			return -1959697839;
		case 468:
			return -1532267859;
		case 469:
			return -1410062763;
		case 470:
			return -901428716;
		case 471:
			return -1628873469;
		case 472:
			return 144855571;
		case 473:
			return -617589883;
		case 474:
			return -1306457086;
		case 475:
			return 1713542477;
		case 476:
			return -305542365;
		case 477:
			return 1985390213;
		case 478:
			return -2145069367;
		case 479:
			return -1674390752;
		case 480:
			return -2117214398;
		case 481:
			return 1880805647;
		case 482:
			return -62390436;
		case 483:
			return 1815288415;
		case 484:
			return 196214097;
		case 485:
			return -201958220;
		case 486:
			return 244353594;
		case 487:
			return 302954672;
		case 488:
			return -1870144662;
		case 489:
			return 257892944;
		case 490:
			return -607182722;
		case 491:
			return -13254502;
		case 492:
			return 1400281261;
		case 493:
			return 1601515402;
		case 494:
			return -940704970;
		case 495:
			return -548371721;
		case 496:
			return -1022384613;
		case 497:
			return -357406394;
		case 498:
			return 1077068189;
		case 499:
			return -782241404;
		case 500:
			return 1669853467;
		case 501:
			return 1592019450;
		case 502:
			return 635273153;
		case 503:
			return -1559225678;
		case 504:
			return -266425508;
		case 505:
			return 1117400455;
		case 506:
			return 454332195;
		case 507:
			return -1328061889;
		case 508:
			return 561650932;
		case 509:
			return 256105670;
		case 510:
			return 1976779618;
		case 511:
			return -269095126;
		case 512:
			return 2145617267;
		case 513:
			return 1150213537;
		case 514:
			return 1598825281;
		case 515:
			return -712527121;
		case 516:
			return 1308553072;
		case 517:
			return 852866398;
		case 518:
			return -1794417972;
		case 519:
			return 293062146;
		case 520:
			return 95360094;
		case 521:
			return 807631773;
		case 522:
			return 1603958275;
		case 523:
			return 860052020;
		case 524:
			return -1885979781;
		case 525:
			return 746147970;
		case 526:
			return 666663006;
		case 527:
			return -2096186453;
		case 528:
			return 859409444;
		case 529:
			return -671427187;
		case 530:
			return 100192478;
		case 531:
			return 307812616;
		case 532:
			return 1670843243;
		case 533:
			return 899615863;
		case 534:
			return -298901850;
		case 535:
			return 1379186917;
		case 536:
			return -817206030;
		case 537:
			return -1150323212;
		case 538:
			return -247466821;
		case 539:
			return 427124242;
		case 540:
			return 855418120;
		case 541:
			return -777015093;
		case 542:
			return -722462870;
		case 543:
			return -937454324;
		case 544:
			return -339438116;
		case 545:
			return 2135639035;
		case 546:
			return 1254273765;
		case 547:
			return -792172668;
		case 548:
			return 1905987493;
		case 549:
			return 495693044;
		case 550:
			return -1693422950;
		case 551:
			return -205873076;
		case 552:
			return -2143114654;
		case 553:
			return -1420574021;
		case 554:
			return -1959250381;
		case 555:
			return -1088328663;
		case 556:
			return 513602003;
		case 557:
			return 359221401;
		case 558:
			return 1005272;
		case 559:
			return 1583044470;
		case 560:
			return 348853959;
		case 561:
			return 1045621973;
		case 562:
			return 1084576580;
		case 563:
			return 1651573695;
		case 564:
			return 1463321587;
		case 565:
			return -997505963;
		case 566:
			return -1649851713;
		case 567:
			return -386012962;
		case 568:
			return 1386101789;
		case 569:
			return 1227915917;
		case 570:
			return -218846335;
		case 571:
			return -352578118;
		case 572:
			return 1426626782;
		case 573:
			return -714081520;
		case 574:
			return 74547781;
		case 575:
			return 1271463052;
		case 576:
			return 1983140194;
		case 577:
			return 677262775;
		case 578:
			return -832337898;
		case 579:
			return -319249747;
		case 580:
			return -16955722;
		case 581:
			return -1535425646;
		case 582:
			return -1063641743;
		case 583:
			return -1041133401;
		case 584:
			return 1380479304;
		case 585:
			return 600890828;
		case 586:
			return 733333190;
		case 587:
			return 1843035435;
		case 588:
			return -304127320;
		case 589:
			return 122470371;
		case 590:
			return 0;
		case 591:
			return -1591664384;
		case 592:
			return -673000374;
		case 593:
			return -1150938404;
		case 594:
			return -1756997214;
		case 595:
			return -813824107;
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

bool func_418(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_578(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_419(int iParam0, var uParam1, int iParam2)
{
	if (func_624(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_420(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_201(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_307(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_421(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_625(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_575(*uParam1, &Var0, bParam6, 0))
	{
		return false;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!func_230(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_307(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_422(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_626(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

void func_423(int iParam0)
{
	if (!is_weapon_valid(iParam0))
	{
		return;
	}
	if (!does_entity_exist(Global_35) || Global_1935630->f_12)
	{
		return;
	}
	if (_is_weapon_bow(iParam0))
	{
		return;
	}
	sVar0 = "player_newWeaponType";
	sVar1 = "player_newWeaponTime";
	if (_is_weapon_pistol(iParam0))
	{
		sVar0 = "player_newPistolWeaponType";
		sVar1 = "player_newPistolWeaponTime";
	}
	else if (_is_weapon_revolver(iParam0))
	{
		sVar0 = "player_newRevolverWeaponType";
		sVar1 = "player_newRevolverWeaponTime";
	}
	else if (_is_weapon_rifle(iParam0))
	{
		sVar0 = "player_newRifleWeaponType";
		sVar1 = "player_newRifleWeaponTime";
	}
	else if (_is_weapon_shotgun(iParam0))
	{
		sVar0 = "player_newShotgunWeaponType";
		sVar1 = "player_newShotgunWeaponTime";
	}
	decor_set_int(Global_35, sVar0, iParam0);
	iVar2 = func_127();
	func_627(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	decor_set_int(Global_35, sVar1, iVar2);
}

int func_424(int iParam0)
{
	if (func_628(iParam0))
	{
		if (get_ped_ammo_by_type(Global_35, 954660191) <= 0)
		{
			iVar0 = 10;
		}
		else
		{
			iVar0 = 0;
		}
	}
	else if (_0x705be297eebdb95d(iParam0))
	{
		if (_is_weapon_sniper(iParam0))
		{
			iVar0 = 12;
		}
		else
		{
			iVar0 = _get_weapon_clip_size(iParam0) * 4;
		}
		iVar1 = get_ped_ammo_by_type(Global_35, _get_ammo_type_for_weapon(iParam0));
		if (iVar1 >= iVar0)
		{
			iVar0 = 0;
		}
		else if (iVar1 > 0)
		{
			iVar0 = (iVar0 - iVar1);
		}
	}
	return iVar0;
}

bool func_425(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_426(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_427(int iParam0)
{
	iVar0 = _get_weapon_type_from_ammo_type(iParam0);
	if (_0x705be297eebdb95d(iVar0))
	{
		if (_is_weapon_two_handed(iVar0))
		{
			if (!func_224(50))
			{
				if (!func_224(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (_is_weapon_one_handed(iVar0))
		{
			if (!func_224(51))
			{
				if (!func_224(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_428()
{
	return _unlock_is_unlocked(-121456797);
}

bool func_429(int iParam0, int iParam1, var uParam2)
{
	if (!func_201(iParam1, 0))
	{
		return false;
	}
	if (func_221(iParam1) != -1037537535)
	{
		return false;
	}
	bVar1 = func_92() != -1;
	iVar2 = _get_metaped_type(iParam0);
	if (func_226(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_629(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_222(iParam1, 866047851))
	{
		iVar5 = func_467(iVar4, 1);
		if (func_630(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5] != iVar8)
		{
			*uParam2 = -265166256;
			return false;
		}
		bVar7 = true;
	}
	switch (iVar4)
	{
		case 1742327865:
			if (_get_ped_component_category(iVar8, iVar2, bVar1) == 2056714954 && _is_metaped_using_component(iParam0, -1455751347))
			{
				*uParam2 = 111371848;
				return false;
			}
			iVar5 = 10;
			iVar3 = func_226(&(Global_1946804->f_1497.f_1[iVar5]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745;
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5] != &Global_1946804->f_57[iVar5] && func_222(iParam1, -1638171711))
			{
				*uParam2 = 187275271;
				return false;
			}
			break;
		case 1900541263:
			iVar5 = 36;
			if (&Global_1946804->f_1497.f_1[iVar5] == &Global_1946804->f_57[iVar5])
			{
				*uParam2 = 2143522536;
				return false;
			}
			if (_is_metaped_using_component(iParam0, -1968556728))
			{
				*uParam2 = -849690042;
				return false;
			}
			break;
		case -1505978566:
			if (func_631(1868067663, &uVar0))
			{
				*uParam2 = 939463734;
				return false;
			}
		case -1130865351:
		case -426430150:
		case 1788623170:
			if (!bVar7)
			{
			}
			else
			{
				iVar11 = _get_num_components_in_ped(iParam0);
				iVar10 = func_632(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_632(&(Global_1946804->f_1497.f_1[iVar5]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763;
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = func_226(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != &Global_1946804->f_57[iVar6] && func_222(&(Global_1946804->f_1497.f_1[iVar5]), -1638171711))
				{
					*uParam2 = -357399012;
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != &Global_1946804->f_57[iVar6] && func_633(&(Global_1946804->f_1497.f_1[iVar5])))
					{
						*uParam2 = -357399012;
						return false;
					}
					if (&Global_1946804->f_1497.f_1[iVar5] == &Global_1946804->f_57[iVar5])
					{
						*uParam2 = 2143522536;
						return false;
					}
				}
			}
			*uParam2 = 0;
			return true;
			default:
				break;
	}
}

void func_430()
{
	_0xfe7c9cf376d23342(player_id(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_431()
{
	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	set_player_health_recharge_multiplier(player_id(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	_0x08e22898a6af4905(player_id(), (1f - fVar0));
	_0xfeca17cf3343694b(player_id(), (1f - fVar0));
	_0xbbadfb5e5e5766fb(player_id(), (1f - fVar1));
}

int func_432()
{
	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_252(func_634(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_433(int iParam0)
{
	switch (iParam0)
	{
		case -1217729597:
		case 363594903:
		case 425319238:
			return -62615415;
		case -1540119664:
		case 446659922:
		case 2100194981:
			return -832719552;
		case -1018798851:
		case -757567246:
		case -390982951:
			return -184823984;
		case -2054602073:
		case -585121677:
		case -378441099:
			return -1941112926;
		case 1566949660:
			return -121629511;
	}
	return 0;
}

bool func_434(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -62615415:
			if (iParam1 == 425319238)
			{
				iVar0 = 363594903;
				iVar1 = -1217729597;
			}
			else if (iParam1 == 363594903)
			{
				iVar0 = 425319238;
				iVar1 = -1217729597;
			}
			else
			{
				iVar0 = 425319238;
				iVar1 = 363594903;
			}
			break;
		case -832719552:
			if (iParam1 == -1540119664)
			{
				iVar0 = 2100194981;
				iVar1 = 446659922;
			}
			else if (iParam1 == 2100194981)
			{
				iVar0 = -1540119664;
				iVar1 = 446659922;
			}
			else
			{
				iVar0 = -1540119664;
				iVar1 = 2100194981;
			}
			break;
		case -184823984:
			if (iParam1 == -390982951)
			{
				iVar0 = -1018798851;
				iVar1 = -757567246;
			}
			else if (iParam1 == -1018798851)
			{
				iVar0 = -390982951;
				iVar1 = -757567246;
			}
			else
			{
				iVar0 = -390982951;
				iVar1 = -1018798851;
			}
			break;
		case -1941112926:
			if (iParam1 == -2054602073)
			{
				iVar0 = -378441099;
				iVar1 = -585121677;
			}
			else if (iParam1 == -378441099)
			{
				iVar0 = -2054602073;
				iVar1 = -585121677;
			}
			else
			{
				iVar0 = -2054602073;
				iVar1 = -378441099;
			}
			break;
	}
	if (func_252(iVar0, 1, 0) && func_252(iVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_435(int iParam0)
{
	switch (iParam0)
	{
		case 968830139:
			return -224110471;
		case -649219937:
			return 1289585739;
		case -858567048:
			return -269048282;
		case -718162726:
			return 1441506783;
		case -1284282080:
			return 780305678;
		case -725003445:
			return 1811977508;
		case -1445630104:
			return -935153695;
		case 580970876:
			return 1299744282;
		case 967601061:
			return 1631240196;
		case 1946030891:
			return 517396587;
		case -1511404982:
			return 1620353486;
		case -944465290:
			return 1816443627;
		case -1701098855:
			return -127011478;
		default:
			break;
	}
	return 0;
}

bool func_436(int iParam0, int iParam1)
{
	iVar0 = func_635(iParam0);
	if (iVar0 != -15)
	{
		func_627(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_636(iVar0, 1);
	}
	return false;
}

int func_437(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_252(1811977508, 1, 0))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	Var1.f_1 = 10;
	Var1.f_12 = 10;
	_0x48e4d50f87a96aa5(Global_35, 1, 1, iParam0, &Var1, 0);
	iVar24 = 0;
	while (iVar24 < Var1)
	{
		if (&Var1.f_1[iVar24] == 2084597891)
		{
			return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
		}
		else
		{
			iVar25 = &Var1.f_1[iVar24];
			if (func_201(iVar25, 0) && func_222(iVar25, -1921346699))
			{
				return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_438(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_318(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_439(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_637())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_318(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_638(iVar0);
			func_639(iVar0, 0, 0);
		}
		func_318(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		_money_increment_cash_balance(iVar1, iParam4);
		func_194(func_193(1644987397), iVar1);
	}
}

void func_440(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_441(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_442(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_443(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

int func_444(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 1:
			iVar9 = 281887510;
			iVar10 = -164081697;
			iVar11 = -1161319399;
			iVar12 = 728781265;
			break;
		case 2:
			iVar9 = -222563712;
			iVar10 = 1794857344;
			iVar11 = 1952409553;
			break;
		case 4:
			iVar9 = 2116770557;
			iVar10 = -651064726;
			iVar11 = -404270094;
			iVar12 = 2093126853;
			break;
		case 8:
			iVar9 = 2085530337;
			iVar10 = -150591160;
			iVar11 = -323969289;
			iVar12 = 1504361882;
			break;
		case 16:
			iVar9 = -1521783510;
			iVar10 = 1714875242;
			iVar11 = 1019229063;
			iVar12 = 927763737;
			break;
	}
	iVar1 = func_453(iVar9);
	iVar2 = func_453(iVar10);
	iVar3 = func_453(iVar11);
	iVar5 = func_454(iVar9);
	iVar6 = func_454(iVar10);
	iVar7 = func_454(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_453(iVar12);
		iVar8 = func_454(iVar12);
	}
	if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam0 != 2)
	{
		if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

void func_445(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_446()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_640(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_447()
{
	return _0x5461c821d00fe15a(2103522376, 0);
}

bool func_448(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
{
	switch (iParam0)
	{
		case -949689219:
			if (iParam1 == -1866642239)
			{
				iVar0 = 444160793;
			}
			else if (iParam1 == 444160793)
			{
				iVar0 = -1866642239;
			}
			break;
		case -1248968496:
			if (iParam1 == -1969404854)
			{
				iVar0 = 1761263432;
				iVar1 = -843795569;
			}
			else if (iParam1 == 1761263432)
			{
				iVar0 = -1969404854;
				iVar1 = -843795569;
			}
			else if (iParam1 == -843795569)
			{
				iVar0 = -1969404854;
				iVar1 = 1761263432;
			}
			break;
		case 1706369307:
			if (iParam1 == -832850511)
			{
				iVar0 = -935543049;
				iVar1 = -1464585113;
				iVar2 = -1290897778;
			}
			else if (iParam1 == -935543049)
			{
				iVar0 = -832850511;
				iVar1 = -1464585113;
				iVar2 = -1290897778;
			}
			else if (iParam1 == -1464585113)
			{
				iVar0 = -832850511;
				iVar1 = -935543049;
				iVar2 = -1290897778;
			}
			else if (iParam1 == -1290897778)
			{
				iVar0 = -832850511;
				iVar1 = -935543049;
				iVar2 = -1464585113;
			}
			break;
		case 1520110311:
			if (iParam1 == -100913452)
			{
				iVar0 = 313332607;
				iVar1 = -124539232;
				iVar2 = 102446365;
				iVar3 = -1882344824;
			}
			else if (iParam1 == 313332607)
			{
				iVar0 = -100913452;
				iVar1 = -124539232;
				iVar2 = 102446365;
				iVar3 = -1882344824;
			}
			else if (iParam1 == -124539232)
			{
				iVar0 = -100913452;
				iVar1 = 313332607;
				iVar2 = 102446365;
				iVar3 = -1882344824;
			}
			else if (iParam1 == 102446365)
			{
				iVar0 = -100913452;
				iVar1 = 313332607;
				iVar2 = -124539232;
				iVar3 = -1882344824;
			}
			else if (iParam1 == -1882344824)
			{
				iVar0 = -100913452;
				iVar1 = 313332607;
				iVar2 = -124539232;
				iVar3 = 102446365;
			}
			break;
		case -1992824800:
			if (iParam1 == 905173572)
			{
				iVar0 = 1432949803;
				iVar1 = -983831788;
				iVar2 = 59384454;
				iVar3 = 924882045;
			}
			else if (iParam1 == 1432949803)
			{
				iVar0 = 905173572;
				iVar1 = -983831788;
				iVar2 = 59384454;
				iVar3 = 924882045;
			}
			else if (iParam1 == -983831788)
			{
				iVar0 = 905173572;
				iVar1 = 1432949803;
				iVar2 = 59384454;
				iVar3 = 924882045;
			}
			else if (iParam1 == 59384454)
			{
				iVar0 = 905173572;
				iVar1 = 1432949803;
				iVar2 = -983831788;
				iVar3 = 924882045;
			}
			else if (iParam1 == 924882045)
			{
				iVar0 = 905173572;
				iVar1 = 1432949803;
				iVar2 = -983831788;
				iVar3 = 59384454;
			}
			break;
	}
	if (iParam0 == -949689219)
	{
		if (bParam3)
		{
			if (func_610(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_610(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_610(iVar0))
		{
			*sParam2++;
		}
		if (func_610(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_610(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_610(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_610(iVar0))
		{
			*sParam2++;
		}
		if (func_610(iVar1))
		{
			*sParam2++;
		}
		if (func_610(iVar0) && func_610(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_610(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_610(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_610(iVar0))
		{
			*sParam2++;
		}
		if (func_610(iVar1))
		{
			*sParam2++;
		}
		if (func_610(iVar2))
		{
			*sParam2++;
		}
		if ((func_610(iVar0) && func_610(iVar1)) && func_610(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_610(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_610(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_610(iVar0))
		{
			*sParam2++;
		}
		if (func_610(iVar1))
		{
			*sParam2++;
		}
		if (func_610(iVar2))
		{
			*sParam2++;
		}
		if (func_610(iVar3))
		{
			*sParam2++;
		}
		if (((func_610(iVar0) && func_610(iVar1)) && func_610(iVar2)) && func_610(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_449(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_641(1497516462);
			func_642(2016141805);
			func_642(1010885152);
			func_642(-502324015);
			break;
		case 2016141805:
			func_642(1497516462);
			func_641(2016141805);
			func_642(1010885152);
			func_642(-502324015);
			break;
		case 1010885152:
			func_642(1497516462);
			func_642(2016141805);
			func_641(1010885152);
			func_642(-502324015);
			break;
		case -502324015:
			func_642(1497516462);
			func_642(2016141805);
			func_642(1010885152);
			func_641(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_642(-538889627);
			func_642(-538880323);
			func_642(-1056767524);
			func_641(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_643();
			func_641(iParam0);
			break;
		case -639037538:
		case -618620429:
		case -491981251:
		case 168171957:
		case 227918160:
		case 588987611:
		case 704802028:
		case 1193080109:
		case 1649996811:
		case 2008888900:
			func_644();
			func_641(iParam0);
			break;
		case 2019386373:
			func_642(-664252410);
			func_642(2109952320);
			func_641(2019386373);
			break;
		case -664252410:
			func_642(2019386373);
			func_642(2109952320);
			func_641(-664252410);
			break;
		case 2109952320:
			func_642(2019386373);
			func_642(-664252410);
			func_641(2109952320);
			break;
		case -1674179981:
			func_642(-1835851517);
			func_642(-1838352012);
			func_641(-1674179981);
			break;
		case -1835851517:
			func_642(-1674179981);
			func_642(-1838352012);
			func_641(-1835851517);
			break;
		case -1838352012:
			func_642(-1674179981);
			func_642(-1835851517);
			func_641(-1838352012);
			break;
		case -1717960576:
			func_642(210001842);
			func_641(-1717960576);
			break;
		case 210001842:
			func_642(-1717960576);
			func_641(210001842);
			break;
		case -150493654:
			func_642(-1271608261);
			func_642(1846061697);
			func_642(-1145519186);
			func_641(-150493654);
			break;
		case -1271608261:
			func_642(-150493654);
			func_642(1846061697);
			func_642(-1145519186);
			func_641(-1271608261);
			break;
		case 1846061697:
			func_642(-150493654);
			func_642(-1271608261);
			func_642(-1145519186);
			func_641(1846061697);
			break;
		case -1145519186:
			func_642(-150493654);
			func_642(-1271608261);
			func_642(1846061697);
			func_641(-1145519186);
			break;
		case 1766284049:
			func_642(280705402);
			func_642(1926308480);
			func_641(1766284049);
			break;
		case 280705402:
			func_642(1766284049);
			func_642(1926308480);
			func_641(280705402);
			break;
		case 1926308480:
			func_642(1766284049);
			func_642(280705402);
			func_641(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_642(439465264);
				func_641(1609506757);
			}
			else
			{
				func_642(1609506757);
				func_642(439465264);
			}
			break;
		case 439465264:
			if (func_135(1609506757))
			{
				if (bParam1)
				{
					func_641(439465264);
				}
				else
				{
					func_642(439465264);
				}
			}
			break;
		case 1822001510:
			func_642(-1612662716);
			func_641(1822001510);
			break;
		case -1612662716:
			func_642(1822001510);
			func_641(-1612662716);
			break;
		case 1306158345:
			func_642(1952610440);
			func_642(-223469678);
			func_642(-404698347);
			func_642(1517904467);
			func_641(1306158345);
			break;
		case 1952610440:
			func_642(1306158345);
			func_642(-223469678);
			func_642(-404698347);
			func_642(1517904467);
			func_641(1952610440);
			break;
		case -223469678:
			func_642(1306158345);
			func_642(1952610440);
			func_642(-404698347);
			func_642(1517904467);
			func_641(-223469678);
			break;
		case -404698347:
			func_642(1306158345);
			func_642(1952610440);
			func_642(-223469678);
			func_642(1517904467);
			func_641(-404698347);
			break;
		case 1517904467:
			func_642(1306158345);
			func_642(1952610440);
			func_642(-223469678);
			func_642(-404698347);
			func_641(1517904467);
			break;
		case 1376646519:
			func_642(931649776);
			func_642(-434590080);
			func_642(1743048395);
			func_642(449774763);
			func_641(1376646519);
			break;
		case 931649776:
			func_642(1376646519);
			func_642(-434590080);
			func_642(1743048395);
			func_642(449774763);
			func_641(931649776);
			break;
		case -434590080:
			func_642(1376646519);
			func_642(931649776);
			func_642(1743048395);
			func_642(449774763);
			func_641(-434590080);
			break;
		case 1743048395:
			func_642(1376646519);
			func_642(931649776);
			func_642(-434590080);
			func_642(449774763);
			func_641(1743048395);
			break;
		case 449774763:
			func_642(1376646519);
			func_642(931649776);
			func_642(-434590080);
			func_642(1743048395);
			func_641(449774763);
			break;
		case -1414537028:
			func_642(38162571);
			func_642(1350391819);
			func_642(54073871);
			func_641(-1414537028);
			break;
		case 38162571:
			func_642(-1414537028);
			func_642(1350391819);
			func_642(54073871);
			func_641(38162571);
			break;
		case 1350391819:
			func_642(-1414537028);
			func_642(38162571);
			func_642(54073871);
			func_641(1350391819);
			break;
		case 54073871:
			func_642(-1414537028);
			func_642(38162571);
			func_642(1350391819);
			func_641(54073871);
			break;
		case 198200492:
			func_641(198200492);
			func_642(-1124061431);
			func_642(52706132);
			func_642(-259123672);
			break;
		case -1124061431:
			func_642(198200492);
			func_641(-1124061431);
			func_642(52706132);
			func_642(-259123672);
			break;
		case 52706132:
			func_642(198200492);
			func_642(-1124061431);
			func_641(52706132);
			func_642(-259123672);
			break;
		case -259123672:
			func_642(198200492);
			func_642(-1124061431);
			func_642(52706132);
			func_641(-259123672);
			break;
		case -919512195:
			func_641(-919512195);
			func_642(-1925798111);
			func_642(420709909);
			func_642(1703426636);
			break;
		case -1925798111:
			func_641(-1925798111);
			func_642(-919512195);
			func_642(420709909);
			func_642(1703426636);
			break;
		case 420709909:
			func_641(420709909);
			func_642(-919512195);
			func_642(-1925798111);
			func_642(1703426636);
			break;
		case 1703426636:
			func_641(1703426636);
			func_642(-919512195);
			func_642(-1925798111);
			func_642(420709909);
			break;
		case -1223121209:
			func_641(-1223121209);
			func_642(630808005);
			break;
		case 630808005:
			func_641(630808005);
			func_642(-1223121209);
			break;
		case 1453909576:
			func_641(1453909576);
			func_642(1643531967);
			break;
		case 1643531967:
			func_641(1643531967);
			func_642(1453909576);
			break;
		case 0:
			func_641(0);
			func_642(473295046);
			func_642(-1738165526);
			break;
		case 473295046:
			func_641(473295046);
			func_642(0);
			func_642(-1738165526);
			break;
		case -1738165526:
			func_641(-1738165526);
			func_642(0);
			func_642(473295046);
			break;
		case 932909855:
			func_641(932909855);
			func_642(2051822093);
			break;
		case 2051822093:
			func_641(2051822093);
			func_642(932909855);
			break;
		case 405586984:
			func_641(405586984);
			func_642(1509509592);
			func_642(-959357075);
			func_642(-1311865656);
			break;
		case 1509509592:
			func_641(1509509592);
			func_642(405586984);
			func_642(-959357075);
			func_642(-1311865656);
			break;
		case -959357075:
			func_641(-959357075);
			func_642(1509509592);
			func_642(405586984);
			func_642(-1311865656);
			break;
		case -1311865656:
			func_641(-1311865656);
			func_642(1509509592);
			func_642(-959357075);
			func_642(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_641(-524145696);
			}
			else
			{
				func_642(-524145696);
			}
			func_642(1626481264);
			func_642(282809459);
			break;
		case 282809459:
			func_641(282809459);
			func_642(1626481264);
			func_642(-524145696);
			break;
		case 1626481264:
			func_641(1626481264);
			func_642(-524145696);
			func_642(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_641(885203519);
			}
			else
			{
				func_642(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_641(-1080627546);
			}
			else
			{
				func_642(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_135(iParam0))
				{
					func_641(iParam0);
				}
			}
			else if (func_135(iParam0))
			{
				func_642(iParam0);
			}
			break;
	}
}

void func_450(int iParam0)
{
	if (!func_645(iParam0))
	{
		func_647(func_646(iParam0));
	}
}

int func_451()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_645(_0x126cbebba46693cf(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_452(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	switch (iParam2)
	{
		case 1:
			iVar9 = 281887510;
			iVar10 = -164081697;
			iVar11 = -1161319399;
			iVar12 = 728781265;
			break;
		case 2:
			iVar9 = -222563712;
			iVar10 = 1794857344;
			iVar11 = 1952409553;
			break;
		case 4:
			iVar9 = 2116770557;
			iVar10 = -651064726;
			iVar11 = -404270094;
			iVar12 = 2093126853;
			break;
		case 8:
			iVar9 = 2085530337;
			iVar10 = -150591160;
			iVar11 = -323969289;
			iVar12 = 1504361882;
			break;
		case 16:
			iVar9 = -1521783510;
			iVar10 = 1714875242;
			iVar11 = 1019229063;
			iVar12 = 927763737;
			break;
	}
	iVar1 = func_453(iVar9);
	iVar2 = func_453(iVar10);
	iVar3 = func_453(iVar11);
	iVar5 = func_454(iVar9);
	iVar6 = func_454(iVar10);
	iVar7 = func_454(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_453(iVar12);
		iVar8 = func_454(iVar12);
	}
	if (iParam0 == iVar9)
	{
		if ((iVar1 + iParam1) >= iVar5)
		{
			iVar0 = (iVar0 + iVar5);
		}
		else
		{
			iVar0 = (iVar0 + (iVar1 + iParam1));
		}
	}
	else if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iParam0 == iVar10)
	{
		if ((iVar2 + iParam1) >= iVar6)
		{
			iVar0 = (iVar0 + iVar6);
		}
		else
		{
			iVar0 = (iVar0 + (iVar2 + iParam1));
		}
	}
	else if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iParam0 == iVar11)
	{
		if ((iVar3 + iParam1) >= iVar7)
		{
			iVar0 = (iVar0 + iVar7);
		}
		else
		{
			iVar0 = (iVar0 + (iVar3 + iParam1));
		}
	}
	else if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam2 != 2)
	{
		if (iParam0 == iVar12)
		{
			if ((iVar4 + iParam1) >= iVar8)
			{
				iVar0 = (iVar0 + iVar8);
			}
			else
			{
				iVar0 = (iVar0 + (iVar4 + iParam1));
			}
		}
		else if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

int func_453(int iParam0)
{
	if (func_252(iParam0, 1, 0))
	{
		iVar0 = func_205(iParam0, 0, 0);
	}
	return iVar0;
}

int func_454(int iParam0)
{
	switch (iParam0)
	{
		case 281887510:
			return 5;
		case -164081697:
			return 5;
		case -1161319399:
			return 5;
		case 728781265:
			return 15;
		case -222563712:
			return 20;
		case 1794857344:
			return 7;
		case 1952409553:
			return 10;
		case 2116770557:
			return 25;
		case -651064726:
			return 3;
		case -404270094:
			return 7;
		case 2093126853:
			return 5;
		case 2085530337:
			return 30;
		case -150591160:
			return 5;
		case -323969289:
			return 10;
		case 1504361882:
			return 5;
		case -1521783510:
			return 5;
		case 1714875242:
			return 5;
		case 1019229063:
			return 5;
		case 927763737:
			return 10;
		default:
			break;
	}
	return 0;
}

int func_455(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0);
}

void func_456(int iParam0, int iParam1)
{
	_0x3ea62e56f386c997(iParam0, iParam1);
}

int func_457(int iParam0, int iParam1)
{
	if (!func_594(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_hash(&uVar5, &Var0);
	return uVar5;
}

void func_458(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_457(iParam1, 5) || iParam0 == func_457(iParam1, 6)) || iParam0 == func_457(iParam1, 7)) || iParam0 == func_457(iParam1, 8)) || iParam0 == func_457(iParam1, 9))
	{
		func_448(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_218(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_220(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_459(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if ((((iParam0 == func_457(iParam1, 5) || iParam0 == func_457(iParam1, 6)) || iParam0 == func_457(iParam1, 7)) || iParam0 == func_457(iParam1, 8)) || iParam0 == func_457(iParam1, 9))
	{
		if (func_448(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_218(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_220(51, 0, 0, iVar0, func_399(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_218(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_220(51, 0, 0, iVar0, func_399(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_460()
{
	if (func_130((*Global_1347702)[37]->f_15) && Global_1392388->f_7)
	{
		return true;
	}
	return false;
}

bool func_461(int iParam0, int iParam1)
{
	if (!func_201(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_390(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_476("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_477(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_416(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_478(iVar1);
				return true;
			}
			iVar3++;
		}
		func_478(iVar1);
	}
	return false;
}

void func_462(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
}

void func_463(int iParam0)
{
	if (!func_648(iParam0))
	{
		_0x3ea62e56f386c997(iParam0, 1);
	}
}

void func_464(int iParam0)
{
	_0x398fab9c96a81924(iParam0, 1);
}

void func_465(int iParam0, int iParam1, var uParam2)
{
	*iParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case 1234009870:
			*iParam1 = 1802325493;
			*uParam2 = 1681219929;
			break;
		case -1202134084:
			*iParam1 = -864693164;
			*uParam2 = 1681219929;
			break;
		case 1297050066:
			*iParam1 = -603289736;
			*uParam2 = 1232099469;
			break;
		case -1780177928:
			*iParam1 = -1803237008;
			*uParam2 = -2084181920;
			break;
		case -1467836497:
			*iParam1 = -1175521284;
			*uParam2 = 1950175060;
			break;
		case 1723805622:
			*iParam1 = -1559549888;
			*uParam2 = 1950175060;
			break;
		case -153287664:
			*iParam1 = -1650796693;
			*uParam2 = 836939099;
			break;
		case 1845082736:
			*iParam1 = -1521597660;
			*uParam2 = -1411815376;
			break;
		case 406755377:
			*iParam1 = -1288829256;
			*uParam2 = 218444191;
			break;
		case 1469029564:
			*iParam1 = 1393841762;
			*uParam2 = 218444191;
			break;
		case 45760211:
			*iParam1 = -851229814;
			*uParam2 = 1654725195;
			break;
		case -276295943:
			*iParam1 = 914704115;
			*uParam2 = 1858824185;
			break;
		case -2029793397:
			*iParam1 = -219896679;
			*uParam2 = -1330115686;
			break;
		case 2120467495:
			*iParam1 = 516838334;
			*uParam2 = -1330115686;
			break;
		case -2075613923:
			*iParam1 = -385817936;
			*uParam2 = -578347576;
			break;
		case 122656217:
			*iParam1 = 1192843172;
			*uParam2 = 231465488;
			break;
		case 2107187484:
			*iParam1 = 954871696;
			*uParam2 = -1878508229;
			break;
		case -791844268:
			*iParam1 = -1217273132;
			*uParam2 = -1878508229;
			break;
		case 305770744:
			*iParam1 = -2087227528;
			*uParam2 = 314966081;
			break;
		case 550900979:
			*iParam1 = -618066518;
			*uParam2 = 2113196069;
			break;
	}
}

int func_466(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_649(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_467(int iParam0, int iParam1)
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
		case -1506259487:
			return 5;
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

bool func_468(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_650();
	if (iParam2 == 39)
	{
		Var0 = { func_384(iParam0, 1, 0) };
		iParam2 = func_467(func_466(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_222(iParam0, 866047851) && func_630(&(Global_1946804->f_1378)) >= 2)
	{
		return false;
	}
	if ((func_471(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2])
	{
		func_651(func_649(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_652(iParam2);
	func_653(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2] != &Global_1946804->f_57[iParam2] && Global_1946804->f_57[iParam2]->f_1 > 1)
	{
		func_654(Global_1946804->f_1378.f_1[iParam2], 4, 6);
		func_654(Global_1946804->f_1497.f_1[iParam2], 4, 6);
	}
	func_655(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804->f_1378.f_1[iParam2]->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2] = iParam0;
	Global_1946804->f_1378.f_1[iParam2]->f_1 = func_656(iParam0, iParam2, iParam1, func_92() != -1);
	if (bParam4)
	{
		func_657(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_657(&(Global_1946804->f_1378), 1, 0);
	}
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1946804->f_2589)
		{
			if (&Global_1946804->f_2589.f_2[iVar6] >= 0 && &Global_1946804->f_2589.f_2[iVar6] < 39)
			{
				Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar6]] = 0;
				Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar6]]->f_1 = 0;
				func_658(func_649(&(Global_1946804->f_2589.f_2[iVar6]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_469(bool bParam0, bool bParam1, bool bParam2)
{
	func_659(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

void func_470(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_660(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_661(Var0);
}

bool func_471(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_472()
{
	func_662(&(Global_1946804->f_2776));
	func_663(32768);
	func_658(1108822547, 8, 6);
}

int func_473(int iParam0)
{
	iVar0 = 0;
	iVar1 = func_467(iParam0, 1);
	switch (iParam0)
	{
		case 1108822547:
			if (&Global_1946804->f_1497.f_1[iVar1] == &Global_1946804->f_57[iVar1] || &Global_1946804->f_1378.f_1[iVar1] == &Global_1946804->f_57[iVar1])
			{
				iVar0 = 48;
			}
			break;
	}
	return iVar0;
}

void func_474(int iParam0)
{
	if (func_664(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_665(Var0);
}

void func_475(int iParam0, int iParam1, int iParam2)
{
	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_665(Var0);
}

bool func_476(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_307(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_477(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_478(int iParam0)
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

float func_479()
{
	if (func_666())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_667(2);
	}
	if (Global_1347477->f_119)
	{
		return func_667(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_668();
	fVar2 = func_669();
	fVar3 = func_670();
	fVar4 = func_671();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_672()));
	fVar7 = (func_667(2) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_673(3, round((to_float(iVar8) * fVar10)), 0);
	func_674(3, fVar9, fVar9 > 100f);
	return func_675(fVar7, -100f, 100f);
}

float func_480()
{
	if (func_666())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_667(1);
	}
	if (Global_1347477->f_119)
	{
		return func_667(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_668();
	fVar2 = func_669();
	fVar3 = func_670();
	fVar4 = func_671();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_672()));
	fVar7 = (func_667(1) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_673(2, round((to_float(iVar8) * fVar10)), 0);
	func_674(2, fVar9, fVar9 > 100f);
	return func_675(fVar7, -100f, 100f);
}

float func_481()
{
	if (func_666())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_667(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_676())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_677())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_667(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_668();
	fVar2 = func_669();
	fVar3 = func_670();
	fVar4 = func_671();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_672()));
	fVar7 = (func_667(0) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_673(1, round((to_float(iVar8) * fVar10)), 0);
	func_674(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && _get_player_health(player_id()) < 1f)
	{
		return func_667(0);
	}
	return func_675(fVar7, -100f, 100f);
}

bool func_482(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_483(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

int func_484(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_201(iParam0, 0))
	{
	}
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return 0;
	}
	if (func_388(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return 0;
	}
	if (!func_230(0))
	{
		return 0;
	}
	if (!_0xcb5d11f9508a928d(func_307(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_485(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -2061583405:
			return Global_1946804->f_2657.f_21;
		case 81053684:
			return Global_1946804->f_2657.f_23;
		case -525676072:
			return Global_1946804->f_2657.f_22;
		case -1719060085:
			return Global_1946804->f_2657.f_24;
		case -413129408:
			return Global_1946804->f_2657.f_25;
		case -999503751:
			if (bParam1)
			{
				return Global_1946804->f_2657.f_20;
			}
			else
			{
				return func_678();
			}
			break;
	}
	return 0;
}

int func_486(int iParam0)
{
	switch (iParam0)
	{
		case 439606975:
			return 14;
		case 1661121390:
			return 6;
		case 1164374808:
			return 7;
		case 624063935:
			return 9;
		case -1476781101:
			return 10;
		case 1560492757:
			return 15;
		case -769081407:
			return 16;
		case 688004210:
			return 20;
		case 166243423:
			return 0;
		case -1826731591:
			return 24;
		case 2119049229:
			return 25;
		case 1352942778:
			return 26;
		case 1964379549:
			return 27;
		case 1201189539:
			return 28;
		case 1351927599:
			return 21;
		case 2032023096:
			return 22;
		case 1784889667:
			return 13;
		case 1160643979:
			return 8;
		case 1383300684:
			return 1;
		case 2051441678:
			return 2;
		case 162509669:
			return 3;
		case 635948769:
			return 4;
		case 274995506:
			return 5;
		case 1902428294:
			return 17;
		case -2114499732:
			return 18;
		case 800827126:
			return 19;
		case 294553332:
			return 11;
		case 1788874135:
			return 12;
		case -1243402388:
			return 66;
		case 65931886:
			return 67;
		case 1371678229:
			return 68;
		case 2102263084:
			return 69;
		case -272211555:
			return 61;
		case -55563408:
			return 64;
		case -1914506115:
			return 71;
		case 802495462:
			return 75;
		case 842905332:
			return 77;
		case 1511551084:
			return 79;
		case -1725704631:
			return 81;
		case 1257427489:
			return 83;
		case -659341240:
			return 85;
		case 2038771525:
			return 87;
		case -535599244:
			return 89;
		case -389591806:
			return 73;
		case -1205612021:
			return 70;
		case 890706995:
			return 93;
		case 1156438275:
			return 90;
		case -1611873049:
			return 91;
		case 594312243:
			return 92;
		case -978578725:
			return 94;
		case -361635024:
			return 62;
		case -1951220140:
			return 78;
		case 1460520700:
			return 76;
		case 523337834:
			return 80;
		case -19271249:
			return 82;
		case 214175524:
			return 84;
		case -1303643297:
			return 86;
		case 411856831:
			return 88;
		case -926815459:
			return 72;
		case -1300731953:
			return 74;
		case -409616653:
			return 65;
		case 509954990:
			return 29;
		case -445916744:
			return 30;
		case -866249154:
			return 31;
		case -2077063704:
			return 32;
		case 205207539:
			return 33;
		case -1033657275:
			return 34;
		case 1806002837:
			return 35;
		case 705324896:
			return 36;
		case -1541763703:
			return 37;
		case 387052410:
			return 38;
		case -361288914:
			return 39;
		case -911054515:
			return 40;
		case 1084200963:
			return 41;
		case 1847948074:
			return 42;
		case -1212526764:
			return 43;
		case 1851440270:
			return 44;
		case -2028985700:
			return 45;
		case 1074435214:
			return 46;
		case -883015675:
			return 47;
		case -1047155604:
			return 48;
		case 1123231221:
			return 49;
		case 1866989210:
			return 50;
		case 478183719:
			return 51;
		case -1698955868:
			return 52;
		case -2029378634:
			return 53;
		case 1339864416:
			return 54;
		case 890998115:
			return 55;
		case -1376288999:
			return 56;
		case -1041123771:
			return 57;
		case 1389254668:
			return 58;
		case -346112633:
			return 59;
		case 773309172:
			return 60;
		case -291256376:
			return 23;
		default:
			break;
	}
	return -1;
}

bool func_487(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

void func_488(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_487(iParam0))
	{
		return;
	}
	if (func_679(iParam0))
	{
		return;
	}
	if (!func_680(iParam0))
	{
		func_681(iParam0, 1, 0);
	}
	iVar0 = func_682(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_683(iParam0, 512))
		{
			func_470(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_684() && !bParam1) && !func_685(0, 0, 1))
	{
		func_509(_create_var_string(10, "OUT_JOURN_DONE", _create_var_string(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_686(iParam0, 6);
	if (bParam2)
	{
		if (!func_685(0, 0, 1))
		{
			func_37(1, 4);
		}
	}
}

int func_489()
{
	return Global_1946804->f_1;
}

bool func_490(int iParam0, bool bParam1)
{
	return func_485(iParam0, 0) < func_687(iParam0, bParam1);
}

bool func_491(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_226(iVar1) == iParam0)
		{
			*iParam1 = iVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_492(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_467(iParam0, 1)] != &Global_1946804->f_57[func_467(iParam0, 1)];
}

void func_493(int iParam0, int iParam1)
{
	if (func_222(iParam1, 130796156))
	{
		func_688(iParam1, 0);
	}
	else if (func_222(iParam1, 930141731))
	{
		func_688(iParam1, 1);
		func_689(iParam0);
	}
}

void func_494(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (&uParam0->f_1[iVar0] == iParam1)
		{
			return;
		}
		if ((((iParam1 == 617531372 && &uParam0->f_1[iVar0] == 291123060) || (iParam1 == 291123060 && &uParam0->f_1[iVar0] == 617531372)) || (iParam1 == 1356624740 && &uParam0->f_1[iVar0] == 1884295263)) || (iParam1 == 1884295263 && &uParam0->f_1[iVar0] == 1356624740))
		{
			uParam0->f_1[iVar0] = iParam1;
			return;
		}
		iVar0++;
	}
	if (*uParam0 >= 10)
	{
		return;
	}
	uParam0->f_1[*uParam0] = iParam1;
	*uParam0++;
}

int func_495(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_cashinventory_is_session_ready())
	{
		return 0;
	}
	func_690(uParam1);
	if (!_0x77b299e8799b1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_691(uParam2, iParam0, Var1);
	return 1;
}

int func_496(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_497(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PROVISION_FISH_BLUEGILL";
		case 1:
			return "PROVISION_FISH_BULLHEAD_CATFISH";
		case 2:
			return "PROVISION_FISH_CHAIN_PICKEREL";
		case 3:
			return "PROVISION_FISH_CHANNEL_CATFISH";
		case 4:
			return "PROVISION_FISH_LAKE_STURGEON";
		case 5:
			return "PROVISION_FISH_LARGEMOUTH_BASS";
		case 6:
			return "PROVISION_FISH_LONGNOSE_GAR";
		case 7:
			return "PROVISION_FISH_MUSKIE";
		case 8:
			return "PROVISION_FISH_NORTHERN_PIKE";
		case 9:
			return "PROVISION_FISH_PERCH";
		case 10:
			return "PROVISION_FISH_REDFIN_PICKEREL";
		case 11:
			return "PROVISION_FISH_ROCK_BASS";
		case 12:
			return "PROVISION_FISH_SMALLMOUTH_BASS";
		case 13:
			return "PROVISION_FISH_SOCKEYE_SALMON";
		case 14:
			return "PROVISION_FISH_STEELHEAD_TROUT";
		default:
			break;
	}
	return "FISHTYPE_UNKNOWN";
}

int func_498(int iParam0)
{
	if (!func_692(iParam0, &uVar0, 805880880, 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

bool func_499()
{
	return !&Global_1911774;
}

void func_500(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	Global_1911774->f_4[Global_1911774->f_3] = iParam0;
	Global_1911774->f_4[Global_1911774->f_3]->f_1 = iParam1;
	Global_1911774->f_4[Global_1911774->f_3]->f_2 = bParam2;
	Global_1911774->f_4[Global_1911774->f_3]->f_3 = bParam3;
	if (Global_1911774->f_3 < 20)
	{
		Global_1911774->f_3++;
	}
}

char* func_501(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_502(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (_item_database_fillout_ui_data(iParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (is_string_null_or_empty(&(Var3.f_2[iVar0])))
			{
				Jump @227; //curOff = 56
			}
			else if (is_string_null_or_empty(Var3.f_2[iVar0]->f_1))
			{
			}
			else
			{
				iVar1 = get_hash_key(&(Var3.f_2[iVar0]));
				iVar2 = get_hash_key(Var3.f_2[iVar0]->f_1);
				if (iParam2 != 0 && Var3.f_2[iVar0]->f_2 != iParam2)
				{
					Jump @227; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @227; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @227; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = { *Var3.f_2[iVar0] };
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

char* func_503(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

bool func_504(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_505(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_693(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

bool func_506(int iParam0)
{
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (!is_ped_using_any_scenario(iParam0))
	{
		return false;
	}
	iVar0 = _get_scenario_point_type_ped_is_using(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if ((((((((iVar0 == -1689755873 || iVar0 == 1690225020) || iVar0 == 1774730608) || iVar0 == 309374745) || iVar0 == -363194080) || iVar0 == 640190094) || iVar0 == -1085971095) || iVar0 == 49488831) || iVar0 == 343112864)
	{
		return true;
	}
	if (iVar0 == -2016812721 || iVar0 == 1097070152)
	{
		iVar0 = _0xc22aa08a8adb87d4(iParam0);
		if (iVar0 == 970972795)
		{
			return true;
		}
		return false;
	}
	return false;
}

bool func_507(int iParam0)
{
	return (func_694(iParam0, 4) || func_694(iParam0, 5));
}

bool func_508(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	if (_0x5463c962bc7777c3(iParam0, 0, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (_0x5463c962bc7777c3(iParam0, 2, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (_0x5463c962bc7777c3(iParam0, 1, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (_0x758f081db204ddde(iParam0))
	{
		return true;
	}
	return false;
}

var func_509(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_510(int iParam0)
{
	iVar0 = get_mount(Global_35);
	if (!func_695(Global_35))
	{
		return false;
	}
	if (!func_294(iParam0, 16) && !func_696(iVar0, 0))
	{
		return false;
	}
	return true;
}

void func_511(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_512(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_513(int iParam0)
{
	return func_39(Global_1935496->f_27, iParam0);
}

int func_514()
{
	return Global_40.f_11095.f_35;
}

float func_515(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_516(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_697(bParam1);
	}
}

void func_517(int iParam0)
{
	_0x74bcceb233ad95b2(-156028329, iParam0);
}

char* func_518(int iParam0)
{
	if (iParam0 <= -320)
	{
		return "HONOR_BAD_8";
	}
	else if (iParam0 <= -280)
	{
		return "HONOR_BAD_7";
	}
	else if (iParam0 <= -240)
	{
		return "HONOR_BAD_6";
	}
	else if (iParam0 <= -200)
	{
		return "HONOR_BAD_5";
	}
	else if (iParam0 <= -160)
	{
		return "HONOR_BAD_4";
	}
	else if (iParam0 <= -120)
	{
		return "HONOR_BAD_3";
	}
	else if (iParam0 <= -80)
	{
		return "HONOR_BAD_2";
	}
	else if (iParam0 < 0)
	{
		return "HONOR_BAD_1";
	}
	else if (iParam0 <= 40)
	{
		return "HONOR_GOOD_1";
	}
	else if (iParam0 >= 320)
	{
		return "HONOR_GOOD_8";
	}
	else if (iParam0 >= 280)
	{
		return "HONOR_GOOD_7";
	}
	else if (iParam0 >= 240)
	{
		return "HONOR_GOOD_6";
	}
	else if (iParam0 >= 200)
	{
		return "HONOR_GOOD_5";
	}
	else if (iParam0 >= 160)
	{
		return "HONOR_GOOD_4";
	}
	else if (iParam0 >= 120)
	{
		return "HONOR_GOOD_3";
	}
	else if (iParam0 >= 80)
	{
		return "HONOR_GOOD_2";
	}
	return "HONOR_GOOD_1";
}

bool func_519(int iParam0)
{
	if (!func_594(23, &vVar0))
	{
		return false;
	}
	vVar0.f_2 = 1781729525;
	if (_datafile_get_data_node_index(&(vVar0.f_1), &vVar0))
	{
		vVar0.f_2 = -2103982008;
		*iParam0 = _datafile_get_num_nodes(&vVar0);
		return true;
	}
	return false;
}

bool func_520(int iParam0, int iParam1, int iParam2)
{
	if (!func_594(23, &Var0))
	{
		return false;
	}
	Var0.f_2 = 1781729525;
	if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = -57097983;
		Var0.f_3 = iParam0;
		if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
		{
			Var0.f_2 = 2027336698;
			_datafile_get_hash(&uVar5, &Var0);
			*iParam1 = uVar5;
			Var0.f_2 = 316053773;
			_datafile_get_hash(&uVar5, &Var0);
			*iParam2 = uVar5;
			return true;
		}
	}
	return false;
}

int func_521(int iParam0)
{
	return iParam0;
}

int func_522()
{
	iVar0 = func_309();
	switch (iVar0)
	{
		case 120:
		case 160:
		case 200:
			return -608161198;
		case 240:
		case 280:
		case 320:
			return -2132502231;
		default:
			break;
	}
	return -1130204298;
}

void func_523(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

bool func_524(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_525(int iParam0, int iParam1, int iParam2)
{
	if (!func_524(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
			*iParam1 = -816321659;
			*iParam2 = -987026056;
			break;
		case 1:
			*iParam1 = -816321659;
			*iParam2 = -1822602787;
			break;
		case 2:
			*iParam1 = -816321659;
			*iParam2 = -1602329569;
			break;
		case 3:
			*iParam1 = -816321659;
			*iParam2 = 1881899898;
			break;
		case 4:
			*iParam1 = -816321659;
			*iParam2 = -1906196506;
			break;
		case 5:
			*iParam1 = -816321659;
			*iParam2 = -674995867;
			break;
		case 6:
			*iParam1 = -816321659;
			*iParam2 = -734156617;
			break;
		case 7:
			*iParam1 = -816321659;
			*iParam2 = 261758426;
			break;
		case 8:
			*iParam1 = -816321659;
			*iParam2 = 1545586131;
			break;
		case 9:
			*iParam1 = -816321659;
			*iParam2 = -489125522;
			break;
		case 10:
			*iParam1 = -816321659;
			*iParam2 = 1190367681;
			break;
		case 11:
			*iParam1 = -816321659;
			*iParam2 = -1179367301;
			break;
		case 12:
			*iParam1 = -816321659;
			*iParam2 = 1154513253;
			break;
		case 13:
			*iParam1 = -816321659;
			*iParam2 = -1825640214;
			break;
		case 14:
			*iParam1 = -816321659;
			*iParam2 = 1209829059;
			break;
		case 15:
			*iParam1 = -816321659;
			*iParam2 = -1713230487;
			break;
		case 16:
			*iParam1 = -816321659;
			*iParam2 = 2092309893;
			break;
		default:
			return false;
	}
	return true;
}

void func_526(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = -1;
}

void func_527(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_698(iParam1))
		{
			func_153(iParam0, 41788943);
		}
		else if (bParam5)
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
			func_699(iParam0, 0, 1);
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
			func_700(iParam0, 0);
			bVar0 = true;
		}
		func_701(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

char* func_528(int iParam0, int iParam1)
{
	switch (*iParam0)
	{
		case 1861313914:
			if (func_16(59))
			{
				switch (iParam1)
				{
					case 0:
						return "BraithwaitesSecret";
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return "Girl";
					default:
						break;
				}
			}
			break;
		case -415839138:
			switch (iParam1)
			{
				case 0:
					return "monk";
				default:
					break;
			}
			break;
	}
	return "";
}

void func_529(int iParam0)
{
	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_702();
	if (Global_1935630->f_27)
	{
		Global_1935630->f_28 = get_game_timer();
	}
	if (is_weapon_valid(Global_1935630->f_44))
	{
		if (is_ped_shooting(Global_35))
		{
			if (get_current_ped_vehicle_weapon(Global_35, &uVar1))
			{
			}
			else
			{
				uVar1 = Global_1935630->f_44;
			}
			Global_1935630->f_46 = uVar1;
		}
	}
	switch (iVar0)
	{
		case 0:
			func_703(&(Global_1935630->f_34), &(Global_1935630->f_39));
			Global_1935630->f_38 = iParam0;
			break;
		case 1:
			Global_1935630->f_30 = _0x72ad59f7b7fb6e24(player_id(), 4000);
			if (!Global_1935630->f_30)
			{
				if (Global_1935630->f_44 == 2055893578)
				{
					Global_1935630->f_30 = _get_lassoed_entity(Global_35) != 0;
				}
			}
			break;
		case 2:
			switch (Global_1935630->f_46)
			{
				case 2055893578:
					Global_1935630->f_25 = 0;
					break;
				default:
					if (is_weapon_valid(Global_1935630->f_46) && _0x5809dbca0a37c82b(Global_1935630->f_46))
					{
						Global_1935630->f_25 = _0x285d36c5c72b0569(Global_35) <= 3f;
					}
					else
					{
						Global_1935630->f_25 = _0x285d36c5c72b0569(Global_35) <= 1f;
					}
					if (Global_1935630->f_25)
					{
						Global_1935630->f_29 = get_frame_count();
					}
					break;
			}
			break;
		default:
			Global_1935630->f_38 = iParam0 + 1;
			break;
	}
	Global_22 |= 4;
}

var func_530(int iParam0)
{
	return &(Global_1109400->f_276[iParam0]);
}

bool func_531(bool bParam0)
{
	if (func_704(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_532(var uParam0)
{
	iVar0 = Global_1935630->f_40;
	if (func_92() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_705(uParam0);
		}
	}
	else if (!does_entity_exist(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_705(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_562(iVar0) == -1)
	{
		return false;
	}
	if (!decor_exist_on(iVar0, "HorseScriptCreator") || decor_get_int(iVar0, "HorseScriptCreator") != get_hash_of_this_script_name())
	{
		return false;
	}
	uParam0->f_14 = iVar0;
	return true;
}

void func_533(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_706(uParam0);
	}
}

bool func_534(int iParam0, var uParam1, int iParam2)
{
	if (!does_entity_exist(iParam2))
	{
		return false;
	}
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!is_ped_human(iParam2))
	{
		iVar1 = func_562(iParam2);
	}
	else
	{
		iVar1 = func_561(iParam2);
	}
	if (!is_ped_human(iParam0))
	{
		iVar0 = func_562(iParam0);
	}
	else
	{
		iVar0 = func_561(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_294(*uParam1, 8388608))
	{
		return true;
	}
	iVar2 = get_ped_relationship_group_hash(iParam0);
	iVar3 = get_ped_relationship_group_hash(iParam2);
	switch (iVar2)
	{
		case -1976316465:
		case -1505548114:
		case -350651841:
		case -50399569:
		case 106566339:
		case 707888648:
		case 841021282:
			switch (iVar3)
			{
				case -1976316465:
				case -1505548114:
				case -350651841:
				case 841021282:
					return true;
			}
			break;
	}
	if (iVar2 == iVar3)
	{
		return true;
	}
	return false;
}

float func_535(int iParam0, int iParam1)
{
	return func_558(iParam0, iParam1, 1, 1);
}

float func_536(var uParam0)
{
	return uParam0->f_26;
}

bool func_537(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam0)
	{
		case 8:
			return iParam2;
		case 4:
		case 16:
			return iParam1;
		case 32:
		case 64:
		case 128:
			return iParam3;
		case 1:
		case 2:
		case 2048:
			return true;
		case 8192:
			return iParam4;
		default:
			break;
	}
	return false;
}

void func_538(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_511(uParam0, 134217728);
	}
	else
	{
		func_512(uParam0, 134217728);
	}
}

void func_539()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

bool func_540(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	iVar0 = player_ped_id();
	if (is_entity_dead(iVar0))
	{
		return false;
	}
	iVar1 = get_player_index();
	if (is_player_dead(iVar1))
	{
		return false;
	}
	if (Global_1935630->f_44 == 2055893578 && Global_1935630->f_27)
	{
	}
	else if (_0x3ee1f7a8c32f24e1(player_id(), &iVar2, 0, 0))
	{
		if (is_entity_a_ped(iVar2) && iParam0 == get_ped_index_from_entity_index(iVar2))
		{
			return false;
		}
	}
	if (Global_1935630->f_40 != 0)
	{
		if (_get_rider_of_mount(Global_1935630->f_40, true) == iParam0)
		{
			return false;
		}
	}
	if (bParam3)
	{
		if (((_0xcb690f680a3ea971(iVar0, 1) && is_player_targetting_entity(iVar1, iParam0, bParam5)) && is_player_free_aiming_at_entity(iVar1, iParam0)) && func_558(iVar0, iParam0, 1, 1) <= 4f)
		{
			return true;
		}
	}
	if (is_player_targetting_entity(iVar1, iParam0, bParam5) || is_player_free_aiming_at_entity(iVar1, iParam0))
	{
		if ((bParam1 && _0xcb690f680a3ea971(iVar0, 4)) || (bParam2 && _0xcb690f680a3ea971(iVar0, 2)))
		{
			return true;
		}
	}
	if (is_player_free_aiming(iVar1))
	{
		if (_is_weapon_sniper(func_707(iVar0, 0)))
		{
			if (func_708(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_541(var uParam0)
{
	return uParam0->f_17;
}

bool func_542(var uParam0, int iParam1, float fParam2, float fParam3)
{
	if (uParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_294(*uParam0, 4194304))
	{
		fVar0 = fParam3;
	}
	if (_0x06087579e7aa85a9(iParam1, Global_35, -1f, fParam3, -1f, fVar0))
	{
		return true;
	}
	if (*uParam0 & 32768 != 0)
	{
		if (has_entity_clear_los_to_entity(iParam1, Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

int func_543(var uParam0)
{
	return uParam0->f_18;
}

bool func_544(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	iVar0 = player_ped_id();
	if (is_entity_dead(iVar0))
	{
		return false;
	}
	iVar1 = get_player_index();
	if (is_player_dead(iVar1))
	{
		return false;
	}
	if (bParam3)
	{
	}
	if (is_player_targetting_entity(iVar1, iParam0, false) || is_player_free_aiming_at_entity(iVar1, iParam0))
	{
		if ((bParam1 && _0xcb690f680a3ea971(iVar0, 4)) || (bParam2 && _0xcb690f680a3ea971(iVar0, 2)))
		{
			return true;
		}
	}
	if (is_player_free_aiming(iVar1))
	{
		if (_is_weapon_sniper(func_707(iVar0, 0)))
		{
			if (func_709(get_entity_coords(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_545(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1935630->f_18)
	{
		if ((bParam2 || Global_1935630->f_19 > 0) || Global_1935630->f_17 > 0)
		{
			return 1;
		}
	}
	else if (bParam1 && !Global_1935630->f_15 == 1370593166)
	{
		return 0;
	}
	if (Global_1935630->f_20 > 0 || (bParam2 && Global_1935630->f_20 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1935630->f_13)
		{
			if (bParam2 || Global_1935630->f_21 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_546(var uParam0)
{
	return uParam0->f_23;
}

int func_547(var uParam0)
{
	return uParam0->f_21;
}

int func_548(var uParam0)
{
	switch (uParam0->f_7)
	{
		case 0:
			switch (uParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 2:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 1:
			switch (uParam0->f_6)
			{
				case 3:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
		case 2:
			switch (uParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 1:
					iVar0 = 2;
					break;
			}
			break;
		case 3:
			switch (uParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 4:
			switch (uParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
	}
	if (*uParam0 & 16777216 != 0)
	{
		if (iVar0 == 2)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_549(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_101(iParam0, vParam4, 0.5f))
	{
		if (_0x0c9dbf48c6ba6e4c(iParam0, vParam4, 17))
		{
			return true;
		}
	}
	if (vdist(vParam1, vParam4) < 5f)
	{
		return true;
	}
	return false;
}

int func_550(int iParam0)
{
	if (get_ped_config_flag(iParam0, 9, false))
	{
		if (Global_1935630->f_44 == -1569615261)
		{
			return 1;
		}
		if (is_weapon_valid(Global_1935630->f_46))
		{
			if (_is_weapon_melee(Global_1935630->f_46) || _is_weapon_bow(Global_1935630->f_46))
			{
				return 1;
			}
		}
	}
	if (func_710(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_551(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	iVar0 = get_entity_model(iParam0);
	if (_is_this_model_a_horse(iVar0))
	{
		return true;
	}
	return false;
}

bool func_552(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_506(iParam1))
		{
			return false;
		}
	}
	fVar0 = 5f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = _0x900ca00ce703e1e2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_553(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_506(iParam1))
		{
			return false;
		}
	}
	fVar0 = 10f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = _0x900ca00ce703e1e2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_554(var uParam0, int iParam1, float fParam2, int iParam3)
{
	fVar0 = 40f;
	if (func_506(iParam1))
	{
		return false;
	}
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = _0x2ba9d7bf629f920c(iParam1);
	}
	if (fParam2 < fVar0)
	{
		if (has_entity_clear_los_to_entity(iParam1, &(Global_1935630->f_34[iParam3]), 17))
		{
			if (_0x06087579e7aa85a9(iParam1, &(Global_1935630->f_34[iParam3]), -1f, -1f, -1f, -1f))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_555(int iParam0, int iParam1)
{
	if (!_0xefc4303ddc6e60d3(iParam0))
	{
		return false;
	}
	*iParam1 = _0xed1f514af4732258(iParam0);
	if (!does_entity_exist(*iParam1))
	{
		return false;
	}
	if (is_ped_dead_or_dying(*iParam1, true))
	{
		return false;
	}
	if (!_0x2d64376cf437363e(*iParam1))
	{
		return false;
	}
	return true;
}

bool func_556(int iParam0, int iParam1)
{
	if (_get_lassoed_entity(iParam0) == iParam1)
	{
		return true;
	}
	if (func_711(iParam0, 1, 0, 0) != 2055893578)
	{
		return false;
	}
	if (is_ped_performing_melee_action(iParam0, 16, 0))
	{
		if (get_melee_target_for_ped(iParam0) == iParam1)
		{
			return true;
		}
	}
	return false;
}

bool func_557(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

float func_558(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!does_entity_exist(iParam0) && bParam3)
	{
		return 0f;
	}
	if (!does_entity_exist(iParam1) && bParam3)
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false), bParam2);
}

bool func_559(int iParam0, int iParam1, vector3 vParam2)
{
	fVar0 = func_14(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (is_entity_touching_entity(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_560(var uParam0)
{
	return uParam0->f_24;
}

int func_561(int iParam0)
{
	if (!does_entity_belong_to_this_script(iParam0, true))
	{
		return -1;
	}
	if (decor_exist_on(iParam0, "HorseOwnerTeamA") && decor_get_bool(iParam0, "HorseOwnerTeamA"))
	{
		return 0;
	}
	if (decor_exist_on(iParam0, "HorseOwnerTeamB") && decor_get_bool(iParam0, "HorseOwnerTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_562(int iParam0)
{
	if (!decor_exist_on(iParam0, "HorseScriptCreator") || decor_get_int(iParam0, "HorseScriptCreator") != get_hash_of_this_script_name())
	{
		return -1;
	}
	if (decor_exist_on(iParam0, "HorseTeamA") && decor_get_bool(iParam0, "HorseTeamA"))
	{
		return 0;
	}
	if (decor_exist_on(iParam0, "HorseTeamB") && decor_get_bool(iParam0, "HorseTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_563(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
{
	if (Global_1935630->f_40 != 0)
	{
		bVar0 = true;
	}
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam1, player_ped_id(), 1, 1))
		{
			return 1;
		}
	}
	if (bVar0)
	{
		if (has_entity_been_damaged_by_entity(iParam0, Global_1935630->f_40, 1, 1))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (_0x947e43f544b6ab34(iParam0, get_player_index(), 10, 400))
		{
			if (is_ped_ragdoll(iParam0))
			{
				return 1;
			}
		}
		if (_0x947e43f544b6ab34(iParam0, get_player_index(), 11, 400))
		{
			if (is_ped_ragdoll(iParam0))
			{
				return 1;
			}
		}
		if (bParam3)
		{
			if (func_555(Global_35, &iVar1))
			{
				if (fParam4 < 4f)
				{
					if (is_ped_ragdoll(iParam0) || (!bParam2 && is_entity_touching_entity(iVar1, iParam0)))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (_0x29fce825613fefca(iParam0, 400))
		{
			return 1;
		}
	}
	if (fParam4 <= 0f)
	{
		fVar2 = func_558(iParam0, player_ped_id(), 0, 1);
	}
	else
	{
		fVar2 = fParam4;
	}
	if (fVar2 < 1f)
	{
		if (is_entity_touching_entity(player_ped_id(), iParam0))
		{
			if (!bParam2)
			{
				return 1;
			}
			else if (is_ped_ragdoll(iParam0))
			{
				return 1;
			}
		}
	}
	if (bVar0)
	{
		if (func_558(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
		{
			if (is_entity_touching_entity(Global_1935630->f_40, iParam0))
			{
				if (!bParam2)
				{
					return 1;
				}
				else if (is_ped_ragdoll(iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_564(int iParam0, var uParam1, bool bParam2)
{
	func_704(1, &iVar0, &iVar1);
	if (!does_entity_exist(iVar0) && !does_entity_exist(iVar1))
	{
		return false;
	}
	if (does_entity_exist(iVar0))
	{
		if (iVar0 != iParam0)
		{
			if (_0x06087579e7aa85a9(iParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (has_entity_clear_los_to_entity(iParam0, Global_35, 17))
				{
					if (!bParam2 || !func_565(uParam1, iVar0))
					{
						return true;
					}
				}
			}
		}
	}
	if (does_entity_exist(iVar1))
	{
		if (iVar1 != iParam0)
		{
			if (_0x06087579e7aa85a9(iParam0, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam0, Global_35, 17))
			{
				if (!bParam2 || !func_565(uParam1, iVar1))
				{
					if (func_14(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_565(var uParam0, int iParam1)
{
	if (decor_exist_on(iParam1, "bIsCriminal") && decor_get_bool(iParam1, "bIsCriminal"))
	{
		return true;
	}
	if (get_ped_config_flag(iParam1, 4, false))
	{
		return true;
	}
	iVar0 = get_ped_relationship_group_default_hash(iParam1);
	switch (iVar0)
	{
		case -1996978098:
		case -1448293989:
		case -350226955:
		case 266218800:
		case 555364152:
		case 1078461828:
		case 1222652248:
			return true;
		default:
			break;
	}
	return false;
}

bool func_566(int iParam0)
{
	if (func_15())
	{
		return false;
	}
	return func_93((*Global_1347702)[58]->f_15, 1);
}

int func_567(var uParam0)
{
	return uParam0->f_20;
}

int func_568(int iParam0, var uParam1, bool bParam2, float fParam3)
{
	if (!bParam2)
	{
		if (uParam1->f_4 == 0)
		{
			return 0;
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = uParam1->f_12;
	}
	if (is_ped_facing_ped(iParam0, Global_35, 90f))
	{
		if (_0x06087579e7aa85a9(iParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return 1;
		}
	}
	else if (fParam3 < 1.5f)
	{
		if (is_entity_touching_entity(iParam0, Global_35))
		{
			return 1;
		}
	}
	return 0;
}

int func_569(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_201(iParam0, 0))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!_item_database_fillout_acquire_cost(iParam0, iParam1, &Var0))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	if (!bParam3)
	{
	}
	*iParam2 = Var0.f_1;
	return 1;
}

struct<4> func_570(bool bParam0)
{
	return func_420(1328661203, func_712(), -1591664384, bParam0);
}

struct<4> func_571(bool bParam0)
{
	iVar0 = func_307(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_420(923904168, func_570(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_420(923904168, func_570(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_420(923904168, func_570(bParam0), -740156546, 0);
}

bool func_572(int iParam0, bool bParam1)
{
	if (func_226(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_224(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_573(bool bParam0)
{
	iVar0 = func_307(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_420(271701509, func_570(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_420(271701509, func_570(bParam0), 12999093, 0);
}

bool func_574(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_226(iParam0);
	iVar3 = _item_database_get_fits_slot_count(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (_item_database_get_fits_slot_info(iVar1, iVar2, &uVar0))
		{
			if (_item_database_can_equip_item_on_category(iParam0, iParam1, uVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_575(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_307(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_576(int iParam0)
{
	if (!func_201(*iParam0, 0))
	{
		return 0;
	}
	switch (*iParam0)
	{
		case -1073808995:
			*iParam0 = -1753819339;
			return 1;
		case 1903483453:
			*iParam0 = -1527293029;
			return 1;
		case -541584777:
			*iParam0 = 206762213;
			return 1;
		case 998010398:
			*iParam0 = -324053813;
			return 1;
		case -1424823393:
			*iParam0 = -885810591;
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_577(int iParam0, var uParam1, bool bParam2)
{
	if (!func_201(iParam0, 0))
	{
		return false;
	}
	Var0 = { func_384(iParam0, 0, 1) };
	iVar5 = 1728382685;
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_417((386 + iVar29), 1);
		if (func_418(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_419(iParam0, &Var6, iVar5);
			if ((bParam2 && bVar28) || !bVar28)
			{
				*uParam1 = iVar5;
				return true;
			}
		}
		iVar29++;
	}
	return false;
}

int func_578(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_201(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_420(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_307(bParam6), &Var0, 0);
	return uVar4;
}

struct<14> func_579(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_580(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_581(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_307(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_582(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 >= 1 && iVar0 <= 23)
	{
		return 0;
	}
	else if (iVar0 >= 24 && iVar0 <= 34)
	{
		return 1;
	}
	else if (iVar0 >= 35 && iVar0 <= 55)
	{
		return 2;
	}
	return 0;
}

float func_583(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 5f;
		case 2:
			return 20f;
		case 3:
			return 10f;
		case 4:
			return 10f;
		case 5:
			return 20f;
		case 6:
			return 10f;
		case 7:
			return 15f;
		case 8:
			return 15f;
		case 9:
			return 20f;
		case 10:
			return 5f;
		case 11:
			return 5f;
		case 12:
			return 10f;
		case 13:
			return 20f;
		case 14:
			return 30f;
		case 15:
			return 5f;
		case 16:
			return 5f;
		case 17:
			return 3f;
		case 18:
			return 20f;
		case 19:
			return func_713(iParam0);
		case 20:
			return 25f;
		case 21:
			return 50f;
		case 22:
			return 100f;
		case 23:
			return 150f;
		case 24:
			return 20f;
		case 25:
			return 10f;
		case 26:
			return 20f;
		case 27:
			return 20f;
		case 28:
			return 20f;
		case 29:
			return 20f;
		case 30:
			return func_713(iParam0);
		case 31:
			return 25f;
		case 32:
			return 50f;
		case 33:
			return 100f;
		case 34:
			return 150f;
		case 35:
			return 1f;
		case 36:
			return 5f;
		case 37:
			return 1f;
		case 38:
			return 3f;
		case 39:
			return 1f;
		case 40:
			return 1f;
		case 41:
			return 1f;
		case 42:
			return 5f;
		case 43:
			return 10f;
		case 49:
			return 20f;
		case 44:
			return 5f;
		case 45:
			return 5f;
		case 46:
			return 10f;
		case 47:
			return 10f;
		case 48:
			return 5f;
		case 50:
			return func_713(iParam0);
		case 51:
			return 25f;
		case 52:
			return 50f;
		case 53:
			return 100f;
		case 54:
			return 150f;
		case 55:
			return 5f;
		default:
			break;
	}
	return 0f;
}

bool func_584(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_224(18);
		case 2:
			return func_224(20);
		case 1:
			return func_224(19);
		default:
			break;
	}
	return true;
}

int func_585(int iParam0)
{
	return func_714(&(Global_40.f_11095.f_11[iParam0]));
}

void func_586(int iParam0, float fParam1, bool bParam2)
{
	if (func_92() != -1)
	{
		return;
	}
	if (Global_1347477->f_117 || !func_224(31))
	{
		return;
	}
	iVar0 = func_585(iParam0);
	fVar1 = &Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	set_attribute_points(Global_35, iParam0, floor(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_585(iParam0);
	if (func_715(iParam0) && func_716(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_717(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_718(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!is_radar_hidden() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_212(func_719(iParam0), 0);
					}
					func_720(iParam0, iVar2, iVar3);
					func_721(iParam0, 7000);
				}
				Global_1347477->f_8 = 1;
			}
		}
	}
	Global_1347477->f_1 = iParam0;
	Global_1347477 = get_game_timer();
}

char* func_587(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_588(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 837097462;
		case 0:
			return 2001720289;
		case 2:
			return 234329797;
		default:
			break;
	}
	return 0;
}

bool func_589(int iParam0, int iParam1)
{
	if (func_92() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_590(int iParam0)
{
	if (func_92() != -1)
	{
		if (func_482(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_482(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_591(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_482(iParam0, 65536) && !func_482(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_482(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_482(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_592(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_593()
{
	return Global_1905944->f_5694;
}

bool func_594(int iParam0, var uParam1)
{
	if (!func_722(iParam0))
	{
		return false;
	}
	*uParam1 = Global_1914270[iParam0];
	if (*uParam1 == 0)
	{
		return false;
	}
	return true;
}

int func_595()
{
	return func_723(Global_40.f_12019);
}

int func_596()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_398(iVar1);
		if (func_252(iVar2, 1, 0) || func_602(func_601(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_597()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_724(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_598()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_607(_0x126cbebba46693cf(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_599()
{
	return _0x3a65f4844913a047(2103522376, 0);
}

int func_600(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 554799588;
		case 1:
			return -1021394391;
		case 2:
			return -987306668;
		case 3:
			return -1028735103;
		case 4:
			return 515229791;
		case 5:
			return -1230863414;
			return 232875659;
			return 1423129537;
			return -435742319;
			return -1854702679;
			return 1265323898;
			return -479775696;
			return 0;
		}

int func_601(int iParam0)
{
	switch (iParam0)
	{
		case -1230863414:
			return 1;
		case -1021394391:
			return 8;
		case 232875659:
			return 4;
		case -1028735103:
			return 16;
		case 554799588:
			return 32;
		case 1265323898:
			return 64;
		case -1854702679:
			return 128;
		case -987306668:
			return 256;
		case -479775696:
			return 2;
		case 515229791:
			return 512;
		case -435742319:
			return 1024;
		case 1423129537:
			return 2048;
		default:
			break;
	}
	return 0;
}

bool func_602(int iParam0)
{
	return (Global_40.f_12019 && iParam0) != 0;
}

char* func_603(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_DB_DINO_BONES_FOUND";
		case 1:
			return "COL_DB_SEND";
		case 2:
			return "COL_DB_COLLECT";
		default:
			break;
	}
	return "";
}

int func_604(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		case 1:
			return 6;
		case 2:
			return 7;
		case 3:
			return 8;
		case 4:
			return 9;
		default:
			break;
	}
	return 5;
}

int func_605(int iParam0)
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
	return 15;
}

char* func_606(int iParam0)
{
	switch (iParam0)
	{
		case 281887510:
			return "COL_EP_LITTLE_FOUND";
		case -164081697:
			return "COL_EP_REDDISH_FOUND";
		case -1161319399:
			return "COL_EP_SNOWY_FOUND";
		case 728781265:
			return "COL_RO_LADY_OF_NIGHT_FOUND";
		case -222563712:
			return "COL_HF_FOUND";
		case 1794857344:
			return "COL_RO_LADY_SLIPPER_FOUND";
		case 1952409553:
			return "COL_RO_MOCCASIN_FOUND";
		case 2116770557:
			return "COL_GF_FOUND";
		case -651064726:
			return "COL_RO_ACUNAS_STAR_FOUND";
		case -404270094:
			return "COL_RO_CIGAR_FOUND";
		case 2093126853:
			return "COL_RO_GHOST_FOUND";
		case 2085530337:
			return "COL_SF_FOUND";
		case -150591160:
			return "COL_RO_NIGHT_SCENTED_FOUND";
		case -323969289:
			return "COL_RO_RAT_TAIL_FOUND";
		case 1504361882:
			return "COL_RO_SPIDER_FOUND";
		case -1521783510:
			return "COL_RO_CLAMSHELL_FOUND";
		case 1714875242:
			return "COL_RO_DRAGONS_FOUND";
		case 1019229063:
			return "COL_RO_QUEENS_FOUND";
		case 927763737:
			return "COL_RO_SPARROWS_FOUND";
		default:
			break;
	}
	return "";
}

bool func_607(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

char* func_608(int iParam0)
{
	switch (iParam0)
	{
		case -1865241121:
			return "PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY";
		case 2117142684:
			return "PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY";
		case -1409326024:
			return "PROVISION_FISH_LAKE_STURGEON_LEGENDARY";
		case -641744968:
			return "PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY";
		case -946988203:
			return "PROVISION_FISH_LONGNOSE_GAR_LEGENDARY";
		case -646136018:
			return "PROVISION_FISH_MUSKIE_LEGENDARY";
		case -955835837:
			return "PROVISION_FISH_PERCH_LEGENDARY";
		case -179276075:
			return "PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY";
		case -492711560:
			return "PROVISION_FISH_ROCK_BASS_LEGENDARY";
		case 1764383959:
			return "PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY";
		case 317501533:
			return "PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY";
		case 817753087:
			return "PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY";
		case 576606016:
			return "PROVISION_FISH_BLUEGILL_LEGENDARY";
		default:
			break;
	}
	return "";
}

char* func_609(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_RC_ROCK_FACES_FOUND";
		case 1:
			return "COL_RC_SEND";
		case 2:
			return "COL_RC_COLLECT";
		default:
			break;
	}
	return "";
}

bool func_610(int iParam0)
{
	if (func_725(iParam0) && func_252(iParam0, 1, 0))
	{
		return true;
	}
	else if (func_726(iParam0) && func_727(iParam0))
	{
		return true;
	}
	return false;
}

char* func_611(int iParam0)
{
	if (!func_201(iParam0, 0))
	{
		return "";
	}
	return _get_label_text_by_hash(func_270(iParam0));
}

int func_612(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

int func_613(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

void func_614(bool bParam0)
{
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (bParam0)
	{
		_0xa0c683284df027c7(player_id(), 15, 1);
	}
	else
	{
		_0xa0c683284df027c7(player_id(), 15, 0);
		_0xa0c683284df027c7(player_id(), 1, 1);
	}
}

void func_615(int iParam0)
{
	if (!_databinding_is_data_id_valid(Global_1955569->f_5.f_1))
	{
		return;
	}
	if (_databinding_get_array_count(Global_1955569->f_5.f_1) > iParam0)
	{
		iVar0 = _databinding_get_item_context_by_index(Global_1955569->f_5.f_1, iParam0);
		if (iVar0 == &Global_1955569->f_5.f_2[iParam0])
		{
			return;
		}
	}
	_databinding_insert_ui_item_to_list_from_context_string_alias(Global_1955569->f_5.f_1, iParam0, "pause_info_panel_list", &(Global_1955569->f_5.f_2[iParam0]));
}

void func_616(bool bParam0)
{
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (is_entity_dead(Global_35) || is_ped_injured(Global_35))
	{
	}
	set_ped_config_flag(Global_35, 440, !bParam0);
}

void func_617(bool bParam0)
{
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (is_entity_dead(Global_35) || is_ped_injured(Global_35))
	{
	}
	set_ped_config_flag(Global_35, 439, !bParam0);
}

void func_618(bool bParam0)
{
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (is_entity_dead(Global_35) || is_ped_injured(Global_35))
	{
	}
	set_ped_config_flag(Global_35, 438, !bParam0);
}

void func_619(bool bParam0)
{
	iVar0 = 398076311;
	if (bParam0)
	{
		_hide_hud_component(iVar0);
	}
	else
	{
		_display_hud_component(iVar0);
	}
}

void func_620(bool bParam0)
{
	iVar0 = 50;
	iVar1 = player_id();
	if (bParam0)
	{
		_0x0751d461f06e41ce(iVar1, iVar0, 0, 1);
		_0x0751d461f06e41ce(iVar1, iVar0, 1, 1);
	}
	else
	{
		_0x0751d461f06e41ce(iVar1, iVar0, 0, 0);
		_0x0751d461f06e41ce(iVar1, iVar0, 1, 0);
	}
}

void func_621(bool bParam0)
{
	iVar0 = 49;
	iVar1 = player_id();
	if (bParam0)
	{
		_0x0751d461f06e41ce(iVar1, iVar0, 0, 1);
		_0x0751d461f06e41ce(iVar1, iVar0, 1, 1);
	}
	else
	{
		_0x0751d461f06e41ce(iVar1, iVar0, 0, 0);
		_0x0751d461f06e41ce(iVar1, iVar0, 1, 0);
	}
}

int func_622(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return &(Global_1946804->f_1497.f_1[func_467(iParam0, 1)]);
}

void func_623()
{
	if (!_unlock_is_unlocked(-1526891582))
	{
		func_728();
		_unlock_set_unlocked(-1526891582, true);
		func_229(-916314281);
		func_276(-916314281, 1, 752097756);
		set_current_ped_weapon(Global_35, -916314281, true, 2, false, false);
		func_229(494733111);
		func_276(494733111, 1, 752097756);
		set_current_ped_weapon(Global_35, 494733111, true, 4, false, false);
	}
}

bool func_624(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_307(0);
	*uParam1 = { func_420(iParam0, func_571(0), iParam3, 0) };
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (!_0x025a1b1fb03fbf61(iVar0, uParam1, uParam2, 22, 1))
	{
		return false;
	}
	return true;
}

bool func_625(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

int func_626(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_627(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_729(*iParam0);
	iVar1 = func_730(*iParam0);
	iVar2 = func_731(*iParam0);
	iVar3 = func_128(*iParam0);
	iVar4 = func_732(*iParam0);
	iVar5 = func_733(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_734(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_734(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	if (!bParam7)
	{
		iVar0 = (iVar0 + iParam6);
	}
	func_735(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_628(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

int func_629(int iParam0)
{
	Var0 = { func_384(iParam0, 1, 0) };
	return func_466(Var0.f_4);
}

int func_630(var uParam0)
{
	iVar0 = 0;
	iVar1 = 22;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_222(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_222(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_222(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_222(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_222(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_222(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

bool func_631(int iParam0, var uParam1)
{
	iVar1 = func_467(func_736(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (&Global_1946804->f_1497.f_1[iVar1] != 0 && &Global_1946804->f_1497.f_1[iVar1] != &Global_1946804->f_57[iVar1])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1];
		if (func_226(iVar0) == iParam0)
		{
			*uParam1 = iVar0;
			return true;
		}
	}
	*uParam1 = 0;
	return false;
}

int func_632(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam0 == &Global_1946804->f_57[func_467(iParam1, 1)])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_471(524288))
	{
		switch (iParam1)
		{
			case 673166414:
				iVar0++;
				break;
			case -207860920:
				iVar0++;
				break;
		}
	}
	iVar0 = (iVar0 + _0x31b2e7f2e3c58b89(iParam0, 1155669136, iParam2, bParam3));
	return iVar0;
}

bool func_633(int iParam0)
{
	switch (iParam0)
	{
		case -1511777811:
			return true;
		case 103395732:
			return true;
		case -874127761:
			return true;
		case -635667748:
			return true;
		case 1613924106:
			return true;
		default:
			break;
	}
	return false;
}

int func_634(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 968830139;
		case 1:
			return -649219937;
		case 2:
			return -858567048;
		case 3:
			return -718162726;
		case 4:
			return -1284282080;
		case 5:
			return -725003445;
		case 6:
			return -1445630104;
		case 7:
			return 580970876;
		case 8:
			return 967601061;
		case 9:
			return 1946030891;
		case 10:
			return -1511404982;
		case 11:
			return -944465290;
		case 12:
			return -1701098855;
		case 13:
			return 425319238;
		case 14:
			return 363594903;
		case 15:
			return -1217729597;
		case 16:
			return -1540119664;
		case 17:
			return 2100194981;
		case 18:
			return 446659922;
		case 19:
			return -390982951;
		case 20:
			return -1018798851;
		case 21:
			return -757567246;
		case 22:
			return -2054602073;
		case 23:
			return -378441099;
		case 24:
			return -585121677;
		case 25:
			return 1566949660;
		default:
			break;
	}
	return 0;
}

int func_635(int iParam0)
{
	return func_737(iParam0, -1);
}

bool func_636(int iParam0, bool bParam1)
{
	return func_738(func_127(), iParam0, bParam1);
}

bool func_637()
{
	if (func_428())
	{
		return _get_special_edition_cash_camp_bonus_enabled();
	}
	return false;
}

void func_638(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_739((Global_40.f_4283.f_325 + iParam0));
}

void func_639(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_637())
	{
		func_318(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_318(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

bool func_640(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

void func_641(int iParam0)
{
	iVar0 = func_320(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		set_bit(Global_40.f_283[iVar1], iVar2);
	}
	else
	{
		iVar3 = network_player_id_to_int();
		if (iVar3 == 255)
		{
			Global_1058888->f_40567.f_46 = 1;
			set_bit(Global_1058888->f_40567.f_14[iVar1], iVar2);
		}
		else
		{
			set_bit((*Global_1055058)[iVar3]->f_72[iVar1], iVar2);
		}
		set_bit(Global_1058888->f_40567[iVar1], iVar2);
	}
	Global_1934765 = 0;
}

void func_642(int iParam0)
{
	iVar0 = func_320(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		clear_bit(Global_40.f_283[iVar1], iVar2);
	}
	else
	{
		iVar3 = network_player_id_to_int();
		if (iVar3 == 255)
		{
			Global_1058888->f_40567.f_46 = 1;
			clear_bit(Global_1058888->f_40567.f_14[iVar1], iVar2);
		}
		else
		{
			clear_bit((*Global_1055058)[iVar3]->f_72[iVar1], iVar2);
		}
	}
	Global_1934765 = 0;
}

void func_643()
{
	func_642(-939420910);
	func_642(-1187950766);
	func_642(356365161);
	func_642(753127042);
	func_642(-2038424081);
	func_642(1884271742);
	func_642(459290420);
}

void func_644()
{
	func_642(704802028);
	func_642(588987611);
	func_642(2008888900);
	func_642(1649996811);
	func_642(227918160);
	func_642(168171957);
	func_642(1193080109);
	func_642(-491981251);
	func_642(-639037538);
	func_642(-618620429);
}

bool func_645(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

int func_646(int iParam0)
{
	switch (iParam0)
	{
		case -1791518714:
			return 1;
		case -2087881550:
			return 2;
		case 1908068621:
			return 4;
		case 1611247019:
			return 8;
		case 1319635688:
			return 16;
		default:
			break;
	}
	return 0;
}

void func_647(int iParam0)
{
	Global_40.f_12019.f_43 = (Global_40.f_12019.f_43 || iParam0);
}

bool func_648(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

int func_649(int iParam0, int iParam1)
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
			return -1506259487;
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

void func_650()
{
	Global_1946804->f_1378 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		iVar0++;
	}
}

void func_651(int iParam0)
{
	func_658(iParam0, 8, 6);
}

void func_652(int iParam0)
{
	func_740(&(Global_1946804->f_2589), iParam0);
}

void func_653(int iParam0, int iParam1)
{
	func_741(&(Global_1946804->f_2589), iParam0, iParam1);
}

void func_654(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_655(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar1 = 12;
	iVar2 = func_226(&(uParam0->f_1[iParam2]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_742(iParam2, 65536) && &uParam0->f_1[iVar1] == -452402570)
	{
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_653(iVar1, iVar3);
		}
	}
	if (func_492(-1586649372) && func_742(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_653(iVar1, iVar3);
		}
	}
	switch (iVar2)
	{
		case 698653232:
			if (iParam1 == &Global_1946804->f_57[iParam2])
			{
				iVar1 = 12;
				if (&uParam0->f_1[iVar1] == 1516947474)
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_653(iVar1, iVar3);
					}
				}
			}
			func_743(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_743(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
			iVar1 = 22;
			if (&uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1])
			{
			}
			else
			{
				iVar0 = 16;
				if (uParam0->f_1[iVar0]->f_1 == 1155669136 || uParam0->f_1[iVar0]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_653(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_743(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1]->f_1 == 1155669136)
				{
					uParam0->f_1[iVar1]->f_1 = -1539589426;
					if (bParam4)
					{
						func_653(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1]->f_1 = 1334603721;
					if (bParam4)
					{
						func_653(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_743(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_743(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_653(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_743(uParam0, (1 && bParam4), 0, 1, bParam3);
				Jump @1415; //curOff = 807
				if (iParam1 == &Global_1946804->f_57[iParam2])
				{
					iVar1 = 37;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_653(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_653(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_226(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_653(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_633(iParam1) && &uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1]) && -923693316 == func_226(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_653(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && func_222(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_653(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 1228
				iVar1 = 36;
				if (&uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_653(iVar1, iVar3);
					}
				}
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && (func_633(&(Global_1946804->f_1497.f_1[iVar1])) || func_222(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711)))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_653(iVar1, iVar3);
					}
				}
			}
			switch (func_226(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_226(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_653(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_226(&(uParam0->f_1[iVar1])) || func_222(&(uParam0->f_1[iVar1]), 866047851))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_653(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

int func_656(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = func_744(0);
	if (iParam2 != 0 && func_745(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_746(iParam0, func_649(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_657(var uParam0, bool bParam1, int iParam2)
{
	bVar6 = func_92() != -1;
	iVar7 = func_744(0);
	if (func_471(32768))
	{
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 39)
	{
		iVar0 = &Global_1946804->f_57.f_430[iVar2];
		if (iVar0 <= -1 || iVar0 >= 39)
		{
		}
		else
		{
			iVar5 = func_649(iVar0, 1);
			if (func_747(iVar5, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
			{
			}
			else if (func_747(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
			{
			}
			else
			{
				iVar4 = func_632(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_748(uParam0);
				if (iVar3 > 0)
				{
					if (!func_471(524288))
					{
						func_660(524288);
						iVar1 = (iVar1 - iVar8);
					}
					iVar2 = iVar3;
					while (iVar2 <= 38)
					{
						iVar0 = &Global_1946804->f_57.f_430[iVar2];
						if (iVar0 <= -1 || iVar0 >= 39)
						{
						}
						else
						{
							iVar5 = func_649(iVar0, 1);
							if (func_747(iVar5, 8))
							{
							}
							else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
							{
							}
							else if (func_747(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
							{
							}
							else
							{
								iVar4 = func_632(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0] = &Global_1946804->f_57[iVar0];
									uParam0->f_1[iVar0]->f_1 = 0;
									if (bParam1)
									{
										func_653(iVar0, iParam2);
									}
								}
								iVar1 = (iVar1 + iVar4);
							}
						}
						iVar2++;
					}
				}
				if ((iVar1 + iVar8) < 31)
				{
					func_663(524288);
				}
			}
		}
	}
}

void func_658(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_467(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_467(iParam0, 1)])->f_10 - ((Global_1946804->f_57[func_467(iParam0, 1)])->f_10 && iParam1));
}

void func_659(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_749(&(uParam0->f_2[iVar0]), bParam1, bParam2);
		iVar0++;
	}
	if (func_92() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_750(2, Global_26796.f_776)) || Global_1946804->f_1497 != func_682(0))
		{
			if (Global_40.f_7157[Global_40.f_7729] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729] = (&Global_40.f_7157[Global_40.f_7729] - Global_40.f_7157[Global_40.f_7729] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729] |= 4096;
				Global_1946804->f_1497 = func_682(Global_40.f_7729);
				Global_1946804->f_1378 = func_682(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_751(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_752(0, 1);
	}
}

void func_660(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_661(struct<4> Param0)
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
		case 26:
			if (Global_1946804->f_850 >= 25)
			{
				return;
			}
			if (func_753(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1946804->f_850)
				{
					iVar1 = ((Global_1946804->f_855 + iVar0) % 25);
					if ((&Global_1946804->f_668[iVar1] == Param0 && Global_1946804->f_668[iVar1]->f_1 == Param0.f_1) && Global_1946804->f_668[iVar1]->f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_754(Param0);
			*Global_1946804->f_668[Global_1946804->f_856] = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_660(8);
			break;
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946804->f_851 >= 25)
			{
				return;
			}
			if (func_753(Param0))
			{
				return;
			}
			func_754(Param0);
			*Global_1946804->f_567[Global_1946804->f_851] = { Param0 };
			Global_1946804->f_851++;
			func_660(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_475(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

void func_662(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_8 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3[0] = 0;
	uParam0->f_3[1] = 0;
	uParam0->f_3[2] = 0;
	uParam0->f_3[3] = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	if (uParam0->f_12)
	{
		_0x13e7320c762f0477(uParam0->f_13);
	}
	uParam0->f_12 = 0;
}

void func_663(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

bool func_664(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_665(struct<4> Param0)
{
	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_753(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1] == Param0 && Global_1946804->f_769[iVar1]->f_2 == Param0.f_2) && Global_1946804->f_769[iVar1]->f_3 == Param0.f_3) && Global_1946804->f_769[iVar1]->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1] == 34 && func_753(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_754(Param0);
	*Global_1946804->f_769[Global_1946804->f_854] = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_660(8);
}

bool func_666()
{
	if (Global_1572887->f_12 != -1)
	{
		return false;
	}
	return Global_1347477->f_203;
}

float func_667(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

float func_668()
{
	fVar0 = func_755(13);
	iVar1 = func_756(fVar0);
	if (iVar1 == 0)
	{
		return 0.15f;
	}
	if (iVar1 == 10 || iVar1 == -10)
	{
		return -0.25f;
	}
	return 0f;
}

float func_669()
{
	if (is_ped_on_mount(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_670()
{
	if (func_428())
	{
		if (_get_special_edition_core_stats_bonus_enabled())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_671()
{
	if (Global_40.f_39 == 11966224)
	{
		return 0f;
	}
	if (Global_40.f_11095.f_67 >= 9)
	{
		return -0.2f;
	}
	if (Global_40.f_11095.f_67 >= 7)
	{
		return -0.05f;
	}
	return 0f;
}

float func_672()
{
	return Global_1955565->f_3;
}

void func_673(int iParam0, char* sParam1, bool bParam2)
{
	sVar0 = func_757(iParam0, 1, 0, 0);
	sVar0 = _create_var_string(2, sVar0, sParam1);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[1]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[1]), bParam2);
}

void func_674(int iParam0, float fParam1, bool bParam2)
{
	sVar0 = func_757(iParam0, 2, 0, 0);
	sVar0 = _create_var_string(2, sVar0, round(fParam1));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[2]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[2]), bParam2);
	if (fParam1 > 100f)
	{
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_20[2]), "RPG_ARROW_DOWN");
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_24[2]), "pausemenu_player_update");
		_databinding_write_data_hash_string(&(Global_1955569->f_5.f_2[iParam0]->f_28[2]), 859817522);
		_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_32[2]), true);
	}
	else if (fParam1 < 100f)
	{
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_20[2]), "RPG_ARROW_UP");
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_24[2]), "pausemenu_player_update");
		_databinding_write_data_hash_string(&(Global_1955569->f_5.f_2[iParam0]->f_28[2]), 1105014447);
		_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_32[2]), true);
	}
	else
	{
		_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_32[2]), false);
	}
}

float func_675(float fParam0, float fParam1, float fParam2)
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

bool func_676()
{
	return func_755(12) <= -99f;
}

bool func_677()
{
	return func_755(12) >= 99f;
}

int func_678()
{
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_226(iVar1) == -999503751)
		{
			if (func_758() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_679(int iParam0)
{
	if (!func_487(iParam0))
	{
		return false;
	}
	if (func_683(iParam0, 4))
	{
		return true;
	}
	return false;
}

bool func_680(int iParam0)
{
	if (!func_487(iParam0))
	{
		return false;
	}
	if (func_683(iParam0, 2))
	{
		return true;
	}
	return false;
}

void func_681(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_487(iParam0))
	{
		return;
	}
	if (!func_680(iParam0))
	{
		func_686(iParam0, 2);
		if (bParam2)
		{
			if (!func_685(0, 0, 1))
			{
				func_37(1, 4);
			}
		}
		if ((!func_684() && !bParam1) && !func_685(0, 0, 1))
		{
			func_509(_create_var_string(10, "OUT_JOURN_ADD", func_759(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

int func_682(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return 439606975;
		case 6:
			return 1661121390;
		case 7:
			return 1164374808;
		case 8:
			return 1160643979;
		case 9:
			return 624063935;
		case 10:
			return -1476781101;
		case 11:
			return 294553332;
		case 12:
			return 1788874135;
		case 15:
			return 1560492757;
		case 16:
			return -769081407;
		case 17:
			return 1902428294;
		case 18:
			return -2114499732;
		case 19:
			return 800827126;
		case 20:
			return 688004210;
		case 0:
			return 166243423;
		case 1:
			return 1383300684;
		case 2:
			return 2051441678;
		case 3:
			return 162509669;
		case 4:
			return 635948769;
		case 5:
			return 274995506;
		case 24:
			return -1826731591;
		case 25:
			return 2119049229;
		case 26:
			return 1352942778;
		case 27:
			return 1964379549;
		case 28:
			return 1201189539;
		case 21:
			return 1351927599;
		case 22:
			return 2032023096;
		case 23:
			return -291256376;
		case 66:
			return -1243402388;
		case 67:
			return 65931886;
		case 68:
			return 1371678229;
		case 69:
			return 2102263084;
		case 61:
			return -272211555;
		case 64:
			return -55563408;
		case 71:
			return -1914506115;
		case 75:
			return 802495462;
		case 77:
			return 842905332;
		case 78:
			return -1951220140;
		case 79:
			return 1511551084;
		case 81:
			return -1725704631;
		case 83:
			return 1257427489;
		case 85:
			return -659341240;
		case 87:
			return 2038771525;
		case 89:
			return -535599244;
		case 73:
			return -389591806;
		case 70:
			return -1205612021;
		case 93:
			return 890706995;
		case 90:
			return 1156438275;
		case 91:
			return -1611873049;
		case 92:
			return 594312243;
		case 94:
			return -978578725;
		case 13:
			return 1784889667;
		case 62:
			return -361635024;
		case 76:
			return 1460520700;
		case 80:
			return 523337834;
		case 82:
			return -19271249;
		case 84:
			return 214175524;
		case 86:
			return -1303643297;
		case 88:
			return 411856831;
		case 72:
			return -926815459;
		case 74:
			return -1300731953;
		case 65:
			return -409616653;
		case 29:
			return 509954990;
		case 30:
			return -445916744;
		case 31:
			return -866249154;
		case 32:
			return -2077063704;
		case 33:
			return 205207539;
		case 34:
			return -1033657275;
		case 35:
			return 1806002837;
		case 36:
			return 705324896;
		case 37:
			return -1541763703;
		case 38:
			return 387052410;
		case 39:
			return -361288914;
		case 40:
			return -911054515;
		case 41:
			return 1084200963;
		case 42:
			return 1847948074;
		case 43:
			return -1212526764;
		case 44:
			return 1851440270;
		case 45:
			return -2028985700;
		case 46:
			return 1074435214;
		case 47:
			return -883015675;
		case 48:
			return -1047155604;
		case 49:
			return 1123231221;
		case 50:
			return 1866989210;
		case 51:
			return 478183719;
		case 52:
			return -1698955868;
		case 53:
			return -2029378634;
		case 54:
			return 1339864416;
		case 55:
			return 890998115;
		case 56:
			return -1376288999;
		case 57:
			return -1041123771;
		case 58:
			return 1389254668;
		case 59:
			return -346112633;
		case 60:
			return 773309172;
		default:
			break;
	}
	return 0;
}

bool func_683(int iParam0, int iParam1)
{
	if (!func_487(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0] && iParam1) != 0;
}

bool func_684()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

bool func_685(int iParam0, bool bParam1, bool bParam2)
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
		if (func_760())
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
		iVar0 = func_761(&(Global_1898164->f_1[0]));
		if (func_321(iVar0) && func_762((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_504(&(Global_1898164->f_1[0])))
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

void func_686(int iParam0, int iParam1)
{
	if (!func_487(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0] = (Global_40.f_7157[iParam0] || iParam1);
}

int func_687(int iParam0, bool bParam1)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case -2061583405:
			iVar0 = Global_1946804->f_2657.f_26.f_1;
			break;
		case 81053684:
			iVar0 = 1;
			break;
		case -525676072:
			iVar0 = Global_1946804->f_2657.f_26.f_2;
			break;
		case -1719060085:
			iVar0 = 1;
			break;
		case -999503751:
			iVar0 = Global_1946804->f_2657.f_26;
			break;
		case -413129408:
			iVar0 = 1;
			break;
		default:
			return 0;
	}
	switch (iParam0)
	{
		case -999503751:
			if (iVar0 > 0 && !bParam1)
			{
				iVar0 = (iVar0 - 1);
			}
			break;
	}
	return iVar0;
}

void func_688(int iParam0, bool bParam1)
{
	iVar0 = func_763(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_225(50);
			}
			else
			{
				func_225(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_225(51);
			}
			else
			{
				func_225(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_764(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_257();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_257();
			}
			break;
		case 3:
			func_225(24);
			if (bParam1)
			{
				if (!func_764(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_257();
				}
			}
			break;
	}
}

void func_689(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_765(0))
			{
				iVar0++;
			}
			if (func_765(2))
			{
				iVar0++;
			}
			if (func_765(4))
			{
				iVar0++;
			}
			if (!func_766(16))
			{
				if (iVar0 == 1)
				{
					func_767();
					func_212(456, 1);
					func_768(16);
				}
			}
			if (!func_766(32))
			{
				if (iVar0 >= 3)
				{
					func_767();
					func_212(456, 1);
					func_768(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_765(1))
			{
				iVar0++;
			}
			if (func_765(3))
			{
				iVar0++;
			}
			if (func_765(7))
			{
				iVar0++;
			}
			if (!func_766(1))
			{
				if (iVar0 == 1)
				{
					func_769();
					func_212(457, 1);
					func_768(1);
				}
			}
			if (!func_766(2))
			{
				if (iVar0 >= 3)
				{
					func_769();
					func_212(457, 1);
					func_768(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_765(5))
			{
				iVar0++;
			}
			if (func_765(6))
			{
				iVar0++;
			}
			if (func_765(8))
			{
				iVar0++;
			}
			if (!func_766(4))
			{
				if (iVar0 == 1)
				{
					func_770();
					func_212(455, 1);
					func_768(4);
				}
			}
			if (!func_766(8))
			{
				if (iVar0 >= 3)
				{
					func_770();
					func_212(455, 1);
					func_768(8);
				}
			}
			break;
	}
}

void func_690(var uParam0)
{
	func_494(uParam0, 143479330);
	if (Global_1946804->f_1 == 2026485318)
	{
		func_494(uParam0, 617531372);
	}
	else
	{
		func_494(uParam0, 291123060);
	}
}

void func_691(var uParam0, int iParam1, struct<14> Param2)
{
	if (!func_771(uParam0))
	{
		return;
	}
	if (&Global_1224866 < 20)
	{
		Global_1224866 = &Global_1224866 + 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*Global_1224866->f_1[iVar0] = { *(Global_1224866->f_1[iVar0 + 1]) };
			iVar0++;
		}
	}
	Var1.f_7.f_2.f_1 = 10;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_6 = 1;
	Var1.f_7 = { Param2 };
	*(Global_1224866->f_1[(&Global_1224866 - 1)]) = { Var1 };
}

bool func_692(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (_item_database_fillout_ui_data(iParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (is_string_null_or_empty(&(Var3.f_2[iVar0])))
			{
				Jump @230; //curOff = 56
			}
			else if (is_string_null_or_empty(Var3.f_2[iVar0]->f_1))
			{
			}
			else
			{
				iVar1 = get_hash_key(&(Var3.f_2[iVar0]));
				iVar2 = get_hash_key(Var3.f_2[iVar0]->f_1);
				if (iParam2 != 0 && Var3.f_2[iVar0]->f_2 != iParam2)
				{
					Jump @230; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @230; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @230; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = iVar1;
					uParam1->f_1 = iVar2;
					uParam1->f_2 = iParam2;
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

int func_693(int iParam0)
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

int func_694(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_ped_injured(iParam0))
	{
		return 0;
	}
	iVar4 = _0x4642182a298187d0(iParam0, iParam1, &uVar0, 4, 1);
	if (iVar4 != 0)
	{
		return 1;
	}
	return 0;
}

bool func_695(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		return _is_ped_getting_into_a_mount_seat(iParam0, true);
	}
	return false;
}

bool func_696(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!does_entity_exist(iParam0))
		{
			return false;
		}
		if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
		{
			return false;
		}
	}
	fVar0 = get_entity_speed(iParam0);
	fVar1 = _0xca95924c893a0c91(iParam0, fVar0);
	if (fVar1 <= 1.5f)
	{
		return true;
	}
	return false;
}

void func_697(bool bParam0)
{
	func_772(bParam0);
	Global_1955569->f_1.f_1 = bParam0;
	if (bParam0 == 1)
	{
		_hide_hud_component(121713391);
	}
	else
	{
		_display_hud_component(121713391);
	}
}

bool func_698(int iParam0)
{
	switch (iParam0)
	{
		case -2086875988:
		case -2081966149:
		case -2075588078:
		case -2046943672:
		case -2045269112:
		case -2019245895:
		case -2014377075:
		case -2012656841:
		case -2007761031:
		case -2006398858:
		case -1980150291:
		case -1977628089:
		case -1966295439:
		case -1925758912:
		case -1922688829:
		case -1901892087:
		case -1835251821:
		case -1769295812:
		case -1765531164:
		case -1745321414:
		case -1714108174:
		case -1688959031:
		case -1676898583:
		case -1646049752:
		case -1632694866:
		case -1629501717:
		case -1614719852:
		case -1607722277:
		case -1603909164:
		case -1579174863:
		case -1533320518:
		case -1520417507:
		case -1483559144:
		case -1464743433:
		case -1458432563:
		case -1448924971:
		case -1423504183:
		case -1418951751:
		case -1329383517:
		case -1270572406:
		case -1263119823:
		case -1258801034:
		case -1161832176:
		case -1154137714:
		case -1135378761:
		case -1116138991:
		case -1112260815:
		case -1101883765:
		case -1070459848:
		case -1067338663:
		case -1049237750:
		case -1047115350:
		case -1002525623:
		case -944019243:
		case -937140420:
		case -920985758:
		case -823649241:
		case -820854800:
		case -814357706:
		case -792643455:
		case -781994133:
		case -779472377:
		case -756996682:
		case -747792496:
		case -695175124:
		case -670436990:
		case -639059862:
		case -607414220:
		case -572941403:
		case -558131359:
		case -550289621:
		case -538512200:
		case -464684897:
		case -446093729:
		case -373817191:
		case -350169314:
		case -343178443:
		case -272492171:
		case -265719023:
		case -253049070:
		case -229065721:
		case -216561112:
		case -205121720:
		case -167880668:
		case -161553439:
		case -98087368:
		case -77509825:
		case -71527226:
		case -55633154:
		case -46607261:
		case -46389610:
		case -17071680:
		case 4991732:
		case 20251888:
		case 65010948:
		case 68512371:
		case 93760123:
		case 122377164:
		case 184120185:
		case 224310170:
		case 230517792:
		case 236407543:
		case 254009656:
		case 300505615:
		case 316325071:
		case 323324563:
		case 351634388:
		case 382040614:
		case 401817002:
		case 426274298:
		case 430764551:
		case 434730246:
		case 477547053:
		case 482703333:
		case 513427234:
		case 594026681:
		case 624882545:
		case 686051865:
		case 716675958:
		case 755774783:
		case 774211111:
		case 794654164:
		case 823321772:
		case 836525272:
		case 848012614:
		case 852072701:
		case 888681950:
		case 907019741:
		case 972892334:
		case 988668512:
		case 993577366:
		case 1006076574:
		case 1010320580:
		case 1020041649:
		case 1051047356:
		case 1092921608:
		case 1143979484:
		case 1149349599:
		case 1231309423:
		case 1234550949:
		case 1245530084:
		case 1253299569:
		case 1266159496:
		case 1266592839:
		case 1270841555:
		case 1276534479:
		case 1281122482:
		case 1294255258:
		case 1304311224:
		case 1320786287:
		case 1347320453:
		case 1367851675:
		case 1372065533:
		case 1407740785:
		case 1419055257:
		case 1436424114:
		case 1439158431:
		case 1446935015:
		case 1479772615:
		case 1483156731:
		case 1485366395:
		case 1599685341:
		case 1604947233:
		case 1643370744:
		case 1701730764:
		case 1705504999:
		case 1726560673:
		case 1785923813:
		case 1815090590:
		case 1841492722:
		case 1966444740:
		case 1998496121:
		case 1999476738:
		case 2000903921:
		case 2001384088:
		case 2029634351:
		case 2041494024:
		case 2042088799:
		case 2100656433:
		case 2115504616:
		case 2141515026:
			return true;
		default:
			break;
	}
	return false;
}

void func_699(int iParam0, int iParam1, bool bParam2)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	_set_ped_component_disabled(iParam0, -1725579161, 1);
	if (bParam2)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

void func_700(int iParam0, bool bParam1)
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

void func_701(int iParam0, int iParam1)
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

bool func_702()
{
	if (func_773())
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		if (Global_1935630->f_44 == 2055893578)
		{
			return is_control_pressed(0, 130948705);
		}
		return get_ped_reset_flag(Global_35, 311);
	}
	else
	{
		return &(Global_1955569->f_992[2]);
	}
	return false;
}

void func_703(var uParam0, var uParam1)
{
	iVar2 = player_id();
	if (!_0x72ad59f7b7fb6e24(iVar2, 200))
	{
		*uParam1 = 0;
		return;
	}
	if (_0x1a6e84f13c952094(iVar2, 200, uParam0))
	{
		iVar1 = 0;
		while (iVar1 < *uParam0)
		{
			if (!does_entity_exist(uParam0[iVar1]))
			{
			}
			else if (!is_ped_human(uParam0[iVar1]) && !(decor_exist_on(uParam0[iVar1], "HorseTeamA") || decor_exist_on(uParam0[iVar1], "HorseTeamB")))
			{
			}
			else if (decor_exist_on(uParam0[iVar1], "bIgnoreDamageChecking"))
			{
			}
			else
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	*uParam1 = iVar0;
}

bool func_704(bool bParam0, int iParam1, int iParam2)
{
	if (does_entity_exist(Global_1935630->f_32))
	{
		if (!bParam0 || is_ped_human(Global_1935630->f_32))
		{
			*iParam1 = Global_1935630->f_32;
			iVar0 = 1;
		}
	}
	if (does_entity_exist(Global_1935630->f_33))
	{
		if (!bParam0 || is_ped_human(Global_1935630->f_33))
		{
			if (_is_ped_hogtied(Global_1935630->f_33) || is_entity_dead(Global_1935630->f_33))
			{
				*iParam2 = Global_1935630->f_33;
				iVar0 = 1;
			}
		}
	}
	if (Global_1935630->f_30 && !is_ped_injured(Global_35))
	{
		iVar1 = _get_lassoed_entity(Global_35);
		if (does_entity_exist(iVar1))
		{
			if (!bParam0 || is_ped_human(iVar1))
			{
				*iParam1 = iVar1;
				iVar0 = 1;
			}
		}
	}
	return iVar0;
}

int func_705(var uParam0)
{
	if (iVar0 == 0)
	{
		if (is_control_just_pressed(0, -171675621))
		{
			if (_0x3ee1f7a8c32f24e1(player_id(), &iVar1, 0, 0))
			{
				if (does_entity_exist(iVar1))
				{
					if (is_entity_a_ped(iVar1))
					{
						if (_is_this_model_a_horse(get_entity_model(iVar1)))
						{
							iVar0 = get_ped_index_from_entity_index(iVar1);
							return iVar0;
						}
					}
				}
			}
		}
	}
	if (uParam0->f_6 == 3)
	{
		if (iVar0 == 0)
		{
			if (!Global_1935630->f_12)
			{
				iVar0 = _0x4b19f171450e0d4f(Global_35);
			}
		}
		if (iVar0 == 0)
		{
			iVar0 = _get_lassoed_entity(Global_35);
		}
		if (iVar0 != 0)
		{
			if (does_entity_exist(iVar0))
			{
				if (!_is_this_model_a_horse(get_entity_model(iVar0)))
				{
					iVar0 = 0;
				}
			}
		}
	}
	return iVar0;
}

void func_706(var uParam0)
{
	if (Global_1935630->f_38 == 0)
	{
		func_512(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (does_entity_exist(&(Global_1935630->f_34[iVar0])))
			{
				if (!_0x88ad6cc10d8d35b2(&(Global_1935630->f_34[iVar0])))
				{
					func_511(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_707(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_708(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_709(get_entity_coords(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_709(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	bVar2 = get_hud_screen_position_from_world_position(vParam0, &fVar0, &fVar1);
	if (bVar2 == 0)
	{
		if (((fVar0 > fParam3 && fVar0 < fParam4) && fVar1 > fParam5) && fVar1 < fParam6)
		{
			return true;
		}
	}
	return false;
}

bool func_710(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3 || !is_entity_dead(iParam0))
	{
		if (_0x9e2d5d6bc97a5f1e(iParam0, -1569615261, iParam1))
		{
			return true;
		}
		else if (!bParam2)
		{
			if (is_weapon_valid(Global_1935630->f_44))
			{
				if (_is_weapon_melee(Global_1935630->f_44) || Global_1935630->f_44 == -618550132)
				{
					if (_0x9e2d5d6bc97a5f1e(iParam0, Global_1935630->f_44, iParam1))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

int func_711(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	iVar0 = -1569615261;
	if (is_entity_dead(iParam0) || !is_ped_human(iParam0))
	{
		return iVar0;
	}
	if (get_current_ped_weapon(iParam0, &iVar0, bParam1, iParam2, bParam3))
	{
		return iVar0;
	}
	return iVar0;
}

struct<4> func_712()
{
	return Var0;
}

float func_713(int iParam0)
{
	iVar4 = func_582(iParam0);
	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			fVar3 = &Global_40.f_11095.f_11[iVar4];
			iVar5 = func_714(fVar3);
			iVar0 = iVar5;
			iVar6 = iVar0 + 1;
			iVar1 = (func_774(iVar6) - func_774(iVar5));
			fVar2 = (IntToFloat(iVar1) * 0.25f);
			return fVar2;
		default:
			break;
	}
	return -1f;
}

int func_714(float fParam0)
{
	if (fParam0 <= IntToFloat(-1))
	{
		return -1;
	}
	if (fParam0 < IntToFloat(50))
	{
		return 0;
	}
	if (fParam0 < IntToFloat(100))
	{
		return 1;
	}
	if (fParam0 < IntToFloat(200))
	{
		return 2;
	}
	if (fParam0 < IntToFloat(350))
	{
		return 3;
	}
	if (fParam0 < IntToFloat(550))
	{
		return 4;
	}
	if (fParam0 < IntToFloat(800))
	{
		return 5;
	}
	if (fParam0 < IntToFloat(1100))
	{
		return 6;
	}
	return 7;
}

int func_715(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 1;
		case 2:
			return 1;
		case 4:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_716(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 1;
		case 2:
			return 1;
		case 8:
			return 1;
		case 9:
			return 1;
		case 10:
			return 1;
		case 11:
			return 1;
		case 12:
			return 1;
		case 13:
			return 1;
		case 14:
			return 1;
		case 16:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_717(float fParam0, float fParam1)
{
	iVar0 = func_714(fParam0);
	fVar1 = to_float(func_774(iVar0));
	fVar2 = to_float(func_774(iVar0 + 1));
	fVar3 = (fVar2 - fVar1);
	iVar4 = floor((((fParam0 - fVar1) / fVar3) * 4f));
	iVar5 = floor((((fParam1 - fVar1) / fVar3) * 4f));
	if (iVar4 == iVar5)
	{
		return 0;
	}
	if (iVar5 >= 4 || iVar5 < 0)
	{
		return 0;
	}
	return iVar5;
}

int func_718(int iParam0)
{
	if (func_775(iParam0, &iVar0))
	{
		return func_774(iVar0);
	}
	switch (iParam0)
	{
		case 1:
			if (func_776())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 0:
			if (func_776())
			{
				return 550;
			}
			else
			{
				return 100;
			}
			break;
		case 2:
			if (func_776())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 4:
			return 0;
	}
	return 0;
}

int func_719(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 246;
		case 2:
			return 247;
		case 1:
			return 248;
		default:
			break;
	}
	return -1;
}

void func_720(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == 0)
	{
		return;
	}
	iVar3 = iParam1 + 1;
	if (iParam2 != 0)
	{
		sVar0 = "RPG_LEVEL_PROGRESS_TOAST";
		sVar1 = _create_var_string(2, "RPG_LEVEL_PROGRESS_BODY", iParam2 * 25, iVar3 + 1);
	}
	else
	{
		sVar0 = "RPG_LEVEL_INCREASED_TOAST";
		sVar1 = _create_var_string(2, "RPG_LEVEL_INCREASED_BODY", iVar3);
		bVar2 = true;
	}
	iVar3 = (iVar3 + func_777(iParam0));
	sVar4 = func_779(func_778(iVar3, iParam2));
	sVar6 = func_780(iParam0);
	if (!is_string_null_or_empty(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = _create_var_string(10, sVar0, func_781(iParam0));
	iVar8 = func_782(iParam0);
	iVar9 = get_hash_key(sVar4);
	if (bVar2)
	{
		Var10 = sVar7;
		Var10.f_1 = sVar1;
		Var10.f_3 = iVar9;
		Var10.f_2 = iVar8;
		Var10.f_4 = 1;
		Var10.f_5 = func_783(iParam0);
		_uilog_post_notification(&Var10);
	}
	func_407(sVar7, sVar1, iVar8, iVar9, -479097442, "INPUT_FEED_INTERACT_GENERIC", func_784(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

void func_721(int iParam0, int iParam1)
{
	Global_1347477->f_9[iParam0] = (get_game_timer() + iParam1);
}

bool func_722(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_723(int iParam0)
{
	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 = (iParam0 && (iParam0 - 1));
		iVar0++;
	}
	return iVar0;
}

bool func_724(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

bool func_725(int iParam0)
{
	switch (iParam0)
	{
		case 444160793:
			return true;
		case -1969404854:
			return true;
		case 1761263432:
			return true;
		case -843795569:
			return true;
		case -832850511:
			return true;
		case -1464585113:
			return true;
		case -1290897778:
			return true;
		case -100913452:
			return true;
		case 313332607:
			return true;
		case -124539232:
			return true;
		case 59384454:
			return true;
		case 905173572:
			return true;
		case 1432949803:
			return true;
		case -983831788:
			return true;
		case -1882344824:
			return true;
		default:
			break;
	}
	return false;
}

int func_726(int iParam0)
{
	switch (iParam0)
	{
		case -1866642239:
			return 1;
		case -935543049:
			return 1;
		case 102446365:
			return 1;
		case 924882045:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_727(int iParam0)
{
	Var1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_785(&iVar0, 0, iVar95, &Var1) && !func_785(&iVar0, 1, iVar95, &Var1))
		{
		}
		else if (is_model_a_ped(Var1))
		{
			func_786(iVar0, &Var1);
			if (func_201(Var1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

void func_728()
{
	if (!_0x7c7e4ab748ea3b07())
	{
		return;
	}
	uVar0 = 29;
	func_787(Global_35, &uVar0);
	Var30 = { func_570(0) };
	_0xe36d4a38d28d9cfb(0);
	_0xc04f47d488ef9eba(5, 1, &Var30, 0);
	_0x5d6182f3bce1333b(5, -142743235);
	func_788(0);
	func_789(7);
	func_790(-1623728698, 1, 1, 0);
	if (func_489() == 1160113249)
	{
		func_790(-763730846, 1, 1, 1);
		func_790(-361635024, 1, 1, 1);
	}
	func_791(Global_35, &uVar0);
}

int func_729(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_792(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_730(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_731(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_732(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_733(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_734(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
		default:
			break;
	}
	return 30;
}

void func_735(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_793(iParam0, iParam6);
	func_794(iParam0, iParam5);
	func_795(iParam0, iParam4);
	func_796(iParam0, iParam3);
	func_797(iParam0, iParam2);
	func_798(iParam0, iParam1);
}

int func_736(int iParam0)
{
	if (!_item_database_get_fits_slot_info(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_466(iVar0);
}

int func_737(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = func_307(0);
	}
	if (!_0x112bca290d2eb53c(iParam1, iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5))
	{
		return -15;
	}
	func_793(&uVar6, iVar0);
	func_794(&uVar6, iVar1);
	func_795(&uVar6, iVar2);
	func_796(&uVar6, iVar3);
	func_797(&uVar6, iVar4);
	func_798(&uVar6, iVar5);
	return uVar6;
}

bool func_738(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_799(iParam1) || !func_799(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_739(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_193(1356759001) };
	stat_id_set_int(&Var0, iParam0, true);
}

void func_740(var uParam0, int iParam1)
{
	Var2 = 39;
	Var4 = 10;
	Var4.f_1 = 39;
	Var4.f_1.f_2 = 39;
	Var4.f_1.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iVar0 < *uParam0)
		{
			if ((func_800(uParam0->f_2[iVar0], 2) || &uParam0->f_2[iVar0] == iParam1) || &uParam0->f_2[iVar0] == 39)
			{
				*uParam0->f_2[iVar0] = { Var2 };
			}
			else
			{
				if (func_800(uParam0->f_2[iVar0], 1))
				{
					func_801(uParam0->f_2[iVar0], 2, 6);
				}
				*Var4[iVar1] = { *uParam0->f_2[iVar0] };
				iVar1++;
				*uParam0->f_2[iVar0] = { Var2 };
			}
			iVar0++;
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				*uParam0->f_2[iVar0] = { *Var4[iVar0] };
				iVar0++;
			}
			*uParam0 = iVar1;
		}
	}
}

void func_741(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_802(uParam0, 1))
	{
		func_803(uParam0, 1);
	}
	uParam0->f_2[*uParam0]->f_1 = iParam2;
	uParam0->f_2[*uParam0] = iParam1;
	*uParam0++;
}

bool func_742(int iParam0, int iParam1)
{
	return (Global_1946804->f_57[iParam0]->f_9 && iParam1) != 0;
}

void func_743(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	if (bParam4)
	{
		iVar0 = 3;
	}
	iVar1 = 12;
	iVar2 = 20;
	iVar3 = 16;
	if (uParam0->f_1[iVar3]->f_1 == 1216705912 || uParam0->f_1[iVar3]->f_1 == 654181853)
	{
		if (&uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1])
		{
			uParam0->f_1[iVar3]->f_1 = 1334603721;
		}
		else
		{
			uParam0->f_1[iVar3]->f_1 = -1539589426;
			uParam0->f_1[iVar1]->f_1 = 1155669136;
		}
		if (bParam2)
		{
			func_653(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_653(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2]->f_1 == -1333118809 || uParam0->f_1[iVar2]->f_1 == -1158926300)
	{
		uParam0->f_1[iVar2]->f_1 = 1155669136;
		if (bParam3)
		{
			func_653(iVar2, iVar0);
		}
	}
}

int func_744(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_489();
	}
	iVar0 = 0;
	if (iParam0 == 24043185)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_745(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam2 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < _0xffcc2db2d9953401(iParam0, iParam1, bParam3))
	{
		if (_0x6243635af2f1b826(iParam0, iVar0, iParam1, bParam3) == iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_746(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return true;
}

bool func_747(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_467(iParam0, 1)])->f_10 && iParam1) != 0;
}

int func_748(var uParam0)
{
	iVar0 = 25;
	iVar1 = 0;
	if (&uParam0->f_1[iVar0] != &Global_1946804->f_57[iVar0])
	{
		iVar1++;
	}
	iVar0 = 26;
	if (&uParam0->f_1[iVar0] != &Global_1946804->f_57[iVar0])
	{
		iVar1++;
	}
	return iVar1;
}

void func_749(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*Global_1946804->f_1497.f_1[iParam0] = { *Global_1946804->f_1378.f_1[iParam0] };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_92() == -1)
	{
		func_804(Global_1946804->f_1497.f_1[iParam0], iParam0, Global_26796.f_776);
	}
	else
	{
		func_805(Global_1946804->f_1497.f_1[iParam0], iParam0, Global_36638.f_45.f_350.f_1011);
	}
}

bool func_750(int iParam0, int iParam1)
{
	if (func_92() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			return (Global_26796.f_26[iParam1] && iParam0) != 0;
		}
		return false;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		return (Global_36638.f_45.f_350.f_26[iParam1] && iParam0) != 0;
	}
	return false;
}

void func_751(int iParam0, bool bParam1, int iParam2)
{
	func_806(&(Global_1946804->f_1378), iParam0);
	func_807(2, iParam0, 6);
	if (bParam1)
	{
		func_752(0, 1);
	}
}

void func_752(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_808(0);
	}
	if (bParam0)
	{
		func_660(8);
		func_660(512);
	}
	else
	{
		func_660(8);
		func_660(16);
	}
}

bool func_753(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_754(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

float func_755(int iParam0)
{
	return &(Global_40.f_11095.f_11[iParam0]);
}

int func_756(float fParam0)
{
	return round(((fParam0 / 100f) * to_float(10)));
}

char* func_757(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					if (bParam2)
					{
						return "PMPLAYER_CONDITION_TEMPERATURE_FAIR";
					}
					else
					{
						return func_501(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_501(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
			}
			break;
		case 1:
		case 2:
		case 3:
			switch (iParam1)
			{
				case 0:
					return "PMPLAYER_CORE_PC_VALUE";
				case 1:
					return "PMPLAYER_TIME_VALUE_MINUTES";
				case 2:
					return "PMPLAYER_CORE_PC_VALUE";
				default:
					break;
			}
			break;
	}
	return "";
}

int func_758()
{
	return Global_1946804->f_1497;
}

char* func_759(int iParam0)
{
	iVar0 = func_682(iParam0);
	if (iVar0 == 0)
	{
		return "OUT_UNKNOWN";
	}
	return func_611(iVar0);
}

bool func_760()
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

int func_761(int iParam0)
{
	if (!func_504(iParam0))
	{
		return -1;
	}
	return func_810(func_809(iParam0));
}

bool func_762(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_763(int iParam0)
{
	if (func_811(iParam0))
	{
		iVar0 = 0;
	}
	else if (func_812(iParam0))
	{
		iVar0 = 1;
	}
	else if (func_813(iParam0))
	{
		iVar0 = 2;
	}
	else if (func_814(iParam0))
	{
		iVar0 = 3;
	}
	return iVar0;
}

bool func_764(int iParam0)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_252(func_815(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 > 1)
	{
		return true;
	}
	return false;
}

bool func_765(int iParam0)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_252(func_816(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= 4)
	{
		return true;
	}
	return false;
}

bool func_766(int iParam0)
{
	return (Global_40.f_12003 && iParam0) != 0;
}

void func_767()
{
	if (func_92() != -1)
	{
		return;
	}
	func_276(1654063339, 1, 752097756);
	iVar0 = func_585(1);
	func_720(1, iVar0, 0);
}

void func_768(int iParam0)
{
	Global_40.f_12003 = (Global_40.f_12003 || iParam0);
}

void func_769()
{
	if (func_92() != -1)
	{
		return;
	}
	func_276(1623931083, 1, 752097756);
	iVar0 = func_585(2);
	func_720(2, iVar0, 0);
}

void func_770()
{
	if (func_92() != -1)
	{
		return;
	}
	func_276(-1845241476, 1, 752097756);
	iVar0 = func_585(0);
	func_720(0, iVar0, 0);
}

bool func_771(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

void func_772(bool bParam0)
{
	_0xb6fd96420c0126a1(-1056478928, bParam0);
}

bool func_773()
{
	switch (Global_1935630->f_44)
	{
		case -164645981:
		case -160924582:
		case 827679807:
		case 1247405313:
			return true;
		default:
			break;
	}
	return false;
}

int func_774(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 0:
			return 0;
		case 1:
			return 50;
		case 2:
			return 100;
		case 3:
			return 200;
		case 4:
			return 350;
		case 5:
			return 550;
		case 6:
			return 800;
		case 7:
			return 1100;
		default:
			break;
	}
	return 0;
}

bool func_775(int iParam0, int iParam1)
{
	return false;
}

bool func_776()
{
	return false;
}

int func_777(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return _0xe787f05dfc977bde(func_307(0), -1845241476, 0);
		case 1:
			return _0xe787f05dfc977bde(func_307(0), 1654063339, 0);
		case 2:
			return _0xe787f05dfc977bde(func_307(0), 1623931083, 0);
	}
	return 0;
}

struct<4> func_778(int iParam0, int iParam1)
{
	if (iParam0 >= 10)
	{
		iParam1 = 0;
	}
	StringCopy(&cVar0, "TOAST_RPG_LEVEL_", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	StringConCat(&cVar0, "_", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	return cVar0;
}

char* func_779(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

char* func_780(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "health";
		case 0:
			return "stamina";
		case 2:
			return "dead_eye_level_up";
		default:
			break;
	}
	return "";
}

char* func_781(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "RPG_STAMINA";
		case 0:
			return "RPG_HEALTH";
		case 2:
			return "RPG_DEADEYE";
		default:
			break;
	}
	return "";
}

int func_782(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 444492752;
		case 0:
			return 1874233471;
		case 2:
			return -1285232277;
		default:
			break;
	}
	return 0;
}

int func_783(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 3;
		default:
			break;
	}
	return 0;
}

int func_784(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1896546861;
		case 1:
			return 304419444;
		case 2:
			return 1497019382;
		default:
			break;
	}
	return 0;
}

bool func_785(int iParam0, int iParam1, int iParam2, var uParam3)
{
	if (func_817(iParam1) && !func_818(iParam1))
	{
		iVar0 = func_819(iParam1);
	}
	else
	{
		return false;
	}
	func_820(uParam3);
	iVar5 = func_821(iParam2);
	if (!_0x608bc6a6aacd5036(&Var1, iVar0, iVar5, 0))
	{
		return false;
	}
	*iParam0 = Var1.f_3;
	if (!does_entity_exist(*iParam0))
	{
		return false;
	}
	if (is_entity_a_mission_entity(*iParam0) && !_0x88ad6cc10d8d35b2(*iParam0))
	{
		return false;
	}
	*uParam3 = get_entity_model(*iParam0);
	uParam3->f_2 = _0xd21c7418c590bb40(*iParam0);
	uParam3->f_3 = _get_entity_carry_config(*iParam0);
	return true;
}

void func_786(int iParam0, int iParam1)
{
	iVar0 = get_ped_index_from_entity_index(iParam0);
	if (does_entity_exist(iVar0))
	{
		func_822(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_823(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

void func_787(int iParam0, var uParam1)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	uVar0 = 29;
	_copy_memory(uParam1, &uVar0, 30);
	iVar30 = 0;
	while (iVar30 < 29)
	{
		iVar31 = 0;
		get_current_ped_weapon(Global_35, &iVar31, false, iVar30, true);
		if (func_416(iVar31))
		{
			(*uParam1)[iVar30] = iVar31;
		}
		else
		{
			(*uParam1)[iVar30] = 0;
		}
		iVar30++;
	}
}

void func_788(bool bParam0)
{
	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_201(iVar1, 0))
		{
			func_824(iVar1, 0, bParam0);
		}
		Global_1946804->f_2657[iVar0] = 0;
		iVar0 = (iVar0 + -1);
	}
	Global_1946804->f_2657.f_20 = 0;
	Global_1946804->f_2657.f_21 = 0;
	Global_1946804->f_2657.f_22 = 0;
	Global_1946804->f_2657.f_23 = 0;
	Global_1946804->f_2657.f_24 = 0;
	Global_1946804->f_2657.f_25 = 0;
	Global_1946804->f_2657.f_19 = 0;
	Global_1946804->f_2657.f_26.f_6 = 0;
}

void func_789(int iParam0)
{
	Global_1946804->f_2657.f_26.f_2 = 3;
	Global_1946804->f_2657.f_26.f_1 = 3;
	Global_1946804->f_2657.f_26 = 3;
	if (func_92() == -1)
	{
		func_825(352481484);
		iVar0 = 0;
		while (iVar0 < Global_26796.f_19)
		{
			Global_1946804->f_2657[iVar0] = &Global_26796[iVar0];
			iVar0++;
		}
		Global_1946804->f_2657.f_20 = Global_26796.f_20;
		Global_1946804->f_2657.f_21 = Global_26796.f_21;
		Global_1946804->f_2657.f_22 = Global_26796.f_22;
		Global_1946804->f_2657.f_23 = Global_26796.f_23;
		Global_1946804->f_2657.f_24 = Global_26796.f_24;
		Global_1946804->f_2657.f_25 = Global_26796.f_25;
		Global_1946804->f_2657.f_19 = Global_26796.f_19;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_36638.f_45.f_350.f_19)
		{
			Global_1946804->f_2657[iVar0] = &Global_36638.f_45.f_350[iVar0];
			iVar0++;
		}
		Global_1946804->f_2657.f_20 = Global_36638.f_45.f_350.f_20;
		Global_1946804->f_2657.f_21 = Global_36638.f_45.f_350.f_21;
		Global_1946804->f_2657.f_22 = Global_36638.f_45.f_350.f_22;
		Global_1946804->f_2657.f_23 = Global_36638.f_45.f_350.f_23;
		Global_1946804->f_2657.f_24 = Global_36638.f_45.f_350.f_24;
		Global_1946804->f_2657.f_25 = Global_36638.f_45.f_350.f_25;
		Global_1946804->f_2657.f_19 = Global_36638.f_45.f_350.f_19;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar2 = &Global_1946804->f_2657[iVar0];
		if (func_226(iVar2) != -999503751)
		{
			func_826(&(Global_1946804->f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (func_827(iVar2, 0))
		{
			func_828(iVar2, &Global_1946804->f_1497.f_1[iVar1] == &Global_1946804->f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_790(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_829(iParam0))
	{
		return;
	}
	iVar0 = func_226(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_830(iParam0, &(Global_1946804->f_2657.f_21), Global_1946804->f_2657.f_26.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_830(iParam0, &(Global_1946804->f_2657.f_23), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_830(iParam0, &(Global_1946804->f_2657.f_20), Global_1946804->f_2657.f_26, bParam1);
			break;
		case -525676072:
			bVar1 = func_830(iParam0, &(Global_1946804->f_2657.f_22), Global_1946804->f_2657.f_26.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_830(iParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_830(iParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == func_831(0))
	{
		func_832(iParam0, 1);
		if (func_489() == 1160113249)
		{
			func_832(func_831(-2125499975), 0);
		}
		else
		{
			func_832(func_831(1160113249), 0);
		}
	}
	func_833();
	if (func_834(iVar0))
	{
		_0x766315a564594401(func_307(0), iParam0, 0);
	}
	func_828(iParam0, bParam3);
	if (bParam2)
	{
		func_752(0, 0);
	}
}

void func_791(int iParam0, var uParam1)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 29)
	{
		if (uParam1[iVar0] != 0)
		{
			if (!has_ped_got_weapon(Global_35, uParam1[iVar0], 0, false))
			{
				if (func_415(uParam1[iVar0]))
				{
					_give_weapon_to_ped_2(iParam0, uParam1[iVar0], 0, false, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
			}
			iVar1 = 0;
			get_current_ped_weapon(Global_35, &iVar1, false, iVar0, true);
			if (iVar1 != uParam1[iVar0])
			{
				set_current_ped_weapon(Global_35, uParam1[iVar0], true, iVar0, false, false);
			}
		}
		iVar0++;
	}
}

int func_792(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_793(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*iParam0 = (*iParam0 || shift_left((1898 - iParam1), 26));
		*iParam0 |= -2147483648;
	}
	else
	{
		*iParam0 = (*iParam0 || shift_left((iParam1 - 1898), 26));
		*iParam0 = (*iParam0 - *iParam0 & -2147483648);
	}
}

void func_794(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_795(int iParam0, int iParam1)
{
	iVar0 = func_730(*iParam0);
	iVar1 = func_729(*iParam0);
	if (iParam1 < 1 || iParam1 > func_734(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_796(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_797(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_798(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

bool func_799(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_733(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_732(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_128(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_729(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_730(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_731(iParam0);
	if (iVar5 < 1 || iVar5 > func_734(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_800(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_801(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_802(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_803(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_804(var uParam0, int iParam1, int iParam2)
{
	*Global_26796.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_805(var uParam0, int iParam1, int iParam2)
{
	*Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_806(var uParam0, int iParam1)
{
	if (func_92() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		Global_26796.f_26[iParam1]->f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_804(uParam0->f_1[iVar0], iVar0, iParam1);
			iVar0++;
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	Global_36638.f_45.f_350.f_26[iParam1]->f_1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		func_805(uParam0->f_1[iVar0], iVar0, iParam1);
		iVar0++;
	}
}

void func_807(int iParam0, int iParam1, int iParam2)
{
	if (func_92() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			Global_26796.f_26[iParam1] = (Global_26796.f_26[iParam1] || iParam0);
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		Global_36638.f_45.f_350.f_26[iParam1] = (Global_36638.f_45.f_350.f_26[iParam1] || iParam0);
	}
}

void func_808(int iParam0)
{
	Global_1946804->f_978 = iParam0;
}

int func_809(int iParam0)
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

int func_810(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

bool func_811(int iParam0)
{
	if (!func_201(iParam0, 0))
	{
		return false;
	}
	if (func_222(iParam0, -1066545920))
	{
		return true;
	}
	return false;
}

bool func_812(int iParam0)
{
	if (!func_201(iParam0, 0))
	{
		return false;
	}
	if (func_222(iParam0, -284267618))
	{
		return true;
	}
	return false;
}

bool func_813(int iParam0)
{
	if (!func_201(iParam0, 0))
	{
		return false;
	}
	if (func_222(iParam0, 363491182))
	{
		return true;
	}
	return false;
}

bool func_814(int iParam0)
{
	if (!func_201(iParam0, 0))
	{
		return false;
	}
	if (func_222(iParam0, 1406113494))
	{
		return true;
	}
	return false;
}

int func_815(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_835(iParam0);
		case 1:
			return func_836(iParam0);
		case 2:
			return func_837(iParam0);
		case 3:
			return func_838(iParam0);
	}
	return 0;
}

int func_816(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_839(iParam0);
		case 1:
			return func_840(iParam0);
		case 2:
			return func_841(iParam0);
		case 3:
			return func_842(iParam0);
		case 4:
			return func_843(iParam0);
		case 5:
			return func_844(iParam0);
		case 6:
			return func_845(iParam0);
		case 7:
			return func_846(iParam0);
		case 8:
			return func_847(iParam0);
	}
	return 0;
}

bool func_817(int iParam0)
{
	iParam0 = func_848(iParam0);
	if (iParam0 <= -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (does_entity_exist(Global_1900383[iParam0]))
	{
		return true;
	}
	return false;
}

bool func_818(int iParam0)
{
	iParam0 = func_848(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_817(iParam0))
	{
		return false;
	}
	iVar0 = func_819(iParam0);
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return true;
	}
	return false;
}

int func_819(int iParam0)
{
	iParam0 = func_848(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1900383[iParam0];
}

void func_820(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = -1;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		uParam0->f_10[iVar0] = 0;
		uParam0->f_10[iVar0]->f_1 = 0;
		uParam0->f_10[iVar0]->f_2 = 0;
		uParam0->f_10[iVar0]->f_3 = 0;
		uParam0->f_10[iVar0]->f_4 = 0;
		uParam0->f_10[iVar0]->f_5 = 0;
		uParam0->f_10[iVar0]->f_6 = 0;
		uParam0->f_10[iVar0]->f_7 = 0;
		iVar0++;
	}
	uParam0->f_91 = 0;
	uParam0->f_92 = 0;
	uParam0->f_93 = 0;
}

int func_821(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4;
		case 1:
			return 5;
		case 2:
			return 6;
	}
	return 0;
}

void func_822(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam3 = _get_ped_damage(iParam0);
	*uParam2 = _0xf8b48a361dc388ae(iParam0);
	if (*uParam2 == 2)
	{
		*uParam1 = 4;
	}
	else if (*uParam2 == 1)
	{
		*uParam1 = 3;
	}
	else
	{
		*uParam4 = _get_ped_quality(iParam0);
		switch (*uParam4)
		{
			case 0:
				*uParam1 = 0;
				break;
			case 1:
				*uParam1 = 1;
				break;
			case -1:
			case 2:
				*uParam1 = 2;
				break;
		}
	}
}

bool func_823(var uParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = iParam3;
	iVar1 = iParam2;
	if (iVar0 < iVar1)
	{
		iParam2 = iVar0;
	}
	uVar2 = _0x9e7738b291706746(uParam0, iParam1, iParam2);
	return uVar2;
}

void func_824(int iParam0, bool bParam1, bool bParam2)
{
	switch (func_226(iParam0))
	{
		case -2061583405:
			bVar0 = func_849(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_849(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_849(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_849(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_849(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_849(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_833();
	}
	if (bParam1)
	{
		func_752(0, 0);
	}
}

void func_825(int iParam0)
{
	Var2 = -1;
	Var2.f_1 = -1;
	Var2.f_2 = -1;
	Var2.f_3 = -1;
	Var2.f_4 = -1;
	Var2.f_5 = -1;
	Var2.f_6 = -1;
	Var2.f_7 = -1;
	Var2.f_8 = -1;
	Var2.f_13 = -1;
	Var2 = { func_579(0, -1591664384, -1591664384, -1591664384, 0, iParam0) };
	if (func_581(&Var2, &iVar0, &iVar1, 0))
	{
		if (iVar1 > 0)
		{
			switch (iParam0)
			{
				case 352481484:
					Global_1946804->f_2657.f_26.f_2 = 5;
					Global_1946804->f_2657.f_26.f_1 = 5;
					Global_1946804->f_2657.f_26 = 5;
					break;
			}
		}
		func_478(iVar0);
	}
}

void func_826(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	func_850(iParam2, *uParam0);
	func_851(uParam0->f_1[*uParam0], iParam1, -1, 1, 0);
	*uParam0++;
}

bool func_827(int iParam0, int iParam1)
{
	Var0 = { func_384(iParam0, 0, 0) };
	Var5 = { func_420(iParam0, Var0, Var0.f_4, 0) };
	if (func_578(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return false;
	}
	_0x9a113c660aea3832(func_307(0), &Var5, iParam1);
	return true;
}

void func_828(int iParam0, bool bParam1)
{
	Var0 = { func_384(iParam0, 0, 0) };
	Var5 = { func_420(iParam0, Var0, Var0.f_4, 0) };
	if (func_578(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	_0x65a5f70f4a292ebe(func_307(0), &Var5, bParam1);
}

bool func_829(int iParam0)
{
	if (func_92() == -1)
	{
		if (Global_40.f_4283 != 0)
		{
			if (iParam0 == 1164374808)
			{
				return false;
			}
		}
	}
	return true;
}

int func_830(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	iVar1 = iParam0;
	if (Global_1946804->f_2657.f_19 >= 18)
	{
		return 0;
	}
	if (*uParam1 >= iParam2)
	{
		return 0;
	}
	if (func_852(iVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !func_827(iParam0, 0))
	{
		return 0;
	}
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = iVar1;
	if (func_226(iParam0) != -999503751)
	{
		func_826(&(Global_1946804->f_2657.f_26.f_26), iParam0, Global_1946804->f_2657.f_19);
	}
	Global_1946804->f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_831(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_489();
	}
	if (iParam0 == 1160113249)
	{
		return -763730846;
	}
	return -1535516064;
}

int func_832(int iParam0, int iParam1)
{
	Var0 = { func_384(iParam0, 0, 0) };
	Var5 = { func_420(iParam0, Var0, Var0.f_4, 0) };
	if (func_578(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	_0x0349404a22736740(iParam1, func_307(0), &Var5);
	return 1;
}

void func_833()
{
	if (func_92() == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_2657.f_19)
		{
			Global_26796[iVar0] = &Global_1946804->f_2657[iVar0];
			iVar0++;
		}
		Global_26796.f_20 = Global_1946804->f_2657.f_20;
		Global_26796.f_21 = Global_1946804->f_2657.f_21;
		Global_26796.f_22 = Global_1946804->f_2657.f_22;
		Global_26796.f_23 = Global_1946804->f_2657.f_23;
		Global_26796.f_24 = Global_1946804->f_2657.f_24;
		Global_26796.f_19 = Global_1946804->f_2657.f_19;
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		Global_36638.f_45.f_350[iVar0] = &Global_1946804->f_2657[iVar0];
		iVar0++;
	}
	Global_36638.f_45.f_350.f_20 = Global_1946804->f_2657.f_20;
	Global_36638.f_45.f_350.f_21 = Global_1946804->f_2657.f_21;
	Global_36638.f_45.f_350.f_22 = Global_1946804->f_2657.f_22;
	Global_36638.f_45.f_350.f_23 = Global_1946804->f_2657.f_23;
	Global_36638.f_45.f_350.f_24 = Global_1946804->f_2657.f_24;
	Global_36638.f_45.f_350.f_19 = Global_1946804->f_2657.f_19;
}

bool func_834(int iParam0)
{
	return func_854(func_853(iParam0));
}

int func_835(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 227686058;
		case 1:
			return 1877538667;
		case 2:
			return -747118240;
		case 3:
			return 356885366;
		case 4:
			return -733784435;
		case 5:
			return -2010021430;
		case 6:
			return -1563051210;
		case 7:
			return 1532314048;
		case 8:
			return -1378972544;
		default:
			break;
	}
	return 0;
}

int func_836(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -77597297;
		case 1:
			return 1289620458;
		case 2:
			return 351104126;
		case 3:
			return -991258198;
		case 4:
			return -446539844;
		case 5:
			return 2146082234;
		case 6:
			return 330185476;
		case 7:
			return -1208917184;
		case 8:
			return -12904227;
		default:
			break;
	}
	return 0;
}

int func_837(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 624387589;
		case 1:
			return 1398329674;
		case 2:
			return -35737408;
		case 3:
			return 651323163;
		case 4:
			return 343794650;
		case 5:
			return 2072880089;
		case 6:
			return -2120749726;
		case 7:
			return -1749072364;
		case 8:
			return -583780175;
		default:
			break;
	}
	return 0;
}

int func_838(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1066104444;
		case 1:
			return -567070698;
		case 2:
			return 797308288;
		case 3:
			return -1669506545;
		case 4:
			return -1011624341;
		case 5:
			return 516134254;
		case 6:
			return -940514956;
		case 7:
			return 2030473481;
		case 8:
			return 2084389834;
		default:
			break;
	}
	return 0;
}

int func_839(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 227686058;
		case 1:
			return -77597297;
		case 2:
			return 624387589;
		case 3:
			return 1066104444;
		default:
			break;
	}
	return 0;
}

int func_840(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1877538667;
		case 1:
			return 1289620458;
		case 2:
			return 1398329674;
		case 3:
			return -567070698;
		default:
			break;
	}
	return 0;
}

int func_841(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -747118240;
		case 1:
			return 351104126;
		case 2:
			return -35737408;
		case 3:
			return 797308288;
		default:
			break;
	}
	return 0;
}

int func_842(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 356885366;
		case 1:
			return -991258198;
		case 2:
			return 651323163;
		case 3:
			return -1669506545;
		default:
			break;
	}
	return 0;
}

int func_843(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -733784435;
		case 1:
			return -446539844;
		case 2:
			return 343794650;
		case 3:
			return -1011624341;
		default:
			break;
	}
	return 0;
}

int func_844(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -2010021430;
		case 1:
			return 2146082234;
		case 2:
			return 2072880089;
		case 3:
			return 516134254;
		default:
			break;
	}
	return 0;
}

int func_845(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1563051210;
		case 1:
			return 330185476;
		case 2:
			return -2120749726;
		case 3:
			return -940514956;
		default:
			break;
	}
	return 0;
}

int func_846(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1532314048;
		case 1:
			return -1208917184;
		case 2:
			return -1749072364;
		case 3:
			return 2030473481;
		default:
			break;
	}
	return 0;
}

int func_847(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1378972544;
		case 1:
			return -12904227;
		case 2:
			return -583780175;
		case 3:
			return 2084389834;
		default:
			break;
	}
	return 0;
}

int func_848(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_849(int iParam0, var uParam1)
{
	iVar1 = iParam0;
	if (!func_852(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_226(iParam0) != -999503751)
		{
			func_855(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_226(iParam0) != -999503751)
	{
		func_855(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_827(iParam0, 1);
	return 1;
}

void func_850(int iParam0, var uParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = uParam1;
}

void func_851(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (_0x93ffd92f05ec32fd(uParam0->f_3.f_1))
	{
		func_856(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = func_467(func_629(iParam1), 1);
		if (uParam0->f_1 == -1)
		{
		}
	}
	else
	{
		uParam0->f_1 = iParam2;
	}
	uParam0->f_2 = iParam4;
	*uParam0 = iParam1;
	uParam0->f_3 = 0;
	if (bParam3)
	{
		func_857(uParam0);
	}
}

bool func_852(int iParam0, int iParam1)
{
	*iParam1 = 0;
	*iParam1 = 0;
	while (*iParam1 < Global_1946804->f_2657.f_19)
	{
		if (iParam0 == &Global_1946804->f_2657[*iParam1])
		{
			return true;
		}
		*iParam1++;
	}
	return false;
}

int func_853(int iParam0)
{
	switch (iParam0)
	{
		case -2061583405:
			return 2;
		case -1719060085:
			return 16;
		case -999503751:
			return 1;
		case -525676072:
			return 4;
		case 81053684:
			return 8;
		case -413129408:
			return 32;
		default:
			break;
	}
	return 0;
}

bool func_854(int iParam0)
{
	return (Global_1946804->f_2657.f_26.f_6 && iParam0) != 0;
}

void func_855(var uParam0, int iParam1, int iParam2)
{
	iVar1 = func_858(iParam1);
	func_859(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_860(&(uParam0->f_26), iVar1);
		if (func_861(uParam0->f_26, &iVar0))
		{
			func_862(iVar0, iVar1);
		}
	}
}

void func_856(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_863(&(uParam0->f_3));
}

void func_857(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	func_864(&(uParam0->f_3), *uParam0, uParam0->f_2);
}

int func_858(int iParam0)
{
	return &(Global_1946804->f_2657.f_26.f_7[iParam0]);
}

void func_859(int iParam0, int iParam1)
{
	uVar0 = &Global_1946804->f_2657.f_26.f_7[iParam0];
	Global_1946804->f_2657.f_26.f_7[iParam0] = &Global_1946804->f_2657.f_26.f_7[iParam1];
	Global_1946804->f_2657.f_26.f_7[iParam1] = uVar0;
}

void func_860(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - 1);
	func_856(uParam0->f_1[iParam1]);
	*uParam0->f_1[iParam1] = { *uParam0->f_1[*uParam0] };
}

bool func_861(int iParam0, int iParam1)
{
	*iParam1 = 0;
	*iParam1 = 0;
	while (*iParam1 < Global_1946804->f_2657.f_19)
	{
		if (&Global_1946804->f_2657.f_26.f_7[*iParam1] == iParam0)
		{
			return true;
		}
		*iParam1++;
	}
	return false;
}

void func_862(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = iParam1;
}

void func_863(var uParam0)
{
	if (*uParam0 && _0x93ffd92f05ec32fd(uParam0->f_1))
	{
		_0x13e7320c762f0477(uParam0->f_1);
		uParam0->f_1 = -1;
	}
	*uParam0 = 0;
}

void func_864(var uParam0, var uParam1, var uParam2)
{
	iVar0 = func_865(func_489());
	if (*uParam0)
	{
		func_863(uParam0);
	}
	uParam0->f_1 = _0xf6d9e1f3560cbf8e(iVar0, uParam1, 0, func_92() != -1, uParam2);
	*uParam0 = 1;
}

int func_865(int iParam0)
{
	if (func_92() == -1)
	{
		switch (iParam0)
		{
			case -2125499975:
				return 0;
			case -449205311:
				return 0;
			case 1160113249:
				return 0;
			default:
				break;
		}
		return 0;
	}
	switch (iParam0)
	{
		case 2026485318:
			return 0;
		case 24043185:
			return 1;
		default:
			break;
	}
	return 0;
}

