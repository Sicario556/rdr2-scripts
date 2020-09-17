void __EntryFunction__()
{
	fLocal_14 = 1f;
	fLocal_15 = 1f;
	vLocal_135 = { -277.3855f, 805.2767f, 119.1796f };
	iLocal_138 = -658853329;
	iLocal_146 = -1;
	iLocal_147 = 20000;
	iLocal_150 = vScriptParam_0.x;
	iLocal_148 = vScriptParam_0.z;
	bLocal_152 = false;
	if (Global_1901947->f_1.f_26 > 0)
	{
		func_1();
	}
	func_2();
	func_3();
	iLocal_149 = get_game_timer();
	iVar0 = 0;
	while (func_4())
	{
		if (get_game_timer() > iLocal_149)
		{
			iLocal_149 = 0;
			func_5(iLocal_150, &iLocal_148);
			switch (iLocal_148)
			{
				case 0:
					if (Global_1901947->f_1.f_26 > 0)
					{
						iLocal_151 = (get_game_timer() + Global_1901947->f_1.f_26);
						iLocal_148 = 1;
					}
					else
					{
						iLocal_148 = 2;
					}
					break;
				case 1:
					if (!func_1() || iLocal_151 < get_game_timer())
					{
						bLocal_152 = false;
						iLocal_148 = 2;
					}
					break;
				case 2:
					func_6(iLocal_150);
					func_7();
					func_8();
					if (func_10(func_9(iLocal_150)))
					{
						func_11(func_9(iLocal_150), 4);
					}
					_0x9bbdcb8df789ebc1(player_id(), func_12(iLocal_150));
					Global_1896620 = -1;
					iLocal_151 = (iLocal_147 + get_game_timer());
					iLocal_148 = 3;
					break;
				case 3:
					if (func_13() || iLocal_151 < get_game_timer())
					{
						func_14(iLocal_150);
						iLocal_151 = (iLocal_147 + get_game_timer());
						iLocal_148 = 4;
					}
					break;
				case 4:
					if (func_15(iLocal_150) || iLocal_151 < get_game_timer())
					{
						func_16(iLocal_150);
						iLocal_151 = (get_game_timer() + iLocal_147);
						iLocal_148 = 5;
					}
					break;
				case 5:
					if (func_17(iLocal_150) || iLocal_151 < get_game_timer())
					{
						func_18(iLocal_150);
						iLocal_151 = (iLocal_147 + get_game_timer());
						iLocal_148 = 7;
					}
					break;
				case 7:
					if (func_10(func_9(iLocal_150)))
					{
						if (func_19(func_9(iLocal_150), 4) && !iLocal_151 < get_game_timer())
						{
						}
						else
						{
							if (func_20(iLocal_150) || iLocal_151 < get_game_timer())
							{
								func_21(iLocal_150, 4);
								iLocal_151 = (iLocal_147 + get_game_timer());
								iLocal_148 = 8;
							}
							Jump @842; //curOff = 558
							func_22(iLocal_150);
							func_23();
							if (!func_24(4105, 0))
							{
								func_25();
							}
							func_26();
							func_27();
							func_28();
							func_29(iLocal_150);
							func_30(iLocal_150);
							func_31();
							func_32();
							iLocal_148 = 9;
							Jump @842; //curOff = 626
							func_33(iLocal_150);
							func_34();
							iLocal_148 = 10;
							Jump @842; //curOff = 643
							func_35(Global_1896674);
							func_36(iLocal_150, Global_1896674);
							iLocal_148 = 11;
							Jump @842; //curOff = 668
							func_37(iLocal_150);
							func_21(iLocal_150, 8);
							if (func_38(32))
							{
								if (is_screen_faded_out())
								{
									do_screen_fade_in(500);
								}
								func_39(32);
							}
							iLocal_148 = 12;
							Jump @842; //curOff = 718
							if (func_40(iLocal_150))
							{
								iLocal_149 = get_game_timer() + 1000;
							}
							func_41(Global_1896674, iLocal_150);
							func_42(iLocal_150);
							func_21(iLocal_150, 8);
							if (func_43())
							{
								_0xba0980b5c0a11924(0f);
							}
							set_ambient_ped_range_multiplier_this_frame((*Global_1887339)[iLocal_150]->f_11);
							if ((*Global_1887339)[iLocal_150]->f_12 > 0f)
							{
								_0xa77fa7be9312f8c0((*Global_1887339)[iLocal_150]->f_12);
							}
							Jump @842; //curOff = 819
							func_8();
							func_44(iVar0);
							iVar0 = (1 + iVar0);
						}
						if ((*Global_1887339)[iLocal_150]->f_13 != 0)
						{
							_0x95423627a9ca598e((*Global_1887339)[iLocal_150]->f_13);
						}
						wait(0);
						iVar0 = 0;
						while (!func_44(iVar0))
						{
							iVar0 = (1 + iVar0);
							wait(0);
						}
						if (func_45() != -1)
						{
							func_46();
						}
						terminate_this_thread();
					}
					default:
						break;
			}
		}
	}
}

bool func_1()
{
	if (!bLocal_152)
	{
		if (&Global_1051139)
		{
			bLocal_152 = true;
			return true;
		}
		if (func_47() && func_48())
		{
			bLocal_152 = true;
			return true;
		}
		return false;
	}
	if (&Global_1051139)
	{
		return true;
	}
	if (func_48())
	{
		return true;
	}
	bLocal_152 = false;
	return false;
}

void func_2()
{
	if (func_45() != -1)
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
		iVar0 = 0;
		while (!func_44(iVar0))
		{
			iVar0++;
			wait(0);
		}
		terminate_this_thread();
	}
}

void func_3()
{
	if (((!func_49(-515561750) && func_45() == -1) && !_is_imap_active(1186533019)) && !_0xcf45df50c7775f2a())
	{
		func_50(-892659042);
		func_51();
	}
}

bool func_4()
{
	if (func_45() != -1)
	{
		return !func_52(1, 1);
	}
	return true;
}

void func_5(int iParam0, int iParam1)
{
	if (!func_38(16))
	{
		return;
	}
	if (Global_1893587->f_7 == 0)
	{
		func_39(16);
		return;
	}
	if (!func_53(iParam0))
	{
		Global_1893587->f_7 = 0;
		func_39(16);
		return;
	}
	if (func_54(8))
	{
		if (*iParam1 == 12)
		{
			*iParam1 = 8;
			return;
		}
		else if (*iParam1 != 8)
		{
			func_55(8);
			*iParam1 = 12;
			return;
		}
	}
	if (func_54(2))
	{
		if (*iParam1 == 12)
		{
			*iParam1 = 4;
			return;
		}
		else if (*iParam1 != 4)
		{
			func_55(2);
			*iParam1 = 12;
			return;
		}
	}
	if (func_54(16))
	{
		if (*iParam1 == 12)
		{
			*iParam1 = 9;
			return;
		}
		else if (*iParam1 != 9)
		{
			func_55(16);
			*iParam1 = 12;
			return;
		}
	}
	if (func_54(4))
	{
		if (*iParam1 == 12)
		{
			*iParam1 = 7;
			return;
		}
		else if (*iParam1 != 7)
		{
			func_55(4);
			*iParam1 = 12;
			return;
		}
	}
	if (func_54(1))
	{
		if (*iParam1 == 12)
		{
			*iParam1 = 3;
			return;
		}
		else if (*iParam1 != 3)
		{
			func_55(1);
			*iParam1 = 12;
			return;
		}
	}
}

void func_6(int iParam0)
{
}

void func_7()
{
	if (!Global_1102219->f_3977)
	{
		Global_1102219->f_3977 = 1;
	}
}

void func_8()
{
	if (!Global_1071686->f_23887)
	{
		Global_1071686->f_23887 = 1;
	}
}

int func_9(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	else if (iParam0 <= 10)
	{
		return 0;
	}
	else if (iParam0 <= 30)
	{
		return 1;
	}
	else if (iParam0 <= 34)
	{
		return 2;
	}
	else if (iParam0 <= 38)
	{
		return 3;
	}
	else if (iParam0 <= 41)
	{
		return 4;
	}
	else if (iParam0 <= 52)
	{
		return 7;
	}
	else if (iParam0 <= 61)
	{
		return 6;
	}
	else if (iParam0 <= 66)
	{
		return 8;
	}
	else if (iParam0 <= 81)
	{
		return 9;
	}
	else if (iParam0 <= 98)
	{
		return 10;
	}
	else if (iParam0 <= 112)
	{
		return 11;
	}
	else if (iParam0 <= 119)
	{
		return 12;
	}
	else if (iParam0 <= 122)
	{
		return 13;
	}
	else if (iParam0 <= 126)
	{
		return 14;
	}
	else if (iParam0 <= 134)
	{
		return 15;
	}
	else if (iParam0 <= 138)
	{
		return 16;
	}
	return -1;
}

