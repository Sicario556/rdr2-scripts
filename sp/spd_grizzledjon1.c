void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	vLocal_14 = { -304.8f, 810.5f, 118.4f };
	iLocal_17 = -1112260815;
	iLocal_18 = -1971689092;
	iLocal_19 = 506543199;
	iLocal_20 = 325252933;
	iLocal_176 = 1;
	iLocal_186 = -1;
	if (has_force_cleanup_occurred(555))
	{
		func_1();
	}
	while (true)
	{
		wait(0);
		func_2();
		func_3();
		func_4();
		func_5();
		if (func_6(13, 0, &iLocal_255, &uLocal_265, &uLocal_179, 0, 1097859072, 0))
		{
			func_7(&iLocal_182, 16);
		}
		if (iLocal_175 > 2)
		{
			if (!func_8(iLocal_182, 16384))
			{
				iVar0 = 0;
				iLocal_186 = func_10(&iLocal_255, &iLocal_119, 8f, &Local_140, &iVar0, 0f, 2, 0, 0, func_9(3, 0, 0), 0, 0, 2, 1, -1082130432, 0);
			}
			func_11();
			if (!is_ped_using_any_scenario(iLocal_255) && !_0x3ab6c7b0bb0df4b1(iLocal_255, -1))
			{
				_0xc67a4910425f11f1(player_id(), "GrizzledJonBubble");
			}
			if (!func_12(13, 33554432))
			{
				if (func_13())
				{
					func_14(13, 33554432, 1);
				}
			}
		}
		if ((iLocal_175 >= 3 && iLocal_175 <= 7) && !func_15(iLocal_255, 0))
		{
			if (is_any_speech_playing(iLocal_255))
			{
				func_16(&iLocal_255, &uLocal_195, 161068336, 5f, 5f);
			}
		}
		func_17(iLocal_255, &iLocal_182, 134217728, 13, 0);
		switch (iLocal_175)
		{
			case 0:
				func_18();
				break;
			case 1:
				func_19();
				break;
			case 2:
				func_20();
				break;
			case 3:
				func_21();
				break;
			case 4:
				func_22();
				break;
			case 5:
				func_23();
				break;
			case 6:
				func_24();
				break;
			case 7:
				func_25();
				break;
			case 8:
				func_26();
				break;
			case 9:
				func_27();
				break;
		}
	}
}

void func_1()
{
	iVar0 = iLocal_183;
	if (iLocal_175 == 5 || func_8(iLocal_182, 2097152))
	{
		iVar0++;
	}
	switch (iLocal_176)
	{
		case 1:
			if (iVar0 <= 1)
			{
				iVar0 = 2;
			}
			else if (iVar0 >= 10 && iVar0 <= 13)
			{
				iVar0 = 14;
			}
			iLocal_199 = iVar0;
			break;
		case 0:
			if (iVar0 >= 8 && iVar0 <= 10)
			{
				iVar0 = 11;
			}
			iLocal_200 = iVar0;
			break;
	}
	func_28(iVar262, (shift_left(iLocal_199, 24) || shift_left(iLocal_200, 16)));
	if (func_8(iLocal_182, 16))
	{
		switch (iLocal_176)
		{
			case 1:
				iLocal_201++;
				break;
			case 0:
				iLocal_202++;
				break;
		}
	}
	func_29(iVar262, (shift_left(iLocal_201, 24) || shift_left(iLocal_202, 16)));
	if (iLocal_199 >= func_30(1) && iLocal_200 >= func_30(0))
	{
		func_31(13, 12);
	}
	func_32(iLocal_255);
	if (does_blip_exist(iVar254))
	{
		remove_blip(&iLocal_256);
	}
	_0xc67a4910425f11f1(player_id(), "GrizzledJonBubble");
	if (!is_entity_dead(iLocal_255))
	{
		remove_entity_from_audio_mix_group(iLocal_255, 0f);
		_0x39a2fc5af55a52b1(iLocal_255, -1);
		set_ped_as_no_longer_needed(&iLocal_255);
	}
	if (does_entity_exist(iVar256))
	{
		set_object_as_no_longer_needed(&uLocal_258);
	}
	if (does_entity_exist(iVar255))
	{
		set_object_as_no_longer_needed(&uLocal_257);
	}
	if (does_entity_exist(iVar257))
	{
		set_object_as_no_longer_needed(&iLocal_259);
	}
	if (_does_volume_exist(iVar258))
	{
		func_33(iVar258);
		_delete_volume(iVar258);
	}
	if (_does_volume_exist(iVar259))
	{
		_0x74c2b3dc0b294102(iVar259);
		_0xa1cfb35069d23c23(iVar259);
		_delete_volume(iVar259);
	}
	if (_does_volume_exist(iVar260))
	{
		_delete_volume(iVar260);
	}
	if (_text_database_has_loaded("SPGJAU"))
	{
		_text_database_delete("SPGJAU");
	}
	func_34(&uLocal_234);
	func_35(13);
	terminate_this_thread();
}

void func_2()
{
	if (!func_36(iLocal_255, 0) && iLocal_175 > 2)
	{
		if (!func_8(iLocal_182, 268435456))
		{
			if (!func_8(iLocal_182, 1048576))
			{
				func_7(&iLocal_182, 1048576);
			}
		}
	}
	if (!func_36(Global_35, 0))
	{
		func_1();
	}
	else if ((iLocal_175 >= 3 && iLocal_175 < 8) && !is_entity_in_volume(Global_35, iVar261, true, 0))
	{
		func_1();
	}
	else if (func_8(iLocal_182, 1048576) || iLocal_175 >= 8)
	{
		if (!_0x5102307ce88798eb(iLocal_255))
		{
			request_ped_visibility_tracking(iLocal_255);
		}
		if (func_37(Global_35, iLocal_255, 1, 1) >= 100f && !is_tracked_ped_visible(iLocal_255))
		{
			if (does_entity_exist(iLocal_255))
			{
				remove_entity_from_audio_mix_group(iLocal_255, 0f);
				delete_ped(&iLocal_255);
			}
			func_1();
		}
	}
	else if (!is_entity_in_volume(Global_35, func_38(76), true, 0))
	{
		func_1();
	}
	else if (func_39(13, 0, &uLocal_234, iLocal_255))
	{
		func_1();
	}
}

void func_3()
{
	if ((is_entity_at_entity(Global_35, iLocal_255, 3f, 3f, 3f, false, false, 0) || iLocal_175 == 8) && get_game_timer() >= iLocal_198)
	{
		if (!is_ped_headtracking_entity(iLocal_255, Global_35))
		{
			task_look_at_entity(iLocal_255, Global_35, -1, 0, 51, 0);
		}
	}
	else if (is_ped_headtracking_entity(iLocal_255, Global_35))
	{
		task_clear_look_at(iLocal_255);
	}
}

void func_4()
{
	if (is_entity_at_entity(Global_35, iLocal_255, 4f, 4f, 4f, false, false, 0))
	{
		if (!is_ped_headtracking_entity(Global_35, iLocal_255))
		{
			task_look_at_entity(Global_35, iLocal_255, -1, 0, 51, 0);
		}
	}
	else if (is_ped_headtracking_entity(Global_35, iLocal_255))
	{
		task_clear_look_at(Global_35);
	}
}

void func_5()
{
	func_40(iVar255, -600906705, 1006406502, 37709, 1);
	func_40(iVar256, -1859705048, 85669569, 7966, 1);
}

bool func_6(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, float fParam5, float fParam6, bool bParam7)
{
	if (*uParam4)
	{
		return false;
	}
	if (is_entity_dead(*iParam2) || Global_1935630->f_12)
	{
		return false;
	}
	if (bParam7)
	{
		if (is_scripted_speech_playing(*iParam2))
		{
			Global_40.f_11623[iParam0]->f_5++;
			Global_40.f_11623[iParam0]->f_2 = func_41();
			*uParam4 = 1;
			return true;
		}
	}
	if (fParam5 == 0f)
	{
		if (!func_42(Global_35, *iParam2, fParam6, 1))
		{
			return false;
		}
	}
	else if (fParam5 > fParam6)
	{
		return false;
	}
	if (!func_43(uParam3))
	{
		func_44(uParam3, 0f);
	}
	else if (func_45(uParam3) >= 2f)
	{
		if (!func_46(Global_40.f_11623[iParam0]->f_2))
		{
			func_47(iParam0);
			*uParam4 = 1;
			func_48(uParam3);
			return true;
		}
		else
		{
			func_47(iParam0);
			*uParam4 = 1;
			func_48(uParam3);
			return true;
		}
	}
	return false;
}

void func_7(int iParam0, int iParam1)
{
	func_49(iParam0, iParam1);
}

bool func_8(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_9(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 1:
			iVar0 = 64;
			break;
		case 3:
			iVar0 = 192;
			break;
		case 2:
			iVar0 = 208;
			break;
		case 4:
			iVar0 = 212;
			break;
		case 5:
			iVar0 = 77;
			break;
		case 7:
			iVar0 = 76;
			break;
		case 6:
			iVar0 = 96;
			break;
		default:
			iVar0 = 1;
			break;
	}
	iVar0 |= 16777216;
	if (iParam1 != 0)
	{
		iVar0 = (iVar0 || iParam1);
	}
	if (iParam2 != 0)
	{
		iVar0 = (iVar0 - (iVar0 && iParam2));
	}
	return iVar0;
}

