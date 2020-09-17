void __EntryFunction__()
{
	fLocal_13 = 1f;
	fLocal_14 = 1f;
	Var0.f_1.f_2 = 1086324736;
	Var0.f_1.f_11.f_1 = 20;
	Var0.f_1.f_33 = 20;
	Var0.f_183 = 3;
	Var0.f_187 = 14;
	iVar208 = func_1();
	if (has_force_cleanup_occurred(523))
	{
		func_2(&Var0);
	}
	reserve_network_mission_objects(1);
	reserve_network_client_mission_objects(1);
	if (func_3(player_id(), 1))
	{
		func_4(&(Var0.f_202), 16);
	}
	if (does_entity_exist(ScriptParam_0.f_1))
	{
		set_entity_as_mission_entity(ScriptParam_0.f_1, true, true);
	}
	Var0.f_204 = _get_scenario_point_type_ped_is_using(Global_34);
	func_5(&ScriptParam_0, &(Var0.f_1));
	if (Var0.f_1 == 0)
	{
		if (Var0.f_204 != -1370915905)
		{
			Var0.f_1 = -545779394;
		}
		else if ((*Global_1298536)[iVar208]->f_19.f_20 != 0)
		{
			Var0.f_1 = (*Global_1298536)[iVar208]->f_19.f_20;
		}
		else if ((*Global_1298536)[iVar208]->f_19.f_19 == 0)
		{
			Var0.f_1 = -545779394;
		}
		else if ((*Global_1298536)[iVar208]->f_19.f_19 == 1269193435 || (*Global_1298536)[iVar208]->f_19.f_19 == 1847740267)
		{
			Var0.f_1 = 1847740267;
		}
		else if ((*Global_1298536)[iVar208]->f_19.f_19 == -822124724 || (*Global_1298536)[iVar208]->f_19.f_19 == 1532695640)
		{
			Var0.f_1 = 1532695640;
		}
		else
		{
			Var0.f_1 = -545779394;
		}
	}
	Var0.f_179 = func_6();
	func_7(&Var0);
	func_8(&Var0);
	while (!_0x9e4ef615e307fbbe())
	{
		fVar209 = func_9(&Var0, ScriptParam_0.f_1);
		_0xcb9401f918cb0f75(Global_34, "GENERIC_ALCOHOL_BLOCK_CHUG_DISCARD", 1, 1);
		_0xcb9401f918cb0f75(Global_34, "GENERIC_ALCOHOL_BLOCK_CHUG_PUT_AWAY", 1, 1);
		_0xcb9401f918cb0f75(Global_34, "GENERIC_ALCOHOL_BLOCK_CHEERS_LO", 1, 1);
		_0xcb9401f918cb0f75(Global_34, "GENERIC_ALCOHOL_BLOCK_CHEERS_HI_DISCARD", 1, 1);
		_0xcb9401f918cb0f75(Global_34, "GENERIC_ALCOHOL_BLOCK_CHEERS_HI_PUTAWAY", 1, 1);
		_0xcb9401f918cb0f75(Global_34, "GENERIC_ALCOHOL_BLOCK_DISCARD_PROMPT", 1, 1);
		_0xcb9401f918cb0f75(Global_34, "GENERIC_ALCOHOL_BLOCK_PUTAWAY_PROMPT", 1, 1);
		if ((get_num_reserved_mission_objects(0) >= 1 && _0xb07d3185e11657a5(ScriptParam_0.f_1)) && network_has_control_of_network_id(obj_to_net(ScriptParam_0.f_1)))
		{
			_0x7182edda1ee7db5a(obj_to_net(ScriptParam_0.f_1));
		}
		if (!ScriptParam_0.f_3)
		{
			if (!Var0.f_181)
			{
				if (!is_ped_dead_or_dying(Global_34, true))
				{
					set_ped_max_move_blend_ratio(Global_34, 1.5f);
				}
			}
			disable_control_action(0, -822242784, false);
			func_10(&(Var0.f_1));
		}
		func_11();
		_uiprompt_set_ambient_group_this_frame(Global_34, 1f, 2, 1, 0, func_12(&Var0), 0);
		_0xcd7ca3013fd12749(get_player_index(), _uiprompt_get_group_id_for_target_entity(Global_34));
		func_13(&Var0);
		func_14(&Var0);
		func_15(&Var0);
		switch (Var0)
		{
			case 0:
				if (func_16(Var0.f_1, 0))
				{
					func_17(&(Var0.f_1));
				}
				if (ScriptParam_0.f_3)
				{
					Var0.f_1.f_2 = 1f;
					func_18(&Var0, 3);
				}
				else
				{
					func_18(&Var0, 1);
				}
				break;
			case 1:
				if (func_19(Var0.f_202, 4) && _get_item_interaction_from_ped(Global_34) != &Var0.f_187[7])
				{
					disable_control_action(0, 1301263553, false);
					disable_control_action(0, -39308912, false);
				}
				func_20(&Var0);
				if ((_get_item_interaction_from_ped(Global_34) == &Var0.f_187[0] || _get_item_interaction_from_ped(Global_34) == &Var0.f_187[7]) && func_21(&(Var0.f_183[0]), 1))
				{
					if (func_19(Var0.f_202, 4))
					{
						if (_get_item_interaction_from_ped(Global_34) == &Var0.f_187[12])
						{
						}
						else
						{
							_0xb35370d5353995cb(Global_34, &(Var0.f_187[12]), 1048576000);
						}
					}
					else if (_get_item_interaction_from_ped(Global_34) != &Var0.f_187[2])
					{
						_0xb35370d5353995cb(Global_34, &(Var0.f_187[2]), 1048576000);
					}
				}
				if (((_get_item_interaction_from_ped(Global_34) == &Var0.f_187[2] || _get_item_interaction_from_ped(Global_34) == &Var0.f_187[12]) && has_anim_event_fired(Global_34, 745451196)) && !func_21(&(Var0.f_183[0]), 1))
				{
					if (func_19(Var0.f_202, 4))
					{
						if (_get_item_interaction_from_ped(Global_34) == &Var0.f_187[8])
						{
						}
						else
						{
							_0xb35370d5353995cb(Global_34, &(Var0.f_187[8]), 1048576000);
						}
					}
					else if (_get_item_interaction_from_ped(Global_34) != &Var0.f_187[3])
					{
						_0xb35370d5353995cb(Global_34, &(Var0.f_187[3]), 1048576000);
					}
				}
				if ((_get_item_interaction_from_ped(Global_34) == &Var0.f_187[0] || _get_item_interaction_from_ped(Global_34) == &Var0.f_187[7]) && func_21(&(Var0.f_183[1]), 1))
				{
					if (!func_22(&(Var0.f_205)))
					{
						func_23(&(Var0.f_205), 1);
					}
					if (func_19(Var0.f_202, 4))
					{
						if (_get_item_interaction_from_ped(Global_34) != &Var0.f_187[11])
						{
							_0xb35370d5353995cb(Global_34, &(Var0.f_187[11]), 1048576000);
						}
					}
					else if (_get_item_interaction_from_ped(Global_34) == &Var0.f_187[4])
					{
					}
					else
					{
						_0xb35370d5353995cb(Global_34, &(Var0.f_187[4]), 1048576000);
					}
				}
				if (_get_item_interaction_from_ped(Global_34) == &Var0.f_187[4] || _get_item_interaction_from_ped(Global_34) == &Var0.f_187[11])
				{
					bVar210 = func_21(&(Var0.f_183[1]), 1);
					if (has_anim_event_fired(Global_34, 1554542895) && !bVar210)
					{
						Var0.f_180 = 1;
					}
					if (has_anim_event_fired(Global_34, 1243345447))
					{
						Var0.f_180 = 2;
					}
					if (has_anim_event_fired(Global_34, 1349106419))
					{
						Var0.f_180 = 3;
					}
					if (Var0.f_180 == 2 && !bVar210)
					{
						if (func_19(Var0.f_202, 4))
						{
							if (_get_item_interaction_from_ped(Global_34) == &Var0.f_187[10])
							{
							}
							else
							{
								_0xb35370d5353995cb(Global_34, &(Var0.f_187[10]), 1048576000);
							}
						}
						else if (_get_item_interaction_from_ped(Global_34) != &Var0.f_187[6])
						{
							_0xb35370d5353995cb(Global_34, &(Var0.f_187[6]), 1048576000);
						}
						Var0.f_180 = 0;
					}
					else if (Var0.f_180 == 1 && !bVar210)
					{
						if (func_19(Var0.f_202, 4))
						{
							if (_get_item_interaction_from_ped(Global_34) != &Var0.f_187[9])
							{
								_0xb35370d5353995cb(Global_34, &(Var0.f_187[9]), 1048576000);
							}
						}
						else if (_get_item_interaction_from_ped(Global_34) == &Var0.f_187[5])
						{
						}
						else
						{
							_0xb35370d5353995cb(Global_34, &(Var0.f_187[5]), 1048576000);
						}
						Var0.f_180 = 0;
					}
				}
				if (func_24(&(Var0.f_183[2]), 1))
				{
					func_25(&Var0);
					if (does_entity_exist(ScriptParam_0.f_1))
					{
						_0xcaaf2bccfef37f77(ScriptParam_0.f_1, 80);
					}
					func_18(&Var0, 2);
				}
				if (has_anim_event_fired(Global_34, 442509369))
				{
					Var0.f_1.f_1 = (1 + Var0.f_1.f_1);
					func_26(fVar209);
					func_27(&(Var0.f_1), IntToFloat(Var0.f_1.f_1) >= Var0.f_1.f_2);
				}
				if (IntToFloat(Var0.f_1.f_1) >= Var0.f_1.f_2)
				{
					func_25(&Var0);
					func_28(&Var0, ScriptParam_0.f_1);
					func_29(Var0.f_1, 0);
					if (does_entity_exist(ScriptParam_0.f_1))
					{
						_0xcaaf2bccfef37f77(ScriptParam_0.f_1, 80);
					}
					func_18(&Var0, 2);
				}
				break;
			case 2:
				if (func_19(Var0.f_202, 4))
				{
					if (_get_item_interaction_from_ped(Global_34) != &Var0.f_187[7])
					{
					}
					else
					{
						_0xb35370d5353995cb(Global_34, &(Var0.f_187[13]), 1048576000);
						func_18(&Var0, 4);
					}
				}
				else if (_get_item_interaction_from_ped(Global_34) == &Var0.f_187[0])
				{
					_0xb35370d5353995cb(Global_34, &(Var0.f_187[1]), 1048576000);
					func_18(&Var0, 4);
				}
				break;
			case 3:
				func_27(&(Var0.f_1), 1);
				func_29(Var0.f_1, 0);
				func_18(&Var0, 4);
				break;
			case 4:
				func_25(&Var0);
				if (ScriptParam_0.f_3)
				{
					terminate_this_thread();
				}
				break;
		}
		wait(0);
	}
	func_25(&Var0);
	if ((Var0 <= 1 && !is_entity_dead(player_ped_id())) && Var0.f_181)
	{
		func_27(&(Var0.f_1), 1);
		func_29(Var0.f_1, 0);
	}
}

int func_1()
{
	return Global_1298166->f_200;
}

void func_2(var uParam0)
{
	func_25(uParam0);
	if (!_0x9e4ef615e307fbbe())
	{
		terminate_this_thread();
	}
}

bool func_3(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!_network_is_player_index_valid(iParam0))
		{
			return false;
		}
	}
	return func_1() == iParam0;
}

void func_4(var uParam0, int iParam1)
{
	func_30(uParam0, iParam1);
}

void func_5(var uParam0, var uParam1)
{
	*uParam1 = uParam0->f_2;
	uParam1->f_174 = uParam0->f_1;
	uParam1->f_175 = Global_34;
}

int func_6()
{
	switch (&Global_1940085)
	{
		case 1:
			return 1;
		case 2:
			return 2;
		default:
			break;
	}
	return 0;
}

int func_7(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = iVar0;
		if (func_31(&(uParam0->f_183[iVar0])))
		{
			func_33(&(uParam0->f_183[iVar0]), func_32(iVar1), 0);
		}
		else
		{
			uParam0->f_183[iVar0] = func_36(func_32(iVar1), func_34(iVar1), 2, 0, 0, func_35(iVar1), 570, 4000, 10, 1073741824, 1704213876, 0);
			func_37(&(uParam0->f_183[iVar0]), _uiprompt_get_group_id_for_target_entity(Global_34), 0, 1);
		}
		iVar0++;
	}
	return 1;
}

void func_8(var uParam0)
{
	switch (get_entity_model(uParam0->f_1.f_174))
	{
		case 1627871020:
			switch (&Global_1940085)
			{
				case 0:
					uParam0->f_187[0] = 2099039304;
					uParam0->f_187[1] = -366893967;
					uParam0->f_187[2] = -965063707;
					uParam0->f_187[3] = -1902748769;
					uParam0->f_187[4] = -1632398441;
					uParam0->f_187[5] = -918201157;
					uParam0->f_187[6] = 466323971;
					uParam0->f_187[7] = -468547873;
					uParam0->f_187[13] = 1642022542;
					uParam0->f_187[12] = 841023474;
					uParam0->f_187[8] = -1741992774;
					uParam0->f_187[11] = 846008983;
					uParam0->f_187[9] = -1277599014;
					uParam0->f_187[10] = -1004140292;
					break;
				case 1:
					uParam0->f_187[0] = -207806059;
					uParam0->f_187[1] = -1703290751;
					uParam0->f_187[2] = -250923967;
					uParam0->f_187[3] = 462001116;
					uParam0->f_187[4] = -2084040005;
					uParam0->f_187[5] = -411267883;
					uParam0->f_187[6] = 1792747783;
					uParam0->f_187[7] = -638132672;
					uParam0->f_187[13] = -1021227765;
					uParam0->f_187[12] = -553515202;
					uParam0->f_187[8] = 1201934695;
					uParam0->f_187[11] = -1159114752;
					uParam0->f_187[9] = -1762037660;
					uParam0->f_187[10] = -1297229685;
					break;
				case 2:
					uParam0->f_187[0] = 1306789391;
					uParam0->f_187[1] = 223258152;
					uParam0->f_187[2] = -1461841052;
					uParam0->f_187[3] = 971216744;
					uParam0->f_187[4] = -1491965375;
					uParam0->f_187[5] = 665331659;
					uParam0->f_187[6] = 1154356209;
					uParam0->f_187[7] = -638132672;
					uParam0->f_187[13] = -1021227765;
					uParam0->f_187[12] = -553515202;
					uParam0->f_187[8] = 1201934695;
					uParam0->f_187[11] = -1159114752;
					uParam0->f_187[9] = -1762037660;
					uParam0->f_187[10] = -1297229685;
					break;
			}
			break;
		default:
			switch (&Global_1940085)
			{
				case 0:
					uParam0->f_187[0] = 2099039304;
					uParam0->f_187[1] = -1538022348;
					uParam0->f_187[2] = 1018151539;
					uParam0->f_187[3] = -1902748769;
					uParam0->f_187[4] = 1775995628;
					uParam0->f_187[5] = -918201157;
					uParam0->f_187[6] = -1083346834;
					uParam0->f_187[7] = -468547873;
					uParam0->f_187[13] = -1613539009;
					uParam0->f_187[12] = -176911354;
					uParam0->f_187[8] = -1741992774;
					uParam0->f_187[11] = -603565807;
					uParam0->f_187[9] = -1277599014;
					uParam0->f_187[10] = -1078116948;
					break;
				case 1:
					uParam0->f_187[0] = -207806059;
					uParam0->f_187[1] = -2123146421;
					uParam0->f_187[2] = 867868037;
					uParam0->f_187[3] = 462001116;
					uParam0->f_187[4] = 2043890671;
					uParam0->f_187[5] = -411267883;
					uParam0->f_187[6] = -419950106;
					uParam0->f_187[7] = -638132672;
					uParam0->f_187[13] = -1247588270;
					uParam0->f_187[12] = -1080252797;
					uParam0->f_187[8] = 1201934695;
					uParam0->f_187[11] = 1272306923;
					uParam0->f_187[9] = -1762037660;
					uParam0->f_187[10] = -1757318252;
					break;
				case 2:
					uParam0->f_187[0] = 1306789391;
					uParam0->f_187[1] = 457217638;
					uParam0->f_187[2] = 1181480000;
					uParam0->f_187[3] = 971216744;
					uParam0->f_187[4] = -2065428388;
					uParam0->f_187[5] = 665331659;
					uParam0->f_187[6] = -1504019657;
					uParam0->f_187[7] = -638132672;
					uParam0->f_187[13] = -1247588270;
					uParam0->f_187[12] = -1080252797;
					uParam0->f_187[8] = 1201934695;
					uParam0->f_187[11] = 1272306923;
					uParam0->f_187[9] = -1762037660;
					uParam0->f_187[10] = -1757318252;
					break;
			}
			break;
	}
}

float func_9(var uParam0, int iParam1)
{
	iVar0 = func_1();
	switch (get_entity_model(iParam1))
	{
		case 1627871020:
			if (uParam0->f_204 == -1370915905)
			{
				if ((*Global_1298536)[iVar0]->f_19.f_19 == 0)
				{
					switch (&Global_1940085)
					{
						case 0:
							return (0.125f / uParam0->f_1.f_2);
						case 1:
						case 2:
							return (0.0625f / uParam0->f_1.f_2);
						default:
							break;
					}
				}
				else
				{
					if ((*Global_1298536)[iVar0]->f_19.f_19 == 827714260 || (*Global_1298536)[iVar0]->f_19.f_19 == -545779394)
					{
						switch (&Global_1940085)
						{
							case 0:
								return (0.125f / uParam0->f_1.f_2);
							case 1:
							case 2:
								return (0.0625f / uParam0->f_1.f_2);
							default:
								break;
						}
					}
					if ((*Global_1298536)[iVar0]->f_19.f_19 == -822124724 || (*Global_1298536)[iVar0]->f_19.f_19 == 1532695640)
					{
						switch (&Global_1940085)
						{
							case 0:
								return (0.167f / uParam0->f_1.f_2);
							case 1:
							case 2:
								return (0.083f / uParam0->f_1.f_2);
							default:
								break;
						}
					}
					if ((*Global_1298536)[iVar0]->f_19.f_19 == 1269193435 || (*Global_1298536)[iVar0]->f_19.f_19 == 1847740267)
					{
						switch (&Global_1940085)
						{
							case 0:
								return (0.25f / uParam0->f_1.f_2);
							case 1:
							case 2:
								return (0.125f / uParam0->f_1.f_2);
							default:
								break;
						}
					}
				}
			}
			else
			{
				switch (&Global_1940085)
				{
					case 0:
						return (0.125f / uParam0->f_1.f_2);
					case 1:
					case 2:
						return (0.0625f / uParam0->f_1.f_2);
					default:
						break;
				}
			}
			break;
		default:
			if ((*Global_1298536)[iVar0]->f_19.f_19 == 0)
			{
				switch (&Global_1940085)
				{
					case 0:
						return (0.125f / uParam0->f_1.f_2);
					case 1:
					case 2:
						return (0.0625f / uParam0->f_1.f_2);
					default:
						break;
				}
			}
			else
			{
				if ((*Global_1298536)[iVar0]->f_19.f_19 == 827714260 || (*Global_1298536)[iVar0]->f_19.f_19 == -545779394)
				{
					switch (&Global_1940085)
					{
						case 0:
							return (0.125f / uParam0->f_1.f_2);
						case 1:
						case 2:
							return (0.0625f / uParam0->f_1.f_2);
						default:
							break;
					}
				}
				if ((*Global_1298536)[iVar0]->f_19.f_19 == -822124724 || (*Global_1298536)[iVar0]->f_19.f_19 == 1532695640)
				{
					switch (&Global_1940085)
					{
						case 0:
							return (0.167f / uParam0->f_1.f_2);
						case 1:
						case 2:
							return (0.083f / uParam0->f_1.f_2);
						default:
							break;
					}
				}
				if ((*Global_1298536)[iVar0]->f_19.f_19 == 1269193435 || (*Global_1298536)[iVar0]->f_19.f_19 == 1847740267)
				{
					switch (&Global_1940085)
					{
						case 0:
							return (0.25f / uParam0->f_1.f_2);
						case 1:
						case 2:
							return (0.125f / uParam0->f_1.f_2);
						default:
							break;
					}
				}
			}
			break;
	}
	return (0.125f / uParam0->f_1.f_2);
}