bool func_10(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

void func_11(int iParam0, int iParam1)
{
	(*Global_1896622)[iParam0] = (Global_1896622[iParam0] || iParam1);
}

int func_12(int iParam0)
{
	switch (iParam0)
	{
		case 40:
			iVar0 = -34953917;
			break;
		case 87:
			iVar0 = -1182515549;
			break;
		case 74:
			iVar0 = -180439396;
			break;
		case 66:
			iVar0 = -380981263;
			break;
		case 116:
			iVar0 = 960614592;
			break;
		case 5:
			iVar0 = -896916581;
			break;
		case 37:
			iVar0 = 503372696;
			break;
		case 111:
			iVar0 = 1004478670;
			break;
		case 26:
			iVar0 = -1545648199;
			break;
		case 81:
			iVar0 = -379634634;
			break;
		case 98:
			iVar0 = 288297518;
			break;
		case 60:
			iVar0 = 1812404612;
			break;
		case 83:
			iVar0 = 1827444358;
			break;
		default:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

bool func_13()
{
	iLocal_56 = (*Global_1887339)[81]->f_5;
	_0xb469cfd9e065eb99(iLocal_56, 19);
	func_56();
	func_57();
	func_58();
	if (func_45() == -1)
	{
		iLocal_82 = _create_volume_aggregate_with_custom_name("Valentine - m_volHorseShopStables");
		_0x39816f6f94f385ad(iLocal_82, -369.4457f, 786.6935f, 115.9904f, 0f, 0f, 3.414876f, 13.87923f, 13.7288f, 5.892247f);
		_0x39816f6f94f385ad(iLocal_82, -367.6902f, 770.4435f, 116.8526f, 0f, 0f, 4.150415f, 26.09184f, 5.747657f, 4.724637f);
		_0x39816f6f94f385ad(iLocal_82, -391.6759f, 778.7041f, 116.8526f, 0f, 0f, 4.150415f, 23.39705f, 25.94251f, 4.724637f);
		iLocal_83 = _create_volume_aggregate_with_custom_name("Valentine - m_volAuctionStables");
		_0x39816f6f94f385ad(iLocal_83, -257.2065f, 634.5588f, 114.0751f, 0f, 0f, 49.48943f, 11.4594f, 25.36694f, 3.427747f);
		_0x39816f6f94f385ad(iLocal_83, -221.2732f, 673.6355f, 114.0751f, 0f, 0f, 49.48943f, 11.4594f, 25.36694f, 3.427747f);
		iLocal_80 = _create_volume_box_with_custom_name(-369.4457f, 786.6935f, 115.9904f, 0f, 0f, 3.414876f, 13.87923f, 13.7288f, 6.241f, "Valentine - m_volHorseShop");
		iLocal_81 = _create_volume_box_with_custom_name(-361.3393f, 787.48f, 116.4301f, 0f, 0f, 3.999999f, 3.741607f, 3.652877f, 5.744031f, "Valentine - m_volHorseShopOutsideDoor");
		func_59(9, iLocal_81);
		_0xb469cfd9e065eb99(iLocal_80, 10067);
		iLocal_129 = _create_volume_cylinder_with_custom_name(-280.6662f, 915.7495f, 133.066f, 0f, 0f, 0f, 23.88504f, 24.41234f, 15.89547f, "Valentine - m_volGuardDogOwner");
		iLocal_87 = _create_volume_aggregate_with_custom_name("Valentine - m_volHotel Agg");
		_0x39816f6f94f385ad(iLocal_87, -325.0124f, 767.5158f, 119.4827f, 0f, 0f, -170.2021f, 8.15436f, 18.38504f, 9.051786f);
		_0x39816f6f94f385ad(iLocal_87, -317.872f, 761.7268f, 118.0002f, 0f, 0f, 11.41397f, 4.27525f, 4.046098f, 2.733858f);
		iLocal_88 = _create_volume_box_with_custom_name(-326.9005f, 777.8173f, 117.6158f, 0f, 0f, -171.616f, 8.5f, 3.390837f, 2.634366f, "Valentine - m_volHotelPorch");
		iLocal_89 = _create_volume_box_with_custom_name(-325.7273f, 774.2453f, 117.7346f, 0f, 0f, -171.616f, 2.732852f, 1.390837f, 2.634366f, "Valentine - m_volHotelPrompt");
		iLocal_90 = _create_volume_box_with_custom_name(-325.6349f, 772.4476f, 117.7346f, 0f, 0f, -171.616f, 1.740315f, 1.864735f, 2.634366f, "Valentine - m_volHotelOfflimits");
		iLocal_91 = _create_volume_aggregate_with_custom_name("Valentine - m_volHotelMuteAgg");
		_0x39816f6f94f385ad(iLocal_91, -325.298f, 767.432f, 122.368f, 0f, 0f, -171.616f, 9.71f, 19.745f, 3.774f);
		_0x39816f6f94f385ad(iLocal_91, -317.643f, 761.773f, 118f, 0f, 0f, 11.414f, 4.574f, 4.322f, 2.734f);
		iLocal_125 = _create_volume_box_with_custom_name(-306.3821f, 771.3976f, 119.9888f, 0f, 0f, 10.06205f, 10.22391f, 17.49704f, 4.699401f, "Valentine - m_volBank");
		iLocal_126 = _create_volume_box_with_custom_name(-308.2203f, 776.1706f, 118.8547f, 0f, 0f, 7.323684f, 1.907036f, 1.483034f, 2.606343f, "Valentine - m_volBankPrompt");
		iLocal_127 = _create_volume_aggregate_with_custom_name("Valentine - m_volBankShopOfflimits Agg");
		_0x39816f6f94f385ad(iLocal_127, -302.2217f, 769.743f, 118.8547f, 0f, 0f, 10.50366f, 2.072344f, 8.025318f, 2.606343f);
		_0x39816f6f94f385ad(iLocal_127, -309.0788f, 772.8509f, 118.8547f, 0f, 0f, 8.049957f, 5.213456f, 4.413345f, 3.353561f);
		_0x39816f6f94f385ad(iLocal_127, -311.414f, 775.411f, 118.8547f, 0f, 0f, 8.049957f, 1.633f, 1.085f, 3.354f);
		_0xb469cfd9e065eb99(iLocal_125, 10058);
	}
	else
	{
		iLocal_80 = _create_volume_box_with_custom_name(-369.4457f, 786.6935f, 115.9904f, 0f, 0f, 3.414876f, 13.87923f, 13.7288f, 5.892247f, "Valentine - m_volHorseShop");
		_0xb469cfd9e065eb99(iLocal_80, 10067);
		iLocal_125 = _create_volume_box_with_custom_name(-306.3821f, 771.3976f, 119.9888f, 0f, 0f, 10.06205f, 10.22391f, 17.49704f, 4.699401f, "Valentine - m_volBank");
		_0x18262cafebb5fbe1(iLocal_125, 0, 0, 0, -1, -1, 0);
	}
	iLocal_84 = _create_volume_box_with_custom_name(-339.5029f, 767.1139f, 116.61f, 0f, 0f, -171.616f, 9.604842f, 7.286813f, 4.891439f, "Valentine - m_volButcher");
	iLocal_85 = _create_volume_box_with_custom_name(-341.169f, 767.2f, 116.816f, 0f, 0f, -171.203f, 1.376f, 2.537f, 2.48f, "Valentine - m_volButcherPrompt");
	iLocal_86 = _create_volume_box_with_custom_name(-338.5402f, 767.6559f, 116.5175f, 0f, 0f, -171.2032f, 2.147837f, 2.102079f, 2.480459f, "Valentine - m_volButcherOfflimits");
	_0xb469cfd9e065eb99(iLocal_84, 10061);
	iLocal_64 = _create_volume_box_with_custom_name(-306.5829f, 812.947f, 118.7894f, 0f, 0f, 100.1415f, 6.023165f, 3.919236f, 2.442381f, "Valentine - m_volBarberOwner");
	iLocal_63 = _create_volume_box_with_custom_name(-307.1545f, 812.8f, 118.9254f, 0f, 0f, 100.923f, 4.783854f, 2.636788f, 1.990557f, "Valentine - m_volBarberPrompt");
	_0xb469cfd9e065eb99(iLocal_64, 10059);
	iLocal_65 = _create_volume_box_with_custom_name(-307.4f, 813.5f, 118.83f, 0f, 0f, 11f, 1.9f, 2.3f, 2.195668f, "Valentine - m_volBarberAvoidance");
	_0xb56d41a694e42e86(iLocal_65, 0, 0, 0, -1, -1, 0);
	iLocal_96 = _create_volume_aggregate_with_custom_name("Valentine - m_volPostOfficeOwner");
	_0x39816f6f94f385ad(iLocal_96, -176.659f, 629.779f, 114.438f, 0f, 0f, -34.98428f, 3.47f, 6.531f, 2.881f);
	_0x39816f6f94f385ad(iLocal_96, -175.5493f, 627.7673f, 114.545f, 0f, 0f, -34.84247f, 1.351312f, 3.832321f, 2.880646f);
	_0x39816f6f94f385ad(iLocal_96, -174.048f, 633.669f, 114.545f, 0f, 0f, -34.84247f, 1.996f, 2.553f, 2.881f);
	_0x39816f6f94f385ad(iLocal_96, -179.166f, 626.498f, 114.545f, 0f, 0f, -34.84247f, 2.314f, 2.553f, 2.881f);
	iLocal_97 = _create_volume_aggregate_with_custom_name("Valentine - m_volPostOfficePrompt Agg");
	_0x39816f6f94f385ad(iLocal_97, -178.982f, 626.715f, 114.531f, 0f, 0f, -34.84247f, 1.767f, 1.396f, 2.881f);
	iLocal_98 = _create_volume_aggregate_with_custom_name("Valentine - m_volPostOfficeOfflimits Agg");
	_0x39816f6f94f385ad(iLocal_98, -176.4711f, 629.9696f, 114.5366f, 0f, 0f, -34.98428f, 3.19526f, 6.32671f, 2.880646f);
	_0x39816f6f94f385ad(iLocal_98, -175.5493f, 627.7673f, 114.545f, 0f, 0f, -34.84247f, 1.351312f, 3.832321f, 2.880646f);
	_0xb469cfd9e065eb99(iLocal_96, 10068);
	iLocal_66 = _create_volume_box_with_custom_name(-309.497f, 809.019f, 119.378f, 0f, 0f, 99.715f, 21.384f, 11.9942f, 3.513f, "Valentine - m_volBartenderOwner");
	iLocal_76 = _create_volume_box_with_custom_name(-312.9f, 799f, 119.3f, 0f, 0f, 97.7f, 2.9f, 1.2f, 2.6f, "Valentine - m_volPianoPlayerOwner");
	iLocal_77 = _create_volume_box_with_custom_name(-278.0329f, 807.903f, 119.4f, 0f, 0f, -79.7f, 11.40093f, 8.344561f, 10.8f, "Valentine - m_volSheriffOwner");
	iLocal_79 = _create_volume_aggregate_with_custom_name("Valentine - m_volSheriffStation Agg");
	_0x6e0d3c3f828da773(iLocal_79, iLocal_77);
	_0x39816f6f94f385ad(iLocal_79, -272.7689f, 809.2057f, 120.423f, 0f, 0f, -79.7f, 8.085273f, 4.505096f, 4.33611f);
	_0x39816f6f94f385ad(iLocal_79, -277.0814f, 800.534f, 119.4f, 0f, 0f, -79.7f, 3.711809f, 7.095345f, 4f);
	iLocal_78 = _create_volume_box_with_custom_name(-277.2282f, 807.1215f, 119.472f, 0f, 0f, 9.89185f, 5.00473f, 8.940674f, 2.321479f, "Valentine - m_volSheriffStation Agg");
	_0x3efabb21e14a6bd1(iLocal_78, 5, 1);
	iLocal_95 = _create_volume_box_with_custom_name(-230.464f, 817.354f, 126.643f, 0f, 0f, -34.207f, 19.604f, 29.858f, 13.22f, "BRL_VALENTINE - m_volChurch");
	iLocal_131 = _add_speed_zone_for_coord(-290.7f, 728.9f, 118.8f, 100f, 2.5f, 2.5f, 0, 6f, 10f, 25f, 7.5f);
	func_60();
	func_61();
	func_62(81);
	iLocal_100 = _create_volume_box_with_custom_name(-177.812f, 632.287f, 114.537f, 0f, 0f, -34.984f, 8.706f, 22.528f, 2.881f, "Valentine - m_volTrainStation");
	return true;
}

void func_14(int iParam0)
{
	iParam0 = iParam0;
}

bool func_15(int iParam0)
{
	iParam0 = iParam0;
	return true;
}

void func_16(int iParam0)
{
	iParam0 = iParam0;
	func_63(-409100651, "props_misc@church_bells", "enter", "loop", "exit", -230.157f, 797.476f, 135.255f, "VAL_SINGLE_TOLL");
	func_64(9, 0, 0);
	func_64(12, 0, 0);
	func_64(19, 0, 0);
	create_model_hide(-173.8572f, 642.7699f, 114.0726f, 0.1f, 1635620646, false);
}

bool func_17(int iParam0)
{
	iVar0 = 1;
	if (_0xcf45df50c7775f2a())
	{
		return false;
	}
	else
	{
		func_50(1777348822);
	}
	return iVar0;
}

void func_18(int iParam0)
{
	iParam0 = iParam0;
}

bool func_19(int iParam0, int iParam1)
{
	return (Global_1896622[iParam0] && iParam1) != 0;
}

int func_20(int iParam0)
{
	return func_65(iParam0, -1, -1, 0);
}

void func_21(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		Global_8123[iParam0] = (Global_8123[iParam0] || iParam1);
	}
	else
	{
		Global_1071686->f_19674[iParam0] = (Global_1071686->f_19674[iParam0] || iParam1);
	}
}

void func_22(int iParam0)
{
}

void func_23()
{
}

bool func_24(int iParam0, bool bParam1)
{
	if (func_66(iParam0))
	{
		return true;
	}
	if (!bParam1)
	{
		if (func_67(5000))
		{
			return true;
		}
	}
	switch (func_69(func_68(0)))
	{
		case -1:
			return false;
		case 2:
			if (iParam0 & 1 != 0)
			{
				return true;
			}
			break;
		case 5:
			if (iParam0 & 2 != 0)
			{
				return true;
			}
			break;
		case 3:
			if (iParam0 & 16 != 0)
			{
				return true;
			}
			break;
		case 4:
			if (iParam0 & 32 != 0)
			{
				return true;
			}
			break;
		case 7:
			if (iParam0 & 1024 != 0)
			{
				return true;
			}
			break;
	}
	return false;
}

void func_25()
{
}

void func_26()
{
	if (func_45() != -1)
	{
	}
}

void func_27()
{
	func_70(-534215902, 0, 0);
	func_71(0, -308.9729f, 807.0829f, 117.9797f, iLocal_93, 81);
	func_71(1, -241.294f, 770f, 118.14f, iLocal_94, 81);
}

void func_28()
{
	func_72(1, -355.308f, 704.938f, 115.936f, &(Global_1290948->f_47[1]), 5);
}

void func_29(int iParam0)
{
	func_73(0, iLocal_67, iParam0, iLocal_60, iLocal_70, 12, 0, 0, -1082130432, 0);
	func_74(0, -706941207, 0, 0, 0);
	func_75(0, 0);
	func_73(3, iLocal_71, iParam0, iLocal_61, iLocal_73, 4, 0, 0, -1082130432, 0);
	func_74(3, 706990067, 0, 0, 0);
	func_74(3, -290089884, 0, 0, 0);
	func_76(3, iLocal_62);
	func_77(3, 8192);
	func_75(3, 0);
	func_73(6, iLocal_74, iParam0, iLocal_57, iLocal_58, 20, 0, 0, -1082130432, 0);
	func_74(6, 475159788, 0, 0, 0);
	func_74(6, 2042647667, 0, 0, 0);
	func_75(6, 0);
	func_73(25, iLocal_79, iParam0, 0, 0, 2, 0, 0, -1082130432, 0);
	func_77(25, 1);
	func_77(25, 16384);
	func_77(25, 8192);
	func_77(25, 536870912);
	func_73(8, iLocal_64, iParam0, iLocal_63, 0, 2, 0, 0, -1082130432, 0);
	func_77(8, 67108864);
	func_77(8, 2048);
	func_75(8, 0);
	func_73(10, iLocal_84, iParam0, iLocal_85, 0, 460, 1, 0, -1082130432, 0);
	func_77(10, 536870912);
	func_75(10, 0);
	func_73(36, &(Global_1290948->f_47[1]), iParam0, &(Global_1290948->f_50[1]), 0, 2, 0, 0, -1082130432, 0);
	func_73(9, iLocal_80, iParam0, 0, 0, 2, 1, 0, -1082130432, 0);
	func_77(9, 536870912);
	func_77(9, 16384);
	func_77(9, 32768);
	func_77(9, 1);
	func_77(9, 8388608);
	func_77(9, 8192);
	func_77(9, 4);
	func_77(9, 16777216);
	func_77(9, 67108864);
	if (!func_78() && func_79())
	{
		func_74(9, 1696121221, 0, 0, 0);
		func_74(9, 1132010214, 0, 0, 0);
	}
	else
	{
		func_74(9, 1696121221, -1f, 1, 1);
		func_74(9, 1132010214, 1f, 1, 1);
	}
	func_73(2, iLocal_96, iParam0, iLocal_97, iLocal_98, 1277952, 0, 0, -1082130432, 0);
	func_75(2, 0);
	func_80();
	func_81(79);
	func_81(81);
}

void func_30(int iParam0)
{
	if (func_45() != -1)
	{
		return;
	}
	if (func_82(1, iLocal_66, 1))
	{
		_0x4a8fefc43fd8ac9b(iLocal_66, 1, 1);
	}
	func_82(14, iLocal_76, 1);
	func_82(3, iLocal_77, 1);
	func_82(45, iLocal_82, 1);
	func_82(18, iLocal_82, 0);
	func_82(19, iLocal_82, 0);
	func_82(7, iLocal_83, 1);
	func_82(20, iLocal_83, 0);
	func_82(27, iLocal_83, 0);
	func_82(28, iLocal_83, 0);
	if (func_82(37, iLocal_129, 1))
	{
		func_82(51, iLocal_129, 0);
		_0x4a8fefc43fd8ac9b(iLocal_129, 3, 1);
		if (_0x800df3fc913355f3(func_83(51)))
		{
			_0x53d05d60e5f5b40c(iLocal_129, 3, 1, func_83(51));
		}
	}
}

void func_31()
{
}

void func_32()
{
}

void func_33(int iParam0)
{
	func_84(0.8f, 0.2f, 0f, 0f);
}

void func_34()
{
	if (!Global_1893587->f_186)
	{
		_0xf5ffb08976911b50(Global_1893587->f_182, Global_1893587->f_183, Global_1893587->f_184, Global_1893587->f_185);
	}
}

void func_35(var uParam0)
{
	if (uParam0->f_61 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		(*uParam0)[iVar0] = 0;
		(*uParam0)[iVar0]->f_1 = 0;
		(*uParam0)[uParam0->f_61]->f_2 = 0;
		iVar0++;
	}
	uParam0->f_61 = 0;
}

void func_36(int iParam0, var uParam1)
{
	func_85(uParam1, iLocal_56, 1);
	func_85(uParam1, iLocal_74, 2);
	func_85(uParam1, iLocal_67, 2);
	func_85(uParam1, iLocal_71, 2);
	func_85(uParam1, iLocal_77, 11);
	func_85(uParam1, iLocal_92, 3);
	func_85(uParam1, iLocal_95, 6);
	func_85(uParam1, iLocal_96, 10);
}

void func_37(int iParam0)
{
	if (!func_86(iParam0))
	{
		return;
	}
	func_87();
	func_88(8, -65821257);
	func_88(0, 99634802);
	func_88(1, 1017247197);
	func_88(2, 2122993982);
}

bool func_38(int iParam0)
{
	return (Global_1893587 && iParam0) != 0;
}

void func_39(int iParam0)
{
	Global_1893587 = (&Global_1893587 - (Global_1893587 && iParam0));
}

bool func_40(int iParam0)
{
	func_89();
	if (func_90(&bLocal_139))
	{
		if (bLocal_139)
		{
			func_91(1508776842, 1, 0, 0, 0, 0, 0, 0);
			func_91(925575409, 1, 0f, 0, 0, 1f, 0, 0);
			func_91(-855228377, 1, 0, 0, 0, 0, 0, 0);
			func_92(283382142, 1);
			func_92(1876749464, 1);
			func_92(1331491364, 1);
			func_92(-408139633, 1);
			func_92(-1652509687, 1);
		}
	}
	func_93(88, iLocal_100, &uLocal_99);
	if (Global_1572887->f_13 != -1)
	{
		func_94();
		return false;
	}
	return false;
}

void func_41(var uParam0, int iParam1)
{
	if ((vdist(Global_35, 0f, 0f, 0f) <= 5f || func_95(&Global_1940258, 32768)) || func_95(&Global_1940258, 16777216))
	{
		return;
	}
	if (func_96(uParam0, 1))
	{
		return;
	}
	uParam0->f_63++;
	if (uParam0->f_63 < 10)
	{
		return;
	}
	uParam0->f_63 = 0;
	bVar0 = false;
	bVar1 = ((is_screen_faded_out() || is_screen_fading_in()) || is_screen_fading_out());
	bVar2 = func_97();
	iVar3 = 0;
	while (iVar3 < uParam0->f_61)
	{
		switch ((*uParam0)[iVar3]->f_1)
		{
			case 1:
				if (_does_volume_exist(uParam0[iVar3]))
				{
					if (_0xf256a75210c5c0eb(uParam0[iVar3], Global_35))
					{
						if (!bVar1 && !bVar2)
						{
							if ((!func_98((*uParam0)[iVar3], 1) && func_99(iParam1)) && !func_100(iParam1, 16))
							{
								func_102(iParam1, func_101(), -1, 0, -1, 0);
								func_103((*uParam0)[iVar3], 1);
							}
							func_104(iParam1, 0);
						}
						bVar0 = true;
					}
				}
				break;
			default:
				break;
		}
		iVar3++;
	}
	func_105(bVar0);
}

int func_42(int iParam0)
{
	iParam0 = iParam0;
	return 1;
}

bool func_43()
{
	_get_weather_type_transition(&iVar0, &iVar1, &fVar2);
	if (fVar2 < 0.75f)
	{
		iVar3 = iVar0;
	}
	else
	{
		iVar3 = iVar1;
	}
	if (func_106(iVar3))
	{
		return true;
	}
	return false;
}

bool func_44(int iParam0)
{
	if (iParam0 == 0)
	{
		func_107();
		_0x9bbdcb8df789ebc1(player_id(), 0);
		func_21(iLocal_150, 2048);
		if (chal_is_goal_active(-663946200, 1055032020))
		{
			switch (iLocal_150)
			{
				case 3:
				case 5:
				case 26:
				case 40:
				case 45:
				case 81:
				case 83:
				case 98:
				case 111:
				case 121:
				case 127:
				case 136:
					chal_add_goal_progress_int_by_score_id(func_108(iLocal_150, 0), 1);
					break;
			}
		}
		if (func_10(func_101()))
		{
			func_11(func_101(), 8);
		}
		func_109(iLocal_150, 4);
		func_109(iLocal_150, 8);
		func_105(0);
		if (func_45() == -1)
		{
			func_110(0);
		}
		func_111(iLocal_150);
		func_34();
		return false;
	}
	else if (func_45() == -1)
	{
		func_112(iLocal_150);
		func_113(iLocal_150);
		if (!func_114(iLocal_150, 0))
		{
			return false;
		}
	}
	else if (!func_115(iLocal_150))
	{
		return false;
	}
	terminate_this_thread();
	return true;
}

int func_45()
{
	return Global_1572887->f_13;
}

void func_46()
{
	terminate_this_thread();
}

bool func_47()
{
	if (Global_1572887->f_360.f_3 > 0)
	{
		return true;
	}
	if (Global_1572887->f_360.f_4 != 0)
	{
		return true;
	}
	return false;
}

bool func_48()
{
	if (_0x1b89bc43b6e69107(1814880805, -1, 0, 0))
	{
		return true;
	}
	if (_0x1b89bc43b6e69107(-701235215, -1, 0, 0))
	{
		return true;
	}
	if (_0x1b89bc43b6e69107(-814065802, -1, 0, 0))
	{
		return true;
	}
	return false;
}

bool func_49(int iParam0)
{
	iVar0 = func_116(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_117(iVar1))
	{
		if (Global_1071686->f_19648.f_24 && !func_118(iParam0))
		{
			return false;
		}
		return (is_bit_set(&(Global_1071686->f_19648[iVar1]), iVar2) || is_bit_set(&(Global_39.f_110[iVar1]), iVar2));
	}
	return is_bit_set(&(Global_39.f_110[iVar1]), iVar2);
}

void func_50(int iParam0)
{
	if (!_is_imap_active(iParam0))
	{
		func_119(iParam0);
	}
}

void func_51()
{
	if (iLocal_146 == -1)
	{
		iLocal_146 = add_navmesh_blocking_object(-333.337f, 770.839f, 115.29f, 6.066f, 0.65f, 5.228f, func_120(99.798f), false, 7);
	}
}

bool func_52(bool bParam0, bool bParam1)
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

bool func_53(int iParam0)
{
	if (!func_86(iParam0))
	{
		return false;
	}
	return func_121(iParam0, 8);
}

bool func_54(int iParam0)
{
	return (Global_1893587->f_7 && iParam0) != 0;
}

void func_55(int iParam0)
{
	Global_1893587->f_7 = (Global_1893587->f_7 - (Global_1893587->f_7 && iParam0));
}

void func_56()
{
	iLocal_60 = _create_volume_box_with_custom_name(-285.803f, 805.0234f, 119.5f, 0f, 0f, 9.527998f, 1.792473f, 2.89884f, 2.223762f, "Valentine - m_volDoctorPrompt");
	iLocal_67 = _create_volume_aggregate_with_custom_name("Valentine - m_volDoctorShop Agg");
	iLocal_68 = _create_volume_box_with_custom_name(-286.4778f, 815.4984f, 119.8f, 0f, 0f, -80.4f, 4.936636f, 10.4535f, 2.819574f, "Valentine - m_volDoctorBackroom");
	_0x39816f6f94f385ad(iLocal_67, -286.6589f, 808.6324f, 119.8f, 0f, 0f, -80.4f, 10.38628f, 7.7f, 2.8f);
	_0x6e0d3c3f828da773(iLocal_67, iLocal_68);
	iLocal_70 = _create_volume_aggregate_with_custom_name("Valentine - m_volDoctorShopOff Agg");
	_0x39816f6f94f385ad(iLocal_70, -288.5862f, 804.4559f, 119.5f, 0f, 0f, 9.527998f, 1.8573f, 2.649464f, 2.223762f);
	_0x39816f6f94f385ad(iLocal_70, -289.418f, 811.402f, 119.5f, 0f, 0f, 9.528f, 3.349f, 3.978f, 2.224f);
	_0x39816f6f94f385ad(iLocal_70, -287.157f, 810.98f, 119.5f, 0f, 0f, 9.528f, 1.762f, 2.396f, 2.224f);
	iLocal_69 = _create_volume_box_with_custom_name(-285.485f, 801.6973f, 119.458f, 0f, 0f, 10.32594f, 7.936f, 3.558567f, 2.381096f, "Valentine - m_volDoctorPORCH");
	_0xb469cfd9e065eb99(iLocal_67, 10064);
}

void func_57()
{
	iLocal_71 = _create_volume_aggregate_with_custom_name("Valentine - m_volGeneralShop Agg");
	_0x39816f6f94f385ad(iLocal_71, -323.731f, 801.595f, 118.2f, 0f, 0f, 99.9f, 10.555f, 8.418f, 4.843f);
	_0x39816f6f94f385ad(iLocal_71, -323.784f, 801.585f, 117.689f, 0f, 0f, 99.9f, 10.582f, 8.699f, 5.801f);
	_0x39816f6f94f385ad(iLocal_71, -323.448f, 799.656f, 116.513f, 0f, 0f, 99.9f, 6.34f, 8.699f, 12.476f);
	iLocal_72 = _create_volume_aggregate_with_custom_name("Valentine - m_volGeneralPORCH Agg");
	_0x39816f6f94f385ad(iLocal_72, -322.9185f, 794.5805f, 117.8986f, 0f, 0f, 10.32594f, 9f, 3.558567f, 2.381096f);
	_0x39816f6f94f385ad(iLocal_72, -326.9613f, 807.4636f, 118.0324f, 0f, 0f, 8.726971f, 2.76311f, 2.301893f, 4.510351f);
	_0x39816f6f94f385ad(iLocal_72, -329.273f, 799.3444f, 118.0324f, 0f, 0f, 8.72697f, 3f, 14.5f, 4.510351f);
	iLocal_61 = _create_volume_box_with_custom_name(-322.0786f, 803.658f, 117.7309f, 0f, 0f, 8.710198f, 2.1f, 3.644517f, 1.698559f, "Valentine - m_volGeneralPrompt");
	if (func_45() == -1)
	{
		iLocal_73 = _create_volume_box_with_custom_name(-324.8168f, 803.7786f, 117.7309f, 0f, 0f, 10.4864f, 2.206109f, 1.908514f, 1.698559f, "Valentine - m_volGeneralCounterOff");
	}
	else
	{
		iLocal_73 = _create_volume_box_with_custom_name(-324.6804f, 803.6613f, 118.0603f, 0f, 0f, 8.710198f, 2.1f, 2.235618f, 2.440112f, "Valentine - m_volGeneralCounterOff");
	}
	iLocal_62 = _create_volume_aggregate_with_custom_name("Valentine - m_volGeneralCounterMute");
	_0x39816f6f94f385ad(iLocal_62, -327.309f, 801.647f, 120.068f, 0f, 0f, 10.4864f, 2.206f, 5.596f, 6.414f);
	_0x39816f6f94f385ad(iLocal_62, -326.547f, 797.528f, 121.542f, 0f, 0f, 10.4864f, 2.206f, 3.398f, 3.708f);
	_0xb469cfd9e065eb99(iLocal_71, 10065);
}

void func_58()
{
	iLocal_57 = _create_volume_box_with_custom_name(-281.686f, 781.058f, 119.929f, 0f, 0f, 0f, 2.382f, 1.711f, 2.813f, "Valentine - m_volGunsmith - PROMPT");
	iLocal_74 = _create_volume_box_with_custom_name(-279.9107f, 780.475f, 119.8105f, 0f, 0f, 179.9f, 8.518225f, 7.656958f, 2.7f, "Valentine - m_volGunsmithShop");
	iLocal_75 = _create_volume_box_with_custom_name(-280.124f, 786.2109f, 119.6072f, 0f, 0f, 0f, 7.936f, 3.558567f, 2.381096f, "Valentine - m_volGunsmithPORCH");
	if (func_45() == -1)
	{
		iLocal_58 = _create_volume_aggregate_with_custom_name("Valentine - m_volGunsmithCounterOff Agg");
		_0x39816f6f94f385ad(iLocal_58, -279.9358f, 778.0059f, 119.7747f, 0f, 0f, 0f, 8.469496f, 2.69515f, 2.516554f);
		_0x39816f6f94f385ad(iLocal_58, -277.336f, 778.941f, 119.775f, 0f, 0f, 0f, 3.326f, 4.079f, 2.517f);
	}
	else
	{
		iLocal_58 = _create_volume_box_with_custom_name(-281.758f, 778.0059f, 119.7747f, 0f, 0f, 0f, 4.831735f, 2.69515f, 2.516554f, "Valentine - m_volGunsmithCounterOff");
	}
	uLocal_59 = _0x0eb78c2b156635b1(-1612834106, -277.246f, 783.568f, 120.234f, 0f, 0f, 0f, 1.666f, 3.209f, 2.517f);
	_0xbe551c2cc421185d(uLocal_59, 1);
	_0x5b23dff8e0948bb2(uLocal_59, 1);
	_0xb469cfd9e065eb99(iLocal_74, 10066);
}

void func_59(int iParam0, int iParam1)
{
	Global_1915715->f_3[iParam0]->f_32 = iParam1;
}

void func_60()
{
	iLocal_92 = _create_volume_box_with_custom_name(-309.4941f, 809.1079f, 122.1578f, 0f, 0f, 10.47275f, 12.236f, 27.58529f, 9.179325f, "Valentine - m_volSaloonSmith");
}

void func_61()
{
	iLocal_93 = _create_volume_box_with_custom_name(-309.3924f, 808.4083f, 119.378f, 0f, 0f, 99.71499f, 22.62186f, 12.374f, 8.647388f, "volSaloonSmithfieldsInterior");
	iLocal_94 = _create_volume_box_with_custom_name(-241.294f, 770f, 118.14f, 0f, 0f, 110.709f, 9.286f, 8.345f, 5f, "volSaloonKeanesInterior");
}

void func_62(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			Global_1290948->f_47[0] = _create_volume_aggregate();
			_0x6e0d3c3f828da773(&(Global_1290948->f_47[0]), _create_volume_box(2548.06f, -1295.226f, 53f, 0f, 0f, 0f, 30f, 38f, 29.62f));
			_0x6e0d3c3f828da773(&(Global_1290948->f_47[0]), _create_volume_sphere(2538f, -1278f, 51f, 0f, 0f, 0f, 5f, 5f, 5f));
			Global_1290948->f_50[0] = _create_volume_box_with_custom_name(2542.098f, -1282.514f, 48.21795f, 0f, 0f, 0f, 2f, 2f, 3f, "SDN-m_volTheaterStagePrompt");
			Global_1290948->f_47[1] = _create_volume_box_with_custom_name(2689.602f, -1359.844f, 48.57206f, 0f, 0f, 38.71428f, 4.602314f, 8.88861f, 3.333464f, "m_volTheaterMagicInterior");
			Global_1290948->f_50[1] = _create_volume_box_with_custom_name(2686.8f, -1362.094f, 47.21417f, 0f, 0f, 0f, 2f, 2f, 3f, "m_volTheaterMagicPrompt");
			break;
		case 81:
			Global_1290948->f_47[1] = _create_volume_box_with_custom_name(-348.075f, 698.609f, 117.637f, 0f, 0f, 15.5f, 7.2f, 13f, 2.973f, "m_volTheaterValentineInterior");
			Global_1290948->f_50[1] = _create_volume_box_with_custom_name(-355.272f, 704.9423f, 115.9362f, 0f, 0f, 0f, 4.696677f, 8.721128f, 2.973177f, "m_volTheaterValentineProm");
			break;
	}
}

void func_63(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, vector3 vParam5, char* sParam8)
{
	if (func_122(vParam5))
	{
		return;
	}
	Local_19 = iParam0;
	Local_19.f_6 = sParam1;
	Local_19.f_7 = sParam2;
	Local_19.f_8 = sParam3;
	Local_19.f_9 = sParam4;
	Local_19.f_11 = { vParam5 };
	Local_19.f_10 = sParam8;
	Local_19.f_15 = 1;
}

void func_64(int iParam0, int iParam1, int iParam2)
{
	if (Local_19.f_5 >= 3)
	{
		return;
	}
	if (iParam2 < 0 || iParam2 >= 60)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 > 23)
	{
		return;
	}
	func_123(&iVar0, iParam0);
	func_124(&iVar0, iParam1);
	func_125(&iVar0, iParam2);
	func_126(&iVar0);
	iVar1 = 0;
	while (iVar1 <= (Local_19.f_5 - 1))
	{
		func_126(Local_19.f_1[iVar1]);
		if (&Local_19.f_1[iVar1] == iVar0)
		{
			return;
		}
		iVar1++;
	}
	Local_19.f_1[Local_19.f_5] = iVar0;
	Local_19.f_5++;
	func_127(&(Local_19.f_1), Local_19.f_5);
}

