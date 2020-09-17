void __EntryFunction__()
{
	if (has_force_cleanup_occurred(523))
	{
		if (iLocal_13 >= 3)
		{
			func_1(iLocal_13 >= 4);
		}
		terminate_this_thread();
	}
	bVar0 = false;
	while (!bVar0)
	{
		wait(0);
		switch (iLocal_13)
		{
			case 0:
				iLocal_14 = _create_volume_cylinder_with_custom_name(613.343f, 2192.701f, 223.576f, 0f, 0f, 11f, 29f, 46f, 9f, "BirdsTrigger");
				_0xed9582b3da8f02b4(12);
				request_model(func_2(), false);
				iLocal_13 = 1;
				break;
			case 1:
				if (has_model_loaded(func_2()))
				{
					iLocal_13 = 2;
				}
				break;
			case 2:
				if (_0x5c16855277819bbf() >= 12)
				{
					if (func_3())
					{
						iLocal_13 = 3;
					}
				}
				break;
			case 3:
				if (is_entity_in_volume(Global_35, iLocal_14, true, 0) || is_bullet_in_area(618.4946f, 2197.932f, 222.0223f, 13f, true))
				{
					iLocal_13 = 4;
					iLocal_15 = get_game_timer();
				}
				break;
			case 4:
				iVar1 = 0;
				while (iVar1 < 12)
				{
					if (!is_ped_injured(&(iLocal_0[iVar1])))
					{
						if ((get_script_task_status(&(iLocal_0[iVar1]), -708058584, true) == 8 || iLocal_18[iVar1]) // PointerArith)
						{
							iVar2 = 0;
							switch (iVar2)
							{
								case 0:
									iVar2 = 0;
									break;
								case 1:
									iVar2 = 50;
									break;
								case 2:
									iVar2 = 160;
									break;
								case 3:
									iVar2 = 400;
									break;
								case 4:
									iVar2 = 310;
									break;
								case 5:
									iVar2 = 120;
									break;
								case 6:
									iVar2 = 200;
									break;
								case 7:
									iVar2 = 280;
									break;
								case 8:
									iVar2 = 390;
									break;
								case 9:
									iVar2 = 70;
									break;
								case 10:
									iVar2 = 220;
									break;
								case 11:
									iVar2 = 150;
									break;
							}
							if (get_game_timer() >= (iVar2 + iLocal_15))
							{
								task_fly_to_coord(&(iLocal_0[iVar1]), 3f, func_4(iLocal_16), 0, 1);
								iLocal_18[iVar1] = 0;
							}
						}
					}
					iVar1++;
				}
				if (!is_ped_injured(&(iLocal_0[0])))
				{
					if (is_entity_at_coord(&(iLocal_0[0]), func_4(iLocal_16), 20f, 20f, 20f, false, false, 0))
					{
						iLocal_13 = 5;
					}
				}
				break;
			case 5:
				iVar1 = 0;
				while (iVar1 < 12)
				{
					if (!is_ped_injured(&(iLocal_0[iVar1])))
					{
						if (get_script_task_status(&(iLocal_0[iVar1]), 475934052, true) != 8)
						{
						}
						else
						{
							task_flying_circle(&(iLocal_0[iVar1]), 2f, func_4(iLocal_16), 2f, 10f);
						}
					}
					iVar1++;
				}
				if (!is_ped_injured(&(iLocal_0[0])))
				{
					vVar3 = { func_5(iLocal_16) };
					if (is_entity_at_coord(Global_35, func_4(iLocal_16), vVar3, false, false, 0))
					{
						if (iLocal_16 < 11)
						{
							iVar1 = 0;
							while (iVar1 < 12)
							{
								iLocal_18[iVar1] = 1;
								iVar1++;
							}
							iLocal_16 = (1 + iLocal_16);
							iLocal_13 = 4;
						}
						else
						{
							func_6();
							terminate_this_thread();
						}
					}
				}
				break;
		}
		if (!func_7(12, 8388608))
		{
			if (get_distance_between_coords(get_entity_coords(Global_35, true, false), 1708.799f, 2160.965f, 318.8729f, false) < 160f)
			{
				Global_40.f_11623[12]->f_2 = -15;
				func_8(12, 8388608, 1);
			}
		}
		if (iLocal_13 >= 3)
		{
			bVar6 = false;
			bVar7 = false;
			if (is_ped_injured(&(iLocal_0[iLocal_17])))
			{
				bVar7 = true;
			}
			else if (is_entity_at_entity(Global_35, &(iLocal_0[iLocal_17]), 250f, 250f, 250f, false, false, 0))
			{
				bVar6 = true;
			}
			iLocal_17++;
			if (iLocal_17 >= 12)
			{
				iLocal_17 = 0;
			}
			if (!bVar6)
			{
				fLocal_31 = ((1f * timestep()) + fLocal_31);
			}
			else
			{
				fLocal_31 = 0f;
			}
			if (bVar7 || fLocal_31 >= 5f)
			{
				if (fLocal_31 >= 5f)
				{
				}
				func_6();
				func_1((bVar7 || iLocal_13 >= 4));
				func_9(&((*Global_1396257)[12]->f_626), 16384, 0);
				terminate_this_thread();
			}
		}
	}
	terminate_this_thread();
}

void func_1(bool bParam0)
{
	if (bParam0)
	{
		Global_40.f_11623[12]->f_2 = func_10();
	}
	func_9(&((*Global_1396257)[12]->f_626), 8192, 1);
}

int func_2()
{
	return 1416324601;
}

bool func_3()
{
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (!does_entity_exist(&(iLocal_0[iVar0])))
		{
			switch (iVar0)
			{
				case 0:
					vVar1 = { 622.3134f, 2200.764f, 221.5856f };
					fVar4 = -160f;
					break;
				case 1:
					vVar1 = { 621.2441f, 2199.146f, 221.7287f };
					fVar4 = -120f;
					break;
				case 2:
					vVar1 = { 619.4209f, 2194.512f, 221.7715f };
					fVar4 = -99f;
					break;
				case 3:
					vVar1 = { 619.327f, 2192.713f, 221.5658f };
					fVar4 = -155f;
					break;
				case 4:
					vVar1 = { 623.7524f, 2199.419f, 221.4249f };
					fVar4 = 142f;
					break;
				case 5:
					vVar1 = { 621.4307f, 2195.696f, 221.644f };
					fVar4 = -11f;
					break;
				case 6:
					vVar1 = { 623.0302f, 2189.17f, 220.8486f };
					fVar4 = -33f;
					break;
				case 7:
					vVar1 = { 618.2859f, 2196.883f, 222.0049f };
					fVar4 = 40f;
					break;
				case 8:
					vVar1 = { 617.9752f, 2193.77f, 221.7816f };
					fVar4 = -175f;
					break;
				case 9:
					vVar1 = { 620.5045f, 2199.149f, 221.8133f };
					fVar4 = -42f;
					break;
				case 10:
					vVar1 = { 632.3511f, 2197.817f, 220.63f };
					fVar4 = 20f;
					break;
				case 11:
					vVar1 = { 626.5476f, 2191.122f, 220.7776f };
					fVar4 = 68f;
					break;
			}
			iLocal_0[iVar0] = func_11(func_2(), vVar1, fVar4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			set_blocking_of_non_temporary_events(&(iLocal_0[iVar0]), true);
			set_ped_keep_task(&(iLocal_0[iVar0]), true);
			set_entity_only_damaged_by_player(&(iLocal_0[iVar0]), true);
			return false;
		}
		iVar0++;
	}
	return true;
}

Vector3 func_4(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 637f, 2120f, 236f;
		case 1:
			return 673f, 2034f, 245f;
		case 2:
			return 666f, 1935f, 241f;
		case 3:
			return 750f, 1924f, 260f;
		case 4:
			return 830f, 1851f, 270f;
		case 5:
			return 920f, 1862f, 298f;
		case 6:
			return 1003f, 1870f, 355f;
		case 7:
			return 1197f, 1896f, 349f;
		case 8:
			return 1358f, 2035f, 326f;
		case 9:
			return 1569f, 2129f, 334f;
		case 10:
			return 1723.816f, 2167.888f, 349.4869f;
	}
	return 0f, 0f, 0f;
}