int func_10(int iParam0, int* iParam1, float fParam2, var uParam3, int iParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	iVar0 = iParam9;
	func_50(&iVar0);
	if (func_51(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_52(iParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_51(iVar0, 134217728))
	{
		func_53(iParam1, uParam3, iParam0);
	}
	if (!*iParam4)
	{
		if (!is_bit_set(*iParam1, 25))
		{
			if (is_bit_set(*iParam1, 24))
			{
				if (!func_54(558))
				{
					func_55(558, 0);
				}
				set_bit(iParam1, 24);
				set_bit(iParam1, 25);
			}
		}
	}
	return iVar1;
}

void func_11()
{
	if (!func_8(iLocal_182, 32) && !func_8(iLocal_182, -2147483648))
	{
		set_ped_reset_flag(iLocal_255, 49, true);
		if (!func_8(iLocal_182, 128))
		{
			if (is_ped_active_in_scenario(iLocal_255, 0))
			{
				func_7(&iLocal_182, 128);
			}
		}
		if (func_8(iLocal_182, 128) && !is_ped_active_in_scenario(iLocal_255, 0))
		{
			func_7(&iLocal_182, 32);
		}
	}
	else if (!func_8(iLocal_182, 512))
	{
		if (func_8(iLocal_182, 256))
		{
			func_7(&iLocal_182, 1024);
			func_7(&iLocal_182, 2048);
			func_56(1, 1, 1);
			func_57(8);
		}
	}
	else if (!func_8(iLocal_182, 4194304))
	{
		if (func_8(iLocal_182, 8388608))
		{
			if (get_game_timer() >= iLocal_191 + 1800)
			{
				if (!is_ambient_speech_playing(iLocal_255) && !is_scripted_speech_playing(iLocal_255))
				{
					if (func_58(iLocal_255, "CHALLENGE_THREATEN", -1021994891, 0, 1, 0, 0, 1))
					{
						func_7(&iLocal_182, 4194304);
					}
				}
			}
		}
	}
	if (!func_8(iLocal_182, 256))
	{
		if (iLocal_175 < 8 && iLocal_175 > 2)
		{
			if (func_59(iLocal_255, 0, &uLocal_205, &iLocal_233, 0, 0))
			{
				fVar0 = func_37(Global_35, iLocal_255, 1, 1);
				switch (iLocal_233)
				{
					case 2:
					case 8:
					case 16:
					case 512:
					case 2048:
						if (fVar0 < 14f)
						{
							func_47(13);
							func_7(&iLocal_182, 256);
						}
						break;
					case 32:
						if (fVar0 < 14f && func_60(Global_35, 1, 0, 0) == -1569615261)
						{
							func_47(13);
							func_7(&iLocal_182, 256);
							func_7(&iLocal_182, -2147483648);
						}
						break;
				}
			}
			else if (func_61())
			{
				func_56(1, 1, 1);
				func_57(8);
				func_7(&iLocal_182, 1024);
				func_7(&iLocal_182, 2048);
				func_7(&iLocal_182, 256);
				func_7(&iLocal_182, 8388608);
			}
			else if ((iLocal_175 == 6 && func_8(iLocal_182, 65536)) && !_0x3ab6c7b0bb0df4b1(iLocal_255, iLocal_189))
			{
				func_7(&iLocal_182, 256);
			}
		}
	}
	vVar1 = { 2f, 2f, 2f };
	if (is_entity_at_entity(Global_35, iLocal_255, vVar1, false, true, 0) && !is_ped_using_any_scenario(Global_35))
	{
		if (!func_8(iLocal_182, 4096))
		{
			fLocal_203 = (fLocal_203 + (1f * timestep()));
			if (fLocal_203 >= 17f)
			{
				func_7(&iLocal_182, 4096);
			}
		}
	}
	else
	{
		func_62(&iLocal_182, 4096);
		fLocal_203 = 0f;
	}
	if (func_8(iLocal_182, 128))
	{
		if (!func_8(iLocal_182, 16384))
		{
			if (is_ped_in_combat(iLocal_255, 0))
			{
				if (iLocal_175 < 6)
				{
					func_63();
				}
				if (!does_blip_exist(iVar254))
				{
					iLocal_256 = func_64(iLocal_255, 831283580, 1, 1);
				}
				func_65(&iLocal_119, &Local_140);
				func_66(&iLocal_255);
				func_67(13, &iLocal_255, &iLocal_182, 1);
				func_14(13, 4194304, 1);
				func_7(&iLocal_182, 16384);
			}
		}
	}
}

bool func_12(int iParam0, int iParam1)
{
	return func_51(Global_40.f_11623[iParam0]->f_1, iParam1);
}

bool func_13()
{
	if (func_68(Global_35, -1725579161, 0))
	{
		if (func_69(-2061583405, &iVar0))
		{
			if (iVar0 == 88359584)
			{
				return true;
			}
		}
	}
	return false;
}

void func_14(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_70(&(Global_40.f_11623[iParam0]->f_1), iParam1);
	}
	else
	{
		func_71(&(Global_40.f_11623[iParam0]->f_1), iParam1);
	}
}

bool func_15(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (is_ped_in_combat(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

void func_16(int iParam0, var uParam1, int iParam2, float fParam3, float fParam4)
{
	if (!does_entity_exist(*iParam0))
	{
		return;
	}
	if (is_shocking_event_in_sphere(iParam2, get_entity_coords(*iParam0, true, false), fParam3))
	{
		return;
	}
	*uParam1 = add_shocking_event_for_entity(iParam2, *iParam0, fParam4, fParam3, fParam3, -1f, -1f, 180f, false, false, -1, -1);
}

void func_17(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4)
{
	if (is_entity_dead(iParam0) || Global_1935630->f_12)
	{
		return;
	}
	sVar0 = func_72(iParam3);
	if (fParam4 == 0f)
	{
		if (func_42(iParam0, Global_35, 15f, 1))
		{
			if (!func_73(*iParam1, iParam2))
			{
				if (_0x6339c1ea3979b5f7(sVar0, "special_ped_scenes"))
				{
					func_49(iParam1, iParam2);
				}
			}
		}
		else if (func_73(*iParam1, iParam2))
		{
			_0x9428447ded71fc7e("special_ped_scenes");
			func_74(iParam1, iParam2);
		}
	}
	else if (fParam4 <= 15f)
	{
		if (!func_73(*iParam1, iParam2))
		{
			if (_0x6339c1ea3979b5f7(sVar0, "special_ped_scenes"))
			{
				func_49(iParam1, iParam2);
			}
		}
	}
	else if (func_73(*iParam1, iParam2))
	{
		_0x9428447ded71fc7e("special_ped_scenes");
		func_74(iParam1, iParam2);
	}
}

void func_18()
{
	iLocal_264 = func_76(13, 0, 9, func_75(13));
	iVar0 = func_77(iVar262);
	iLocal_201 = shift_right(iVar0, 24) & 255;
	iLocal_202 = shift_right(iVar0, 16) & 255;
	iVar1 = func_78(iVar262);
	iLocal_199 = shift_right(iVar1, 24) & 255;
	iLocal_200 = shift_right(iVar1, 16) & 255;
	if (iLocal_201 <= iLocal_202)
	{
		iLocal_176 = 1;
	}
	else
	{
		iLocal_176 = 0;
	}
	bVar2 = false;
	iVar3 = iLocal_176;
	iVar4 = iLocal_176;
	iVar5 = iVar3;
	while (iVar5 <= 1)
	{
		if (!bVar2)
		{
			if (iLocal_183 <= func_30(iVar5))
			{
				bVar2 = true;
				iVar4 = iVar5;
			}
		}
		iVar5++;
	}
	if (!bVar2)
	{
		iVar5 = 0;
		while (iVar5 <= iVar3)
		{
			if (iLocal_183 <= func_30(iVar5))
			{
				bVar2 = true;
				iVar4 = iVar5;
			}
			iVar5++;
		}
	}
	if (!bVar2)
	{
		func_1();
	}
	else
	{
		iLocal_176 = iVar4;
		switch (iLocal_176)
		{
			case 1:
				iLocal_183 = iLocal_199;
				break;
			case 0:
				iLocal_183 = iLocal_200;
				break;
		}
	}
	_text_database_request("SPGJAU");
	_text_database_request("SPGJ");
	request_model(iLocal_17, false);
	request_model(iLocal_18, false);
	request_model(iLocal_19, false);
	if (iLocal_176 == 1)
	{
		request_model(iLocal_20, false);
	}
	func_79();
	func_80(iVar258, "SP_GrizzledJon1_Block", 1, 0, 0, 0, -1082130432);
	_0xb56d41a694e42e86(uVar259, 0, 0, 0, -1, -1, 0);
	_0x18262cafebb5fbe1(uVar259, 0, 0, 0, -1, -1, 0);
	func_81(&uLocal_234);
	func_82(&uLocal_205, 1);
	func_83(&uLocal_205, 1);
	func_84(&uLocal_205, 0);
	func_85(&uLocal_205, 0);
	func_86(&uLocal_205, 0);
	func_87(&uLocal_205, 0);
	func_88(&uLocal_205, 0);
	func_89(&uLocal_205, 0);
	func_90(&uLocal_205, 1, 1, 1);
	func_91(&uLocal_205, 0);
	func_85(&uLocal_205, 0);
	func_92(&uLocal_205, 0);
	func_93(&uLocal_205, 1);
	func_94(&uLocal_205, 1);
	func_95(&uLocal_205, 1);
	func_96(&uLocal_205, 1);
	func_97(&uLocal_205, 0);
	func_98(&uLocal_205, 1);
	func_99(&uLocal_205, 0);
	func_100(&uLocal_205, 0);
	func_101(&uLocal_205, 1);
	func_102(&uLocal_205, 0);
	Global_1935183->f_29 = 3;
	Global_1935183->f_28 = 0;
	iLocal_194 = get_random_int_in_range(1, 4);
	_0xed9582b3da8f02b4(1);
	func_57(1);
}

void func_19()
{
	if ((((((_text_database_has_loaded("SPGJAU") && _text_database_has_loaded("SPGJ")) && has_model_loaded(iLocal_17)) && has_model_loaded(iLocal_18)) && has_model_loaded(iLocal_19)) && (iLocal_176 != 1 || has_model_loaded(iLocal_20))) && _0x5c16855277819bbf() == 1)
	{
		if (iLocal_176 == 1)
		{
			if (iVar277 == 0)
			{
				uLocal_279 = _0x6f3068258a499e52(325252933, vLocal_14, 5);
			}
			if (!does_entity_exist(iVar257))
			{
				if (_0x1ff441d7954f8709(iVar277))
				{
					iLocal_259 = get_object_index_from_entity_index(_0x4735e2a4bb83d9da(iVar277));
					set_entity_can_be_damaged(iVar257, false);
				}
			}
		}
		bVar0 = false;
		if (!_does_scenario_point_exist(iVar275))
		{
			switch (iLocal_176)
			{
				case 1:
					if (does_entity_exist(iVar257))
					{
						iVar1 = 1386173291;
						uLocal_277 = _0xd508fa229f1c4900(iVar257, 0f, 0f, 0f, iVar1, 0.5f);
						_set_scenario_point_flag(iVar275, 16, true);
						_set_scenario_point_flag(iVar275, 18, true);
						bVar0 = true;
					}
					break;
				case 0:
					if (!_does_scenario_point_exist(iVar275))
					{
						uLocal_277 = create_scenario_point(447176986, -313.1921f, 809.0455f, 117.978f, -170f, 0, 0, 1);
						_set_scenario_point_flag(iVar275, 16, true);
						_set_scenario_point_flag(iVar275, 18, true);
						bVar0 = true;
					}
					break;
			}
			if (bVar0)
			{
				func_57(2);
			}
		}
	}
}

void func_20()
{
	if ((func_104(&iLocal_255, iLocal_17, func_103(), 119.5846f, 1, 0, 1) && func_106(&uLocal_257, iLocal_18, func_105(iLocal_18))) && func_106(&uLocal_258, iLocal_19, func_105(iLocal_19)))
	{
		if (func_36(iLocal_255, 0))
		{
			if (!func_8(iLocal_182, 16777216))
			{
				if (func_107())
				{
					func_108(iLocal_255, 1689938120);
					if (func_12(13, 4194304) && !func_12(13, 67108864))
					{
						func_14(13, 67108864, 1);
						func_14(13, 4194304, 0);
					}
				}
				activate_physics(iVar255);
				activate_physics(iVar256);
				_0x669655ffb29ef1a9(iVar256, 0, "tumbler_fill", 0.6f);
				add_entity_to_audio_mix_group(iLocal_255, "special_ped_group", 0f);
				set_ped_keep_task(iLocal_255, true);
				set_ped_combat_ability(iLocal_255, 2);
				func_109(iLocal_255, get_ped_max_health(iLocal_255) * 5);
				set_ped_can_ragdoll_from_player_impact(iLocal_255, true);
				func_110(&uLocal_21, iLocal_255, "GRIZZLED_JON", 0);
				_set_entity_coords_and_heading(iLocal_255, func_103(), 197.2573f, true, false, true);
				set_ped_flee_attributes(iLocal_255, 128, true);
				set_ped_config_flag(iLocal_255, 168, false);
				set_ped_config_flag(iLocal_255, 499, true);
				set_ped_config_flag(iLocal_255, 521, true);
				_0x8b3cb08158e98481(iLocal_255, 1);
				_0x3946fc742ac305cd(get_player_index(), iLocal_255, "SPECIAL_PED_LIGHTWEIGHT_1_0", 0f, 0f, 0f, 0, "GrizzledJonBubble");
				func_111(iLocal_255, 13);
				if (func_12(13, 33554432))
				{
					func_112(iLocal_255);
				}
				func_113();
				func_7(&iLocal_182, 16777216);
			}
			switch (iLocal_176)
			{
				case 1:
					_task_use_scenario_point(iLocal_255, iVar275, "SP_GJ01_SEAT_CHAIR_TABLE_DRINKING", 0, true, true, 0, false, -1f, false);
					break;
				case 0:
					_task_use_scenario_point(iLocal_255, iVar275, "SP_GJ02_STAND_BAR_DRINKING", 0, true, true, 0, false, -1f, false);
					break;
			}
			iLocal_177 = 0;
			iLocal_184 = get_game_timer() + 4000;
			if (_0x9c54041bb66bcf9e(iLocal_255, iVar275))
			{
				func_57(3);
			}
		}
	}
}

void func_21()
{
	iVar0 = 13;
	bVar1 = ((func_8(iLocal_182, 4096) && !func_8(iLocal_182, 64)) && !func_8(iLocal_182, 8));
	if ((((((((get_game_timer() >= iLocal_184 && is_ped_using_any_scenario(iLocal_255)) && is_entity_in_volume(Global_35, iVar260, true, 0)) && func_37(Global_35, iLocal_255, 1, 1) < IntToFloat(iVar0)) && !func_8(iLocal_182, 8)) && !is_scripted_speech_playing(iLocal_255)) && !_0x54b187f111d9c6f8(iLocal_255, 0)) && !func_114(13, iLocal_255, 1, 1)) && !func_115(64, 0, 1))
	{
		if (bVar1)
		{
			func_57(8);
		}
		else if ((iLocal_187 < 3 && iLocal_183 <= func_30(iLocal_176)) || func_8(iLocal_182, 64))
		{
			if (func_8(iLocal_182, 67108864))
			{
				_0x541e5b41dca45828(iLocal_255, 1, 0);
				func_62(&iLocal_182, 67108864);
			}
			iLocal_177 = 0;
			func_57(5);
		}
		else if (!func_8(iLocal_182, 64))
		{
			Global_1935183->f_28 = 0;
			if (func_8(iLocal_182, 67108864))
			{
				_0x541e5b41dca45828(iLocal_255, 1, 0);
				func_62(&iLocal_182, 67108864);
			}
			if (iLocal_176 == 1)
			{
				func_57(6);
			}
			else
			{
				func_57(7);
			}
		}
	}
	else
	{
		if (iLocal_186 >= 0)
		{
			if (iLocal_186 == 0)
			{
				func_7(&iLocal_182, 2);
			}
			else if (iLocal_186 == 1)
			{
				func_7(&iLocal_182, 4);
			}
			func_67(13, &iLocal_255, &iLocal_182, 1);
			iLocal_185 = get_game_timer();
			func_7(&iLocal_182, 8);
		}
		if (func_8(iLocal_182, 8))
		{
			if (!is_ambient_speech_playing(Global_35) && !is_scripted_speech_playing(Global_35))
			{
				if (get_game_timer() >= iLocal_185 + 1000)
				{
					sVar2 = "GREET_GENERAL_STRANGER";
					if (func_8(iLocal_182, 4))
					{
						sVar2 = "INSULT_RESPONSE";
					}
					if (func_58(iLocal_255, sVar2, -417894478, Global_35, 1, 0, 0, 1))
					{
						_0xe7fa07624574b79a(iLocal_255, Global_35, 2, 1, 2f, 1, 0, 0, 0);
						iLocal_197 = 0;
						func_62(&iLocal_182, 8);
						if (get_game_timer() >= iLocal_184)
						{
							iLocal_184 = get_game_timer() + 2000;
						}
					}
				}
			}
		}
	}
}

void func_22()
{
	if (!is_scripted_speech_playing(iLocal_255))
	{
		if (iLocal_193 < 1 && !func_8(iLocal_182, 64))
		{
			if (_0x02ebbb3989b7e695(iLocal_255))
			{
				Global_1935183->f_28 = 1;
				if (iLocal_176 == 1)
				{
					Global_1935183->f_29 = 0;
					iVar1 = 8;
				}
				else
				{
					Global_1935183->f_29 = 1;
					iVar1 = 33;
				}
				iVar0 = get_ped_index_from_entity_index(Global_1914319->f_3[iVar1]->f_23);
				_0xe7fa07624574b79a(iLocal_255, iVar0, 2, 1, -1f, 1, 0, 0, 0);
				iLocal_197 = 0;
				iLocal_198 = get_game_timer() + 8000;
				func_7(&iLocal_182, 67108864);
				func_116(&uLocal_268);
				iLocal_193++;
			}
		}
		else if (func_117(&uLocal_268) > 0.5f)
		{
			iLocal_184 = (get_game_timer() + get_random_int_in_range(4000, 6000));
			func_57(3);
		}
	}
}

void func_23()
{
	if (func_118(iLocal_183))
	{
		iLocal_183++;
		if (((iLocal_176 == 1 && iLocal_183 == 1) || ((iLocal_176 == 1 && iLocal_183 >= 10) && iLocal_183 <= 13)) || ((iLocal_176 == 0 && iLocal_183 >= 8) && iLocal_183 <= 10))
		{
			func_7(&iLocal_182, 64);
		}
		else
		{
			iLocal_184 = (get_game_timer() + get_random_int_in_range(4000, 6000));
		}
		if (!func_8(iLocal_182, 64))
		{
			iLocal_187++;
		}
		iLocal_177 = 0;
		if ((iLocal_193 < 1 && !func_8(iLocal_182, 64)) && iLocal_187 >= iLocal_194)
		{
			bLocal_181 = false;
			func_57(4);
		}
		else
		{
			func_57(3);
		}
	}
}

void func_24()
{
	if (!func_8(iLocal_182, 32768) && _0x02ebbb3989b7e695(iLocal_255))
	{
		sVar0 = "";
		if (!func_12(13, 8388608))
		{
			sVar0 = "pbl_table_p20_exit_passout01";
			func_14(13, 8388608, 1);
		}
		else
		{
			sVar0 = "pbl_table_p20_exit_passout02";
			func_14(13, 8388608, 0);
		}
		iLocal_189 = _create_anim_scene("script@specialped@pdgzj_grizzeld_jon@ig@ig_1@ig_1_table", 0, sVar0, false, true);
		load_anim_scene(iLocal_189);
		func_116(&uLocal_274);
		func_7(&iLocal_182, 32768);
	}
	else if (!func_8(iLocal_182, 65536))
	{
		if (_is_anim_scene_loaded(iLocal_189, true, false) && func_119(&uLocal_274, 4f))
		{
			func_120();
			set_blocking_of_non_temporary_events(iLocal_255, true);
			set_anim_scene_entity(iLocal_189, "cs_grizzledjon", iLocal_255, 0);
			start_anim_scene(iLocal_189);
			func_48(&uLocal_274);
			func_7(&iLocal_182, 65536);
		}
	}
	if (_is_anim_scene_started(iLocal_189, false))
	{
		if (func_12(13, 8388608))
		{
			fVar1 = 0.353f;
		}
		else
		{
			fVar1 = 0.215f;
		}
		if (_get_anim_scene_progress(iLocal_189) < fVar1)
		{
			if (!is_entity_attached(iVar256))
			{
				attach_entity_to_entity(iVar256, iLocal_255, get_ped_bone_index(iLocal_255, 7966), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
			}
		}
		else if (is_entity_attached(iVar256))
		{
			func_121(iVar256, 0, 1);
		}
	}
	if (!func_8(iLocal_182, 536870912))
	{
		if (_is_anim_scene_started(iLocal_189, false) && _get_anim_scene_progress(iLocal_189) > 0.9f)
		{
			iVar2 = get_random_int_in_range(0, 3);
			if (iVar2 == 1)
			{
				Global_1935183->f_28 = 1;
				Global_1935183->f_29 = 2;
			}
			func_7(&iLocal_182, 536870912);
		}
	}
	func_122(iLocal_255, iVar259);
}

void func_25()
{
	_0x406ccf555b04fad3(iLocal_255, 1, 1065353216);
	if (!func_8(iLocal_182, 131072))
	{
		_0xd65fdc686a031c83(iLocal_255, get_hash_key("P21_Exit02_JON"), 1f);
		task_follow_nav_mesh_to_coord(iLocal_255, -316.4402f, 805.7891f, 116.855f, 1f, -1, 0.25f, 0, 40000f);
		uLocal_278 = create_scenario_point(1386012138, -316.4402f, 805.7891f, 116.855f, -170f, 0, 0, 0);
		_0xadc45010bc17af0e(iVar276, 1);
		_set_scenario_point_flag(iVar276, 23, true);
		_set_scenario_point_flag(iVar276, 25, true);
		func_116(&uLocal_268);
		iLocal_184 = get_game_timer() + 15000;
		func_7(&iLocal_182, 131072);
	}
	else if (!func_8(iLocal_182, 524288))
	{
		if (!func_8(iLocal_182, 536870912))
		{
			if (get_interior_from_entity(iLocal_255) == 0 || func_117(&uLocal_268) > 5f)
			{
				iVar0 = get_random_int_in_range(0, 3);
				if (iVar0 == 1)
				{
					Global_1935183->f_28 = 1;
					Global_1935183->f_29 = 2;
				}
				func_7(&iLocal_182, 536870912);
			}
		}
		if (get_script_task_status(iLocal_255, 713668775, true) == 8 && get_game_timer() >= iLocal_184)
		{
			func_120();
			set_blocking_of_non_temporary_events(iLocal_255, true);
			_task_use_scenario_point(iLocal_255, iVar276, 0, -1, true, false, 0, false, -1f, false);
			func_7(&iLocal_182, 524288);
		}
	}
	else
	{
		func_122(iLocal_255, iVar259);
	}
	if (_get_entity_anim_current_time(iLocal_255, "SCRIPT_COMMON@SHARED_SCENARIOS@STAND@STAND_DRUNK@MALE_A@STAND_EXIT", "p_21_exit01_ig_grizzledjon") >= 0.22f)
	{
		if (!func_8(iLocal_182, 262144))
		{
			sVar1 = "";
			bVar2 = false;
			if (!func_12(13, 16777216))
			{
				sVar1 = "SPGJ_BR20_E";
				bVar2 = true;
			}
			else
			{
				sVar1 = "SPGJ_BR20_E2";
				bVar2 = false;
			}
			if (func_123(sVar1))
			{
				func_7(&iLocal_182, 262144);
				func_14(13, 16777216, bVar2);
			}
		}
	}
	if (func_36(iLocal_255, 0) && !func_8(iLocal_182, 268435456))
	{
		if (get_interior_from_entity(iLocal_255) == 0)
		{
			if (get_interior_from_entity(Global_35) != 0)
			{
				if (!is_tracked_ped_visible(iLocal_255) && !is_entity_at_entity(Global_35, iLocal_255, 8f, 8f, 8f, false, false, 0))
				{
					delete_ped(&iLocal_255);
					func_7(&iLocal_182, 268435456);
				}
			}
		}
	}
}

void func_26()
{
	if (!func_8(iLocal_182, 16384))
	{
		if (get_game_timer() >= iLocal_188)
		{
			if ((is_ped_using_any_scenario(iLocal_255) && !is_scripted_speech_playing(iLocal_255)) && !_0x54b187f111d9c6f8(iLocal_255, 0))
			{
				set_ped_config_flag(iLocal_255, 258, true);
				_0xd65fdc686a031c83(iLocal_255, get_hash_key(func_124()), 4f);
				func_56(0, 1, 1);
				_0x2208438012482a1a(iLocal_255, false, false);
				iLocal_188 = get_game_timer() + 5000;
			}
		}
	}
	if (is_ped_shooting(Global_35))
	{
		set_ped_flee_attributes(iLocal_255, 512, false);
	}
	if (is_ped_in_combat(iLocal_255, 0))
	{
		if (!does_blip_exist(iVar254))
		{
			iLocal_256 = func_64(iLocal_255, 831283580, 1, 1);
		}
		bLocal_181 = false;
		_0xc67a4910425f11f1(player_id(), "GrizzledJonBubble");
		if (func_125() && (!func_43(&uLocal_271) || func_117(&uLocal_271) > 3f))
		{
			func_116(&uLocal_271);
			func_57(9);
		}
		if (func_37(Global_35, iLocal_255, 1, 1) < 3f)
		{
			if (!get_ped_config_flag(iLocal_255, 258, true))
			{
				set_ped_config_flag(iLocal_255, 258, true);
			}
		}
		else if (get_ped_config_flag(iLocal_255, 258, true))
		{
			set_ped_config_flag(iLocal_255, 258, false);
		}
		if (!func_8(iLocal_182, 33554432))
		{
			if (func_126(Global_35, iLocal_255) && !func_126(iLocal_255, Global_35))
			{
				_0xffebe5aa96bc2e4e(iLocal_255, 195938434, 1);
				_0xffebe5aa96bc2e4e(iLocal_255, 1352191066, 1);
				func_7(&iLocal_182, 33554432);
			}
		}
	}
	if (!func_8(iLocal_182, 1024))
	{
		if (func_123(func_127(0)))
		{
			_0xd53846b9c931c181(iLocal_255, -1569615261, 20f);
			func_7(&iLocal_182, 1024);
			iLocal_184 = get_game_timer() + 1500;
		}
	}
	else if (iLocal_176 == 1 && func_8(iLocal_182, 8192))
	{
		if (!func_8(iLocal_182, 2048))
		{
			if (get_game_timer() >= iLocal_184 && !is_scripted_speech_playing(iLocal_255))
			{
				if (func_123(func_127(1)))
				{
					func_7(&iLocal_182, 2048);
				}
			}
		}
	}
}

void func_27()
{
	if (((!func_125() && func_37(Global_35, iLocal_255, 1, 1) < 5f) && has_entity_clear_los_to_entity_in_front(iLocal_255, Global_35, 17)) && (!func_43(&uLocal_271) || func_117(&uLocal_271) > 3f))
	{
		bLocal_181 = false;
		func_116(&uLocal_271);
		func_56(0, 0, 0);
		func_57(8);
	}
	if (!is_ped_in_combat(iLocal_255, 0))
	{
		if (does_blip_exist(iVar254))
		{
			func_32(iLocal_255);
		}
	}
	if (!is_ped_fleeing(iLocal_255))
	{
		clear_ped_tasks(iLocal_255, 1, 0);
		_task_smart_flee_style_ped(iLocal_255, Global_35, 6, 128, -1082130432, -1, 0);
	}
	else if (!func_8(iLocal_182, 1073741824))
	{
		if (func_128(iLocal_255, "IGNORING_YOU", -435184212, 0, "GRIZZLED_JON", 0))
		{
			func_7(&iLocal_182, 1073741824);
		}
	}
}

void func_28(int iParam0, int iParam1)
{
	if (!func_129(iParam0))
	{
		return;
	}
	func_130(iParam0, iParam1);
}

void func_29(int iParam0, int iParam1)
{
	if (!func_129(iParam0))
	{
		return;
	}
	func_131(iParam0, iParam1);
}

int func_30(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 13;
		case 0:
			return 10;
	}
	return 0;
}

void func_31(int iParam0, int iParam1)
{
	if (&Global_40.f_11623[iParam0] != iParam1)
	{
		Global_40.f_11623[iParam0] = iParam1;
	}
}

void func_32(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	iVar0 = get_blip_from_entity(iParam0);
	func_132(&iVar0);
}

void func_33(int iParam0)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	func_133(vVar0, 0);
}

void func_34(var uParam0)
{
	if (is_itemset_valid(uParam0->f_18))
	{
		destroy_itemset(uParam0->f_18);
	}
	if (is_itemset_valid(uParam0->f_19))
	{
		destroy_itemset(uParam0->f_19);
	}
	if (_does_volume_exist(uParam0->f_20))
	{
		_delete_volume(uParam0->f_20);
	}
	if (func_43(&(uParam0->f_13)))
	{
		func_48(&(uParam0->f_13));
	}
}

void func_35(int iParam0)
{
	if (!is_entity_dead(Global_35))
	{
		set_ped_config_flag(Global_35, 43, false);
	}
	if ((*Global_1396257)[iParam0]->f_631)
	{
		func_134(0, -1);
	}
	func_135();
	(*Global_1396257)[iParam0]->f_631 = 0;
	Global_1415398->f_2 = (Global_1415398->f_2 - 1);
	Global_1935183->f_28 = 0;
}

bool func_36(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return true;
	}
	if (func_8(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_8(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_8(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_8(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_8(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_8(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_8(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_8(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

float func_37(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_38(int iParam0)
{
	if (!func_136(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_3;
}

bool func_39(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if ((get_frame_count() % 10) == 0)
	{
		if (iParam2->f_1)
		{
			if (((func_137(0) == 1 || func_137(0) == 2) || func_137(0) == 8) || func_138(&Global_1935630, 2048))
			{
				func_7(iParam2, 2);
			}
		}
		if (iParam2->f_2)
		{
			if (func_137(0) == 11)
			{
				func_7(iParam2, 4);
			}
		}
		if (iParam2->f_4)
		{
			if (func_137(0) == 6)
			{
				func_7(iParam2, 8);
			}
		}
		if (iParam2->f_5)
		{
			if (Global_1394141->f_1328)
			{
				func_7(iParam2, 16);
			}
		}
	}
	if ((get_frame_count() % 30) == 0)
	{
		if (iParam2->f_6)
		{
			if (!(func_139((*(*Global_1396257)[iParam0])[iParam1]->f_19) == 0 && func_139((*(*Global_1396257)[iParam0])[iParam1]->f_20) == 23))
			{
				iVar0 = func_41();
				iVar1 = (*(*Global_1396257)[iParam0])[iParam1]->f_19;
				iVar2 = (*(*Global_1396257)[iParam0])[iParam1]->f_20;
				if (func_139(iVar2) > func_139(iVar1))
				{
					if (func_139(iVar0) > func_139(iVar2) + 1 || func_139(iVar0) < func_139(iVar1))
					{
						func_7(iParam2, 32);
					}
				}
				else if (func_139(iVar0) > func_139(iVar2) + 1 && func_139(iVar0) < func_139(iVar1))
				{
					func_7(iParam2, 32);
				}
			}
		}
		if (iParam2->f_7)
		{
			bVar3 = false;
			if ((*(*Global_1396257)[iParam0])[iParam1]->f_40 != 4)
			{
				if (&(*(*Global_1396257)[iParam0])[iParam1]->f_5[0] != -1 || &(*(*Global_1396257)[iParam0])[iParam1]->f_5[1] != -1)
				{
					if (((func_140(&((*(*Global_1396257)[iParam0])[iParam1]->f_5[0])) || func_140(&((*(*Global_1396257)[iParam0])[iParam1]->f_5[1]))) || func_141(&((*(*Global_1396257)[iParam0])[iParam1]->f_5[0]))) || func_141(&((*(*Global_1396257)[iParam0])[iParam1]->f_5[1])))
					{
						bVar3 = true;
					}
				}
				if (!bVar3)
				{
					if (!func_142((*(*Global_1396257)[iParam0])[iParam1]->f_40))
					{
						func_7(iParam2, 64);
					}
				}
			}
		}
		if (iParam2->f_8)
		{
			if (get_game_timer() > iParam2->f_17)
			{
				if (func_143(&iParam3, &(iParam2->f_18), iParam2->f_11, iParam2->f_12) || func_144(&iParam3, &(iParam2->f_20), &(iParam2->f_19), iParam2->f_11, iParam2->f_12, 2048))
				{
					if (!func_43(&(iParam2->f_13)))
					{
						func_44(&(iParam2->f_13), 0f);
					}
					else if (func_145(&(iParam2->f_13)) >= iParam2->f_16)
					{
						func_48(&(iParam2->f_13));
						func_7(iParam2, 512);
					}
					iParam2->f_17 = get_game_timer() + 1000;
				}
				else
				{
					if (func_43(&(iParam2->f_13)))
					{
						func_48(&(iParam2->f_13));
					}
					iParam2->f_17 = get_game_timer() + 1000;
				}
			}
		}
		if (iParam2->f_9)
		{
			if (func_146())
			{
				func_7(iParam2, 1024);
			}
		}
		if (iParam2->f_10)
		{
			if (func_147())
			{
				func_7(iParam2, 2048);
			}
		}
		if (func_138(&Global_1935630, 16384) || Global_1430231->f_4)
		{
			func_7(iParam2, 128);
		}
		if (func_148(&((*Global_1396257)[iParam0]->f_626), 2048))
		{
			func_7(iParam2, 256);
		}
	}
	if ((((((((((func_8(*iParam2, 2) || func_8(*iParam2, 4)) || func_8(*iParam2, 8)) || func_8(*iParam2, 16)) || func_8(*iParam2, 32)) || func_8(*iParam2, 64)) || func_8(*iParam2, 128)) || func_8(*iParam2, 256)) || func_8(*iParam2, 512)) || func_8(*iParam2, 1024)) || func_8(*iParam2, 2048))
	{
		return true;
	}
	return false;
}

void func_40(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (does_entity_exist(iParam0))
	{
		bVar0 = false;
		if (((bLocal_181 && get_game_timer() >= iLocal_196) && iLocal_175 <= 5) && iParam0 == iVar251)
		{
			if (iParam3 == 7966)
			{
				iVar1 = 22798;
			}
			else
			{
				iVar1 = 34606;
			}
			vVar2 = { get_ped_bone_coords(iLocal_255, iParam3, 0f, 0f, 0f) };
			vVar5 = { get_ped_bone_coords(iLocal_255, iVar1, 0f, 0f, 0f) };
			if (get_distance_between_coords(vVar2, vVar5, true) < 0.2f)
			{
				bVar0 = true;
			}
		}
		if (has_anim_event_fired(iLocal_255, iParam1) || bVar0)
		{
			if (!is_entity_attached(iParam0))
			{
				attach_entity_to_entity(iParam0, iLocal_255, get_ped_bone_index(iLocal_255, iParam3), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
				if (bVar0)
				{
					iLocal_197 = get_game_timer() + 4000;
				}
				bLocal_181 = false;
			}
		}
		if (((has_anim_event_fired(iLocal_255, iParam2) || ((bParam4 && _0x916b8e075abc8b4e(iLocal_255, 1)) && get_game_timer() >= iLocal_197)) || (!is_ped_active_in_scenario(iLocal_255, 0) && !_0x0c3cb2e600c8977d(iLocal_255, 0))) || iLocal_175 == 7)
		{
			if (is_entity_attached(iParam0))
			{
				if (_0x916b8e075abc8b4e(iLocal_255, 1) && iParam0 == iVar251)
				{
					bLocal_181 = true;
					iLocal_196 = get_game_timer() + 4000;
				}
				func_121(iParam0, 0, 1);
			}
		}
	}
}

int func_41()
{
	return &Global_1899515;
}

bool func_42(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_43(var uParam0)
{
	return func_149(*uParam0, 1);
}

void func_44(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_150() - fParam1);
	func_151(uParam0, 1);
	func_152(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_45(var uParam0)
{
	if (!func_43(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_153(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_150() - uParam0->f_1);
}

bool func_46(int iParam0)
{
	return iParam0 != -15;
}

void func_47(int iParam0)
{
	Global_40.f_11623[iParam0]->f_5++;
	Global_40.f_11623[iParam0]->f_2 = func_41();
}

void func_48(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_49(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

void func_50(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

bool func_51(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_52(int iParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	if (!is_entity_dead(*iParam0))
	{
		func_50(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !_does_volume_exist(iParam9)) || is_entity_in_volume(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (is_ambient_speech_playing(*iParam0) || is_scripted_speech_playing(*iParam0));
		fVar8 = func_154(fParam12 >= 0f, fParam12, vdist(Global_36, get_entity_coords(*iParam0, true, false)));
		if (!iParam8 & 2097152 != 0)
		{
			set_ped_reset_flag(*iParam0, 184, true);
		}
		if (iParam8 & 8388608 != 0)
		{
			set_ped_reset_flag(*iParam0, 281, true);
		}
		if (bVar5)
		{
			bVar1 = (is_ambient_speech_playing(Global_35) || is_scripted_speech_playing(Global_35));
		}
		if (bVar7 || (bVar5 && bVar1))
		{
			func_116(&(iParam1->f_13));
		}
		if (func_155(*iParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_156(iParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_52(iParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_66(iParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!get_ped_config_flag(*iParam0, 317, true))
						{
							func_157(*iParam0, 1, 1);
						}
					}
					else if (func_158(iParam1, 22))
					{
						func_157(*iParam0, 0, 1);
					}
				}
				if (func_159(iParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_160(iParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_161(iParam8);
					if (func_162(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (is_bit_set(uParam3[iParam1->f_1], 20))
								{
									func_163(uParam3);
								}
							}
							return iParam1->f_1;
						}
					}
					else if (iParam1->f_2 != 2)
					{
						if (iParam1->f_1 != -1)
						{
							iParam1->f_1 = -1;
						}
					}
				}
				else
				{
					func_164(iParam1, uParam3, fVar8);
					if (func_165(*iParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (is_bit_set(*iParam1, 1))
					{
						func_166(uParam3, 0, 0, 1, 1);
						clear_bit(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_167(iParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_159(iParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_168(*iParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_162(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_160(iParam0, func_159(iParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_161(iParam8);
				}
				else if (is_bit_set(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_166(uParam3, 0, 0, 1, 1);
					}
					func_169(iParam1, 1);
				}
				func_164(iParam1, uParam3, fVar8);
				if (func_167(iParam0, iParam1, fParam4, bVar6))
				{
					if (iParam8 & 512 != 0)
					{
						iParam1->f_2 = 0;
					}
					else
					{
						iParam1->f_2 = 1;
					}
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
		}
	}
	else if (!iParam8 & 1024 != 0)
	{
		if (!is_bit_set(*iParam1, 3))
		{
			func_65(iParam1, uParam3);
			set_bit(iParam1, 3);
		}
	}
	return -1;
}

void func_53(int* iParam0, var uParam1, int iParam2)
{
	iVar0 = func_170(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = (*uParam1)[iVar0]->f_13;
		uVar2 = (*uParam1)[iVar0]->f_15;
		if (!is_string_null_or_empty(sVar1))
		{
			func_171(Global_35, *iParam2, sVar1, "", -1082130432, uVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

bool func_54(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_172() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_40.f_7832[iVar1]), iVar2);
}

void func_55(int iParam0, bool bParam1)
{
	func_173(iParam0, &iVar0, &iVar1);
	if (!func_174(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_175(iVar0, iVar1);
}

void func_56(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		_0x802092b07e3b1eea(iLocal_255, get_entity_coords(Global_35, true, false), 3);
	}
	if (bParam2)
	{
		func_63();
	}
	set_ped_config_flag(iLocal_255, 521, false);
	bLocal_181 = false;
	task_put_ped_directly_into_melee(iLocal_255, Global_35, 0, 0, 4f, 1, 0);
	if (bParam1)
	{
		fLocal_204 = func_176(Global_35, func_103(), 1);
	}
	if (!is_ped_shooting(Global_35))
	{
		set_ped_flee_attributes(iLocal_255, 512, true);
	}
	iLocal_191 = get_game_timer();
	func_7(&iLocal_182, 512);
}

void func_57(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			if (!func_8(iLocal_182, 64) && !func_8(iLocal_182, 67108864))
			{
				if (!func_8(iLocal_182, 4))
				{
					if (!func_8(iLocal_182, 2))
					{
						func_177(Local_140[0], 1, 0);
					}
					func_177(Local_140[1], 1, 0);
				}
			}
			bLocal_180 = false;
			break;
		case 5:
			func_62(&iLocal_182, 64);
			bLocal_180 = false;
			break;
		case 8:
			if (iParam0 == 5)
			{
				func_7(&iLocal_182, 2097152);
			}
			if (!func_12(13, 4194304))
			{
				func_7(&iLocal_182, 8192);
			}
			else
			{
				func_62(&iLocal_182, 8192);
			}
			func_67(13, &iLocal_255, &iLocal_182, 1);
			func_47(13);
			func_14(13, 4194304, 1);
			break;
		case 7:
			request_ped_visibility_tracking(iLocal_255);
			break;
		case 9:
			set_ped_flee_attributes(iLocal_255, 512, false);
			break;
	}
	if (iParam0 != 3)
	{
		func_177(Local_140[0], 0, 0);
		func_177(Local_140[1], 0, 0);
	}
	iLocal_175 = iParam0;
}

bool func_58(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
{
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = bParam4;
	Var0.f_6 = iParam7;
	return func_178(iParam0, &Var0);
}

bool func_59(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, float fParam5)
{
	iVar0 = get_frame_count();
	if (iVar0 > uParam2->f_5)
	{
		func_179(uParam2, 1, iVar0);
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
			if (func_180(iParam0, uParam2))
			{
				*iParam3 = 128;
				func_181(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_182(iParam0, uParam2))
				{
					*iParam3 = 8;
					func_181(iParam0, uParam2, *iParam3);
					return true;
				}
				else if (func_183(iParam0, iParam1, uParam2))
				{
					*iParam3 = 8;
					func_181(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_184(iParam0, uParam2))
				{
					*iParam3 = 64;
					func_181(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_26 && func_185(player_id(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*iParam3 = 16384;
				func_181(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_186(uParam2, 1065353216))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_187(Global_35, iParam0, uParam2))
					{
						*iParam3 = 4;
						func_181(iParam0, uParam2, *iParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_188(Global_35, iParam0, uParam2))
					{
						*iParam3 = 256;
						func_181(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_189(Global_35, iParam0, uParam2, 0))
				{
					*iParam3 = 16;
					func_181(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			else if (func_189(Global_35, iParam0, uParam2, 1))
			{
				*iParam3 = 16;
				func_181(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_190(iParam0, uParam2))
				{
					*iParam3 = 32;
					func_181(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || uParam2->f_12 < 20f)
			{
				if (func_191(&iParam0, uParam2))
				{
					*iParam3 = 4096;
					func_181(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_192(uParam2, 4000))
				{
					if ((func_193(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_194(uParam2, iParam0)) && func_195(uParam2, iParam0))
					{
						*iParam3 = 2;
						func_181(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_193(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_194(uParam2, iParam0)) && func_195(uParam2, iParam0))
				{
					*iParam3 = 2;
					func_181(iParam0, uParam2, *iParam3);
					return true;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_196(iParam0, Global_1935630->f_41))
							{
								func_197();
								*iParam3 = 2;
								func_181(iParam0, uParam2, *iParam3);
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
						if (func_196(iParam0, Global_1935630->f_41))
						{
							func_197();
							*iParam3 = 2;
							func_181(iParam0, uParam2, *iParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_198(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_199() - uParam2->f_9) < 2000))
				{
					if (is_ped_ragdoll(iParam0))
					{
						func_197();
						*iParam3 = 2;
						func_181(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_200())
					{
						if (func_196(iParam0, Global_1935630->f_42))
						{
							func_197();
							*iParam3 = 2;
							func_181(iParam0, uParam2, *iParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_201(uParam2, iParam0))
			{
				*iParam3 = 1024;
				func_181(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_202(iParam0, iParam1, uParam2))
				{
					*iParam3 = 2048;
					func_181(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_203(iParam0, uParam2))
					{
						*iParam3 = 8192;
						func_181(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_204(iParam0, uParam2))
				{
					*iParam3 = 32768;
					func_181(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_205(uParam2, 4000))
				{
					if (func_206(&iParam0, uParam2))
					{
						*iParam3 = 512;
						func_181(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_207(iParam0, uParam2))
				{
					*iParam3 = 65536;
					uParam2->f_4 = 0;
					func_181(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (does_entity_exist(iParam0))
		{
			if (func_208(uParam2, iParam0))
			{
				*iParam3 = 1;
				func_181(iParam0, uParam2, *iParam3);
				return true;
			}
		}
	}
	return false;
}

int func_60(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

bool func_61()
{
	if (get_game_timer() >= iLocal_190)
	{
		if (get_interior_from_entity(Global_35) != 0)
		{
			vVar0 = { get_offset_from_entity_given_world_coords(iLocal_255, get_entity_coords(Global_35, true, false)) };
			if (vVar0.y >= 1f)
			{
				if (func_13())
				{
					return true;
				}
			}
		}
		iLocal_190 = get_game_timer() + 5000;
	}
	return false;
}

void func_62(int iParam0, int iParam1)
{
	func_74(iParam0, iParam1);
}

void func_63()
{
	if (!func_8(iLocal_182, 4096))
	{
		if (is_scripted_speech_playing(iLocal_255) || _0x54b187f111d9c6f8(iLocal_255, 0))
		{
			_0x36559148b78853b3(1, 0, 0);
		}
	}
}

int func_64(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!does_entity_exist(iParam0) || (iParam2 == 1 && is_entity_dead(iParam0)))
	{
		return 0;
	}
	iVar0 = get_blip_from_entity(iParam0);
	if (!does_blip_exist(iVar0))
	{
		iVar0 = _blip_add_for_entity(iParam1, iParam0);
	}
	else
	{
		_0xedd964b7984ac291(iVar0, iParam1);
	}
	if (bParam3)
	{
		if ((iParam1 == 408396114 || iParam1 == 1259054292) || iParam1 == -308585968)
		{
			_blip_set_modifier(iVar0, 231194138);
		}
	}
	return iVar0;
}

void func_65(int* iParam0, var uParam1)
{
	Var1.f_1 = -1;
	Var1.f_3 = -1;
	Var1.f_6 = -1;
	Var1.f_12 = 1073741824;
	Var1.f_16 = 1;
	Var22.f_2 = 570;
	Var22.f_3 = 1065353216;
	Var22.f_4 = -1082130432;
	Var22.f_9 = 2;
	func_209(iParam0, uParam1, 1);
	func_166(uParam1, 0, 1, 1, 0);
	_copy_memory(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		_copy_memory((*uParam1)[iVar0], &Var22, 17);
		iVar0++;
	}
}

void func_66(int iParam0)
{
	if (!is_entity_dead(*iParam0))
	{
		_0xe98d55c5983f2509(*iParam0);
		set_ped_config_flag(*iParam0, 297, false);
	}
}

void func_67(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!does_entity_exist(*iParam1))
	{
		return;
	}
	if (func_73(*iParam2, iParam3))
	{
		return;
	}
	Global_40.f_11623[iParam0]->f_6++;
	if (Global_40.f_11623[iParam0]->f_6 == 1 && func_211(func_210(-1342635612)) < 5)
	{
		func_212(func_210(-1342635612), 1);
	}
	Global_40.f_11623[iParam0]->f_3 = func_41();
	func_49(iParam2, iParam3);
	(*Global_1396257)[iParam0]->f_631 = 1;
}

bool func_68(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!does_entity_exist(iParam0))
		{
			return false;
		}
	}
	return _is_metaped_using_component(iParam0, iParam1);
}

bool func_69(int iParam0, int iParam1)
{
	iVar1 = func_214(func_213(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (&Global_1946804->f_1497.f_1[iVar1] != 0 && &Global_1946804->f_1497.f_1[iVar1] != &Global_1946804->f_57[iVar1])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1];
		if (func_215(iVar0) == iParam0)
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	*iParam1 = 0;
	return false;
}

void func_70(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_71(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

char* func_72(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "agnes_dowd";
		case 1:
			return "anders_helgerson";
		case 2:
			return "armadillo_town_crier";
		case 3:
			return "bland_preacher";
		case 4:
			return "blind_man_cassidy";
		case 6:
			return "chelonian_master";
		case 7:
			return "civil_war_commando";
		case 5:
			return "crackpot_robot";
		case 8:
			return "dorothea_wicklow";
		case 9:
			return "endless_strainer";
		case 10:
			return "early_eugenics_proponent";
		case 11:
			return "gavins_friend";
		case 12:
			return "giant";
		case 13:
			return "grizzeld_jon";
		case 14:
			return "joe_butler";
		case 15:
			return "john_the_baptising_madman";
		case 16:
			return "lillian_powell";
		case 17:
			return "mad_scientist";
		case 18:
			return "mayor_of_strawberry";
		case 19:
			return "bum_civil_war_vet";
		case 20:
			return "philosopher_in_cave";
		case 21:
			return "poor_joe";
		case 22:
			return "sheriff_of_tumbleweed";
		case 23:
			return "soothsayer";
		case 25:
			return "swamp_weirdo_sonny";
		case 24:
			return "sun_worshipper";
		case 26:
			return "thomas_downe";
		case 27:
			return "timothy_donahue";
		case 28:
			return "tiny_hermit_in_cabin";
		case 29:
			return "vampire";
		default:
			break;
	}
	return "speci";
}

bool func_73(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_74(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

int func_75(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1472102294;
		case 0:
			return 1005861726;
		case 2:
			return -26239347;
		case 3:
			return 813446076;
		case 4:
			return -862094048;
		case 6:
			return -161610929;
		case 7:
			return 419383665;
		case 5:
			return 1809158435;
		case 8:
			return 698747486;
		case 9:
			return 399829678;
		case 10:
			return -1767525506;
		case 11:
			return 1533318556;
		case 12:
			return 846763582;
		case 13:
			return 974338564;
		case 14:
			return 860809165;
		case 15:
			return -1682386507;
		case 16:
			return 420952075;
		case 17:
			return 1340251064;
		case 18:
			return -1417023286;
		case 19:
			return 237608522;
		case 20:
			return 1487910336;
		case 21:
			return 129290505;
		case 22:
			return 1231488843;
		case 23:
			return -499580940;
		case 24:
			return 1953535365;
		case 25:
			return -315419568;
		case 26:
			return -1708806962;
		case 27:
			return 1405526353;
		case 28:
			return -1903564707;
		case 29:
			return -1132839335;
		default:
			break;
	}
	return 0;
}

int func_76(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar3 = iParam0;
	iVar4 = iParam1;
	if (Global_1572887->f_12 == -1)
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 100;
				iParam3 = get_hash_key(&((*Global_1835011)[iParam0]->f_8));
				break;
			case 2:
				iVar1 = 101;
				iVar2 = 170;
				break;
			case 3:
				iVar1 = 171;
				iVar2 = 190;
				break;
			case 4:
				iVar1 = 191;
				iVar2 = 230;
				break;
			case 5:
				iVar1 = 231;
				iVar2 = 260;
				break;
			case 6:
				iVar1 = 261;
				iVar2 = 290;
				break;
			case 7:
				iVar1 = 291;
				iVar2 = 370;
				break;
			case 8:
				iVar1 = 371;
				iVar2 = 570;
				iParam3 = get_hash_key(&((*Global_1347702)[iParam0]->f_3));
				break;
			case 9:
				iVar1 = 571;
				iVar2 = 650;
				break;
			case 11:
				iVar1 = 651;
				iVar2 = 750;
				break;
			case 10:
				return -1;
			case 12:
				return -1;
			default:
				return -1;
		}
	}
	else
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 200;
				break;
			case 2:
				iVar1 = 201;
				iVar2 = 15700;
				break;
			case 4:
				iVar1 = 15701;
				iVar2 = 16200;
				break;
			case 12:
				iVar1 = 16201;
				iVar2 = 19200;
				break;
			case 10:
				iVar1 = 19201;
				iVar2 = 20000;
				break;
			case 8:
				return -1;
			case 7:
				return -1;
			case 6:
				return -1;
			default:
				return -1;
		}
	}
	if (iVar2 >= func_216())
	{
		iVar2 = func_216();
	}
	iVar5 = func_217(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_218(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_218(iVar6) == 0)
			{
				return func_219(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
		iVar1 = 751;
		iVar2 = 770;
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_218(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_218(iVar6) == 0)
			{
				return func_219(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (&Global_1058888->f_498[iVar0] == iVar5)
			{
				return iVar0;
			}
			iVar0++;
		}
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (&Global_1058888->f_498[iVar0] == 0)
			{
				return func_219(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

int func_77(int iParam0)
{
	if (!func_129(iParam0))
	{
		return -1;
	}
	return func_220(iParam0);
}

int func_78(int iParam0)
{
	if (!func_129(iParam0))
	{
		return -1;
	}
	return func_221(iParam0);
}

void func_79()
{
	if (!_does_volume_exist(iVar258))
	{
		iLocal_260 = _create_volume_sphere_with_custom_name(-307.8825f, 806.9466f, 117.9845f, 0f, 0f, 10.8212f, 11f, 11f, 11f, "RandomEventBlock");
	}
	if (!_does_volume_exist(iVar259))
	{
		if (iLocal_176 == 1)
		{
			iLocal_261 = _create_volume_cylinder_with_custom_name(-304.8628f, 809.6257f, 118.563f, 0f, 0f, 0f, 1.8f, 2f, 2f, "TableStayAway");
		}
		else
		{
			iLocal_261 = _create_volume_box_with_custom_name(-312.9649f, 808.7404f, 118.8782f, 0f, 0f, 11.88555f, 2.5f, 1.75f, 3f, "BarStayAway");
		}
	}
	if (!_does_volume_exist(iVar260))
	{
		iLocal_262 = _create_volume_box_with_custom_name(-309.3514f, 807.7032f, 120.5042f, 0f, 0f, 11.29543f, 11.68382f, 24.00774f, 7.880422f, "SaloonInterior");
	}
	if (!_does_volume_exist(iVar261))
	{
		iLocal_263 = _create_volume_cylinder_with_custom_name(-312.9856f, 808.8508f, 117.9822f, 0f, 0f, 0f, 80f, 80f, 30f, "GJDespawn");
	}
}

int func_80(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	if (!_does_volume_exist(iParam0))
	{
		return 0;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	vVar3 = { _0x3e2a25b2416dd67e(iParam0) };
	iVar6 = func_222(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

void func_81(var uParam0)
{
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	uParam0->f_4 = 1;
	uParam0->f_5 = 1;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 1;
	uParam0->f_10 = 1;
	uParam0->f_11 = 1.75f;
	uParam0->f_12 = 2.25f;
	uParam0->f_16 = 45000;
}

void func_82(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_71(&(uParam0->f_1), 16384);
	}
	else
	{
		func_70(&(uParam0->f_1), 16384);
	}
}

void func_83(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_71(&(uParam0->f_1), 2048);
	}
	else
	{
		func_70(&(uParam0->f_1), 2048);
	}
}

void func_84(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_71(&(uParam0->f_1), 256);
	}
	else
	{
		func_70(&(uParam0->f_1), 256);
	}
}

void func_85(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_70(uParam0, 4);
	}
	else
	{
		func_71(uParam0, 4);
	}
}

void func_86(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_70(uParam0, 16);
	}
	else
	{
		func_71(uParam0, 67108864);
		func_71(uParam0, 16);
	}
}

void func_87(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_71(&(uParam0->f_1), 128);
	}
	else
	{
		func_70(&(uParam0->f_1), 128);
	}
}

void func_88(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_70(uParam0, 256);
	}
	else
	{
		func_71(uParam0, 256);
	}
}

void func_89(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_70(uParam0, 64);
	}
	else
	{
		func_71(uParam0, 64);
	}
}

void func_90(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_70(uParam0, 268435456);
	}
	else
	{
		func_71(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_70(uParam0, 1073741824);
	}
	else
	{
		func_71(uParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_70(uParam0, 536870912);
	}
	else
	{
		func_71(uParam0, 536870912);
	}
}

void func_91(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_71(&(uParam0->f_1), 131072);
	}
	else
	{
		func_70(&(uParam0->f_1), 131072);
	}
}

void func_92(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_70(uParam0, 2);
	}
	else
	{
		func_71(uParam0, 2);
	}
}

void func_93(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_71(&(uParam0->f_1), 2);
	}
	else
	{
		func_70(&(uParam0->f_1), 2);
	}
}

void func_94(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_71(&(uParam0->f_1), 8);
	}
	else
	{
		func_70(&(uParam0->f_1), 8);
	}
}

void func_95(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_70(uParam0, 128);
	}
	else
	{
		func_71(uParam0, 128);
	}
}

void func_96(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_70(uParam0, 8);
	}
	else
	{
		func_71(uParam0, 8);
	}
}

void func_97(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_70(uParam0, 32);
	}
	else
	{
		func_71(uParam0, 32);
	}
}

void func_98(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_71(&(uParam0->f_1), 4);
	}
	else
	{
		func_70(&(uParam0->f_1), 4);
	}
}

void func_99(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_71(&(uParam0->f_1), 1024);
	}
	else
	{
		func_70(&(uParam0->f_1), 1024);
	}
}

void func_100(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_71(&(uParam0->f_1), 524288);
	}
	else
	{
		func_70(&(uParam0->f_1), 524288);
	}
}

void func_101(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_70(uParam0, 1048576);
	}
	else
	{
		func_71(uParam0, 1048576);
	}
}

void func_102(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_70(uParam0, 262144);
	}
	else
	{
		func_71(uParam0, 262144);
	}
}

Vector3 func_103()
{
	switch (iLocal_176)
	{
		case 1:
			return -304.8628f, 809.6257f, 118.563f;
		case 0:
			return -312.9856f, 808.8508f, 117.9822f;
		default:
			break;
	}
	return -312.9856f, 808.8508f, 117.9822f;
}

int func_104(int iParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	if (!does_entity_exist(*iParam0))
	{
		wait(0);
		if (!bParam7)
		{
			*iParam0 = func_223(iParam1, vParam2, fParam5, 0, 1, bParam6, 1, 1, 1, 0, 0, 0, 0);
		}
		else
		{
			*iParam0 = func_223(iParam1, vParam2, fParam5, 0, 1, bParam6, 1, 1, bParam8, 1, 1, 0, 0);
		}
		return 0;
	}
	if (!does_entity_exist(*iParam0))
	{
		return 0;
	}
	if (_0xa0bc8faed8cfeb3c(*iParam0))
	{
		return 1;
	}
	return 0;
}

Vector3 func_105(int iParam0)
{
	switch (iLocal_176)
	{
		case 1:
			if (iParam0 == iLocal_18)
			{
				return -304.9806f, 809.4712f, 118.7814f;
			}
			else
			{
				return -304.9761f, 809.6718f, 118.781f;
			}
			break;
		case 0:
			if (iParam0 == iLocal_18)
			{
				return -304.9806f, 809.4712f, 118.7814f;
			}
			else
			{
				return -304.9761f, 809.6718f, 118.781f;
			}
			break;
	}
	return -304.9806f, 809.4712f, 118.7814f;
}

int func_106(var uParam0, int iParam1, vector3 vParam2)
{
	if (!does_entity_exist(*uParam0))
	{
		*uParam0 = create_object(iParam1, vParam2, true, true, false, false, true);
		return 0;
	}
	if (!does_entity_exist(*uParam0))
	{
		return 0;
	}
	return 1;
}

bool func_107()
{
	if (func_172() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

void func_108(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_224(iParam0, iParam1))
		{
			if (func_225(iParam0, iParam1))
			{
				if (func_226(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_227(iParam0);
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

void func_109(int iParam0, int iParam1)
{
	if (!is_ped_injured(iParam0))
	{
		fVar0 = (((to_float(get_entity_health(iParam0)) - 100f) / (to_float(get_ped_max_health(iParam0)) - 100f)) * 100f);
		set_ped_max_health(iParam0, iParam1);
		_set_entity_health(iParam0, round((((fVar0 / 100f) * (to_float(get_ped_max_health(iParam0)) - 100f)) + 100f)), 0);
	}
}

void func_110(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_228(uParam0, iParam1, sParam2))
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

void func_111(int iParam0, int iParam1)
{
	if (!(iParam1 > -1 && iParam1 <= 29))
	{
		return;
	}
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	decor_set_bool(iParam0, "bIsSpecialPed", true);
	decor_set_int(iParam0, "iSpecialPedID", iParam1);
	(*Global_1396257)[iParam1]->f_636 = iParam0;
}

void func_112(int iParam0)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	_set_ped_component_disabled(iParam0, -1725579161, 1);
	_update_ped_variation(iParam0, false, true, true, true, false);
}

void func_113()
{
	sVar0 = func_229(&iVar1);
	func_231(Local_140[0], "INTERACT_GREET", func_230(), -163964935, 0, 0, 0, 1, 0);
	func_231(Local_140[1], "INTERACT_INSULT", sVar0, 648122183, 0, 0, 0, 1, iVar1);
	func_232(iLocal_255, &Local_140, 8f, 2, 0, 0, 0, 0, 0);
	func_177(Local_140[0], 0, 0);
	func_177(Local_140[1], 0, 0);
	set_ped_config_flag(iLocal_255, 297, true);
}

bool func_114(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		if (func_233())
		{
			return true;
		}
	}
	if (!is_ped_injured(iParam1))
	{
		if (vdist(Global_36, get_entity_coords(iParam1, true, false)) < 18f || is_scripted_speech_playing(iParam1))
		{
			return false;
		}
	}
	if (bParam2)
	{
		if (func_137(0) == 7 || func_234())
		{
			return true;
		}
	}
	if (func_148(&((*Global_1396257)[iParam0]->f_626), 1024))
	{
		return true;
	}
	return false;
}

bool func_115(int iParam0, bool bParam1, bool bParam2)
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
		if (func_235())
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
		iVar0 = func_236(&(Global_1898164->f_1[0]));
		if (func_237(iVar0) && func_238((*Global_1347702)[iVar0]->f_12, 131072))
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

void func_116(var uParam0)
{
	func_44(uParam0, 0f);
}

float func_117(var uParam0)
{
	if (!func_43(uParam0))
	{
		return 0f;
	}
	if (func_153(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_150() - uParam0->f_1);
}

bool func_118(int iParam0)
{
	switch (iLocal_177)
	{
		case 0:
			if (Global_1935183->f_29 != 4 && _0x02ebbb3989b7e695(iLocal_255))
			{
				_0xd65fdc686a031c83(iLocal_255, get_hash_key(func_239(iParam0)), 5f);
				Global_1935183->f_29 = 3;
				iLocal_177 = 1;
			}
			break;
		case 1:
			if (!_0x02ebbb3989b7e695(iLocal_255))
			{
				iLocal_177 = 2;
			}
			break;
		case 2:
			func_240();
			if (iLocal_187 == 0)
			{
				if (iLocal_192 < 2)
				{
					if (_0xd89504d9d7d5057d(func_241(iParam0)))
					{
						if (get_current_scripted_conversation_line(func_241(iParam0)) == iLocal_192)
						{
							if (func_242(&iLocal_255, 249295937))
							{
								iLocal_192++;
							}
						}
					}
				}
			}
			if (_0x916b8e075abc8b4e(iLocal_255, 1))
			{
				func_63();
				return true;
			}
			if (_0x02ebbb3989b7e695(iLocal_255))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_119(var uParam0, float fParam1)
{
	if (!func_43(uParam0))
	{
		return false;
	}
	if (func_45(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_120()
{
	func_94(&uLocal_205, 0);
	func_99(&uLocal_205, 0);
	func_86(&uLocal_205, 0);
	func_83(&uLocal_205, 0);
	func_88(&uLocal_205, 1);
}

void func_121(int iParam0, bool bParam1, bool bParam2)
{
	if (!is_entity_dead(iParam0))
	{
		if (is_entity_attached(iParam0))
		{
			detach_entity(iParam0, bParam1, bParam2);
		}
	}
}

void func_122(int iParam0, int iParam1)
{
	if (func_243(iParam0))
	{
		if (func_244(Global_35, iParam1, 0, 1))
		{
			_0x785177e4d57d7389(player_id(), 1714017012, 0, 0, -1);
		}
	}
}

bool func_123(char* sParam0)
{
	if (!is_scripted_speech_playing(iLocal_255))
	{
		StringCopy(&cVar0, sParam0, 24);
		bVar3 = func_245(&uLocal_21, cVar0, 0, -1, 0, 0);
		return bVar3;
	}
	return false;
}

char* func_124()
{
	switch (iLocal_176)
	{
		case 1:
			if (!func_8(iLocal_182, 8192))
			{
				return "P20_Exit_Fight02_JON";
			}
			else
			{
				return "P20_Exit_Fight01_JON";
			}
			break;
		case 0:
			return "P21_Exit_Fight01_JON";
	}
	return "INVALID";
}

bool func_125()
{
	fVar0 = func_176(Global_35, func_103(), 1);
	if (((fVar0 > 25f && fVar0 > (fLocal_204 + 10f)) && !is_any_speech_playing(iLocal_255)) && !_0x54b187f111d9c6f8(iLocal_255, 0))
	{
		return true;
	}
	return false;
}

bool func_126(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (!is_entity_dead(iParam1))
		{
			return has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1);
		}
	}
	return false;
}

char* func_127(bool bParam0)
{
	switch (iLocal_176)
	{
		case 1:
			if (func_8(iLocal_182, 8192))
			{
				if (!bParam0)
				{
					return "SPGJ_TB20A";
				}
				else
				{
					return "SPGJ_TB20B";
				}
			}
			else
			{
				return "SPGJ_TB20_EF";
			}
			break;
		case 0:
			return "SPGJ_BR20_EF";
	}
	return "INVALID";
}

bool func_128(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, int iParam5)
{
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_3 = iParam2;
	Var0.f_6 = iParam5;
	Var0.f_1 = sParam4;
	Var0.f_4 = iParam3;
	return func_178(iParam0, &Var0);
}

bool func_129(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

void func_130(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_4 = iParam1;
}

void func_131(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_3 = iParam1;
}

void func_132(int* iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
}

void func_133(vector3 vParam0, int iParam3)
{
	if (func_246(vParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1911670)
	{
		iVar1 = Global_1911670[iVar0];
		if (_0xf6a8a652a6b186cd(iVar1))
		{
			vVar2 = { _0xc4019cf9ae8e931a(iVar1) };
			if (func_247(vVar2, vParam0, 2f, 1))
			{
				if (iParam3 == 0 || _0x769bb7626b8cdb06(vVar2, 2f, 0, iParam3, 16384))
				{
					_0xfdfecc6ee4491e11(iVar1);
					(*Global_1911670)[iVar0] = 0;
				}
			}
		}
		iVar0++;
	}
}

void func_134(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_248(&Global_0, 8);
	}
	if (!func_249() || func_172() != -1)
	{
		return;
	}
	func_248(&Global_0, 1);
}

void func_135()
{
	_0x9428447ded71fc7e("special_ped_scenes");
}

bool func_136(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_137(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

bool func_138(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_139(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

bool func_140(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_250((*Global_1835011)[iParam0]->f_1);
}

int func_141(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_251((*Global_1835011)[iParam0]->f_1);
}

bool func_142(int iParam0)
{
	iVar0 = func_252();
	switch (iParam0)
	{
		case 0:
			switch (iVar0)
			{
				case -173507739:
				case 1632247697:
					return true;
				default:
					return false;
			}
			break;
		case 1:
			switch (iVar0)
			{
				case -1148613331:
				case -173507739:
				case 433385945:
				case 821931868:
				case 1632247697:
					return true;
				default:
					return false;
			}
			break;
		case 2:
			switch (iVar0)
			{
				case -1721991356:
				case -1148613331:
				case -702816767:
				case -173507739:
				case 433385945:
				case 603685163:
				case 821931868:
				case 1500834021:
				case 1632247697:
				case 1679686673:
					return true;
				default:
					return false;
			}
			break;
		case 3:
			switch (iVar0)
			{
				case -1721991356:
				case -1233681761:
				case -1148613331:
				case -702816767:
				case -416908843:
				case -273223690:
				case -173507739:
				case 212278652:
				case 433385945:
				case 821931868:
				case 1420204096:
				case 1500834021:
				case 1632247697:
				case 1679686673:
					return true;
				default:
					return false;
			}
			break;
		case 4:
			return true;
		case 5:
			switch (iVar0)
			{
				case -702816767:
				case 1500834021:
					return true;
			}
			break;
	}
	return false;
}

int func_143(int iParam0, var uParam1, float fParam2, var uParam3)
{
	if (!does_entity_exist(*iParam0))
	{
		return 0;
	}
	vVar0 = { get_entity_forward_vector(*iParam0) };
	vVar3 = { get_entity_coords(*iParam0, true, false) + vVar0 * Vector(fParam2, fParam2, fParam2) };
	if (func_253(uParam1, vVar3, uParam3))
	{
		return 1;
	}
	return 0;
}

int func_144(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5)
{
	if (!does_entity_exist(*iParam0))
	{
		if (_does_volume_exist(*uParam1))
		{
			_0x74c2b3dc0b294102(*uParam1);
			_0xa1cfb35069d23c23(*uParam1);
			_delete_volume(*uParam1);
		}
		return 0;
	}
	vVar2 = { get_entity_forward_vector(*iParam0) };
	vVar5 = { get_entity_coords(*iParam0, true, false) + vVar2 * Vector(fParam3, fParam3, fParam3) };
	if (!func_254(uParam2, &iVar1, vVar5, fParam3, fParam4))
	{
		if (_does_volume_exist(*uParam1))
		{
			_0x74c2b3dc0b294102(*uParam1);
			_0xa1cfb35069d23c23(*uParam1);
			_delete_volume(*uParam1);
		}
		return 0;
	}
	else
	{
		if (!_does_volume_exist(*uParam1))
		{
			fVar0 = (fParam4 + 1f);
			*uParam1 = _create_volume_cylinder_with_custom_name(vVar5, 0f, 0f, 0f, fVar0, fVar0, fVar0, "SPDClearWagonsMount");
			_0xb56d41a694e42e86(*uParam1, iParam5 | 2228255, 0, 0, -1, -1, 10);
			_0x18262cafebb5fbe1(*uParam1, iParam5, 0, 0, -1, -1, 0);
		}
		vVar8 = { get_entity_coords(*iParam0, true, false) };
		if (!func_255(iVar1, 0))
		{
			func_256(&iVar1, vVar8, 1083179008);
		}
		return 1;
	}
	return 0;
}

int func_145(var uParam0)
{
	if (!func_43(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_153(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_199() - round((uParam0->f_1 * 1000f)));
}

bool func_146()
{
	return Global_1392040->f_6;
}

bool func_147()
{
	if (Global_1914319->f_18941.f_17)
	{
		return true;
	}
	return false;
}

bool func_148(var uParam0, int iParam1)
{
	return func_51(*uParam0, iParam1);
}

bool func_149(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_150()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_151(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_152(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_153(var uParam0)
{
	return func_149(*uParam0, 2);
}

float func_154(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_155(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_257(iParam0, iParam1))
		{
			if (!func_51(iParam1->f_10, 1))
			{
				set_ped_config_flag(iParam0, 130, false);
				set_ped_config_flag(iParam0, 315, false);
				set_ped_config_flag(iParam0, 297, false);
				set_ped_config_flag(iParam0, 178, true);
				func_166(uParam2, 0, 0, 1, 0);
				func_70(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_51(iParam1->f_10, 1))
		{
			func_258(uParam2);
			set_ped_config_flag(iParam0, 130, true);
			set_ped_config_flag(iParam0, 315, true);
			set_ped_config_flag(iParam0, 297, true);
			set_ped_config_flag(iParam0, 178, false);
			func_71(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_156(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!is_entity_dead(*iParam0))
	{
		_0xe98d55c5983f2509(*iParam0);
		bVar4 = func_51(iParam4, 32);
		func_209(iParam1, uParam2, 0);
		iVar5 = func_259(*iParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			set_ped_config_flag(*iParam0, 178, false);
			return true;
		}
		func_166(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_51(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_51(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_51(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_51(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_51(iParam4, 8388608) || func_51(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_51(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_51(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_158(iParam1, 4))
		{
			iVar6 |= 1024;
			_0xbb1e41dd3d3c6250(*iParam0, "IloGeneralEvents", 2);
		}
		if (!func_158(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_51(iParam4, 67108864))
		{
			iVar6 |= 16384;
		}
		if (iParam1->f_6 < -1 || (iParam1->f_6 > -1 && iParam1->f_6 > 3))
		{
			iParam1->f_6 = -1;
		}
		if (_0x870708a6e147a9ad(*iParam0, &cVar0, fParam3, fParam3, iVar6, iParam1->f_7, iParam1->f_8, iVar5, 0, iParam1->f_6))
		{
			if (iParam6 == 2)
			{
				iParam6 = func_260(iParam0);
			}
			if (iParam6 != 2)
			{
				bVar7 = true;
			}
			if (!bVar7)
			{
				switch (iParam6)
				{
					case 2:
						if (!is_string_null_or_empty(&cVar0))
						{
							iParam6 = get_hash_key(&cVar0);
						}
						break;
				}
				if (iParam6 != 2)
				{
					_0xfca8fb9e15fa80d3(*iParam0, iParam6);
				}
				if (!is_string_null_or_empty(sParam5) && iParam6 == 2)
				{
					_0xfca8fb9e15fa80d3(*iParam0, get_hash_key(sParam5));
				}
				else if (iParam6 != 2)
				{
					_0xfca8fb9e15fa80d3(*iParam0, iParam6);
				}
			}
			set_ped_config_flag(*iParam0, 130, true);
			set_ped_config_flag(*iParam0, 178, false);
			set_ped_config_flag(*iParam0, 297, true);
			set_ped_config_flag(*iParam0, 301, false);
			if (func_51(iParam4, 268435456))
			{
				iVar8 = func_261(uParam2, 648122183);
				if (iVar8 > -1)
				{
					func_262(iParam1, (*uParam2)[iVar8]);
				}
			}
			if (func_158(iParam1, 23))
			{
				set_ped_config_flag(*iParam0, 315, false);
				set_ped_config_flag(*iParam0, 331, false);
				set_ped_config_flag(*iParam0, 493, true);
			}
			else
			{
				set_ped_config_flag(*iParam0, 315, true);
				set_ped_config_flag(*iParam0, 493, false);
			}
			if (func_51(iParam4, 2) || func_51(iParam4, 16))
			{
				func_157(*iParam0, 1, 1);
			}
			else
			{
				func_157(*iParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_157(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !is_entity_dead(iParam0))
	{
		set_ped_config_flag(iParam0, 317, bParam1);
	}
}

bool func_158(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

bool func_159(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	bVar0 = (!_does_volume_exist(iParam2) || is_entity_in_volume(Global_35, iParam2, true, 0));
	bVar1 = iParam1 & 32 != false;
	bVar2 = iParam1 & 65792 != false;
	bVar3 = iParam1 & 1179648 != false;
	if (bVar0)
	{
		if (bVar1)
		{
			return true;
		}
		if (func_263(*iParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_160(int iParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
{
	if (bParam1)
	{
		if (!is_bit_set(*iParam2, 1))
		{
			if (bParam14)
			{
				iVar0 = 0;
				while (iVar0 < *uParam4)
				{
					set_bit((*uParam4)[iVar0], 14);
					iVar0++;
				}
			}
			func_232(*iParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_51(iParam10, 32), 1, 0);
			set_bit(iParam2, 1);
		}
	}
	else if (is_bit_set(*iParam2, 1))
	{
		clear_bit(iParam2, 1);
	}
}

void func_161(int iParam0)
{
	if (func_51(iParam0, 4))
	{
		disable_control_action(0, -128997553, true);
		disable_control_action(0, 130948705, true);
		disable_control_action(0, 42190210, true);
		disable_control_action(0, 1632043089, true);
		disable_control_action(0, 1623727326, true);
		disable_control_action(0, -922478227, true);
		disable_control_action(0, -674562833, true);
		disable_control_action(0, -197984200, true);
		disable_control_action(0, -238861894, true);
	}
	if (func_51(iParam0, 16384))
	{
		disable_control_action(0, -485697785, false);
	}
	if (func_51(iParam0, 8))
	{
		disable_control_action(0, -1292666904, false);
		disable_control_action(0, 578288361, false);
	}
}

bool func_162(int iParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	iVar1 = func_264(1);
	bVar2 = is_bit_set(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = is_ped_on_foot(Global_35);
	bVar10 = is_ped_injured(*iParam0);
	bVar11 = (((_is_ped_carrying(Global_35) || func_265(Global_35)) || func_266(Global_35)) || func_267(Global_35));
	fVar12 = -1f;
	if (func_43(&(iParam1->f_13)))
	{
		fVar12 = func_45(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((*uParam4)[iVar0]->f_8 != iParam12)
		{
			iParam12 = (*uParam4)[iVar0]->f_8;
		}
		bVar4 = func_268((*uParam4)[iVar0]->f_6);
		func_269(*iParam0, (*uParam4)[iVar0], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (is_bit_set(uParam4[iVar0], 20))
		{
			bVar3 = true;
		}
		if (func_270(*iParam0, iParam1, (*uParam4)[iVar0], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_271(iParam12, (*uParam4)[iVar0]->f_6))
				{
					if (!bVar7)
					{
						func_166(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_272(uParam4, 0, 0);
					}
					if (is_bit_set(uParam4[iVar0], 11))
					{
						func_209(iParam1, uParam4, is_bit_set(*iParam1, 6));
					}
					iParam1->f_1 = iVar0;
					bVar5 = true;
					iParam1->f_9 = is_bit_set(uParam4[iParam1->f_1], 16);
					if (!iParam1->f_9)
					{
						set_bit(iParam1, 0);
					}
					if (!bVar2)
					{
						if (!is_string_null_or_empty((*uParam4)[iVar0]->f_11))
						{
							if (!is_string_null_or_empty((*uParam4)[iVar0]->f_12))
							{
								task_play_anim(Global_35, (*uParam4)[iVar0]->f_11, (*uParam4)[iVar0]->f_12, 4f, -4f, -1, 67108880, 0f, false, 0, false, 0, false);
							}
						}
					}
					if (func_273(iParam1, fParam6, iParam1->f_9))
					{
						func_116(&(iParam1->f_18));
						if (bVar6)
						{
							func_272(uParam4, 0, 0);
						}
						iParam1->f_2 = 2;
					}
					if (iParam1->f_2 != 2)
					{
						if (iParam1->f_2 != 3)
						{
							if (bVar8)
							{
								iParam1->f_2 = 0;
							}
						}
					}
					if (!bParam14)
					{
						bVar5 = true;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		func_274(iParam1, fParam2);
	}
	return bVar5;
}

void func_163(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (is_bit_set(uParam0[iVar0], 20))
		{
			if (!is_bit_set(uParam0[iVar0], 21))
			{
				clear_bit((*uParam0)[iVar0], 20);
				clear_bit((*uParam0)[iVar0], 21);
			}
		}
		iVar0++;
	}
}

void func_164(int* iParam0, var uParam1, float fParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_275((*uParam1)[iVar0]))
		{
			if (is_bit_set(uParam1[iVar0], 20))
			{
				func_274(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_165(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!is_control_pressed(0, -124244224))
		{
			if (func_276(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_277(iParam1, 0);
				func_209(iParam1, uParam2, func_158(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

void func_166(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_268((*uParam0)[iVar0]->f_6))
			{
				if (!bParam4 && is_bit_set(uParam0[iVar0], 11))
				{
				}
				else
				{
					func_278(&((*uParam0)[iVar0]->f_6), 1, 1);
					if (bParam2)
					{
						(*uParam0)[iVar0]->f_7 = 0;
						(*uParam0)[iVar0] = 0;
						(*uParam0)[iVar0]->f_5 = "";
						(*uParam0)[iVar0]->f_14 = 0;
						(*uParam0)[iVar0]->f_13 = "";
						(*uParam0)[iVar0]->f_15 = 0;
						(*uParam0)[iVar0]->f_11 = "";
						(*uParam0)[iVar0]->f_12 = "";
					}
				}
				iVar0++;
			}
		}
	}
}

int func_167(int iParam0, int* iParam1, float fParam2, bool bParam3)
{
	if (iParam1->f_9)
	{
		if (is_ambient_speech_playing(*iParam0) || is_scripted_speech_playing(*iParam0))
		{
			return 0;
		}
		iParam1->f_9 = 0;
		set_bit(iParam1, 0);
		if (fParam2 > 0f)
		{
			func_116(&(iParam1->f_18));
			return 0;
		}
		else if (func_43(&(iParam1->f_18)))
		{
			func_48(&(iParam1->f_18));
			return 0;
		}
	}
	if (!func_43(&(iParam1->f_18)))
	{
		return 1;
	}
	if (fParam2 > 0f && bParam3)
	{
		if (is_ambient_speech_playing(Global_35) || is_scripted_speech_playing(Global_35))
		{
			return 0;
		}
	}
	return func_279(&(iParam1->f_18), fParam2);
	return 1;
}

void func_168(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_269(iParam0, (*uParam2)[iVar0], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_169(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

int func_170(int* iParam0)
{
	if (func_158(iParam0, 0))
	{
		if (func_280(iParam0))
		{
			func_169(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

bool func_171(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, var uParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_281(iParam0, iParam1, sParam2, sParam3, fParam4, uParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

int func_172()
{
	return Global_1572887->f_12;
}

void func_173(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_174(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_282(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_283(iParam0))
	{
		return false;
	}
	if (func_284(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_285(iParam0, 1)) || func_286(32768))
	{
		if (!func_285(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_287())
	{
		return false;
	}
	return true;
}

void func_175(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

float func_176(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

void func_177(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_288(iParam0, 13))
	{
		func_289(iParam0, 0);
	}
	else
	{
		func_290(iParam0, 0);
	}
	if (func_268(iParam0->f_6))
	{
		if (bParam2)
		{
			func_278(&(iParam0->f_6), 0, 1);
		}
	}
}

bool func_178(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

void func_179(var uParam0, bool bParam1, int iParam2)
{
	func_291(iParam2);
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
		uParam0->f_13 = func_292(0);
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
							func_70(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_293(1))
						{
							func_70(uParam0, 33554432);
						}
					}
				}
				else if (!is_ped_planting_bomb(Global_35) && (!func_293(1) || *uParam0 & 8192 != 0))
				{
					func_71(uParam0, 33554432);
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
			if (func_294(uParam0))
			{
				uParam0->f_15 = func_199();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_199() - uParam0->f_15) > 500)
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
	func_295(uParam0);
}

bool func_180(int iParam0, var uParam1)
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
			if (!func_296(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_297(iParam0, iVar2) <= func_298(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_181(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_299(iParam2, 1, 1, 1, 0))
	{
		func_70(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_300(uParam1, 1);
	func_301();
}

bool func_182(int iParam0, var uParam1)
{
	fVar0 = 85f;
	if (!is_entity_dead(iParam0))
	{
		if (func_302(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_303(uParam1);
			if (func_304(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = get_game_timer();
				}
				iVar2 = (get_game_timer() - uParam1->f_2);
				iVar3 = func_305(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_300(uParam1, 1);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_300(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_183(int iParam0, int iParam1, var uParam2)
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
	if (func_306(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_303(uParam2);
		if (func_304(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = get_game_timer();
			}
			if (uParam2->f_2 != 0)
			{
				if (get_game_timer() - uParam2->f_2) > func_305(uParam2)
				{
					func_300(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_184(int iParam0, var uParam1)
{
	if (!get_entity_player_is_free_aiming_at(player_id(), &iVar0))
	{
		return false;
	}
	if (_0x3ee1f7a8c32f24e1(player_id(), &iVar2, false, false))
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
	if (func_296(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = get_game_timer();
		}
		else if (get_game_timer() - uParam1->f_3) > func_305(uParam1)
		{
			fVar3 = func_303(uParam1);
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

int func_185(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_307(bParam1, bParam2, bParam3);
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

bool func_186(var uParam0, float fParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_199();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_187(var uParam0, int iParam1, var uParam2)
{
	if (!is_entity_dead(iParam1))
	{
		if (!network_is_in_session())
		{
			fVar0 = func_308(uParam2);
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
			if (func_195(uParam2, iParam1))
			{
				func_300(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_188(var uParam0, int iParam1, var uParam2)
{
	if (uParam2->f_12 < IntToFloat(func_309(uParam2)))
	{
		if ((is_weapon_valid(Global_1935630->f_46) && !_0x5809dbca0a37c82b(Global_1935630->f_46)) || get_current_ped_vehicle_weapon(Global_35, &uVar0))
		{
			if (func_195(uParam2, iParam1))
			{
				if (_0x285d36c5c72b0569(uParam0) <= 1f)
				{
					func_300(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_189(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vVar0 = { get_entity_coords(iParam1, false, true) };
	iVar3 = func_310(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, uParam2->f_22))
				{
					func_300(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (is_shocking_event_in_sphere(956330317, vVar0, uParam2->f_27))
				{
					func_300(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_26, &vVar4, 0, 0);
					if (func_311(iParam1, vVar0, vVar4))
					{
						func_300(uParam2, 1);
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
					func_300(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_26, &vVar7, 0, 0);
					if (func_311(iParam1, vVar0, vVar7))
					{
						func_300(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_190(int iParam0, var uParam1)
{
	vVar9 = { get_entity_coords(iParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_296(iParam0, uParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_312(&(Global_1935630->f_34[iVar0]));
			fVar1 = vdist(get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_313(&(Global_1935630->f_34[iVar0])))
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
			if (func_314(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_315(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_316(uParam1, iParam0, fVar1, iVar0))
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

bool func_191(int iParam0, var uParam1)
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

bool func_192(var uParam0, int iParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_199();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_193(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_317(iVar0, &iVar2))
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
	if (func_318(iVar0, iParam0))
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

int func_194(var uParam0, int iParam1)
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

bool func_195(var uParam0, int iParam1)
{
	if (func_319(uParam0))
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

bool func_196(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_37(iParam0, iParam1, 1, 1) < 4f)
		{
			if (is_entity_touching_entity(iParam0, iParam1) && is_ped_ragdoll(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_197()
{
}

bool func_198(var uParam0, int iParam1)
{
	iVar0 = get_vehicle_ped_is_using(Global_35);
	if (iVar0 != 0 && !is_this_model_a_train(get_entity_model(iVar0)))
	{
		vVar1 = { get_entity_coords(iParam1, false, false) };
		if (func_320(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_199();
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
						if (func_176(iVar7, vVar1, 1) < 3f)
						{
							if (is_entity_touching_entity(iVar7, iParam1))
							{
								uParam0->f_9 = func_199();
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

int func_199()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

bool func_200()
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
	if ((func_199() - Global_1935630->f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_201(var uParam0, int iParam1)
{
	if (!does_entity_exist(uParam0->f_14))
	{
		return false;
	}
	if (!is_ped_human(iParam1))
	{
		return false;
	}
	fVar0 = func_298(uParam0);
	if (uParam0->f_12 > func_321(uParam0) && uParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_322(iParam1);
	iVar1 = func_323(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((_0x06087579e7aa85a9(iParam1, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, Global_35, 17)) && _0x7f9b9791d4cb71f6(iParam1, Global_35, 1, 0) == 1)) || ((_0x06087579e7aa85a9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, uParam0->f_14, 17)) && _0x7f9b9791d4cb71f6(iParam1, uParam0->f_14, 1, 0) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_202(int iParam0, int iParam1, var uParam2)
{
	if (uParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return func_324(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

bool func_203(int iParam0, var uParam1)
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
		if (func_325(iParam0, uParam1, 1))
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
					if (!func_326(uParam1, iParam0))
					{
						if (func_176(iVar4, Global_36, 1) < 7f)
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

bool func_204(int iParam0, var uParam1)
{
	if (!func_327(0))
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

bool func_205(var uParam0, int iParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_199();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_206(int iParam0, var uParam1)
{
	return _0xe33f98bd76490abc(*iParam0, player_id(), 0);
}

int func_207(int iParam0, var uParam1)
{
	if (!is_ped_human(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_199();
	}
	else if (func_199() - uParam1->f_4) > func_328(uParam1)
	{
		return func_329(iParam0, uParam1, 0, -1082130432);
	}
	return 0;
}

bool func_208(var uParam0, int iParam1)
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

void func_209(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_278(&((*uParam1)[iParam0->f_3]->f_6), 1, 1);
		if (bParam2)
		{
			func_330(iParam0, 0);
		}
	}
}

struct<2> func_210(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

int func_211(var uParam0, var uParam1)
{
	stat_id_get_int(&uParam0, &uVar0);
	return uVar0;
}

void func_212(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

int func_213(int iParam0)
{
	if (!_item_database_get_fits_slot_info(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_331(iVar0);
}

int func_214(int iParam0, int iParam1)
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

int func_215(int iParam0)
{
	if (!func_332(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_216()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_217(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || shift_left(iParam0 & 1023, 5)) || shift_left(iParam1 & 16383, 15));
}

int func_218(int iParam0)
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

int func_219(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_333(iParam2))
	{
		return -1;
	}
	if (iParam0 < 0 || iParam0 > 511)
	{
		return -1;
	}
	if (iParam1 < 0 || iParam1 > 255)
	{
		return -1;
	}
	if (iParam3 < 0 || iParam3 > func_216())
	{
		return -1;
	}
	iVar0 = func_217(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_334(iVar1, 0);
	func_335(iVar1, 0);
	func_131(iVar1, 0);
	func_130(iVar1, 0);
	func_336(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_337(iVar1, iParam4);
	}
	return iVar1;
}

int func_220(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_3;
	}
	return 0;
}

int func_221(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_4;
	}
	return 0;
}

int func_222(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, float fParam9)
{
	if (!bParam8 && network_is_game_in_progress())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_246(vParam0))
	{
		return 0;
	}
	iVar1 = 0;
	if (!bParam5)
	{
		iVar1 |= 2;
	}
	iVar1 |= 1;
	if (!does_entity_exist(iParam6))
	{
		if (func_338(vParam0))
		{
			return 0;
		}
		iVar0 = _0x00bbf7ceae8c666a(vParam0, fParam3, iVar1, 0);
	}
	else
	{
		vVar2 = { get_entity_coords(iParam6, false, false) };
		iVar0 = _0xf383e96c4904df0c(iParam6, fParam3, iVar1, 0);
	}
	if (bParam7 != 0)
	{
		_0xb440f4e35393fc39(iVar0, bParam7);
	}
	if (fParam9 >= 0f)
	{
		_0xd460135c98940274(iVar0, fParam9);
	}
	func_339(iVar0, bParam8);
	return iVar0;
}

int func_223(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_340(iVar0, iParam0, bParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_224(int iParam0, int iParam1)
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

bool func_225(int iParam0, int iParam1)
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

bool func_226(int iParam0, int iParam1)
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
	if (!func_224(iParam0, iVar0))
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

void func_227(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

bool func_228(var uParam0, int iParam1, char* sParam2)
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

char* func_229(int iParam0)
{
	if (func_341())
	{
		switch (get_random_int_in_range(0, 3))
		{
			case 0:
				*iParam0 = 1;
				return "INSULT_GRIZZLED_CONV_PART1";
			case 1:
				*iParam0 = 1;
				return "INSULT_GRIZZLED_CONV_PART3";
			case 2:
				*iParam0 = 2;
				return "INSULT_GRIZZLED_CONV_PART1";
		}
	}
	else
	{
		switch (get_random_int_in_range(0, 5))
		{
			case 0:
				*iParam0 = 16;
				return "INSULT_MALE_CONV_PART1";
			case 1:
				*iParam0 = 1;
				return "INSULT_MALE_CONV_PART1";
			case 2:
				*iParam0 = 15;
				return "INSULT_MALE_CONV_PART1";
			case 3:
				*iParam0 = 18;
				return "INSULT_MALE_CONV_PART1";
			case 4:
				*iParam0 = 19;
				return "INSULT_MALE_CONV_PART1";
		}
	}
	*iParam0 = 16;
	return "INSULT_MALE_CONV_PART1";
}

char* func_230()
{
	return "GREET_GENERAL";
}

void func_231(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = sParam1;
	iParam0->f_7 = iParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = sParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (func_268(iParam0->f_6))
		{
			if (is_bit_set(*iParam0, 1))
			{
				func_342(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_343(iParam0->f_6, iParam0->f_5, 0);
			}
			func_344(iParam0->f_6, 0, 1);
		}
		else
		{
			set_bit(iParam0, 14);
		}
		set_bit(iParam0, 0);
	}
	else
	{
		func_345(iParam0, iParam0->f_5);
		if (!is_bit_set(*iParam0, 13))
		{
			set_bit(iParam0, 0);
		}
	}
	set_bit(iParam0, 15);
}

void func_232(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_346(iParam0, (*uParam1)[iVar0], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			clear_bit((*uParam1)[iVar0], 14);
		}
		iVar0++;
	}
}

bool func_233()
{
	if (func_172() == -1)
	{
		if (_get_global_block_can_be_accessed(5))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if ((*Global_1392915)[iVar0]->f_1 != -1)
				{
					if (func_250((*Global_1392915)[iVar0]->f_4))
					{
						return true;
					}
				}
				iVar0++;
			}
		}
		return false;
	}
	return false;
}

bool func_234()
{
	return Global_1310750->f_16077 != 0;
}

bool func_235()
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

int func_236(int iParam0)
{
	if (!func_129(iParam0))
	{
		return -1;
	}
	return func_347(func_218(iParam0));
}

bool func_237(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_238(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

char* func_239(int iParam0)
{
	switch (iLocal_176)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return "P1_Part01_JON";
				case 1:
					return "P1_Part02_JON";
				case 2:
					return "P2_Loop01_JON";
				case 3:
					return "P3_Loop01_JON";
				case 4:
					return "P4_Loop01_JON";
				case 5:
					return "P5_Loop01_JON";
				case 6:
					return "P6_Loop01_JON";
				case 7:
					return "P7_Part01_JON";
				case 8:
					return "P7_Part02_JON";
				case 9:
					return "P8_Loop01_JON";
				case 10:
					return "P19_Loop01_JON";
				case 11:
					return "P19_Loop02_JON";
				case 12:
					return "P19_Loop03_JON";
				case 13:
					return "P19_Loop04_JON";
			}
			break;
		case 0:
			switch (iParam0)
			{
				case 0:
					return "P10_Loop01_JON";
				case 1:
					return "P11_Loop01_JON";
				case 2:
					return "P12_Loop01_JON";
				case 3:
					return "P13_Loop01_JON";
				case 4:
					return "P14_Loop01_JON";
				case 5:
					return "P15_Loop01_JON";
				case 6:
					return "P16_Loop01_JON";
				case 7:
					return "P17_Loop01_JON";
				case 8:
					return "P18_Loop01_JON";
				case 9:
					return "P18_Loop02_JON";
				case 10:
					return "P18_Loop03_JON";
			}
			break;
	}
	return "INVALID";
}

int func_240()
{
	if (!bLocal_180)
	{
		iVar0 = 0;
		while (iVar0 < 133)
		{
			iVar1 = iVar0;
			if (has_anim_event_fired(iLocal_255, func_348(iVar1)))
			{
				iLocal_178 = iVar1;
				bLocal_180 = true;
			}
			iVar0++;
		}
	}
	if (bLocal_180)
	{
		sVar2 = func_349(iLocal_178, &uVar3);
		if (func_350(sVar2, uVar3))
		{
			bLocal_180 = false;
			return 1;
		}
	}
	return 0;
}

char* func_241(int iParam0)
{
	switch (iLocal_176)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return "SPGJ_TBP1A";
				case 1:
					return "SPGJ_TBP1B";
				case 2:
					return "SPGJ_TBP2";
				case 3:
					return "SPGJ_TBP3";
				case 4:
					return "SPGJ_TBP4";
				case 5:
					return "SPGJ_TBP5";
				case 6:
					return "SPGJ_TBP6";
				case 7:
					return "SPGJ_TBP7A";
				case 8:
					return "SPGJ_TBP7B";
				case 9:
					return "SPGJ_TBP8";
				case 10:
					return "SPGJ_TBP19A";
				case 11:
					return "SPGJ_TBP19B";
				case 12:
					return "SPGJ_TBP19C";
				case 13:
					return "SPGJ_TBP19D";
			}
			break;
		case 0:
			switch (iParam0)
			{
				case 0:
					return "SPGJ_BRP10";
				case 1:
					return "SPGJ_BRP11";
				case 2:
					return "SPGJ_BRP12";
				case 3:
					return "SPGJ_BRP13";
				case 4:
					return "SPGJ_BRP14";
				case 5:
					return "SPGJ_BRP15";
				case 6:
					return "SPGJ_BRP16";
					Jump @447; //curOff = 404
					return "SPGJ_BRP17";
					Jump @447; //curOff = 414
					return "SPGJ_BRP18A";
					Jump @447; //curOff = 424
					return "SPGJ_BRP18B";
					Jump @447; //curOff = 434
					return "SPGJ_BRP18C";
					return "INVALID";
				}

bool func_242(int iParam0, int iParam1)
{
	if (is_scripted_speech_playing(*iParam0))
	{
		force_sonar_blips_this_frame();
		allow_sonar_blips(true);
		_trigger_sonar_blip_2(iParam1, *iParam0);
		return true;
	}
	return false;
}

bool func_243(int iParam0)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		set_ped_reset_flag(iParam0, 49, true);
		return true;
	}
	return false;
}

bool func_244(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && is_entity_dead(iParam0))
	{
		return false;
	}
	if (!_does_volume_exist(iParam1))
	{
		return false;
	}
	return is_entity_in_volume(iParam0, iParam1, true, 0);
}

bool func_245(char[4] cParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_351(cParam1, cParam0);
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

bool func_246(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_247(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (absf((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (absf((vParam0.y - vParam3.y)) <= fParam6)
		{
			if (!bParam7 || absf((vParam0.z - vParam3.z)) <= fParam6)
			{
				return true;
			}
		}
	}
	return false;
}

void func_248(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_249()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_250(int iParam0)
{
	iVar0 = func_352(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_251(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		if (!(iParam0 > 0 && iParam0 < 771))
		{
			return 0;
		}
		iVar0 = Global_12106[iParam0]->f_1;
	}
	else
	{
		if (!(iParam0 > 0 && iParam0 < 20001))
		{
			return 0;
		}
		iVar0 = func_353(iParam0);
	}
	if (iVar0 == 1)
	{
		return 1;
	}
	if (iVar0 == 2)
	{
		return 1;
	}
	return 0;
}

int func_252()
{
	_get_weather_type_transition(&uVar0, &uVar1, &fVar2);
	if (fVar2 < 0.75f)
	{
		uVar3 = uVar0;
	}
	else
	{
		uVar3 = uVar1;
	}
	return uVar3;
}

bool func_253(var uParam0, vector3 vParam1, float fParam4)
{
	if (!is_itemset_valid(*uParam0))
	{
		*uParam0 = create_itemset(true);
	}
	if (_0x59b57c4b06531e1e(vParam1, fParam4, *uParam0, 2) > 0)
	{
		_0x20a4bf0e09bee146(*uParam0);
		return true;
	}
	_0x20a4bf0e09bee146(*uParam0);
	return false;
}

bool func_254(var uParam0, int iParam1, vector3 vParam2, float fParam5, float fParam6)
{
	if (!is_itemset_valid(*uParam0))
	{
		*uParam0 = create_itemset(true);
	}
	iVar2 = _0x59b57c4b06531e1e(vParam2, fParam6, *uParam0, 1);
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		uVar0 = get_indexed_item_in_itemset(iVar1, *uParam0);
		*iParam1 = uVar0;
		if (does_entity_exist(*iParam1))
		{
			if (!is_entity_dead(*iParam1))
			{
				if (_is_this_model_a_horse(get_entity_model(*iParam1)))
				{
					if (func_354(Global_35, *iParam1, 0))
					{
					}
					else
					{
						_0x20a4bf0e09bee146(*uParam0);
						return true;
					}
				}
			}
		}
		iVar1++;
	}
	_0x20a4bf0e09bee146(*uParam0);
	return false;
}

bool func_255(int iParam0, bool bParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (bParam1)
		{
			return is_ped_dead_or_dying(iParam0, true);
		}
		else
		{
			return is_entity_dead(iParam0);
		}
	}
	return true;
}

void func_256(int iParam0, vector3 vParam1, int iParam4)
{
	if (!func_355(*iParam0, 518218985))
	{
		clear_ped_tasks(*iParam0, 1, 0);
		_task_smart_flee_style_coord(*iParam0, vParam1, 6, 0, iParam4, -1, 0);
	}
}

bool func_257(int iParam0, int* iParam1)
{
	if (iParam1->f_11 & 1 != 0)
	{
		if (_is_ped_lassoed(iParam0))
		{
			return true;
		}
	}
	if (iParam1->f_11 & 2 != 0)
	{
		if (_is_ped_hogtied(iParam0))
		{
			return true;
		}
	}
	bVar0 = iParam1->f_11 & 4 != false;
	bVar1 = iParam1->f_11 & 8 != false;
	if (bVar0 || bVar1)
	{
		if (is_ped_in_combat(iParam0, func_356((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_258(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_275((*uParam0)[iVar0]))
		{
			func_289((*uParam0)[iVar0], 14);
		}
		iVar0++;
	}
}

int func_259(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(*uParam2)[iVar0]->f_8 = 6;
		func_346(iParam0, (*uParam2)[iVar0], fParam3, 3, 0, 6, bParam4, 0);
		if (func_268((*uParam2)[iVar0]->f_6))
		{
			func_289((*uParam2)[iVar0], 11);
			return (*Global_1945938)[(*uParam2)[iVar0]->f_6]->f_3;
		}
	}
	return 0;
}

int func_260(int iParam0)
{
	iVar0 = func_357(*iParam0);
	iVar1 = 2;
	switch (iVar0)
	{
		case 2:
			iVar1 = 295425337;
			break;
		case 1:
			iVar1 = 768137552;
			break;
		case 0:
			iVar1 = 1415388528;
			break;
		case 4:
			iVar1 = 1449436544;
			break;
		case 3:
			iVar1 = -1807204482;
			break;
		case 5:
			iVar1 = -1096701282;
			break;
	}
	return iVar1;
}

int func_261(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0]->f_7 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_262(int* iParam0, int* iParam1)
{
	if (!func_158(iParam0, 23))
	{
		if (iParam1->f_7 == 648122183)
		{
			func_289(iParam1, 19);
			func_277(iParam0, 23);
			func_358(iParam1, 2);
		}
	}
}

bool func_263(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (func_359(16))
	{
		return Global_1935630->f_58 == iParam0;
	}
	if (!is_entity_dead(get_player_ped(player_id())))
	{
		if (_0x3ee1f7a8c32f24e1(player_id(), &iVar0, bParam2, bParam3))
		{
			if (does_entity_exist(iVar0))
			{
				if (is_entity_a_ped(iVar0))
				{
					func_360(16);
					Global_1935630->f_58 = get_ped_index_from_entity_index(iVar0);
					if (Global_1935630->f_58 == iParam0)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

int func_264(int iParam0)
{
	return _money_get_cash_balance();
}

bool func_265(int iParam0)
{
	return (func_361(iParam0, 4) || func_361(iParam0, 5));
}

int func_266(int iParam0)
{
	return func_361(iParam0, 7);
}

int func_267(int iParam0)
{
	return func_361(iParam0, 6);
}

bool func_268(int iParam0)
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

void func_269(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (is_bit_set(*iParam1, 14))
	{
		if (func_275(iParam1))
		{
			clear_bit(iParam1, 14);
			func_346(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_270(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_362(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_363(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_344(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_344(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_364(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_271(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_365(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_366(iParam1, 1))
	{
		func_367(iParam1, 1);
		return true;
	}
	return false;
}

void func_272(var uParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_177((*uParam0)[iVar0], bParam1, bParam2);
		iVar0++;
	}
}

bool func_273(int* iParam0, float fParam1, bool bParam2)
{
	if (iParam0->f_2 != 3)
	{
		if (bParam2 || fParam1 > 0f)
		{
			return true;
		}
	}
	return false;
}

void func_274(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		disable_control_action(0, 1101824977, true);
		disable_control_action(0, 966551065, true);
		disable_control_action(0, 668058244, true);
		set_ped_reset_flag(Global_35, 203, true);
	}
}

bool func_275(int* iParam0)
{
	if (!is_string_null_or_empty(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_276(int iParam0)
{
	iVar1 = get_number_of_events(0);
	if (iVar1 > 0)
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			switch (get_event_at_index(0, iVar0))
			{
				case 1387172233:
					if (get_event_data(0, iVar0, &vVar3, 10))
					{
						iVar2 = vVar3.x;
						switch (iVar2)
						{
							case 9:
								if (is_entity_a_ped(vVar3.z))
								{
									if (iParam0 == get_ped_index_from_entity_index(vVar3.z))
									{
										return true;
									}
								}
								break;
						}
					}
					break;
			}
			iVar0++;
		}
	}
	return false;
}

void func_277(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

void func_278(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_268(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_368(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_369(iVar0);
	*uParam0 = 0;
}

int func_279(var uParam0, float fParam1)
{
	if (func_119(uParam0, fParam1))
	{
		func_48(uParam0);
		return 1;
	}
	return 0;
}

bool func_280(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return true;
	}
	return false;
}

int func_281(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
{
	iParam5 = iParam5;
	iParam1 = iParam1;
	if (is_string_null_or_empty(sParam2))
	{
		return -1;
	}
	if (bParam6)
	{
		if (!is_entity_dead(iParam0) && !is_entity_dead(iParam1))
		{
			if (!has_entity_clear_los_to_entity_in_front(iParam0, iParam1, 17))
			{
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	if (fParam4 == -1f)
	{
		if (func_370())
		{
			fParam4 = 50f;
		}
		else
		{
			fParam4 = 75f;
		}
	}
	if (bParam9)
	{
		if (iParam0 != Global_35 && iParam1 != Global_35)
		{
			if (!is_entity_dead(iParam0))
			{
				if (func_371(iParam0, 1, 1) > fParam4)
				{
					return -1;
				}
			}
		}
	}
	bVar0 = (iParam0 == iParam1 || iParam1 == 0);
	if ((!is_entity_dead(iParam0) || iParam11 == 1718175949) || bParam9 == 0)
	{
		if (!bVar0)
		{
			fVar1 = func_37(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_116(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!is_entity_dead(iParam1))
				{
					task_look_at_entity(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_372(iParam0, iParam1, fVar1, bParam13))
				{
					task_look_at_entity(iParam1, iParam0, 7500, 48, 31, 0);
				}
			}
			if (bParam12)
			{
				Var3.f_5 = 1;
				Var3.f_6 = 1;
				Var3 = sParam2;
				Var3.f_3 = iParam11;
				Var3.f_4 = iParam1;
				Var3.f_5 = network_is_game_in_progress();
				Var3.f_6 = iParam15;
				Var3.f_2 = iParam5;
				if (bParam14)
				{
					set_bit(&(Var3.f_7), 3);
					set_bit(&(Var3.f_7), 2);
				}
				iVar2 = _0x72e4d1c4639bc465(iParam0, &Var3);
				if (iVar2 >= 0)
				{
					_0xb18fec133c7c6c69(iVar2);
				}
			}
			else
			{
				iVar2 = func_373(func_58(iParam0, sParam2, iParam11, iParam1, network_is_game_in_progress(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

bool func_282(int iParam0, int iParam1)
{
	if (func_172() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_283(int iParam0)
{
	if (func_172() != -1)
	{
		if (func_285(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_285(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_284(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_285(iParam0, 65536) && !func_285(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_285(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_285(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_285(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_286(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_287()
{
	return Global_1905944->f_5694;
}

bool func_288(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

void func_289(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

void func_290(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

void func_291(int iParam0)
{
	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_374();
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
			func_375(&(Global_1935630->f_34), &(Global_1935630->f_39));
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

var func_292(int iParam0)
{
	return &(Global_1109400->f_276[iParam0]);
}

bool func_293(bool bParam0)
{
	if (func_376(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_294(var uParam0)
{
	iVar0 = Global_1935630->f_40;
	if (func_172() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_377(uParam0);
		}
	}
	else if (!does_entity_exist(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_377(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_323(iVar0) == -1)
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

void func_295(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_378(uParam0);
	}
}

bool func_296(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_323(iParam2);
	}
	else
	{
		iVar1 = func_322(iParam2);
	}
	if (!is_ped_human(iParam0))
	{
		iVar0 = func_323(iParam0);
	}
	else
	{
		iVar0 = func_322(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_51(*uParam1, 8388608))
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

float func_297(int iParam0, int iParam1)
{
	return func_37(iParam0, iParam1, 1, 1);
}

float func_298(var uParam0)
{
	return uParam0->f_26;
}

bool func_299(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_300(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_70(uParam0, 134217728);
	}
	else
	{
		func_71(uParam0, 134217728);
	}
}

void func_301()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

bool func_302(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
	else if (_0x3ee1f7a8c32f24e1(player_id(), &iVar2, false, false))
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
		if (((_0xcb690f680a3ea971(iVar0, 1) && is_player_targetting_entity(iVar1, iParam0, bParam5)) && is_player_free_aiming_at_entity(iVar1, iParam0)) && func_37(iVar0, iParam0, 1, 1) <= 4f)
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
		if (_is_weapon_sniper(func_379(iVar0, 0)))
		{
			if (func_380(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_303(var uParam0)
{
	return uParam0->f_17;
}

bool func_304(var uParam0, int iParam1, float fParam2, float fParam3)
{
	if (uParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_51(*uParam0, 4194304))
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

int func_305(var uParam0)
{
	return uParam0->f_18;
}

bool func_306(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (_is_weapon_sniper(func_379(iVar0, 0)))
		{
			if (func_381(get_entity_coords(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_307(bool bParam0, bool bParam1, bool bParam2)
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

float func_308(var uParam0)
{
	return uParam0->f_23;
}

int func_309(var uParam0)
{
	return uParam0->f_21;
}

int func_310(var uParam0)
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

bool func_311(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_382(iParam0, vParam4, 0.5f))
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

int func_312(int iParam0)
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
	if (func_383(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_313(int iParam0)
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

bool func_314(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_384(iParam1))
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

bool func_315(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_384(iParam1))
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

bool func_316(var uParam0, int iParam1, float fParam2, int iParam3)
{
	fVar0 = 40f;
	if (func_384(iParam1))
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

bool func_317(int iParam0, int iParam1)
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

bool func_318(int iParam0, int iParam1)
{
	if (_get_lassoed_entity(iParam0) == iParam1)
	{
		return true;
	}
	if (func_60(iParam0, 1, 0, 0) != 2055893578)
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

bool func_319(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

bool func_320(int iParam0, int iParam1, vector3 vParam2)
{
	fVar0 = func_176(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (is_entity_touching_entity(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_321(var uParam0)
{
	return uParam0->f_24;
}

int func_322(int iParam0)
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

int func_323(int iParam0)
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

int func_324(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_317(Global_35, &iVar1))
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
		fVar2 = func_37(iParam0, player_ped_id(), 0, 1);
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
		if (func_37(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
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

bool func_325(int iParam0, var uParam1, bool bParam2)
{
	func_376(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_326(uParam1, iVar0))
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
				if (!bParam2 || !func_326(uParam1, iVar1))
				{
					if (func_176(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_326(var uParam0, int iParam1)
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

int func_327(int iParam0)
{
	if (func_107())
	{
		return 0;
	}
	return func_385((*Global_1347702)[58]->f_15, 1);
}

int func_328(var uParam0)
{
	return uParam0->f_20;
}

int func_329(int iParam0, var uParam1, bool bParam2, float fParam3)
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

void func_330(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_48(&(iParam0->f_18));
}

int func_331(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_386(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

bool func_332(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

bool func_333(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_334(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_387(iParam0);
	}
	else
	{
		func_388(iParam0, iParam1);
	}
	func_389();
}

void func_335(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_2 = iParam1;
}

void func_336(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0] = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0] = iParam1;
}

void func_337(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_5 = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0]->f_1 = iParam1;
}

bool func_338(vector3 vParam0)
{
	return _0x769bb7626b8cdb06(vParam0, 0.5f, 0, 0, 16384);
}

int func_339(int iParam0, bool bParam1)
{
	if (!bParam1 && network_is_game_in_progress())
	{
		return 0;
	}
	if (!_0xf6a8a652a6b186cd(iParam0))
	{
	}
	iVar1 = 0;
	while (iVar1 < &Global_1911670)
	{
		iVar0 = Global_1911670[iVar1];
		if (!_0xf6a8a652a6b186cd(iVar0) || iVar0 == iParam0)
		{
			(*Global_1911670)[iVar1] = iParam0;
			return 1;
		}
		iVar1++;
	}
	return 0;
}

void func_340(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_390(iParam1))
		{
			func_108(iParam0, 41788943);
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
			func_391(iParam0, 0, 1);
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
			func_392(iParam0, 0);
			bVar0 = true;
		}
		func_393(iParam0, bParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

bool func_341()
{
	if (func_172() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 225514697)
	{
		return true;
	}
	return false;
}

void func_342(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3 && !func_268(iParam0))
	{
		return;
	}
	iVar0 = func_368(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(2, sParam1, sParam2));
}

void func_343(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 && !func_268(iParam0))
	{
		return;
	}
	iVar0 = func_368(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, sParam1);
}

void func_344(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_268(iParam0))
	{
		return;
	}
	iVar0 = func_368(iParam0);
	if (bParam1)
	{
		func_394(iParam0, 4);
		func_395(iVar0, 1);
		func_396(iVar0, 1);
	}
	else
	{
		func_397(iParam0, 4);
		func_396(iVar0, 0);
	}
}

void func_345(int* iParam0, char* sParam1)
{
	if (func_268(iParam0->f_6) && !is_string_null_or_empty(sParam1))
	{
		func_343(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_290(iParam0, 1);
}

void func_346(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (func_268(iParam1->f_6))
	{
		if (bParam7 || is_bit_set(*iParam1, 11))
		{
			return;
		}
		func_278(&(iParam1->f_6), 0, 1);
	}
	if (!func_268(iParam1->f_6) && !is_bit_set(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_275(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_398(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824, 0, 1704213876, iParam1->f_10, 0);
			if (func_268(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_364(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_399(iParam1->f_6, 17, 1, 1);
				}
				if (is_bit_set(*iParam1, 1))
				{
					if (is_bit_set(*iParam1, 3))
					{
						func_400(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_342(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (is_bit_set(*iParam1, 10))
				{
					func_399(iParam1->f_6, 16, 1, 1);
				}
				if (!is_bit_set(*iParam1, 0) || is_bit_set(*iParam1, 13))
				{
					func_344(iParam1->f_6, 0, 1);
				}
				else
				{
					func_344(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

int func_347(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

int func_348(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -533947923;
		case 1:
			return -328617369;
		case 2:
			return 647800524;
		case 3:
			return 521285631;
		case 4:
			return -2032173156;
		case 5:
			return -1688589837;
		case 6:
			return -1935176562;
		case 7:
			return -1361719062;
		case 8:
			return -508119409;
		case 9:
			return 1713553285;
		case 10:
			return 1199407675;
		case 11:
			return 1994416384;
		case 12:
			return 1813450870;
		case 13:
			return 320560820;
		case 14:
			return -45010144;
		case 15:
			return -398391040;
		case 16:
			return 1519152533;
		case 17:
			return -740794321;
		case 18:
			return 1181360597;
		case 19:
			return 2045413593;
		case 20:
			return -1472338561;
		case 21:
			return -279383116;
		case 22:
			return -1952306104;
		case 23:
			return -786974926;
		case 24:
			return -1083894835;
		case 25:
			return 877526489;
		case 26:
			return 570579266;
		case 27:
			return 1222616820;
		case 28:
			return 651646215;
		case 29:
			return 2025781461;
		case 30:
			return 177970320;
		case 31:
			return -1258163882;
		case 32:
			return 1186960595;
		case 33:
			return -1600255762;
		case 34:
			return -1236650938;
		case 35:
			return -48741919;
		case 36:
			return 326069903;
		case 37:
			return -914269504;
		case 38:
			return 1600554636;
		case 39:
			return -1432609546;
		case 40:
			return 1924247179;
		case 41:
			return -907354884;
		case 42:
			return -819140736;
		case 43:
			return 288320408;
		case 44:
			return -1563816261;
		case 45:
			return -321477913;
		case 46:
			return 1902958926;
		case 47:
			return -1517257862;
		case 48:
			return -1144543256;
		case 49:
			return -937344869;
		case 50:
			return -564171497;
		case 51:
			return -295039696;
		case 52:
			return -55531075;
		case 53:
			return 269504636;
		case 54:
			return 2122050036;
		case 55:
			return 1882148187;
		case 56:
			return -1796434215;
		case 57:
			return -958793037;
		case 58:
			return -1212195714;
		case 59:
			return -615668838;
		case 60:
			return 586527457;
		case 61:
			return 306319738;
		case 62:
			return -1489144503;
		case 63:
			return 927339868;
		case 64:
			return 1224423622;
		case 65:
			return 1522129987;
		case 66:
			return 1614276415;
		case 67:
			return 1352091634;
		case 68:
			return 1641441904;
		case 69:
			return 1666293718;
		case 70:
			return 726314953;
		case 71:
			return 1326217036;
		case 72:
			return -1854371888;
		case 73:
			return -1631575457;
		case 74:
			return 1106864335;
		case 75:
			return 322407244;
		case 76:
			return -699133562;
		case 77:
			return 865913878;
		case 78:
			return -1955923047;
		case 79:
			return 1474270339;
		case 80:
			return 527410108;
		case 81:
			return 1616833083;
		case 82:
			return 1771863398;
		case 83:
			return 937138661;
		case 84:
			return 1152758681;
		case 85:
			return -1829711858;
		case 86:
			return -1567494320;
		case 87:
			return 83233700;
		case 88:
			return 371830283;
		case 89:
			return 535019903;
		case 90:
			return -1814540230;
		case 91:
			return -1982120896;
		case 92:
			return 2033818365;
		case 93:
			return -563059351;
		case 94:
			return 1128738585;
		case 95:
			return 830704530;
		case 96:
			return -1816309744;
		case 97:
			return -1971307114;
		case 98:
			return 173129007;
		case 99:
			return -124249668;
		case 100:
			return 1759886076;
		case 101:
			return -1280159592;
		case 102:
			return -981470157;
		case 103:
			return -15538344;
		case 104:
			return -1883436882;
		case 105:
			return -359186847;
		case 106:
			return -315931767;
		case 107:
			return 1158968150;
		case 108:
			return -697362927;
		case 109:
			return 1644872293;
		case 110:
			return 966652332;
		case 111:
			return 1279563481;
		case 112:
			return -1007400857;
		case 113:
			return -1437230114;
		case 114:
			return -1204373600;
		case 115:
			return 1238486263;
		case 116:
			return 533144375;
		case 117:
			return 1258781107;
		case 118:
			return 1623972195;
		case 119:
			return 395855609;
		case 120:
			return 90481298;
		case 121:
			return -1631836065;
		case 122:
			return 698475550;
		case 123:
			return 935428185;
		case 124:
			return 1049275373;
		case 125:
			return -1305552771;
		case 126:
			return -629575373;
		case 127:
			return -45477584;
		case 128:
			return -906112574;
		case 129:
			return -69683849;
		case 130:
			return -309225239;
		case 131:
			return -2101397329;
		case 132:
			return -1961808188;
		default:
			break;
	}
	return -1;
}

char* func_349(int iParam0, var uParam1)
{
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "SPGJ_TBP1A";
			*uParam1 = 0;
			break;
		case 1:
			sVar0 = "SPGJ_TBP1A";
			*uParam1 = 1;
			break;
		case 2:
			sVar0 = "SPGJ_TBP1A";
			*uParam1 = 2;
			break;
		case 3:
			sVar0 = "SPGJ_TBP1B";
			*uParam1 = 0;
			break;
		case 4:
			sVar0 = "SPGJ_TBP1B";
			*uParam1 = 1;
			break;
		case 5:
			sVar0 = "SPGJ_TBP2";
			*uParam1 = 0;
			break;
		case 6:
			sVar0 = "SPGJ_TBP2";
			*uParam1 = 1;
			break;
		case 7:
			sVar0 = "SPGJ_TBP2";
			*uParam1 = 2;
			break;
		case 8:
			sVar0 = "SPGJ_TBP2";
			*uParam1 = 3;
			break;
		case 9:
			sVar0 = "SPGJ_TBP2";
			*uParam1 = 4;
			break;
		case 10:
			sVar0 = "SPGJ_TBP2";
			*uParam1 = 5;
			break;
		case 11:
			sVar0 = "SPGJ_TBP2";
			*uParam1 = 6;
			break;
		case 12:
			sVar0 = "SPGJ_TBP3";
			*uParam1 = 0;
			break;
		case 13:
			sVar0 = "SPGJ_TBP3";
			*uParam1 = 1;
			break;
		case 14:
			sVar0 = "SPGJ_TBP3";
			*uParam1 = 2;
			break;
		case 15:
			sVar0 = "SPGJ_TBP3";
			*uParam1 = 3;
			break;
		case 16:
			sVar0 = "SPGJ_TBP3";
			*uParam1 = 4;
			break;
		case 17:
			sVar0 = "SPGJ_TBP3";
			*uParam1 = 5;
			break;
		case 18:
			sVar0 = "SPGJ_TBP4";
			*uParam1 = 0;
			break;
		case 19:
			sVar0 = "SPGJ_TBP4";
			*uParam1 = 1;
			break;
		case 20:
			sVar0 = "SPGJ_TBP4";
			*uParam1 = 2;
			break;
		case 21:
			sVar0 = "SPGJ_TBP4";
			*uParam1 = 3;
			break;
		case 22:
			sVar0 = "SPGJ_TBP4";
			*uParam1 = 4;
			break;
		case 23:
			sVar0 = "SPGJ_TBP4";
			*uParam1 = 5;
			break;
		case 24:
			sVar0 = "SPGJ_TBP4";
			*uParam1 = 6;
			break;
		case 25:
			sVar0 = "SPGJ_TBP4";
			*uParam1 = 7;
			break;
		case 26:
			sVar0 = "SPGJ_TBP4";
			*uParam1 = 8;
			break;
		case 27:
			sVar0 = "SPGJ_TBP4";
			*uParam1 = 9;
			break;
		case 28:
			sVar0 = "SPGJ_TBP5";
			*uParam1 = 0;
			break;
		case 29:
			sVar0 = "SPGJ_TBP5";
			*uParam1 = 1;
			break;
		case 30:
			sVar0 = "SPGJ_TBP5";
			*uParam1 = 2;
			break;
		case 31:
			sVar0 = "SPGJ_TBP5";
			*uParam1 = 3;
			break;
		case 32:
			sVar0 = "SPGJ_TBP5";
			*uParam1 = 4;
			break;
		case 33:
			sVar0 = "SPGJ_TBP6";
			*uParam1 = 0;
			break;
		case 34:
			sVar0 = "SPGJ_TBP6";
			*uParam1 = 1;
			break;
		case 35:
			sVar0 = "SPGJ_TBP6";
			*uParam1 = 2;
			break;
		case 36:
			sVar0 = "SPGJ_TBP6";
			*uParam1 = 3;
			break;
		case 37:
			sVar0 = "SPGJ_TBP6";
			*uParam1 = 4;
			break;
		case 38:
			sVar0 = "SPGJ_TBP6";
			*uParam1 = 5;
			break;
		case 39:
			sVar0 = "SPGJ_TBP6";
			*uParam1 = 6;
			break;
		case 40:
			sVar0 = "SPGJ_TBP7A";
			*uParam1 = 0;
			break;
		case 41:
			sVar0 = "SPGJ_TBP7A";
			*uParam1 = 1;
			break;
		case 42:
			sVar0 = "SPGJ_TBP7A";
			*uParam1 = 2;
			break;
		case 43:
			sVar0 = "SPGJ_TBP7A";
			*uParam1 = 3;
			break;
		case 44:
			sVar0 = "SPGJ_TBP7A";
			*uParam1 = 4;
			break;
		case 45:
			sVar0 = "SPGJ_TBP7A";
			*uParam1 = 5;
			break;
		case 46:
			sVar0 = "SPGJ_TBP7B";
			*uParam1 = 0;
			break;
		case 47:
			sVar0 = "SPGJ_TBP8";
			*uParam1 = 0;
			break;
		case 48:
			sVar0 = "SPGJ_TBP8";
			*uParam1 = 1;
			break;
		case 49:
			sVar0 = "SPGJ_TBP8";
			*uParam1 = 2;
			break;
		case 50:
			sVar0 = "SPGJ_TBP8";
			*uParam1 = 3;
			break;
		case 51:
			sVar0 = "SPGJ_TBP8";
			*uParam1 = 4;
			break;
		case 52:
			sVar0 = "SPGJ_TBP8";
			*uParam1 = 5;
			break;
		case 53:
			sVar0 = "SPGJ_TBP8";
			*uParam1 = 6;
			break;
		case 54:
			sVar0 = "SPGJ_BRP10";
			*uParam1 = 0;
			break;
		case 55:
			sVar0 = "SPGJ_BRP10";
			*uParam1 = 1;
			break;
		case 56:
			sVar0 = "SPGJ_BRP10";
			*uParam1 = 2;
			break;
		case 57:
			sVar0 = "SPGJ_BRP10";
			*uParam1 = 3;
			break;
		case 58:
			sVar0 = "SPGJ_BRP10";
			*uParam1 = 4;
			break;
		case 59:
			sVar0 = "SPGJ_BRP10";
			*uParam1 = 5;
			break;
		case 60:
			sVar0 = "SPGJ_BRP10";
			*uParam1 = 6;
			break;
		case 61:
			sVar0 = "SPGJ_BRP10";
			*uParam1 = 7;
			break;
		case 62:
			sVar0 = "SPGJ_BRP11";
			*uParam1 = 0;
			break;
		case 63:
			sVar0 = "SPGJ_BRP11";
			*uParam1 = 1;
			break;
		case 64:
			sVar0 = "SPGJ_BRP11";
			*uParam1 = 2;
			break;
		case 65:
			sVar0 = "SPGJ_BRP11";
			*uParam1 = 3;
			break;
		case 66:
			sVar0 = "SPGJ_BRP11";
			*uParam1 = 4;
			break;
		case 67:
			sVar0 = "SPGJ_BRP11";
			*uParam1 = 5;
			break;
		case 68:
			sVar0 = "SPGJ_BRP11";
			*uParam1 = 6;
			break;
		case 69:
			sVar0 = "SPGJ_BRP12";
			*uParam1 = 0;
			break;
		case 70:
			sVar0 = "SPGJ_BRP12";
			*uParam1 = 1;
			break;
		case 71:
			sVar0 = "SPGJ_BRP12";
			*uParam1 = 2;
			break;
		case 72:
			sVar0 = "SPGJ_BRP13";
			*uParam1 = 0;
			break;
		case 73:
			sVar0 = "SPGJ_BRP13";
			*uParam1 = 1;
			break;
		case 74:
			sVar0 = "SPGJ_BRP13";
			*uParam1 = 2;
			break;
		case 75:
			sVar0 = "SPGJ_BRP13";
			*uParam1 = 3;
			break;
		case 76:
			sVar0 = "SPGJ_BRP13";
			*uParam1 = 4;
			break;
		case 77:
			sVar0 = "SPGJ_BRP13";
			*uParam1 = 5;
			break;
		case 78:
			sVar0 = "SPGJ_BRP13";
			*uParam1 = 6;
			break;
		case 79:
			sVar0 = "SPGJ_BRP13";
			*uParam1 = 7;
			break;
		case 80:
			sVar0 = "SPGJ_BRP13";
			*uParam1 = 8;
			break;
		case 81:
			sVar0 = "SPGJ_BRP14";
			*uParam1 = 0;
			break;
		case 82:
			sVar0 = "SPGJ_BRP14";
			*uParam1 = 1;
			break;
		case 83:
			sVar0 = "SPGJ_BRP14";
			*uParam1 = 2;
			break;
		case 84:
			sVar0 = "SPGJ_BRP14";
			*uParam1 = 3;
			break;
		case 85:
			sVar0 = "SPGJ_BRP14";
			*uParam1 = 4;
			break;
		case 86:
			sVar0 = "SPGJ_BRP14";
			*uParam1 = 5;
			break;
		case 87:
			sVar0 = "SPGJ_BRP15";
			*uParam1 = 0;
			break;
		case 88:
			sVar0 = "SPGJ_BRP15";
			*uParam1 = 1;
			break;
		case 89:
			sVar0 = "SPGJ_BRP15";
			*uParam1 = 2;
			break;
		case 90:
			sVar0 = "SPGJ_BRP16";
			*uParam1 = 0;
			break;
		case 91:
			sVar0 = "SPGJ_BRP16";
			*uParam1 = 1;
			break;
		case 92:
			sVar0 = "SPGJ_BRP16";
			*uParam1 = 2;
			break;
		case 93:
			sVar0 = "SPGJ_BRP16";
			*uParam1 = 3;
			break;
		case 94:
			sVar0 = "SPGJ_BRP16";
			*uParam1 = 4;
			break;
		case 95:
			sVar0 = "SPGJ_BRP16";
			*uParam1 = 5;
			break;
		case 96:
			sVar0 = "SPGJ_BRP16";
			*uParam1 = 6;
			break;
		case 97:
			sVar0 = "SPGJ_BRP16";
			*uParam1 = 7;
			break;
		case 98:
			sVar0 = "SPGJ_BRP16";
			*uParam1 = 8;
			break;
		case 99:
			sVar0 = "SPGJ_BRP16";
			*uParam1 = 9;
			break;
		case 100:
			sVar0 = "SPGJ_BRP17";
			*uParam1 = 0;
			break;
		case 101:
			sVar0 = "SPGJ_BRP17";
			*uParam1 = 1;
			break;
		case 102:
			sVar0 = "SPGJ_BRP17";
			*uParam1 = 2;
			break;
		case 103:
			sVar0 = "SPGJ_BRP17";
			*uParam1 = 3;
			break;
		case 104:
			sVar0 = "SPGJ_BRP17";
			*uParam1 = 4;
			break;
		case 105:
			sVar0 = "SPGJ_BRP17";
			*uParam1 = 5;
			break;
		case 106:
			sVar0 = "SPGJ_BRP17";
			*uParam1 = 6;
			break;
		case 107:
			sVar0 = "SPGJ_BRP17";
			*uParam1 = 7;
			break;
		case 108:
			sVar0 = "SPGJ_BRP17";
			*uParam1 = 8;
			break;
		case 109:
			sVar0 = "SPGJ_BRP18A";
			*uParam1 = 0;
			break;
		case 110:
			sVar0 = "SPGJ_BRP18A";
			*uParam1 = 1;
			break;
		case 111:
			sVar0 = "SPGJ_BRP18A";
			*uParam1 = 2;
			break;
		case 112:
			sVar0 = "SPGJ_BRP18B";
			*uParam1 = 0;
			break;
		case 113:
			sVar0 = "SPGJ_BRP18C";
			*uParam1 = 0;
			break;
		case 114:
			sVar0 = "SPGJ_BRP18C";
			*uParam1 = 1;
			break;
		case 115:
			sVar0 = "SPGJ_TBP19A";
			*uParam1 = 0;
			break;
		case 116:
			sVar0 = "SPGJ_TBP19B";
			*uParam1 = 0;
			break;
		case 117:
			sVar0 = "SPGJ_TBP19B";
			*uParam1 = 1;
			break;
		case 118:
			sVar0 = "SPGJ_TBP19C";
			*uParam1 = 0;
			break;
		case 119:
			sVar0 = "SPGJ_TBP19C";
			*uParam1 = 1;
			break;
		case 120:
			sVar0 = "SPGJ_TBP19C";
			*uParam1 = 2;
			break;
		case 121:
			sVar0 = "SPGJ_TBP19D";
			*uParam1 = 0;
			break;
		case 122:
			sVar0 = "SPGJ_TB20_EF";
			*uParam1 = 0;
			break;
		case 123:
			sVar0 = "SPGJ_TB20_EF";
			*uParam1 = 1;
			break;
		case 124:
			sVar0 = "SPGJ_TB20A";
			*uParam1 = 0;
			break;
		case 125:
			sVar0 = "SPGJ_TB20B";
			*uParam1 = 0;
			break;
		case 126:
			sVar0 = "SPGJ_TB20_PO";
			*uParam1 = 0;
			break;
		case 127:
			sVar0 = "SPGJ_TB20_PO2";
			*uParam1 = 0;
			break;
		case 128:
			sVar0 = "SPGJ_BR20_EF";
			*uParam1 = 0;
			break;
		case 129:
			sVar0 = "SPGJ_BR20_EF";
			*uParam1 = 1;
			break;
		case 130:
			sVar0 = "SPGJ_BR20_EF";
			*uParam1 = 2;
			break;
		case 131:
			if (!func_12(13, 16777216))
			{
				sVar0 = "SPGJ_BR20_E";
				*uParam1 = 0;
			}
			else
			{
				sVar0 = "SPGJ_BR20_E2";
				*uParam1 = 0;
			}
			break;
	}
	return sVar0;
}

bool func_350(char* sParam0, int iParam1)
{
	if (!_0x54b187f111d9c6f8(iLocal_255, 1) && !is_any_speech_playing(iLocal_255))
	{
		StringCopy(&cVar0, sParam0, 24);
		bVar3 = func_245(&uLocal_21, cVar0, 1, iParam1, 0, 0);
		return bVar3;
	}
	return false;
}

void func_351(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)
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

int func_352(int iParam0)
{
	if (!func_129(iParam0))
	{
		return -1;
	}
	return func_353(iParam0);
}

int func_353(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_401(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

bool func_354(int iParam0, int iParam1, bool bParam2)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		if (does_entity_exist(iParam1) && !is_entity_dead(iParam1))
		{
			if (bParam2)
			{
				return (_is_ped_getting_into_a_mount_seat(iParam0, true) && get_mount(iParam0) == iParam1);
			}
			else
			{
				return (is_ped_on_mount(iParam0) && get_mount(iParam0) == iParam1);
			}
		}
	}
	return false;
}

bool func_355(int iParam0, int iParam1)
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

int func_356(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

int func_357(int iParam0)
{
	iVar0 = get_ped_relationship_group_default_hash(iParam0);
	switch (iVar0)
	{
		case -1448293989:
			return 3;
		case 555364152:
			return 2;
		case -1996978098:
			return 0;
		case 1078461828:
			return 1;
		case -1535431934:
			return 4;
		case -1663301869:
			return 5;
		default:
			break;
	}
	return -1;
}

void func_358(int* iParam0, int iParam1)
{
	if (!func_288(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_289(iParam0, 14);
		}
	}
}

bool func_359(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_360(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_361(int iParam0, int iParam1)
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

bool func_362(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
{
	bVar0 = (is_bit_set(*iParam1, 0) && !is_bit_set(*iParam1, 4));
	if (is_bit_set(*iParam1, 13))
	{
		return true;
	}
	if (bParam10)
	{
		if (is_bit_set(*iParam1, 20))
		{
			if (!is_bit_set(*iParam0, 25))
			{
				set_bit(iParam0, 24);
			}
			return true;
		}
	}
	if (is_bit_set(*iParam1, 9))
	{
		clear_bit(iParam1, 9);
		return true;
	}
	if (bParam6)
	{
		if (is_bit_set(*iParam1, 6))
		{
			return true;
		}
	}
	else if (is_bit_set(*iParam1, 5))
	{
		return true;
	}
	if (is_bit_set(*iParam1, 7))
	{
		if (fParam5 > iParam1->f_4)
		{
			return true;
		}
	}
	if (!is_bit_set(*iParam1, 17))
	{
		if (bParam3)
		{
			if (bParam4)
			{
				return true;
			}
		}
	}
	if (!is_bit_set(*iParam1, 18))
	{
		if (is_bit_set(*iParam1, 8))
		{
			bVar1 = false;
			if (fParam9 > -1f)
			{
				if (fParam9 < iParam1->f_3)
				{
					bVar1 = true;
				}
			}
			if (!bParam7)
			{
				if (bParam8 || bVar1)
				{
					return true;
				}
			}
		}
	}
	if (!is_bit_set(*iParam1, 2))
	{
		if (is_bit_set(*iParam1, 1))
		{
			if (iParam11 < iParam1->f_14)
			{
				return true;
			}
		}
	}
	return !bVar0;
}

bool func_363(int iParam0, bool bParam1)
{
	if (bParam1 && !func_268(iParam0))
	{
		return false;
	}
	return !func_402(iParam0, 4);
}

void func_364(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (bParam3 && !func_268(iParam0))
	{
		return;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar0 = func_368(iParam0);
	func_399(iParam0, 18, 0, 1);
	func_399(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = _uiprompt_get_group_id_for_target_entity(iParam1);
	}
	_uiprompt_set_group((*Global_1945938)[iVar0]->f_3, iParam4, iParam2);
}

bool func_365(int iParam0, bool bParam1)
{
	if (bParam1 && !func_268(iParam0))
	{
		return false;
	}
	iVar0 = func_368(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

bool func_366(int iParam0, bool bParam1)
{
	if (bParam1 && !func_268(iParam0))
	{
		return false;
	}
	iVar0 = func_368(iParam0);
	return _uiprompt_is_pressed((*Global_1945938)[iVar0]->f_3);
}

void func_367(int iParam0, bool bParam1)
{
	if (bParam1 && !func_268(iParam0))
	{
		return;
	}
	iVar0 = func_368(iParam0);
	_uiprompt_restart_modes((*Global_1945938)[iVar0]->f_3);
}

int func_368(int iParam0)
{
	return iParam0;
}

void func_369(int iParam0)
{
	if (!func_403(iParam0))
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

bool func_370()
{
	return (Global_1894899 & 1 != 0 && func_404() != -1);
}

float func_371(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return -1f;
	}
	return func_37(Global_35, iParam0, bParam1, bParam2);
}

bool func_372(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!bParam3)
	{
		return false;
	}
	if (fParam2 > 25f)
	{
		return false;
	}
	if (iParam1 == Global_35)
	{
		if (is_ped_in_combat(Global_35, 0))
		{
			return false;
		}
	}
	return true;
}

int func_373(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_374()
{
	if (func_405())
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

void func_375(var uParam0, var uParam1)
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

bool func_376(bool bParam0, int iParam1, int iParam2)
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

int func_377(var uParam0)
{
	if (iVar0 == 0)
	{
		if (is_control_just_pressed(0, -171675621))
		{
			if (_0x3ee1f7a8c32f24e1(player_id(), &iVar1, false, false))
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

void func_378(var uParam0)
{
	if (Global_1935630->f_38 == 0)
	{
		func_71(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (does_entity_exist(&(Global_1935630->f_34[iVar0])))
			{
				if (!_0x88ad6cc10d8d35b2(&(Global_1935630->f_34[iVar0])))
				{
					func_70(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_379(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_380(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_381(get_entity_coords(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_381(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_382(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { get_entity_forward_vector(iParam0) };
	vVar3 = { vParam1 - get_entity_coords(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_383(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_384(int iParam0)
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

int func_385(int iParam0, bool bParam1)
{
	switch (func_352(iParam0))
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

int func_386(int iParam0, int iParam1)
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

int func_387(int iParam0)
{
	iVar0 = func_401(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_406(iVar0);
}

int func_388(int iParam0, int iParam1)
{
	if (Global_1058888->f_40501 >= 32)
	{
		return -1;
	}
	Var0 = -1;
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	if (Global_1058888->f_40501 == 0)
	{
		*Global_1058888->f_40501.f_1[Global_1058888->f_40501] = { Var0 };
		Global_1058888->f_40501++;
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < Global_1058888->f_40501)
	{
		if (iParam0 == &Global_1058888->f_40501.f_1[iVar2])
		{
			*Global_1058888->f_40501.f_1[iVar2] = { Var0 };
			return iVar2;
		}
		else if (iParam0 > &Global_1058888->f_40501.f_1[iVar2])
		{
			iVar2++;
		}
		else if (iParam0 < &Global_1058888->f_40501.f_1[iVar2])
		{
			func_407(iVar2);
			*Global_1058888->f_40501.f_1[iVar2] = { Var0 };
			return iVar2;
		}
	}
	if (Global_1058888->f_40501 < 31)
	{
		iVar2 = Global_1058888->f_40501;
		*Global_1058888->f_40501.f_1[iVar2] = { Var0 };
		Global_1058888->f_40501++;
		if (Global_1058888->f_40501 > 32)
		{
			Global_1058888->f_40501 = 32;
		}
		return iVar2;
	}
	return -1;
}

void func_389()
{
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

bool func_390(int iParam0)
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

void func_391(int iParam0, int iParam1, bool bParam2)
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

void func_392(int iParam0, bool bParam1)
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

void func_393(int iParam0, bool bParam1)
{
	if (bParam1 == 1)
	{
		_set_ped_face_feature(iParam0, 41611, 0f);
	}
	else
	{
		_set_ped_face_feature(iParam0, 41611, 1f);
	}
}

void func_394(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_395(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_402(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_396(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_397(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

int func_398(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_402(iVar0, 2))
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
				func_408(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, uParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_399(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_268(iParam0))
	{
		return;
	}
	iVar0 = func_368(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1945938)[iVar0]->f_3, iParam1, iParam2);
}

void func_400(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	if (bParam4 && !func_268(iParam0))
	{
		return;
	}
	iVar0 = func_368(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(10, sParam1, sParam2, sParam3));
}

int func_401(int iParam0)
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

bool func_402(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

bool func_403(int iParam0)
{
	return func_402(iParam0, 2);
}

int func_404()
{
	return Global_1894899->f_2;
}

bool func_405()
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

int func_406(int iParam0)
{
	iVar0 = iParam0;
	while (iVar0 < Global_1058888->f_40501)
	{
		if (iVar0 + 1 < 32)
		{
			*Global_1058888->f_40501.f_1[iVar0] = { *(Global_1058888->f_40501.f_1[iVar0 + 1]) };
		}
		iVar0++;
	}
	Var1 = -1;
	if (Global_1058888->f_40501 < 32)
	{
		*Global_1058888->f_40501.f_1[Global_1058888->f_40501] = { Var1 };
	}
	Global_1058888->f_40501 = (Global_1058888->f_40501 - 1);
	if (Global_1058888->f_40501 < 0)
	{
		Global_1058888->f_40501 = 0;
	}
	return 1;
}

int func_407(int iParam0)
{
	iVar0 = (Global_1058888->f_40501 - 1);
	Var1 = -1;
	while (iVar0 >= iParam0)
	{
		if (iVar0 + 1 < 32)
		{
			*(Global_1058888->f_40501.f_1[iVar0 + 1]) = { *Global_1058888->f_40501.f_1[iVar0] };
		}
		iVar0 = (iVar0 - 1);
	}
	*Global_1058888->f_40501.f_1[iParam0] = { Var1 };
	Global_1058888->f_40501++;
	if (Global_1058888->f_40501 > 32)
	{
		Global_1058888->f_40501 = 32;
	}
	return 1;
}

void func_408(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, var uParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
			_uiprompt_set_hold_auto_fill_mode(iVar0, iParam16, uParam15);
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
	func_395(iParam0, 1);
	func_396(iParam0, 1);
	func_397(iParam0, 128);
}