int func_65(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_45() != -1)
	{
		return 1;
	}
	if (!func_86(iParam0))
	{
		return 1;
	}
	if (func_121(iParam0, 16))
	{
		return 1;
	}
	if (func_128(iParam0) && !func_129(iParam0))
	{
	}
	if (func_130(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (func_131(iParam1))
		{
			iVar0 = iParam1;
		}
		if (func_131(iParam2))
		{
			iVar1 = iParam2;
		}
		if (&Global_1896620 < iVar0 || &Global_1896620 > iVar1)
		{
			Global_1896620 = iVar0;
		}
		while (true)
		{
			if ((!func_128(iParam0) || func_129(iParam0)) || func_132(&Global_1896620))
			{
				func_133(&Global_1896620, 0);
			}
			Global_1896620 = &Global_1896620 + 1;
			iVar2++;
			if (&Global_1896620 > iVar1)
			{
				Global_1896620 = -1;
				return 1;
			}
			if (iVar2 >= 10 && !bParam3)
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_66(int iParam0)
{
	return (Global_1940258 && iParam0) != 0;
}

bool func_67(int iParam0)
{
	return (get_game_timer() - iParam0) < &Global_1900871;
}

struct<2> func_68(int iParam0)
{
	return *Global_1900736->f_1[iParam0];
}

int func_69(var uParam0, var uParam1)
{
	return uParam0;
}

void func_70(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_134(1497516462);
			func_135(2016141805);
			func_135(1010885152);
			func_135(-502324015);
			break;
		case 2016141805:
			func_135(1497516462);
			func_134(2016141805);
			func_135(1010885152);
			func_135(-502324015);
			break;
		case 1010885152:
			func_135(1497516462);
			func_135(2016141805);
			func_134(1010885152);
			func_135(-502324015);
			break;
		case -502324015:
			func_135(1497516462);
			func_135(2016141805);
			func_135(1010885152);
			func_134(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_135(-538889627);
			func_135(-538880323);
			func_135(-1056767524);
			func_134(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_136();
			func_134(iParam0);
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
			func_137();
			func_134(iParam0);
			break;
		case 2019386373:
			func_135(-664252410);
			func_135(2109952320);
			func_134(2019386373);
			break;
		case -664252410:
			func_135(2019386373);
			func_135(2109952320);
			func_134(-664252410);
			break;
		case 2109952320:
			func_135(2019386373);
			func_135(-664252410);
			func_134(2109952320);
			break;
		case -1674179981:
			func_135(-1835851517);
			func_135(-1838352012);
			func_134(-1674179981);
			break;
		case -1835851517:
			func_135(-1674179981);
			func_135(-1838352012);
			func_134(-1835851517);
			break;
		case -1838352012:
			func_135(-1674179981);
			func_135(-1835851517);
			func_134(-1838352012);
			break;
		case -1717960576:
			func_135(210001842);
			func_134(-1717960576);
			break;
		case 210001842:
			func_135(-1717960576);
			func_134(210001842);
			break;
		case -150493654:
			func_135(-1271608261);
			func_135(1846061697);
			func_135(-1145519186);
			func_134(-150493654);
			break;
		case -1271608261:
			func_135(-150493654);
			func_135(1846061697);
			func_135(-1145519186);
			func_134(-1271608261);
			break;
		case 1846061697:
			func_135(-150493654);
			func_135(-1271608261);
			func_135(-1145519186);
			func_134(1846061697);
			break;
		case -1145519186:
			func_135(-150493654);
			func_135(-1271608261);
			func_135(1846061697);
			func_134(-1145519186);
			break;
		case 1766284049:
			func_135(280705402);
			func_135(1926308480);
			func_134(1766284049);
			break;
		case 280705402:
			func_135(1766284049);
			func_135(1926308480);
			func_134(280705402);
			break;
		case 1926308480:
			func_135(1766284049);
			func_135(280705402);
			func_134(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_135(439465264);
				func_134(1609506757);
			}
			else
			{
				func_135(1609506757);
				func_135(439465264);
			}
			break;
		case 439465264:
			if (func_49(1609506757))
			{
				if (bParam1)
				{
					func_134(439465264);
				}
				else
				{
					func_135(439465264);
				}
			}
			break;
		case 1822001510:
			func_135(-1612662716);
			func_134(1822001510);
			break;
		case -1612662716:
			func_135(1822001510);
			func_134(-1612662716);
			break;
		case 1306158345:
			func_135(1952610440);
			func_135(-223469678);
			func_135(-404698347);
			func_135(1517904467);
			func_134(1306158345);
			break;
		case 1952610440:
			func_135(1306158345);
			func_135(-223469678);
			func_135(-404698347);
			func_135(1517904467);
			func_134(1952610440);
			break;
		case -223469678:
			func_135(1306158345);
			func_135(1952610440);
			func_135(-404698347);
			func_135(1517904467);
			func_134(-223469678);
			break;
		case -404698347:
			func_135(1306158345);
			func_135(1952610440);
			func_135(-223469678);
			func_135(1517904467);
			func_134(-404698347);
			break;
		case 1517904467:
			func_135(1306158345);
			func_135(1952610440);
			func_135(-223469678);
			func_135(-404698347);
			func_134(1517904467);
			break;
		case 1376646519:
			func_135(931649776);
			func_135(-434590080);
			func_135(1743048395);
			func_135(449774763);
			func_134(1376646519);
			break;
		case 931649776:
			func_135(1376646519);
			func_135(-434590080);
			func_135(1743048395);
			func_135(449774763);
			func_134(931649776);
			break;
		case -434590080:
			func_135(1376646519);
			func_135(931649776);
			func_135(1743048395);
			func_135(449774763);
			func_134(-434590080);
			break;
		case 1743048395:
			func_135(1376646519);
			func_135(931649776);
			func_135(-434590080);
			func_135(449774763);
			func_134(1743048395);
			break;
		case 449774763:
			func_135(1376646519);
			func_135(931649776);
			func_135(-434590080);
			func_135(1743048395);
			func_134(449774763);
			break;
		case -1414537028:
			func_135(38162571);
			func_135(1350391819);
			func_135(54073871);
			func_134(-1414537028);
			break;
		case 38162571:
			func_135(-1414537028);
			func_135(1350391819);
			func_135(54073871);
			func_134(38162571);
			break;
		case 1350391819:
			func_135(-1414537028);
			func_135(38162571);
			func_135(54073871);
			func_134(1350391819);
			break;
		case 54073871:
			func_135(-1414537028);
			func_135(38162571);
			func_135(1350391819);
			func_134(54073871);
			break;
		case 198200492:
			func_134(198200492);
			func_135(-1124061431);
			func_135(52706132);
			func_135(-259123672);
			break;
		case -1124061431:
			func_135(198200492);
			func_134(-1124061431);
			func_135(52706132);
			func_135(-259123672);
			break;
		case 52706132:
			func_135(198200492);
			func_135(-1124061431);
			func_134(52706132);
			func_135(-259123672);
			break;
		case -259123672:
			func_135(198200492);
			func_135(-1124061431);
			func_135(52706132);
			func_134(-259123672);
			break;
		case -919512195:
			func_134(-919512195);
			func_135(-1925798111);
			func_135(420709909);
			func_135(1703426636);
			break;
		case -1925798111:
			func_134(-1925798111);
			func_135(-919512195);
			func_135(420709909);
			func_135(1703426636);
			break;
		case 420709909:
			func_134(420709909);
			func_135(-919512195);
			func_135(-1925798111);
			func_135(1703426636);
			break;
		case 1703426636:
			func_134(1703426636);
			func_135(-919512195);
			func_135(-1925798111);
			func_135(420709909);
			break;
		case -1223121209:
			func_134(-1223121209);
			func_135(630808005);
			break;
		case 630808005:
			func_134(630808005);
			func_135(-1223121209);
			break;
		case 1453909576:
			func_134(1453909576);
			func_135(1643531967);
			break;
		case 1643531967:
			func_134(1643531967);
			func_135(1453909576);
			break;
		case 0:
			func_134(0);
			func_135(473295046);
			func_135(-1738165526);
			break;
		case 473295046:
			func_134(473295046);
			func_135(0);
			func_135(-1738165526);
			break;
		case -1738165526:
			func_134(-1738165526);
			func_135(0);
			func_135(473295046);
			break;
		case 932909855:
			func_134(932909855);
			func_135(2051822093);
			break;
		case 2051822093:
			func_134(2051822093);
			func_135(932909855);
			break;
		case 405586984:
			func_134(405586984);
			func_135(1509509592);
			func_135(-959357075);
			func_135(-1311865656);
			break;
		case 1509509592:
			func_134(1509509592);
			func_135(405586984);
			func_135(-959357075);
			func_135(-1311865656);
			break;
		case -959357075:
			func_134(-959357075);
			func_135(1509509592);
			func_135(405586984);
			func_135(-1311865656);
			break;
		case -1311865656:
			func_134(-1311865656);
			func_135(1509509592);
			func_135(-959357075);
			func_135(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_134(-524145696);
			}
			else
			{
				func_135(-524145696);
			}
			func_135(1626481264);
			func_135(282809459);
			break;
		case 282809459:
			func_134(282809459);
			func_135(1626481264);
			func_135(-524145696);
			break;
		case 1626481264:
			func_134(1626481264);
			func_135(-524145696);
			func_135(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_134(885203519);
			}
			else
			{
				func_135(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_134(-1080627546);
			}
			else
			{
				func_135(-1080627546);
			}
			break;
		case -510945576:
			if (bParam1)
			{
				func_134(-510945576);
			}
			else
			{
				func_135(-510945576);
				func_138(385812466);
				func_138(-1201452352);
			}
			break;
		default:
			if (bParam1)
			{
				func_134(iParam0);
			}
			else
			{
				func_135(iParam0);
			}
			break;
	}
}

void func_71(int iParam0, vector3 vParam1, int iParam4, int iParam5)
{
	if (func_122(vParam1))
	{
		return;
	}
	func_139(iParam0);
	Global_1940018->f_5[iParam0]->f_1 = { vParam1 };
	Global_1940018->f_5[iParam0]->f_4 = iParam4;
	Global_1940018->f_5[iParam0]->f_5 = iParam5;
	Global_1940018->f_5[iParam0]->f_6 = func_140(iParam5, iParam0);
}

void func_72(int iParam0, vector3 vParam1, var uParam4, int iParam5)
{
	if (func_122(vParam1))
	{
		return;
	}
	Global_1290948->f_32[iParam0]->f_1 = { vParam1 };
	Global_1290948->f_32[iParam0] = uParam4;
	Global_1290948->f_32[iParam0]->f_4 = iParam5;
	Global_1290948->f_32[iParam0]->f_5 = func_141(iParam5, iParam0);
}

void func_73(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, float fParam8, int iParam9)
{
	if (iParam0 == 9 && !(!func_78() && func_142()))
	{
		if (func_143(255))
		{
			if (_0xf256a75210c5c0eb(iParam1, get_entity_coords(get_player_ped(player_id()), false, false)))
			{
				func_144(1, 1);
			}
		}
	}
	set_this_script_can_remove_blips_created_by_any_script(true);
	func_145(iParam0, 1);
	Global_1051439->f_72[iParam0] = 0;
	Global_1051439->f_72[iParam0]->f_18 = func_146(iParam2, iParam0);
	Global_1051439->f_72[iParam0]->f_24 = iParam1;
	Global_1051439->f_72[iParam0]->f_3 = { _0xf70f00013a62f866(iParam1) };
	Global_1051439->f_72[iParam0]->f_25 = iParam3;
	Global_1051439->f_72[iParam0]->f_27 = iParam4;
	Global_1051439->f_72[iParam0]->f_2 = iParam2;
	Global_1051439->f_72[iParam0]->f_63 = func_147(Global_1051439->f_72[iParam0]->f_18);
	Global_1051439->f_72[iParam0]->f_72 = iParam9;
	Global_1051439->f_72[iParam0]->f_73 = 0;
	Global_1051439->f_72[iParam0]->f_48 = 0;
	if (fParam8 <= 0f)
	{
		fParam8 = func_148(iParam0);
	}
	Global_1051439->f_72[iParam0]->f_10 = fParam8;
	Global_1051439->f_72[iParam0]->f_14 = iParam5;
	if (bParam6)
	{
		_0x18262cafebb5fbe1(Global_1051439->f_72[iParam0]->f_24, 0, 0, 0, -1, -1, 0);
		_0xb56d41a694e42e86(Global_1051439->f_72[iParam0]->f_24, 0, 0, 0, -1, -1, 0);
	}
	if (bParam7)
	{
		_0x18262cafebb5fbe1(Global_1051439->f_72[iParam0]->f_25, 0, 0, 0, -1, -1, 0);
		_0xb56d41a694e42e86(Global_1051439->f_72[iParam0]->f_25, 0, 0, 0, -1, -1, 0);
	}
	_0xeeb7818b1d307212(Global_1051439->f_72[iParam0]->f_24);
	func_149(iParam0, 4);
	func_150(iParam0);
}

void func_74(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	iVar0 = func_151(iParam0);
	if (iVar0 < 0 || iVar0 >= 15)
	{
		return;
	}
	Global_1051439->f_72[iParam0]->f_31[iVar0] = func_152(iParam1, 0, 0);
	if (func_153(&(Global_1051439->f_72[iParam0]->f_31[iVar0])))
	{
		if (!func_154(&(Global_1051439->f_72[iParam0]->f_31[iVar0])))
		{
			func_91(&(Global_1051439->f_72[iParam0]->f_31[iVar0]), 0, iParam2, bParam3, 1, 0, iParam4, 0);
		}
	}
	Global_1051439->f_72[iParam0]->f_47++;
}

int func_75(int iParam0, bool bParam1)
{
	if ((func_155(iParam0, 16384) || func_155(iParam0, 32768)) || func_122(Global_1051439->f_72[iParam0]->f_3))
	{
		if (_does_scenario_point_exist(Global_1051439->f_72[iParam0]->f_6))
		{
			_delete_scenario_point(Global_1051439->f_72[iParam0]->f_6);
		}
		if (_does_scenario_point_exist(Global_1915715->f_3[iParam0]->f_16))
		{
			_delete_scenario_point(Global_1915715->f_3[iParam0]->f_16);
		}
		Global_1051439->f_72[iParam0]->f_6 = 0;
		Global_1915715->f_3[iParam0]->f_16 = 0;
		Global_1051439->f_72[iParam0]->f_8 = 0;
		return 0;
	}
	iVar0 = func_146(func_156(), iParam0);
	if ((!bParam1 && func_157(iVar0, &uVar1, &uVar2, &vVar3)) || (bParam1 && func_158(iVar0, &uVar1, &uVar2, &vVar3)))
	{
		func_159(iParam0, uVar1, vVar3, uVar2, 0);
		Global_1051439->f_72[iParam0]->f_3 = { vVar3 };
		Global_1051439->f_72[iParam0]->f_8 = uVar1;
	}
	return Global_1051439->f_72[iParam0]->f_6;
}

void func_76(int iParam0, int iParam1)
{
	Global_1915715->f_3[iParam0]->f_33 = iParam1;
}

void func_77(int iParam0, int iParam1)
{
	func_160(&(Global_1051439->f_72[iParam0]->f_49), iParam1);
}

bool func_78()
{
	if (_0xdd73c9838ce7181d())
	{
		return true;
	}
	return false;
}

bool func_79()
{
	return func_161(func_68(0));
}

void func_80()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_1051439->f_3634[iVar0] = -1;
		Global_1051439->f_3634[iVar0]->f_9 = -1;
		iVar0++;
	}
}

void func_81(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 4 && &Global_1051439->f_3634[iVar0] != -1)
	{
		iVar0++;
	}
	if (iVar0 == 4)
	{
		return;
	}
	Global_1051439->f_3634[iVar0]->f_1 = 0;
	Global_1051439->f_3634[iVar0] = iParam0;
	if (func_157(&(Global_1051439->f_3634[iVar0]), &uVar1, &uVar2, &vVar3))
	{
		Global_1051439->f_3634[iVar0]->f_6 = func_162(uVar1, vVar3, uVar2, 0, 0, 0);
		Global_1051439->f_3634[iVar0]->f_2 = { vVar3 };
		_0xa7479fb665361edb(Global_1051439->f_3634[iVar0]->f_6, 0);
		_0xe69fda40aac3efc0(Global_1051439->f_3634[iVar0]->f_6, 0);
	}
	iVar6 = func_163(&(Global_1051439->f_3634[iVar0]));
	bVar7 = iVar6 != -1;
	if (bVar7)
	{
		Global_1051439->f_3634[iVar0]->f_9 = iVar6;
		if (func_157(iVar6, &uVar1, &uVar2, &vVar3))
		{
			Global_1051439->f_3634[iVar0]->f_13 = func_162(uVar1, vVar3, uVar2, 0, 0, 0);
			Global_1051439->f_3634[iVar0]->f_10 = { vVar3 };
			_0xa7479fb665361edb(Global_1051439->f_3634[iVar0]->f_13, 0);
			_0xe69fda40aac3efc0(Global_1051439->f_3634[iVar0]->f_13, 0);
		}
	}
	Global_1051439->f_3634[iVar0]->f_5 = func_147(&(Global_1051439->f_3634[iVar0]));
	if (!func_164(30, 4))
	{
		func_149(30, 4);
		func_150(30);
	}
}

bool func_82(int iParam0, int iParam1, int iParam2)
{
	if (func_45() != -1)
	{
		return false;
	}
	if (!func_165(iParam0, 0))
	{
		return false;
	}
	if (!_does_volume_exist(iParam1))
	{
		return false;
	}
	iVar0 = func_83(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	_0xe2be6ffa4a13cbb0(iParam1, iVar0, iParam2);
	return true;
}

int func_83(int iParam0)
{
	if (!func_131(iParam0))
	{
		return 0;
	}
	return (*Global_1893775)[iParam0]->f_1;
}

void func_84(float fParam0, float fParam1, float fParam2, float fParam3)
{
	Global_1893587->f_182 = fParam0;
	Global_1893587->f_183 = fParam1;
	Global_1893587->f_184 = fParam2;
	Global_1893587->f_185 = fParam3;
}

void func_85(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_61 >= 20)
	{
		return;
	}
	if (!_does_volume_exist(iParam1))
	{
		return;
	}
	if (!func_166(iParam2))
	{
		return;
	}
	(*uParam0)[uParam0->f_61] = iParam1;
	(*uParam0)[uParam0->f_61]->f_1 = iParam2;
	(*uParam0)[uParam0->f_61]->f_2 = 0;
	uParam0->f_61++;
}

bool func_86(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

void func_87()
{
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (func_167(iVar0))
		{
			(*Global_1900702)[iVar0] = -1;
		}
		iVar0++;
	}
}

void func_88(int iParam0, int iParam1)
{
	if (!func_167(iParam0))
	{
		return;
	}
	if (!func_168(iParam1))
	{
		return;
	}
	(*Global_1900702)[iParam0] = iParam1;
}

void func_89()
{
	if (func_169(-367.15f, 788.29f, 116f, 1) < 300f)
	{
		func_170();
		bLocal_145 = true;
	}
	else if (bLocal_145)
	{
		func_171();
		bLocal_145 = false;
	}
}

bool func_90(bool bParam0)
{
	if (func_172())
	{
		if (!*bParam0)
		{
			*bParam0 = 1;
			return true;
		}
	}
	else if (*bParam0)
	{
		*bParam0 = 0;
		return true;
	}
	return false;
}

void func_91(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_152(iParam0, 0, 0);
	if (func_153(iParam0))
	{
		door_system_set_open_ratio(iParam0, iParam2, iParam6);
		if (fParam5 > 0f)
		{
			door_system_set_automatic_rate(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_173(iParam0, iParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_174(iParam0, 1);
			}
			else
			{
				func_175(iParam0, 1);
			}
		}
		else
		{
			func_176(iParam0, 1);
		}
		if (bParam7)
		{
			_0x276aaf0f1c7f2494(iParam0, 1);
		}
	}
	else if (func_177())
	{
	}
	else if (network_is_in_session())
	{
	}
}

void func_92(int iParam0, int iParam1)
{
	func_91(iParam0, 1, 0, 0, 0, 0, 0, 0);
}

void func_93(int iParam0, int iParam1, var uParam2)
{
	if (!*uParam2)
	{
		if (func_178(Global_34, iParam1, 1, 0))
		{
			func_180(func_179(iParam0), 1);
			*uParam2 = 1;
		}
	}
	else if (!func_178(Global_34, iParam1, 1, 0))
	{
		*uParam2 = 0;
	}
}

void func_94()
{
	if (!Local_19.f_15)
	{
		return;
	}
	if (Local_19.f_27 > get_game_timer())
	{
		return;
	}
	if ((!does_entity_exist(Local_19.f_17) && Local_19.f_14 > 1) && Local_19 != 0)
	{
		if (func_181() && func_182(Global_35, Local_19.f_11) < 100f)
		{
			if (Local_19.f_18 == 0)
			{
				Local_19.f_18 = _0x6f3068258a499e52(Local_19, Local_19.f_11, 11);
			}
			else if (_0x1ff441d7954f8709(Local_19.f_18))
			{
				Local_19.f_17 = get_object_index_from_entity_index(_0x4735e2a4bb83d9da(Local_19.f_18));
			}
		}
		Local_19.f_27 = get_game_timer() + 1800;
	}
	switch (Local_19.f_14)
	{
		case 0:
			func_183();
			Local_19.f_14 = 1;
			break;
		case 1:
			if (func_184())
			{
				Local_19.f_14 = 2;
			}
			break;
		case 2:
			if (func_185())
			{
				Local_19.f_14 = 3;
				Local_19.f_24 = 0;
				Local_19.f_21 = 0;
				Local_19.f_22 = func_187(func_186());
				if (Local_19.f_22 > 12)
				{
					Local_19.f_22 = (Local_19.f_22 % 12);
				}
			}
			break;
		case 3:
			Local_19.f_25 = 1;
			if (does_entity_exist(Local_19.f_17))
			{
				if (does_entity_have_drawable(Local_19.f_17))
				{
					Local_19.f_25 = 0;
					play_entity_anim(Local_19.f_17, Local_19.f_7, Local_19.f_6, 1000f, false, true, false, 0f, 0);
					Local_19.f_14 = 4;
				}
			}
			if (Local_19.f_21 >= Local_19.f_22)
			{
				Local_19.f_14 = 2;
			}
			break;
		case 4:
			if (func_188(Local_19.f_17, Local_19.f_6, Local_19.f_7, 0))
			{
				play_entity_anim(Local_19.f_17, Local_19.f_8, Local_19.f_6, 1000f, true, true, false, 0f, 0);
				Local_19.f_23 = get_game_timer() + 1800;
				Local_19.f_26 = 0;
				Local_19.f_14 = 5;
			}
			break;
		case 5:
			fVar0 = _get_entity_anim_current_time(Local_19.f_17, Local_19.f_6, Local_19.f_8);
			if (fVar0 > 0.5f)
			{
				if (Local_19.f_26)
				{
					Local_19.f_21++;
					Local_19.f_26 = 0;
				}
			}
			else if (!Local_19.f_26 && fVar0 > 0.05f)
			{
				Local_19.f_21++;
				Local_19.f_26 = 1;
			}
			if (Local_19.f_21 >= Local_19.f_22 && (func_188(Local_19.f_17, Local_19.f_6, Local_19.f_8, 0.02f) || Local_19.f_26))
			{
				play_entity_anim(Local_19.f_17, Local_19.f_9, Local_19.f_6, 8f, false, false, false, 0f, 0);
				Local_19.f_14 = 2;
			}
			break;
	}
	if (Local_19.f_25 && Local_19.f_14 > 2)
	{
		if (_0x714a0ea7de1167be(Local_19.f_10, "CHURCH_BELL_SOUNDS") && Local_19.f_24 < get_game_timer())
		{
			Local_19.f_24 = get_game_timer() + 1800;
			_play_sound_from_position(Local_19.f_10, Local_19.f_11, "CHURCH_BELL_SOUNDS", false, 0, true, 0);
			Local_19.f_21++;
		}
	}
}

bool func_95(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_96(var uParam0, int iParam1)
{
	return (uParam0->f_62 && iParam1) != 0;
}

bool func_97()
{
	return func_95(&Global_1940258, 8192);
}

bool func_98(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_99(int iParam0)
{
	if (!func_86(iParam0))
	{
		return false;
	}
	return (((*Global_1887339)[iParam0]->f_21 == 1 || (*Global_1887339)[iParam0]->f_21 == 2) && !func_189(iParam0));
}

bool func_100(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 150)
	{
		return false;
	}
	return ((*Global_1887339)[iParam0]->f_22 && iParam1) != 0;
}

int func_101()
{
	return Global_1896622->f_41;
}

void func_102(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	if (!func_190())
	{
		return;
	}
	sVar1 = func_191(iParam0, iParam1, iParam2, iParam4, bParam5, bParam3, &bVar0);
	if (is_string_null_or_empty(sVar1))
	{
		if (bParam3)
		{
			return;
		}
		sVar1 = "DISTRICT_GRIZZLIES";
	}
	if (!func_192(iParam4))
	{
		if (func_86(iParam0))
		{
			iParam4 = func_193(func_9(iParam0));
		}
		else
		{
			iParam4 = func_193(iParam1);
		}
	}
	if (func_192(iParam4))
	{
		iVar3 = func_194(iParam4);
	}
	if (bVar0 && bParam3)
	{
		sVar2 = func_196(func_195(iParam2));
	}
	else if ((func_197(iParam1, 2) || func_198(iParam4, 2)) && !Global_1893587->f_9)
	{
		if (does_entity_exist(player_ped_id()))
		{
			if (is_ped_male(player_ped_id()))
			{
				sVar2 = _create_var_string(2, "LAW_UI_FULL_D_OR_A_M");
			}
			else
			{
				sVar2 = _create_var_string(2, "LAW_UI_FULL_D_OR_A_F");
			}
		}
		Global_1893587->f_9 = 1;
	}
	else if ((func_86(iParam0) && func_121(iParam0, 16777216)) && !Global_1893587->f_9)
	{
		sVar2 = _create_var_string(2, "LAW_UI_RESTRICTED_AREA");
		Global_1893587->f_9 = 1;
	}
	else if (iVar3 >= 1 && !Global_1893587->f_9)
	{
		sVar2 = _create_var_string(2, "REGION_BOUNTY", iVar3);
		Global_1893587->f_9 = 1;
	}
	else
	{
		iVar4 = func_187(func_186());
		iVar5 = func_199(func_186());
		if (iVar5 < 10)
		{
			StringConCat(&cVar6, "0", 8);
		}
		StringIntConCat(&cVar6, iVar5, 8);
		fVar7 = _get_temperature_at_coords(Global_35);
		if (!_should_use_24_hour_clock())
		{
			sVar9 = "AM";
			if (iVar4 >= 12)
			{
				sVar9 = "PM";
				if (iVar4 > 12)
				{
					iVar4 = (iVar4 - 12);
				}
			}
			else if (iVar4 == 0)
			{
				iVar4 = 12;
			}
			sVar8 = "TIME_AND_TEMP_C";
			if (!_should_use_metric_temperature())
			{
				fVar7 = func_200(fVar7);
				sVar8 = "TIME_AND_TEMP_F";
			}
			IntToString(&cVar10, round(fVar7), 8);
			sVar2 = _create_var_string(674, sVar8, iVar4, func_201(&cVar6, 109029619), sVar9, func_201(&cVar10, 109029619));
		}
		else
		{
			sVar8 = "TIME_AND_TEMP_C_24";
			if (!_should_use_metric_temperature())
			{
				fVar7 = func_200(fVar7);
				sVar8 = "TIME_AND_TEMP_F_24";
			}
			IntToString(&cVar10, round(fVar7), 8);
			sVar2 = _create_var_string(162, sVar8, iVar4, func_201(&cVar6, 109029619), func_201(&cVar10, 109029619));
		}
		Global_1893587->f_9 = 0;
	}
	Global_1939161->f_145 = func_202(sVar1, sVar2, 4000, 0, 0, 0, 0, 1);
}

void func_103(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_104(int iParam0, bool bParam1)
{
	if (Global_1572887->f_11 && func_45() == 0)
	{
		return;
	}
	if (!func_203(iParam0))
	{
		return;
	}
	if (func_121(iParam0, 32))
	{
		return;
	}
	func_21(iParam0, 32);
	func_204(Global_1940258, 16384);
	func_180(func_205(-1532769513, -36357794), 1);
	switch (func_9(iParam0))
	{
		case 0:
		case 2:
		case 11:
			func_180(func_205(-1532769513, 213519508), 1);
			break;
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			func_180(func_205(-1532769513, 242571679), 1);
			break;
		case 3:
		case 10:
			func_180(func_205(-1532769513, 1349449307), 1);
			break;
		case 4:
		case 9:
			func_180(func_205(-1532769513, 1140362070), 1);
			break;
		case 8:
			func_180(func_205(-1532769513, -172330899), 1);
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			func_180(func_205(-1532769513, -910218296), 1);
			break;
	}
	switch (iParam0)
	{
		case 0:
			_0xd8c7162ab2e2af45(1822876181);
			break;
		case 1:
			_0xd8c7162ab2e2af45(1092217275);
			break;
		case 2:
			_0xd8c7162ab2e2af45(1855549007);
			_0xd8c7162ab2e2af45(1542246539);
			break;
		case 6:
			_0xd8c7162ab2e2af45(-237206861);
			break;
		case 7:
			_0xd8c7162ab2e2af45(276890716);
			break;
		case 9:
			_0xd8c7162ab2e2af45(-353968602);
			break;
		case 10:
			_0xd8c7162ab2e2af45(-1354901649);
			_0xd8c7162ab2e2af45(-1354901649);
			break;
		case 11:
			_0xd8c7162ab2e2af45(-496244122);
			break;
		case 12:
			_0xd8c7162ab2e2af45(-678676588);
			break;
		case 15:
			_0xd8c7162ab2e2af45(-732274047);
			break;
		case 16:
			_0xd8c7162ab2e2af45(-12216052);
			break;
		case 17:
			_0xd8c7162ab2e2af45(-1456731677);
			break;
		case 21:
			_0xd8c7162ab2e2af45(-2086563810);
			break;
		case 22:
			_0xd8c7162ab2e2af45(221661572);
			break;
		case 24:
			_0xd8c7162ab2e2af45(222265732);
			break;
		case 25:
			_0xd8c7162ab2e2af45(-1484929764);
			break;
		case 26:
			_0xd8c7162ab2e2af45(1104975149);
			break;
		case 27:
			_0xd8c7162ab2e2af45(235472255);
			break;
		case 28:
			_0xd8c7162ab2e2af45(-1337880478);
			break;
		case 30:
			_0xd8c7162ab2e2af45(-1813267128);
			break;
		case 31:
			_0xd8c7162ab2e2af45(-1941572412);
			break;
		case 32:
			_0xd8c7162ab2e2af45(1006072805);
			break;
		case 128:
			_0xd8c7162ab2e2af45(929640770);
			break;
		case 129:
			_0xd8c7162ab2e2af45(1603579970);
			break;
		case 131:
			_0xd8c7162ab2e2af45(-1332669948);
			break;
		case 130:
			_0xd8c7162ab2e2af45(-1807212021);
			break;
		case 36:
			_0xd8c7162ab2e2af45(-1347759053);
			break;
		case 38:
			_0xd8c7162ab2e2af45(-918096609);
			break;
		case 120:
			_0xd8c7162ab2e2af45(1728445882);
			break;
		case 39:
			_0xd8c7162ab2e2af45(-507075109);
			break;
		case 42:
			_0xd8c7162ab2e2af45(462373845);
			break;
		case 44:
			_0xd8c7162ab2e2af45(-1727895786);
			break;
		case 45:
			_0xd8c7162ab2e2af45(1826504111);
			break;
		case 46:
			_0xd8c7162ab2e2af45(1714554710);
			break;
		case 47:
			_0xd8c7162ab2e2af45(-91026072);
			break;
		case 58:
			_0xd8c7162ab2e2af45(893855320);
			break;
		case 59:
			_0xd8c7162ab2e2af45(326709244);
			break;
		case 52:
			_0xd8c7162ab2e2af45(653799702);
			break;
		case 67:
			_0xd8c7162ab2e2af45(415864829);
			break;
		case 69:
			_0xd8c7162ab2e2af45(-1836330842);
			break;
		case 70:
			_0xd8c7162ab2e2af45(648073069);
			break;
		case 71:
			_0xd8c7162ab2e2af45(770074951);
			break;
		case 73:
			_0xd8c7162ab2e2af45(-1276637644);
			break;
		case 76:
			_0xd8c7162ab2e2af45(-431488293);
			break;
		case 77:
			_0xd8c7162ab2e2af45(-1101810198);
			break;
		case 79:
			_0xd8c7162ab2e2af45(-1344767066);
			break;
		case 82:
			_0xd8c7162ab2e2af45(1472232821);
			break;
		case 84:
			_0xd8c7162ab2e2af45(-1368676121);
			break;
		case 68:
			_0xd8c7162ab2e2af45(-33677540);
			break;
		case 85:
			_0xd8c7162ab2e2af45(1602161184);
			_0xd8c7162ab2e2af45(-443207523);
			_0xd8c7162ab2e2af45(-683043834);
			break;
		case 87:
			_0xd8c7162ab2e2af45(147256338);
			_0xd8c7162ab2e2af45(-134804027);
			_0xd8c7162ab2e2af45(2027689141);
			break;
		case 88:
			_0xd8c7162ab2e2af45(-161135375);
			break;
		case 90:
			_0xd8c7162ab2e2af45(1625008147);
			break;
		case 91:
			_0xd8c7162ab2e2af45(121074776);
			break;
		case 92:
			_0xd8c7162ab2e2af45(1876184276);
			break;
		case 94:
			_0xd8c7162ab2e2af45(458479023);
			break;
		case 97:
			_0xd8c7162ab2e2af45(85299473);
			break;
		case 102:
			_0xd8c7162ab2e2af45(-1150244084);
			break;
		case 104:
			_0xd8c7162ab2e2af45(759314201);
			break;
		case 105:
			_0xd8c7162ab2e2af45(2063457042);
			break;
		case 106:
			_0xd8c7162ab2e2af45(1877776161);
			break;
		case 108:
			_0xd8c7162ab2e2af45(2143316225);
			break;
		case 110:
			_0xd8c7162ab2e2af45(-1623232489);
			_0xd8c7162ab2e2af45(-1393093729);
			break;
		case 112:
			_0xd8c7162ab2e2af45(1354284392);
			break;
		case 113:
			_0xd8c7162ab2e2af45(-1430883057);
			break;
		case 115:
			_0xd8c7162ab2e2af45(820139809);
			break;
		case 118:
			_0xd8c7162ab2e2af45(1561007383);
			_0xd8c7162ab2e2af45(-960425936);
			break;
	}
	if (bParam1)
	{
		func_21(iParam0, 64);
	}
}

void func_105(bool bParam0)
{
	if (bParam0)
	{
		Global_1893587 |= 1;
	}
	else
	{
		Global_1893587 = (&Global_1893587 - Global_1893587 & 1);
	}
}

bool func_106(int iParam0)
{
	switch (iParam0)
	{
		case -1721991356:
		case -1233681761:
		case -416908843:
		case 212278652:
		case 839715153:
		case 1420204096:
		case 1974067816:
		case 2082228755:
			return true;
		default:
			break;
	}
	return false;
}

void func_107()
{
	func_206(81);
}

int func_108(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return -4613767;
		case 1:
			return 1567162363;
		case 2:
			return 456471693;
		case 3:
			return -1772963474;
		case 4:
			return 1881496386;
		case 5:
			return 711768994;
		case 6:
			return -440834066;
		case 7:
			return -1363847832;
		case 8:
			return 967769300;
		case 9:
			return -1436873944;
		case 10:
			return -1585669139;
		case 11:
			return 16791368;
		case 12:
			return 1452922822;
		case 13:
			return 549538301;
		case 14:
			return 974698954;
		case 15:
			return 445881012;
		case 16:
			return -2043891857;
		case 17:
			return 419656993;
		case 18:
			return -1732457315;
		case 19:
			return 1794318026;
		case 20:
			return 2035159966;
		case 21:
			return 770832805;
		case 22:
			return -1109814766;
		case 24:
			return -1075550363;
		case 23:
			return -1080317735;
		case 25:
			return 2138576151;
		case 26:
			return 1180954297;
		case 27:
			return 783603394;
		case 28:
			return 1162337247;
		case 30:
			return -170458336;
		case 29:
			return 2023240596;
		case 31:
			return 1285083821;
		case 32:
			return -1840907462;
		case 33:
			return 756710130;
		case 34:
			return 1634157321;
		case 35:
			return 388370024;
		case 36:
			return 1092296123;
		case 37:
			return 467491346;
		case 38:
			return -1391584612;
		case 39:
			return -152111346;
		case 40:
			return 1447551317;
		case 41:
			return 153136092;
		case 42:
			return 1304405732;
		case 43:
			return 1074984055;
		case 53:
			return 1087476368;
		case 54:
			return -1768057340;
		case 44:
			return 1218874593;
		case 55:
			return -1438443836;
		case 45:
			return -2036340415;
		case 56:
			return -597278150;
		case 46:
			return 803939643;
		case 57:
			return -632496195;
		case 47:
			return -965943619;
		case 48:
			return 283532073;
		case 49:
			return -462827524;
		case 50:
			return -69067491;
		case 51:
			return -1864895118;
		case 58:
			return -1929806571;
		case 59:
			return -698525417;
		case 60:
			return -1149739894;
		case 52:
			return 380507325;
		case 61:
			return -875142075;
		case 62:
			return 407796241;
		case 63:
			return -152267914;
		case 64:
			return -1675443320;
		case 65:
			return 1940341639;
		case 66:
			return 1846596114;
		case 67:
			return 907708501;
		case 69:
			return 1825644981;
		case 70:
			return 2065937607;
		case 71:
			return -211317417;
		case 72:
			return 1801307910;
		case 73:
			return -4118897;
		case 74:
			return 1853610692;
		case 75:
			return -1574644415;
		case 76:
			return 2133055515;
		case 77:
			return -1413401932;
		case 78:
			return 801090761;
		case 79:
			return 2131218644;
		case 80:
			return 1708823660;
		case 81:
			return 7976942;
		case 82:
			return 2111120505;
		case 83:
			return 176893118;
		case 84:
			return 1179148161;
		case 68:
			return 602306665;
		case 85:
			return 547412068;
		case 86:
			return -1539748801;
		case 87:
			return -1605119912;
		case 88:
			return -884464063;
		case 89:
			return -1420970720;
		case 90:
			return 1017024547;
		case 91:
			return -1204497306;
		case 92:
			return -1621069480;
		case 93:
			return -458604261;
		case 94:
			return -923391614;
		case 95:
			return -689247089;
		case 97:
			return 44049568;
		case 98:
			return 1350259552;
		case 96:
			return 620414938;
		case 99:
			return -61661574;
		case 100:
			return -725338054;
		case 101:
			return -770123507;
		case 102:
			return 1322486734;
		case 103:
			return -460939553;
		case 104:
			return -1451863552;
		case 105:
			return 173833068;
		case 106:
			return -1681004136;
		case 107:
			return 713715980;
		case 108:
			return -31204969;
		case 109:
			return -1720064790;
		case 110:
			return -532172775;
		case 111:
			return -739067737;
		case 112:
			return -1203133835;
		case 113:
			return -1947411598;
		case 115:
			return -1298718762;
		case 116:
			return -595083064;
		case 117:
			return 884833917;
		case 118:
			return 2141950651;
		case 114:
			return -1049753365;
		case 119:
			return -1437650729;
		case 135:
			return 672925454;
		case 136:
			return 846062774;
		case 137:
			return 1713550306;
		case 138:
			return -1573562784;
		case 127:
			return 1369756178;
		case 128:
			return -736172423;
		case 129:
			return 1597070291;
		case 131:
			return -159501564;
		case 130:
			return -1438809608;
		case 132:
			return -102682392;
		case 133:
			return 676673543;
		case 134:
			return 1869665995;
		case 120:
			return -81068979;
		case 121:
			return 227618407;
		case 122:
			return 2106043438;
		case 123:
			return -1380256064;
		case 124:
			return -2118469183;
		case 125:
			return -558997834;
		case 126:
			return 1563120499;
		case 139:
			return 658339366;
		default:
			break;
	}
	if (bParam1)
	{
		return 1757124778;
	}
	return 0;
}

void func_109(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		Global_8123[iParam0] = (&Global_8123[iParam0] - (Global_8123[iParam0] && iParam1));
		return;
	}
	Global_1071686->f_19674[iParam0] = (&Global_1071686->f_19674[iParam0] - (Global_1071686->f_19674[iParam0] && iParam1));
}

void func_110(bool bParam0)
{
	if (bParam0)
	{
		Global_1893587 |= 2;
	}
	else
	{
		Global_1893587 = (&Global_1893587 - Global_1893587 & 2);
	}
}

void func_111(int iParam0)
{
	func_84(0.775f, 0.2f, 0.025f, 0f);
	_remove_speed_zone(iLocal_131);
	_clear_tactical_analysis_points();
	func_207(iLocal_128);
	func_208();
	func_209();
	func_135(1250636944);
	func_171();
	func_210();
}

void func_112(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1940018->f_5[iVar0]->f_5 == iParam0)
		{
			func_139(iVar0);
		}
		iVar0++;
	}
}

void func_113(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (Global_1915715->f_3[iVar0]->f_8 == iParam0)
		{
			func_211(iVar0);
		}
		iVar0++;
	}
}