int func_10(var uParam0)
{
	if (is_entity_dead(Global_34))
	{
		return 0;
	}
	if (!uParam0->f_176)
	{
		if (!does_entity_exist(uParam0->f_174))
		{
			uParam0->f_174 = _0x05a0100ea714db68(Global_34, 0);
		}
		else if (has_anim_event_fired(Global_34, -1234314267))
		{
			func_38(uParam0);
			return 1;
		}
	}
	if (!uParam0->f_177)
	{
		if (has_anim_event_fired(Global_34, -1895155945))
		{
			uParam0->f_177 = 1;
		}
	}
	return 0;
}

void func_11()
{
	func_39(&(Global_1071686->f_28357.f_1), 1073741824);
}

char* func_12(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 1532695640:
			return "MOONSHINE_MEDIUM_GROUP_LABEL";
		case 1847740267:
			return "MOONSHINE_STRONG_GROUP_LABEL";
		case 1958345007:
			return "MSHINE_FLAVOR_AGARITA_SUNRISE";
		case 348064119:
			return "MSHINE_FLAVOR_APPLE_BERRY_CRUMB";
		case -818346432:
			return "MSHINE_FLAVOR_BERRY_COBBLER";
		case -610395813:
			return "MSHINE_FLAVOR_BERRY_MINT";
		case 2103594888:
			return "MSHINE_FLAVOR_EVERGREEN";
		case -624685730:
			return "MSHINE_FLAVOR_POISON_POPPYS";
		case 1739830455:
			return "MSHINE_FLAVOR_SPICED_ISLAND";
		case -1498871949:
			return "MSHINE_FLAVOR_TROPICAL_PUNCH";
		case 447784640:
			return "MSHINE_FLAVOR_WILD_CIDER";
		case -1283370018:
			return "MSHINE_FLAVOR_WILD_CREEK";
		default:
			break;
	}
	return "MOONSHINE_WEAK_GROUP_LABEL";
}

void func_13(var uParam0)
{
	if (!func_40() && uParam0->f_179 != 0)
	{
		uParam0->f_179 = 0;
		func_4(&(uParam0->f_202), 1);
	}
	if (func_41() && uParam0->f_179 != 1)
	{
		uParam0->f_179 = 1;
		func_4(&(uParam0->f_202), 1);
	}
	if (func_42() && uParam0->f_179 != 2)
	{
		uParam0->f_179 = 2;
		func_4(&(uParam0->f_202), 1);
		if (!func_19(uParam0->f_202, 8) && func_19(uParam0->f_202, 16))
		{
			if (chal_is_goal_active(-600094696, -1195129248))
			{
				chal_add_goal_progress_int(-600094696, -1195129248, 1);
			}
			func_4(&(uParam0->f_202), 8);
		}
	}
	if (func_19(uParam0->f_202, 1))
	{
		if (func_19(uParam0->f_202, 4) && _get_item_interaction_from_ped(Global_34) == &uParam0->f_187[7])
		{
			func_43(&(uParam0->f_202), 1);
			func_8(uParam0);
			func_7(uParam0);
			func_44(uParam0);
		}
		else if (!func_19(uParam0->f_202, 4) && _get_item_interaction_from_ped(Global_34) == &uParam0->f_187[0])
		{
			func_43(&(uParam0->f_202), 1);
			func_8(uParam0);
			func_7(uParam0);
		}
	}
}

void func_14(var uParam0)
{
	if (*uParam0 > 1)
	{
		return;
	}
	if (!func_19(uParam0->f_202, 4))
	{
		if (is_ped_active_in_scenario(Global_34, 1) && (((_get_scenario_point_type_ped_is_using(Global_34) == -1177373461 || _get_scenario_point_type_ped_is_using(Global_34) == -447259824) || _get_scenario_point_type_ped_is_using(Global_34) == -2007463055) || _get_scenario_point_type_ped_is_using(Global_34) == -2114469108))
		{
			func_4(&(uParam0->f_202), 4);
			func_44(uParam0);
			if (_get_item_interaction_from_ped(Global_34) != &uParam0->f_187[7])
			{
				_0xb35370d5353995cb(Global_34, &(uParam0->f_187[7]), 1048576000);
			}
		}
	}
	else if (func_19(uParam0->f_202, 4))
	{
		if (!is_ped_active_in_scenario(Global_34, 1) && !_0x0c3cb2e600c8977d(Global_34, 0))
		{
			func_43(&(uParam0->f_202), 4);
			if (_get_item_interaction_from_ped(Global_34) != &uParam0->f_187[0])
			{
				_0xb35370d5353995cb(Global_34, &(uParam0->f_187[0]), 1048576000);
			}
		}
	}
}

void func_15(var uParam0)
{
	if (*uParam0 > 1)
	{
		return;
	}
	if (func_19(uParam0->f_202, 4))
	{
		if (uParam0->f_179 == 0 && uParam0->f_203 != func_45())
		{
			if (_get_item_interaction_from_ped(Global_34) == func_46())
			{
				uParam0->f_203 = -468547873;
				_0xb35370d5353995cb(Global_34, func_45(), 1048576000);
			}
		}
		if ((uParam0->f_179 == 1 || uParam0->f_179 == 2) && uParam0->f_203 != func_46())
		{
			if (_get_item_interaction_from_ped(Global_34) == func_45())
			{
				uParam0->f_203 = -638132672;
				_0xb35370d5353995cb(Global_34, func_46(), 1048576000);
			}
		}
	}
	else
	{
		if (uParam0->f_179 == 0 && uParam0->f_203 != 2099039304)
		{
			if (_get_item_interaction_from_ped(Global_34) == 1306789391 || _get_item_interaction_from_ped(Global_34) == -207806059)
			{
				uParam0->f_203 = 2099039304;
				_0xb35370d5353995cb(Global_34, 2099039304, 1048576000);
			}
		}
		if (uParam0->f_179 == 1 && uParam0->f_203 != -207806059)
		{
			if (_get_item_interaction_from_ped(Global_34) == 1306789391 || _get_item_interaction_from_ped(Global_34) == 2099039304)
			{
				uParam0->f_203 = -207806059;
				_0xb35370d5353995cb(Global_34, -207806059, 1048576000);
			}
		}
		if (uParam0->f_179 == 2 && uParam0->f_203 != 1306789391)
		{
			if (_get_item_interaction_from_ped(Global_34) == 2099039304 || _get_item_interaction_from_ped(Global_34) == -207806059)
			{
				uParam0->f_203 = 1306789391;
				_0xb35370d5353995cb(Global_34, 1306789391, 1048576000);
			}
		}
	}
}

bool func_16(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

void func_17(var uParam0)
{
	_item_database_fillout_item_effects_ids(*uParam0, &(uParam0->f_11));
	iVar0 = 0;
	while (iVar0 < uParam0->f_11)
	{
		_item_database_fillout_item_effects_id_info(&(uParam0->f_11.f_1[iVar0]), uParam0->f_33[iVar0]);
		iVar0++;
	}
}

void func_18(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_19(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_20(var uParam0)
{
	if (*uParam0 > 1)
	{
		return;
	}
	if (!func_19(uParam0->f_202, 32) && (_get_item_interaction_from_ped(Global_34) != &uParam0->f_187[7] && _get_item_interaction_from_ped(Global_34) != &uParam0->f_187[0]))
	{
		func_4(&(uParam0->f_202), 32);
		func_47(uParam0, 0);
	}
	else if (func_19(uParam0->f_202, 32) && (_get_item_interaction_from_ped(Global_34) == &uParam0->f_187[7] || _get_item_interaction_from_ped(Global_34) == &uParam0->f_187[0]))
	{
		func_43(&(uParam0->f_202), 32);
		func_47(uParam0, 1);
	}
}

bool func_21(int iParam0, bool bParam1)
{
	if (bParam1 && !func_31(iParam0))
	{
		return false;
	}
	iVar0 = func_48(iParam0);
	if (!_uiprompt_has_hold_mode((*Global_1951255)[iVar0]->f_3))
	{
		return is_control_pressed(2, (*Global_1951255)[iVar0]->f_4);
	}
	return _uiprompt_is_hold_mode_running((*Global_1951255)[iVar0]->f_3);
}

bool func_22(var uParam0)
{
	return func_49(*uParam0, 1);
}

void func_23(var uParam0, bool bParam1)
{
	if (bParam1 || !func_22(uParam0))
	{
		func_50(uParam0);
	}
}

bool func_24(int iParam0, bool bParam1)
{
	if (bParam1 && !func_31(iParam0))
	{
		return false;
	}
	iVar0 = func_48(iParam0);
	return _uiprompt_is_pressed((*Global_1951255)[iVar0]->f_3);
}

void func_25(var uParam0)
{
	func_51(&(uParam0->f_183));
}

void func_26(float fParam0)
{
	if (fParam0 > 0f)
	{
		if (func_52())
		{
			func_53(fParam0, 1);
		}
		Global_1940085->f_3 = get_game_timer();
	}
}

void func_27(var uParam0, bool bParam1)
{
	if ((func_54(*uParam0, 1573112293) || func_54(*uParam0, 672467738)) || func_54(*uParam0, -550842268))
	{
		bVar10 = true;
	}
	bVar11 = func_55(*uParam0);
	_0xd962f8579d702db5();
	Global_1940144->f_26 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_11)
	{
		switch (uParam0->f_33[iVar0]->f_1)
		{
			case -943921969:
				fVar1 = func_56(0, (IntToFloat(uParam0->f_33[iVar0]->f_2) / uParam0->f_2));
				func_57((IntToFloat(uParam0->f_33[iVar0]->f_2) / uParam0->f_2));
				iVar9 = 1;
				break;
			case -1104847406:
				fVar2 = func_56(2, (IntToFloat(uParam0->f_33[iVar0]->f_2) / uParam0->f_2));
				func_58((IntToFloat(uParam0->f_33[iVar0]->f_2) / uParam0->f_2), 0);
				bVar8 = true;
				break;
			case 381158954:
				fVar3 = func_56(1, (IntToFloat(uParam0->f_33[iVar0]->f_2) / uParam0->f_2));
				func_59((IntToFloat(uParam0->f_33[iVar0]->f_2) / uParam0->f_2));
				break;
			case -416929031:
				fVar4 = func_60((IntToFloat(uParam0->f_33[iVar0]->f_2) / uParam0->f_2), (uParam0->f_33[iVar0]->f_5 / uParam0->f_2));
				func_61(0, fVar4, 1, 1, bVar10);
				iVar9 = 1;
				break;
			case 1857353317:
				fVar5 = func_60((IntToFloat(uParam0->f_33[iVar0]->f_2) / uParam0->f_2), (uParam0->f_33[iVar0]->f_5 / uParam0->f_2));
				func_61(2, fVar5, 1, 1, bVar10);
				bVar8 = true;
				break;
			case 1681823811:
				fVar6 = func_60((IntToFloat(uParam0->f_33[iVar0]->f_2) / uParam0->f_2), (uParam0->f_33[iVar0]->f_5 / uParam0->f_2));
				func_61(1, fVar6, 1, 1, bVar10);
				break;
			case -816334026:
				func_62((to_float(uParam0->f_33[iVar0]->f_2) / uParam0->f_2), 1 == uParam0->f_1);
				break;
			default:
				if (bParam1)
				{
					switch (uParam0->f_33[iVar0]->f_1)
					{
						case 2062242710:
							fVar7 = func_63(to_float(uParam0->f_33[iVar0]->f_3), uParam0->f_33[iVar0]->f_4);
							func_64(19, fVar7, bVar11, 1);
							iVar9 = 1;
							break;
						case -826379728:
							fVar7 = func_63(to_float(uParam0->f_33[iVar0]->f_3), uParam0->f_33[iVar0]->f_4);
							func_64(20, fVar7, bVar11, 1);
							bVar8 = true;
							break;
						case -1191740624:
							fVar7 = func_63(to_float(uParam0->f_33[iVar0]->f_3), uParam0->f_33[iVar0]->f_4);
							func_64(18, fVar7, bVar11, 1);
							break;
						case 1869697234:
							fVar7 = func_63(to_float(uParam0->f_33[iVar0]->f_3), uParam0->f_33[iVar0]->f_4);
							func_64(0, fVar7, bVar11, 1);
							iVar9 = 1;
							break;
						case 1342237631:
							fVar7 = func_63(to_float(uParam0->f_33[iVar0]->f_3), uParam0->f_33[iVar0]->f_4);
							func_64(2, fVar7, bVar11, 1);
							bVar8 = true;
							break;
						case -1240225157:
							fVar7 = func_63(to_float(uParam0->f_33[iVar0]->f_3), uParam0->f_33[iVar0]->f_4);
							func_64(1, fVar7, bVar11, 1);
							break;
					}
				}
				break;
		}
		iVar0++;
	}
	if (bParam1)
	{
		func_65(uParam0);
		func_66(*uParam0, bVar8, iVar9, 562618531);
	}
	func_38(uParam0);
	uParam0->f_3 = (uParam0->f_3 + fVar1);
	uParam0->f_4 = (uParam0->f_4 + fVar2);
	uParam0->f_5 = (uParam0->f_5 + fVar3);
	uParam0->f_6 = (uParam0->f_6 + fVar4);
	uParam0->f_7 = (uParam0->f_7 + fVar5);
	uParam0->f_8 = (uParam0->f_8 + fVar6);
}

void func_28(var uParam0, int iParam1)
{
	if (func_19(uParam0->f_202, 16))
	{
		iVar0 = func_1();
		switch (get_entity_model(iParam1))
		{
			case 1627871020:
				if (uParam0->f_204 == -1370915905)
				{
					func_67(iVar0);
					if (((func_19(uParam0->f_202, 16) && chal_is_goal_active(-600094696, -1310410590)) && func_3(player_id(), 1)) && (*Global_1298536)[iVar0]->f_19.f_17 != 0)
					{
						uVar1 = (*Global_1298536)[iVar0]->f_19.f_17;
						chal_add_goal_progress_float_by_score_id(uVar1, 1f);
					}
				}
				else
				{
					func_69(func_68(-530255191, -1062788748), 1);
				}
				break;
			default:
				func_67(iVar0);
				break;
		}
	}
}

void func_29(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -2067647508:
		case -912678731:
		case -464445204:
		case 470703221:
		case 1051259759:
		case 1324459658:
			func_71(func_70(iParam0));
			break;
		case -611782825:
			func_72(-813902658, -2082434331, 1800);
			break;
		case -1088257729:
			func_72(-1685270562, -2038430863, 1800);
			if (func_73() || func_74())
			{
				func_69(func_68(1368284188, 1001560750), 1);
			}
			break;
		case -1706054699:
		case -1004468971:
		case -605086052:
		case -187002287:
			Var0.f_1 = iParam0;
			Var10.f_15 = 1;
			Var10 = { Var0 };
			StringCopy(&(Var10.f_10), "generic_weight_control_item", 32);
			Var10.f_14 = 512;
			func_75(Var10, 0);
			break;
		case 204375141:
			break;
		case -417963070:
			break;
		case -21093309:
			break;
		case -1620920647:
		case -529638012:
		case 128702355:
		case 1433048902:
		case 2006811763:
			func_76(350943398);
			break;
		case -2085219828:
		case -2051332199:
		case 228922461:
			if ((bParam1 || !func_77()) || !is_ped_on_foot(Global_34))
			{
				return;
			}
			if (iParam0 != 228922461 || get_random_int_in_range(0, 3000) < 1000)
			{
				Var10 = { Var0 };
				StringCopy(&(Var10.f_10), "generic_puking_item", 32);
				Var10.f_14 = 512;
				func_75(Var10, 0);
			}
			break;
		case 1365804873:
		case 1889838061:
			if (iParam0 == 1889838061)
			{
			}
			else if (iParam0 == 1365804873)
			{
			}
			func_78();
			break;
	}
}

void func_30(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_31(int iParam0)
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

char* func_32(int iParam0)
{
	iVar0 = get_random_int_in_range(0, 4);
	switch (&Global_1940085)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return "MOONSHINE_DRINK";
				case 1:
					return "MOONSHINE_CHEERS";
				case 2:
					return "MOONSHINE_DISCARD";
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					StringCopy(&cVar1, "MOONSHINE_DRINK_DRUNK_", 32);
					StringConCat(&cVar1, func_79(iVar0), 32);
					return func_80(cVar1);
				case 1:
					StringCopy(&cVar1, "MOONSHINE_CHEERS_DRUNK_", 32);
					StringConCat(&cVar1, func_79(iVar0), 32);
					return func_80(cVar1);
				case 2:
					StringCopy(&cVar1, "MOONSHINE_DISCARD_DRUNK_", 32);
					StringConCat(&cVar1, func_79(iVar0), 32);
					return func_80(cVar1);
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					StringCopy(&cVar1, "MOONSHINE_DRINK_WASTED_", 32);
					StringConCat(&cVar1, func_79(iVar0), 32);
					return func_80(cVar1);
				case 1:
					StringCopy(&cVar1, "MOONSHINE_CHEERS_WASTED_", 32);
					StringConCat(&cVar1, func_79(iVar0), 32);
					return func_80(cVar1);
				case 2:
					StringCopy(&cVar1, "MOONSHINE_DISCARD_WASTED_", 32);
					StringConCat(&cVar1, func_79(iVar0), 32);
					return func_80(cVar1);
			}
			break;
	}
	return "";
}

void func_33(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 && !func_31(iParam0))
	{
		return;
	}
	iVar0 = func_48(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1951255)[iVar0]->f_3, sParam1);
}

int func_34(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 129547951;
		case 1:
			return -473983589;
		case 2:
			return 992265328;
		default:
			break;
	}
	return 0;
}

int func_35(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 3;
		case 2:
			return 0;
		default:
			break;
	}
	return 0;
}

int func_36(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
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
		if (func_81(iVar0, 2))
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
		func_82(iVar1, iParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 1065353216, 0, 0, 0, iParam10, bParam11);
		return iVar1;
	}
	return 0;
}

void func_37(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_31(iParam0))
	{
		return;
	}
	iVar0 = func_48(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_group((*Global_1951255)[iVar0]->f_3, iParam1, iParam2);
}

void func_38(var uParam0)
{
	if (!uParam0->f_176)
	{
		if (does_entity_exist(uParam0->f_174))
		{
			_0x18ff3110cf47115d(uParam0->f_174, 2, 0);
			uParam0->f_176 = 1;
		}
	}
}