Vector3 func_5(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 40f, 40f, 40f;
		case 1:
			return 45f, 45f, 45f;
		case 5:
			return 55f, 55f, 55f;
		case 6:
			return 65f, 65f, 65f;
		case 7:
			return 55f, 55f, 55f;
	}
	return 45f, 45f, 45f;
}

void func_6()
{
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (!is_ped_injured(&(iLocal_0[iVar0])))
		{
			task_fly_away(&(iLocal_0[iVar0]), Global_35);
		}
		iVar0++;
	}
}

bool func_7(int iParam0, int iParam1)
{
	return func_12(Global_40.f_11623[iParam0]->f_1, iParam1);
}

void func_8(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_13(&(Global_40.f_11623[iParam0]->f_1), iParam1);
	}
	else
	{
		func_14(&(Global_40.f_11623[iParam0]->f_1), iParam1);
	}
}

void func_9(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_13(uParam0, iParam1);
	}
	else
	{
		func_14(uParam0, iParam1);
	}
}

var func_10()
{
	return &Global_1899515;
}

int func_11(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_15(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_12(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_13(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_14(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_15(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_16(iParam1))
		{
			func_17(iParam0, 41788943);
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
			func_18(iParam0, 0, 1);
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
			func_19(iParam0, 0);
			bVar0 = true;
		}
		func_20(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

bool func_16(int iParam0)
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

void func_17(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_21(iParam0, iParam1))
		{
			if (func_22(iParam0, iParam1))
			{
				if (func_23(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_24(iParam0);
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

void func_18(int iParam0, int iParam1, bool bParam2)
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

void func_19(int iParam0, bool bParam1)
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

void func_20(int iParam0, int iParam1)
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

bool func_21(int iParam0, int iParam1)
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

bool func_22(int iParam0, int iParam1)
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

bool func_23(int iParam0, int iParam1)
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
	if (!func_21(iParam0, iVar0))
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

void func_24(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