bool func_114(int iParam0, bool bParam1)
{
	if (func_45() != -1)
	{
		return true;
	}
	if (!func_86(iParam0))
	{
		return true;
	}
	if (func_130(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (Global_1896620->f_1 < iVar0 || Global_1896620->f_1 > iVar1)
		{
			Global_1896620->f_1 = iVar0;
		}
		while (true)
		{
			if (!func_212(Global_1896620->f_1, 16))
			{
				func_213(Global_1896620->f_1, 0);
			}
			Global_1896620->f_1++;
			iVar2++;
			if (Global_1896620->f_1 > iVar1)
			{
				Global_1896620->f_1 = -1;
				return true;
			}
			if (iVar2 >= 10 && !bParam1)
			{
				return false;
			}
		}
	}
	return true;
}

bool func_115(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (func_214(iVar0) || func_215(iVar0))
		{
		}
		else
		{
			switch (iVar0)
			{
				case 34:
					break;
				case 30:
					func_216();
					break;
				case 32:
					func_217();
					break;
				default:
					if (Global_1051439->f_72[iVar0]->f_2 == iParam0)
					{
						func_145(iVar0, 0);
					}
					break;
			}
		}
		iVar0++;
	}
	return true;
}

int func_116(int iParam0, int iParam1)
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