void func_39(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_40()
{
	return (func_41() || func_42());
}

bool func_41()
{
	return &Global_1940085 == 1;
}

bool func_42()
{
	return &Global_1940085 == 2;
}

void func_43(var uParam0, int iParam1)
{
	func_83(uParam0, iParam1);
}

void func_44(var uParam0)
{
	switch (_0x569f1e1237508deb(Global_34))
	{
		case -2017611976:
		case 1822674155:
		case 1933923503:
		case 2138559483:
			switch (&Global_1940085)
			{
				case 0:
					uParam0->f_187[7] = 10479869;
					uParam0->f_187[8] = -98905469;
					uParam0->f_187[9] = -269091281;
					if (get_entity_model(uParam0->f_1.f_174) == 1627871020)
					{
						uParam0->f_187[13] = 70200837;
						uParam0->f_187[12] = -1904446110;
						uParam0->f_187[11] = -1726785854;
						uParam0->f_187[10] = 1484522584;
					}
					else
					{
						uParam0->f_187[10] = -911864475;
						uParam0->f_187[13] = 1457577152;
						uParam0->f_187[12] = 928079862;
						uParam0->f_187[11] = 1067500305;
					}
					break;
				case 1:
				case 2:
					uParam0->f_187[7] = -948634471;
					uParam0->f_187[8] = -1130568975;
					uParam0->f_187[9] = 1326326265;
					if (get_entity_model(uParam0->f_1.f_174) == 1627871020)
					{
						uParam0->f_187[13] = -931616856;
						uParam0->f_187[12] = -1171949494;
						uParam0->f_187[11] = 1741364796;
						uParam0->f_187[10] = -841143620;
					}
					else
					{
						uParam0->f_187[10] = -2145686352;
						uParam0->f_187[13] = 444699049;
						uParam0->f_187[12] = 1351299120;
						uParam0->f_187[11] = -408165963;
					}
					break;
			}
			break;
		case -2082265241:
		case -1863878910:
		case -1419326836:
		case 173081288:
		case 306255907:
		case 661220981:
		case 1146879064:
		case 1209531989:
		case 1259156924:
		case 1441110512:
		case 1643780352:
		case 1951972797:
			switch (&Global_1940085)
			{
				case 0:
					uParam0->f_187[7] = -1842130926;
					uParam0->f_187[8] = -1060064137;
					uParam0->f_187[9] = 1439999116;
					if (get_entity_model(uParam0->f_1.f_174) == 1627871020)
					{
						uParam0->f_187[13] = -1298041581;
						uParam0->f_187[12] = 525085366;
						uParam0->f_187[11] = -411204481;
						uParam0->f_187[10] = -30676417;
					}
					else
					{
						uParam0->f_187[10] = 1729142180;
						uParam0->f_187[13] = -306782526;
						uParam0->f_187[12] = 1733007823;
						uParam0->f_187[11] = 1122183656;
					}
					break;
				case 1:
				case 2:
					uParam0->f_187[7] = -214160871;
					uParam0->f_187[8] = 1956116017;
					uParam0->f_187[9] = 626222989;
					if (get_entity_model(uParam0->f_1.f_174) == 1627871020)
					{
						uParam0->f_187[13] = -168572957;
						uParam0->f_187[12] = 55551996;
						uParam0->f_187[11] = 1242912044;
						uParam0->f_187[10] = 766843712;
					}
					else
					{
						uParam0->f_187[10] = 1192127603;
						uParam0->f_187[13] = -1395771465;
						uParam0->f_187[12] = 749044204;
						uParam0->f_187[11] = -504440314;
					}
					break;
			}
			break;
		default:
			switch (&Global_1940085)
			{
				case 0:
					uParam0->f_187[7] = -468547873;
					uParam0->f_187[8] = -1741992774;
					uParam0->f_187[9] = -1277599014;
					if (get_entity_model(uParam0->f_1.f_174) == 1627871020)
					{
						uParam0->f_187[13] = 1642022542;
						uParam0->f_187[12] = 841023474;
						uParam0->f_187[11] = 846008983;
						uParam0->f_187[10] = -1004140292;
					}
					else
					{
						uParam0->f_187[10] = -1078116948;
						uParam0->f_187[13] = -1613539009;
						uParam0->f_187[12] = -176911354;
						uParam0->f_187[11] = -603565807;
					}
					break;
				case 1:
				case 2:
					uParam0->f_187[7] = -638132672;
					uParam0->f_187[8] = 1201934695;
					uParam0->f_187[9] = -1762037660;
					if (get_entity_model(uParam0->f_1.f_174) == 1627871020)
					{
						uParam0->f_187[13] = -1021227765;
						uParam0->f_187[12] = -553515202;
						uParam0->f_187[11] = -1159114752;
						uParam0->f_187[10] = -1297229685;
					}
					else
					{
						uParam0->f_187[10] = -1757318252;
						uParam0->f_187[13] = -1247588270;
						uParam0->f_187[12] = -1080252797;
						uParam0->f_187[11] = 1272306923;
					}
					break;
			}
			break;
	}
}

int func_45()
{
	switch (_0x569f1e1237508deb(Global_34))
	{
		case -2017611976:
		case 1822674155:
		case 1933923503:
		case 2138559483:
			return 10479869;
		case -2082265241:
		case -1863878910:
		case -1419326836:
		case 173081288:
		case 306255907:
		case 661220981:
		case 1146879064:
		case 1209531989:
		case 1259156924:
		case 1441110512:
		case 1643780352:
		case 1951972797:
			return -1842130926;
		default:
			break;
	}
	return -468547873;
}

int func_46()
{
	switch (_0x569f1e1237508deb(Global_34))
	{
		case -2017611976:
		case 1822674155:
		case 1933923503:
		case 2138559483:
			return -948634471;
		case -2082265241:
		case -1863878910:
		case -1419326836:
		case 173081288:
		case 306255907:
		case 661220981:
		case 1146879064:
		case 1209531989:
		case 1259156924:
		case 1441110512:
		case 1643780352:
		case 1951972797:
			return -214160871;
		default:
			break;
	}
	return -638132672;
}

void func_47(var uParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if ((func_31(&(uParam0->f_183[iVar0])) && !func_21(&(uParam0->f_183[iVar0]), 1)) && !func_24(&(uParam0->f_183[iVar0]), 1))
		{
			func_84(&(uParam0->f_183[iVar0]), bParam1, 0, 1);
		}
		iVar0++;
	}
}

int func_48(int iParam0)
{
	return iParam0;
}

bool func_49(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_50(var uParam0)
{
	func_85(uParam0, 0);
}

void func_51(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_86((*uParam0)[iVar0], 1, 1);
		iVar0++;
	}
}

bool func_52()
{
	if (func_87())
	{
		return false;
	}
	return true;
}

void func_53(float fParam0, bool bParam1)
{
	func_88((Global_1940085->f_9 + fParam0), bParam1);
}

bool func_54(int iParam0, int iParam1)
{
	if (!func_16(iParam0, 0))
	{
		return func_90(func_89(iParam0), iParam1);
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

int func_55(int iParam0)
{
	switch (iParam0)
	{
		case -1498871949:
		case -1283370018:
		case -822124724:
		case -818346432:
		case -624685730:
		case -610395813:
		case -545779394:
		case 348064119:
		case 447784640:
		case 827714260:
		case 1269193435:
		case 1532695640:
		case 1739830455:
		case 1847740267:
		case 1958345007:
		case 2103594888:
			return 0;
	}
	return 1;
}

float func_56(int iParam0, float fParam1)
{
	switch (iParam0)
	{
		case 0:
			fVar0 = to_float(get_entity_health(Global_34));
			fVar1 = to_float(get_entity_max_health(Global_34, false));
			break;
		case 1:
			fVar0 = _get_ped_stamina(Global_34);
			fVar1 = _get_ped_max_stamina(Global_34);
			break;
		case 2:
			fVar0 = _0xa81d24ae0af99a5e(get_player_index());
			fVar1 = _0x592f58bc4d2a2cf3(get_player_index(), 0);
			break;
	}
	fVar3 = (fParam1 + fVar0);
	if (fVar3 > fVar1)
	{
		fVar2 = (fVar1 - fVar0);
	}
	else
	{
		fVar2 = (fVar3 - fVar0);
	}
	return (fVar2 / 2f);
}

void func_57(float fParam0)
{
	iVar0 = player_ped_id();
	if (fParam0 == 0f)
	{
		return;
	}
	else if (fParam0 == -1f)
	{
		fParam0 = to_float(_0x16f2c8c084ab2092(iVar0));
	}
	iVar1 = func_91(2);
	func_92((fParam0 * IntToFloat(iVar1)), 0);
}

void func_58(float fParam0, bool bParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	else if (fParam0 == -1f)
	{
		fParam0 = to_float(10);
	}
	iVar0 = func_93(2);
	func_94((fParam0 * IntToFloat(iVar0)), 0, bParam1);
}

void func_59(float fParam0)
{
	iVar0 = player_ped_id();
	if (fParam0 == 0f)
	{
		return;
	}
	else if (fParam0 == -1f)
	{
		fParam0 = to_float(_0xfc3b580c4380b5b7(iVar0));
	}
	iVar1 = func_95(2);
	func_96((fParam0 * IntToFloat(iVar1)), 0);
}

float func_60(float fParam0, float fParam1)
{
	if (fParam1 != 0f)
	{
		return ((fParam1 / 100f) * 100f);
	}
	return ((fParam0 / 8f) * 100f);
}

void func_61(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (fParam1 == 0f)
	{
		return;
	}
	if (bParam4)
	{
		fParam1 = func_97(iParam0, fParam1, 1);
	}
	func_99(iParam0, (func_98(iParam0, 2) + fParam1), bParam2, bParam3, 1, 2);
}

void func_62(float fParam0, bool bParam1)
{
	if (fParam0 > 10f)
	{
		fParam0 = 10f;
	}
	if (func_100())
	{
		func_101(fParam0, 0);
	}
	if (bParam1)
	{
		Global_17411.f_55.f_2439.f_41++;
		if (5 == Global_17411.f_55.f_2439.f_41)
		{
			func_102(109, 0);
		}
	}
}

float func_63(float fParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return (fParam0 * 0.033f);
		case 1:
			return (fParam0 * 2f);
		case 2:
			return (fParam0 * 120f);
		case 3:
			return (fParam0 * 2880f);
		default:
			break;
	}
	return fParam0;
}

int func_64(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (!does_entity_exist(player_ped_id()))
	{
		return 0;
	}
	return func_103(iParam0, fParam1, bParam2, bParam3);
}

void func_65(var uParam0)
{
	switch (*uParam0)
	{
		case -2109344034:
		case -2053642092:
		case -1806099704:
		case -1563450693:
		case -1499480171:
		case -1437186306:
		case -669703557:
		case -30746180:
		case 429428887:
		case 812236345:
		case 1023793009:
		case 1271821570:
		case 1454312131:
		case 1879593571:
		case 1934214136:
			func_72(-1196069774, -179343615, 8100);
			break;
	}
}

void func_66(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (iParam2 || func_54(iParam0, -537818634))
	{
		func_69(func_104(-704089207), 1);
	}
	if (func_54(iParam0, -1457797660))
	{
		func_69(func_104(-1909697259), 1);
	}
	if (func_54(iParam0, 1573112293))
	{
		func_106(func_105(iParam0), 1);
	}
	if (func_54(iParam0, 1939071949))
	{
		func_69(func_68(1368284188, -939665347), 1);
	}
	if (func_54(iParam0, 1992556171))
	{
		func_69(func_104(-1295035230), 1);
	}
	if (func_54(iParam0, 1239889275))
	{
		func_69(func_104(905765416), 1);
	}
	switch (iParam0)
	{
		case -1921080134:
		case -635441454:
		case 1448771675:
			func_69(func_68(1368284188, -2049431929), 1);
			break;
	}
	switch (iParam0)
	{
		case -611782825:
			func_69(func_68(1368284188, -1875859641), 1);
			break;
		case 299161628:
			func_69(func_68(1368284188, 304473406), 1);
			break;
		case -1907044919:
		case 688258043:
			func_69(func_68(1368284188, 894597474), 1);
			break;
		case -541584777:
		case 206762213:
			func_69(func_68(1368284188, 2119695263), 1);
			break;
		case -653299524:
		case -486559882:
		case 376981280:
			func_69(func_68(1368284188, -1791969490), 1);
			break;
		case -324053813:
		case 998010398:
			func_69(func_68(1368284188, -155567636), 1);
			break;
		case -2042563684:
		case -1871448371:
		case -834705084:
		case -623409049:
			func_69(func_68(1368284188, 497247514), 1);
			break;
		case 1929383243:
		case 2036955137:
			func_69(func_68(1368284188, -868741806), 1);
			break;
		case -1635450397:
		case 1831763320:
			func_69(func_68(1368284188, -208442209), 1);
			break;
	}
	if (func_107() == -1)
	{
		if (iParam0 == -1976480343)
		{
			func_69(func_68(1368284188, 595572217), 1);
		}
	}
	if (bParam1)
	{
		func_69(func_104(704570463), 1);
	}
	func_108(iParam0, iParam3);
}

void func_67(int iParam0)
{
	if ((*Global_1298536)[iParam0]->f_19.f_19 == 1269193435 || (*Global_1298536)[iParam0]->f_19.f_19 == 1847740267)
	{
		func_69(func_68(-530255191, -698869443), 1);
	}
	else if ((*Global_1298536)[iParam0]->f_19.f_19 == -822124724 || (*Global_1298536)[iParam0]->f_19.f_19 == 1532695640)
	{
		func_69(func_68(-530255191, 479314079), 1);
	}
	else
	{
		func_69(func_68(-530255191, -1062788748), 1);
	}
}

struct<2> func_68(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_69(var uParam0, int iParam1, int iParam2)
{
	if (!_stat_id_is_valid(&uParam0))
	{
		return;
	}
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

int func_70(int iParam0)
{
	if (!func_109(&Var0))
	{
		return 0;
	}
	if (!func_110(&Var0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_110(&Var0, 37, 0, 0, 1))
	{
		return 0;
	}
	if (!func_110(&Var0, 39, iParam0, 0, 1))
	{
		return 0;
	}
	return func_111(Var0);
}

void func_71(int iParam0)
{
	func_112(iParam0);
	func_113(1, 1);
}

int func_72(int iParam0, int iParam1, int iParam2)
{
	if (!func_114(iParam1))
	{
		return 0;
	}
	if (!func_115(iParam1))
	{
		return 0;
	}
	if (!func_116(iParam0))
	{
		return 0;
	}
	if (!func_117(iParam0))
	{
		return 0;
	}
	if (!func_118(iParam0))
	{
		func_119(iParam0);
	}
	if (func_120(iParam0, iParam1))
	{
		iVar0 = func_121(iParam0);
		Global_1146212->f_47689.f_63[iVar0] = iParam0;
		Global_1146212->f_47689.f_63[iVar0]->f_1 = (Global_1296859->f_21 + iParam2);
		return 1;
	}
	return 0;
}

bool func_73()
{
	if (func_122())
	{
		return false;
	}
	return Global_1956200->f_1431.f_96 == 0;
}

bool func_74()
{
	if (func_122())
	{
		return false;
	}
	return Global_1956200->f_1431.f_96 == 2;
}

void func_75(struct<16> Param0, int iParam16)
{
	if (is_string_null_or_empty(&(Param0.f_10)))
	{
		return;
	}
	if (Global_1939493->f_161 >= 10)
	{
		return;
	}
	if (!func_123(iParam16, 2))
	{
		if (_get_number_of_references_of_script_with_name_hash(get_hash_key(&(Param0.f_10))) > 0 || func_124(&(Param0.f_10)))
		{
			return;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (is_string_null_or_empty(&((*Global_1939493)[iVar0]->f_10)))
		{
			*(*Global_1939493)[iVar0] = { Param0 };
			Global_1939493->f_161++;
			func_125(iParam16);
			return;
		}
		iVar0++;
	}
}

void func_76(int iParam0)
{
	iVar1 = Global_1146212->f_47689.f_1.f_42;
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar0 = &Global_1146212->f_47689.f_1[iVar2];
		iVar3 = func_126(iVar0, 1);
		if (&Global_1146212->f_35859.f_919[iVar3] == iParam0)
		{
			func_119(iVar0);
			Global_1146212->f_47689.f_1.f_42 = (Global_1146212->f_47689.f_1.f_42 - 1);
		}
		else
		{
			*Var6[iVar4] = { *Global_1146212->f_47689.f_1[iVar2] };
			iVar4++;
		}
		iVar2++;
	}
	iVar5 = 0;
	while (iVar5 < iVar4)
	{
		*Global_1146212->f_47689.f_1[iVar5] = { *Var6[iVar5] };
		iVar5++;
	}
}

bool func_77()
{
	return func_127(1);
}

void func_78()
{
	func_76(350943398);
	func_76(1775828486);
}

char* func_79(int iParam0)
{
	return _0x2b6846401d68e563(to_float(iParam0), 0);
}

var func_80(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

bool func_81(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1951255)[iParam0]->f_1 && iParam1) != 0;
}

void func_82(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_128(iParam0, 1);
	func_129(iParam0, 1);
	func_130(iParam0, 128);
}

void func_83(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_84(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam2 && !func_31(iParam0))
	{
		return;
	}
	iVar0 = func_48(iParam0);
	if (bParam1)
	{
		func_131(iParam0, 4);
		if (bParam3)
		{
			func_128(iVar0, 1);
		}
		func_129(iVar0, 1);
	}
	else
	{
		func_130(iParam0, 4);
		func_129(iVar0, 0);
	}
}

void func_85(var uParam0, int iParam1)
{
	uParam0->f_1 = get_network_time_accurate();
	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = get_time_offset(uParam0->f_1, iParam1);
	}
	func_132(uParam0, 1);
	func_133(uParam0, 2);
	uParam0->f_2 = 0;
}

void func_86(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_31(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_48(*uParam0);
	if ((*Global_1951255)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_134(iVar0);
	*uParam0 = 0;
}

bool func_87()
{
	return func_136(func_135(0));
}

void func_88(float fParam0, bool bParam1)
{
	if (is_ped_on_mount(Global_34) || is_ped_in_any_vehicle(Global_34, false))
	{
		if (fParam0 >= func_137())
		{
			Global_1940085->f_9 = (func_137() - 0.01f);
			return;
		}
	}
	if (fParam0 < 0f)
	{
		Global_1940085->f_9 = 0f;
		_0x06d26a96ca1bca75(Global_34, 10, Global_1940085->f_9, 0);
	}
	else if (fParam0 >= 1f && Global_1940085->f_14)
	{
		Global_1940085->f_9 = 0.99f;
	}
	else if (fParam0 > 1f)
	{
		Global_1940085->f_9 = 1f;
	}
	else
	{
		Global_1940085->f_9 = fParam0;
	}
	if (bParam1)
	{
		Global_1940085->f_12 = 1;
	}
}

int func_89(int iParam0)
{
	return iParam0;
}

int func_90(int iParam0, int iParam1)
{
	if (!func_138(iParam0, 2))
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

int func_91(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_139(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1956200->f_1546;
		case 1:
			return Global_1956200->f_1565.f_136;
		default:
			break;
	}
	return -1;
}

void func_92(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1296859->f_8;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	_0x835f131e7dc8f97a(iParam1, fParam0, 0, 0);
}

int func_93(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_139(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1956200->f_1546.f_1;
		case 1:
			return Global_1956200->f_1565.f_136.f_1;
		default:
			break;
	}
	return -1;
}

void func_94(float fParam0, bool bParam1, bool bParam2)
{
	iVar0 = player_id();
	if (fParam0 > 0f && func_140(iVar0))
	{
		return;
	}
	iVar1 = player_ped_id();
	if (!does_entity_exist(iVar1))
	{
		return;
	}
	if ((_0xb16223cb7da965f0(iVar0) && fParam0 > 0f) && !bParam2)
	{
		return;
	}
	if (fParam0 == 0f)
	{
		return;
	}
	fVar2 = _0xab3773e7aa1e9dcc(iVar0);
	if (fParam0 < 0f && bParam1 == 1)
	{
		bParam1 = false;
	}
	if (!bParam1)
	{
		_0x5a498fca232f71e1(iVar0, 1f);
	}
	if (fParam0 > 0f)
	{
		_0x51345ae20f22c261(iVar0, fParam0, 0, 0, 1);
	}
	else
	{
		_0x200114e99552462b(iVar0, fParam0, 0);
	}
	if (!bParam1)
	{
		_0x5a498fca232f71e1(iVar0, fVar2);
	}
}

int func_95(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_139(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1956200->f_1546.f_2;
		case 1:
			return Global_1956200->f_1565.f_136.f_2;
		default:
			break;
	}
	return -1;
}

void func_96(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1296859->f_8;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	_charge_ped_stamina(iParam1, fParam0);
}

float func_97(int iParam0, float fParam1, bool bParam2)
{
	iVar0 = func_141();
	func_142(&iVar0, 0, 0, 0, 1, 0, 0);
	iVar1 = func_143(iParam0, 2);
	if (func_145(iVar0, func_144(iParam0, 2), 1))
	{
		func_146(iParam0, 0, 2);
		iVar1 = 0;
	}
	if (iVar1 >= 2)
	{
		func_102(103, bParam2);
		return 0f;
	}
	func_147(iParam0, func_141(), 2);
	func_146(iParam0, iVar1 + 1, 2);
	return fParam1;
}

float func_98(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_139(2);
	}
	switch (iParam1)
	{
		case 0:
			return &(Global_1956200->f_1431.f_6[iParam0]);
		case 1:
			return &(Global_1956200->f_1565.f_2.f_6[iParam0]);
		default:
			break;
	}
	return -1f;
}

int func_99(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	if (iParam5 == 2)
	{
		iParam5 = func_139(2);
	}
	iVar0 = player_ped_id();
	if (func_148(iVar0, iParam0, fParam1))
	{
		if (bParam2)
		{
			if (fParam1 >= 100f)
			{
				play_sound_frontend("Core_Full", "Consumption_Sounds", true, 0);
			}
			else
			{
				play_sound_frontend("Core_Fill_Up", "Consumption_Sounds", true, 0);
			}
		}
		if (bParam3)
		{
			func_149(iParam0, 7000, iParam5);
		}
		func_150(iVar0, iParam0, fParam1);
		func_151(iParam0, fParam1, bParam4, iParam5);
	}
	return 1;
}

bool func_100()
{
	if (Global_1956200->f_1431.f_107 == -15)
	{
		return true;
	}
	return func_152(Global_1956200->f_1431.f_107, 0);
}

void func_101(float fParam0, int iParam1)
{
	fVar0 = func_153(13, 2);
	iVar1 = func_154(fVar0);
	fVar0 = (fVar0 + fParam0);
	fVar0 = func_155(fVar0, 0f, 100f);
	iVar2 = func_154(fVar0);
	if (iVar1 != iVar2)
	{
		Global_1956200->f_1431.f_107 = func_141();
		func_156(&(Global_1956200->f_1431.f_107), 0, 0, 1, 0, 0, 0, 0);
	}
	func_157(13, fVar0, 2);
	Global_1956200->f_1431.f_99 = iParam1;
}

void func_102(int iParam0, bool bParam1)
{
	func_158(iParam0, &iVar0, &iVar1);
	if (!func_159(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_160(iVar0, iVar1);
}

int func_103(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	iVar1 = player_ped_id();
	if (fParam1 == -1f)
	{
		if (func_161(iParam0))
		{
			fParam1 = 30f;
		}
		else
		{
			fParam1 = 30f;
		}
	}
	else if (fParam1 <= 0f)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (bParam2)
			{
				sVar0 = func_162(iParam0);
				if (!animpostfx_is_running(sVar0))
				{
					animpostfx_play(sVar0);
				}
			}
			func_163(-1);
			_set_attribute_overpower_amount(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[0] = fParam1;
			break;
		case 1:
			if (bParam2)
			{
				sVar0 = func_162(iParam0);
				if (!animpostfx_is_running(sVar0))
				{
					animpostfx_play(sVar0);
				}
			}
			func_76(1775828486);
			func_164(-1);
			_set_attribute_overpower_amount(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[1] = fParam1;
			break;
		case 2:
			if (bParam2)
			{
				sVar0 = func_162(iParam0);
				if (!animpostfx_is_running(sVar0))
				{
					animpostfx_play(sVar0);
				}
			}
			func_165(-1, 0);
			_set_attribute_overpower_amount(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[2] = fParam1;
			break;
		case 19:
			func_76(350943398);
			func_166(0, 1, 1);
			_set_attribute_overpower_amount(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[0]->f_1 = fParam1;
			break;
		case 18:
			func_166(1, 1, 1);
			_set_attribute_overpower_amount(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[1]->f_1 = fParam1;
			break;
		case 20:
			func_166(2, 1, 1);
			_set_attribute_overpower_amount(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[2]->f_1 = fParam1;
			break;
		default:
			return 0;
	}
	return 1;
}

struct<2> func_104(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

int func_105(int iParam0)
{
	switch (iParam0)
	{
		case 1433048902:
			return 2;
		case -1602657245:
			return 4;
		case -1991037110:
			return 5;
		case 1047281747:
			return 6;
		case -398744080:
			return 7;
		case -1066874997:
			return 8;
		case -2085219828:
			return 11;
		case 2064962445:
			return 12;
		case -1620920647:
			return 15;
		case -1664530975:
			return 16;
		case -597058368:
			return 21;
		case 128702355:
			return 24;
		case -2051332199:
			return 27;
		case 546981776:
			return 28;
		case -2013384490:
			return 29;
		case 228922461:
			return 30;
		case -746674788:
			return 32;
		case 599861917:
			return 34;
		case -1781387050:
			return 35;
		case 2006811763:
			return 38;
		case -90546043:
			return 39;
		case 1216456215:
			return 49;
		case 746300881:
			return 50;
		case -435006002:
			return 51;
		case -624139784:
			return 52;
		case -529638012:
			return 53;
		case 1338475089:
			return 40;
		case 2605459:
			return 41;
		case 1071702353:
			return 42;
		case -1183422860:
			return 43;
		case -1957546791:
			return 44;
		case -589542533:
			return 45;
		case -1776738559:
			return 46;
		case 1602215994:
			return 47;
		case -396757268:
			return 48;
	}
	return 0;
}

void func_106(int iParam0, int iParam1)
{
	Var0 = { func_68(-372368982, func_167(iParam0)) };
	_0x6a0184e904cdf25e(&Var0, iParam1);
	func_69(func_168(106002964), iParam1);
}

int func_107()
{
	return Global_1572887->f_13;
}

void func_108(int iParam0, int iParam1)
{
	if (func_107() == 0)
	{
		iVar0 = func_169(iParam0, -949239683);
		if (iParam1 == -1387038764)
		{
			return;
		}
		if (func_54(iParam0, -136654233))
		{
			chal_add_goal_progress_int(-1823988672, -609313610, 1);
		}
		if ((func_54(iParam0, 1765172170) || 1443104131 == iVar0) || -1919515848 == iVar0)
		{
			chal_add_goal_progress_int(-1823988672, 733633210, 1);
		}
		if (func_54(iParam0, 1573112293))
		{
			chal_add_goal_progress_int(-1823988672, -1274788474, 1);
		}
		if (func_54(iParam0, -2085281117) && !func_54(iParam0, -1237028043))
		{
			chal_add_goal_progress_int(-1823988672, -1456129530, 1);
		}
		if (func_54(iParam0, 200705431))
		{
			chal_add_goal_progress_int(-1823988672, 1380824593, 1);
		}
		if (((func_54(iParam0, -887064662) || func_54(iParam0, -839724752)) || func_54(iParam0, 1264218912)) || iParam0 == -1994237933)
		{
			chal_add_goal_progress_int(-1823988672, 381139323, 1);
		}
		if (func_54(iParam0, -764700608))
		{
			chal_add_goal_progress_int(-1823988672, 1844266867, 1);
		}
		if ((iParam0 == -1442667564 || iParam0 == -951828978) || iParam0 == -1477273558)
		{
			chal_add_goal_progress_int(-1823988672, -1075364325, 1);
		}
		if (iParam0 == -1199896558)
		{
			chal_add_goal_progress_int(-1823988672, 2024753712, 1);
		}
	}
}

bool func_109(var uParam0)
{
	_copy_memory(uParam0, &uVar0, 5);
	if (!func_170(1))
	{
		return false;
	}
	*uParam0 = Global_1071686->f_28448[51]->f_3;
	return true;
}

bool func_110(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	uParam0->f_2 = iParam1;
	uParam0->f_3 = iParam2;
	uParam0->f_4 = iParam3;
	uVar0 = uParam0->f_1;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		uParam0->f_1 = uVar0;
		return false;
	}
	return true;
}

var func_111(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_171(&uParam0, 61, 1);
}

void func_112(int iParam0)
{
	func_172(iParam0);
	set_current_ped_weapon(Global_34, -1569615261, false, 0, false, false);
	set_current_ped_weapon(Global_34, -1569615261, false, 1, false, false);
	func_173();
	func_174(8388608);
	if (func_175(iParam0, &iVar0))
	{
		func_177(func_176(iVar0));
	}
}

void func_113(bool bParam0, bool bParam1)
{
	if (func_178(255) == 4)
	{
		return;
	}
	if (func_179(get_entity_coords(get_player_ped(player_id()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_180(0);
	}
	else
	{
		if (bParam1)
		{
			func_181(0, 0, 0, 1);
		}
		func_182(0);
		func_183(&(Global_1102219->f_3849));
		Global_1102219->f_3849 = 0f;
		Global_1102219->f_3849.f_5 = 1;
		Global_1102219->f_3849.f_16 = 0;
		Global_1102219->f_3849.f_17.f_6 = { get_entity_coords(get_player_ped(player_id()), false, false) };
		Global_1102219->f_3849.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102219->f_3849.f_17 = { Global_1901947->f_50.f_1, Global_1901947->f_50.f_1, Global_1901947->f_50.f_1 };
		Global_1102219->f_3849.f_17.f_9 = -432403087;
		func_184(&(Global_1102219->f_3888));
		Global_1102219->f_3888.f_6 = { Global_1102219->f_3849.f_17.f_6 };
		Global_1102219->f_3888 = Global_1102219->f_3849;
		Global_1102219->f_3888.f_5 = 1;
		if (bParam1)
		{
			Global_1102219->f_26.f_3341 = 0;
			Global_1102219->f_26.f_3342 = 0;
		}
	}
	func_185(Global_1102219->f_3849, 36);
	func_186(Global_1102219->f_3888, 36);
}

bool func_114(int iParam0)
{
	iVar0 = func_187(iParam0, 1);
	if (iVar0 >= 150 && iVar0 <= 152)
	{
		return true;
	}
	return false;
}

bool func_115(int iParam0)
{
	iVar0 = func_187(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 153)
	{
		return false;
	}
	return true;
}

bool func_116(int iParam0)
{
	iVar0 = func_126(iParam0, 1);
	if (iVar0 >= 180 && iVar0 <= 182)
	{
		return true;
	}
	return false;
}

bool func_117(int iParam0)
{
	iVar0 = func_126(iParam0, 1);
	if (iVar0 < 2 || iVar0 >= 183)
	{
		return false;
	}
	return true;
}

bool func_118(int iParam0)
{
	if (!func_117(iParam0))
	{
		return false;
	}
	return &Global_1146212->f_35859.f_919[func_126(iParam0, 1)] == -1;
}

int func_119(int iParam0)
{
	if (!func_117(iParam0))
	{
		return 0;
	}
	iVar0 = func_126(iParam0, 1);
	if (!func_115(&(Global_1146212->f_35859.f_919[iVar0])))
	{
		return 1;
	}
	iVar3 = func_187(&(Global_1146212->f_35859.f_919[iVar0]), 1);
	iVar4 = 0;
	while (iVar4 < Global_1146212->f_35859[iVar3]->f_5)
	{
		iVar1 = Global_1146212->f_35859[iVar3][iVar4];
		switch (func_188(iParam0, iVar1))
		{
			case 0:
				func_189(iVar1, iParam0, iVar4);
				break;
			case 1:
				iVar5 = 0;
				while (iVar5 < Global_1146212->f_35859.f_11700)
				{
					if (&Global_1146212->f_35859.f_9503[iVar5] != iVar1 || Global_1146212->f_35859.f_9503[iVar5]->f_1 != iParam0)
					{
					}
					else
					{
						func_189(iVar1, iParam0, iVar4);
						func_190(Global_1146212->f_35859.f_9503[iVar5]);
						Global_1146212->f_35859.f_11700 = (Global_1146212->f_35859.f_11700 - 1);
						*Global_1146212->f_35859.f_9503[iVar5] = { *Global_1146212->f_35859.f_9503[Global_1146212->f_35859.f_11700] };
						func_190(Global_1146212->f_35859.f_9503[Global_1146212->f_35859.f_11700]);
					}
					else
					{
						iVar5++;
					}
				}
				break;
			case 2:
				Jump @606; //curOff = 387
				iVar2 = func_191(iVar1, 1);
				func_192(iVar2, -1);
				if (Global_1146212->f_35859.f_3116[iVar2]->f_29 <= 0)
				{
					func_193(iVar2, 0);
					iVar6 = 0;
					while (iVar6 < Global_1146212->f_35859.f_9502)
					{
						if (&Global_1146212->f_35859.f_9302[iVar6] != iVar1)
						{
						}
						else
						{
							Global_1146212->f_35859.f_9302[iVar6] = -1;
							Global_1146212->f_35859.f_9502 = (Global_1146212->f_35859.f_9502 - 1);
							Global_1146212->f_35859.f_9302[iVar6] = &Global_1146212->f_35859.f_9302[Global_1146212->f_35859.f_9502];
							Global_1146212->f_35859.f_9302[Global_1146212->f_35859.f_9502] = -1;
						}
						else
						{
							iVar6++;
						}
					}
				}
				iVar4++;
			}
			Global_1146212->f_35859.f_919[iVar0] = -1;
			func_194(Global_1146212->f_35859.f_919[iVar0]);
			return 1;
		}

bool func_120(int iParam0, int iParam1)
{
	if (!func_117(iParam0))
	{
		return false;
	}
	iVar0 = func_126(iParam0, 1);
	if (!func_115(iParam1))
	{
		return false;
	}
	iVar1 = func_187(iParam1, 1);
	if (&Global_1146212->f_35859.f_919[iVar0] == iParam1)
	{
		return true;
	}
	if (func_115(&(Global_1146212->f_35859.f_919[iVar0])))
	{
		func_119(iParam0);
	}
	Global_1146212->f_35859.f_919[iVar0] = iParam1;
	iVar4 = 0;
	while (iVar4 < Global_1146212->f_35859[iVar1]->f_5)
	{
		iVar2 = Global_1146212->f_35859[iVar1][iVar4];
		iVar3 = func_191(iVar2, 1);
		switch (func_195(iParam0, iVar2))
		{
			case 0:
				func_196(iVar2, iParam0, iVar4);
				break;
			case 1:
				Global_1146212->f_35859.f_9503[Global_1146212->f_35859.f_11700] = iVar2;
				Global_1146212->f_35859.f_9503[Global_1146212->f_35859.f_11700]->f_1 = iParam0;
				Global_1146212->f_35859.f_9503[Global_1146212->f_35859.f_11700]->f_2 = iVar4;
				Global_1146212->f_35859.f_11700++;
				break;
			case 2:
				Jump @427; //curOff = 338
				if (Global_1146212->f_35859.f_3116[iVar3]->f_29 <= 0)
				{
					Global_1146212->f_35859.f_9302[Global_1146212->f_35859.f_9502] = iVar2;
					Global_1146212->f_35859.f_9502++;
				}
				func_192(iVar3, 1);
				iVar4++;
			}
			return true;
		}

int func_121(int iParam0)
{
	iVar0 = func_126(iParam0, 1);
	if (func_197(iParam0))
	{
		return (iVar0 - 2);
	}
	else if (func_198(iParam0))
	{
		return (iVar0 - 130);
	}
	else if (func_199(iParam0))
	{
		return (iVar0 - 166);
	}
	else if (func_200(iParam0))
	{
		return (iVar0 - 167);
	}
	else if (func_201(iParam0))
	{
		return (iVar0 - 172);
	}
	else if (func_116(iParam0))
	{
		return (iVar0 - 180);
	}
	else if (func_202(iParam0))
	{
		return (iVar0 - 150);
	}
	return -1;
}

bool func_122()
{
	return (Global_1952637->f_1 != 24043185 && Global_1952637->f_1 != 2026485318);
}

bool func_123(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_124(char* sParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1939493->f_161)
	{
		if (are_strings_equal(&((*Global_1939493)[iVar0]->f_10), sParam0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_125(int iParam0)
{
	if (func_123(iParam0, 1))
	{
		func_203(1);
	}
}

int func_126(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2101912686:
			return 13;
		case -2059285007:
			return 167;
		case -2006026692:
			return 176;
		case -1993903481:
			return 124;
		case -1970041458:
			return 142;
		case -1935700575:
			return 136;
		case -1927422497:
			return 127;
		case -1920464018:
			return 58;
		case -1919393558:
			return 27;
		case -1857550353:
			return 173;
		case -1855662261:
			return 55;
		case -1840995238:
			return 15;
		case -1835722213:
			return 88;
		case -1790318144:
			return 106;
		case -1786033368:
			return 62;
		case -1767968552:
			return 86;
		case -1767662471:
			return 32;
		case -1729980669:
			return 108;
		case -1729554078:
			return 49;
		case -1727526861:
			return 109;
		case -1722264360:
			return 18;
		case -1719665775:
			return 37;
		case -1716981503:
			return 107;
		case -1697567574:
			return 72;
		case -1685270562:
			return 181;
		case -1631930150:
			return 166;
		case -1629969648:
			return 174;
		case -1605880447:
			return 120;
		case -1575244501:
			return 61;
		case -1551628748:
			return 74;
		case -1543433893:
			return 70;
		case -1539337723:
			return 121;
		case -1525401254:
			return 64;
		case -1525233154:
			return 47;
		case -1491472827:
			return 94;
		case -1486927560:
			return 112;
		case -1480068681:
			return 50;
		case -1478178768:
			return 148;
		case -1465202595:
			return 104;
		case -1459368569:
			return 116;
		case -1431848307:
			return 76;
		case -1418298797:
			return 155;
		case -1391865428:
			return 171;
		case -1378468884:
			return 60;
		case -1291022662:
			return 117;
		case -1288042557:
			return 19;
		case -1248720641:
			return 7;
		case -1229834518:
			return 89;
		case -1223791123:
			return 79;
		case -1209874968:
			return 45;
		case -1197630873:
			return 153;
		case -1196069774:
			return 180;
		case -1181880939:
			return 80;
		case -1170784825:
			return 38;
		case -1125028284:
			return 137;
		case -1123356036:
			return 147;
		case -1100659165:
			return 6;
		case -1089821002:
			return 85;
		case -1084890102:
			return 172;
		case -1080696981:
			return 92;
		case -1010031245:
			return 39;
		case -992423055:
			return 157;
		case -979738281:
			return 77;
		case -931294997:
			return 111;
		case -920221586:
			return 110;
		case -900877140:
			return 30;
		case -885737328:
			return 114;
		case -885646667:
			return 67;
		case -837774766:
			return 78;
		case -813902658:
			return 182;
		case -799500009:
			return 145;
		case -751329575:
			return 139;
		case -711254121:
			return 132;
		case -660114191:
			return 31;
		case -649929946:
			return 53;
		case -636552746:
			return 123;
		case -587737142:
			return 71;
		case -546870456:
			return 159;
		case -521477124:
			return 82;
		case -481051896:
			return 135;
		case -425216802:
			return 17;
		case -415437740:
			return 103;
		case -415250715:
			return 144;
		case -392183396:
			return 90;
		case -343572565:
			return 21;
		case -340578116:
			return 169;
		case -286632741:
			return 8;
		case -267135864:
			return 138;
		case -233204301:
			return 105;
		case -203268054:
			return 143;
		case -161625840:
			return 177;
		case -126580932:
			return 0;
		case -117284255:
			return 122;
		case -60432888:
			return 44;
		case -56802666:
			return 102;
		case -47513954:
			return 99;
		case -46116991:
			return 163;
		case -35033037:
			return 133;
		case -33431232:
			return 12;
		case -29822088:
			return 40;
		case 0:
			return 1;
		case 1213703:
			return 154;
		case 54499763:
			return 98;
		case 111084081:
			return 56;
		case 114587291:
			return 29;
		case 149216078:
			return 57;
		case 168336706:
			return 149;
		case 173401469:
			return 100;
		case 180714777:
			return 81;
		case 268103762:
			return 97;
		case 282858309:
			return 183;
		case 320758674:
			return 158;
		case 352539363:
			return 179;
		case 362862598:
			return 170;
		case 398279342:
			return 34;
		case 408582472:
			return 5;
		case 420477860:
			return 25;
		case 456199285:
			return 168;
		case 509781427:
			return 93;
		case 550487527:
			return 35;
		case 576694808:
			return 175;
		case 638586808:
			return 118;
		case 659100749:
			return 59;
		case 666050502:
			return 65;
		case 698214003:
			return 2;
		case 713106899:
			return 36;
		case 780689752:
			return 3;
		case 791791441:
			return 125;
		case 797908556:
			return 42;
		case 798283666:
			return 141;
		case 807983049:
			return 150;
		case 839199173:
			return 91;
		case 846387993:
			return 14;
		case 852774198:
			return 113;
		case 878491929:
			return 33;
		case 887717126:
			return 66;
		case 926420921:
			return 51;
		case 946848176:
			return 68;
		case 952755846:
			return 24;
		case 955999834:
			return 134;
		case 956867472:
			return 9;
		case 1036630721:
			return 10;
		case 1037792287:
			return 140;
		case 1052684812:
			return 87;
		case 1075856357:
			return 95;
		case 1078589127:
			return 46;
		case 1095779900:
			return 22;
		case 1110815339:
			return 152;
		case 1138017610:
			return 11;
		case 1156950836:
			return 83;
		case 1195903441:
			return 52;
		case 1278022357:
			return 48;
		case 1281707602:
			return 164;
		case 1323028278:
			return 41;
		case 1374979106:
			return 28;
		case 1405624312:
			return 146;
		case 1444077748:
			return 23;
		case 1449867002:
			return 162;
		case 1498983922:
			return 84;
		case 1547488310:
			return 161;
		case 1554410187:
			return 73;
		case 1585362808:
			return 16;
		case 1636352616:
			return 151;
		case 1662680949:
			return 178;
		case 1698995037:
			return 4;
		case 1769731136:
			return 115;
		case 1801131110:
			return 75;
		case 1806354060:
			return 96;
		case 1811663962:
			return 131;
		case 1828803907:
			return 20;
		case 1829805500:
			return 54;
		case 1830494920:
			return 101;
		case 1838787462:
			return 129;
		case 1865781806:
			return 165;
		case 1899963938:
			return 63;
		case 1900141702:
			return 156;
		case 1903067887:
			return 126;
		case 1907663129:
			return 43;
		case 2040423027:
			return 128;
		case 2050123975:
			return 130;
		case 2096770678:
			return 119;
		case 2110112797:
			return 69;
		case 2119170919:
			return 160;
		case 2132307595:
			return 26;
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

bool func_127(int iParam0)
{
	return func_204(iParam0);
}

void func_128(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		if ((*Global_1951255)[iParam0]->f_5 == 5 && !func_81(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, bParam1);
		}
	}
}

void func_129(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1951255)[iParam0]->f_3, bParam1);
	}
}

void func_130(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 || iParam1);
}

void func_131(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 - ((*Global_1951255)[iParam0]->f_1 && iParam1));
}

void func_132(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_133(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_134(int iParam0)
{
	if (!func_205(iParam0))
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

struct<2> func_135(int iParam0)
{
	return *Global_1900736->f_1[iParam0];
}

bool func_136(struct<2> Param0)
{
	return func_206(Param0, 1, 4);
}

float func_137()
{
	return 0.75f;
}

bool func_138(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x4308812a6e9ca62e(iParam0, iParam1);
}

int func_139(int iParam0)
{
	return func_208(func_207(iParam0));
}

bool func_140(int iParam0)
{
	fVar0 = (func_209(iParam0) - _0xdf66a37936d5f3d9(iParam0));
	return fVar0 <= 1f;
}

int func_141()
{
	return &Global_1902818;
}

void func_142(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	iVar0 = func_210(*iParam0);
	iVar1 = func_211(*iParam0);
	iVar2 = func_212(*iParam0);
	iVar3 = func_213(*iParam0);
	iVar4 = func_214(*iParam0);
	iVar5 = func_215(*iParam0);
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
	iVar5 = (iVar5 - iParam1);
	while (iVar5 < 0)
	{
		iParam2++;
		iVar5 += 60;
	}
	iVar4 = (iVar4 - iParam2);
	while (iVar4 < 0)
	{
		iParam3++;
		iVar4 += 60;
	}
	iVar3 = (iVar3 - iParam3);
	while (iVar3 < 0)
	{
		iParam4++;
		iVar3 += 24;
	}
	iVar2 = (iVar2 - iParam4);
	while (iVar2 <= 0)
	{
		iParam5++;
		iVar6 = (iVar1 - 1);
		if (iVar6 < 0)
		{
			iParam6++;
			iVar1 += 12;
		}
		iVar7 = func_216(iVar6, iVar0);
		iVar2 = (iVar2 + iVar7);
	}
	iVar1 = (iVar1 - iParam5);
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 = (iVar0 - iParam6);
	func_217(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_143(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_139(2);
	}
	switch (iParam1)
	{
		case 0:
			return Global_1956200->f_1431.f_6[iParam0]->f_2;
		case 1:
			return Global_1956200->f_1565.f_2.f_6[iParam0]->f_2;
		default:
			break;
	}
	return -1;
}

int func_144(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_139(2);
	}
	switch (iParam1)
	{
		case 0:
			return Global_1956200->f_1431.f_6[iParam0]->f_1;
		case 1:
			return Global_1956200->f_1565.f_2.f_6[iParam0]->f_1;
		default:
			break;
	}
	return -15;
}

bool func_145(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_218(iParam1) || !func_218(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_146(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_139(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1956200->f_1431.f_6[iParam0]->f_2 = iParam1;
			break;
		case 1:
			Global_1956200->f_1565.f_2.f_6[iParam0]->f_2 = iParam1;
			break;
		default:
			break;
	}
}

void func_147(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_139(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1956200->f_1431.f_6[iParam0]->f_1 = iParam1;
			break;
		case 1:
			Global_1956200->f_1565.f_2.f_6[iParam0]->f_1 = iParam1;
			break;
		default:
			break;
	}
}

bool func_148(int iParam0, int iParam1, float fParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (fParam2 > 100f)
	{
		fParam2 = 100f;
	}
	else if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	_set_attribute_core_value(iParam0, func_219(iParam1), ceil(fParam2));
	return true;
}

void func_149(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_139(2);
	}
	if (iParam1 > 0)
	{
		iParam1 = (iParam1 + get_game_timer());
	}
	switch (iParam2)
	{
		case 0:
			Global_1956200->f_1431.f_16[iParam0] = iParam1;
			break;
		case 1:
			Global_1956200->f_1565.f_2.f_16[iParam0] = iParam1;
			break;
		default:
			break;
	}
}

void func_150(int iParam0, int iParam1, float fParam2)
{
	sVar0 = func_220(iParam1);
	if (!is_string_null_or_empty(sVar0))
	{
		_0x437c08db4febe2bd(iParam0, func_221(iParam1), fParam2, -1);
	}
}

void func_151(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	if (iParam3 == 2)
	{
		iParam3 = func_139(2);
	}
	uVar0 = Global_1296859->f_21;
	func_222(iParam0, fParam1, iParam3);
	if (bParam2)
	{
		func_223(iParam0, uVar0, iParam3);
	}
}

bool func_152(int iParam0, bool bParam1)
{
	return func_145(func_141(), iParam0, bParam1);
}

float func_153(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_139(1);
	}
	switch (iParam1)
	{
		case 0:
			return &(Global_1956200->f_1431.f_26[iParam0]);
		case 1:
			return &(Global_1956200->f_1565.f_2.f_26[iParam0]);
		default:
			break;
	}
	return -1f;
}

int func_154(float fParam0)
{
	fVar0 = fParam0;
	fVar0 = ((2f * fVar0) - 100f);
	return round(((fVar0 / 100f) * to_float(10)));
}

float func_155(float fParam0, float fParam1, float fParam2)
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

void func_156(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_210(*iParam0);
	iVar1 = func_211(*iParam0);
	iVar2 = func_212(*iParam0);
	iVar3 = func_213(*iParam0);
	iVar4 = func_214(*iParam0);
	iVar5 = func_215(*iParam0);
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
	iVar6 = func_216(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_216(iVar1, iVar0);
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
	func_217(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_157(int iParam0, float fParam1, int iParam2)
{
	if (!func_224(iParam0))
	{
		return 0;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_139(2);
	}
	func_225(iParam0, fParam1, iParam2);
	if (!is_entity_dead(Global_1296859->f_8))
	{
		set_attribute_points(Global_1296859->f_8, iParam0, floor(fParam1));
	}
	return 1;
}

void func_158(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_159(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_226(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_227(iParam0))
	{
		return false;
	}
	if (func_228(iParam0))
	{
		return false;
	}
	if ((Global_1900736->f_67 && !func_229(iParam0, 1)) || func_230(32768))
	{
		if (!func_229(iParam0, 262144) || !Global_1904651->f_8686)
		{
			return false;
		}
	}
	if (!func_231())
	{
		return false;
	}
	return true;
}

void func_160(int iParam0, int iParam1)
{
	uVar0 = Global_1904651[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1904651)[iParam0] = uVar0;
}

bool func_161(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return true;
		case 0:
			return true;
		case 2:
			return true;
		default:
			break;
	}
	return false;
}

char* func_162(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PlayerOverpower";
		case 1:
			return "PlayerOverpower";
		case 2:
			return "PlayerOverpower";
		default:
			break;
	}
	return "";
}

void func_163(int iParam0)
{
	iVar0 = player_ped_id();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = _0x16f2c8c084ab2092(iVar0);
	}
	iVar1 = func_91(2);
	func_92(to_float((iParam0 * iVar1)), 0);
}

void func_164(int iParam0)
{
	iVar0 = player_ped_id();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = _0xfc3b580c4380b5b7(iVar0);
	}
	iVar1 = func_95(2);
	func_96(to_float((iParam0 * iVar1)), 0);
}

void func_165(int iParam0, bool bParam1)
{
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = 10;
	}
	iVar0 = func_93(2);
	func_94(to_float((iParam0 * iVar0)), 0, bParam1);
}

void func_166(int iParam0, bool bParam1, bool bParam2)
{
	func_99(iParam0, 100f, bParam1, bParam2, 1, 2);
}

int func_167(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return -932875117;
		case 3:
			return 1660962977;
		case 4:
			return -131409450;
		case 5:
			return -1487527516;
		case 6:
			return 561629573;
		case 7:
			return 1829679323;
		case 8:
			return -618617794;
		case 11:
			return 653458791;
		case 12:
			return 437319607;
		case 13:
			return -1519488075;
		case 15:
			return 1014445254;
		case 16:
			return 224814421;
		case 18:
			return 1012187868;
		case 19:
			return 1516353659;
		case 20:
			return -1040706491;
		case 21:
			return -1910627346;
		case 24:
			return -1812487593;
		case 27:
			return 1983971282;
		case 28:
			return 1561519041;
		case 29:
			return -980496853;
		case 30:
			return -1738887126;
		case 32:
			return 424771379;
		case 34:
			return 787316814;
		case 35:
			return 984616481;
		case 38:
			return 1078285403;
		case 39:
			return -262897007;
		case 49:
			return -1727702531;
		case 50:
			return 1783324404;
		case 51:
			return 1288848815;
		case 52:
			return 918090738;
		case 53:
			return 170272501;
		case 1:
			return 2056650000;
		case 9:
			return -1195354638;
		case 10:
			return 1077596967;
		case 14:
			return -2145199848;
		case 17:
			return 752824478;
		case 22:
			return -819513569;
		case 23:
			return 1906968775;
		case 25:
			return -135434663;
		case 26:
			return 920123680;
		case 31:
			return 150470908;
		case 33:
			return -1665125257;
		case 36:
			return 1587928307;
		case 37:
			return -1738925422;
		case 40:
			return 656594395;
		case 42:
			return -1174738785;
		case 43:
			return 1073505629;
		case 41:
			return -658674894;
		case 44:
			return -1504155535;
		case 45:
			return -1917345716;
		case 46:
			return 1823406682;
		case 47:
			return -1003637772;
		case 48:
			return -1571524081;
	}
	return 0;
}

struct<2> func_168(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

int func_169(int iParam0, int iParam1)
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

bool func_170(int iParam0)
{
	if (!_0x7907969497ea92f5(Global_1071686->f_28448[51]->f_3))
	{
		return false;
	}
	if (!_0x603ac35fd4602c76(Global_1071686->f_28448[51]->f_3))
	{
		return false;
	}
	return true;
}

var func_171(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = iParam1;
	if (_datafile_get_hash(&uVar0, uParam0))
	{
	}
	return uVar0;
}

void func_172(var uParam0)
{
	Global_1952637->f_1 = uParam0;
}

void func_173()
{
	func_232(128);
}

void func_174(int iParam0)
{
	Global_1952637 = (&Global_1952637 - (Global_1952637 && iParam0));
}

bool func_175(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 2026485318:
			*uParam1 = -171876066;
			break;
		case 24043185:
			*uParam1 = -1481695040;
			break;
		default:
			iVar0 = func_233(0, iParam0);
			if (iVar0 != -1)
			{
				*uParam1 = func_234(iVar0);
			}
			else
			{
				*uParam1 = -171876066;
				return false;
			}
			break;
	}
	return true;
}

var func_176(int iParam0)
{
	if (!func_109(&Var2))
	{
		return 0;
	}
	if (!func_110(&Var2, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_110(&Var2, 37, 0, 0, 1))
	{
		return 0;
	}
	if (!func_110(&Var2, 40, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_110(&Var2, 59, 0, 0, 1))
	{
		return 0;
	}
	iVar1 = func_235(&Var2, 12);
	iVar0 = get_random_int_in_range(0, iVar1);
	if (!func_110(&Var2, 60, iVar0, 0, 1))
	{
		return 0;
	}
	return func_236(Var2);
}

void func_177(var uParam0)
{
	Global_1952637->f_3 = uParam0;
}

int func_178(int iParam0)
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

bool func_179(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_180(int iParam0)
{
	if (func_237(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

void func_181(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_238(iParam0);
	if (!func_239(1))
	{
		return;
	}
	if (bParam1)
	{
		do_screen_fade_out(iParam2);
	}
	else if (!func_240(128) && !func_241(19))
	{
		do_screen_fade_out(iParam2);
	}
	if (bParam3 && func_242() == 4)
	{
		func_180(18);
	}
	func_243(1024);
}

int func_182(int iParam0)
{
	if (func_244(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

void func_183(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_184(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_185(struct<29> Param0, var uParam29, int iParam30)
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

void func_186(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

int func_187(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2137819446:
			return 100;
		case -2131931188:
			return 136;
		case -2130179962:
			return 63;
		case -2082434331:
			return 152;
		case -2059502051:
			return 65;
		case -2056449621:
			return 93;
		case -2038430863:
			return 151;
		case -1973221270:
			return 64;
		case -1969715419:
			return 35;
		case -1968787770:
			return 6;
		case -1957895818:
			return 56;
		case -1952291530:
			return 139;
		case -1950424573:
			return 54;
		case -1910888845:
			return 110;
		case -1883405573:
			return 78;
		case -1844803100:
			return 80;
		case -1831687141:
			return 62;
		case -1810408560:
			return 73;
		case -1805785047:
			return 41;
		case -1759910473:
			return 25;
		case -1756646040:
			return 92;
		case -1741565123:
			return 47;
		case -1609480552:
			return 61;
		case -1596526341:
			return 3;
		case -1573606823:
			return 49;
		case -1510695159:
			return 148;
		case -1504620904:
			return 107;
		case -1462866101:
			return 111;
		case -1405836475:
			return 55;
		case -1360021450:
			return 9;
		case -1356583879:
			return 137;
		case -1246069683:
			return 124;
		case -1242362177:
			return 46;
		case -1235458416:
			return 74;
		case -1234968784:
			return 69;
		case -1234548949:
			return 7;
		case -1143906885:
			return 131;
		case -1140308479:
			return 143;
		case -1105699593:
			return 153;
		case -1047626954:
			return 118;
		case -1008191715:
			return 1;
		case -985141745:
			return 79;
		case -980934770:
			return 125;
		case -974857798:
			return 140;
		case -914097888:
			return 132;
		case -900341092:
			return 142;
		case -859661758:
			return 60;
		case -821191074:
			return 115;
		case -810885450:
			return 40;
		case -750368411:
			return 48;
		case -691826426:
			return 77;
		case -608746625:
			return 17;
		case -567710817:
			return 2;
		case -565327488:
			return 72;
		case -559775780:
			return 121;
		case -549372097:
			return 59;
		case -455491084:
			return 85;
		case -447950391:
			return 94;
		case -418060375:
			return 4;
		case -391691334:
			return 68;
		case -375368707:
			return 58;
		case -357713093:
			return 128;
		case -336340230:
			return 119;
		case -309456186:
			return 10;
		case -300915357:
			return 146;
		case -252777454:
			return 135;
		case -193167881:
			return 127;
		case -190717545:
			return 30;
		case -179898515:
			return 122;
		case -179343615:
			return 150;
		case -132268497:
			return 141;
		case -120658935:
			return 67;
		case -97080319:
			return 43;
		case -93340399:
			return 106;
		case -2338369:
			return 39;
		case -1:
			return 0;
		case 18275459:
			return 8;
		case 47725914:
			return 11;
		case 130533095:
			return 126;
		case 151887407:
			return 18;
		case 153569762:
			return 44;
		case 158579484:
			return 117;
		case 163503896:
			return 101;
		case 183566846:
			return 15;
		case 193887912:
			return 113;
		case 225804550:
			return 133;
		case 267361268:
			return 86;
		case 272084311:
			return 71;
		case 312483235:
			return 29;
		case 349431355:
			return 105;
		case 350943398:
			return 102;
		case 383280474:
			return 12;
		case 467901857:
			return 51;
		case 508502713:
			return 134;
		case 548902645:
			return 109;
		case 549687162:
			return 145;
		case 591249118:
			return 28;
		case 611341556:
			return 16;
		case 618168626:
			return 26;
		case 620773281:
			return 98;
		case 668358831:
			return 149;
		case 677513315:
			return 45;
		case 713112284:
			return 50;
		case 722162219:
			return 88;
		case 730253571:
			return 36;
		case 731266401:
			return 90;
		case 785001351:
			return 144;
		case 793035862:
			return 81;
		case 802887669:
			return 114;
		case 808176588:
			return 116;
		case 828060856:
			return 38;
		case 837742789:
			return 70;
		case 900184247:
			return 21;
		case 924932702:
			return 14;
		case 969398724:
			return 89;
		case 1014273190:
			return 96;
		case 1033330939:
			return 82;
		case 1034286944:
			return 87;
		case 1123546272:
			return 104;
		case 1130659268:
			return 123;
		case 1138545953:
			return 20;
		case 1157170123:
			return 75;
		case 1159895828:
			return 31;
		case 1296512587:
			return 97;
		case 1377989036:
			return 19;
		case 1423325819:
			return 32;
		case 1476796894:
			return 24;
		case 1486559056:
			return 129;
		case 1493749872:
			return 112;
		case 1500545235:
			return 138;
		case 1507470319:
			return 83;
		case 1543468593:
			return 147;
		case 1568867811:
			return 57;
		case 1625043854:
			return 22;
		case 1667258255:
			return 33;
		case 1695199279:
			return 130;
		case 1699722938:
			return 13;
		case 1746978940:
			return 84;
		case 1764814366:
			return 95;
		case 1767031434:
			return 120;
		case 1775828486:
			return 103;
		case 1830439946:
			return 23;
		case 1851839077:
			return 99;
		case 1860260195:
			return 66;
		case 1885285188:
			return 52;
		case 1905466026:
			return 27;
		case 1925734249:
			return 76;
		case 1938325642:
			return 5;
		case 2079700825:
			return 42;
		case 2081475118:
			return 37;
		case 2093509505:
			return 34;
		case 2100718034:
			return 108;
		case 2117355246:
			return 53;
		case 2146493981:
			return 91;
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

int func_188(int iParam0, int iParam1)
{
	iVar0 = func_245(iParam0);
	iVar1 = &Global_1296859;
	iVar2 = func_191(iParam1, 1);
	switch (Global_1146212->f_35859.f_3116[iVar2]->f_1)
	{
		case -1912291748:
			if (iVar1 == iVar0)
			{
				return 0;
			}
			else
			{
				return 2;
			}
			break;
		case -619998507:
		case -594821844:
		case 348502922:
		case 1002704651:
		case 1270499458:
			return 1;
		default:
			if (iVar1 == iVar0)
			{
				return 1;
			}
			break;
	}
	return 2;
}

int func_189(int iParam0, int iParam1, int iParam2)
{
	if (!func_117(iParam1))
	{
		return 0;
	}
	if (!func_246(iParam0))
	{
		return 0;
	}
	iVar0 = func_191(iParam0, 1);
	func_247(iParam0, iParam1, iParam2);
	if (func_248(*Global_1146212->f_35859.f_3116[iVar0]) && func_249(iParam0, Global_1146212->f_35859.f_3116[iVar0]->f_4))
	{
		vVar1 = { func_250(Global_1146212->f_35859.f_3116[iVar0]->f_4) };
		if (func_251(vVar1))
		{
			if (func_252(vVar1.x, vVar1.y, vVar1.z))
			{
				func_253(Global_1146212->f_35859.f_3116[iVar0]->f_4, vVar1.x, vVar1.y, vVar1.z);
			}
			else
			{
				func_254(Global_1146212->f_35859.f_3116[iVar0]->f_4);
			}
		}
		else
		{
			func_254(Global_1146212->f_35859.f_3116[iVar0]->f_4);
		}
	}
	return 1;
}

void func_190(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = -1;
}

int func_191(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2139291255:
			return 145;
		case -2133203822:
			return 108;
		case -2119961771:
			return 90;
		case -2117138640:
			return 79;
		case -2115524796:
			return 60;
		case -2108980762:
			return 137;
		case -2088744988:
			return 91;
		case -2056483403:
			return 75;
		case -2019073637:
			return 198;
		case -2008161946:
			return 26;
		case -2006179687:
			return 180;
		case -1961023994:
			return 92;
		case -1958950493:
			return 194;
		case -1954641284:
			return 28;
		case -1946267644:
			return 130;
		case -1925826694:
			return 49;
		case -1920322236:
			return 22;
		case -1886192107:
			return 55;
		case -1854279248:
			return 6;
		case -1853627206:
			return 134;
		case -1851126253:
			return 29;
		case -1847886830:
			return 16;
		case -1841577353:
			return 112;
		case -1840959475:
			return 106;
		case -1808210911:
			return 30;
		case -1803458707:
			return 8;
		case -1761885354:
			return 111;
		case -1749044999:
			return 96;
		case -1698597704:
			return 45;
		case -1631537135:
			return 63;
		case -1599892133:
			return 38;
		case -1514337705:
			return 188;
		case -1498884346:
			return 156;
		case -1448841146:
			return 50;
		case -1445919747:
			return 117;
		case -1441068914:
			return 39;
		case -1426414385:
			return 182;
		case -1421504146:
			return 109;
		case -1419242781:
			return 33;
		case -1394912816:
			return 199;
		case -1391351739:
			return 166;
		case -1378028573:
			return 27;
		case -1370534631:
			return 110;
		case -1327315394:
			return 1;
		case -1311380047:
			return 46;
		case -1299791944:
			return 2;
		case -1280685390:
			return 132;
		case -1268916163:
			return 119;
		case -1256990268:
			return 76;
		case -1139172958:
			return 61;
		case -1112015628:
			return 173;
		case -1094465110:
			return 47;
		case -1038422902:
			return 74;
		case -1011126213:
			return 31;
		case -964953325:
			return 123;
		case -955252868:
			return 124;
		case -932897324:
			return 11;
		case -931584677:
			return 103;
		case -925634234:
			return 21;
		case -750441842:
			return 184;
		case -749371485:
			return 164;
		case -649515024:
			return 142;
		case -624920400:
			return 81;
		case -612675573:
			return 148;
		case -572117096:
			return 193;
		case -562496675:
			return 57;
		case -562150430:
			return 181;
		case -560965516:
			return 48;
		case -554207528:
			return 59;
		case -539762089:
			return 97;
		case -529396121:
			return 185;
		case -454200664:
			return 104;
		case -440727241:
			return 19;
		case -423133485:
			return 133;
		case -403292810:
			return 113;
		case -398496662:
			return 23;
		case -343145237:
			return 160;
		case -342633876:
			return 5;
		case -334674962:
			return 13;
		case -332283977:
			return 66;
		case -306011710:
			return 4;
		case -280832639:
			return 51;
		case -276166656:
			return 172;
		case -269291543:
			return 68;
		case -254950601:
			return 152;
		case -242870769:
			return 163;
		case -206787059:
			return 35;
		case -164741307:
			return 105;
		case -158245263:
			return 41;
		case -147416760:
			return 155;
		case -124368414:
			return 197;
		case -106398498:
			return 153;
		case -97000889:
			return 86;
		case -91604267:
			return 169;
		case -1:
			return 0;
		case 25589062:
			return 56;
		case 39330853:
			return 125;
		case 78014060:
			return 9;
		case 81243326:
			return 69;
		case 141777963:
			return 15;
		case 183131704:
			return 177;
		case 200623432:
			return 64;
		case 221495846:
			return 175;
		case 224471061:
			return 98;
		case 233412256:
			return 77;
		case 275909046:
			return 151;
		case 279713143:
			return 171;
		case 285724035:
			return 54;
		case 302482713:
			return 136;
		case 347710188:
			return 89;
		case 350341162:
			return 127;
		case 447464746:
			return 129;
		case 558636891:
			return 187;
		case 570385280:
			return 196;
		case 593083875:
			return 80;
		case 634217179:
			return 150;
		case 639606025:
			return 70;
		case 654960265:
			return 95;
		case 668064801:
			return 195;
		case 671416267:
			return 107;
		case 673708797:
			return 139;
		case 694721787:
			return 20;
		case 702532569:
			return 82;
		case 720207812:
			return 178;
		case 724367341:
			return 65;
		case 726043209:
			return 58;
		case 728769635:
			return 83;
		case 756791452:
			return 149;
		case 763061271:
			return 18;
		case 775646007:
			return 102;
		case 783509408:
			return 170;
		case 794883372:
			return 186;
		case 805902559:
			return 84;
		case 817456409:
			return 100;
		case 835146902:
			return 192;
		case 841152146:
			return 93;
		case 886162534:
			return 131;
		case 937140932:
			return 183;
		case 997052462:
			return 157;
		case 1034295275:
			return 17;
		case 1040501041:
			return 122;
		case 1093424641:
			return 115;
		case 1139016431:
			return 34;
		case 1144080006:
			return 32;
		case 1171151366:
			return 43;
		case 1175961229:
			return 138;
		case 1193587137:
			return 176;
		case 1201719505:
			return 42;
		case 1203687692:
			return 10;
		case 1208331227:
			return 12;
		case 1211076549:
			return 73;
		case 1256374770:
			return 165;
		case 1265311313:
			return 36;
		case 1268462011:
			return 37;
		case 1294394742:
			return 190;
		case 1295163466:
			return 114;
		case 1300622865:
			return 99;
		case 1305406380:
			return 162;
		case 1312155508:
			return 144;
		case 1324420970:
			return 25;
		case 1328995848:
			return 88;
		case 1336349861:
			return 143;
		case 1336429519:
			return 140;
		case 1390582854:
			return 94;
		case 1413720692:
			return 168;
		case 1433853218:
			return 85;
		case 1452940977:
			return 87;
		case 1462245043:
			return 154;
		case 1480202237:
			return 189;
		case 1482822775:
			return 146;
		case 1514854451:
			return 191;
		case 1522457772:
			return 147;
		case 1523275824:
			return 62;
		case 1524301922:
			return 78;
		case 1557116130:
			return 126;
		case 1557362410:
			return 116;
		case 1578015076:
			return 72;
		case 1578708778:
			return 67;
		case 1596748830:
			return 101;
		case 1608803012:
			return 128;
		case 1644017723:
			return 158;
		case 1687654048:
			return 71;
		case 1704907062:
			return 179;
		case 1726722300:
			return 135;
		case 1744707601:
			return 3;
		case 1746613639:
			return 121;
		case 1767173923:
			return 141;
		case 1798083308:
			return 24;
		case 1813411238:
			return 167;
		case 1835150954:
			return 40;
		case 1903955831:
			return 7;
		case 1913593527:
			return 53;
		case 1930815945:
			return 118;
		case 1938151130:
			return 44;
		case 1976949991:
			return 161;
		case 2028487040:
			return 52;
		case 2051020894:
			return 174;
		case 2081856931:
			return 120;
		case 2113464199:
			return 159;
		case 2126590447:
			return 14;
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

void func_192(int iParam0, int iParam1)
{
	Global_1146212->f_35859.f_3116[iParam0]->f_29 = (Global_1146212->f_35859.f_3116[iParam0]->f_29 + iParam1);
}

void func_193(int iParam0, int iParam1)
{
	Global_1146212->f_35859.f_3116[iParam0]->f_29 = iParam1;
}

void func_194(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0]->f_1 = 0;
		iVar0++;
	}
}

int func_195(int iParam0, int iParam1)
{
	iVar0 = func_245(iParam0);
	iVar1 = &Global_1296859;
	iVar2 = func_191(iParam1, 1);
	switch (&Global_1146212->f_35859.f_3116[iVar2])
	{
		case 979390476:
			if (iVar1 == iVar0)
			{
				return 0;
			}
			else
			{
				return 2;
			}
			break;
		case -2139108927:
		case -2129621195:
		case -1503245593:
		case 190804938:
			return 1;
		default:
			if (iVar1 == iVar0)
			{
				return 1;
			}
			break;
	}
	return 2;
}

int func_196(int iParam0, int iParam1, int iParam2)
{
	if (!func_117(iParam1))
	{
		return 0;
	}
	if (!func_246(iParam0))
	{
		return 0;
	}
	iVar0 = func_191(iParam0, 1);
	if (!func_255(iParam2))
	{
		return 0;
	}
	bVar1 = func_248(*Global_1146212->f_35859.f_3116[iVar0]);
	if (bVar1 && func_256(Global_1146212->f_35859.f_3116[iVar0]->f_4))
	{
		vVar2 = { func_257(Global_1146212->f_35859.f_3116[iVar0]->f_4) };
		if (!func_247(vVar2.x, vVar2.y, vVar2.z))
		{
			return 0;
		}
	}
	if (func_252(iParam0, iParam1, iParam2))
	{
		if (bVar1)
		{
			func_253(Global_1146212->f_35859.f_3116[iVar0]->f_4, iParam0, iParam1, iParam2);
		}
		return 1;
	}
	return 0;
}

bool func_197(int iParam0)
{
	iVar0 = func_126(iParam0, 1);
	if (iVar0 >= 2 && iVar0 <= 129)
	{
		return true;
	}
	return false;
}

bool func_198(int iParam0)
{
	iVar0 = func_126(iParam0, 1);
	if (iVar0 >= 130 && iVar0 <= 149)
	{
		return true;
	}
	return false;
}

bool func_199(int iParam0)
{
	iVar0 = func_126(iParam0, 1);
	if (iVar0 >= 166 && iVar0 <= 166)
	{
		return true;
	}
	return false;
}

bool func_200(int iParam0)
{
	iVar0 = func_126(iParam0, 1);
	if (iVar0 >= 167 && iVar0 <= 171)
	{
		return true;
	}
	return false;
}

bool func_201(int iParam0)
{
	iVar0 = func_126(iParam0, 1);
	if (iVar0 >= 172 && iVar0 <= 179)
	{
		return true;
	}
	return false;
}

bool func_202(int iParam0)
{
	iVar0 = func_126(iParam0, 1);
	if (iVar0 >= 150 && iVar0 <= 165)
	{
		return true;
	}
	return false;
}

void func_203(int iParam0)
{
	if (does_entity_exist(player_ped_id()))
	{
		if (iParam0 == 1)
		{
			decor_set_bool(player_ped_id(), "Inspecting_Item", true);
		}
		else if (decor_exist_on(player_ped_id(), "Inspecting_Item"))
		{
			decor_remove(player_ped_id(), "Inspecting_Item");
		}
	}
}

bool func_204(int iParam0)
{
	return func_19(Global_1940144->f_38, iParam0);
}

bool func_205(int iParam0)
{
	return func_81(iParam0, 2);
}

bool func_206(struct<2> Param0, int iParam2, int iParam3)
{
	if (!func_258(Param0))
	{
		return false;
	}
	if (Param0 != 2)
	{
		return false;
	}
	iVar0 = func_259(Param0);
	return (iVar0 >= iParam2 && iVar0 <= iParam3);
}

bool func_207(int iParam0)
{
	return func_260(&(Global_1956200->f_1565), iParam0, 1);
}

int func_208(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

float func_209(int iParam0)
{
	return (_0x592f58bc4d2a2cf3(iParam0, 0) - IntToFloat(func_261(2)));
}

int func_210(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_262(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_211(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_212(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_213(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_214(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_215(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_216(int iParam0, int iParam1)
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

void func_217(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_263(iParam0, iParam6);
	func_264(iParam0, iParam5);
	func_265(iParam0, iParam4);
	func_266(iParam0, iParam3);
	func_267(iParam0, iParam2);
	func_268(iParam0, iParam1);
}

bool func_218(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_215(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_214(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_213(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_210(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_211(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_212(iParam0);
	if (iVar5 < 1 || iVar5 > func_216(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

int func_219(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 0;
		case 2:
			return 2;
		default:
			break;
	}
	return 0;
}

char* func_220(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HealthCoreValue";
		case 1:
			return "StaminaCoreValue";
		case 2:
			return "DeadEyeCoreValue";
		default:
			break;
	}
	return "";
}

char* func_221(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "isLowHealthCoreActive";
		case 1:
			return "isLowStaminaCoreActive";
		case 2:
			return "isLowDeadEyeCoreActive";
		default:
			break;
	}
	return "";
}

void func_222(int iParam0, float fParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_139(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1956200->f_1431.f_6[iParam0] = fParam1;
			break;
		case 1:
			Global_1956200->f_1565.f_2.f_6[iParam0] = fParam1;
			break;
		default:
			break;
	}
}

void func_223(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_139(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1956200->f_1431.f_16[iParam0]->f_2 = uParam1;
			break;
		case 1:
			Global_1956200->f_1565.f_2.f_16[iParam0]->f_2 = uParam1;
			break;
		default:
			break;
	}
}

bool func_224(int iParam0)
{
	if (func_161(iParam0))
	{
		return true;
	}
	else if (func_269(iParam0))
	{
		return true;
	}
	return false;
}

void func_225(int iParam0, float fParam1, int iParam2)
{
	if (fParam1 < 0f)
	{
		return;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_139(1);
	}
	switch (iParam2)
	{
		case 0:
			Global_1956200->f_1431.f_26[iParam0] = fParam1;
			break;
		case 1:
			Global_1956200->f_1565.f_2.f_26[iParam0] = fParam1;
			break;
		default:
			break;
	}
}

bool func_226(int iParam0, int iParam1)
{
	return is_bit_set(&(Global_17411.f_2565[iParam0]), iParam1);
}

bool func_227(int iParam0)
{
	if (func_229(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_228(int iParam0)
{
	if (Global_1904651->f_33[iParam0]->f_2 & 98304 == 0)
	{
		return false;
	}
	iVar1 = get_cloud_time_as_int();
	iVar0 = 0;
	while (iVar0 < Global_39.f_3534)
	{
		if (Global_39.f_3534[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (Global_1904651->f_33[iParam0]->f_2 & 131072 != 0)
			{
				iVar3 = 2;
			}
			if (Global_1904651->f_33[iParam0]->f_2 & 524288 != 0)
			{
				iVar3 = 5;
			}
			iVar2 = (&Global_39.f_3534[iVar0] - iVar1);
			if (Global_39.f_3534[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && Global_1904651->f_33[iParam0]->f_2 & 32768 != 0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_229(int iParam0, int iParam1)
{
	return (Global_1904651->f_33[iParam0]->f_2 && iParam1) != 0;
}

bool func_230(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_231()
{
	if (!func_270())
	{
		return false;
	}
	return Global_1904651->f_8684;
}

void func_232(int iParam0)
{
	func_4(Global_1301321, iParam0);
}

var func_233(int iParam0, int iParam1)
{
	iVar0 = func_271(iParam0, 0, Global_1301323->f_52.f_31, iParam1);
	if (iVar0 == -1)
	{
		return -1;
	}
	return func_272(iParam0, iVar0);
}

var func_234(int iParam0)
{
	return Global_1301323->f_52[iParam0]->f_1;
}

var func_235(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
	return _datafile_get_num_nodes(uParam0);
}

var func_236(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_171(&uParam0, 61, 0);
}

bool func_237(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	clear_bit((*uParam0)[iVar0], iVar1);
	return bVar2;
}

void func_238(int iParam0)
{
	Global_1102219->f_26.f_12 = iParam0;
}

bool func_239(int iParam0)
{
	return (Global_1102219->f_26.f_7 && iParam0) != 0;
}

bool func_240(int iParam0)
{
	return (Global_1102219->f_26.f_9 && iParam0) != 0;
}

bool func_241(int iParam0)
{
	return (Global_1102219->f_4[Global_1106305[iParam0]] && (*Global_1106305)[iParam0]->f_1) == (*Global_1106305)[iParam0]->f_1;
}

int func_242()
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

void func_243(int iParam0)
{
	if (func_273(iParam0))
	{
		return;
	}
	Global_1102219->f_26.f_9 = (Global_1102219->f_26.f_9 || iParam0);
}

bool func_244(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

int func_245(int iParam0)
{
	if (func_197(iParam0))
	{
		return (func_121(iParam0) % 32);
	}
	return &Global_1296859;
}

bool func_246(int iParam0)
{
	iVar0 = func_191(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 199)
	{
		return false;
	}
	return true;
}

bool func_247(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_126(iParam1, 1);
	iVar1 = func_191(iParam0, 1);
	iVar2 = func_187(&(Global_1146212->f_35859.f_919[iVar0]), 1);
	if (Global_1146212->f_35859[iVar2][iParam2] != iParam0)
	{
		return false;
	}
	if (!&Global_1146212->f_35859.f_919[iVar0]->f_1[iParam2])
	{
		return true;
	}
	Global_1146212->f_35859.f_919[iVar0]->f_1[iParam2] = 0;
	iVar4 = 0;
	while (iVar4 < Global_1146212->f_35859.f_3116[iVar1]->f_16)
	{
		iVar3 = &Global_1146212->f_35859.f_3116[iVar1]->f_6[iVar4];
		iVar5 = func_274(iVar3, 1);
		if (!func_275(iVar3))
		{
		}
		else
		{
			Global_1146212->f_2169[iVar5]->f_1[iVar1] = (&Global_1146212->f_2169[iVar5]->f_1[iVar1] - 1);
			Global_1146212->f_2169[iVar5]->f_201 = (Global_1146212->f_2169[iVar5]->f_201 - func_276(Global_1146212->f_35859.f_3116[iVar1]->f_6[iVar4]));
			func_277(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < Global_1146212->f_35859.f_3116[iVar1]->f_28)
	{
		iVar6 = &Global_1146212->f_35859.f_3116[iVar1]->f_17[iVar7];
		if (!func_278(iVar6))
		{
		}
		else
		{
			iVar8 = func_279(iVar6, 1);
			(*Global_1146212->f_21645[iVar8])[iVar1] = (Global_1146212->f_21645[iVar8][iVar1] - 1);
			if (Global_1146212->f_21645[iVar8][iVar1] <= 0)
			{
				_0xb909149f2bb5f6da(&(Global_1146212->f_21645[iVar8]->f_200), iVar1);
			}
			if (!_0x80e9c316ef84dd81(&(Global_1146212->f_21645[iVar8]->f_200)))
			{
				Global_1146212->f_21645[iVar8]->f_208 = 0;
				func_280(iVar6);
			}
		}
		iVar7++;
	}
	return true;
}

bool func_248(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
{
	return Param0.f_4 != 0;
}

bool func_249(int iParam0, int iParam1)
{
	if (!func_246(iParam0))
	{
		return false;
	}
	if (!func_281(iParam1))
	{
		return false;
	}
	iVar0 = func_282(iParam1, 1);
	return &Global_1146212->f_35859.f_9286[iVar0] == iParam0;
}

Vector3 func_250(int iParam0)
{
	iVar0 = func_283(iParam0);
	if (iVar0 == -1)
	{
		vVar1 = -1;
		vVar1.f_2 = -1;
		return vVar1;
	}
	return *Global_1146212->f_35859.f_9503[iVar0];
}

bool func_251(vector3 vParam0)
{
	if (!func_246(vParam0.x))
	{
		return false;
	}
	if (!func_117(vParam0.y))
	{
		return false;
	}
	if (!func_255(vParam0.z))
	{
		return false;
	}
	return true;
}

bool func_252(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_126(iParam1, 1);
	iVar1 = func_191(iParam0, 1);
	iVar2 = func_187(&(Global_1146212->f_35859.f_919[iVar0]), 1);
	if (Global_1146212->f_35859[iVar2][iParam2] != iParam0)
	{
		return false;
	}
	Global_1146212->f_35859.f_919[iVar0]->f_1[iParam2]->f_1 = Global_1296859->f_21;
	if (&Global_1146212->f_35859.f_919[iVar0]->f_1[iParam2])
	{
		return true;
	}
	Global_1146212->f_35859.f_919[iVar0]->f_1[iParam2] = 1;
	iVar4 = 0;
	while (iVar4 < Global_1146212->f_35859.f_3116[iVar1]->f_16)
	{
		iVar3 = &Global_1146212->f_35859.f_3116[iVar1]->f_6[iVar4];
		iVar5 = func_274(iVar3, 1);
		if (!func_275(iVar3))
		{
		}
		else
		{
			Global_1146212->f_2169[iVar5]->f_1[iVar1] = &Global_1146212->f_2169[iVar5]->f_1[iVar1] + 1;
			Global_1146212->f_2169[iVar5]->f_201 = (Global_1146212->f_2169[iVar5]->f_201 + func_276(Global_1146212->f_35859.f_3116[iVar1]->f_6[iVar4]));
			func_284(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < Global_1146212->f_35859.f_3116[iVar1]->f_28)
	{
		iVar6 = &Global_1146212->f_35859.f_3116[iVar1]->f_17[iVar7];
		if (!func_278(iVar6))
		{
		}
		else if (!func_285(Global_1146212->f_35859.f_3116[iVar1]->f_17[iVar7]))
		{
		}
		else
		{
			iVar8 = func_279(iVar6, 1);
			(*Global_1146212->f_21645[iVar8])[iVar1] = Global_1146212->f_21645[iVar8][iVar1] + 1;
			_0xe84aac1b22a73e99(&(Global_1146212->f_21645[iVar8]->f_200), iVar1);
			if (!Global_1146212->f_21645[iVar8]->f_208)
			{
				Global_1146212->f_21645[iVar8]->f_208 = 1;
				func_286(iVar6);
			}
		}
		iVar7++;
	}
	func_287(Global_1146212->f_35859.f_3116[iVar1]->f_2);
	return true;
}

void func_253(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!func_281(iParam0))
	{
		return;
	}
	iVar0 = func_282(iParam0, 1);
	if (!func_246(iParam1))
	{
		return;
	}
	if (!func_117(iParam2))
	{
		return;
	}
	if (!func_255(iParam3))
	{
		return;
	}
	Global_1146212->f_35859.f_9286[iVar0] = iParam1;
	Global_1146212->f_35859.f_9286[iVar0]->f_1 = iParam2;
	Global_1146212->f_35859.f_9286[iVar0]->f_2 = iParam3;
}

void func_254(int iParam0)
{
	if (!func_281(iParam0))
	{
		return;
	}
	iVar0 = func_282(iParam0, 1);
	Global_1146212->f_35859.f_9286[iVar0] = -1;
	Global_1146212->f_35859.f_9286[iVar0]->f_1 = 0;
	Global_1146212->f_35859.f_9286[iVar0]->f_2 = -1;
}

bool func_255(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 4)
	{
		return false;
	}
	return true;
}

bool func_256(int iParam0)
{
	if (!func_281(iParam0))
	{
		return false;
	}
	iVar0 = func_288(iParam0);
	if (!func_246(iVar0))
	{
		return false;
	}
	return true;
}

Vector3 func_257(int iParam0)
{
	if (!func_281(iParam0))
	{
		vVar0 = -1;
		vVar0.f_2 = -1;
		return vVar0;
	}
	iVar3 = func_282(iParam0, 1);
	return *Global_1146212->f_35859.f_9286[iVar3];
}

bool func_258(struct<2> Param0)
{
	if (!func_289(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_290(Param0))
	{
		return false;
	}
	return true;
}

int func_259(struct<2> Param0)
{
	if (Param0 == 2)
	{
		return func_291(Param0);
	}
	return -1;
}

bool func_260(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_261(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_91(2) * 2;
		case 1:
			return func_95(2) * 2;
		case 2:
			return func_93(2) * 2;
		default:
			break;
	}
	return -1;
}

int func_262(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_263(int iParam0, int iParam1)
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

void func_264(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_265(int iParam0, int iParam1)
{
	iVar0 = func_211(*iParam0);
	iVar1 = func_210(*iParam0);
	if (iParam1 < 1 || iParam1 > func_216(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_266(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_267(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_268(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

bool func_269(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return true;
		case 13:
			return true;
		default:
			break;
	}
	return false;
}

bool func_270()
{
	if (_0xdd73c9838ce7181d())
	{
		return true;
	}
	return false;
}

int func_271(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam1 > iParam2)
	{
		return -1;
	}
	iVar0 = ((iParam1 + iParam2) / 2);
	if (iParam3 < Global_1301323->f_84[iParam0][iVar0])
	{
		return func_271(iParam0, iParam1, (iVar0 - 1), iParam3);
	}
	if (iParam3 > Global_1301323->f_84[iParam0][iVar0])
	{
		return func_271(iParam0, iVar0 + 1, iParam2, iParam3);
	}
	return iVar0;
}

var func_272(int iParam0, int iParam1)
{
	return (*Global_1301323->f_84[iParam0])[iParam1]->f_1;
}

bool func_273(int iParam0)
{
	return (Global_1102219->f_26.f_9 && iParam0) == iParam0;
}

int func_274(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2123992989:
			return 59;
		case -1988557796:
			return 49;
		case -1936069272:
			return 47;
		case -1926692092:
			return 42;
		case -1846416021:
			return 58;
		case -1721745367:
			return 2;
		case -1701192079:
			return 41;
		case -1659620438:
			return 50;
		case -1607530002:
			return 64;
		case -1589052195:
			return 37;
		case -1575020444:
			return 94;
		case -1572802418:
			return 71;
		case -1514969696:
			return 78;
		case -1397050499:
			return 53;
		case -1349331938:
			return 43;
		case -1345921497:
			return 29;
		case -1309904053:
			return 22;
		case -1290490489:
			return 7;
		case -1202225775:
			return 56;
		case -1080116020:
			return 23;
		case -1079033682:
			return 46;
		case -1059185085:
			return 25;
		case -1003690472:
			return 51;
		case -851757466:
			return 67;
		case -744806636:
			return 52;
		case -516489227:
			return 11;
		case -514416345:
			return 66;
		case -484540420:
			return 36;
		case -483049716:
			return 75;
		case -400566333:
			return 14;
		case -391623459:
			return 73;
		case -377364039:
			return 60;
		case -374018223:
			return 62;
		case -349428415:
			return 39;
		case -231535884:
			return 15;
		case -201802680:
			return 1;
		case -85606741:
			return 65;
		case -77989269:
			return 83;
		case -1:
			return 0;
		case 66478954:
			return 93;
		case 91687087:
			return 79;
		case 146438590:
			return 90;
		case 194431787:
			return 61;
		case 198507096:
			return 72;
		case 222365748:
			return 85;
		case 295732030:
			return 40;
		case 340029732:
			return 70;
		case 374652900:
			return 89;
		case 410940916:
			return 92;
		case 447408404:
			return 81;
		case 515706097:
			return 5;
		case 527883710:
			return 44;
		case 549685826:
			return 63;
		case 641300611:
			return 88;
		case 696211072:
			return 30;
		case 778435476:
			return 19;
		case 808428606:
			return 4;
		case 854463919:
			return 86;
		case 857703729:
			return 48;
		case 874892169:
			return 95;
		case 886907851:
			return 16;
		case 920214733:
			return 91;
		case 995847993:
			return 68;
		case 1061744811:
			return 6;
		case 1149992366:
			return 27;
		case 1221256507:
			return 8;
		case 1247001946:
			return 76;
		case 1275912274:
			return 45;
		case 1333289277:
			return 20;
		case 1341193408:
			return 10;
		case 1356998909:
			return 80;
		case 1447875596:
			return 82;
		case 1495919075:
			return 74;
		case 1509485650:
			return 17;
		case 1546732394:
			return 34;
		case 1572090083:
			return 55;
		case 1608132015:
			return 38;
		case 1664203120:
			return 32;
		case 1679987408:
			return 54;
		case 1727267699:
			return 69;
		case 1728485678:
			return 28;
		case 1742416595:
			return 3;
		case 1766148221:
			return 77;
		case 1768495249:
			return 21;
		case 1900095956:
			return 18;
		case 1946296046:
			return 12;
		case 1968069853:
			return 24;
		case 1997267529:
			return 31;
		case 2000631014:
			return 84;
		case 2019620375:
			return 57;
		case 2037894795:
			return 9;
		case 2048982041:
			return 33;
		case 2063781084:
			return 13;
		case 2082272090:
			return 35;
		case 2089824257:
			return 26;
		case 2128780735:
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

bool func_275(int iParam0)
{
	iVar0 = func_274(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 95)
	{
		return false;
	}
	return true;
}

float func_276(var uParam0)
{
	if (uParam0->f_2 != 0)
	{
		fVar0 = func_292(794259616, uParam0->f_2, uParam0->f_1, "");
		return fVar0;
	}
	return uParam0->f_1;
}

void func_277(int iParam0)
{
	if (!func_275(iParam0))
	{
		return;
	}
	iVar0 = func_274(iParam0, 1);
	if (!func_293(&(Global_1146212->f_2169[iVar0])))
	{
		return;
	}
	(*(*Global_1146212)[&Global_1146212->f_2169[iVar0]])[iVar0] = ((*Global_1146212)[&Global_1146212->f_2169[iVar0]][iVar0] - 1);
	if ((*Global_1146212)[&Global_1146212->f_2169[iVar0]][iVar0] > 0)
	{
		return;
	}
	(*(*Global_1146212)[&Global_1146212->f_2169[iVar0]])[iVar0] = 0;
	Global_1146212->f_2169[iVar0]->f_204 = 0;
	if (!func_294(Global_1146212->f_2169[iVar0]->f_203))
	{
		return;
	}
	iVar1 = func_295(Global_1146212->f_2169[iVar0]->f_203, 1);
	(*Global_1146212)[&Global_1146212->f_2169[iVar0]]->f_96[iVar1] = (&(*Global_1146212)[&Global_1146212->f_2169[iVar0]]->f_96[iVar1] - 1);
	if (&(*Global_1146212)[&Global_1146212->f_2169[iVar0]]->f_96[iVar1] > 0)
	{
		return;
	}
	iVar2 = 0;
	while (iVar2 < Global_1146212->f_47561[iVar1]->f_23)
	{
		if (Global_1146212->f_47561[iVar1][iVar2] != &Global_1146212->f_2169[iVar0])
		{
		}
		else
		{
			(*Global_1146212->f_47561[iVar1])[iVar2] = -1;
			Global_1146212->f_47561[iVar1]->f_23 = (Global_1146212->f_47561[iVar1]->f_23 - 1);
			(*Global_1146212->f_47561[iVar1])[iVar2] = Global_1146212->f_47561[iVar1][Global_1146212->f_47561[iVar1]->f_23];
			(*Global_1146212->f_47561[iVar1])[Global_1146212->f_47561[iVar1]->f_23] = -1;
		}
		else
		{
			iVar2++;
		}
	}
}

bool func_278(int iParam0)
{
	iVar0 = func_279(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 68)
	{
		return false;
	}
	return true;
}

int func_279(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2116044775:
			return 52;
		case -2103256604:
			return 12;
		case -2073453362:
			return 11;
		case -2041025962:
			return 64;
		case -1930487908:
			return 2;
		case -1913155192:
			return 41;
		case -1771755729:
			return 28;
		case -1751121159:
			return 53;
		case -1730553768:
			return 3;
		case -1655894020:
			return 25;
		case -1651690657:
			return 65;
		case -1604680733:
			return 10;
		case -1583192324:
			return 66;
		case -1511575465:
			return 34;
		case -1486292178:
			return 67;
		case -1328991329:
			return 5;
		case -1136429013:
			return 45;
		case -1115905480:
			return 31;
		case -1026481003:
			return 6;
		case -966751997:
			return 13;
		case -824728332:
			return 33;
		case -718742742:
			return 59;
		case -698163919:
			return 32;
		case -662966589:
			return 1;
		case -549693655:
			return 14;
		case -488644714:
			return 4;
		case -430422799:
			return 36;
		case -350459285:
			return 68;
		case -268774736:
			return 40;
		case -220644763:
			return 26;
		case -199042163:
			return 60;
		case -191252842:
			return 22;
		case -166765081:
			return 55;
		case -106166013:
			return 19;
		case -1:
			return 0;
		case 50982971:
			return 17;
		case 125946764:
			return 20;
		case 367160929:
			return 61;
		case 482459685:
			return 24;
		case 492808644:
			return 18;
		case 539654946:
			return 23;
		case 656937467:
			return 39;
		case 692490127:
			return 15;
		case 718630298:
			return 56;
		case 785261183:
			return 48;
		case 793826854:
			return 21;
		case 892655276:
			return 46;
		case 907911269:
			return 27;
		case 955977457:
			return 43;
		case 966561884:
			return 7;
		case 988751276:
			return 30;
		case 1037859088:
			return 51;
		case 1066450193:
			return 54;
		case 1159158432:
			return 62;
		case 1204983685:
			return 37;
		case 1242495215:
			return 9;
		case 1254069395:
			return 63;
		case 1341326366:
			return 58;
		case 1348456703:
			return 35;
		case 1398483650:
			return 50;
		case 1442295985:
			return 38;
		case 1527078018:
			return 42;
		case 1565429580:
			return 57;
		case 1696309427:
			return 44;
		case 1870637439:
			return 16;
		case 1898374676:
			return 49;
		case 2067881273:
			return 8;
		case 2093700568:
			return 47;
		case 2113555978:
			return 29;
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

void func_280(int iParam0)
{
	iVar0 = player_ped_id();
	iVar1 = player_id();
	switch (iParam0)
	{
		case -1730553768:
		case -488644714:
			func_296();
			break;
		case -2103256604:
			func_297();
			break;
		case 692490127:
			_remove_ped_wound_effect(iVar0, 0f);
			break;
		case 50982971:
			_0xa5950e16b8f31052(iVar0, 0, 0);
			_0xc5cb91d65852ed7e(func_298(iParam0));
			break;
		case 1870637439:
			_0xc5cb91d65852ed7e(func_298(iParam0));
			break;
		case 492808644:
			_0xc5cb91d65852ed7e(func_298(iParam0));
			break;
		case 125946764:
			_0x3fc4c027fd0936f4(5);
			func_102(105, 1);
			break;
		case -106166013:
			_0xc5cb91d65852ed7e(func_298(iParam0));
			break;
		case 1204983685:
			disable_attribute_overpower(iVar0, 0);
			disable_attribute_overpower(iVar0, 19);
			disable_attribute_overpower(iVar0, 1);
			disable_attribute_overpower(iVar0, 18);
			break;
		case 1442295985:
			_0x442b4347b6ec36e8(iVar0, 0, true);
			break;
		case 656937467:
			_0x3fc4c027fd0936f4(15);
			break;
		case -430422799:
			disable_attribute_overpower(iVar0, 0);
			disable_attribute_overpower(iVar0, 19);
			break;
		case 539654946:
			_0x5f8e0303c229c84b(iVar1, "");
			break;
		case -1655894020:
		case 482459685:
		case 907911269:
			func_300(func_299(iParam0));
			break;
		case -1771755729:
		case -220644763:
			_0x768e81ae285a4b67(iVar1, 0);
			_0xe910932f4b30be23(iVar1);
			_0x0e9057a9da78d0f8(iVar1, 8);
			_0x263d69767f76059c(iVar1, 0);
			break;
		case 2113555978:
			_0xaf4d239b8903fcbe();
			_0x768e81ae285a4b67(iVar1, 0);
			_0xe910932f4b30be23(iVar1);
			_0x0e9057a9da78d0f8(iVar1, 8);
			_0x263d69767f76059c(iVar1, 0);
			break;
		case 785261183:
			_0xce285a4413b00b7f(iVar1, 1);
			break;
		case 1898374676:
			_0x39363dfd04e91496(iVar1, 0);
			break;
		case 1398483650:
			_0xdfc85c5199045026(iVar1, 1f);
			_0x6fa957d1b55941c1(iVar1, -1f);
			break;
		case 793826854:
			func_301();
			break;
		case -166765081:
		case 718630298:
		case 1341326366:
		case 1565429580:
			func_293(17);
			break;
		case -824728332:
			func_293(16);
			break;
	}
}

bool func_281(int iParam0)
{
	iVar0 = func_282(iParam0, 1);
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return false;
	}
	return true;
}

int func_282(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1290685708:
			return 1;
		case -1038992817:
			return 5;
		case -950874556:
			return 4;
		case -290151400:
			return 3;
		case 0:
			return 0;
		case 1938826026:
			return 2;
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

int func_283(int iParam0)
{
	iVar0 = func_288(iParam0);
	Var1.f_3 = 1065353216;
	Var1.f_5 = -1;
	Var1.f_6 = 3;
	Var1.f_6.f_1 = -1;
	Var1.f_6.f_1.f_3 = -1;
	Var1.f_6.f_1.f_3.f_3 = -1;
	Var1.f_17 = 5;
	Var32.f_3 = 1065353216;
	Var32.f_5 = -1;
	Var32.f_6 = 3;
	Var32.f_6.f_1 = -1;
	Var32.f_6.f_1.f_3 = -1;
	Var32.f_6.f_1.f_3.f_3 = -1;
	Var32.f_17 = 5;
	iVar63 = -1;
	iVar65 = 0;
	while (iVar65 < Global_1146212->f_35859.f_11700)
	{
		iVar64 = func_191(&(Global_1146212->f_35859.f_9503[iVar65]), 1);
		if (Global_1146212->f_35859.f_3116[iVar64]->f_4 != iParam0)
		{
		}
		else if (&Global_1146212->f_35859.f_9503[iVar65] == iVar0)
		{
		}
		else if (!func_302(&(Global_1146212->f_35859.f_9503[iVar65]), Global_1146212->f_35859.f_9503[iVar65]->f_1))
		{
		}
		else
		{
			Var1 = { func_303(&(Global_1146212->f_35859.f_9503[iVar65])) };
			if (Var1.f_5 > Var32.f_5)
			{
				Var32 = { Var1 };
				iVar63 = iVar65;
			}
		}
		iVar65++;
	}
	return iVar63;
}

void func_284(int iParam0)
{
	if (!func_275(iParam0))
	{
		return;
	}
	iVar0 = func_274(iParam0, 1);
	if (!func_293(&(Global_1146212->f_2169[iVar0])))
	{
		return;
	}
	(*(*Global_1146212)[&Global_1146212->f_2169[iVar0]])[iVar0] = (*Global_1146212)[&Global_1146212->f_2169[iVar0]][iVar0] + 1;
	Global_1146212->f_2169[iVar0]->f_204 = 1;
	if (!func_294(Global_1146212->f_2169[iVar0]->f_203))
	{
		return;
	}
	iVar1 = func_295(Global_1146212->f_2169[iVar0]->f_203, 1);
	(*Global_1146212)[&Global_1146212->f_2169[iVar0]]->f_96[iVar1] = &(*Global_1146212)[&Global_1146212->f_2169[iVar0]]->f_96[iVar1] + 1;
	iVar2 = 0;
	while (iVar2 < Global_1146212->f_47561[iVar1]->f_23)
	{
		if (Global_1146212->f_47561[iVar1][iVar2] == &Global_1146212->f_2169[iVar0])
		{
			return;
		}
		iVar2++;
	}
	(*Global_1146212->f_47561[iVar1])[Global_1146212->f_47561[iVar1]->f_23] = &Global_1146212->f_2169[iVar0];
	Global_1146212->f_47561[iVar1]->f_23++;
}

bool func_285(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		bVar0 = func_304(794259616, uParam0->f_1, 1, "");
		return bVar0;
	}
	return true;
}

void func_286(int iParam0)
{
	iVar0 = player_ped_id();
	iVar1 = player_id();
	switch (iParam0)
	{
		case -1730553768:
		case -488644714:
			func_296();
			break;
		case -2103256604:
			func_297();
			break;
		case 692490127:
			_set_ped_wound_effect(iVar0, 2, 2.019411E-41f, 0f, 0f, 0f, 0f, 0f, -1f, 1f);
			break;
		case 50982971:
			_0xa5950e16b8f31052(iVar0, 1, 0);
			animpostfx_play(func_298(iParam0));
			break;
		case 1870637439:
			animpostfx_play(func_298(iParam0));
			break;
		case 492808644:
			animpostfx_play(func_298(iParam0));
			break;
		case 125946764:
			_0xfb6e111908502871(5);
			func_102(104, 1);
			break;
		case -106166013:
			animpostfx_play(func_298(iParam0));
			break;
		case 1204983685:
			break;
		case 656937467:
			_0xfb6e111908502871(15);
			break;
		case 539654946:
			_0x5f8e0303c229c84b(iVar1, "focusfire");
			break;
		case 482459685:
			iVar2 = func_299(iParam0);
			iVar3 = get_entity_bone_index_by_name(iVar0, func_305(iParam0, 0));
			func_306(iVar2, 0, 1, iVar3, 0);
			iVar3 = get_entity_bone_index_by_name(iVar0, func_305(iParam0, 1));
			func_306(iVar2, 1, 1, iVar3, 0);
			iVar3 = get_entity_bone_index_by_name(iVar0, func_305(iParam0, 2));
			func_306(iVar2, 2, 1, iVar3, 0);
			iVar3 = get_entity_bone_index_by_name(iVar0, func_305(iParam0, 3));
			func_306(iVar2, 2, 1, iVar3, 0);
			break;
		case -1655894020:
			iVar2 = func_299(iParam0);
			func_306(iVar2, 3, 1, -1, 1);
			break;
		case 907911269:
			iVar2 = func_299(iParam0);
			func_306(iVar2, 4, 1, -1, 0);
			break;
		case -220644763:
			_0x768e81ae285a4b67(iVar1, 1014693585);
			_0x2b12b6fc8b8772ab(iVar1, 8);
			_0x131e294ef60160df(iVar1, 0f, 0f, 0f, 1f, 8);
			_0x263d69767f76059c(iVar1, 1);
			break;
		case -1771755729:
			_0x768e81ae285a4b67(iVar1, 1936842089);
			_0x2b12b6fc8b8772ab(iVar1, 8);
			_0x131e294ef60160df(iVar1, 0f, 0f, 0f, 1f, 8);
			_0x263d69767f76059c(iVar1, 1);
			break;
		case 2113555978:
			_0x249cd6b7285536f2(0f, 2f, 2f);
			_0x768e81ae285a4b67(iVar1, 1979474018);
			_0x2b12b6fc8b8772ab(iVar1, 25);
			_0x263d69767f76059c(iVar1, 2);
			break;
		case 785261183:
			_0xce285a4413b00b7f(iVar1, 0);
			break;
		case 1898374676:
			_0x39363dfd04e91496(iVar1, 1);
			break;
		case 1398483650:
			_0xdfc85c5199045026(iVar1, 0.5f);
			_0x6fa957d1b55941c1(iVar1, 2f);
			break;
		case 793826854:
			func_307();
			break;
		case -166765081:
		case 718630298:
		case 1341326366:
		case 1565429580:
			func_293(17);
			break;
		case -824728332:
			func_293(16);
			break;
	}
}

void func_287(int iParam0)
{
	if (iParam0 == 0)
	{
		return;
	}
	sVar0 = func_308(iParam0);
	if (is_string_null_or_empty(sVar0))
	{
		return;
	}
	sVar1 = func_309(iParam0);
	if (is_string_null_or_empty(sVar1))
	{
		return;
	}
	_play_sound_from_entity(sVar0, Global_1296859->f_8, sVar1, false, 0, 0);
}

int func_288(int iParam0)
{
	if (!func_281(iParam0))
	{
		return -1;
	}
	iVar0 = func_282(iParam0, 1);
	return &(Global_1146212->f_35859.f_9286[iVar0]);
}

bool func_289(int iParam0)
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

int func_290(int iParam0)
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

int func_291(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_310(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

float func_292(int iParam0, int iParam1, float fParam2, char* sParam3)
{
	if (func_311(iParam0, iParam1, &Var0))
	{
		fVar22 = _network_try_access_tunable_float(iParam0, iParam1, Var0.f_10.f_1);
	}
	else
	{
		fVar22 = _network_try_access_tunable_float(iParam0, iParam1, fParam2);
	}
	return fVar22;
}

bool func_293(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 21)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	if (_0x8f4f050054005c27(&(Global_1146212->f_2166), iParam0))
	{
		return true;
	}
	if (Global_1146212->f_2165 >= 21)
	{
		return false;
	}
	Global_1146212->f_2143[Global_1146212->f_2165] = iParam0;
	Global_1146212->f_2165++;
	return true;
}

bool func_294(int iParam0)
{
	iVar0 = func_295(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 5)
	{
		return false;
	}
	return true;
}

int func_295(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1745889187:
			return 3;
		case -1016837116:
			return 5;
		case 0:
			return 0;
		case 370243254:
			return 4;
		case 1213888609:
			return 2;
		case 1416591065:
			return 1;
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

void func_296()
{
	if (Global_1146212->f_21645[3]->f_208)
	{
		bVar0 = true;
	}
	set_ped_config_flag(Global_1296859->f_8, 550, bVar0);
	if (Global_1146212->f_21645[4]->f_208)
	{
		if (!func_19((*Global_1298536)[&Global_1296859]->f_86, 1))
		{
			bVar1 = true;
		}
	}
	set_ped_config_flag(Global_1296859->f_8, 556, bVar1);
}

void func_297()
{
	bVar0 = false;
	if (Global_1146212->f_21645[12]->f_208)
	{
		bVar0 = true;
	}
	set_ped_config_flag(Global_1296859->f_8, 263, bVar0);
}

char* func_298(int iParam0)
{
	switch (iParam0)
	{
		case 1870637439:
			return "MP_ArrowDrain";
		case 492808644:
			return "MP_ArrowDisorient";
		case 50982971:
			return "MP_ArrowTracking";
		case -106166013:
			return "MP_MoonshineToxic";
		default:
			break;
	}
	return "";
}

int func_299(int iParam0)
{
	switch (iParam0)
	{
		case 482459685:
			return -843895567;
		case -1655894020:
			return -1655894020;
		case 907911269:
			return 907911269;
		default:
			break;
	}
	return 0;
}

void func_300(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if ((*Global_1193972)[iVar0]->f_5 == iParam0)
		{
			(*Global_1193972)[iVar0]->f_7 = 1;
			(*Global_1193972)[iVar0]->f_5 = 0;
		}
		iVar0++;
	}
}

void func_301()
{
	set_ped_config_flag(Global_1296859->f_8, 305, false);
	_0x801917e7d7bce418(Global_1296859->f_8);
}

bool func_302(int iParam0, int iParam1)
{
	if (!func_246(iParam0))
	{
		return false;
	}
	iVar0 = func_191(iParam0, 1);
	iVar2 = Global_1146212->f_35859.f_3116[iVar0]->f_4;
	if (func_248(*Global_1146212->f_35859.f_3116[iVar0]))
	{
		iVar3 = &Global_1146212->f_35859.f_9286[func_282(iVar2, 1)];
		Var4 = { func_303(iVar3) };
		if (iVar3 != iParam0 && Global_1146212->f_35859.f_3116[iVar0]->f_5 <= Var4.f_5)
		{
			return false;
		}
	}
	switch (&Global_1146212->f_35859.f_3116[iVar0])
	{
		case -1606735498:
		case -1455211650:
		case -1324410551:
		case -1276912520:
		case -1028878953:
		case -992973338:
		case -971275364:
		case -932644421:
		case -590004554:
		case -528257357:
		case -193993646:
		case -166662497:
		case -23641105:
		case 37083370:
		case 52193493:
		case 180258367:
		case 429965152:
		case 461381338:
		case 522523138:
		case 589907865:
		case 979390476:
		case 1028557598:
		case 1154303630:
		case 1254162401:
		case 1269394302:
		case 1305415806:
		case 1461424861:
		case 1691008805:
		case 1759133423:
		case 1810352391:
		case 1915097582:
		case 1921800945:
		case 2046842849:
		case 2116793692:
			return true;
		case 1245579893:
			if (!func_312() && !func_313())
			{
				return false;
			}
			return true;
		case -2010146101:
			if (!func_312())
			{
				return false;
			}
			return true;
		case -2139108927:
			iVar1 = func_245(iParam1);
			if (iVar1 == &Global_1296859)
			{
				return false;
			}
			return true;
		case -2129621195:
			iVar1 = func_245(iParam1);
			if (iVar1 == &Global_1296859)
			{
				return false;
			}
			if (!_0x424b17a7dc5c90bc(&(Global_1296859->f_154[&Global_1296859])))
			{
				return false;
			}
			if (!_0x81fb74c83c2ed69f(&(Global_1296859->f_154[iVar1])))
			{
				return false;
			}
			return true;
		case 190804938:
			iVar1 = func_245(iParam1);
			if (!_network_is_player_index_valid(&(Global_1296859->f_154[iVar1])))
			{
				return false;
			}
			if (iVar1 != &Global_1296859 && !func_314(&(Global_1296859->f_154[iVar1])))
			{
				return false;
			}
			if (!func_315(512, iVar1))
			{
				return false;
			}
			return true;
		case -1503245593:
			if (!&Global_1956200->f_1716[8])
			{
				return false;
			}
			iVar1 = func_245(iParam1);
			if (!_network_is_player_index_valid(&(Global_1296859->f_154[iVar1])))
			{
				return false;
			}
			if (_0x0c31c51168e80365(Global_1296859->f_8) != get_player_ped(&(Global_1296859->f_154[iVar1])))
			{
				return false;
			}
			return true;
		default:
			break;
	}
	return false;
}

struct<31> func_303(int iParam0)
{
	iVar0 = func_191(iParam0, 1);
	return *Global_1146212->f_35859.f_3116[iVar0];
}

bool func_304(int iParam0, int iParam1, bool bParam2, char* sParam3)
{
	if (func_311(iParam0, iParam1, &Var0))
	{
		bVar22 = _network_try_access_tunable_bool(iParam0, iParam1, Var0.f_10.f_2);
	}
	else
	{
		bVar22 = _network_try_access_tunable_bool(iParam0, iParam1, bParam2);
	}
	return bVar22;
}

char* func_305(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 482459685:
			switch (iParam1)
			{
				case 0:
					return "PH_HEAD";
				case 1:
					return "CP_CHEST";
				case 2:
					return "CP_R_UpperArm";
				case 3:
					return "CP_L_UpperArm";
				default:
					break;
			}
			break;
	}
	return "";
}

void func_306(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!does_particle_fx_looped_exist(Global_1193972[iVar0]) && !(*Global_1193972)[iVar0]->f_6)
		{
			(*Global_1193972)[iVar0]->f_5 = iParam0;
			(*Global_1193972)[iVar0]->f_1 = iParam1;
			(*Global_1193972)[iVar0]->f_2 = iParam2;
			(*Global_1193972)[iVar0]->f_3 = iParam3;
			(*Global_1193972)[iVar0]->f_4 = iParam4;
			(*Global_1193972)[iVar0]->f_6 = 1;
			return;
		}
		iVar0++;
	}
}

void func_307()
{
	set_ped_config_flag(Global_1296859->f_8, 305, true);
	_0x05ce6af4df071d23(Global_1296859->f_8, 0.7f);
}

char* func_308(int iParam0)
{
	switch (iParam0)
	{
		case -1822335806:
			return "Head_Shot_Ricco";
		default:
			break;
	}
	return "";
}

char* func_309(int iParam0)
{
	switch (iParam0)
	{
		case -1822335806:
			return "RDRO_Ability_Cards_SFX_Sounds";
		default:
			break;
	}
	return "";
}

bool func_310(struct<2> Param0, var uParam2)
{
	if (!func_258(Param0))
	{
		return false;
	}
	func_316(uParam2);
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

bool func_311(int iParam0, int iParam1, var uParam2)
{
	Var0 = -178401592;
	Var0.f_1 = iParam0;
	Var0.f_2 = -421429484;
	Var0.f_3 = 1;
	Var0.f_4 = iParam1;
	_0x91ded5dd64bb2691(&Var0);
	if (_0x44b3a36933ac009c(&iVar7, &Var0, -421429484))
	{
		*uParam2 = iParam0;
		uParam2->f_9 = iParam1;
		StringCopy(&(uParam2->f_1), "", 64);
		StringIntConCat(&(uParam2->f_1), iVar7, 64);
		_0x44b3a36933ac009c(&iVar7, &Var0, 828747869);
		uParam2->f_10.f_3 = func_317(iVar7);
		uParam2->f_14.f_3 = uParam2->f_10.f_3;
		uParam2->f_18.f_3 = uParam2->f_10.f_3;
		switch (uParam2->f_10.f_3)
		{
			case 0:
				if (!_0x52fc26d2d2fc2987(&(uParam2->f_10), &Var0, -455129387))
				{
				}
				break;
			case 1:
				if (!_0xb2b42607f7867576(&(uParam2->f_10.f_1), &Var0, -455129387))
				{
				}
				break;
			case 2:
				if (!_0xa63cd20f19b961ab(&(uParam2->f_10.f_2), &Var0, -455129387))
				{
				}
				break;
		}
		switch (uParam2->f_14.f_3)
		{
			case 0:
				_0x52fc26d2d2fc2987(&(uParam2->f_14), &Var0, -30349581);
				break;
			case 1:
				_0xb2b42607f7867576(&(uParam2->f_14.f_1), &Var0, -30349581);
				break;
			case 2:
				_0xa63cd20f19b961ab(&(uParam2->f_14.f_2), &Var0, -30349581);
				break;
		}
		switch (uParam2->f_18.f_3)
		{
			case 0:
				_0x52fc26d2d2fc2987(&(uParam2->f_18), &Var0, 1616931012);
				break;
			case 1:
				_0xb2b42607f7867576(&(uParam2->f_18.f_1), &Var0, 1616931012);
				break;
			case 2:
				_0xa63cd20f19b961ab(&(uParam2->f_18.f_2), &Var0, 1616931012);
				break;
		}
		switch (uParam2->f_10.f_3)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
		}
		switch (uParam2->f_14.f_3)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
		}
		switch (uParam2->f_18.f_3)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
		}
		return true;
	}
	return false;
}

bool func_312()
{
	return Global_1572887->f_6;
}

bool func_313()
{
	if (!&Global_1048577)
	{
		return false;
	}
	if (!func_258(func_135(0)))
	{
		return false;
	}
	if (&Global_3145858 != -504335712)
	{
		return false;
	}
	if (func_318(Global_524288->f_40400))
	{
		return true;
	}
	return false;
}

bool func_314(var uParam0)
{
	if (func_319(uParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1296859->f_10, uParam0) != 1)
		{
			func_320(uParam0);
		}
		return true;
	}
	return _0xfe53b1f8d43f19bf(Global_1296859->f_10, uParam0) == 1;
}

bool func_315(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102219->f_3 && iParam0) != 0;
	}
	return ((*Global_1100469)[iParam1]->f_3 && iParam0) != 0;
}

void func_316(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

int func_317(int iParam0)
{
	switch (iParam0)
	{
		case 556453026:
			iVar0 = 0;
			break;
		case -680700887:
			iVar0 = 1;
			break;
		case -945474286:
			iVar0 = 2;
			break;
	}
	return iVar0;
}

bool func_318(int iParam0)
{
	return ((iParam0 == -1759663922 || iParam0 == -318976023) || iParam0 == 772881414);
}

bool func_319(var uParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), uParam0))
	{
		return true;
	}
	return false;
}

void func_320(var uParam0)
{
	if (Global_1572887->f_16 != 0 || Global_1572887->f_13 != 0)
	{
		return;
	}
	iVar0 = uParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (!&Global_1296859->f_22[iVar0])
	{
		func_321(uParam0);
		return;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] == 1)
	{
		return;
	}
	func_322(iVar0);
	_0x51951de06c0d1c40(uParam0, 1);
	Global_1071686->f_21416.f_1[iVar0] = 1;
}

void func_321(var uParam0)
{
	if (Global_1572887->f_16 != 0 || Global_1572887->f_13 != 0)
	{
		return;
	}
	iVar0 = uParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] == 0)
	{
		return;
	}
	func_322(iVar0);
	_0x51951de06c0d1c40(uParam0, 0);
	Global_1071686->f_21416.f_1[iVar0] = 0;
}

void func_322(int iParam0)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_1 != 0)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_2 = 0;
		Global_1071686->f_21416.f_1[iParam0]->f_1 = 0;
	}
}