bool func_117(int iParam0)
{
	iVar0 = func_218(iParam0);
	if (iVar0 < 336)
	{
		return false;
	}
	return true;
}

bool func_118(int iParam0)
{
	if (iParam0 == 1932172605)
	{
		return true;
	}
	return false;
}

int func_119(int iParam0)
{
	if (_is_imap_active(iParam0))
	{
		return 1;
	}
	if (func_219())
	{
		return 0;
	}
	_request_imap(iParam0);
	return 0;
}

float func_120(float fParam0)
{
	return (fParam0 * 0.01745329f);
}

bool func_121(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		return (Global_8123[iParam0] && iParam1) != 0;
	}
	return (Global_1071686->f_19674[iParam0] && iParam1) != 0;
}

bool func_122(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_123(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_124(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_125(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

void func_126(int iParam0)
{
	if (*iParam0 == -15)
	{
		return;
	}
	iVar0 = func_186();
	func_221(iParam0, func_220(iVar0));
	func_223(iParam0, func_222(iVar0));
	func_225(iParam0, func_224(iVar0));
}

void func_127(var uParam0, int iParam1)
{
	if (iParam1 < 2)
	{
		return;
	}
	bVar0 = true;
	iVar1 = 0;
	iVar2 = 0;
	while (bVar0)
	{
		iVar1 = (iParam1 - 1);
		while (iVar1 >= 0)
		{
			bVar0 = false;
			iVar2 = 0;
			while (iVar2 <= (iVar1 - 1))
			{
				if (uParam0[iVar2] > uParam0[iVar2 + 1])
				{
					uVar3 = uParam0[iVar2];
					(*uParam0)[iVar2] = uParam0[iVar2 + 1];
					(*uParam0)[iVar2 + 1] = uVar3;
					bVar0 = true;
				}
				iVar2++;
			}
			iVar1 = (iVar1 + -1);
		}
	}
}

bool func_128(int iParam0)
{
	if (!func_86(iParam0))
	{
		return false;
	}
	return func_121(iParam0, 33554432);
}

bool func_129(int iParam0)
{
	if (!func_86(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 33:
			return true;
		case 37:
			return true;
		case 70:
			return true;
		case 101:
			return true;
	}
	return false;
}

bool func_130(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bVar0 = func_45() != -1;
	switch (iParam0)
	{
		case 81:
			*iParam1 = 0;
			if (bParam3)
			{
				*iParam2 = 47;
			}
			else
			{
				*iParam2 = 63;
			}
			if (bVar0)
			{
				*iParam2 = 5;
			}
			break;
		case 111:
			*iParam1 = 69;
			if (bParam3)
			{
				*iParam2 = 127;
			}
			else
			{
				*iParam2 = 136;
			}
			if (bVar0)
			{
				*iParam2 = 72;
			}
			break;
		case 5:
			*iParam1 = 137;
			*iParam2 = 318;
			if (bVar0)
			{
				*iParam2 = 142;
			}
			break;
		case 66:
			*iParam1 = 374;
			*iParam2 = 375;
			if (bVar0)
			{
				*iParam2 = 374;
			}
			break;
		case 83:
			*iParam1 = 376;
			*iParam2 = 425;
			if (bVar0)
			{
				*iParam2 = 378;
			}
			break;
		case 98:
			*iParam1 = 437;
			*iParam2 = 465;
			if (bVar0)
			{
				*iParam2 = 437;
			}
			break;
		case 26:
			*iParam1 = 466;
			if (bParam3)
			{
				*iParam2 = 494;
			}
			else
			{
				*iParam2 = 496;
			}
			if (bVar0)
			{
				*iParam2 = 466;
			}
			break;
		case 40:
			*iParam1 = 502;
			*iParam2 = 547;
			if (bVar0)
			{
				*iParam2 = 503;
			}
			break;
		case 73:
			*iParam1 = 548;
			*iParam2 = 559;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 70:
			*iParam1 = 560;
			*iParam2 = 582;
			if (bVar0)
			{
				*iParam2 = 560;
			}
			break;
		case 74:
			*iParam1 = 583;
			if (bParam3)
			{
				*iParam2 = 592;
			}
			else
			{
				*iParam2 = 606;
			}
			if (bVar0)
			{
				*iParam2 = 584;
			}
			break;
		case 80:
			*iParam1 = 497;
			*iParam2 = 500;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 99:
			*iParam1 = 607;
			*iParam2 = 619;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 101:
			*iParam1 = 620;
			*iParam2 = 635;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 103:
			*iParam1 = 636;
			*iParam2 = 637;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 3:
			*iParam1 = 638;
			*iParam2 = 650;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 6:
			*iParam1 = 651;
			*iParam2 = 652;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 33:
			*iParam1 = 319;
			*iParam2 = 338;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 87:
			*iParam1 = 653;
			if (bParam3)
			{
				*iParam2 = 667;
			}
			else
			{
				*iParam2 = 684;
			}
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 37:
			*iParam1 = 685;
			*iParam2 = 694;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 60:
			*iParam1 = 695;
			*iParam2 = 702;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 22:
			if (bParam4)
			{
				*iParam1 = 709;
			}
			else
			{
				*iParam1 = 703;
			}
			*iParam2 = 717;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 116:
			*iParam1 = 718;
			*iParam2 = 724;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 69:
			*iParam1 = 730;
			*iParam2 = 734;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 71:
			*iParam1 = 739;
			*iParam2 = 744;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 75:
			*iParam1 = 745;
			*iParam2 = 748;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 82:
			*iParam1 = 725;
			*iParam2 = 726;
			break;
		case 102:
			*iParam1 = 735;
			*iParam2 = 737;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 30:
			*iParam1 = 738;
			*iParam2 = 738;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 106:
			*iParam1 = 749;
			*iParam2 = 757;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 108:
			*iParam1 = 758;
			*iParam2 = 761;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 77:
			*iParam1 = 727;
			*iParam2 = 729;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 131:
			*iParam1 = 785;
			*iParam2 = 787;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 91:
			*iParam1 = 762;
			*iParam2 = 766;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 135:
			*iParam1 = 767;
			*iParam2 = 773;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 127:
			*iParam1 = 426;
			*iParam2 = 436;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 121:
			*iParam1 = 339;
			*iParam2 = 369;
			if (bVar0)
			{
				*iParam2 = 369;
			}
			break;
		case 132:
			*iParam1 = 370;
			*iParam2 = 373;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 122:
			*iParam1 = 777;
			*iParam2 = 784;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 21:
			*iParam1 = 774;
			*iParam2 = 776;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 44:
			*iParam1 = 788;
			*iParam2 = 792;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 94:
			*iParam1 = 793;
			*iParam2 = 794;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 23:
			*iParam1 = 795;
			*iParam2 = 795;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 28:
			*iParam1 = 796;
			*iParam2 = 797;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 107:
			*iParam1 = 798;
			*iParam2 = 800;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 123:
			*iParam1 = 501;
			*iParam2 = 501;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 11:
			*iParam1 = 801;
			*iParam2 = 827;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 139:
			*iParam1 = 828;
			*iParam2 = 851;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		default:
			*iParam1 = -1;
			*iParam2 = -1;
			break;
	}
	if (*iParam1 == -1 || *iParam2 == -1)
	{
		return false;
	}
	return true;
}

bool func_131(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 948);
}

bool func_132(int iParam0)
{
	switch (iParam0)
	{
		case 64:
			return true;
		case 65:
			return true;
		case 66:
			return true;
		case 67:
			return true;
		case 68:
			return true;
		default:
			break;
	}
	return false;
}

int func_133(int iParam0, bool bParam1)
{
	if (!func_131(iParam0))
	{
		return 0;
	}
	if (!func_212(iParam0, 2))
	{
		return 0;
	}
	if (func_212(iParam0, 32) && !bParam1)
	{
		func_227(iParam0, _create_persistent_character(func_226(iParam0)));
		if (func_45() == -1)
		{
			if (func_212(iParam0, 2048))
			{
				_0x49a8c2cd97815215(func_83(iParam0));
				func_228(iParam0, 2048);
			}
			_0xfcc6db8dbe709bc8(func_83(iParam0));
		}
		return 0;
	}
	if (!func_229(iParam0) && func_45() == -1)
	{
		return 0;
	}
	if (_0x800df3fc913355f3(func_83(iParam0)))
	{
		func_228(iParam0, 128);
		return 1;
	}
	func_227(iParam0, _create_persistent_character(func_226(iParam0)));
	_0x4f81ead1de8fa19b(func_83(iParam0));
	if (func_212(iParam0, 2048))
	{
		_0x49a8c2cd97815215(func_83(iParam0));
		func_228(iParam0, 2048);
	}
	return 1;
}

void func_134(int iParam0)
{
	iVar0 = func_116(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	set_bit(Global_39.f_110[iVar1], iVar2);
	Global_1939655 = 0;
}

void func_135(int iParam0)
{
	iVar0 = func_116(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	clear_bit(Global_39.f_110[iVar1], iVar2);
	Global_1939655 = 0;
}

void func_136()
{
	func_135(-939420910);
	func_135(-1187950766);
	func_135(356365161);
	func_135(753127042);
	func_135(-2038424081);
	func_135(1884271742);
	func_135(459290420);
}

void func_137()
{
	func_135(704802028);
	func_135(588987611);
	func_135(2008888900);
	func_135(1649996811);
	func_135(227918160);
	func_135(168171957);
	func_135(1193080109);
	func_135(-491981251);
	func_135(-639037538);
	func_135(-618620429);
}

void func_138(int iParam0)
{
	if (func_153(iParam0) && func_230())
	{
		remove_door_from_system(iParam0);
	}
}

void func_139(int iParam0)
{
	func_231(Global_1940018->f_5[iParam0]->f_6, 1);
	func_232(Global_1940018->f_5[iParam0]->f_6, 0);
	if (_0xf6a8a652a6b186cd(Global_1940018->f_5[iParam0]->f_8))
	{
		_0xfdfecc6ee4491e11(Global_1940018->f_5[iParam0]->f_8);
	}
	func_233(iParam0, 8192);
	func_233(iParam0, 32768);
	func_233(iParam0, 524288);
	func_233(iParam0, 1048576);
	Global_1940018->f_5[iParam0]->f_10 = 0;
	Global_1940018->f_5[&Global_1940018]->f_9 = 0;
	Global_1940018->f_5[iParam0] = 0;
	Global_1940018->f_5[iParam0]->f_1 = { 0f, 0f, 0f };
	Global_1940018->f_5[iParam0]->f_4 = 0;
	Global_1940018->f_5[iParam0]->f_5 = -1;
	Global_1940018->f_5[iParam0]->f_6 = -1;
	Global_1940018->f_5[iParam0]->f_7 = 0;
}

int func_140(int iParam0, int iParam1)
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

int func_141(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 1;
				default:
					break;
			}
			break;
		case 81:
			switch (iParam1)
			{
				case 1:
					return 2;
				default:
					break;
			}
			break;
	}
	return -1;
}

bool func_142()
{
	return func_234(func_68(0));
}

bool func_143(int iParam0)
{
	return !func_235(iParam0);
}

void func_144(bool bParam0, bool bParam1)
{
	if (func_236(255) == 4)
	{
		return;
	}
	if (func_122(get_entity_coords(get_player_ped(player_id()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_237(0);
	}
	else
	{
		if (bParam1)
		{
			func_238(0, 0, 0, 1);
		}
		func_239(0);
		func_240(&(Global_1102219->f_3849));
		Global_1102219->f_3849 = 0f;
		Global_1102219->f_3849.f_5 = 1;
		Global_1102219->f_3849.f_16 = 0;
		Global_1102219->f_3849.f_17.f_6 = { get_entity_coords(get_player_ped(player_id()), false, false) };
		Global_1102219->f_3849.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102219->f_3849.f_17 = { Global_1901947->f_50.f_1, Global_1901947->f_50.f_1, Global_1901947->f_50.f_1 };
		Global_1102219->f_3849.f_17.f_9 = -432403087;
		func_241(&(Global_1102219->f_3888));
		Global_1102219->f_3888.f_6 = { Global_1102219->f_3849.f_17.f_6 };
		Global_1102219->f_3888 = Global_1102219->f_3849;
		Global_1102219->f_3888.f_5 = 1;
		if (bParam1)
		{
			Global_1102219->f_26.f_3341 = 0;
			Global_1102219->f_26.f_3342 = 0;
		}
	}
	func_242(Global_1102219->f_3849, 36);
	func_243(Global_1102219->f_3888, 36);
}

void func_145(int iParam0, bool bParam1)
{
	bVar0 = (func_244(iParam0) && !bParam1);
	if (!bVar0 && !func_155(iParam0, 65536))
	{
		if (does_entity_exist(Global_1051439->f_72[iParam0]->f_21))
		{
			if (!_0x88ad6cc10d8d35b2(Global_1051439->f_72[iParam0]->f_21))
			{
				set_entity_as_mission_entity(Global_1051439->f_72[iParam0]->f_21, true, true);
			}
			delete_entity(&(Global_1051439->f_72[iParam0]->f_21));
			Global_1051439->f_72[iParam0]->f_21 = 0;
		}
		if (is_model_valid(Global_1051439->f_72[iParam0]->f_19))
		{
			set_model_as_no_longer_needed(Global_1051439->f_72[iParam0]->f_19);
		}
		Global_1051439->f_72[iParam0]->f_19 = 0;
	}
	else if (func_164(iParam0, 67108864) && does_entity_exist(Global_1051439->f_72[iParam0]->f_21))
	{
		_0xe98d55c5983f2509(Global_1051439->f_72[iParam0]->f_21);
	}
	if (_does_volume_exist(Global_1051439->f_72[iParam0]->f_24))
	{
		_0xa35e7bf20fa269e0(Global_1051439->f_72[iParam0]->f_24);
		_0xa1cfb35069d23c23(Global_1051439->f_72[iParam0]->f_24);
		_0x74c2b3dc0b294102(Global_1051439->f_72[iParam0]->f_24);
		if (func_155(iParam0, 524288))
		{
			_delete_volume(Global_1051439->f_72[iParam0]->f_24);
		}
	}
	if (_does_volume_exist(Global_1051439->f_72[iParam0]->f_25))
	{
		_0xa1cfb35069d23c23(Global_1051439->f_72[iParam0]->f_25);
		_0x74c2b3dc0b294102(Global_1051439->f_72[iParam0]->f_25);
		if (func_155(iParam0, 524288))
		{
			_delete_volume(Global_1051439->f_72[iParam0]->f_25);
		}
	}
	if (_does_volume_exist(Global_1051439->f_72[iParam0]->f_27))
	{
		if (func_155(iParam0, 524288))
		{
			_delete_volume(Global_1051439->f_72[iParam0]->f_27);
		}
	}
	if (func_164(iParam0, 16384) && !bVar0)
	{
		if (_does_scenario_point_exist(Global_1051439->f_72[iParam0]->f_6))
		{
			iVar1 = _get_scenario_point_entity(Global_1051439->f_72[iParam0]->f_6, "mp001_s_mp_catalogue01x_noanim_PH_R_HAND");
			if (does_entity_exist(iVar1))
			{
				set_entity_as_no_longer_needed(&iVar1);
			}
			_delete_scenario_point(Global_1051439->f_72[iParam0]->f_6);
		}
		Global_1051439->f_72[iParam0]->f_6 = 0;
		func_245(iParam0, 16384);
	}
	Global_1051439->f_72[iParam0] = -1;
	Global_1051439->f_72[iParam0]->f_3 = { 0f, 0f, 0f };
	Global_1051439->f_72[iParam0]->f_48 = 0;
	Global_1051439->f_72[iParam0]->f_73 = 1;
	Global_1915715->f_3[iParam0]->f_16 = 0;
	iVar3 = func_151(iParam0);
	if (iVar3 >= 15)
	{
		Global_1915715->f_3[iParam0]->f_409 = 0;
	}
	else
	{
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			func_138(&(Global_1051439->f_72[iParam0]->f_31[iVar2]));
			Global_1051439->f_72[iParam0]->f_31[iVar2] = 0;
			iVar2++;
		}
		Global_1051439->f_72[iParam0]->f_47 = 0;
	}
	func_246(iParam0);
	if (func_155(iParam0, 262144))
	{
		Global_1051439->f_72[iParam0]->f_49 = 262144;
	}
	else
	{
		func_247(iParam0);
	}
	if (_does_volume_exist(Global_1051439->f_72[iParam0]->f_24) && func_248(iParam0, 2))
	{
		_0xfd010a2154b40676(Global_1051439->f_72[iParam0]->f_24, 623901053);
		_0x2c87c3e1c7b96ee2(Global_1051439->f_72[iParam0]->f_24);
	}
	func_249(iParam0);
	Global_1051439->f_72[iParam0]->f_1 &= 2113536;
	func_250(iParam0);
	Global_1051439->f_72[iParam0]->f_18 = -1;
	Global_1051439->f_72[iParam0]->f_2 = -1;
}

int func_146(int iParam0, int iParam1)
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

int func_147(int iParam0)
{
	if (!func_251(iParam0))
	{
		return 0;
	}
	if (&Global_1051439->f_4472[iParam0] == 0)
	{
		Global_1051439->f_4472[iParam0] = func_252(iParam0);
	}
	return &(Global_1051439->f_4472[iParam0]);
}

float func_148(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 50f;
		case 9:
			return 25f;
		case 10:
			return 25f;
		case 29:
			return 25f;
		case 38:
			return 70f;
		case 37:
			return 30f;
		case 15:
			return 25f;
		case 39:
			return 100f;
	}
	return 12.5f;
}

void func_149(int iParam0, int iParam1)
{
	if (!func_164(iParam0, iParam1))
	{
	}
	Global_1051439->f_72[iParam0]->f_1 = (Global_1051439->f_72[iParam0]->f_1 || iParam1);
}

void func_150(int iParam0)
{
	(*Global_1051439)[Global_1051439->f_41] = iParam0;
	Global_1051439->f_41++;
	if (Global_1051439->f_41 >= 40)
	{
		Global_1051439->f_41 = (40 - 1);
	}
}

int func_151(int iParam0)
{
	return Global_1051439->f_72[iParam0]->f_47;
}

int func_152(int iParam0, bool bParam1, bool bParam2)
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

bool func_153(int iParam0)
{
	if (func_253(iParam0))
	{
		return is_door_registered_with_system(iParam0);
	}
	return false;
}

bool func_154(int iParam0)
{
	func_152(iParam0, 0, 0);
	if (func_153(iParam0))
	{
		return door_system_get_door_state(iParam0) == 0;
	}
	return false;
}

bool func_155(int iParam0, int iParam1)
{
	return (Global_1051439->f_72[iParam0]->f_49 && iParam1) != 0;
}

int func_156()
{
	return Global_1893587->f_2;
}

int func_157(int iParam0, var uParam1, var uParam2, var uParam3)
{
	return func_254(iParam0, "sHash", uParam1, "fHeading", uParam2, "vPos", uParam3);
}

int func_158(int iParam0, var uParam1, var uParam2, var uParam3)
{
	return func_254(iParam0, "sClosedHash", uParam1, "fClosedHeading", uParam2, "vClosedPos", uParam3);
}

void func_159(int iParam0, var uParam1, vector3 vParam2, var uParam5, bool bParam6)
{
	if (bParam6)
	{
		get_ground_z_for_3d_coord(vParam2, &(vParam2.f_2), false);
	}
	Global_1051439->f_72[iParam0]->f_6 = func_162(uParam1, vParam2, uParam5, 0, 0, 0);
	Global_1915715->f_3[iParam0]->f_16 = Global_1051439->f_72[iParam0]->f_6;
	_set_scenario_point_flag(Global_1051439->f_72[iParam0]->f_6, 23, true);
	_0xa7479fb665361edb(Global_1051439->f_72[iParam0]->f_6, 0);
	func_149(iParam0, 16384);
}

void func_160(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_161(struct<2> Param0)
{
	return func_255(Param0, 9, 12);
}

var func_162(var uParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6, int iParam7)
{
	return create_scenario_point(uParam0, vParam1, iParam4, iParam5, iParam6, iParam7);
}

int func_163(int iParam0)
{
	switch (iParam0)
	{
		case 10:
			return 11;
		case 56:
			return 57;
		case 54:
			return 55;
		case 36:
			return 37;
		case 105:
			return 106;
		case 79:
			return 80;
		case 94:
			return 95;
		default:
			break;
	}
	return -1;
}

bool func_164(int iParam0, int iParam1)
{
	return (Global_1051439->f_72[iParam0]->f_1 && iParam1) != 0;
}

bool func_165(int iParam0, bool bParam1)
{
	if (func_45() != -1)
	{
		return false;
	}
	if (!func_131(iParam0))
	{
		return false;
	}
	if (!_0x800df3fc913355f3(func_83(iParam0)))
	{
		return false;
	}
	if (bParam1 && !does_entity_exist(func_256(iParam0)))
	{
		return false;
	}
	return !_0xeb98b38ca60742d7(func_83(iParam0));
}

bool func_166(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 12);
}

bool func_167(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 16);
}

bool func_168(int iParam0)
{
	return iParam0 != 0;
}

float func_169(vector3 vParam0, int iParam3)
{
	return func_257(Global_34, vParam0, iParam3);
}

void func_170()
{
	func_258(iLocal_140[0], 1572544138, -361.6891f, 785.3472f, 115.2065f);
	func_258(iLocal_140[1], -1064377332, -361.9032f, 789.568f, 115.2065f);
	func_258(iLocal_140[2], 1572544138, -376.7099f, 784.3367f, 115.1714f);
	func_258(iLocal_140[3], -1064377332, -376.9761f, 788.7846f, 115.1714f);
}

void func_171()
{
	iVar0 = 0;
	while (iVar0 < iLocal_140)
	{
		func_259(iLocal_140[iVar0]);
		iVar0++;
	}
}

bool func_172()
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return Global_1071686->f_4;
}

void func_173(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_153(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam2)
		{
			door_system_set_door_state(iParam0, 1);
		}
		door_system_set_open_ratio(iParam0, iParam1, iParam3);
	}
}

void func_174(int iParam0, bool bParam1)
{
	if (func_153(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 2 || bParam1)
		{
			door_system_set_door_state(iParam0, 2);
		}
	}
}

void func_175(int iParam0, bool bParam1)
{
	if (func_153(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam1)
		{
			door_system_set_door_state(iParam0, 1);
		}
	}
}

void func_176(int iParam0, bool bParam1)
{
	if (func_153(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 0 || bParam1)
		{
			door_system_set_door_state(iParam0, 0);
		}
	}
}

bool func_177()
{
	return true;
}

bool func_178(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return false;
	}
	if (!_does_volume_exist(iParam1))
	{
		return false;
	}
	return is_entity_in_volume(iParam0, iParam1, bParam2, iParam3);
}

struct<2> func_179(int iParam0)
{
	iVar0 = func_260(iParam0);
	return func_205(-277276100, iVar0);
}

void func_180(var uParam0, int iParam1, int iParam2)
{
	if (!_stat_id_is_valid(&uParam0))
	{
		return;
	}
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

bool func_181()
{
	if (func_45() == -1)
	{
		return true;
	}
	return can_register_mission_objects(1);
}

float func_182(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

void func_183()
{
	if (Local_19 != 0)
	{
		request_anim_dict(Local_19.f_6);
		request_model(Local_19, false);
		Local_19.f_16 = 1;
	}
}

bool func_184()
{
	if (!is_string_null_or_empty(Local_19.f_6))
	{
		return has_anim_dict_loaded(Local_19.f_6);
	}
	return true;
}

bool func_185()
{
	if (Local_19.f_5 <= 0)
	{
		return false;
	}
	iVar1 = func_186();
	iVar2 = func_187(iVar1);
	iVar3 = func_199(iVar1);
	iVar0 = 0;
	while (iVar0 <= (Local_19.f_5 - 1))
	{
		iVar4 = func_187(&(Local_19.f_1[iVar0]));
		iVar5 = func_199(&(Local_19.f_1[iVar0]));
		if (iVar4 == iVar2 && absi((iVar3 - iVar5)) <= 5)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_186()
{
	return &Global_1902818;
}

int func_187(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

bool func_188(int iParam0, char* sParam1, char* sParam2, float fParam3)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!is_entity_playing_anim(iParam0, sParam1, sParam2, 1))
	{
		return false;
	}
	fVar0 = _get_entity_anim_current_time(iParam0, sParam1, sParam2);
	return absf(((1f - fVar0) - fParam3)) < 0.01f;
}

bool func_189(int iParam0)
{
	if ((iParam0 == 22 || iParam0 == 39) && !func_261())
	{
		return true;
	}
	if (iParam0 == 66)
	{
		return true;
	}
	return false;
}

bool func_190()
{
	if (Global_13)
	{
		return false;
	}
	if (!func_262())
	{
		return false;
	}
	if (_databinding_read_data_bool(Global_1939161->f_75.f_55))
	{
		return false;
	}
	if (func_263(-1 ^ 9, 0, 1))
	{
		return false;
	}
	return true;
}

char* func_191(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!is_string_null_or_empty(&(Global_1893587->f_162)))
	{
		sVar0 = func_264(Global_1893587->f_162);
	}
	if (is_string_null_or_empty(sVar0) && bParam4)
	{
		sVar0 = func_266(func_265(Global_35));
	}
	if (is_string_null_or_empty(sVar0))
	{
		if (!func_267(iParam0) || func_268(44))
		{
			switch (iParam0)
			{
				case 2:
					sVar0 = "LANDMARK_MERKINS_WALLER";
					break;
				case 3:
					sVar0 = "SETTLEMENT_LAGRAS";
					break;
				case 4:
					sVar0 = "HIDEOUT_LAKAY";
					break;
				case 1:
					sVar0 = "LANDMARK_MACOMBS_END";
					break;
				case 6:
					sVar0 = "LANDMARK_HAGEN_ORCHARDS";
					break;
				case 5:
					sVar0 = "TOWN_SAINTDENIS";
					break;
				case 8:
					sVar0 = "SETTLEMENT_GRAND_KORRIGAN";
					break;
				case 9:
					sVar0 = "HIDEOUT_SHADY_BELLE";
					break;
				case 10:
					sVar0 = "LANDMARK_SILTWATER_STRAND";
					break;
				case 11:
					sVar0 = "SETTLEMENT_APPLESEED_TIMBER_CO";
					break;
				case 12:
					sVar0 = "LANDMARK_BERYLS_DREAM";
					break;
				case 15:
					sVar0 = "SETTLEMENT_FORT_RIGGS_HOLDING_CAMP";
					break;
				case 16:
					sVar0 = "HIDEOUT_HANGING_DOG_RANCH";
					break;
				case 17:
					sVar0 = "HOMESTEAD_LONE_MULE_STEAD";
					break;
				case 19:
					sVar0 = "LANDMARK_MONTOS_REST";
					break;
				case 20:
					sVar0 = "LANDMARK_OWANJILA_DAM";
					break;
				case 21:
					sVar0 = "HOMESTEAD_PAINTED_SKY";
					break;
				case 22:
					sVar0 = "SETTLEMENT_PRONGHORN_RANCH";
					break;
				case 23:
					sVar0 = "LANDMARK_RIGGS_STATION";
					break;
				case 25:
					sVar0 = "HOMESTEAD_SHEPHERDS_RISE";
					break;
				case 26:
					sVar0 = "TOWN_STRAWBERRY";
					break;
				case 27:
					sVar0 = "LANDMARK_VALLEY_VIEW";
					break;
				case 28:
					sVar0 = "LANDMARK_WALLACE_STATION";
					break;
				case 30:
					sVar0 = "HOMESTEAD_WATSONS_CABIN";
					break;
				case 31:
					sVar0 = "LANDMARK_CANEBREAK_MANOR";
					break;
				case 32:
					sVar0 = "LANDMARK_COPPERHEAD_LANDING";
					break;
				case 33:
					sVar0 = "SETTLEMENT_SISIKA_PENITENTIARY";
					break;
				case 127:
					sVar0 = "TOWN_ARMADILLO";
					break;
				case 128:
					sVar0 = "SETTLEMENT_COOTS_CHAPEL";
					break;
				case 131:
					sVar0 = "SETTLEMENT_RIDGEWOOD_FARM";
					break;
				case 130:
					sVar0 = "LANDMARK_RILEYS_CHARGE";
					break;
				case 132:
					sVar0 = "HIDEOUT_TWIN_ROCKS";
					break;
				case 35:
					sVar0 = "LANDMARK_BACCHUS_BRIDGE";
					break;
				case 36:
					sVar0 = "HOMESTEAD_FIRWOOD_RISE";
					break;
				case 37:
					sVar0 = "SETTLEMENT_FORT_WALLACE";
					break;
				case 38:
					sVar0 = "HIDEOUT_SIX_POINT_CABIN";
					break;
				case 120:
					sVar0 = "HIDEOUT_GAPTOOTH_BREACH";
					break;
				case 122:
					sVar0 = "SETTLEMENT_RATHSKELLER_FORK";
					break;
				case 121:
					sVar0 = "TOWN_TUMBLEWEED";
					break;
				case 39:
					sVar0 = "SETTLEMENT_BEECHERS_HOPE";
					break;
				case 40:
					sVar0 = "TOWN_BLACKWATER";
					break;
				case 41:
					sVar0 = "LANDMARK_QUAKERS_COVE";
					break;
				case 42:
					sVar0 = "HOMESTEAD_ADLER_RANCH";
					break;
				case 53:
					sVar0 = "LANDMARK_CALUMET_RAVINE";
					break;
				case 44:
					sVar0 = "HOMESTEAD_CHEZ_PORTER";
					break;
				case 45:
					sVar0 = "HIDEOUT_COLTER";
					break;
				case 43:
					sVar0 = "LANDMARK_WINDOW_ROCK";
					break;
				case 47:
					sVar0 = "LANDMARK_MILLESANI_CLAIM";
					break;
				case 51:
					sVar0 = "LANDMARK_TEMPEST_RIM";
					break;
				case 58:
					sVar0 = "LANDMARK_THE_LOFT";
					break;
				case 60:
					sVar0 = "SETTLEMENT_WAPITI";
					break;
				case 52:
					sVar0 = "LANDMARK_EWING_BASIN";
					break;
				case 62:
					sVar0 = "SETTLEMENT_AGUASDULCES";
					break;
				case 64:
					sVar0 = "LANDMARK_CINCO_TORRES";
					break;
				case 65:
					sVar0 = "LANDMARK_LA_CAPILLA";
					break;
				case 66:
					sVar0 = "TOWN_MANICATO";
					break;
				case 135:
					sVar0 = "TOWN_MACFARLANES_RANCH";
					break;
				case 136:
					sVar0 = "SETTLEMENT_THIEVES_LANDING";
					break;
				case 67:
					sVar0 = "LANDMARK_OLD_GREENBANK_MILL";
					break;
				case 69:
					sVar0 = "HOMESTEAD_CARMODY_DELL";
					break;
				case 70:
					sVar0 = "SETTLEMENT_CORNWALL_KEROSENE_TAR";
					break;
				case 71:
					sVar0 = "HOMESTEAD_GUTHRIE_FARM";
					break;
				case 72:
					sVar0 = "LANDMARK_CUMBERLAND_FALLS";
					break;
				case 73:
					sVar0 = "HOMESTEAD_DOWNES_RANCH";
					break;
				case 74:
					sVar0 = "SETTLEMENT_EMERALD_RANCH";
					break;
				case 75:
					sVar0 = "LANDMARK_GRANGERS_HOGGERY";
					break;
				case 77:
					sVar0 = "HOMESTEAD_LARNED_SOD";
					break;
				case 79:
					sVar0 = "LANDMARK_LUCKYS_CABIN";
					break;
				case 80:
					sVar0 = "LANDMARK_FLATNECK_STATION";
					break;
				case 81:
					sVar0 = "TOWN_VALENTINE";
					break;
				case 82:
					sVar0 = "HOMESTEAD_ABERDEEN_PIG_FARM";
					break;
				case 83:
					sVar0 = "TOWN_ANNESBURG";
					break;
				case 84:
					sVar0 = "HIDEOUT_BEAVER_HOLLOW";
					break;
				case 87:
					sVar0 = "SETTLEMENT_BUTCHER_CREEK";
					break;
				case 85:
					sVar0 = "LANDMARK_BLACK_BALSAM_RISE";
					break;
				case 86:
					sVar0 = "LANDMARK_BRANDYWINE_DROP";
					break;
				case 88:
					sVar0 = "HOMESTEAD_DOVERHILL";
					break;
				case 91:
					sVar0 = "HOMESTEAD_MACLEANS_HOUSE";
					break;
				case 92:
					sVar0 = "LANDMARK_MOSSY_FLATS";
					break;
				case 93:
					sVar0 = "LANDMARK_ROANOKE_VALLEY";
					break;
				case 94:
					sVar0 = "HOMESTEAD_WILLARDS_REST";
					break;
				case 98:
					sVar0 = "TOWN_VANHORN";
					break;
				case 123:
					sVar0 = "SETTLEMENT_BENEDICT_POINT";
					break;
				case 124:
					sVar0 = "HIDEOUT_FORT_MERCER";
					break;
				case 125:
					sVar0 = "SETTLEMENT_PLAINVIEW";
					break;
				case 99:
					sVar0 = "SETTLEMENT_BRAITHWAITE_MANOR";
					break;
				case 100:
					sVar0 = "LANDMARK_BOLGER_GLADE";
					break;
				case 101:
					sVar0 = "SETTLEMENT_CALIGA_HALL";
					break;
				case 102:
					sVar0 = "HOMESTEAD_CATFISH_JACKSONS";
					break;
				case 104:
					sVar0 = "HIDEOUT_CLEMENS_POINT";
					break;
				case 105:
					sVar0 = "HOMESTEAD_COMPSONS_STEAD";
					break;
				case 106:
					sVar0 = "HOMESTEAD_HILL_HAVEN_RANCH";
					break;
				case 108:
					sVar0 = "HOMESTEAD_LONNIES_SHACK";
					break;
				case 110:
					sVar0 = "LANDMARK_RADLEYS_PASTURE";
					break;
				case 111:
					sVar0 = "TOWN_RHODES";
					break;
				case 114:
					sVar0 = "LANDMARK_BEAR_CLAW";
					break;
				case 116:
					sVar0 = "SETTLEMENT_MANZANITA_POST";
					break;
				case 117:
					sVar0 = "LANDMARK_PACIFIC_UNION_RAILROAD";
					break;
				case 118:
					sVar0 = "LANDMARK_TANNERS_REACH";
					break;
				case 139:
					sVar0 = "SETTLEMENT_CENTRAL_UNION_RAILROAD_CAMP";
					break;
			}
		}
	}
	if (is_string_null_or_empty(sVar0) || bParam5)
	{
		switch (iParam2)
		{
			case -49694339:
				sVar0 = "WATER_ARROYO_DE_LA_VIBORA";
				*bParam6 = 1;
				break;
			case -196675805:
				sVar0 = "WATER_AURORA_BASIN";
				*bParam6 = 1;
				break;
			case -1168459546:
				sVar0 = "WATER_BAHIA_DE_LA_PAZ";
				*bParam6 = 1;
				break;
			case 795414694:
				sVar0 = "WATER_BARROW_LAGOON";
				*bParam6 = 1;
				break;
			case -557290573:
				sVar0 = "DISTRICT_BAYOU_NWA";
				*bParam6 = 1;
				break;
			case -1073312073:
				sVar0 = "WATER_CAIRN_LAKE";
				*bParam6 = 1;
				break;
			case -804804953:
				sVar0 = "WATER_CATTAIL_POND";
				*bParam6 = 1;
				break;
			case 370072007:
				sVar0 = "WATER_DAKOTA_RIVER";
				*bParam6 = 1;
				break;
			case 1245451421:
				sVar0 = "WATER_DEADBOOT_CREEK";
				*bParam6 = 1;
				break;
			case -105598602:
				sVar0 = "WATER_ELYSIAN_POOL";
				*bParam6 = 1;
				break;
			case -1356490953:
				sVar0 = "WATER_FLAT_IRON_LAKE";
				*bParam6 = 1;
				break;
			case -1276586360:
				sVar0 = "WATER_HAWKS_EYE_CREEK";
				*bParam6 = 1;
				break;
			case 1755369577:
				sVar0 = "LANDMARK_HEARTLAND_OVERFLOW";
				*bParam6 = 1;
				break;
			case 1175365009:
				sVar0 = "WATER_COTORRA_SPRINGS";
				*bParam6 = 1;
				break;
			case -1369817450:
				sVar0 = "WATER_LAKE_DON_JULIO";
				*bParam6 = 1;
				break;
			case 592454541:
				sVar0 = "WATER_LAKE_ISABELLA";
				*bParam6 = 1;
				break;
			case -2040708515:
				sVar0 = "WATER_LANNAHECHEE_RIVER";
				*bParam6 = 1;
				break;
			case -1410384421:
				sVar0 = "WATER_LITTLE_CREEK_RIVER";
				*bParam6 = 1;
				break;
			case -1308233316:
				sVar0 = "WATER_LOWER_MONTANA_RIVER";
				*bParam6 = 1;
				break;
			case 301094150:
				sVar0 = "WATER_MATTOCK_POND";
				*bParam6 = 1;
				break;
			case -811730579:
				sVar0 = "WATER_MOONSTONE_POND";
				*bParam6 = 1;
				break;
			case -1817904483:
				sVar0 = "WATER_OCREAGHS_RUN";
				*bParam6 = 1;
				break;
			case -1300497193:
				sVar0 = "WATER_OWANJILA";
				*bParam6 = 1;
				break;
			case 2005774838:
				sVar0 = "WATER_RINGNECK_CREEK";
				*bParam6 = 1;
				break;
			case -247856387:
				sVar0 = "WATER_SEA_OF_CORONADO";
				*bParam6 = 1;
				break;
			case -823661292:
				sVar0 = "WATER_SOUTHFIELD_FLATS";
				*bParam6 = 1;
				break;
			case -218679770:
				sVar0 = "WATER_SPIDER_GORGE";
				*bParam6 = 1;
				break;
			case -1287619521:
				sVar0 = "WATER_STILLWATER_CREEK";
				*bParam6 = 1;
				break;
			case -1781130443:
				sVar0 = "WATER_UPPER_MONTANA_RIVER";
				*bParam6 = 1;
				break;
			case -261541730:
				sVar0 = "WATER_WHINYARD_STRAIT";
				*bParam6 = 1;
				break;
			case -1229593481:
				if (iParam1 == 10)
				{
					sVar0 = "WATER_KAMASSA_RIVER";
				}
				else if (iParam1 == 2)
				{
					sVar0 = "WATER_KAMASSA_RIVER_BLUEWATER_MARSH";
				}
				else
				{
					sVar0 = "WATER_KAMASSA_RIVER_BAYOU_NWA";
				}
				*bParam6 = 1;
				break;
			case -1504425495:
				if (iParam1 == 4 || iParam1 == 12)
				{
					sVar0 = "WATER_SAN_LUIS_RIVER_WEST_ELIZABETH";
				}
				else
				{
					sVar0 = "WATER_SAN_LUIS_RIVER_NEW_AUSTIN";
				}
				*bParam6 = 1;
				break;
		}
	}
	if (is_string_null_or_empty(sVar0))
	{
		switch (iParam1)
		{
			case 0:
				sVar0 = "DISTRICT_BAYOU_NWA";
				break;
			case 1:
				sVar0 = "DISTRICT_BIG_VALLEY";
				break;
			case 2:
				sVar0 = "DISTRICT_BLUEWATER_MARSH";
				break;
			case 3:
				sVar0 = "DISTRICT_CUMBERLAND_FOREST";
				break;
			case 4:
				sVar0 = "DISTRICT_GREAT_PLAINS";
				break;
			case 6:
				sVar0 = "DISTRICT_GRIZZLIES";
				break;
			case 7:
				sVar0 = "DISTRICT_GRIZZLIES";
				break;
			case 8:
				sVar0 = "DISTRICT_GUARMA";
				break;
			case 9:
				sVar0 = "DISTRICT_HEARTLANDS";
				break;
			case 10:
				sVar0 = "DISTRICT_ROANOAKE_RIDGE";
				break;
			case 11:
				sVar0 = "DISTRICT_SCARLETT_MEADOWS";
				break;
			case 12:
				sVar0 = "DISTRICT_TALL_TREES";
				break;
			case 13:
				sVar0 = "DISTRICT_GAPTOOTH_RIDGE";
				break;
			case 14:
				sVar0 = "DISTRICT_RIO_BRAVO";
				break;
			case 15:
				sVar0 = "DISTRICT_CHOLLA_SPRINGS";
				break;
			case 16:
				sVar0 = "DISTRICT_HENNIGANS_STEAD";
				break;
		}
	}
	if (is_string_null_or_empty(sVar0))
	{
		switch (iParam3)
		{
			case 0:
				sVar0 = "STATE_AMBARINO";
				break;
			case 2:
				sVar0 = "STATE_LEMOYNE";
				break;
			case 3:
				sVar0 = "STATE_WEST_ELIZABETH";
				break;
			case 4:
				sVar0 = "STATE_NEW_AUSTIN";
				break;
			case 1:
				sVar0 = "STATE_NEW_HANOVER";
				break;
			case 5:
				sVar0 = "STATE_GUARMA";
				break;
		}
	}
	return sVar0;
}

bool func_192(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

int func_193(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 2:
			return 2;
		case 11:
			return 2;
		case 9:
			return 1;
		case 10:
			return 1;
		case 3:
			return 1;
		case 4:
			return 3;
		case 12:
			return 3;
		case 1:
			return 3;
		case 5:
			return 0;
		case 6:
			return 0;
		case 7:
			return 0;
		case 8:
			return 5;
		case 13:
			return 4;
		case 14:
			return 4;
		case 15:
			return 4;
		case 16:
			return 4;
		default:
			break;
	}
	return -1;
}

int func_194(int iParam0)
{
	if (!func_192(iParam0))
	{
		return -1;
	}
	if (Global_1572887->f_13 == -1)
	{
		return &(Global_39.f_190[iParam0]);
	}
	iVar0 = 0;
	Var1 = { func_269(player_id()) };
	_0x4ef23e04a0c8ff51(&Var1, &uVar8);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1071686->f_21325[iVar0] = uVar8;
		iVar0++;
	}
	return &(Global_1071686->f_21325[iParam0]);
}

int func_195(int iParam0)
{
	switch (iParam0)
	{
		case -196675805:
			return 0;
		case 795414694:
			return 0;
		case -557290573:
			return 2;
		case 650214731:
			return 1;
		case -1073312073:
			return 0;
		case 231313522:
			return 0;
		case -804804953:
			return 0;
		case 370072007:
			return 1;
		case 1245451421:
			return 1;
		case 469159176:
			return 1;
		case -105598602:
			return 0;
		case -1356490953:
			return 0;
		case -1276586360:
			return 1;
		case 1755369577:
			return 0;
		case 1175365009:
			return 0;
		case -1229593481:
			return 1;
		case -1369817450:
			return 0;
		case 592454541:
			return 0;
		case -2040708515:
			return 1;
		case -1410384421:
			return 1;
		case -1308233316:
			return 1;
		case 301094150:
			return 0;
		case -811730579:
			return 0;
		case -1817904483:
			return 0;
		case -1300497193:
			return 0;
		case 2005774838:
			return 1;
		case -1504425495:
			return 1;
		case -247856387:
			return 1;
		case -823661292:
			return 0;
		case -218679770:
			return 1;
		case -1287619521:
			return 1;
		case -1781130443:
			return 1;
		case -261541730:
			return 1;
		default:
			break;
	}
	return -1;
}

char* func_196(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "WATER_TYPE_LAKE";
		case 1:
			return "WATER_TYPE_RIVER";
		case 2:
			return "WATER_TYPE_SWAMP";
		default:
			break;
	}
	return "";
}

bool func_197(int iParam0, int iParam1)
{
	if (!func_10(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_13 == -1)
	{
		return (Global_39.f_263[iParam0] && iParam1) != 0;
	}
	return (Global_1071686->f_21398[iParam0] && iParam1) != 0;
}

bool func_198(int iParam0, int iParam1)
{
	if (!func_192(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_13 == -1)
	{
		return (Global_39.f_190[iParam0]->f_5 && iParam1) != 0;
	}
	return (Global_1071686->f_21325[iParam0]->f_5 && iParam1) != 0;
}

int func_199(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

float func_200(float fParam0)
{
	return ((fParam0 * 1.8f) + 32f);
}

char* func_201(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "LITERAL_STRING", sParam0);
	}
	return func_270(_create_var_string(10, "LITERAL_STRING", sParam0), iParam1);
}

var func_202(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	Var0 = -2;
	Var0 = iParam2;
	Var0.f_1 = iParam3;
	Var0.f_2 = iParam4;
	Var0.f_3 = iParam5;
	vVar13.f_1 = sParam0;
	vVar13.f_2 = sParam1;
	uVar16 = _show_location_notification(&Var0, &vVar13, iParam6, iParam7);
	return uVar16;
}

bool func_203(int iParam0)
{
	if (func_267(iParam0))
	{
		if (!func_268(44))
		{
			return false;
		}
	}
	return true;
}

void func_204(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

struct<2> func_205(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_206(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			_delete_volume(&(Global_1290948->f_47[0]));
			_delete_volume(&(Global_1290948->f_47[1]));
			_delete_volume(&(Global_1290948->f_50[0]));
			_delete_volume(&(Global_1290948->f_50[1]));
			break;
		case 81:
			_delete_volume(&(Global_1290948->f_47[1]));
			_delete_volume(&(Global_1290948->f_50[1]));
			break;
	}
}

void func_207(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

void func_208()
{
	if (does_entity_exist(Local_19.f_17))
	{
		if (is_entity_playing_anim(Local_19.f_17, Local_19.f_6, Local_19.f_7, 1))
		{
			stop_entity_anim(Local_19.f_17, Local_19.f_6, Local_19.f_7, -1000f);
		}
		if (is_entity_playing_anim(Local_19.f_17, Local_19.f_6, Local_19.f_8, 1))
		{
			stop_entity_anim(Local_19.f_17, Local_19.f_6, Local_19.f_8, -1000f);
		}
		if (is_entity_playing_anim(Local_19.f_17, Local_19.f_6, Local_19.f_9, 1))
		{
			stop_entity_anim(Local_19.f_17, Local_19.f_6, Local_19.f_9, -1000f);
		}
	}
	if (Local_19.f_16)
	{
		if (has_anim_dict_loaded(Local_19.f_6))
		{
			remove_anim_dict(Local_19.f_6);
		}
		Local_19.f_16 = 0;
	}
	if (Local_19.f_18 != 0)
	{
		_0xd2b9c78537ed5759(Local_19.f_18);
	}
}

void func_209()
{
	if (func_45() != -1)
	{
		return;
	}
	func_271(iLocal_66);
	func_271(iLocal_76);
	func_271(iLocal_77);
}

void func_210()
{
	if (iLocal_146 != -1)
	{
		remove_navmesh_blocking_object(&iLocal_146);
		iLocal_146 = -1;
	}
}

void func_211(int iParam0)
{
	if (func_131(Global_1915715->f_3[iParam0]->f_21) && func_272(Global_1915715->f_3[iParam0]->f_21))
	{
		func_273(Global_1915715->f_3[iParam0]->f_21, 0, 1, 0, 0);
	}
	Global_1915715->f_3[iParam0]->f_10 = { 0f, 0f, 0f };
	Global_1915715->f_3[iParam0]->f_21 = -1;
	Global_1915715->f_3[iParam0]->f_22 = -1;
	Global_1915715->f_3[iParam0]->f_16 = 0;
	Global_1915715->f_3[iParam0]->f_1 = 0;
	if (_0x91a5f9cbebb9d936(Global_1915715->f_3[iParam0]->f_35))
	{
		remove_scenario_blocking_area(Global_1915715->f_3[iParam0]->f_35, false);
	}
	func_274(Global_1915715->f_3[iParam0]->f_9, 0);
	func_275(iParam0, 536870912);
	iVar1 = func_276(iParam0);
	if (iVar1 >= 15)
	{
		Global_1915715->f_3[iParam0]->f_409 = 0;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			func_138(&(Global_1915715->f_3[iParam0]->f_318[iVar0]));
			Global_1915715->f_3[iParam0]->f_318[iVar0] = 0;
			Global_1915715->f_3[iParam0]->f_318[iVar0]->f_1 = { 0f, 0f, 0f };
			Global_1915715->f_3[iParam0]->f_318[iVar0]->f_4 = 0f;
			Global_1915715->f_3[iParam0]->f_318[iVar0]->f_5 = 0;
			iVar0++;
		}
		Global_1915715->f_3[iParam0]->f_409 = 0;
	}
	if (Global_1915715->f_3[iParam0]->f_441 != 0)
	{
		_0x2f901291ef177b02(Global_1915715->f_3[iParam0]->f_441, 0);
	}
	Global_1915715->f_3[iParam0]->f_23 = 0;
	func_277(iParam0);
	Global_1915715->f_3[iParam0]->f_9 = -1;
	Global_1915715->f_3[iParam0]->f_8 = -1;
}

bool func_212(int iParam0, int iParam1)
{
	if (func_45() != -1)
	{
		return false;
	}
	if (!func_131(iParam0))
	{
		return false;
	}
	return (Global_9892[iParam0] && iParam1) != 0;
}

int func_213(int iParam0, bool bParam1)
{
	if (!func_131(iParam0))
	{
		return 0;
	}
	if (!func_212(iParam0, 2))
	{
		return 0;
	}
	if (func_226(iParam0) == 0)
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_83(iParam0)))
	{
		return 1;
	}
	if (func_212(iParam0, 1) && !bParam1)
	{
		func_278(iParam0, 128);
		return 1;
	}
	func_228(iParam0, 129);
	func_279(iParam0);
	_0xfc77c5b44d5ff7c0(func_83(iParam0));
	func_227(iParam0, 0);
	return 1;
}

int func_214(int iParam0)
{
	switch (iParam0)
	{
		case 27:
		case 28:
		case 29:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_215(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 37:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_216()
{
	func_247(30);
	func_249(30);
	func_280(30);
	func_250(30);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (_does_scenario_point_exist(Global_1051439->f_3634[iVar0]->f_6))
		{
			_delete_scenario_point(Global_1051439->f_3634[iVar0]->f_6);
		}
		Global_1051439->f_3634[iVar0]->f_6 = uVar1;
		if (_does_scenario_point_exist(Global_1051439->f_3634[iVar0]->f_13))
		{
			_delete_scenario_point(Global_1051439->f_3634[iVar0]->f_13);
		}
		Global_1051439->f_3634[iVar0]->f_13 = uVar1;
		if (does_blip_exist(Global_1051439->f_3634[iVar0]->f_17))
		{
			remove_blip(&(Global_1051439->f_3634[iVar0]->f_17));
		}
		if (does_entity_exist(Global_1051439->f_3634[iVar0]->f_8))
		{
			if (!_0x88ad6cc10d8d35b2(Global_1051439->f_3634[iVar0]->f_8))
			{
				set_entity_as_mission_entity(Global_1051439->f_3634[iVar0]->f_8, true, true);
			}
			delete_ped(&(Global_1051439->f_3634[iVar0]->f_8));
		}
		if (does_entity_exist(Global_1051439->f_3634[iVar0]->f_15))
		{
			if (!_0x88ad6cc10d8d35b2(Global_1051439->f_3634[iVar0]->f_15))
			{
				set_entity_as_mission_entity(Global_1051439->f_3634[iVar0]->f_15, true, true);
			}
			delete_ped(&(Global_1051439->f_3634[iVar0]->f_15));
		}
		Global_1051439->f_3634[iVar0]->f_1 = 0;
		Global_1051439->f_3634[iVar0]->f_5 = 0;
		Global_1051439->f_3634[iVar0]->f_8 = 0;
		Global_1051439->f_3634[iVar0]->f_15 = 0;
		Global_1051439->f_3634[iVar0]->f_7 = 0;
		Global_1051439->f_3634[iVar0]->f_14 = 0;
		Global_1051439->f_3634[iVar0]->f_9 = -1;
		Global_1051439->f_3634[iVar0] = -1;
		iVar0++;
	}
}

void func_217()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_1051439->f_4427[iVar0] = -1;
		Global_1051439->f_4427[iVar0]->f_3 = 0;
		Global_1051439->f_4427[iVar0]->f_4 = 0;
		Global_1051439->f_4427[iVar0]->f_7 = 0;
		if (_does_scenario_point_exist(Global_1051439->f_4427[iVar0]->f_6))
		{
			_delete_scenario_point(Global_1051439->f_4427[iVar0]->f_6);
		}
		iVar0++;
	}
	func_250(32);
}

int func_218(int iParam0)
{
	return func_281(iParam0) + 30;
}

bool func_219()
{
	return func_282() == 4;
}

int func_220(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

void func_221(int iParam0, int iParam1)
{
	iVar0 = func_222(*iParam0);
	iVar1 = func_224(*iParam0);
	if (iParam1 < 1 || iParam1 > func_283(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

int func_222(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

void func_223(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

int func_224(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_284(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

void func_225(int iParam0, int iParam1)
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

int func_226(int iParam0)
{
	if (!func_131(iParam0))
	{
		return 0;
	}
	return Global_1893775[iParam0];
}

void func_227(int iParam0, int iParam1)
{
	if (!func_131(iParam0))
	{
		return;
	}
	(*Global_1893775)[iParam0]->f_1 = iParam1;
}

void func_228(int iParam0, int iParam1)
{
	if (func_45() != -1)
	{
		return;
	}
	if (!func_131(iParam0))
	{
		return;
	}
	Global_9892[iParam0] = (&Global_9892[iParam0] - (Global_9892[iParam0] && iParam1));
}

bool func_229(int iParam0)
{
	if (!func_131(iParam0))
	{
		return false;
	}
	if (!func_212(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_230()
{
	return true;
}

void func_231(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 5:
			sVar0 = "IZ_val_saloon_int_room_main";
			break;
	}
	if (is_string_null_or_empty(sVar0))
	{
		return;
	}
	set_ambient_zone_state_persistent(sVar0, bParam1, true);
}

void func_232(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 5:
			if (bParam1)
			{
				set_portal_settings_override("VAL_SALOON_SWINGING_DOOR", "VAL_SALOON_SWINGING_DOOR_BARRED");
			}
			else
			{
				remove_portal_settings_override("VAL_SALOON_SWINGING_DOOR_BARRED");
			}
			break;
	}
}

void func_233(int iParam0, int iParam1)
{
	func_285(&(Global_1940018->f_5[iParam0]->f_7), iParam1);
}

bool func_234(struct<2> Param0)
{
	return func_255(Param0, 5, 8);
}

bool func_235(int iParam0)
{
	return func_286(1, iParam0);
}

int func_236(int iParam0)
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

int func_237(int iParam0)
{
	if (func_287(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

void func_238(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_288(iParam0);
	if (!func_289(1))
	{
		return;
	}
	if (bParam1)
	{
		do_screen_fade_out(iParam2);
	}
	else if (!func_290(128) && !func_291(19))
	{
		do_screen_fade_out(iParam2);
	}
	if (bParam3 && func_282() == 4)
	{
		func_237(18);
	}
	func_292(1024);
}

int func_239(int iParam0)
{
	if (func_293(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

void func_240(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_241(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_242(struct<29> Param0, var uParam29, int iParam30)
{
	switch (Param0.f_5)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			if (does_entity_exist(Param0.f_4))
			{
			}
			break;
	}
	if (Param0.f_16)
	{
	}
	if (_does_volume_exist(Param0.f_27) && Param0.f_28)
	{
	}
}

void func_243(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
{
	switch (Param0.f_5)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
}

bool func_244(int iParam0)
{
	if (((((iParam0 == 28 || iParam0 == 29) || iParam0 == 38) || iParam0 == 27) || iParam0 == 15) || iParam0 == 39)
	{
		return true;
	}
	if (func_155(iParam0, 65536))
	{
		return true;
	}
	return false;
}

void func_245(int iParam0, int iParam1)
{
	if (func_164(iParam0, iParam1))
	{
	}
	Global_1051439->f_72[iParam0]->f_1 = (Global_1051439->f_72[iParam0]->f_1 - (Global_1051439->f_72[iParam0]->f_1 && iParam1));
}

void func_246(int iParam0)
{
}

void func_247(int iParam0)
{
	Global_1051439->f_72[iParam0]->f_49 = 0;
}

bool func_248(int iParam0, int iParam1)
{
	return func_294(Global_1051439->f_72[iParam0]->f_50, iParam1);
}

void func_249(int iParam0)
{
	Global_1051439->f_72[iParam0]->f_50 = 0;
}

void func_250(int iParam0)
{
	if (Global_1051439->f_41 < 1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1051439->f_41)
	{
		if (iParam0 == Global_1051439[iVar0])
		{
			iVar1 = iVar0;
			bVar2 = true;
		}
		else
		{
			iVar0++;
		}
	}
	if (!bVar2)
	{
		return;
	}
	Global_1051439->f_41 = (Global_1051439->f_41 - 1);
	if (Global_1051439->f_41 < 0)
	{
		Global_1051439->f_41 = 0;
	}
	(*Global_1051439)[iVar1] = Global_1051439[Global_1051439->f_41];
}

bool func_251(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 180);
}

int func_252(int iParam0)
{
	if (_0x603ac35fd4602c76(Global_1139381->f_7) && !func_296(12, func_295(iParam0), &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_253(int iParam0)
{
	return iParam0 != 0;
}

int func_254(int iParam0, char* sParam1, var uParam2, char* sParam3, var uParam4, char* sParam5, var uParam6)
{
	Var0 = func_297();
	Var0.f_2 = -738708473;
	Var0.f_3 = func_295(iParam0);
	if (!_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		return 0;
	}
	Var0.f_2 = -1407851228;
	Var0.f_3 = get_hash_key(sParam1);
	_datafile_get_hash(uParam2, &Var0);
	Var0.f_2 = 1059891245;
	Var0.f_3 = get_hash_key(sParam3);
	_datafile_get_float(uParam4, &Var0);
	Var0.f_2 = -99852754;
	Var0.f_3 = get_hash_key(sParam5);
	_datafile_get_vector(uParam6, &Var0);
	return 1;
}

bool func_255(struct<2> Param0, int iParam2, int iParam3)
{
	if (!func_298(Param0))
	{
		return false;
	}
	if (Param0 != 2)
	{
		return false;
	}
	iVar0 = func_299(Param0);
	return (iVar0 >= iParam2 && iVar0 <= iParam3);
}

int func_256(int iParam0)
{
	iVar0 = func_83(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!_0x800df3fc913355f3(iVar0))
	{
		return 0;
	}
	return _0x31c70a716cae1fee(iVar0);
}

float func_257(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

void func_258(var uParam0, int iParam1, vector3 vParam2)
{
	if (*uParam0 == 0)
	{
		if (is_model_valid(iParam1))
		{
			*uParam0 = _0x6f3068258a499e52(iParam1, vParam2, 7);
		}
	}
}

void func_259(var uParam0)
{
	if (*uParam0 == 0)
	{
		return;
	}
	if (_0x1ff441d7954f8709(*uParam0))
	{
		_0xd2b9c78537ed5759(*uParam0);
	}
}

int func_260(int iParam0)
{
	iVar0 = func_295(iParam0);
	if (iVar0 == 0)
	{
	}
	return iVar0;
}

bool func_261()
{
	return false;
}

bool func_262()
{
	if (func_45() != 0)
	{
		return true;
	}
	if (func_300())
	{
		return false;
	}
	if (_0x7ec0d68233e391ac(6) == 1)
	{
		return true;
	}
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { func_301() };
	if (func_298(Var0))
	{
		return false;
	}
	Var2 = { func_302() };
	if (func_298(Var2))
	{
		return false;
	}
	return true;
}

bool func_263(int iParam0, bool bParam1, bool bParam2)
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
		if (func_300())
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
	if (iParam0 == 0 && func_298(func_68(0)))
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
	switch (func_69(func_68(0)))
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

char* func_264(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

int func_265(vector3 vParam0)
{
	iVar0 = 0;
	while (iVar0 < 51)
	{
		if (func_303(vParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

char* func_266(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LANDMARK_MOUNT_HAGEN";
		case 1:
			return "LANDMARK_SCRATCHING_POST";
		case 2:
			return "LANDMARK_JORGES_GAP";
		case 3:
			return "LANDMARK_MERCER_STATION";
		case 4:
			return "LANDMARK_ODDFELLOWS_REST";
		case 5:
			return "LANDMARK_RATTLESNAKE_HOLLOW";
		case 6:
			return "LANDMARK_SILENT_STEAD";
		case 7:
			return "LANDMARK_THE_HANGING_ROCK";
		case 8:
			return "LANDMARK_THE_OLD_BACCHUS_PLACE";
		case 9:
			return "LANDMARK_TWO_CROWS";
		case 10:
			return "LANDMARK_REPENTANCE";
		case 11:
			return "LANDMARK_BENEDICT_PASS";
		case 12:
			return "WATER_MANTECA_FALLS";
		case 13:
			return "SETTLEMENT_LIMPANY";
		case 14:
			return "WATER_MOUNT_SHANN";
		case 15:
			return "LANDMARK_THREE_SISTERS";
		case 16:
			return "HIDEOUT_PIKES_BASIN";
		case 17:
			return "SETTLEMENT_EL_NIDO";
		case 18:
			return "LANDMARK_BRITTLEBUSH_TRAWL";
		case 19:
			return "LANDMARK_ERIS_FIELD";
		case 20:
			return "LANDMARK_GRANITE_PASS";
		case 21:
			return "LANDMARK_VENTERS_PLACE";
		case 22:
			return "LANDMARK_PLEASANCE_HOUSE";
		case 23:
			return "HOMESTEAD_CHADWICK_FARM";
		case 24:
			return "LANDMARK_BLACK_BONE_FOREST";
		case 25:
			return "LANDMARK_CITADEL_ROCK";
		case 26:
			return "LANDMARK_CUEVA_SECA";
		case 27:
			return "LANDMARK_DEWBERRY_CREEK";
		case 28:
			return "LANDMARK_DIABLO_RIDGE";
		case 29:
			return "LANDMARK_DONNER_FALLS";
		case 31:
			return "HIDEOUT_SOLOMONS_FOLLY";
		case 32:
			return "LANDMARK_FORT_BRENNAND";
		case 33:
			return "LANDMARK_CALIBANS_SEAT";
		case 34:
			return "HIDEOUT_HORSESHOE_OVERLOOK";
		case 35:
			return "LANDMARK_MESCALERO";
		case 36:
			return "LANDMARK_RIO_DEL_LOBO_HOUSE";
		case 37:
			return "LANDMARK_RIO_DEL_LOBO_ROCK";
		case 38:
			return "LANDMARK_BROKEN_TREE";
		case 39:
			return "LANDMARK_BARDS_CROSSING";
		case 40:
			return "LANDMARK_FACE_ROCK";
		case 50:
			return "LANDMARK_NEKOTI_ROCK";
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
			return "";
	}
	return "";
}

bool func_267(int iParam0)
{
	switch (iParam0)
	{
		case 22:
		case 25:
		case 68:
			return true;
	}
	return false;
}

bool func_268(int iParam0)
{
	if (!func_304(iParam0))
	{
		return false;
	}
	return func_305(iParam0);
}

struct<7> func_269(int iParam0)
{
	network_handle_from_player(iParam0, &Var0);
	return Var0;
}

char* func_270(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

void func_271(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_0x6d5f9e69ba1be783(iParam0);
	}
}

bool func_272(int iParam0)
{
	if (!func_131(iParam0))
	{
		return false;
	}
	return (*Global_1893775)[iParam0]->f_2 == get_id_of_this_thread();
}

void func_273(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_131(iParam0))
	{
		return;
	}
	if (!func_212(iParam0, 1))
	{
		return;
	}
	if (!func_212(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_272(iParam0)) && func_306(iParam0))
	{
		return;
	}
	func_228(iParam0, 1);
	func_279(iParam0);
	if (func_307(func_226(iParam0)))
	{
		iVar0 = func_83(iParam0);
		if (!_0x800df3fc913355f3(iVar0))
		{
			return;
		}
		_0xbb68908cd11aebdc(iVar0);
		_0xb65e7f733956cf25(iVar0);
		if (bParam2 && !_0xeb98b38ca60742d7(iVar0))
		{
			_0x631cd2d77fdc0316(iVar0);
		}
		iVar1 = _0x31c70a716cae1fee(iVar0);
		if (!is_ped_injured(iVar1))
		{
			set_ped_config_flag(iVar1, 171, false);
		}
		if (bParam1)
		{
			_0x7b204f88f6c3d287(iVar0);
		}
		func_228(iParam0, 16);
	}
	if (func_212(iParam0, 128) && !bParam3)
	{
		func_213(iParam0, 0);
	}
}

void func_274(int iParam0, bool bParam1)
{
	if (!func_251(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (!func_308(iParam0, 1024))
		{
			func_309(iParam0, 1024);
			_0x9b4e793b1cb6550a();
		}
	}
	else if (func_308(iParam0, 1024))
	{
		func_310(iParam0, 1024);
		_0x9b4e793b1cb6550a();
	}
	func_311(iParam0);
}

void func_275(int iParam0, int iParam1)
{
	if (!func_312(iParam0))
	{
		return;
	}
	if (func_45() == -1)
	{
		Global_1915715->f_3[iParam0]->f_6 = (Global_1915715->f_3[iParam0]->f_6 - (Global_1915715->f_3[iParam0]->f_6 && iParam1));
	}
	else
	{
		Global_1051439->f_72[iParam0]->f_1 = (Global_1051439->f_72[iParam0]->f_1 - (Global_1051439->f_72[iParam0]->f_1 && iParam1));
	}
}

int func_276(int iParam0)
{
	return Global_1915715->f_3[iParam0]->f_409;
}

void func_277(int iParam0)
{
	Global_1915715->f_3[iParam0]->f_6 = 0;
}

void func_278(int iParam0, int iParam1)
{
	if (func_45() != -1)
	{
		return;
	}
	if (!func_131(iParam0))
	{
		return;
	}
	Global_9892[iParam0] = (Global_9892[iParam0] || iParam1);
}

void func_279(int iParam0)
{
	if (!func_131(iParam0))
	{
		return;
	}
	iVar0 = func_256(iParam0);
	if (does_entity_exist(iVar0))
	{
		if (does_entity_belong_to_this_script(iVar0, false))
		{
			set_ped_as_no_longer_needed(&iVar0);
		}
	}
	(*Global_1893775)[iParam0]->f_2 = 0;
}

void func_280(int iParam0)
{
	Global_1051439->f_72[iParam0]->f_1 = 0;
}

int func_281(int iParam0)
{
	return iParam0 * 31;
}

int func_282()
{
	if (&Global_1102219 <= 5)
	{
		return &Global_1102219;
	}
	if (&Global_1102219 <= 22)
	{
		return 4;
	}
	if (&Global_1102219 <= 25)
	{
		return 3;
	}
	return 26;
}

int func_283(int iParam0, int iParam1)
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

int func_284(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_285(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_286(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_313(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 == func_314())
	{
		return func_313(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1296859->f_22[iParam1])
	{
		return func_313(&((*Global_1100469)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

bool func_287(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	clear_bit((*uParam0)[iVar0], iVar1);
	return bVar2;
}

void func_288(int iParam0)
{
	Global_1102219->f_26.f_12 = iParam0;
}

bool func_289(int iParam0)
{
	return (Global_1102219->f_26.f_7 && iParam0) != 0;
}

bool func_290(int iParam0)
{
	return (Global_1102219->f_26.f_9 && iParam0) != 0;
}

bool func_291(int iParam0)
{
	return (Global_1102219->f_4[Global_1106305[iParam0]] && (*Global_1106305)[iParam0]->f_1) == (*Global_1106305)[iParam0]->f_1;
}

void func_292(int iParam0)
{
	if (func_315(iParam0))
	{
		return;
	}
	Global_1102219->f_26.f_9 = (Global_1102219->f_26.f_9 || iParam0);
}

bool func_293(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

bool func_294(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_295(int iParam0)
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

bool func_296(int iParam0, int iParam1, var uParam2)
{
	if (func_316(iParam0, iParam1, &uVar0))
	{
		func_317(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

var func_297()
{
	return Global_1071686->f_28448[48]->f_3;
}

bool func_298(struct<2> Param0)
{
	if (!func_318(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_319(Param0))
	{
		return false;
	}
	return true;
}

int func_299(struct<2> Param0)
{
	if (Param0 == 2)
	{
		return func_320(Param0);
	}
	return -1;
}

bool func_300()
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
	if (!func_298(*Global_1051213) && Global_1572887->f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

struct<2> func_301()
{
	return *Global_1051213;
}

struct<2> func_302()
{
	if (Global_1196205->f_129 <= 0)
	{
		return func_68(0);
	}
	if (Global_1196205->f_130 < 0 || Global_1196205->f_131 == 0)
	{
		return func_68(0);
	}
	return (*Global_1196205)[Global_1196205->f_130]->f_1;
}

bool func_303(vector3 vParam0, int iParam3)
{
	func_321(iParam3, &vVar0, &Var3, &uVar6);
	if (func_322(vParam0, vVar0, Var3, Var3.f_1, uVar6))
	{
		return true;
	}
	return false;
}

bool func_304(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_305(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_39.f_3643[iVar1]), iVar2);
}

bool func_306(int iParam0)
{
	if (!func_131(iParam0))
	{
		return false;
	}
	return _does_thread_exist((*Global_1893775)[iParam0]->f_2);
}

bool func_307(int iParam0)
{
	return iParam0 != 0;
}

bool func_308(int iParam0, int iParam1)
{
	if (!func_251(iParam0))
	{
		return false;
	}
	return (Global_1915715->f_17884[iParam0] && iParam1) != 0;
}

void func_309(int iParam0, int iParam1)
{
	if (!func_251(iParam0))
	{
		return;
	}
	Global_1915715->f_17884[iParam0] = (Global_1915715->f_17884[iParam0] || iParam1);
}

void func_310(int iParam0, int iParam1)
{
	if (!func_251(iParam0))
	{
		return;
	}
	Global_1915715->f_17884[iParam0] = (&Global_1915715->f_17884[iParam0] - (Global_1915715->f_17884[iParam0] && iParam1));
}

void func_311(int iParam0)
{
	func_324(func_323(iParam0));
}

bool func_312(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 40);
}

bool func_313(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_314()
{
	return Global_1102219->f_3672;
}

bool func_315(int iParam0)
{
	return (Global_1102219->f_26.f_9 && iParam0) == iParam0;
}

bool func_316(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_325(iParam0);
	uParam2->f_4 = iParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

void func_317(var uParam0, int iParam1, var uParam2)
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

bool func_318(int iParam0)
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

int func_319(int iParam0)
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

int func_320(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_326(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

void func_321(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -1616.769f, 1260.714f, 205.33f };
			*uParam2 = { 150f, 150f, 184f };
			*uParam3 = 0f;
			break;
		case 1:
			*uParam1 = { -5837.918f, -3738.832f, -20.6f };
			*uParam2 = { 40f, 35f, 70f };
			*uParam3 = 45f;
			break;
		case 2:
			*uParam1 = { -4160.689f, -2836.915f, -13.674f };
			*uParam2 = { 43f, 197f, 70f };
			*uParam3 = 38f;
			break;
		case 3:
			*uParam1 = { -4359.861f, -3083.375f, -13.674f };
			*uParam2 = { 30f, 30f, 70f };
			*uParam3 = 0f;
			break;
		case 4:
			*uParam1 = { -4446.777f, -2689.265f, -13.674f };
			*uParam2 = { 30f, 30f, 70f };
			*uParam3 = 0f;
			break;
		case 5:
			*uParam1 = { -4415.84f, -2199.774f, 22.356f };
			*uParam2 = { 13f, 21f, 47f };
			*uParam3 = 34f;
			break;
		case 6:
			*uParam1 = { -5554.764f, -2395.945f, 7.172f };
			*uParam2 = { 21f, 21f, 47f };
			*uParam3 = 0f;
			break;
		case 7:
			*uParam1 = { -3447.267f, -2257.723f, 7.172f };
			*uParam2 = { 40f, 23f, 47f };
			*uParam3 = 0f;
			break;
		case 8:
			*uParam1 = { -1425.852f, -2676.848f, 73.224f };
			*uParam2 = { 40f, 25f, 47f };
			*uParam3 = 26f;
			break;
		case 9:
			*uParam1 = { -3829.438f, -3009.26f, -13.674f };
			*uParam2 = { 39f, 54f, 70f };
			*uParam3 = -46f;
			break;
		case 10:
			*uParam1 = { -4696.308f, -3302.809f, -13.674f };
			*uParam2 = { 104f, 57f, 70f };
			*uParam3 = 0f;
			break;
		case 11:
			*uParam1 = { -5064.707f, -3139.862f, -13.674f };
			*uParam2 = { 23f, 26f, 70f };
			*uParam3 = 43f;
			break;
		case 12:
			*uParam1 = { -1631.875f, -2856.089f, -1.645f };
			*uParam2 = { 149f, 65f, 154f };
			*uParam3 = 39f;
			break;
		case 13:
			*uParam1 = { -347.889f, -131.72f, -1.645f };
			*uParam2 = { 52f, 40f, 154f };
			*uParam3 = 0f;
			break;
		case 14:
			*uParam1 = { -2126.5f, 88.317f, 139.179f };
			*uParam2 = { 334f, 171f, 277f };
			*uParam3 = -45f;
			break;
		case 15:
			*uParam1 = { 1574.061f, 1121.954f, 201.6f };
			*uParam2 = { 147f, 194f, 201f };
			*uParam3 = 0f;
			break;
		case 16:
			*uParam1 = { -2741.641f, -2375.761f, 31.492f };
			*uParam2 = { 86f, 61f, 50f };
			*uParam3 = 11f;
			break;
		case 17:
			*uParam1 = { 1773.323f, -5976.334f, 71.662f };
			*uParam2 = { 34f, 34f, 100f };
			*uParam3 = -124f;
			break;
		case 18:
			*uParam1 = { -2022.258f, -3039.913f, 25f };
			*uParam2 = { 25f, 25f, 45f };
			*uParam3 = 0f;
			break;
		case 19:
			*uParam1 = { 1394.172f, -647.735f, 72.455f };
			*uParam2 = { 19f, 18f, 100f };
			*uParam3 = 40f;
			break;
		case 20:
			*uParam1 = { -242.336f, 1624.373f, 212.894f };
			*uParam2 = { 98f, 52f, 120f };
			*uParam3 = 51f;
			break;
		case 21:
			*uParam1 = { -3543.512f, -3032.038f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
		case 22:
			*uParam1 = { -4348.655f, -2427.582f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
		case 23:
			*uParam1 = { -391.586f, 922.337f, 137.604f };
			*uParam2 = { 31f, 30f, 40f };
			*uParam3 = 0f;
			break;
		case 24:
			*uParam1 = { -2656.999f, 153.667f, 189.043f };
			*uParam2 = { 177f, 126f, 102f };
			*uParam3 = 52f;
			break;
		case 25:
			*uParam1 = { 156.109f, 425.799f, 120f };
			*uParam2 = { 249f, 112f, 120f };
			*uParam3 = -36f;
			break;
		case 26:
			*uParam1 = { -5868.5f, -2752.441f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
		case 27:
			*uParam1 = { 898.505f, -335.252f, 48.403f };
			*uParam2 = { 56f, 152f, 70f };
			*uParam3 = -36f;
			break;
		case 28:
			*uParam1 = { -889.947f, -171.356f, 90.537f };
			*uParam2 = { 180f, 95f, 100f };
			*uParam3 = 29f;
			break;
		case 29:
			*uParam1 = { 571.454f, 1968.615f, 122.93f };
			*uParam2 = { 32f, 49f, 140f };
			*uParam3 = 0f;
			break;
		case 30:
			*uParam1 = { -2769.681f, -3210.99f, 25f };
			*uParam2 = { 25f, 25f, 45f };
			*uParam3 = 0f;
			break;
		case 31:
			*uParam1 = { -5409.034f, -3657.266f, -14.496f };
			*uParam2 = { 36f, 30f, 30f };
			*uParam3 = -24f;
			break;
		case 32:
			*uParam1 = { 2453.293f, 290.68f, 69.615f };
			*uParam2 = { 35f, 42f, 19f };
			*uParam3 = -4f;
			break;
		case 33:
			*uParam1 = { -643.042f, 278.359f, 95.5f };
			*uParam2 = { 70f, 67f, 65f };
			*uParam3 = -109f;
			break;
		case 34:
			*uParam1 = { -118.339f, -24.853f, 96.907f };
			*uParam2 = { 84f, 69f, 37f };
			*uParam3 = 0f;
			break;
		case 35:
			*uParam1 = { -2863.456f, -2723.259f, 93.195f };
			*uParam2 = { 196f, 157f, 85f };
			*uParam3 = -18f;
			break;
		case 36:
			*uParam1 = { -3484.814f, -3466.383f, -0.849f };
			*uParam2 = { 12f, 12f, 70f };
			*uParam3 = 0f;
			break;
		case 37:
			*uParam1 = { -3620.875f, -3575.926f, -0.849f };
			*uParam2 = { 126f, 86f, 70f };
			*uParam3 = -6f;
			break;
		case 38:
			*uParam1 = { -1382.32f, -1400.969f, 56.092f };
			*uParam2 = { 22f, 32f, 86f };
			*uParam3 = 0f;
			break;
		case 39:
			*uParam1 = { -713.105f, -538.091f, 59.42f };
			*uParam2 = { 160f, 22f, 100f };
			*uParam3 = 26f;
			break;
		case 40:
			*uParam1 = { 1083.588f, -693.478f, 48.403f };
			*uParam2 = { 45f, 46f, 70f };
			*uParam3 = 0f;
			break;
		case 41:
			*uParam1 = { -956.489f, 2175.227f, 307.401f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 42:
			*uParam1 = { 1457.354f, -1576.261f, 95.401f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 43:
			*uParam1 = { 348.488f, -669.098f, 95f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 44:
			*uParam1 = { 2008.052f, 617.155f, 95f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 45:
			*uParam1 = { 2099.835f, -283.012f, 42f };
			*uParam2 = { 21f, 29f, 49f };
			*uParam3 = 52f;
			break;
		case 46:
			*uParam1 = { -1759.31f, -224.369f, 168f };
			*uParam2 = { 21f, 29f, 116f };
			*uParam3 = 56f;
			break;
		case 47:
			*uParam1 = { 2142.39f, -1284.068f, 85f };
			*uParam2 = { 40f, 71f, 116f };
			*uParam3 = 70f;
			break;
		case 48:
			*uParam1 = { 2309.119f, -343.031f, 85f };
			*uParam2 = { 15f, 15f, 116f };
			*uParam3 = 0f;
			break;
		case 49:
			*uParam1 = { -1815.147f, -2405.116f, 71f };
			*uParam2 = { 25f, 25f, 50f };
			*uParam3 = 0f;
			break;
		case 50:
			*uParam1 = { -2269.232f, -1145.787f, 214f };
			*uParam2 = { 37f, 33f, 68f };
			*uParam3 = 0f;
			break;
	}
}

bool func_322(vector3 vParam0, vector3 vParam3, float fParam6, float fParam7, float fParam8)
{
	vVar0 = { vParam0 - vParam3 };
	Var3 = ((vVar0.x * cos(fParam8)) + (vVar0.y * sin(fParam8)));
	Var3.f_1 = ((vVar0.x * sin(fParam8)) - (vVar0.y * cos(fParam8)));
	fVar6 = (((Var3 * Var3) / (fParam6 * fParam6)) + ((Var3.f_1 * Var3.f_1) / (fParam7 * fParam7)));
	return fVar6 <= 1f;
}

int func_323(int iParam0)
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

void func_324(int iParam0)
{
	Global_1915715->f_18247 = iParam0;
}

int func_325(int iParam0)
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

bool func_326(struct<2> Param0, var uParam2)
{
	if (!func_298(Param0))
	{
		return false;
	}
	func_327(uParam2);
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

void func_327(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

