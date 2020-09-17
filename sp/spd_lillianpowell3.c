void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_16 = 1;
	iLocal_249 = 426274298;
	iLocal_250 = 658220713;
	iLocal_251 = -550539090;
	iLocal_252 = 314775562;
	fLocal_258 = 2f;
	iLocal_307 = -1;
	if (has_force_cleanup_occurred(555))
	{
		if (get_cause_of_most_recent_force_cleanup() != 32)
		{
		}
		else
		{
			iLocal_278 = 1;
		}
		func_1();
	}
	Global_1935183->f_28 = 1;
	while (true)
	{
		wait(0);
		func_2();
		bLocal_390 = func_3(Global_35, iVar261, 0, 1);
		if (does_entity_exist(iLocal_253))
		{
			bVar2 = false;
			bVar3 = false;
			if (!func_4(iLocal_253, 0))
			{
				func_1();
			}
			else if (iLocal_14 > 2 && iLocal_14 < 82)
			{
				if ((((func_5(iVar270, 32768) && func_5(iVar270, 1048576)) && !bVar309) && !func_5(iVar270, 4194304)) && iLocal_14 != 82)
				{
					func_6();
				}
				else if (!func_5(iVar270, 1))
				{
					if (func_7(fVar256, &bVar2, &bVar3, 1104674816, 1102053376, (bVar308 && !bVar388)))
					{
						if (_0xa2cac9def0195e6f(1))
						{
							_0x36559148b78853b3(1, 0, 0);
						}
						func_8(&uLocal_272, 32768);
						func_8(&uLocal_272, 1);
						if (bVar2)
						{
							func_8(&uLocal_272, 2097152);
						}
						if (bVar3)
						{
							func_8(&uLocal_272, 1048576);
						}
						else
						{
							func_9(&uLocal_270);
							func_9(&uLocal_271);
							reset_anim_scene(iVar268, 0);
							reset_anim_scene(iVar269, 0);
							func_10(82);
						}
						iLocal_277 = 1;
					}
				}
			}
		}
		if (!func_4(Global_35, 0))
		{
			func_1();
		}
		else if (!func_3(Global_35, (*(*Global_1396257)[16])[2]->f_47, 0, 1) || func_11() != 5)
		{
			if (!func_12(&uLocal_242))
			{
				func_13(&uLocal_242, 0);
			}
			else if (func_14(&uLocal_242) > 10f)
			{
				func_15(&uLocal_242);
				func_1();
			}
		}
		else if (func_16(16, 2, &uLocal_284, iLocal_253))
		{
			iLocal_386 = 1;
			if (func_17(&uLocal_284))
			{
				func_1();
			}
		}
		else if (func_12(&uLocal_242))
		{
			func_15(&uLocal_242);
		}
		if (!func_5(iVar270, 1) && iLocal_14 > 2)
		{
			bLocal_310 = (((func_18(16, iLocal_253, 1, 1) || !bVar388) && iLocal_14 > 2) && iVar384 == 0);
			if (bVar308)
			{
			}
			else
			{
				if (func_19(Global_35, 1))
				{
					func_20(16, 2, &iLocal_253, &uLocal_245, &uLocal_279, 0, 1097859072, 0);
				}
				func_21(iLocal_253, &uLocal_272, 33554432, 67108864, 134217728, "SPECIAL_PED_10_180_SMALL_NO_LOCK", "SPECIAL_PED_GENERIC_INTERACT_FOCUS", "LillianBubble", "LillianConvo");
				func_22(iVar270, 268435456);
				if (is_entity_in_volume(Global_35, iVar259, true, 0))
				{
					disable_control_action(0, -762150781, false);
				}
				func_23();
				if (!func_5(iVar270, 1))
				{
					if (_does_volume_exist(iVar259))
					{
						if (is_entity_in_volume(Global_35, iVar259, true, 0) && !func_5(iVar270, 4))
						{
							if (!func_5(iVar270, 32))
							{
								func_8(&uLocal_272, 32);
								iLocal_16 = 1;
							}
						}
						else if (func_5(iVar270, 32))
						{
							func_24(&uLocal_272, 32);
						}
					}
					func_25(&iLocal_14);
					func_26(iLocal_253, &uLocal_272, 131072, 16, 0);
					set_ped_reset_flag(iLocal_253, 49, true);
					set_ped_reset_flag(iLocal_253, 53, true);
					if (iLocal_15 == 14)
					{
						if (is_entity_in_volume(Global_35, iVar258, true, 0) && iLocal_14 < 78)
						{
							if (!func_12(&uLocal_281))
							{
								func_13(&uLocal_281, 0);
							}
						}
						else if (func_12(&uLocal_281))
						{
							func_15(&uLocal_281);
						}
					}
					func_27();
					if (does_entity_exist(iLocal_253) && !is_entity_dead(iLocal_253))
					{
						set_ped_can_play_gesture_anims(iLocal_253, 0, 1);
					}
				}
				if ((((does_entity_exist(iLocal_253) && !is_entity_dead(iLocal_253)) && iLocal_14 != 82) && _does_volume_exist(iVar264)) && func_28(Global_35, iVar264, 1, 0))
				{
					disable_control_action(0, 782960533, false);
				}
				switch (iLocal_14)
				{
					case 0:
						_text_database_request("SPDEF");
						_text_database_request("SPLPAUD");
						_text_database_request("STDRGAU");
						request_model(iLocal_249, false);
						request_model(iLocal_251, false);
						request_model(iLocal_250, false);
						request_model(iLocal_252, false);
						func_29();
						func_30(iVar257, "SP_LilllianPowell1_Block", 1, 0, 0, 0, -1082130432);
						uLocal_306 = func_31(iVar260, 0, 0, 0);
						iLocal_248 = func_33(16, 2, 9, func_32(16));
						if (!func_34(iLocal_248))
						{
						}
						iLocal_378 = func_33(16, 3, 9, func_32(16));
						iLocal_379 = func_35(iVar376);
						if (func_36())
						{
							func_37(&uLocal_17, Global_35, "JOHN", 0);
						}
						else
						{
							func_37(&uLocal_17, Global_35, "ARTHUR", 0);
						}
						func_38(&uLocal_284);
						func_39(&uLocal_213, 1);
						func_40(&uLocal_213, 1);
						func_41(&uLocal_213, 1);
						func_42(&uLocal_213, 1);
						func_43(&uLocal_213, 1);
						func_44(&uLocal_213, 0);
						func_45(&uLocal_213, 0);
						func_46(&uLocal_213, 1, 1, 1);
						func_47(&uLocal_213, 0);
						func_48(&uLocal_213, 0);
						func_49(&uLocal_213, 0);
						func_50(&uLocal_213, 1);
						func_51(&uLocal_213, 1);
						func_52(&uLocal_213, 1);
						func_53(&uLocal_213, 1);
						func_54(&uLocal_213, 1);
						func_55(&uLocal_213, 1);
						func_56(&uLocal_213, 1);
						func_57(&uLocal_213, 1);
						func_58(&uLocal_213, 1);
						func_59(&uLocal_213, 1);
						func_60(&uLocal_213, 1);
						func_61(&uLocal_213, 27);
						func_62(&uLocal_213, 27f, 1);
						func_63(&uLocal_213, 27f);
						func_64(&uLocal_213, 22f);
						if (func_36())
						{
							iLocal_385 = 1;
						}
						if (func_34(iLocal_248))
						{
							if (!func_65(iLocal_248, 1))
							{
								func_10(1);
							}
							else
							{
								func_10(83);
							}
						}
						iLocal_380 = get_random_int_in_range(0, 7);
						break;
					case 1:
						_0xed9582b3da8f02b4(1);
						if (((((((_text_database_has_loaded("SPDEF") && _text_database_has_loaded("SPLPAUD")) && _text_database_has_loaded("STDRGAU")) && has_model_loaded(iLocal_249)) && has_model_loaded(iLocal_251)) && has_model_loaded(iLocal_250)) && has_model_loaded(iLocal_252)) && _0x5c16855277819bbf() == 1)
						{
							func_10(2);
						}
						if (!_text_database_has_loaded("SPDEF"))
						{
						}
						if (!_text_database_has_loaded("SPLPAUD"))
						{
						}
						if (!_text_database_has_loaded("STDRGAU"))
						{
						}
						if (!has_model_loaded(iLocal_249))
						{
						}
						if (!has_model_loaded(iLocal_251))
						{
						}
						if (!has_model_loaded(iLocal_250))
						{
						}
						if (!has_model_loaded(iLocal_252))
						{
						}
						if (_0x5c16855277819bbf() != 1)
						{
						}
						break;
					case 2:
						if (((func_66(&iLocal_253, iLocal_249, 2636.429f, -1229.537f, 52.3795f, 358.7895f, 2, bVar383, !bVar383) && func_67(&uLocal_256, iLocal_251, 2636.611f, -1230.318f, 52.8894f)) && func_67(&uLocal_257, iLocal_252, 2637.884f, -1230.344f, 53.1922f)) && func_67(&iLocal_255, iLocal_250, 2637.932f, -1230.235f, 53.2323f))
						{
							if (func_4(iLocal_253, 0))
							{
								if (bVar383)
								{
									func_68(iLocal_253, 1689938120);
								}
								func_69(iLocal_253, 16);
								add_entity_to_audio_mix_group(iLocal_253, "special_ped_group", 0f);
								set_ped_can_ragdoll_from_player_impact(iLocal_253, false);
								set_ped_combat_attributes(iLocal_253, 17, true);
								set_ped_combat_attributes(iLocal_253, 5, false);
								_0x24c82ef607105faa(iLocal_253, 1789063806);
								stop_ped_speaking(iLocal_253, true);
								func_70(&iLocal_253, &uLocal_273, 161068336, 20f, -1082130432);
								func_37(&uLocal_17, iLocal_253, "LILLIAN_POWELL", 0);
								_set_entity_coords_and_heading(iLocal_253, 2636.429f, -1229.537f, 52.3795f, 358.7895f, true, false, true);
								uLocal_265 = _0x0eb78c2b156635b1(665633627, 2636.429f, -1229.537f, 52.3795f, 0f, 0f, 0f, 1f, 1f, 1.3f);
								_0x7c00cfc48a782dc0(iVar263, iLocal_253, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
								func_71();
								_0x3946fc742ac305cd(player_id(), iLocal_253, "SPECIAL_PED_10_180_SMALL_NO_LOCK", 0f, 0f, 0f, 0, "LillianBubble");
								func_72(0);
								func_73(0, 0, "SPD_UC_GRT", "", -163964935, 0, 0, 0);
								func_73(0, 1, "SPD_UC_ANT", "", 648122183, 0, 0, 0);
								func_75(0, func_74(3, 0, 0), 0);
								func_8(&uLocal_272, 1073741824);
								_0x7c00cfc48a782dc0(iVar262, iLocal_253, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
								func_10(29);
							}
						}
						break;
					case 3:
						break;
					case 7:
						if ((iVar384 && func_76(&uLocal_284)) && !func_17(&uLocal_284))
						{
							if (!func_5(iVar270, 64))
							{
								func_8(&uLocal_272, 64);
							}
						}
						if (func_5(iVar270, 64))
						{
							iLocal_315 = 0;
							func_10(21);
						}
						else if (func_5(iVar270, 32) && !func_5(iVar270, 64))
						{
							iLocal_315 = 0;
							func_10(8);
						}
						else if (iLocal_16 == 2)
						{
							iLocal_315 = 0;
							func_10(9);
						}
						else if (iLocal_16 != 1)
						{
							if (fVar256 <= 1.32f)
							{
								if (bVar313)
								{
									iLocal_315 = 0;
									func_77();
								}
								else
								{
									func_10(80);
								}
							}
							else if ((func_12(&uLocal_281) && func_14(&uLocal_281) >= 10f) && is_entity_in_volume(Global_35, iVar258, true, 0))
							{
								iLocal_315 = 0;
								func_15(&uLocal_281);
								func_10(79);
							}
							else if (func_78())
							{
								iLocal_315 = 0;
								func_79();
							}
						}
						else
						{
							iLocal_315 = 0;
							func_10(8);
						}
						break;
					case 19:
						func_10(7);
						break;
					case 9:
						if (func_81(&uLocal_270, func_80(), 0, 1, 1, 2, 1, 1, 0, 0, 0, 0, 1063675494))
						{
							func_10(53);
						}
						break;
					case 8:
						if (func_81(&uLocal_270, func_82(), 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1063675494))
						{
							func_10(29);
						}
						break;
					case 21:
						if (func_81(&uLocal_270, func_83(), 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1063675494))
						{
							func_9(&uLocal_270);
							func_9(&uLocal_271);
							func_10(84);
						}
						break;
					case 22:
						if (func_81(&uLocal_270, func_84(), 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1063675494))
						{
							func_9(&uLocal_270);
							func_9(&uLocal_271);
							func_10(82);
						}
						break;
					case 23:
						if (!func_5(iVar270, 536870912))
						{
							_0xaab050da48b57978(iLocal_253, "TaskCower_Default", 0, -1, 4);
							func_8(&uLocal_272, 536870912);
						}
						if (func_81(&uLocal_270, func_85(), 0, 0, 1, 0, 0, 1, 0, 0, 0, 1, 0.95f))
						{
							func_9(&uLocal_270);
							func_9(&uLocal_271);
							func_86();
							func_10(82);
						}
						break;
					case 24:
						if (!func_5(iVar270, 536870912))
						{
							_0xaab050da48b57978(iLocal_253, "TaskCower_Default", 0, -1, 4);
							func_8(&uLocal_272, 536870912);
						}
						if (func_81(&uLocal_270, func_87(), 0, 0, 1, 0, 0, 1, 0, 0, 0, 1, 1063675494))
						{
							func_9(&uLocal_270);
							func_9(&uLocal_271);
							func_86();
							func_10(82);
						}
						break;
					case 25:
						if (!func_5(iVar270, 536870912))
						{
							_0xaab050da48b57978(iLocal_253, "TaskCower_Default", 0, -1, 4);
							func_8(&uLocal_272, 536870912);
						}
						if (func_81(&uLocal_270, func_88(), 0, 0, 1, 0, 0, 1, 0, 0, 0, 1, 0.95f))
						{
							func_9(&uLocal_270);
							func_9(&uLocal_271);
							func_86();
							func_10(82);
						}
						break;
					case 26:
						if (func_81(&uLocal_270, func_89(), 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1063675494))
						{
							func_9(&uLocal_270);
							func_9(&uLocal_271);
							func_10(82);
						}
						break;
					case 27:
						if (func_81(&uLocal_270, func_90(), 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1063675494))
						{
							func_9(&uLocal_270);
							func_9(&uLocal_271);
							func_10(82);
						}
						break;
					case 28:
						if (func_81(&uLocal_270, func_91(), 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1063675494))
						{
							func_9(&uLocal_270);
							func_9(&uLocal_271);
							func_10(82);
						}
						break;
					case 20:
						if (func_81(&uLocal_270, func_92(), 0, 1, 1, 0, 1, 1, 0, 0, 0, 0, 1063675494))
						{
							func_10(7);
						}
						break;
					case 10:
						if (func_81(&uLocal_270, func_93(), 0, 1, 1, 0, 1, 1, 0, 0, 0, 0, 1063675494))
						{
							iLocal_274 = (1 + iVar272);
							func_24(&uLocal_272, 128);
							func_10(7);
						}
						break;
					case 11:
						if (func_81(&uLocal_270, func_94(), 0, 1, 1, 0, 1, 1, 0, 0, 0, 0, 1063675494))
						{
							iLocal_274 = (1 + iVar272);
							func_24(&uLocal_272, 128);
							func_10(7);
						}
						break;
					case 12:
						if (func_81(&uLocal_270, func_95(), 0, 1, 1, 0, 1, 1, 0, 0, 0, 0, 1063675494))
						{
							iLocal_274 = (1 + iVar272);
							func_24(&uLocal_272, 128);
							func_10(7);
						}
						break;
					case 13:
						if (func_81(&uLocal_270, func_96(), 0, 1, 1, 0, 1, 1, 0, 0, 0, 0, 1063675494))
						{
							iLocal_274 = (1 + iVar272);
							func_10(7);
						}
						break;
					case 14:
						if (func_81(&uLocal_270, func_97(), 0, 1, 1, 0, 1, 1, 0, 0, 0, 0, 1063675494))
						{
							iLocal_274 = (1 + iVar272);
							func_10(7);
						}
						break;
					case 15:
						if (func_81(&uLocal_270, func_98(), 0, 1, 1, 0, 1, 1, 0, 0, 0, 0, 1063675494))
						{
							iLocal_274 = iVar272 + 1;
							func_10(7);
						}
						break;
					case 16:
						if (func_81(&uLocal_270, func_99(), 0, 1, 1, 0, 1, 1, 0, 0, 0, 0, 1063675494))
						{
							iLocal_274 = iVar272 + 1;
							func_10(7);
						}
						break;
					case 17:
						if (func_81(&uLocal_270, func_100(), 0, 1, 1, 0, 1, 1, 0, 0, 0, 0, 1063675494))
						{
							iLocal_274 = (1 + iVar272);
							func_10(7);
						}
						break;
					case 18:
						if (func_81(&uLocal_270, func_101(), 0, 1, 1, 0, 1, 1, 0, 0, 0, 0, 1063675494))
						{
							iLocal_274 = (1 + iVar272);
							func_10(7);
						}
						break;
					case 53:
						if ((iVar384 && func_76(&uLocal_284)) && !func_17(&uLocal_284))
						{
							if (!func_5(iVar270, 64))
							{
								func_8(&uLocal_272, 64);
							}
						}
						if (func_5(iVar270, 64))
						{
							func_10(54);
						}
						else if (func_5(iVar270, 32))
						{
							func_10(55);
						}
						else if (iLocal_16 != 0)
						{
							if (iLocal_16 != 1)
							{
								if (func_78())
								{
									func_79();
								}
							}
							else
							{
								func_10(55);
							}
						}
						else
						{
							func_10(54);
						}
						break;
					case 67:
						func_10(53);
						break;
					case 54:
						if (func_81(&uLocal_270, func_102(), 0, 1, 1, 0, 1, 1, 0, 0, 0, 0, 1063675494))
						{
							func_10(7);
						}
						break;
					case 55:
						if (func_81(&uLocal_270, func_103(), 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1063675494))
						{
							func_10(29);
						}
						break;
					case 68:
						if (func_81(&uLocal_270, func_104(), 0, 0, 1, 2, 0, 1, 0, 0, 0, 0, 1063675494))
						{
							func_9(&uLocal_270);
							func_9(&uLocal_271);
							func_10(82);
						}
						break;
					case 69:
						if (!func_5(iVar270, 536870912))
						{
							_0xaab050da48b57978(iLocal_253, "TaskCower_Default", 0, -1, 4);
							func_8(&uLocal_272, 536870912);
						}
						if (func_81(&uLocal_270, func_105(), 0, 0, 1, 2, 0, 1, 0, 0, 0, 1, 0.95f))
						{
							func_9(&uLocal_270);
							func_9(&uLocal_271);
							func_86();
							func_10(82);
						}
						break;
					case 70:
						if (!func_5(iVar270, 536870912))
						{
							_0xaab050da48b57978(iLocal_253, "TaskCower_Default", 0, -1, 4);
							func_8(&uLocal_272, 536870912);
						}
						if (func_81(&uLocal_270, func_106(), 0, 0, 1, 2, 0, 1, 0, 0, 0, 1, 1063675494))
						{
							func_9(&uLocal_270);
							func_9(&uLocal_271);
							func_86();
							func_10(82);
						}
						break;
					case 71:
						if (!func_5(iVar270, 536870912))
						{
							_0xaab050da48b57978(iLocal_253, "TaskCower_Default", 0, -1, 4);
							func_8(&uLocal_272, 536870912);
						}
						if (func_81(&uLocal_270, func_107(), 0, 0, 1, 2, 0, 1, 0, 0, 0, 1, 0.95f))
						{
							func_9(&uLocal_270);
							func_9(&uLocal_271);
							func_86();
							func_10(82);
						}
						break;
					case 72:
						if (func_81(&uLocal_270, func_108(), 0, 0, 1, 2, 0, 1, 0, 0, 0, 0, 1063675494))
						{
							func_9(&uLocal_270);
							func_9(&uLocal_271);
							func_10(82);
						}
						break;
					case 73:
						if (func_81(&uLocal_270, func_109(), 0, 0, 1, 2, 0, 1, 0, 0, 0, 0, 1063675494))
						{
							func_9(&uLocal_270);
							func_9(&uLocal_271);
							func_10(82);
						}
						break;
					case 74:
						if (func_81(&uLocal_270, func_110(), 0, 0, 1, 2, 0, 1, 0, 0, 0, 0, 1063675494))
						{
							func_9(&uLocal_270);
							func_9(&uLocal_271);
							func_10(82);
						}
						break;
					case 56:
						if (func_81(&uLocal_270, func_111(), 0, 1, 1, 2, 1, 1, 0, 0, 0, 0, 1063675494))
						{
							iLocal_274 = (1 + iVar272);
							func_24(&uLocal_272, 128);
							func_10(53);
						}
						break;
					case 57:
						if (func_81(&uLocal_270, func_112(), 0, 1, 1, 2, 1, 1, 0, 0, 0, 0, 1063675494))
						{
							iLocal_274 = (1 + iVar272);
							func_24(&uLocal_272, 128);
							func_10(53);
						}
						break;
					case 58:
						if (func_81(&uLocal_270, func_113(), 0, 1, 1, 2, 1, 1, 0, 0, 0, 0, 1063675494))
						{
							iLocal_274 = iVar272 + 1;
							func_24(&uLocal_272, 128);
							func_10(53);
						}
						break;
					case 59:
						if (func_81(&uLocal_270, func_114(), 0, 1, 1, 2, 1, 1, 0, 0, 0, 0, 1063675494))
						{
							iLocal_274 = iVar272 + 1;
							func_24(&uLocal_272, 128);
							func_10(53);
						}
						break;
					case 60:
						if (func_81(&uLocal_270, func_115(), 0, 1, 1, 2, 1, 1, 0, 0, 0, 0, 1063675494))
						{
							iLocal_274 = (1 + iVar272);
							func_24(&uLocal_272, 128);
							func_10(53);
						}
						break;
					case 61:
						if (func_81(&uLocal_270, func_116(), 0, 1, 1, 2, 1, 1, 0, 0, 0, 0, 1063675494))
						{
							iLocal_274 = (1 + iVar272);
							func_10(53);
						}
						break;
					case 62:
						if (func_81(&uLocal_270, func_117(), 0, 1, 1, 2, 1, 1, 0, 0, 0, 0, 1063675494))
						{
							iLocal_274 = iVar272 + 1;
							func_10(53);
						}
						break;
					case 63:
						if (func_81(&uLocal_270, func_118(), 0, 1, 1, 2, 1, 1, 0, 0, 0, 0, 1063675494))
						{
							iLocal_274 = iVar272 + 1;
							func_24(&uLocal_272, 128);
							func_10(53);
						}
						break;
					case 64:
						if (func_81(&uLocal_270, func_119(), 0, 1, 1, 2, 1, 1, 0, 0, 0, 0, 1063675494))
						{
							iLocal_274 = iVar272 + 1;
							func_10(53);
						}
						break;
					case 65:
						if (func_81(&uLocal_270, func_120(), 0, 1, 1, 2, 1, 1, 0, 0, 0, 0, 1063675494))
						{
							iLocal_274 = iVar272 + 1;
							func_24(&uLocal_272, 128);
							func_10(53);
						}
						break;
					case 66:
						if (func_81(&uLocal_270, func_121(), 0, 1, 1, 2, 1, 1, 0, 0, 0, 0, 1063675494))
						{
							iLocal_274 = iVar272 + 1;
							func_24(&uLocal_272, 128);
							func_10(53);
						}
						break;
					case 29:
						if (func_122(16, 2))
						{
							if (!func_5(iVar270, 64))
							{
								func_8(&uLocal_272, 64);
							}
						}
						if (func_5(iVar270, 64))
						{
							iLocal_315 = 0;
							func_10(30);
						}
						else if ((func_5(iVar270, 2) && func_5(iVar270, 256)) && !func_5(iVar270, 4))
						{
							func_123(&iLocal_261, &uLocal_387, &uLocal_388);
							func_124(1);
							func_125(iLocal_253, 1.2f, 1056964608, 12000, 1, 1, 256, 0, 1);
							if (!is_scripted_speech_playing(Global_35))
							{
								func_8(&uLocal_272, 33554432);
								func_8(&uLocal_272, 67108864);
								iLocal_315 = 1;
								iLocal_277 = 0;
								func_10(4);
							}
						}
						else if (iLocal_16 != 0)
						{
							if (iLocal_16 != 2)
							{
								if (fVar256 <= 1.32f)
								{
									if (bVar313)
									{
										iLocal_315 = 0;
										func_126();
									}
									else
									{
										func_10(80);
									}
								}
								else if (func_78())
								{
									iLocal_315 = 0;
									func_79();
								}
							}
							else
							{
								iLocal_315 = 0;
								func_10(31);
							}
						}
						else
						{
							iLocal_315 = 0;
							func_10(30);
						}
						break;
					case 45:
						func_10(29);
						break;
					case 30:
						if (func_81(&uLocal_270, func_127(), 0, 1, 1, 0, 1, 1, 0, 0, 0, 0, 1063675494))
						{
							func_10(7);
						}
						break;
					case 31:
						if (func_81(&uLocal_270, func_128(), 0, 1, 1, 2, 1, 1, 0, 0, 0, 0, 1063675494))
						{
							func_10(53);
						}
						break;
					case 46:
						if (func_81(&uLocal_270, func_129(), 0, 0, 1, 1, 0, 1, 0, 0, 0, 0, 1063675494))
						{
							func_9(&uLocal_270);
							func_9(&uLocal_271);
							func_10(82);
						}
						break;
					case 47:
						if (!func_5(iVar270, 536870912))
						{
							_0xaab050da48b57978(iLocal_253, "TaskCower_Default", 0, -1, 4);
							func_8(&uLocal_272, 536870912);
						}
						if (func_81(&uLocal_270, func_130(), 0, 0, 1, 1, 0, 1, 0, 0, 0, 1, 0.95f))
						{
							func_9(&uLocal_270);
							func_9(&uLocal_271);
							func_86();
							func_10(82);
						}
						break;
					case 48:
						if (!func_5(iVar270, 536870912))
						{
							_0xaab050da48b57978(iLocal_253, "TaskCower_Default", 0, -1, 4);
							func_8(&uLocal_272, 536870912);
						}
						if (func_81(&uLocal_270, func_131(), 0, 0, 1, 1, 0, 1, 0, 0, 0, 1, 1063675494))
						{
							func_9(&uLocal_270);
							func_9(&uLocal_271);
							func_86();
							func_10(82);
						}
						break;
					case 49:
						if (!func_5(iVar270, 536870912))
						{
							_0xaab050da48b57978(iLocal_253, "TaskCower_Default", 0, -1, 4);
							func_8(&uLocal_272, 536870912);
						}
						if (func_81(&uLocal_270, func_132(), 0, 0, 1, 1, 0, 1, 0, 0, 0, 1, 0.95f))
						{
							func_9(&uLocal_270);
							func_9(&uLocal_271);
							func_86();
							func_10(82);
						}
						break;
					case 50:
						if (func_81(&uLocal_270, func_133(), 0, 0, 1, 1, 0, 1, 0, 0, 0, 0, 1063675494))
						{
							func_9(&uLocal_270);
							func_9(&uLocal_271);
							func_10(82);
						}
						break;
					case 51:
						if (func_81(&uLocal_270, func_134(), 0, 0, 1, 1, 0, 1, 0, 0, 0, 0, 1063675494))
						{
							func_9(&uLocal_270);
							func_9(&uLocal_271);
							func_10(82);
						}
						break;
					case 52:
						if (func_81(&uLocal_270, func_135(), 0, 0, 1, 1, 0, 1, 0, 0, 0, 0, 1063675494))
						{
							func_9(&uLocal_270);
							func_9(&uLocal_271);
							func_10(82);
						}
						break;
					case 32:
						if (func_81(&uLocal_270, func_136(), 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1063675494))
						{
							iLocal_274 = (1 + iVar272);
							func_24(&uLocal_272, 128);
							func_10(29);
						}
						break;
					case 33:
						if (func_81(&uLocal_270, func_137(), 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1063675494))
						{
							iLocal_274 = (1 + iVar272);
							func_24(&uLocal_272, 128);
							func_10(29);
						}
						break;
					case 34:
						if (func_81(&uLocal_270, func_138(), 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1063675494))
						{
							iLocal_274 = iVar272 + 1;
							func_24(&uLocal_272, 128);
							func_10(29);
						}
						break;
					case 35:
						if (func_81(&uLocal_270, func_139(), 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1063675494))
						{
							iLocal_274 = (1 + iVar272);
							func_24(&uLocal_272, 128);
							func_10(29);
						}
						break;
					case 36:
						if (func_81(&uLocal_270, func_140(), 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1063675494))
						{
							iLocal_274 = (1 + iVar272);
							func_24(&uLocal_272, 128);
							func_10(29);
						}
						break;
					case 37:
						if (func_81(&uLocal_270, func_141(), 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1063675494))
						{
							iLocal_274 = iVar272 + 1;
							func_24(&uLocal_272, 128);
							func_10(29);
						}
						break;
					case 38:
						if (func_81(&uLocal_270, func_142(), 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1063675494))
						{
							iLocal_274 = (1 + iVar272);
							func_10(29);
						}
						break;
					case 39:
						if (func_81(&uLocal_270, func_143(), 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1063675494))
						{
							iLocal_274 = (1 + iVar272);
							func_10(29);
						}
						break;
					case 40:
						if (func_81(&uLocal_270, func_144(), 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1063675494))
						{
							iLocal_274 = iVar272 + 1;
							func_10(29);
						}
						break;
					case 41:
						if (func_81(&uLocal_270, func_145(), 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1063675494))
						{
							iLocal_274 = iVar272 + 1;
							func_24(&uLocal_272, 128);
							func_10(29);
						}
						break;
					case 42:
						if (func_81(&uLocal_270, func_146(), 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1063675494))
						{
							iLocal_274 = (1 + iVar272);
							func_24(&uLocal_272, 128);
							func_10(29);
						}
						break;
					case 43:
						if (func_81(&uLocal_270, func_147(), 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1063675494))
						{
							iLocal_274 = (1 + iVar272);
							func_24(&uLocal_272, 128);
							func_10(29);
						}
						break;
					case 44:
						if (func_81(&uLocal_270, func_148(), 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1063675494))
						{
							iLocal_274 = iVar272 + 1;
							func_24(&uLocal_272, 128);
							func_10(29);
						}
						break;
					case 4:
						if (func_5(iVar270, 4))
						{
							func_10(29);
						}
						else
						{
							if (!func_5(iVar270, 1024))
							{
								func_123(&iLocal_261, &uLocal_387, &uLocal_388);
								func_124(1);
								if (func_125(iLocal_253, 1.2f, 1056964608, 12000, 1, 1, 256, 0, 1))
								{
									func_8(&uLocal_272, 1024);
								}
							}
							if (func_81(&uLocal_270, func_149(), 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 1063675494))
							{
								func_150();
							}
						}
						break;
					case 75:
						if (!func_5(iVar270, 8388608))
						{
							func_151(16, 3);
							_0x946d46cd6dfb9742(get_player_index(), 0, _0x0139637a3bff8b6d(iLocal_253, &uVar1));
							func_152(16);
							func_8(&uLocal_272, 8388608);
						}
						if (!func_5(iVar270, 1024))
						{
							func_123(&iLocal_261, &uLocal_387, &uLocal_388);
							func_124(1);
							if (func_125(iLocal_253, 1.2f, 1056964608, 12000, 1, 1, 256, 0, 1))
							{
								func_8(&uLocal_272, 1024);
							}
						}
						if (func_81(&uLocal_271, func_153(), 0, 1, 0, 1, 1, 1, 0, 0, 1, 0, 1063675494))
						{
							if (!func_5(iVar270, 4))
							{
								func_8(&uLocal_272, 4);
								func_24(&uLocal_272, 32);
							}
							func_124(0);
							func_154();
							func_8(&uLocal_272, 1073741824);
							func_72(0);
							func_10(4);
						}
						if (_0x1f0e401031e20146(iVar269, func_153()) && _get_anim_scene_progress(iVar269) >= func_155(75))
						{
							func_124(0);
							func_154();
							func_8(&uLocal_272, 1073741824);
							func_72(0);
						}
						break;
					case 76:
						if (!func_5(iVar270, 8388608))
						{
							func_151(16, 3);
							_0x946d46cd6dfb9742(get_player_index(), 0, _0x0139637a3bff8b6d(iLocal_253, &uVar1));
							func_152(16);
							func_8(&uLocal_272, 8388608);
						}
						if (!func_5(iVar270, 1024))
						{
							func_123(&iLocal_261, &uLocal_387, &uLocal_388);
							func_124(1);
							if (func_125(iLocal_253, 1.2f, 1056964608, 12000, 1, 1, 256, 0, 1))
							{
								func_8(&uLocal_272, 1024);
							}
						}
						if (func_81(&uLocal_271, func_156(), 0, 1, 0, 1, 1, 1, 0, 0, 1, 0, 1063675494))
						{
							if (!func_5(iVar270, 4))
							{
								func_8(&uLocal_272, 4);
								func_24(&uLocal_272, 32);
							}
							func_124(0);
							func_154();
							func_8(&uLocal_272, 1073741824);
							func_72(0);
							func_10(4);
						}
						if (_0x1f0e401031e20146(iVar269, func_156()) && _get_anim_scene_progress(iVar269) >= func_155(76))
						{
							func_124(0);
							func_154();
							func_8(&uLocal_272, 1073741824);
							func_72(0);
						}
						break;
					case 77:
						if (func_5(iVar270, 4))
						{
							func_10(29);
						}
						else
						{
							func_10(4);
						}
						break;
					case 78:
						break;
					case 79:
						if (iLocal_15 > 12)
						{
							if (func_81(&uLocal_270, func_99(), 0, 1, 1, 0, 1, 1, 0, 0, 0, 0, 1063675494))
							{
								func_8(&uLocal_272, 16777216);
							}
						}
						else if (func_81(&uLocal_270, func_144(), 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1063675494))
						{
							func_8(&uLocal_272, 16777216);
						}
						if (!is_scripted_speech_playing(iLocal_253) && !func_5(iVar270, 128))
						{
							func_157();
							func_8(&uLocal_272, 128);
						}
						else if ((func_5(iVar270, 128) && !is_scripted_speech_playing(iLocal_253)) && func_5(iVar270, 16777216))
						{
							func_24(&uLocal_272, 128);
							func_24(&uLocal_272, 16777216);
							if (iLocal_15 > 12)
							{
								func_10(7);
							}
							else
							{
								func_10(29);
							}
						}
						break;
					case 80:
						if (iLocal_15 >= 12)
						{
							if (func_81(&uLocal_270, func_99(), 0, 1, 1, 0, 1, 1, 0, 0, 0, 0, 1063675494))
							{
								func_8(&uLocal_272, 16777216);
							}
						}
						else if (func_81(&uLocal_270, func_144(), 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1063675494))
						{
							func_8(&uLocal_272, 16777216);
						}
						if (!is_scripted_speech_playing(iLocal_253) && !func_5(iVar270, 128))
						{
							func_158();
							func_8(&uLocal_272, 128);
						}
						else if ((func_5(iVar270, 128) && !is_scripted_speech_playing(iLocal_253)) && func_5(iVar270, 16777216))
						{
							func_24(&uLocal_272, 128);
							func_24(&uLocal_272, 16777216);
							if (iLocal_15 >= 12)
							{
								func_10(7);
							}
							else
							{
								func_10(29);
							}
							iLocal_315 = 1;
						}
						break;
					case 81:
						if (func_81(&uLocal_270, func_144(), 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1063675494))
						{
							func_8(&uLocal_272, 16777216);
						}
						if ((!is_scripted_speech_playing(iLocal_253) && !is_scripted_speech_playing(Global_35)) && !func_5(iVar270, 128))
						{
							func_159();
							func_8(&uLocal_272, 128);
						}
						else if ((func_5(iVar270, 128) && !is_scripted_speech_playing(iLocal_253)) && func_5(iVar270, 16777216))
						{
							func_24(&uLocal_272, 65536);
							func_24(&uLocal_272, 128);
							func_24(&uLocal_272, 16777216);
							func_10(29);
						}
						break;
					case 82:
						if (!bVar303)
						{
							set_ped_flee_attributes(iLocal_253, 1024, true);
							open_sequence_task(&iVar0);
							task_smart_flee_ped(0, Global_35, 6000f, -1, 0, 1077936128, 0);
							close_sequence_task(iVar0);
							task_perform_sequence(iLocal_253, iVar0);
							clear_sequence_task(&iVar0);
							set_ped_keep_task(iLocal_253, true);
						}
						stop_ped_speaking(iLocal_253, false);
						_0xc67a4910425f11f1(player_id(), "LillianBubble");
						if (_does_volume_exist(iVar263))
						{
							_delete_volume(iVar263);
						}
						if (bVar303)
						{
							func_10(85);
						}
						else
						{
							func_10(84);
						}
						break;
					case 6:
						func_161(func_160(), 29, &uLocal_270, func_142(), 1, 0);
						break;
					case 83:
						break;
					case 84:
						func_1();
						break;
					case 85:
						set_ped_reset_flag(iLocal_253, 49, true);
						set_ped_reset_flag(iLocal_253, 53, true);
						if (iVar379 < 7)
						{
							if (!func_12(&uLocal_382) && !is_scripted_speech_playing(iLocal_253))
							{
								func_162(&uLocal_382);
							}
							if (func_163(&uLocal_382, 6f))
							{
								switch ((iVar378 % 6))
								{
									case 0:
										func_164(iLocal_253, "GREET_PLAYER_ANGRY", -417894478, Global_35, 1, "LILLIAN_POWELL", 1, 1);
										break;
									case 1:
										func_164(iLocal_253, "GREET_PLAYER_ANGRY", -417894478, Global_35, 1, "LILLIAN_POWELL", 2, 1);
										break;
									case 2:
										func_164(iLocal_253, "GET_AWAY_FROM_ME", -417894478, Global_35, 1, "LILLIAN_POWELL", 1, 1);
										break;
									case 3:
										func_164(iLocal_253, "GET_AWAY_FROM_ME", -417894478, Global_35, 1, "LILLIAN_POWELL", 2, 1);
										break;
									case 4:
										func_164(iLocal_253, "GET_AWAY_FROM_ME", -417894478, Global_35, 1, "LILLIAN_POWELL", 3, 1);
										break;
									case 5:
										func_164(iLocal_253, "GENERIC_ANGRY_REACTION", -417894478, Global_35, 1, "LILLIAN_POWELL", 1, 1);
										break;
									case 6:
										func_164(iLocal_253, "GENERIC_SHOCKED_HIGH", -417894478, Global_35, 1, "LILLIAN_POWELL", 1, 1);
										break;
								}
								iLocal_380 = iVar378 + 1;
								iLocal_381 = (1 + iVar379);
							}
						}
						if (!func_3(Global_35, iVar261, 0, 1))
						{
							func_10(84);
						}
						break;
					default:
						break;
				}
			}
		}
	}
}

void func_1()
{
	if (is_itemset_valid(iVar385))
	{
		destroy_itemset(iVar385);
	}
	func_165(&uLocal_284);
	func_124(0);
	func_166(16);
	stop_ped_speaking(iLocal_253, false);
	set_blocking_of_non_temporary_events(iLocal_253, false);
	func_167(&uLocal_267, 1);
	func_168();
	func_169();
	func_170(iLocal_253);
	_0xc67a4910425f11f1(player_id(), "LillianBubble");
	_0xc67a4910425f11f1(player_id(), "LillianConvo");
	func_171(&iLocal_253, &uLocal_273, 161068336, 20f, 1);
	if (func_34(iLocal_248) && (func_172(iLocal_248) || func_173(iLocal_248)))
	{
		func_174(iLocal_248, 0, 2);
	}
	if (!is_entity_dead(iLocal_253))
	{
		remove_entity_from_audio_mix_group(iLocal_253, 0f);
		if (bVar276)
		{
			delete_ped(&iLocal_253);
		}
		else
		{
			set_ped_can_ragdoll_from_player_impact(iLocal_253, true);
			set_ped_as_no_longer_needed(&iLocal_253);
		}
	}
	if (does_entity_exist(iVar254))
	{
		if (bVar276)
		{
			delete_object(&uLocal_256);
		}
		else
		{
			set_object_as_no_longer_needed(&uLocal_256);
		}
	}
	if (does_entity_exist(iVar255))
	{
		if (bVar276)
		{
			delete_object(&uLocal_257);
		}
		else
		{
			set_object_as_no_longer_needed(&uLocal_257);
		}
	}
	if (does_entity_exist(iLocal_255))
	{
		if (bVar276)
		{
			delete_object(&iLocal_255);
		}
		else
		{
			set_object_as_no_longer_needed(&iLocal_255);
		}
	}
	if (_does_anim_scene_exist(iVar268))
	{
		_delete_anim_scene(iVar268);
	}
	if (_does_anim_scene_exist(iVar269))
	{
		_delete_anim_scene(iVar269);
	}
	if (_does_volume_exist(iVar257))
	{
		func_175(iVar257);
		_delete_volume(iVar257);
	}
	if (_does_volume_exist(iVar261))
	{
		_delete_volume(iVar261);
	}
	if (_does_volume_exist(iVar260))
	{
		func_176(&uLocal_306, iVar260, 0);
		_delete_volume(iVar260);
	}
	if (_does_volume_exist(iVar258))
	{
		_0x74c2b3dc0b294102(iVar258);
		_0xa1cfb35069d23c23(iVar258);
		_delete_volume(iVar258);
	}
	if (_does_volume_exist(iVar259))
	{
		_0x74c2b3dc0b294102(iVar259);
		_0xa1cfb35069d23c23(iVar259);
		_delete_volume(iVar259);
	}
	if (_does_volume_exist(iVar262))
	{
		_delete_volume(iVar262);
	}
	if (_does_volume_exist((*(*Global_1396257)[16])[2]->f_47))
	{
		_delete_volume((*(*Global_1396257)[16])[2]->f_47);
	}
	if (_does_volume_exist(iVar264))
	{
		_delete_volume(iVar264);
	}
	if (_does_volume_exist(iVar263))
	{
		_delete_volume(iVar263);
	}
	set_model_as_no_longer_needed(iLocal_249);
	terminate_this_thread();
}

void func_2()
{
	if (!does_entity_exist(iLocal_253) || !does_entity_exist(Global_35))
	{
		return;
	}
	if (is_entity_dead(Global_35))
	{
		return;
	}
	if ((get_frame_count() % 40) == 0)
	{
		fLocal_258 = get_distance_between_coords(get_entity_coords(iLocal_253, true, false), get_entity_coords(Global_35, true, false), true);
	}
}

bool func_3(int iParam0, int iParam1, int iParam2, bool bParam3)
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

bool func_4(int iParam0, int iParam1)
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
	if (func_5(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_5(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_5(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_5(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_5(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_5(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_5(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_5(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_5(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_6()
{
	fVar2 = 0f;
	if (func_5(iVar270, 2097152))
	{
		switch (iLocal_16)
		{
			case 2:
				func_8(&uLocal_272, 4194304);
				func_10(68);
				return;
			case 1:
				func_8(&uLocal_272, 4194304);
				func_10(50);
				return;
			case 0:
				func_8(&uLocal_272, 4194304);
				func_10(22);
				return;
		}
	}
	if (does_entity_exist(iLocal_253) && does_entity_exist(Global_35))
	{
		iVar0 = func_177(iLocal_253, Global_35, 0f);
		iVar1 = func_177(iLocal_253, Global_35, 1f);
		fVar2 = func_178(iLocal_253, Global_35, 1, 1);
	}
	if (iVar0 == 0)
	{
		if (iVar1 == 3)
		{
			iVar3 = 1;
		}
		else if (iVar1 == 2)
		{
			iVar3 = 0;
		}
	}
	else if (iVar0 == 1)
	{
		if (iVar1 == 3)
		{
			iVar3 = 3;
		}
		else if (iVar1 == 2)
		{
			iVar3 = 2;
		}
	}
	switch (iVar3)
	{
		case 0:
			func_8(&uLocal_272, 4194304);
			switch (iLocal_16)
			{
				case 2:
					if (fVar2 >= 4.58f)
					{
						func_10(71);
					}
					else
					{
						func_10(69);
					}
					break;
				case 1:
					if (fVar2 >= 4.58f)
					{
						func_10(49);
					}
					else
					{
						func_10(47);
					}
					break;
				case 0:
					if (fVar2 >= 4.58f)
					{
						func_10(25);
					}
					else
					{
						func_10(23);
					}
					break;
			}
			break;
		case 1:
			func_8(&uLocal_272, 4194304);
			switch (iLocal_16)
			{
				case 2:
					if (fVar2 >= 4.58f)
					{
						func_10(71);
					}
					else
					{
						func_10(70);
					}
					break;
				case 1:
					if (fVar2 >= 4.58f)
					{
						func_10(49);
					}
					else
					{
						func_10(48);
					}
					break;
				case 0:
					if (fVar2 >= 4.58f)
					{
						func_10(25);
					}
					else
					{
						func_10(24);
					}
					break;
			}
			break;
		case 2:
			func_8(&uLocal_272, 4194304);
			switch (iLocal_16)
			{
				case 2:
					func_10(74);
					break;
				case 1:
					func_10(52);
					break;
				case 0:
					func_10(28);
					break;
			}
			break;
		case 3:
			func_8(&uLocal_272, 4194304);
			switch (iLocal_16)
			{
				case 2:
					func_10(73);
					break;
				case 1:
					func_10(51);
					break;
				case 0:
					func_10(27);
					break;
			}
			break;
	}
}

bool func_7(float fParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	if (bParam5)
	{
		bVar1 = func_179(&uLocal_213, &iLocal_241, &iLocal_253, &uLocal_389, 1101004800);
	}
	else
	{
		bVar1 = func_180(iLocal_253, 0, &uLocal_213, &iLocal_241, 0, 0);
	}
	if (bVar1)
	{
		switch (iLocal_241)
		{
			case 4:
			case 8:
			case 32:
			case 64:
			case 256:
			case 1024:
			case 4096:
			case 8192:
			case 16384:
			case 524288:
				if (fParam0 < fParam3)
				{
					*bParam1 = 0;
					bVar0 = true;
				}
				break;
			case 2:
			case 512:
			case 2048:
				if (fParam0 < fParam4)
				{
					*bParam1 = 1;
					bVar0 = true;
				}
				break;
			case 16:
			case 128:
				if (fParam0 < fParam4)
				{
					*bParam1 = 0;
					bVar0 = true;
				}
				break;
			default:
				if (fParam0 < fParam4)
				{
					*bParam1 = 0;
					bVar0 = true;
				}
				break;
		}
	}
	if (bVar0)
	{
		if ((((((((((is_ped_injured(iLocal_253) || is_ped_ragdoll(iLocal_253)) || is_ped_getting_up(iLocal_253)) || _is_ped_lassoed(iLocal_253)) || is_ped_being_stealth_killed(iLocal_253)) || _0xef3a8772f085b4aa(iLocal_253)) || is_ped_being_stunned(iLocal_253, 0)) || _0x3e592d0486dec0f6(iLocal_253)) || _is_ped_hogtied(iLocal_253)) || _0xf330a5c062b29bed(iLocal_253)) || is_ped_prone(iLocal_253))
		{
			*bParam2 = 0;
		}
		else
		{
			*bParam2 = 1;
		}
		stop_ped_speaking(iLocal_253, false);
		func_181(16);
		if (func_36())
		{
			func_8(&iLocal_379, 2);
		}
		else
		{
			func_8(&iLocal_379, 1);
		}
		func_182(iVar370, uVar371);
		func_152(16);
		return true;
	}
	return false;
}

void func_8(int iParam0, int iParam1)
{
	func_183(iParam0, iParam1);
}

void func_9(var uParam0)
{
	if (_does_anim_scene_exist(*uParam0) && _is_anim_scene_loaded(*uParam0, true, false))
	{
		if (does_entity_exist(iLocal_255) && _get_anim_scene_object(*uParam0, "p_cigaretteholder01x", false) == iLocal_255)
		{
			remove_anim_scene_entity(*uParam0, "p_cigaretteholder01x", iLocal_255);
			func_184(iLocal_255, 1, 1);
		}
		if (does_entity_exist(iVar253) && _get_anim_scene_object(*uParam0, "p_cs_book03x", false) == iVar253)
		{
			remove_anim_scene_entity(*uParam0, "p_cs_book03x", iVar253);
			func_184(iVar253, 1, 1);
		}
		if (does_entity_exist(iVar254) && _get_anim_scene_object(*uParam0, "p_glass06x", false) == iVar254)
		{
			remove_anim_scene_entity(*uParam0, "p_glass06x", iVar254);
			func_184(iVar254, 1, 1);
		}
	}
}

void func_10(int iParam0)
{
	iLocal_14 = iParam0;
}

int func_11()
{
	return Global_1894899->f_2;
}

bool func_12(var uParam0)
{
	return func_185(*uParam0, 1);
}

void func_13(var uParam0, bool bParam1)
{
	if (bParam1 || !func_12(uParam0))
	{
		func_162(uParam0);
	}
}

float func_14(var uParam0)
{
	if (!func_12(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_186(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_187() - uParam0->f_1);
}

void func_15(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_16(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if ((get_frame_count() % 10) == 0)
	{
		if (iParam2->f_1)
		{
			if (((func_188(0) == 1 || func_188(0) == 2) || func_188(0) == 8) || func_189(&Global_1935630, 2048))
			{
				func_8(iParam2, 2);
			}
		}
		if (iParam2->f_2)
		{
			if (func_188(0) == 11)
			{
				func_8(iParam2, 4);
			}
		}
		if (iParam2->f_4)
		{
			if (func_188(0) == 6)
			{
				func_8(iParam2, 8);
			}
		}
		if (iParam2->f_5)
		{
			if (Global_1394141->f_1328)
			{
				func_8(iParam2, 16);
			}
		}
	}
	if ((get_frame_count() % 30) == 0)
	{
		if (iParam2->f_6)
		{
			if (!(func_190((*(*Global_1396257)[iParam0])[iParam1]->f_19) == 0 && func_190((*(*Global_1396257)[iParam0])[iParam1]->f_20) == 23))
			{
				iVar0 = func_191();
				iVar1 = (*(*Global_1396257)[iParam0])[iParam1]->f_19;
				iVar2 = (*(*Global_1396257)[iParam0])[iParam1]->f_20;
				if (func_190(iVar2) > func_190(iVar1))
				{
					if (func_190(iVar0) > func_190(iVar2) + 1 || func_190(iVar0) < func_190(iVar1))
					{
						func_8(iParam2, 32);
					}
				}
				else if (func_190(iVar0) > func_190(iVar2) + 1 && func_190(iVar0) < func_190(iVar1))
				{
					func_8(iParam2, 32);
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
					if (((func_192(&((*(*Global_1396257)[iParam0])[iParam1]->f_5[0])) || func_192(&((*(*Global_1396257)[iParam0])[iParam1]->f_5[1]))) || func_193(&((*(*Global_1396257)[iParam0])[iParam1]->f_5[0]))) || func_193(&((*(*Global_1396257)[iParam0])[iParam1]->f_5[1])))
					{
						bVar3 = true;
					}
				}
				if (!bVar3)
				{
					if (!func_194((*(*Global_1396257)[iParam0])[iParam1]->f_40))
					{
						func_8(iParam2, 64);
					}
				}
			}
		}
		if (iParam2->f_8)
		{
			if (get_game_timer() > iParam2->f_17)
			{
				if (func_195(&iParam3, &(iParam2->f_18), iParam2->f_11, iParam2->f_12) || func_196(&iParam3, &(iParam2->f_20), &(iParam2->f_19), iParam2->f_11, iParam2->f_12, 2048))
				{
					if (!func_12(&(iParam2->f_13)))
					{
						func_197(&(iParam2->f_13), 0f);
					}
					else if (func_198(&(iParam2->f_13)) >= iParam2->f_16)
					{
						func_15(&(iParam2->f_13));
						func_8(iParam2, 512);
					}
					iParam2->f_17 = get_game_timer() + 1000;
				}
				else
				{
					if (func_12(&(iParam2->f_13)))
					{
						func_15(&(iParam2->f_13));
					}
					iParam2->f_17 = get_game_timer() + 1000;
				}
			}
		}
		if (iParam2->f_9)
		{
			if (func_199())
			{
				func_8(iParam2, 1024);
			}
		}
		if (iParam2->f_10)
		{
			if (func_200())
			{
				func_8(iParam2, 2048);
			}
		}
		if (func_189(&Global_1935630, 16384) || Global_1430231->f_4)
		{
			func_8(iParam2, 128);
		}
		if (func_201(&((*Global_1396257)[iParam0]->f_626), 2048))
		{
			func_8(iParam2, 256);
		}
	}
	if ((((((((((func_5(*iParam2, 2) || func_5(*iParam2, 4)) || func_5(*iParam2, 8)) || func_5(*iParam2, 16)) || func_5(*iParam2, 32)) || func_5(*iParam2, 64)) || func_5(*iParam2, 128)) || func_5(*iParam2, 256)) || func_5(*iParam2, 512)) || func_5(*iParam2, 1024)) || func_5(*iParam2, 2048))
	{
		return true;
	}
	return false;
}

bool func_17(var uParam0)
{
	if (((((func_5(*uParam0, 2) || func_5(*uParam0, 4)) || func_5(*uParam0, 16)) || func_5(*uParam0, 128)) || func_5(*uParam0, 1024)) || func_5(*uParam0, 2048))
	{
		return true;
	}
	return false;
}

bool func_18(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		if (func_202())
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
		if (func_188(0) == 7 || func_203())
		{
			return true;
		}
	}
	if (func_201(&((*Global_1396257)[iParam0]->f_626), 1024))
	{
		return true;
	}
	return false;
}

bool func_19(int iParam0, bool bParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (!is_ped_injured(iParam0) || !bParam1)
		{
			iVar0 = get_interior_from_entity(iParam0);
			if (is_valid_interior(iVar0))
			{
				if (func_204(iVar0) || func_205(iVar0))
				{
					return false;
				}
				return true;
			}
		}
	}
	return false;
}

int func_20(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, float fParam5, float fParam6, bool bParam7)
{
	if (*uParam4)
	{
		return 0;
	}
	if (is_entity_dead(*iParam2) || Global_1935630->f_12)
	{
		return 0;
	}
	if (bParam7)
	{
		if (is_scripted_speech_playing(*iParam2))
		{
			Global_40.f_11623[iParam0]->f_5++;
			Global_40.f_11623[iParam0]->f_2 = func_191();
			*uParam4 = 1;
			return 1;
		}
	}
	if (fParam5 == 0f)
	{
		if (!func_206(Global_35, *iParam2, fParam6, 1))
		{
			return 0;
		}
	}
	else if (fParam5 > fParam6)
	{
		return 0;
	}
	if (!func_12(uParam3))
	{
		func_197(uParam3, 0f);
	}
	else if (func_14(uParam3) >= 2f)
	{
		if (!func_207(Global_40.f_11623[iParam0]->f_2))
		{
			func_181(iParam0);
			*uParam4 = 1;
			func_15(uParam3);
			return 1;
		}
		else
		{
			func_181(iParam0);
			*uParam4 = 1;
			func_15(uParam3);
			return 1;
		}
	}
	return 0;
}

void func_21(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
{
	if (!func_208(*iParam1, iParam2))
	{
		return;
	}
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		_0xc67a4910425f11f1(player_id(), iParam7);
		_0xc67a4910425f11f1(player_id(), iParam8);
		return;
	}
	if (func_208(*iParam1, iParam3))
	{
		if (!func_208(*iParam1, iParam4))
		{
			_0xc67a4910425f11f1(player_id(), iParam7);
			_0x3946fc742ac305cd(player_id(), iParam0, sParam6, 0f, 0f, 0f, 0, iParam8);
			func_183(iParam1, iParam4);
		}
	}
	else if (func_208(*iParam1, iParam4))
	{
		_0xc67a4910425f11f1(player_id(), iParam8);
		_0x3946fc742ac305cd(player_id(), iParam0, sParam5, 0f, 0f, 0f, 0, iParam7);
		func_209(iParam1, iParam4);
	}
}

void func_22(int iParam0, int iParam1)
{
	if (func_208(iParam0, iParam1))
	{
		disable_all_control_actions(0);
		disable_all_control_actions(1);
		enable_control_action(0, -124244224, true);
		enable_control_action(0, 648122183, true);
		enable_control_action(0, -163964935, true);
		enable_control_action(0, -668070958, true);
		enable_control_action(0, 1250966545, true);
		func_210();
		_0xc9caeaeec1256e54(-1679307491);
		if (!get_ped_config_flag(Global_35, 174, true))
		{
			set_ped_config_flag(Global_35, 174, true);
		}
		func_211();
	}
	else if (get_ped_config_flag(Global_35, 174, true))
	{
		set_ped_config_flag(Global_35, 174, false);
	}
}

void func_23()
{
	if (func_212())
	{
		if (func_213(iVar374) > -1)
		{
			if (func_214())
			{
				func_215(Local_317[iVar374], 0);
				func_216(Local_317[iVar374], 0);
				if (!func_5(iVar375, 2))
				{
					func_217(&iLocal_253);
					func_218(&(Local_317[iVar374]->f_21), 0, 0, 1, 0);
				}
			}
		}
	}
	else
	{
		func_215(Local_317[iVar374], 0);
		func_217(&iLocal_253);
		func_216(Local_317[iVar374], 0);
		func_218(&(Local_317[iVar374]->f_21), 0, 0, 1, 0);
	}
}

void func_24(int iParam0, int iParam1)
{
	func_209(iParam0, iParam1);
}

void func_25(int iParam0)
{
	if (func_5(iVar269, 8192))
	{
		return;
	}
	if (*iParam0 >= 10 && *iParam0 <= 66)
	{
		if (iVar271 < 2)
		{
			if (func_219(&iLocal_253, 249295937))
			{
				func_8(&uLocal_272, 8192);
			}
		}
	}
}

void func_26(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4)
{
	if (is_entity_dead(iParam0) || Global_1935630->f_12)
	{
		return;
	}
	sVar0 = func_220(iParam3);
	if (fParam4 == 0f)
	{
		if (func_206(iParam0, Global_35, 15f, 1))
		{
			if (!func_208(*iParam1, iParam2))
			{
				if (_0x6339c1ea3979b5f7(sVar0, "special_ped_scenes"))
				{
					func_183(iParam1, iParam2);
				}
			}
		}
		else if (func_208(*iParam1, iParam2))
		{
			_0x9428447ded71fc7e("special_ped_scenes");
			func_209(iParam1, iParam2);
		}
	}
	else if (fParam4 <= 15f)
	{
		if (!func_208(*iParam1, iParam2))
		{
			if (_0x6339c1ea3979b5f7(sVar0, "special_ped_scenes"))
			{
				func_183(iParam1, iParam2);
			}
		}
	}
	else if (func_208(*iParam1, iParam2))
	{
		_0x9428447ded71fc7e("special_ped_scenes");
		func_209(iParam1, iParam2);
	}
}

void func_27()
{
	if ((((((!func_5(iVar270, 524288) && func_5(iVar270, 262144)) && iLocal_15 > 4) && iLocal_15 < 14) && does_entity_exist(iLocal_254)) && func_221(137, 0)) && func_178(Global_35, iLocal_254, 1, 1) <= 3f)
	{
		if (!_0xa2cac9def0195e6f(1))
		{
			if (func_223(&uLocal_115, func_222(), 1, 2, 0, 0))
			{
			}
			func_8(&uLocal_272, 524288);
		}
	}
}

bool func_28(int iParam0, int iParam1, bool bParam2, int iParam3)
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

void func_29()
{
	if (!_does_volume_exist(iVar257))
	{
		iLocal_259 = _create_volume_sphere_with_custom_name(2636.664f, -1230.215f, 52.456f, 0f, 0f, 0f, 22f, 22f, 22f, "RandomEventBlock");
	}
	if (!_does_volume_exist(iVar258))
	{
		iLocal_260 = _create_volume_cylinder_with_custom_name(2636.5f, -1229.468f, 53.84846f, 0f, 0f, 0f, 2f, 2f, 2f, "Trigger");
	}
	if (!_does_volume_exist(iVar260))
	{
		iLocal_262 = _create_volume_box_with_custom_name(2637.288f, -1230.672f, 54.36793f, 0f, 0f, 0f, 4.5f, 2.252276f, 4f, "StayAway");
	}
	if (!_does_volume_exist(iVar259))
	{
		iLocal_261 = _create_volume_cylinder_with_custom_name(2635.716f, -1227.369f, 56.10125f, 0f, 0f, 0f, 6f, 7f, 4f, "ForceActivity");
	}
	if (!_does_volume_exist(iVar261))
	{
		iLocal_263 = _create_volume_box_with_custom_name(2632.984f, -1226.895f, 61.39866f, 0f, 0f, 0f, 18f, 15f, 20f, "Speech");
	}
	if (!_does_volume_exist(iVar262))
	{
		iLocal_264 = _create_volume_cylinder_with_custom_name(2637.288f, -1230.323f, 54.36793f, 0f, 0f, 0f, 3f, 3f, 6f, "Focus");
	}
	if (!_does_volume_exist(iVar264))
	{
		iLocal_266 = _create_volume_aggregate_with_custom_name("NoSit");
		_0x39816f6f94f385ad(iVar264, 2637.194f, -1230.109f, 53.81625f, 0f, 0f, 0f, 4.827326f, 3.346102f, 3.082269f);
		_0x39816f6f94f385ad(iVar264, 2636.479f, -1228.052f, 53.87238f, 0f, 0f, 0f, 3.766305f, 1f, 3.082421f);
	}
}

int func_30(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	if (!_does_volume_exist(iParam0))
	{
		return 0;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	vVar3 = { _0x3e2a25b2416dd67e(iParam0) };
	iVar6 = func_224(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

var func_31(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!_does_volume_exist(iParam0))
	{
		return uVar0;
	}
	func_225(iParam0, bParam2);
	_0x18262cafebb5fbe1(iParam0, iParam3, 0, 0, -1, -1, 0);
	_0xb56d41a694e42e86(iParam0, iParam3, 0, 0, -1, -1, 2);
	uVar0 = _0x4c39c95ae5db1329(iParam0, bParam2, 15);
	return uVar0;
}

int func_32(int iParam0)
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

int func_33(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_226())
	{
		iVar2 = func_226();
	}
	iVar5 = func_227(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_228(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_228(iVar6) == 0)
			{
				return func_229(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_228(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_228(iVar6) == 0)
			{
				return func_229(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_229(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

bool func_34(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_35(int iParam0)
{
	if (!func_34(iParam0))
	{
		return -1;
	}
	return func_230(iParam0);
}

bool func_36()
{
	if (func_231() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

void func_37(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_232(uParam0, iParam1, sParam2))
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

void func_38(var uParam0)
{
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	uParam0->f_4 = 1;
	uParam0->f_5 = 1;
	uParam0->f_6 = 1;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 1;
	uParam0->f_10 = 1;
	uParam0->f_11 = 1.75f;
	uParam0->f_12 = 2.25f;
	uParam0->f_16 = 45000;
}

void func_39(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_233(&(uParam0->f_1), 16384);
	}
	else
	{
		func_234(&(uParam0->f_1), 16384);
	}
}

void func_40(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_233(&(uParam0->f_1), 2048);
	}
	else
	{
		func_234(&(uParam0->f_1), 2048);
	}
}

void func_41(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_233(&(uParam0->f_1), 256);
	}
	else
	{
		func_234(&(uParam0->f_1), 256);
	}
}

void func_42(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_234(uParam0, 16);
	}
	else
	{
		func_233(uParam0, 67108864);
		func_233(uParam0, 16);
	}
}

void func_43(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_233(&(uParam0->f_1), 128);
	}
	else
	{
		func_234(&(uParam0->f_1), 128);
	}
}

void func_44(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_234(uParam0, 256);
	}
	else
	{
		func_233(uParam0, 256);
	}
}

void func_45(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_234(uParam0, 524288);
	}
	else
	{
		func_233(uParam0, 524288);
	}
}

void func_46(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_234(uParam0, 268435456);
	}
	else
	{
		func_233(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_234(uParam0, 1073741824);
	}
	else
	{
		func_233(uParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_234(uParam0, 536870912);
	}
	else
	{
		func_233(uParam0, 536870912);
	}
}

void func_47(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_233(&(uParam0->f_1), 131072);
	}
	else
	{
		func_234(&(uParam0->f_1), 131072);
	}
}

void func_48(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_234(uParam0, 4);
	}
	else
	{
		func_233(uParam0, 4);
	}
}

void func_49(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_234(uParam0, 2);
	}
	else
	{
		func_233(uParam0, 2);
	}
}

void func_50(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_233(&(uParam0->f_1), 2);
	}
	else
	{
		func_234(&(uParam0->f_1), 2);
	}
}

void func_51(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_233(&(uParam0->f_1), 8);
	}
	else
	{
		func_234(&(uParam0->f_1), 8);
	}
}

void func_52(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_234(uParam0, 128);
	}
	else
	{
		func_233(uParam0, 128);
	}
}

void func_53(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_234(uParam0, 8);
	}
	else
	{
		func_233(uParam0, 8);
	}
}

void func_54(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_234(uParam0, 32);
	}
	else
	{
		func_233(uParam0, 32);
	}
}

void func_55(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_233(&(uParam0->f_1), 4);
	}
	else
	{
		func_234(&(uParam0->f_1), 4);
	}
}

void func_56(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_233(&(uParam0->f_1), 1024);
	}
	else
	{
		func_234(&(uParam0->f_1), 1024);
	}
}

void func_57(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_233(&(uParam0->f_1), 524288);
	}
	else
	{
		func_234(&(uParam0->f_1), 524288);
	}
}

void func_58(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_234(uParam0, 1048576);
	}
	else
	{
		func_233(uParam0, 1048576);
	}
}

void func_59(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_234(uParam0, 262144);
	}
	else
	{
		func_233(uParam0, 262144);
	}
}

void func_60(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_233(&(uParam0->f_1), 16);
	}
	else
	{
		func_234(&(uParam0->f_1), 16);
	}
}

void func_61(var uParam0, int iParam1)
{
	uParam0->f_21 = iParam1;
}

void func_62(var uParam0, float fParam1, bool bParam2)
{
	uParam0->f_22 = fParam1;
	if (bParam2)
	{
		func_235(uParam0, fParam1);
	}
}

void func_63(var uParam0, float fParam1)
{
	uParam0->f_24 = fParam1;
}

void func_64(var uParam0, float fParam1)
{
	uParam0->f_25 = fParam1;
}

bool func_65(int iParam0, bool bParam1)
{
	switch (func_236(iParam0))
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

int func_66(int iParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	if (!does_entity_exist(*iParam0))
	{
		wait(0);
		if (!bParam7)
		{
			*iParam0 = func_237(iParam1, vParam2, fParam5, 0, 1, bParam6, 1, 1, 1, 0, 0, 0, 0);
		}
		else
		{
			*iParam0 = func_237(iParam1, vParam2, fParam5, 0, 1, bParam6, 1, 1, bParam8, 1, 1, 0, 0);
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

int func_67(int iParam0, int iParam1, vector3 vParam2)
{
	if (!does_entity_exist(*iParam0))
	{
		*iParam0 = create_object(iParam1, vParam2, true, true, false, false, true);
		return 0;
	}
	if (!does_entity_exist(*iParam0))
	{
		return 0;
	}
	return 1;
}

void func_68(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_238(iParam0, iParam1))
		{
			if (func_239(iParam0, iParam1))
			{
				if (func_240(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_241(iParam0);
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

void func_69(int iParam0, int iParam1)
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

void func_70(int iParam0, var uParam1, int iParam2, float fParam3, float fParam4)
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

int func_71()
{
	if (!func_242())
	{
		return 0;
	}
	if (does_entity_exist(iLocal_253) && does_entity_exist(iLocal_254))
	{
		func_37(&uLocal_115, iLocal_254, "NBX_Bartender", 0);
		func_37(&uLocal_115, iLocal_253, "LILLIAN_POWELL", 0);
		func_8(&uLocal_272, 262144);
		return 1;
	}
	return 0;
}

void func_72(int iParam0)
{
	if (!func_243(iParam0))
	{
		return;
	}
	iLocal_376 = iParam0;
}

void func_73(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (!func_243(iParam0))
	{
		return;
	}
	if (!func_244(iParam1))
	{
		return;
	}
	func_245(Local_317[iParam0]->f_21[iParam1], sParam2, sParam3, iParam4, iParam5, iParam6, 0, 1, 0);
	if (bParam7)
	{
		func_246(Local_317[iParam0], iParam1, 1);
	}
}

int func_74(int iParam0, int iParam1, int iParam2)
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

void func_75(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_247(iParam0);
	}
	Local_317[iParam0]->f_56 = iParam1;
}

int func_76(var uParam0)
{
	if ((((func_5(*uParam0, 32) || func_5(*uParam0, 64)) || func_5(*uParam0, 512)) || func_5(*uParam0, 256)) || func_5(*uParam0, 8))
	{
		return 1;
	}
	return 0;
}

void func_77()
{
	iVar0 = func_248(0, 5, iVar274);
	iLocal_276 = iVar0;
	switch (iVar0)
	{
		case 0:
			func_10(13);
			break;
		case 1:
			func_10(14);
			break;
		case 2:
			func_10(15);
			break;
		case 3:
			func_10(16);
			break;
		case 4:
			func_10(17);
			break;
	}
}

bool func_78()
{
	if (!_does_volume_exist(iVar261))
	{
		return false;
	}
	if (!is_entity_in_volume(Global_35, iVar261, true, 0))
	{
		return false;
	}
	return true;
}

void func_79()
{
	iVar0 = iLocal_15;
	if (iLocal_15 > 1 && iLocal_15 < 11)
	{
		if (!func_249())
		{
			func_126();
			return;
		}
	}
	if (iLocal_15 == 1 && (((!func_5(iVar270, 262144) || !func_221(137, 0)) || !does_entity_exist(iLocal_254)) || is_scripted_speech_playing(iLocal_254)))
	{
		iLocal_15 = 2;
	}
	switch (iLocal_15)
	{
		case 0:
			iLocal_15 = 1;
			func_10(42);
			break;
		case 1:
			if (func_250(iLocal_16, 1))
			{
				return;
			}
			iLocal_15 = 2;
			func_10(6);
			break;
		case 2:
			if (func_250(iLocal_16, 1))
			{
				return;
			}
			iLocal_15 = 3;
			func_10(39);
			break;
		case 3:
			if (func_250(iLocal_16, 1))
			{
				return;
			}
			if (func_36())
			{
				iLocal_15 = 4;
				func_10(43);
			}
			else
			{
				iLocal_15 = 6;
				func_10(41);
			}
			break;
		case 4:
			if (func_250(iLocal_16, 1))
			{
				return;
			}
			iLocal_15 = 5;
			func_10(38);
			break;
		case 5:
			if (func_250(iLocal_16, 1))
			{
				return;
			}
			iLocal_15 = 6;
			func_10(41);
			break;
		case 6:
			if (func_250(iLocal_16, 1))
			{
				return;
			}
			iLocal_15 = 7;
			func_10(40);
			break;
		case 7:
			if (func_250(iLocal_16, 1))
			{
				return;
			}
			iLocal_15 = 8;
			func_10(32);
			break;
		case 8:
			if (func_250(iLocal_16, 1))
			{
				return;
			}
			iLocal_15 = 9;
			func_10(39);
			break;
		case 9:
			if (func_250(iLocal_16, 1))
			{
				return;
			}
			iLocal_15 = 10;
			func_10(44);
			break;
		case 10:
			if (func_250(iLocal_16, 1))
			{
				return;
			}
			iLocal_15 = 11;
			func_10(38);
			break;
		case 11:
			if (!func_5(iVar270, 256))
			{
				func_126();
			}
			else
			{
				iLocal_16 = 0;
				iLocal_15 = 12;
				func_10(30);
			}
			break;
		case 12:
			if (func_250(iLocal_16, 0))
			{
				return;
			}
			iLocal_15 = 13;
			func_10(18);
			break;
		case 13:
			if (func_250(iLocal_16, 0))
			{
				return;
			}
			iLocal_15 = 14;
			func_10(16);
			iLocal_276 = 3;
			break;
		case 14:
			if (func_250(iLocal_16, 0))
			{
				return;
			}
			func_77();
			break;
		default:
			return;
	}
}

char[] func_80()
{
	return "pbl_PDSFW_IG1_P2_BOOK_TO_DRINK";
}

bool func_81(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, float fParam12)
{
	uLocal_316 = *iParam0;
	iLocal_311 = 1;
	switch (iVar294)
	{
		case 0:
			if (_does_anim_scene_exist(*iParam0))
			{
				iLocal_309 = 3;
			}
			else
			{
				iLocal_309 = 1;
			}
			break;
		case 1:
			*iParam0 = _create_anim_scene(func_251(iParam10), 0, func_252(iParam10), false, true);
			iLocal_309 = 2;
			break;
		case 2:
			if (_does_anim_scene_exist(*iParam0))
			{
				iLocal_309 = 3;
			}
			break;
		case 3:
			bVar0 = _is_anim_scene_loaded(*iParam0, true, false);
			bVar1 = _is_anim_scene_loading(*iParam0, true);
			if (!bVar0 && !bVar1)
			{
				iLocal_309 = 4;
			}
			else if (bVar1)
			{
				iLocal_309 = 5;
			}
			else if (bVar0)
			{
				iLocal_309 = 7;
			}
			break;
		case 4:
			load_anim_scene(*iParam0);
			iLocal_309 = 5;
			break;
		case 5:
			if (_is_anim_scene_loaded(*iParam0, true, false))
			{
				iLocal_309 = 6;
			}
			break;
		case 6:
			func_253(iParam0, iParam10);
			iLocal_309 = 7;
			break;
		case 7:
			func_254(iParam0, bParam8, bParam9);
			iLocal_309 = 8;
			break;
		case 8:
			if (!_is_anim_scene_started(*iParam0, false))
			{
				start_anim_scene(*iParam0);
			}
			iLocal_309 = 9;
			break;
		case 9:
			bVar0 = _0x23e33cb9f4a3f547(*iParam0, sParam1);
			bVar2 = _0x1f0e401031e20146(*iParam0, sParam1);
			if (!bVar0 && !bVar2)
			{
				_0xdf7b5144e25cd3fe(*iParam0, sParam1);
			}
			else if (!bVar2 && bVar0)
			{
				_set_anim_scene_playback_list_bool(*iParam0, sParam1, true);
			}
			else if (bVar2)
			{
				iLocal_309 = 10;
			}
			break;
		case 10:
			if (iVar292 != -1)
			{
				if (iVar292 == *iParam0)
				{
					func_255(&iLocal_307, cVar253);
				}
				else if (_does_anim_scene_exist(iVar292) && _is_anim_scene_loaded(iVar292, true, false))
				{
					reset_anim_scene(iVar292, func_252(iVar293));
				}
			}
			iLocal_307 = *iParam0;
			sLocal_268 = sParam1;
			iLocal_308 = iParam10;
			iLocal_309 = 11;
			break;
		case 11:
			if (bParam4)
			{
				switch (iParam5)
				{
					case 2:
						sVar3 = "s_drinking_base";
						sVar4 = "s_drinking_base_end";
						break;
					case 1:
						sVar3 = "s_smoking_base";
						sVar4 = "s_smoking_base_end";
						break;
					case 0:
						sVar3 = "s_reading_base";
						sVar4 = "s_reading_base_end";
						break;
				}
			}
			else
			{
				sVar3 = "s_base";
				sVar4 = "s_base_end";
			}
			if (bVar262)
			{
				if (func_5(iVar257, 32768))
				{
					iLocal_277 = 0;
					iLocal_309 = 12;
				}
				else if (func_5(iVar257, 16384) && !is_scripted_speech_playing(iLocal_253))
				{
					iLocal_277 = 0;
					iLocal_309 = 12;
				}
			}
			else if (bParam7)
			{
				if (_0x8d81e7824b7753f7(*iParam0, sVar4, 1) && iParam3)
				{
					iLocal_309 = 12;
				}
				else if (_0x8d81e7824b7753f7(*iParam0, sVar3, 1) && iParam2)
				{
					iLocal_309 = 12;
				}
				else if (bParam11 && _get_anim_scene_progress(*iParam0) >= fParam12)
				{
					iLocal_309 = 12;
				}
				else if (_is_anim_scene_finished(*iParam0, false))
				{
					iLocal_309 = 12;
				}
			}
			break;
		case 12:
			iLocal_309 = 0;
			iLocal_311 = 0;
			return true;
	}
	return false;
}

char[] func_82()
{
	return "pbl_PDSFW_IG1_P2_BOOK_TO_SMOKE";
}

char[] func_83()
{
	return "pbl_PDSFW_IG1_P2_BOOK_STAND";
}

char[] func_84()
{
	return "pbl_PDSFW_IG1_P2_BOOK_QUICK_EXIT";
}

char[] func_85()
{
	return "pbl_BOOK_Cower_Left_Behind";
}

void func_86()
{
	stop_ped_speaking(iLocal_253, false);
	iLocal_305 = 1;
	set_ped_config_flag(iLocal_253, 44, true);
	set_blocking_of_non_temporary_events(iLocal_253, true);
	open_sequence_task(&iVar0);
	task_cower(0, -1, Global_35, 0);
	close_sequence_task(iVar0);
	task_perform_sequence(iLocal_253, iVar0);
	clear_sequence_task(&iVar0);
	set_ped_keep_task(iLocal_253, true);
}

char[] func_87()
{
	return "pbl_BOOK_Cower_Right_Behind";
}

char[] func_88()
{
	return "pbl_BOOK_Cower_Right";
}

char[] func_89()
{
	return "pbl_BOOK_Quick_Stand";
}

char[] func_90()
{
	return "pbl_BOOK_Run_Front";
}

char[] func_91()
{
	return "pbl_BOOK_Run_Left";
}

char[] func_92()
{
	return "pbl_PDSFW_IG1_P2_BOOK_SIT";
}

char[] func_93()
{
	return "pbl_PDSFW_IG1_P9_BOOK_IM_BORED";
}

char[] func_94()
{
	return "pbl_PDSFW_IG1_P4_BOOK_EVELYN_MILLER";
}

char[] func_95()
{
	return "pbl_PDSFW_IG1_P4_BOOK_DRIVEL";
}

char[] func_96()
{
	return "pbl_PDSFW_IG1_P2_BOOK_SIGH";
}

char[] func_97()
{
	return "pbl_PDSFW_IG1_P2_BOOK_SHOULDER";
}

char[] func_98()
{
	return "pbl_PDSFW_IG1_P2_BOOK_PAGE";
}

char[] func_99()
{
	return "pbl_PDSFW_IG1_P2_BOOK_LOOKING";
}

char[] func_100()
{
	return "pbl_PDSFW_IG1_P2_BOOK_FRUSTRATED";
}

char[] func_101()
{
	return "pbl_PDSFW_IG1_P9_Bloody_Drink";
}

char[] func_102()
{
	return "pbl_PDSFW_IG1_P2_DRINK_TO_BOOK";
}

char[] func_103()
{
	return "pbl_PDSFW_IG1_P2_DRINK_TO_CIG";
}

char[] func_104()
{
	return "pbl_PDSFW_IG1_P2_DRINK_QUICK_EXIT";
}

char[] func_105()
{
	return "pbl_DRINKING_Cower_Left_Behind";
}

char[] func_106()
{
	return "pbl_DRINKING_Cower_Right_Behind";
}

char[] func_107()
{
	return "pbl_DRINKING_Cower_Right";
}

char[] func_108()
{
	return "pbl_DRINKING_Quick_Stand";
}

char[] func_109()
{
	return "pbl_DRINKING_Run_Front";
}

char[] func_110()
{
	return "pbl_DRINKING_Run_Left";
}

char[] func_111()
{
	return "pbl_PDSFW_IG1_P9_DRINK_SOMETHING_TO_EAT";
}

char[] func_112()
{
	return "pbl_PDSFW_IG1_P8_DRINK_NOT_DRUNK";
}

char[] func_113()
{
	return "pbl_PDSFW_IG1_P5_DRINK_MY_GOD";
}

char[] func_114()
{
	return "pbl_PDSFW_IG1_P3_DRINK_HAVE_A_WOMAN";
}

char[] func_115()
{
	return "pbl_PDSFW_IG1_P2_DRINK_THE_VOTE";
}

char[] func_116()
{
	return "pbl_PDSFW_IG1_P2_DRINK_SWIRL";
}

char[] func_117()
{
	return "pbl_PDSFW_IG1_P2_DRINK_LOOK_AROUND";
}

char[] func_118()
{
	return "pbl_PDSFW_IG1_P2_DRINK_COCAINE";
}

char[] func_119()
{
	return "pbl_PDSFW_IG1_P2_DRINK_ADJUST";
}

char[] func_120()
{
	return "pbl_PDSFW_IG1_P10_DRINK_THIS_WORLD";
}

char[] func_121()
{
	return "pbl_PDSFW_IG1_P9_Little_Shit";
}

bool func_122(int iParam0, int iParam1)
{
	if (func_207((*(*Global_1396257)[iParam0])[iParam1]->f_19))
	{
		iVar0 = func_190((*(*Global_1396257)[iParam0])[iParam1]->f_19);
	}
	else
	{
		iVar0 = 0;
	}
	if (func_207((*(*Global_1396257)[iParam0])[iParam1]->f_20))
	{
		iVar1 = func_190((*(*Global_1396257)[iParam0])[iParam1]->f_20);
	}
	else
	{
		iVar1 = 23;
	}
	if (iVar0 > 0 || iVar1 < 23)
	{
		iVar2 = func_190(func_191());
		if (iVar0 < iVar1)
		{
			if (iVar2 < iVar0 || iVar2 >= iVar1)
			{
				return true;
			}
		}
		else if (iVar2 >= iVar1 && iVar2 < iVar0)
		{
			return true;
		}
	}
	return false;
}

void func_123(int iParam0, var uParam1, var uParam2)
{
	if (!_does_volume_exist(*iParam0))
	{
		return;
	}
	if (!is_itemset_valid(*uParam1))
	{
		*uParam1 = create_itemset(true);
		*uParam2 = 0;
	}
	if (!*uParam2)
	{
		iVar0 = create_itemset(true);
		iVar3 = _0x886171a12f400b89(*iParam0, iVar0, 1);
		if (iVar3 > 0)
		{
			iVar4 = 0;
			while (iVar4 < iVar3)
			{
				iVar1 = get_indexed_item_in_itemset(iVar4, iVar0);
				iVar2 = _0x3ffb15534067dcd4(iVar1);
				if (is_entity_dead(iVar2))
				{
					add_to_itemset(iVar1, *uParam1);
				}
				iVar4++;
			}
		}
		destroy_itemset(iVar0);
		*uParam2 = 1;
	}
	if (*uParam2)
	{
		iVar7 = get_itemset_size(*uParam1);
		if (iVar7 > 0)
		{
			iVar8 = 0;
			while (iVar8 < iVar7)
			{
				iVar5 = get_indexed_item_in_itemset(iVar8, *uParam1);
				iVar6 = _0x3ffb15534067dcd4(iVar5);
				set_entity_no_collision_entity(Global_35, iVar6, true);
				set_entity_no_collision_entity(iVar6, Global_35, true);
				iVar8++;
			}
		}
	}
}

void func_124(bool bParam0)
{
	iVar0 = func_256();
	if (does_entity_exist(iVar0))
	{
		if (bParam0)
		{
			_0x6dad6630ae4a74cb(iVar0, 1);
			set_entity_no_collision_entity(Global_35, iVar0, true);
			set_entity_no_collision_entity(iVar0, Global_35, true);
		}
		else
		{
			_0x6dad6630ae4a74cb(iVar0, 0);
		}
	}
}

bool func_125(int iParam0, float fParam1, float fParam2, int iParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8)
{
	if (is_entity_dead(Global_35) || is_entity_dead(iParam0))
	{
		return false;
	}
	if (bParam8)
	{
		if (func_258(func_257(Global_35, 0, 1, 0)) || func_258(func_257(Global_35, 1, 1, 0)))
		{
			_0x94a3c1b804d291ec(Global_35, 1, 0, 1, 0);
			return false;
		}
	}
	if (!bParam7)
	{
		vVar0 = { get_entity_coords(iParam0, true, false) + get_entity_forward_vector(iParam0) * Vector(fParam1, fParam1, fParam1) };
	}
	else
	{
		vVar0 = { get_entity_coords(iParam0, true, false) + func_259(get_entity_coords(Global_35, true, false) - get_entity_coords(iParam0, true, false), fParam1) };
	}
	if ((!func_260(Global_35, vVar0, fParam2, 1, 1) && !func_261(Global_35, iParam0, 1f)) && !func_261(iParam0, Global_35, 1f))
	{
		if (!func_262(Global_35, 242628503))
		{
			if (bParam4)
			{
				set_player_control(get_player_index(), false, iParam6, false);
			}
			open_sequence_task(&iVar3);
			task_follow_nav_mesh_to_coord(0, vVar0, 1f, iParam3, fParam2, 0, (get_entity_heading(iParam0) - 180f));
			task_turn_ped_to_face_entity(0, iParam0, 0, -1082130432, -1082130432, -1082130432);
			close_sequence_task(iVar3);
			task_perform_sequence(Global_35, iVar3);
			set_ped_keep_task(Global_35, true);
			clear_sequence_task(&iVar3);
		}
	}
	else if (!func_262(Global_35, 242628503))
	{
		if (bParam4 && bParam5)
		{
			set_player_control(get_player_index(), true, iParam6, false);
		}
		return true;
	}
	return false;
}

void func_126()
{
	iVar0 = func_248(0, 3, iVar273);
	iLocal_275 = iVar0;
	switch (iVar0)
	{
		case 0:
			func_10(38);
			break;
		case 1:
			func_10(39);
			break;
		case 2:
			func_10(40);
			break;
	}
}

char[] func_127()
{
	return "pbl_PDSFW_IG1_P2_SMOKE_TO_BOOK";
}

char[] func_128()
{
	return "pbl_PDSFW_IG1_P2_CIG_TO_DRINK";
}

char[] func_129()
{
	return "pbl_PDSFW_IG1_P2_SMOKE_QUICK_EXIT";
}

char[] func_130()
{
	return "pbl_SMOKING_Cower_Left_Behind";
}

char[] func_131()
{
	return "pbl_SMOKING_Cower_Right_Behind";
}

char[] func_132()
{
	return "pbl_SMOKING_Cower_Right";
}

char[] func_133()
{
	return "pbl_SMOKING_Quick_Stand";
}

char[] func_134()
{
	return "pbl_SMOKING_Run_Front";
}

char[] func_135()
{
	return "pbl_SMOKING_Run_Left";
}

char[] func_136()
{
	return "pbl_PDSFW_IG1_P8_SMOKING_TOM";
}

char[] func_137()
{
	return "pbl_PDSFW_IG1_P7_SMOKING_BURNT_NOVEL";
}

char[] func_138()
{
	return "pbl_PDSFW_IG1_P6_SMOKING_YOU_KNOW";
}

char[] func_139()
{
	return "pbl_PDSFW_IG1_P6_SMOKING_BORING";
}

char[] func_140()
{
	return "pbl_PDSFW_IG1_P5_SMOKING_TOM";
}

char[] func_141()
{
	return "pbl_PDSFW_IG1_P5_SMOKING_DRIED_UP_HAG";
}

char[] func_142()
{
	return "pbl_PDSFW_IG1_P2_SMOKING_SIGH";
}

char[] func_143()
{
	return "pbl_PDSFW_IG1_P2_SMOKING_LOOK_UP_LT";
}

char[] func_144()
{
	return "pbl_PDSFW_IG1_P2_SMOKING_LOOKING_AROUND";
}

char[] func_145()
{
	return "pbl_PDSFW_IG1_P1_CIG_GOOD_WOMAN";
}

char[] func_146()
{
	return "pbl_PDSFW_IG1_P1_CIG_DARLING_DARLING";
}

char[] func_147()
{
	return "pbl_PDSFW_IG1_P10_SMOKING_I_FEEL_LIKE";
}

char[] func_148()
{
	return "pbl_PDSFW_IG1_P9_Life_Is_Hard";
}

char[] func_149()
{
	return "pbl_smoking_base_reset";
}

void func_150()
{
	iVar0 = func_248(0, (2 - 1), iVar267);
	iLocal_269 = iVar0;
	switch (iVar0)
	{
		case 0:
			func_10(75);
			break;
		case 1:
			func_10(76);
			break;
		default:
			break;
	}
}

void func_151(int iParam0, int iParam1)
{
	if (&Global_40.f_11623[iParam0] != iParam1)
	{
		Global_40.f_11623[iParam0] = iParam1;
	}
}

void func_152(int iParam0)
{
	(*Global_1396257)[iParam0]->f_631 = 1;
}

char[] func_153()
{
	return "pbl_PDSFW_IG4";
}

void func_154()
{
	if (func_5(iVar270, 67108864))
	{
		func_24(&uLocal_272, 67108864);
		func_24(&uLocal_272, 268435456);
	}
}

float func_155(int iParam0)
{
	switch (iParam0)
	{
		case 75:
		case 76:
			return 0.881f;
	}
	return 1f;
}

char[] func_156()
{
	return "pbl_PDSFW_IG4";
}

void func_157()
{
	iVar0 = func_248(1, 8, iVar310);
	iVar0 = func_263(iVar0, 1, 7);
	iLocal_312 = iVar0;
	func_164(iLocal_253, "PLAYER_STILL_HANGING", -417894478, Global_35, 1, "LILLIAN_POWELL", iVar0, 1);
}

void func_158()
{
	iVar0 = func_248(1, 3, iVar312);
	iVar0 = func_263(iVar0, 1, 2);
	iLocal_314 = iVar0;
	func_164(iLocal_253, "PLAYER_LOITERING", -417894478, Global_35, 1, "LILLIAN_POWELL", iVar0, 1);
}

void func_159()
{
	iVar0 = func_248(1, 6, iVar311);
	iVar0 = func_263(iVar0, 1, 5);
	iLocal_313 = iVar0;
	func_164(iLocal_253, "HEY_IM_TALKING", -417894478, Global_35, 1, "LILLIAN_POWELL", iVar0, 1);
}

Vector3 func_160()
{
	return func_264("STDRG_LILLBAR_B");
}

void func_161(vector3 vParam0, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	if (!func_5(iVar262, 16777216))
	{
		if (func_81(iParam4, sParam5, 0, 1, 1, iParam6, 1, 1, 0, 0, 0, 0, 1063675494))
		{
			func_8(&uLocal_272, 16777216);
		}
	}
	if (!func_5(iVar262, -2147483648))
	{
		if (!func_5(iVar262, 128))
		{
			func_223(&uLocal_115, vParam0, iParam7, -1, 0, 0);
			func_8(&uLocal_272, 128);
		}
		else if (func_5(iVar262, 128) && !_0xa2cac9def0195e6f(1))
		{
			func_8(&uLocal_272, -2147483648);
		}
	}
	if (func_5(iVar262, 16777216) && func_5(iVar262, -2147483648))
	{
		func_24(&uLocal_272, 128);
		func_24(&uLocal_272, 16777216);
		func_24(&uLocal_272, -2147483648);
		_0x946d46cd6dfb9742(get_player_index(), 0, _0x0139637a3bff8b6d(iLocal_253, &uVar0));
		func_10(iParam3);
	}
}

void func_162(var uParam0)
{
	func_197(uParam0, 0f);
}

bool func_163(var uParam0, float fParam1)
{
	if (func_265(uParam0, fParam1))
	{
		func_15(uParam0);
		return true;
	}
	return false;
}

bool func_164(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return func_266(iParam0, &Var0);
}

void func_165(var uParam0)
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
	if (func_12(&(uParam0->f_13)))
	{
		func_15(&(uParam0->f_13));
	}
}

void func_166(int iParam0)
{
	if (!is_entity_dead(Global_35))
	{
		set_ped_config_flag(Global_35, 43, false);
	}
	if ((*Global_1396257)[iParam0]->f_631)
	{
		func_267(0, -1);
	}
	func_268();
	(*Global_1396257)[iParam0]->f_631 = 0;
	Global_1415398->f_2 = (Global_1415398->f_2 - 1);
	Global_1935183->f_28 = 0;
}

void func_167(var uParam0, bool bParam1)
{
	if (*uParam0 > -1 && *uParam0 < 4)
	{
		if (*Global_1955500)[*uParam0]->f_3 == get_id_of_this_thread()
		{
			if (func_269(1, 1) == *uParam0)
			{
				func_270(-1, 1, 1);
			}
			if (bParam1)
			{
				func_271((*Global_1955500)[*uParam0]->f_1);
			}
			(*Global_1955500)[*uParam0] = 0;
			(*Global_1955500)[*uParam0]->f_2 = 0;
			(*Global_1955500)[*uParam0]->f_3 = 0;
			*uParam0 = -1;
		}
	}
}

void func_168()
{
	if (get_ped_config_flag(Global_35, 174, true))
	{
		set_ped_config_flag(Global_35, 174, false);
	}
}

void func_169()
{
	func_272(&iLocal_253, Local_317[0], &(Local_317[0]->f_21), 1, 1);
}

void func_170(int iParam0)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	_0xa3db37edf9a74635(player_id(), iParam0, 7, 0, 1);
	_0xa3db37edf9a74635(player_id(), iParam0, 3, 2, 1);
	_0xa3db37edf9a74635(player_id(), iParam0, 4, 2, 1);
}

void func_171(int iParam0, var uParam1, int iParam2, float fParam3, bool bParam4)
{
	if (bParam4)
	{
		if (!does_entity_exist(*iParam0))
		{
			return;
		}
		if (!is_shocking_event_in_sphere(iParam2, get_entity_coords(*iParam0, true, false), fParam3))
		{
			return;
		}
	}
	remove_shocking_event(*uParam1);
}

bool func_172(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		if (!(iParam0 > 0 && iParam0 < 771))
		{
			return false;
		}
		iVar0 = Global_12106[iParam0]->f_1;
	}
	else
	{
		if (!(iParam0 > 0 && iParam0 < 20001))
		{
			return false;
		}
		iVar0 = func_273(iParam0);
	}
	if (iVar0 == 1)
	{
		return true;
	}
	if (iVar0 == 2)
	{
		return true;
	}
	return false;
}

bool func_173(int iParam0)
{
	iVar0 = func_236(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_174(int iParam0, bool bParam1, int iParam2)
{
	if (!func_34(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_173(iParam0) && !func_172(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_274(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_173(iParam0))
	{
		iParam2 = -1;
	}
	if (func_273(iParam0) == 3 || (func_273(iParam0) == 1 && _0x01f4d242765c6b24(func_274(iParam0))))
	{
		func_276(func_275(iParam0), func_274(iParam0), iParam2);
		if ((!func_34(Global_1572864->f_8) && !func_277(0, 1, 0)) && !func_189(&Global_1935630, 32768))
		{
			iVar0 = func_278(iParam0);
			if (iVar0 != -1)
			{
				func_279(0);
			}
			else if (func_275(iParam0) == 8)
			{
				iVar0 = func_280();
				if (iVar0 != -1)
				{
					func_279(0);
				}
			}
		}
	}
	func_281(iParam0, 0);
	if (func_282(0) == iParam0)
	{
		func_283(1);
		func_284(0);
		func_285(1);
	}
	func_286(iParam0, 1);
	func_287(iParam0);
}

void func_175(int iParam0)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	func_288(vVar0, 0);
}

void func_176(var uParam0, int iParam1, bool bParam2)
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

int func_177(int iParam0, int iParam1, float fParam2)
{
	vVar0 = { get_entity_coords(iParam1, false, false) };
	return func_289(iParam0, vVar0, fParam2);
}

float func_178(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_179(var uParam0, int iParam1, int iParam2, var uParam3, float fParam4)
{
	if (!does_entity_exist(*iParam2))
	{
		return 0;
	}
	if (is_ped_dead_or_dying(*iParam2, true))
	{
		*iParam1 = 1;
		return 1;
	}
	if (Global_1935630->f_39 > 0 || _0x285d36c5c72b0569(Global_35) <= 1f)
	{
		if (func_180(*iParam2, 0, uParam0, iParam1, 0, 0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (*uParam3 < 0 || *uParam3 > 4)
	{
		*uParam3 = 0;
	}
	switch (*uParam3)
	{
		case 0:
			*uParam3++;
			if ((has_entity_been_damaged_by_any_ped(*iParam2) || has_entity_been_damaged_by_any_object(*iParam2)) || has_entity_been_damaged_by_any_vehicle(*iParam2))
			{
				*iParam1 = 2;
				return 1;
			}
			break;
		case 1:
			*uParam3++;
			if (_0x9c81338b2e62ce0a(player_id(), *iParam2, 1000))
			{
				*iParam1 = 4;
				return 1;
			}
			break;
		case 2:
			*uParam3++;
			if (is_shocking_event_in_sphere(217247011, get_entity_coords(*iParam2, false, true), fParam4))
			{
				*iParam1 = 16;
				return 1;
			}
			break;
		case 3:
			*uParam3++;
			if (is_shocking_event_in_sphere(956330317, get_entity_coords(*iParam2, false, true), fParam4))
			{
				*iParam1 = 16;
				return 1;
			}
			break;
		case 4:
			*uParam3 = 0;
			if (is_shocking_event_in_sphere(-966930978, get_entity_coords(*iParam2, false, true), fParam4))
			{
				*iParam1 = 16;
				return 1;
			}
			break;
	}
	return 0;
}

bool func_180(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, float fParam5)
{
	iVar0 = get_frame_count();
	if (iVar0 > uParam2->f_5)
	{
		func_290(uParam2, 1, iVar0);
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
			if (func_291(iParam0, uParam2))
			{
				*iParam3 = 128;
				func_292(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_293(iParam0, uParam2))
				{
					*iParam3 = 8;
					func_292(iParam0, uParam2, *iParam3);
					return true;
				}
				else if (func_294(iParam0, iParam1, uParam2))
				{
					*iParam3 = 8;
					func_292(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_295(iParam0, uParam2))
				{
					*iParam3 = 64;
					func_292(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_26 && func_296(player_id(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*iParam3 = 16384;
				func_292(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_297(uParam2, 1065353216))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_298(Global_35, iParam0, uParam2))
					{
						*iParam3 = 4;
						func_292(iParam0, uParam2, *iParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_299(Global_35, iParam0, uParam2))
					{
						*iParam3 = 256;
						func_292(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_300(Global_35, iParam0, uParam2, 0))
				{
					*iParam3 = 16;
					func_292(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			else if (func_300(Global_35, iParam0, uParam2, 1))
			{
				*iParam3 = 16;
				func_292(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_301(iParam0, uParam2))
				{
					*iParam3 = 32;
					func_292(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || uParam2->f_12 < 20f)
			{
				if (func_302(&iParam0, uParam2))
				{
					*iParam3 = 4096;
					func_292(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_303(uParam2, 4000))
				{
					if ((func_304(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_305(uParam2, iParam0)) && func_306(uParam2, iParam0))
					{
						*iParam3 = 2;
						func_292(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_304(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_305(uParam2, iParam0)) && func_306(uParam2, iParam0))
				{
					*iParam3 = 2;
					func_292(iParam0, uParam2, *iParam3);
					return true;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_307(iParam0, Global_1935630->f_41))
							{
								func_308();
								*iParam3 = 2;
								func_292(iParam0, uParam2, *iParam3);
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
						if (func_307(iParam0, Global_1935630->f_41))
						{
							func_308();
							*iParam3 = 2;
							func_292(iParam0, uParam2, *iParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_309(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_310() - uParam2->f_9) < 2000))
				{
					if (is_ped_ragdoll(iParam0))
					{
						func_308();
						*iParam3 = 2;
						func_292(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_311())
					{
						if (func_307(iParam0, Global_1935630->f_42))
						{
							func_308();
							*iParam3 = 2;
							func_292(iParam0, uParam2, *iParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_312(uParam2, iParam0))
			{
				*iParam3 = 1024;
				func_292(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_313(iParam0, iParam1, uParam2))
				{
					*iParam3 = 2048;
					func_292(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_314(iParam0, uParam2))
					{
						*iParam3 = 8192;
						func_292(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_315(iParam0, uParam2))
				{
					*iParam3 = 32768;
					func_292(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_316(uParam2, 4000))
				{
					if (func_317(&iParam0, uParam2))
					{
						*iParam3 = 512;
						func_292(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_318(iParam0, uParam2))
				{
					*iParam3 = 65536;
					uParam2->f_4 = 0;
					func_292(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (does_entity_exist(iParam0))
		{
			if (func_319(uParam2, iParam0))
			{
				*iParam3 = 1;
				func_292(iParam0, uParam2, *iParam3);
				return true;
			}
		}
	}
	return false;
}

void func_181(int iParam0)
{
	Global_40.f_11623[iParam0]->f_5++;
	Global_40.f_11623[iParam0]->f_2 = func_191();
}

void func_182(int iParam0, int iParam1)
{
	if (!func_34(iParam0))
	{
		return;
	}
	func_320(iParam0, iParam1);
}

void func_183(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

void func_184(int iParam0, bool bParam1, bool bParam2)
{
	if (!is_entity_dead(iParam0))
	{
		if (is_entity_attached(iParam0))
		{
			detach_entity(iParam0, bParam1, bParam2);
		}
	}
}

bool func_185(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_186(var uParam0)
{
	return func_185(*uParam0, 2);
}

float func_187()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

int func_188(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

bool func_189(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_190(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_191()
{
	return &Global_1899515;
}

bool func_192(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_173((*Global_1835011)[iParam0]->f_1);
}

bool func_193(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_172((*Global_1835011)[iParam0]->f_1);
}

bool func_194(int iParam0)
{
	iVar0 = func_321();
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

int func_195(int iParam0, var uParam1, float fParam2, var uParam3)
{
	if (!does_entity_exist(*iParam0))
	{
		return 0;
	}
	vVar0 = { get_entity_forward_vector(*iParam0) };
	vVar3 = { get_entity_coords(*iParam0, true, false) + vVar0 * Vector(fParam2, fParam2, fParam2) };
	if (func_322(uParam1, vVar3, uParam3))
	{
		return 1;
	}
	return 0;
}

int func_196(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5)
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
	if (!func_323(uParam2, &iVar1, vVar5, fParam3, fParam4))
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
		if (!func_324(iVar1, 0))
		{
			func_325(&iVar1, vVar8, 1083179008);
		}
		return 1;
	}
	return 0;
}

void func_197(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_187() - fParam1);
	func_326(uParam0, 1);
	func_327(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_198(var uParam0)
{
	if (!func_12(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_186(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_310() - round((uParam0->f_1 * 1000f)));
}

bool func_199()
{
	return Global_1392040->f_6;
}

bool func_200()
{
	if (Global_1914319->f_18941.f_17)
	{
		return true;
	}
	return false;
}

bool func_201(var uParam0, int iParam1)
{
	return func_328(*uParam0, iParam1);
}

bool func_202()
{
	if (func_231() == -1)
	{
		if (_get_global_block_can_be_accessed(5))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if ((*Global_1392915)[iVar0]->f_1 != -1)
				{
					if (func_173((*Global_1392915)[iVar0]->f_4))
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

bool func_203()
{
	return Global_1310750->f_16077 != 0;
}

int func_204(int iParam0)
{
	if (is_valid_interior(iParam0))
	{
		_get_interior_info(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case -1571304986:
			case -1342123354:
			case -1269216817:
			case -1212338017:
			case -803716508:
			case 768224943:
			case 1245139812:
			case 1633500362:
				return 1;
		}
	}
	return 0;
}

int func_205(int iParam0)
{
	if (is_valid_interior(iParam0))
	{
		_get_interior_info(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case -1946266312:
			case -1817199644:
			case -1604045519:
			case -857108408:
			case -431793961:
			case -17417813:
			case 37578405:
			case 459745161:
			case 653987431:
			case 1107105323:
			case 1135757916:
			case 1442115297:
			case 1548023642:
			case 1911907177:
				return 1;
		}
	}
	return 0;
}

bool func_206(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_207(int iParam0)
{
	return iParam0 != -15;
}

bool func_208(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_209(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_210()
{
	Global_1905944->f_5695 = 1;
}

void func_211()
{
	_disable_first_person_cam_this_frame_2();
	_0x8370d34bd2e60b73();
	_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
	if (Global_1935689->f_1)
	{
		func_329(0);
	}
}

bool func_212()
{
	if (fVar256 <= 8f && func_5(iVar270, 1073741824))
	{
		return true;
	}
	return false;
}

int func_213(int iParam0)
{
	iVar0 = -1;
	if (iParam0 < 0 || iParam0 >= 1)
	{
		return iVar0;
	}
	iVar1 = 0;
	iVar0 = func_330(&iLocal_253, Local_317[iParam0], 8f, &(Local_317[iParam0]->f_21), 0f, 2, 1, iVar1, Local_317[iParam0]->f_56, 0, 0, 2, -1082130432);
	if (func_331())
	{
		func_215(Local_317[iParam0], 1);
		if (iVar0 > -1)
		{
			Local_317[iParam0]->f_57 = iVar0;
		}
		return iVar0;
	}
	else
	{
		func_215(Local_317[iParam0], 0);
	}
	return iVar0;
}

bool func_214()
{
	if (!func_5(iVar270, 2) && func_332(0, &iVar0))
	{
		if (iVar0 == 0)
		{
			if (func_36())
			{
				func_164(Global_35, "GREET_GENERAL", -417894478, iLocal_253, 1, 0, 0, 1);
			}
			else
			{
				func_164(Global_35, "GREET_GENERAL", -417894478, iLocal_253, 1, 0, 0, 1);
			}
		}
		else if (iVar0 == 1)
		{
			if (func_36())
			{
				func_164(Global_35, "INSULT_FEMALE_CONV_PART1", -417894478, iLocal_253, 1, "JOHN_PLAYER", 6, 1);
			}
			else
			{
				func_164(Global_35, "INSULT_LILLIAN_CONV_PART1", -417894478, iLocal_253, 1, 0, 2, 1);
			}
		}
		func_333(16, &iLocal_253, &uLocal_272, 4096);
		func_8(&uLocal_272, 2);
		func_8(&uLocal_272, 256);
		func_24(&uLocal_272, 1073741824);
		if (!func_5(iVar270, 268435456))
		{
			func_8(&uLocal_272, 268435456);
		}
		if ((func_334() && !func_5(iVar270, 16384)) && !func_5(iVar270, 32768))
		{
			iLocal_277 = 1;
			func_8(&uLocal_272, 16384);
		}
	}
	return true;
}

void func_215(var uParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		sVar1 = func_335(uParam0->f_21[iVar0]->f_5);
		if (!is_string_null_or_empty(sVar1))
		{
			if (bParam1 && !func_336(uParam0->f_21[iVar0], 1, 0))
			{
				func_337(uParam0->f_21[iVar0], bParam1, 0);
			}
			else if (!bParam1 && func_336(uParam0->f_21[iVar0], 1, 0))
			{
				func_337(uParam0->f_21[iVar0], bParam1, 0);
			}
		}
		iVar0++;
	}
}

void func_216(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_15(&(iParam0->f_18));
}

void func_217(int iParam0)
{
	if (!is_entity_dead(*iParam0))
	{
		_0xe98d55c5983f2509(*iParam0);
		set_ped_config_flag(*iParam0, 297, false);
	}
}

void func_218(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_338((*uParam0)[iVar0]->f_6))
			{
				if (!bParam4 && is_bit_set(uParam0[iVar0], 11))
				{
				}
				else
				{
					func_339(&((*uParam0)[iVar0]->f_6), 1, 1);
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

bool func_219(int iParam0, int iParam1)
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

char* func_220(int iParam0)
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

bool func_221(int iParam0, bool bParam1)
{
	if (!func_340(iParam0))
	{
		return false;
	}
	if ((func_341(iParam0, 1) && !func_342(iParam0)) && func_343(iParam0))
	{
		return false;
	}
	if (!func_341(iParam0, 2))
	{
		return false;
	}
	if (!bParam1)
	{
		if (!func_344(iParam0, 0))
		{
			return false;
		}
	}
	return true;
}

Vector3 func_222()
{
	return func_264("STDRG_LILPLY_BR");
}

bool func_223(var uParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (!_0xd89504d9d7d5057d(&vParam1))
	{
		bVar0 = create_new_scripted_conversation(&vParam1);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_345(vParam1, uParam0);
		if (bParam6)
		{
			preload_script_conversation(&vParam1, true, true, bParam7);
		}
		else
		{
			start_script_conversation(&vParam1, true, true, bParam7);
		}
		if (bParam4)
		{
			_0x40ca665ab9d8d505(&vParam1, iParam5);
		}
	}
	return bVar0;
}

int func_224(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, float fParam9)
{
	if (!bParam8 && network_is_game_in_progress())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_346(vParam0))
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
		if (func_347(vParam0))
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
	func_348(iVar0, bParam8);
	return iVar0;
}

void func_225(int iParam0, bool bParam1)
{
	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(iParam0, iVar0);
}

int func_226()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_227(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || shift_left(iParam0 & 1023, 5)) || shift_left(iParam1 & 16383, 15));
}

int func_228(int iParam0)
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

int func_229(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_349(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_226())
	{
		return -1;
	}
	iVar0 = func_227(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_350(iVar1, 0);
	func_351(iVar1, 0);
	func_320(iVar1, 0);
	func_352(iVar1, 0);
	func_353(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_354(iVar1, iParam4);
	}
	return iVar1;
}

int func_230(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_3;
	}
	return 0;
}

int func_231()
{
	return Global_1572887->f_12;
}

bool func_232(var uParam0, int iParam1, char* sParam2)
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

void func_233(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_234(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_235(var uParam0, float fParam1)
{
	uParam0->f_27 = fParam1;
}

int func_236(int iParam0)
{
	if (!func_34(iParam0))
	{
		return -1;
	}
	return func_273(iParam0);
}

int func_237(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_355(iVar0, iParam0, bParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_238(int iParam0, int iParam1)
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

bool func_239(int iParam0, int iParam1)
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

bool func_240(int iParam0, int iParam1)
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
	if (!func_238(iParam0, iVar0))
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

void func_241(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

bool func_242()
{
	if (func_221(137, 0))
	{
		iLocal_254 = func_356(137);
		if (does_entity_exist(iLocal_254))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return false;
}

bool func_243(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 1)
	{
		return false;
	}
	return true;
}

bool func_244(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 2)
	{
		return false;
	}
	return true;
}

void func_245(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
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
		if (func_338(iParam0->f_6))
		{
			if (is_bit_set(*iParam0, 1))
			{
				func_357(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_358(iParam0->f_6, iParam0->f_5, 0);
			}
			func_359(iParam0->f_6, 0, 1);
		}
		else
		{
			set_bit(iParam0, 14);
		}
		set_bit(iParam0, 0);
	}
	else
	{
		func_360(iParam0, iParam0->f_5);
		if (!is_bit_set(*iParam0, 13))
		{
			set_bit(iParam0, 0);
		}
	}
	set_bit(iParam0, 15);
}

void func_246(int* iParam0, int iParam1, bool bParam2)
{
	if (iParam1 > -1)
	{
		iParam0->f_3 = iParam1;
		iParam0->f_7 = 0f;
		iParam0->f_8 = 0f;
		func_361(iParam0, 5);
		if (bParam2)
		{
			func_361(iParam0, 6);
		}
		else
		{
			func_362(iParam0, 6);
		}
	}
}

void func_247(int iParam0)
{
	if (!func_243(iParam0))
	{
		return;
	}
	func_216(Local_317[iParam0], 0);
}

int func_248(int iParam0, int iParam1, int iParam2)
{
	iVar0 = get_random_int_in_range(iParam0, iParam1);
	if (iVar0 == iParam2)
	{
		if (func_363())
		{
			iVar0 = (iVar0 - 1);
		}
		else
		{
			iVar0++;
		}
		if (iVar0 < iParam0)
		{
			iVar0 = iParam0;
		}
		else if (iVar0 >= iParam1)
		{
			iVar0 = (iParam1 - 1);
		}
		if (iVar0 == iParam0 && iParam0 == iParam2)
		{
			iVar0++;
		}
		else if (iVar0 == (iParam1 - 1) && (iParam1 - 1) == iParam2)
		{
			iVar0 = (iVar0 - 1);
		}
		if (iVar0 < iParam0 || iVar0 >= iParam1)
		{
			iVar0 = func_364(func_363(), iParam0, (iParam1 - 1));
		}
	}
	return iVar0;
}

bool func_249()
{
	if (func_3(Global_35, iVar259, 0, 1))
	{
		vVar0 = { get_entity_coords(Global_35, true, false) };
		if (vVar0.z <= 58f)
		{
			return true;
		}
	}
	return false;
}

bool func_250(int iParam0, int iParam1)
{
	if (iParam0 == iParam1)
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 2)
			{
				iLocal_16 = 2;
				func_10(9);
			}
			else
			{
				iLocal_16 = 1;
				func_10(8);
			}
			return true;
		case 2:
			if (iParam1 == 0)
			{
				iLocal_16 = 0;
				func_10(54);
			}
			else
			{
				iLocal_16 = 1;
				func_10(55);
			}
			return true;
		case 1:
			if (iParam1 == 0)
			{
				iLocal_16 = 0;
				func_10(30);
			}
			else
			{
				iLocal_16 = 2;
				func_10(31);
			}
			return true;
	}
	return false;
}

char* func_251(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_365();
		case 1:
			return func_366();
	}
	return "";
}

char* func_252(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_149();
		case 1:
			return func_153();
	}
	return "";
}

void func_253(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			set_anim_scene_entity(*iParam0, "cs_lillianpowell", iLocal_253, 0);
			set_anim_scene_entity(*iParam0, "p_cigaretteholder01x", iLocal_255, 0);
			set_anim_scene_entity(*iParam0, "p_cs_book03x", iVar252, 0);
			set_anim_scene_entity(*iParam0, "p_glass06x", iVar253, 0);
			break;
		case 1:
			set_anim_scene_entity(*iParam0, "cs_lillianpowell", iLocal_253, 0);
			set_anim_scene_entity(*iParam0, "p_cigaretteholder01x", iLocal_255, 0);
			set_anim_scene_entity(*iParam0, "p_cs_book03x", iVar252, 0);
			set_anim_scene_entity(*iParam0, "p_glass06x", iVar253, 0);
			if (func_36())
			{
				set_anim_scene_entity(*iParam0, "JOHN", Global_35, 0);
			}
			else
			{
				set_anim_scene_bool(*iParam0, "b_PlayerArthur", true, false);
				set_anim_scene_entity(*iParam0, "ARTHUR", Global_35, 0);
			}
			break;
	}
}

void func_254(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam1)
	{
		if (!bParam2)
		{
			set_anim_scene_bool(*iParam0, "internal_loop", true, false);
			set_anim_scene_bool(*iParam0, "internal_loop_end", false, false);
		}
		else
		{
			set_anim_scene_bool(*iParam0, "internal_loop", false, false);
			set_anim_scene_bool(*iParam0, "internal_loop_end", true, false);
		}
	}
	else
	{
		set_anim_scene_bool(*iParam0, "b_breakout", false, false);
	}
}

int func_255(int iParam0, char* sParam1)
{
	if (is_string_null_or_empty(sParam1))
	{
		return 1;
	}
	bVar0 = _0x1f0e401031e20146(*iParam0, sParam1);
	if (bVar0)
	{
		return 1;
	}
	bVar1 = _0xa9016536015de29d(*iParam0, sParam1);
	if (!bVar1)
	{
		return 1;
	}
	bVar2 = _0x23e33cb9f4a3f547(*iParam0, sParam1);
	if (!bVar2)
	{
		return 1;
	}
	bVar3 = _0x0df57f86fe71dbe5(*iParam0, sParam1);
	if (bVar2 || bVar3)
	{
		_0xae6ada8fe7e84acc(*iParam0, sParam1);
	}
	return 0;
}

int func_256()
{
	return Global_1900383->f_393;
}

int func_257(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

bool func_258(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

Vector3 func_259(vector3 vParam0, float fParam3)
{
	if (fParam3 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = vmag(vParam0);
	if (fVar0 != 0f)
	{
		return vParam0 * FtoV((fParam3 / fVar0));
	}
	return 0f, 0f, 0f;
}

bool func_260(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_367(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

bool func_261(int iParam0, int iParam1, float fParam2)
{
	return func_368(iParam0, get_entity_coords(iParam1, false, false), fParam2);
}

bool func_262(int iParam0, int iParam1)
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

int func_263(int iParam0, int iParam1, int iParam2)
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

Vector3 func_264(char* sParam0)
{
	StringCopy(&cVar0, sParam0, 24);
	return cVar0;
}

bool func_265(var uParam0, float fParam1)
{
	if (!func_12(uParam0))
	{
		return false;
	}
	if (func_14(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

bool func_266(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

void func_267(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_369(&Global_0, 8);
	}
	if (!func_370() || func_231() != -1)
	{
		return;
	}
	func_369(&Global_0, 1);
}

void func_268()
{
	_0x9428447ded71fc7e("special_ped_scenes");
}

int func_269(int iParam0, bool bParam1)
{
	iVar0 = func_371();
	if (bParam1 && is_entity_dead(iVar0))
	{
		return -1;
	}
	return &Global_1955499;
}

void func_270(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = func_371();
	if (!is_entity_dead(iVar0))
	{
		iVar1 = 0;
		iVar2 = iParam0;
		if (iParam0 == -1)
		{
			iVar2 = func_269(iParam1, bParam2);
			if (iVar2 != -1)
			{
				iVar1 = (*Global_1955500)[iVar2]->f_2;
				if (func_372(iVar2, 512))
				{
					_0xc67a4910425f11f1(player_id(), 0);
				}
			}
		}
		task_clear_look_at(iVar0);
		_0xaac0ee3b4999abb5(iVar0, 0);
		enable_control_action(0, -128997553, true);
		if (does_entity_exist(iVar1))
		{
			if (is_entity_a_ped(iVar1))
			{
				iVar3 = get_ped_index_from_entity_index(iVar1);
				if (!is_entity_dead(iVar3))
				{
					task_clear_look_at(iVar3);
				}
			}
		}
		Global_1955499 = -1;
	}
}

void func_271(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

void func_272(int iParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		func_217(iParam0);
		func_373(iParam1, uParam2);
	}
	func_374(*iParam0, 1, bParam4);
}

int func_273(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_375(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

int func_274(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_5;
	}
	return Global_1058888->f_498[iParam0]->f_1;
}

int func_275(int iParam0)
{
	if (!func_34(iParam0))
	{
		return 0;
	}
	return func_376(func_228(iParam0));
}

void func_276(int iParam0, int iParam1, int iParam2)
{
	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_231() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	_0xd5910ecf81a2278c(iParam0, iParam1, iParam2, &vVar0);
}

bool func_277(int iParam0, bool bParam1, bool bParam2)
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
		if (func_377())
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
		iVar0 = func_378(&(Global_1898164->f_1[0]));
		if (func_379(iVar0) && func_380((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_34(&(Global_1898164->f_1[0])))
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

int func_278(int iParam0)
{
	switch (func_275(iParam0))
	{
		case 1:
			iVar0 = func_378(iParam0);
			return func_381(iVar0);
		case 8:
			iVar1 = func_378(iParam0);
			if (func_380((*Global_1347702)[iVar1]->f_12, 1))
			{
				return func_382(iVar1);
			}
			break;
	}
	return -1;
}

void func_279(bool bParam0)
{
	if (Global_1898077->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_231() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077->f_2 == 4 && Global_1898077->f_12 != Global_1898077->f_13) && !bParam0)
	{
		Global_1898077->f_1 = Global_1898077->f_2;
		Global_1898077->f_12 = Global_1898077->f_13;
		func_383(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_384();
		Global_1898077->f_9 = func_385(Global_1894899->f_2);
		func_386(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

int func_280()
{
	if (!func_65((*Global_1835011)[4]->f_1, 1))
	{
		return 0;
	}
	else if (!func_65((*Global_1347702)[66]->f_15, 1))
	{
		return 1;
	}
	else if (!func_65((*Global_1347702)[67]->f_15, 1))
	{
		return 2;
	}
	else if (!func_65((*Global_1835011)[38]->f_1, 1))
	{
		return 3;
	}
	else if (!func_65((*Global_1347702)[68]->f_15, 1))
	{
		return 4;
	}
	else if (!func_65((*Global_1835011)[59]->f_1, 1))
	{
		return 5;
	}
	else if (!func_65((*Global_1835011)[67]->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_281(int iParam0, int iParam1)
{
	if (!func_34(iParam0))
	{
		return;
	}
	func_350(iParam0, iParam1);
}

int func_282(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

void func_283(bool bParam0)
{
	if (bParam0)
	{
		set_wanted_level_multiplier(1f);
		func_387(Global_1935630, 4194304);
	}
	else
	{
		set_wanted_level_multiplier(0f);
		func_388(Global_1935630, 4194304);
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

int func_284(bool bParam0)
{
	if (!bParam0 && func_389(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

void func_285(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

void func_286(int iParam0, bool bParam1)
{
	if (func_231() != -1)
	{
		return;
	}
	if (func_282(0) != iParam0)
	{
		return;
	}
	if (func_390(iParam0))
	{
		if (bParam1)
		{
			func_391(-525676072);
		}
		else
		{
			func_392(-525676072);
		}
	}
}

int func_287(int iParam0)
{
	return func_394(func_393(iParam0));
}

void func_288(vector3 vParam0, int iParam3)
{
	if (func_346(vParam0))
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
			if (func_395(vVar2, vParam0, 2f, 1))
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

int func_289(int iParam0, vector3 vParam1, float fParam4)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		vVar0 = { get_entity_coords(iParam0, false, false) };
		vVar3 = { get_entity_forward_vector(iParam0) };
	}
	vVar6 = { vParam1 - vVar0 };
	fVar9 = func_396(vVar3, vVar6);
	if (absf(fVar9) > fParam4)
	{
		if (fVar9 > 0f)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (func_397(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

void func_290(var uParam0, bool bParam1, int iParam2)
{
	func_398(iParam2);
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
		uParam0->f_13 = func_399(0);
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
							func_234(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_400(1))
						{
							func_234(uParam0, 33554432);
						}
					}
				}
				else if (!is_ped_planting_bomb(Global_35) && (!func_400(1) || *uParam0 & 8192 != 0))
				{
					func_233(uParam0, 33554432);
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
			if (func_401(uParam0))
			{
				uParam0->f_15 = func_310();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_310() - uParam0->f_15) > 500)
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
	func_402(uParam0);
}

bool func_291(int iParam0, var uParam1)
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
			if (!func_403(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_404(iParam0, iVar2) <= func_405(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_292(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_406(iParam2, 1, 1, 1, 0))
	{
		func_234(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_407(uParam1, 1);
	func_408();
}

bool func_293(int iParam0, var uParam1)
{
	fVar0 = 85f;
	if (!is_entity_dead(iParam0))
	{
		if (func_409(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_410(uParam1);
			if (func_411(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = get_game_timer();
				}
				iVar2 = (get_game_timer() - uParam1->f_2);
				iVar3 = func_412(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_407(uParam1, 1);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_407(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_294(int iParam0, int iParam1, var uParam2)
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
	if (func_413(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_410(uParam2);
		if (func_411(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = get_game_timer();
			}
			if (uParam2->f_2 != 0)
			{
				if (get_game_timer() - uParam2->f_2) > func_412(uParam2)
				{
					func_407(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_295(int iParam0, var uParam1)
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
	if (func_403(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = get_game_timer();
		}
		else if (get_game_timer() - uParam1->f_3) > func_412(uParam1)
		{
			fVar3 = func_410(uParam1);
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

int func_296(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_414(bParam1, bParam2, bParam3);
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

bool func_297(var uParam0, float fParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_310();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_298(var uParam0, int iParam1, var uParam2)
{
	if (!is_entity_dead(iParam1))
	{
		if (!network_is_in_session())
		{
			fVar0 = func_415(uParam2);
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
			if (func_306(uParam2, iParam1))
			{
				func_407(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_299(var uParam0, int iParam1, var uParam2)
{
	if (uParam2->f_12 < IntToFloat(func_416(uParam2)))
	{
		if ((is_weapon_valid(Global_1935630->f_46) && !_0x5809dbca0a37c82b(Global_1935630->f_46)) || get_current_ped_vehicle_weapon(Global_35, &uVar0))
		{
			if (func_306(uParam2, iParam1))
			{
				if (_0x285d36c5c72b0569(uParam0) <= 1f)
				{
					func_407(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_300(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vVar0 = { get_entity_coords(iParam1, false, true) };
	iVar3 = func_417(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, uParam2->f_22))
				{
					func_407(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (is_shocking_event_in_sphere(956330317, vVar0, uParam2->f_27))
				{
					func_407(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_26, &vVar4, 0, 0);
					if (func_418(iParam1, vVar0, vVar4))
					{
						func_407(uParam2, 1);
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
					func_407(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_26, &vVar7, 0, 0);
					if (func_418(iParam1, vVar0, vVar7))
					{
						func_407(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_301(int iParam0, var uParam1)
{
	vVar9 = { get_entity_coords(iParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_403(iParam0, uParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_419(&(Global_1935630->f_34[iVar0]));
			fVar1 = vdist(get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_420(&(Global_1935630->f_34[iVar0])))
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
			if (func_421(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_422(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_423(uParam1, iParam0, fVar1, iVar0))
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

bool func_302(int iParam0, var uParam1)
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

bool func_303(var uParam0, int iParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_310();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_304(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_424(iVar0, &iVar2))
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
	if (func_425(iVar0, iParam0))
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

int func_305(var uParam0, int iParam1)
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

bool func_306(var uParam0, int iParam1)
{
	if (func_426(uParam0))
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

bool func_307(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_178(iParam0, iParam1, 1, 1) < 4f)
		{
			if (is_entity_touching_entity(iParam0, iParam1) && is_ped_ragdoll(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_308()
{
}

bool func_309(var uParam0, int iParam1)
{
	iVar0 = get_vehicle_ped_is_using(Global_35);
	if (iVar0 != 0 && !is_this_model_a_train(get_entity_model(iVar0)))
	{
		vVar1 = { get_entity_coords(iParam1, false, false) };
		if (func_427(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_310();
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
						if (func_428(iVar7, vVar1, 1) < 3f)
						{
							if (is_entity_touching_entity(iVar7, iParam1))
							{
								uParam0->f_9 = func_310();
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

int func_310()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

bool func_311()
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
	if ((func_310() - Global_1935630->f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_312(var uParam0, int iParam1)
{
	if (!does_entity_exist(uParam0->f_14))
	{
		return false;
	}
	if (!is_ped_human(iParam1))
	{
		return false;
	}
	fVar0 = func_405(uParam0);
	if (uParam0->f_12 > func_429(uParam0) && uParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_430(iParam1);
	iVar1 = func_431(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((_0x06087579e7aa85a9(iParam1, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, Global_35, 17)) && _0x7f9b9791d4cb71f6(iParam1, Global_35, 1, 0) == 1)) || ((_0x06087579e7aa85a9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, uParam0->f_14, 17)) && _0x7f9b9791d4cb71f6(iParam1, uParam0->f_14, 1, 0) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_313(int iParam0, int iParam1, var uParam2)
{
	if (uParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return func_432(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

bool func_314(int iParam0, var uParam1)
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
		if (func_433(iParam0, uParam1, 1))
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
					if (!func_434(uParam1, iParam0))
					{
						if (func_428(iVar4, Global_36, 1) < 7f)
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

bool func_315(int iParam0, var uParam1)
{
	if (!func_435(0))
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

bool func_316(var uParam0, int iParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_310();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_317(int iParam0, var uParam1)
{
	return _0xe33f98bd76490abc(*iParam0, player_id(), 0);
}

int func_318(int iParam0, var uParam1)
{
	if (!is_ped_human(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_310();
	}
	else if (func_310() - uParam1->f_4) > func_436(uParam1)
	{
		return func_437(iParam0, uParam1, 0, -1082130432);
	}
	return 0;
}

bool func_319(var uParam0, int iParam1)
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

void func_320(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_3 = iParam1;
}

int func_321()
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

bool func_322(var uParam0, vector3 vParam1, float fParam4)
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

bool func_323(var uParam0, int iParam1, vector3 vParam2, float fParam5, float fParam6)
{
	if (!is_itemset_valid(*uParam0))
	{
		*uParam0 = create_itemset(true);
	}
	iVar2 = _0x59b57c4b06531e1e(vParam2, fParam6, *uParam0, 1);
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		iVar0 = get_indexed_item_in_itemset(iVar1, *uParam0);
		*iParam1 = iVar0;
		if (does_entity_exist(*iParam1))
		{
			if (!is_entity_dead(*iParam1))
			{
				if (_is_this_model_a_horse(get_entity_model(*iParam1)))
				{
					if (func_438(Global_35, *iParam1, 0))
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

bool func_324(int iParam0, bool bParam1)
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

void func_325(int iParam0, vector3 vParam1, int iParam4)
{
	if (!func_262(*iParam0, 518218985))
	{
		clear_ped_tasks(*iParam0, 1, 0);
		_task_smart_flee_style_coord(*iParam0, vParam1, 6, 0, iParam4, -1, 0);
	}
}

void func_326(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_327(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_328(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_329(bool bParam0)
{
	if (bParam0)
	{
		Global_1935689 = 1;
	}
	else
	{
		Global_1935689 = 2;
	}
}

int func_330(int iParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	if (!is_entity_dead(*iParam0))
	{
		func_439(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !_does_volume_exist(iParam9)) || is_entity_in_volume(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (is_ambient_speech_playing(*iParam0) || is_scripted_speech_playing(*iParam0));
		fVar8 = func_440(fParam12 >= 0f, fParam12, vdist(Global_36, get_entity_coords(*iParam0, true, false)));
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
			func_162(&(iParam1->f_13));
		}
		if (func_441(*iParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_442(iParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_330(iParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_217(iParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!get_ped_config_flag(*iParam0, 317, true))
						{
							func_443(*iParam0, 1, 1);
						}
					}
					else if (func_444(iParam1, 22))
					{
						func_443(*iParam0, 0, 1);
					}
				}
				if (func_445(iParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_446(iParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_447(iParam8);
					if (func_448(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (is_bit_set(uParam3[iParam1->f_1], 20))
								{
									func_449(uParam3);
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
					func_450(iParam1, uParam3, fVar8);
					if (func_451(*iParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (is_bit_set(*iParam1, 1))
					{
						func_218(uParam3, 0, 0, 1, 1);
						clear_bit(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_452(iParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_445(iParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_453(*iParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_448(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_446(iParam0, func_445(iParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_447(iParam8);
				}
				else if (is_bit_set(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_218(uParam3, 0, 0, 1, 1);
					}
					func_362(iParam1, 1);
				}
				func_450(iParam1, uParam3, fVar8);
				if (func_452(iParam0, iParam1, fParam4, bVar6))
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
			func_373(iParam1, uParam3);
			set_bit(iParam1, 3);
		}
	}
	return -1;
}

bool func_331()
{
	if (((((((((does_entity_exist(Global_35) && !Global_1935630->f_12) && _does_volume_exist(iVar258)) && is_entity_in_volume(Global_35, iVar258, true, 0)) && func_177(Global_35, iLocal_253, 1060437492) != 1) && ((((iVar307 >= 11 && _does_anim_scene_exist(iVar314)) && _get_anim_scene_progress(iVar314) >= func_454(iLocal_14)) && !is_scripted_speech_playing(iLocal_253)) || func_455())) && iLocal_14 != 80) && iLocal_14 != 6) && !func_5(iVar270, 2)) && !func_456())
	{
		func_457(0, 1);
		return true;
	}
	else
	{
		func_457(0, 0);
	}
	return false;
}

bool func_332(int iParam0, int iParam1)
{
	if (!func_243(iParam0))
	{
		return false;
	}
	if (Local_317[iParam0]->f_57 == -1)
	{
		return false;
	}
	iVar0 = Local_317[iParam0]->f_57;
	if (!func_244(iVar0))
	{
		return false;
	}
	*iParam1 = iVar0;
	return true;
}

void func_333(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!does_entity_exist(*iParam1))
	{
		return;
	}
	if (func_208(*iParam2, iParam3))
	{
		return;
	}
	Global_40.f_11623[iParam0]->f_6++;
	if (Global_40.f_11623[iParam0]->f_6 == 1 && func_459(func_458(-1342635612)) < 5)
	{
		func_460(func_458(-1342635612), 1);
	}
	Global_40.f_11623[iParam0]->f_3 = func_191();
	func_183(iParam2, iParam3);
	(*Global_1396257)[iParam0]->f_631 = 1;
}

bool func_334()
{
	if ((((((((iLocal_14 > 2 && iLocal_14 != 4) && (iLocal_14 < 7 || iLocal_14 > 28)) && iLocal_14 != 30) && iLocal_14 != 31) && (iLocal_14 < 45 || iLocal_14 > 52)) && iLocal_14 != 54) && iLocal_14 != 55) && iLocal_14 < 67)
	{
		return true;
	}
	return false;
}

char* func_335(var uParam0)
{
	return uParam0;
}

bool func_336(var uParam0, bool bParam1, bool bParam2)
{
	if (!bParam1 || func_338(uParam0->f_6))
	{
		if (is_bit_set(*uParam0, 0))
		{
			if (!bParam2)
			{
				return true;
			}
			if (func_461(uParam0->f_6, bParam1))
			{
				return true;
			}
		}
	}
	return false;
}

void func_337(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_462(iParam0, 13))
	{
		func_463(iParam0, 0);
	}
	else
	{
		func_464(iParam0, 0);
	}
	if (func_338(iParam0->f_6))
	{
		if (bParam2)
		{
			func_339(&(iParam0->f_6), 0, 1);
		}
	}
}

bool func_338(int iParam0)
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

void func_339(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_338(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_465(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_466(iVar0);
	*uParam0 = 0;
}

bool func_340(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

bool func_341(int iParam0, int iParam1)
{
	if (func_231() != -1)
	{
		return false;
	}
	if (!func_340(iParam0))
	{
		return false;
	}
	return (Global_24887[iParam0] && iParam1) != 0;
}

bool func_342(int iParam0)
{
	if (!func_340(iParam0))
	{
		return false;
	}
	return (*Global_1895087)[iParam0]->f_2 == get_id_of_this_thread();
}

bool func_343(int iParam0)
{
	if (!func_340(iParam0))
	{
		return false;
	}
	return _does_thread_exist((*Global_1895087)[iParam0]->f_2);
}

bool func_344(int iParam0, bool bParam1)
{
	if (func_231() != -1)
	{
		return false;
	}
	if (!func_340(iParam0))
	{
		return false;
	}
	if (!_0x800df3fc913355f3(func_467(iParam0)))
	{
		return false;
	}
	if (bParam1 && !does_entity_exist(func_468(iParam0)))
	{
		return false;
	}
	return !_0xeb98b38ca60742d7(func_467(iParam0));
}

void func_345(var uParam0, var uParam1, var uParam2, var uParam3)
{
	iVar0 = 0;
	while (iVar0 < uParam3->f_97)
	{
		if (does_entity_exist(uParam3[iVar0]))
		{
			if (!is_entity_dead(uParam3[iVar0]))
			{
				add_ped_to_conversation(&uParam0, uParam3[iVar0], &((*uParam3)[iVar0]->f_1));
			}
		}
		iVar0++;
	}
}

bool func_346(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_347(vector3 vParam0)
{
	return _0x769bb7626b8cdb06(vParam0, 0.5f, 0, 0, 16384);
}

int func_348(int iParam0, bool bParam1)
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

bool func_349(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_350(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_469(iParam0);
	}
	else
	{
		func_470(iParam0, iParam1);
	}
	func_471();
}

void func_351(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_2 = iParam1;
}

void func_352(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_4 = iParam1;
}

void func_353(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0] = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0] = iParam1;
}

void func_354(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_5 = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0]->f_1 = iParam1;
}

void func_355(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_472(iParam1))
		{
			func_68(iParam0, 41788943);
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
			func_473(iParam0, 0, 1);
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
			func_474(iParam0, 0);
			bVar0 = true;
		}
		func_475(iParam0, bParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

int func_356(int iParam0)
{
	if (!func_340(iParam0))
	{
		return 0;
	}
	if (!func_341(iParam0, 2))
	{
		return 0;
	}
	if (func_477(func_476(iParam0)))
	{
		return func_468(iParam0);
	}
	return _0xe76687023d8c8505(func_478(iParam0), 0);
}

void func_357(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3 && !func_338(iParam0))
	{
		return;
	}
	iVar0 = func_465(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(2, sParam1, sParam2));
}

void func_358(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 && !func_338(iParam0))
	{
		return;
	}
	iVar0 = func_465(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, sParam1);
}

void func_359(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_338(iParam0))
	{
		return;
	}
	iVar0 = func_465(iParam0);
	if (bParam1)
	{
		func_479(iParam0, 4);
		func_480(iVar0, 1);
		func_481(iVar0, 1);
	}
	else
	{
		func_482(iParam0, 4);
		func_481(iVar0, 0);
	}
}

void func_360(int* iParam0, char* sParam1)
{
	if (func_338(iParam0->f_6) && !is_string_null_or_empty(sParam1))
	{
		func_358(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_464(iParam0, 1);
}

void func_361(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

void func_362(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

bool func_363()
{
	if (is_bit_set(get_random_int_in_range(0, 65536), 0))
	{
		return true;
	}
	return false;
}

int func_364(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

char* func_365()
{
	return "script@specialped@pdsfw_lillianpowell@ig@ig_1@ig_1";
}

char* func_366()
{
	return "script@specialped@pdsfw_lillianpowell@ig@ig_4@ig_4";
}

float func_367(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

bool func_368(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { get_entity_forward_vector(iParam0) };
	vVar3 = { vParam1 - get_entity_coords(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > fParam4;
}

void func_369(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_370()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

int func_371()
{
	switch (func_231())
	{
		case 0:
			return get_player_ped(player_id());
		default:
			break;
	}
	return Global_35;
}

bool func_372(int iParam0, int iParam1)
{
	if (func_483(iParam0, 1, 1))
	{
		return func_5(Global_1955500[iParam0], iParam1);
	}
	return false;
}

void func_373(int* iParam0, var uParam1)
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
	func_484(iParam0, uParam1, 1);
	func_218(uParam1, 0, 1, 1, 0);
	_copy_memory(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		_copy_memory((*uParam1)[iVar0], &Var22, 17);
		iVar0++;
	}
}

void func_374(int iParam0, bool bParam1, bool bParam2)
{
	set_ped_config_flag(iParam0, 297, false);
	set_ped_config_flag(iParam0, 301, false);
	set_ped_config_flag(iParam0, 315, false);
	set_ped_config_flag(iParam0, 130, false);
	set_ped_config_flag(iParam0, 178, bParam2);
	set_ped_config_flag(iParam0, 330, false);
	set_ped_config_flag(iParam0, 317, bParam1);
}

int func_375(int iParam0)
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

int func_376(int iParam0)
{
	return iParam0 & 31;
}

bool func_377()
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

int func_378(int iParam0)
{
	if (!func_34(iParam0))
	{
		return -1;
	}
	return func_485(func_228(iParam0));
}

bool func_379(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_380(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_381(int iParam0)
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
		case 9:
		case 10:
		case 11:
		case 13:
		case 14:
		case 15:
		case 25:
			return 1;
		case 12:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 26:
		case 53:
			return 2;
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 37:
			return 3;
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			return 4;
		case 44:
		case 45:
		case 46:
		case 47:
		case 49:
		case 50:
		case 51:
		case 52:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			return 5;
		case 59:
			return 6;
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
			return 7;
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
			return 8;
	}
	return -1;
}

int func_382(int iParam0)
{
	switch (iParam0)
	{
		case 120:
			return 0;
		case 0:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 66:
		case 94:
		case 97:
		case 98:
		case 112:
		case 113:
		case 114:
			return 1;
		case 3:
		case 4:
		case 5:
		case 37:
		case 67:
		case 76:
		case 134:
			return 2;
		case 115:
		case 116:
			return 3;
		case 58:
		case 64:
		case 68:
		case 82:
		case 83:
			return 5;
		case 1:
		case 2:
		case 8:
		case 9:
		case 10:
		case 96:
			return 8;
	}
	return -1;
}

void func_383(int iParam0, var uParam1)
{
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(4, &Var0, 2, 2);
}

int func_384()
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

int func_385(int iParam0)
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
		case 29:
			return 27;
		case 49:
			return 28;
		case 30:
			return 29;
		case 31:
			return 30;
		case 32:
			return 31;
		case 120:
			return 32;
		case 124:
			return 33;
		case 125:
			return 34;
		case 33:
			return 35;
		case 83:
			return 40;
		case 35:
			return 42;
		case 36:
			return 43;
		case 89:
			return 44;
		case 115:
			return 46;
		case 37:
			return 47;
		case 38:
			return 48;
		case 39:
			return 49;
		case 40:
			return 50;
		case 50:
			return 51;
		case 42:
			return 52;
		case 52:
			return 53;
		case 43:
			return 54;
		case 45:
			return 57;
		case 48:
			return 61;
		case 56:
			return 63;
		case 57:
			return 64;
		case 58:
			return 65;
		case 59:
			return 66;
		case 60:
			return 67;
		case 61:
			return 68;
		case 126:
			return 69;
		case 127:
			return 70;
		case 62:
			return 71;
		case 77:
			return 72;
		case 64:
			return 73;
		case 65:
			return 74;
		case 67:
			return 76;
		case 68:
			return 78;
		case 69:
			return 79;
		case 70:
			return 80;
		case 71:
			return 81;
		case 72:
			return 82;
		case 75:
			return 84;
		case 76:
			return 85;
		case 117:
			return 86;
		case 78:
			return 87;
		case 79:
			return 88;
		case 80:
			return 90;
		case 81:
			return 91;
		case 82:
			return 92;
		case 87:
			return 96;
		case 88:
			return 97;
		case 91:
			return 98;
		case 92:
			return 99;
		case 93:
			return 100;
		case 94:
			return 101;
		case 95:
			return 102;
		case 96:
			return 103;
		case 97:
			return 104;
		case 98:
			return 105;
		case 99:
			return 106;
		case 100:
			return 107;
		case 104:
			return 114;
		case 105:
			return 115;
		case 107:
			return 118;
		case 109:
			return 119;
		case 110:
			return 120;
		case 111:
			return 121;
		case 112:
			return 122;
		case 128:
			return 123;
		default:
			break;
	}
	return 0;
}

void func_386(var uParam0, var uParam1, var uParam2)
{
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	network_set_rich_presence(3, &vVar0, 3, 3);
}

void func_387(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_388(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_389(int iParam0)
{
	iVar0 = func_486(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

bool func_390(int iParam0)
{
	if (!func_34(iParam0))
	{
		return false;
	}
	switch (func_275(iParam0))
	{
		case 1:
			switch (func_378(iParam0))
			{
				case 9:
				case 18:
				case 23:
				case 24:
				case 26:
				case 33:
				case 34:
				case 37:
				case 38:
				case 39:
				case 40:
				case 41:
				case 42:
				case 43:
				case 47:
				case 59:
				case 66:
					return true;
			}
			break;
		case 8:
			switch (func_378(iParam0))
			{
				case 2:
				case 58:
				case 62:
				case 96:
					return true;
			}
			break;
	}
	return false;
}

void func_391(int iParam0)
{
	iVar2 = func_487(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_488(iVar1) == iParam0)
		{
			_0x6a564540fac12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_490(func_489(iParam0), 6);
}

void func_392(int iParam0)
{
	iVar2 = func_487(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_488(iVar1) == iParam0)
		{
			_0x766315a564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_491(func_489(iParam0), 6);
}

int func_393(int iParam0)
{
	if (iParam0 == 0 || iParam0 == -1)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (&Global_1898164->f_1[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_394(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_1898164->f_162 == 0)
	{
		return 0;
	}
	if (Global_1898164->f_162 == 1)
	{
		Global_1898164->f_162 = 0;
		*Global_1898164->f_1[0] = { Var0 };
		return 1;
	}
	*Global_1898164->f_1[iParam0] = { Var0 };
	Global_1898164->f_162 = (Global_1898164->f_162 - 1);
	func_492(iParam0, Global_1898164->f_162);
	return 1;
}

bool func_395(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

float func_396(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	fVar0 = vmag(vParam0);
	if (fVar0 != 0f)
	{
		vParam0.x = (vParam0.x / fVar0);
		vParam0.f_1 = (vParam0.y / fVar0);
	}
	fVar0 = vmag(vParam3);
	if (fVar0 != 0f)
	{
		vParam3.x = (vParam3.x / fVar0);
		vParam3.f_1 = (vParam3.y / fVar0);
	}
	return ((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y));
}

bool func_397(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

void func_398(int iParam0)
{
	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_493();
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
			func_494(&(Global_1935630->f_34), &(Global_1935630->f_39));
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

var func_399(int iParam0)
{
	return &(Global_1109400->f_276[iParam0]);
}

bool func_400(bool bParam0)
{
	if (func_495(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_401(var uParam0)
{
	iVar0 = Global_1935630->f_40;
	if (func_231() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_496(uParam0);
		}
	}
	else if (!does_entity_exist(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_496(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_431(iVar0) == -1)
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

void func_402(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_497(uParam0);
	}
}

bool func_403(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_431(iParam2);
	}
	else
	{
		iVar1 = func_430(iParam2);
	}
	if (!is_ped_human(iParam0))
	{
		iVar0 = func_431(iParam0);
	}
	else
	{
		iVar0 = func_430(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_328(*uParam1, 8388608))
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

float func_404(int iParam0, int iParam1)
{
	return func_178(iParam0, iParam1, 1, 1);
}

float func_405(var uParam0)
{
	return uParam0->f_26;
}

bool func_406(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_407(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_234(uParam0, 134217728);
	}
	else
	{
		func_233(uParam0, 134217728);
	}
}

void func_408()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

bool func_409(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((_0xcb690f680a3ea971(iVar0, 1) && is_player_targetting_entity(iVar1, iParam0, bParam5)) && is_player_free_aiming_at_entity(iVar1, iParam0)) && func_178(iVar0, iParam0, 1, 1) <= 4f)
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
		if (_is_weapon_sniper(func_498(iVar0, 0)))
		{
			if (func_499(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_410(var uParam0)
{
	return uParam0->f_17;
}

bool func_411(var uParam0, int iParam1, float fParam2, float fParam3)
{
	if (uParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_328(*uParam0, 4194304))
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

int func_412(var uParam0)
{
	return uParam0->f_18;
}

bool func_413(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (_is_weapon_sniper(func_498(iVar0, 0)))
		{
			if (func_500(get_entity_coords(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_414(bool bParam0, bool bParam1, bool bParam2)
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

float func_415(var uParam0)
{
	return uParam0->f_23;
}

int func_416(var uParam0)
{
	return uParam0->f_21;
}

int func_417(var uParam0)
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

bool func_418(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_368(iParam0, vParam4, 0.5f))
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

int func_419(int iParam0)
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
	if (func_501(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_420(int iParam0)
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

bool func_421(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_502(iParam1))
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

bool func_422(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_502(iParam1))
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

bool func_423(var uParam0, int iParam1, float fParam2, int iParam3)
{
	fVar0 = 40f;
	if (func_502(iParam1))
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

bool func_424(int iParam0, int iParam1)
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

bool func_425(int iParam0, int iParam1)
{
	if (_get_lassoed_entity(iParam0) == iParam1)
	{
		return true;
	}
	if (func_503(iParam0, 1, 0, 0) != 2055893578)
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

bool func_426(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

bool func_427(int iParam0, int iParam1, vector3 vParam2)
{
	fVar0 = func_428(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (is_entity_touching_entity(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_428(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

float func_429(var uParam0)
{
	return uParam0->f_24;
}

int func_430(int iParam0)
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

int func_431(int iParam0)
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

int func_432(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_424(Global_35, &iVar1))
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
		fVar2 = func_178(iParam0, player_ped_id(), 0, 1);
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
		if (func_178(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
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

bool func_433(int iParam0, var uParam1, bool bParam2)
{
	func_495(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_434(uParam1, iVar0))
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
				if (!bParam2 || !func_434(uParam1, iVar1))
				{
					if (func_428(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_434(var uParam0, int iParam1)
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

bool func_435(int iParam0)
{
	if (func_36())
	{
		return false;
	}
	return func_65((*Global_1347702)[58]->f_15, 1);
}

int func_436(var uParam0)
{
	return uParam0->f_20;
}

int func_437(int iParam0, var uParam1, bool bParam2, float fParam3)
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

bool func_438(int iParam0, int iParam1, bool bParam2)
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

void func_439(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

float func_440(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_441(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_504(iParam0, iParam1))
		{
			if (!func_328(iParam1->f_10, 1))
			{
				set_ped_config_flag(iParam0, 130, false);
				set_ped_config_flag(iParam0, 315, false);
				set_ped_config_flag(iParam0, 297, false);
				set_ped_config_flag(iParam0, 178, true);
				func_218(uParam2, 0, 0, 1, 0);
				func_234(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_328(iParam1->f_10, 1))
		{
			func_505(uParam2);
			set_ped_config_flag(iParam0, 130, true);
			set_ped_config_flag(iParam0, 315, true);
			set_ped_config_flag(iParam0, 297, true);
			set_ped_config_flag(iParam0, 178, false);
			func_233(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_442(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!is_entity_dead(*iParam0))
	{
		_0xe98d55c5983f2509(*iParam0);
		bVar4 = func_328(iParam4, 32);
		func_484(iParam1, uParam2, 0);
		iVar5 = func_506(*iParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			set_ped_config_flag(*iParam0, 178, false);
			return true;
		}
		func_218(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_328(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_328(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_328(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_328(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_328(iParam4, 8388608) || func_328(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_328(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_328(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_444(iParam1, 4))
		{
			iVar6 |= 1024;
			_0xbb1e41dd3d3c6250(*iParam0, "IloGeneralEvents", 2);
		}
		if (!func_444(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_328(iParam4, 67108864))
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
				iParam6 = func_507(iParam0);
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
			if (func_328(iParam4, 268435456))
			{
				iVar8 = func_508(uParam2, 648122183);
				if (iVar8 > -1)
				{
					func_509(iParam1, (*uParam2)[iVar8]);
				}
			}
			if (func_444(iParam1, 23))
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
			if (func_328(iParam4, 2) || func_328(iParam4, 16))
			{
				func_443(*iParam0, 1, 1);
			}
			else
			{
				func_443(*iParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_443(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !is_entity_dead(iParam0))
	{
		set_ped_config_flag(iParam0, 317, bParam1);
	}
}

bool func_444(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

bool func_445(int iParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_510(*iParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_446(int iParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_511(*iParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_328(iParam10, 32), 1, 0);
			set_bit(iParam2, 1);
		}
	}
	else if (is_bit_set(*iParam2, 1))
	{
		clear_bit(iParam2, 1);
	}
}

void func_447(int iParam0)
{
	if (func_328(iParam0, 4))
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
	if (func_328(iParam0, 16384))
	{
		disable_control_action(0, -485697785, false);
	}
	if (func_328(iParam0, 8))
	{
		disable_control_action(0, -1292666904, false);
		disable_control_action(0, 578288361, false);
	}
}

bool func_448(int iParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	iVar1 = func_512(1);
	bVar2 = is_bit_set(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = is_ped_on_foot(Global_35);
	bVar10 = is_ped_injured(*iParam0);
	bVar11 = (((_is_ped_carrying(Global_35) || func_513(Global_35)) || func_514(Global_35)) || func_515(Global_35));
	fVar12 = -1f;
	if (func_12(&(iParam1->f_13)))
	{
		fVar12 = func_14(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((*uParam4)[iVar0]->f_8 != iParam12)
		{
			iParam12 = (*uParam4)[iVar0]->f_8;
		}
		bVar4 = func_338((*uParam4)[iVar0]->f_6);
		func_516(*iParam0, (*uParam4)[iVar0], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (is_bit_set(uParam4[iVar0], 20))
		{
			bVar3 = true;
		}
		if (func_517(*iParam0, iParam1, (*uParam4)[iVar0], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_518(iParam12, (*uParam4)[iVar0]->f_6))
				{
					if (!bVar7)
					{
						func_218(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_519(uParam4, 0, 0);
					}
					if (is_bit_set(uParam4[iVar0], 11))
					{
						func_484(iParam1, uParam4, is_bit_set(*iParam1, 6));
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
					if (func_520(iParam1, fParam6, iParam1->f_9))
					{
						func_162(&(iParam1->f_18));
						if (bVar6)
						{
							func_519(uParam4, 0, 0);
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
		func_521(iParam1, fParam2);
	}
	return bVar5;
}

void func_449(var uParam0)
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

void func_450(int* iParam0, var uParam1, float fParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_522((*uParam1)[iVar0]))
		{
			if (is_bit_set(uParam1[iVar0], 20))
			{
				func_521(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_451(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!is_control_pressed(0, -124244224))
		{
			if (func_523(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_361(iParam1, 0);
				func_484(iParam1, uParam2, func_444(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

bool func_452(int iParam0, int* iParam1, float fParam2, bool bParam3)
{
	if (iParam1->f_9)
	{
		if (is_ambient_speech_playing(*iParam0) || is_scripted_speech_playing(*iParam0))
		{
			return false;
		}
		iParam1->f_9 = 0;
		set_bit(iParam1, 0);
		if (fParam2 > 0f)
		{
			func_162(&(iParam1->f_18));
			return false;
		}
		else if (func_12(&(iParam1->f_18)))
		{
			func_15(&(iParam1->f_18));
			return false;
		}
	}
	if (!func_12(&(iParam1->f_18)))
	{
		return true;
	}
	if (fParam2 > 0f && bParam3)
	{
		if (is_ambient_speech_playing(Global_35) || is_scripted_speech_playing(Global_35))
		{
			return false;
		}
	}
	return func_163(&(iParam1->f_18), fParam2);
	return true;
}

void func_453(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_516(iParam0, (*uParam2)[iVar0], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

float func_454(int iParam0)
{
	if (iParam0 == 6)
	{
		return 0.5f;
	}
	return 0.9f;
}

bool func_455()
{
	if (((iLocal_14 == 38 || iLocal_14 == 39) || iLocal_14 == 40) || iLocal_14 == 29)
	{
		return true;
	}
	return false;
}

bool func_456()
{
	if (_is_ped_carrying(Global_35) || func_524())
	{
		return true;
	}
	return false;
}

void func_457(int iParam0, bool bParam1)
{
	if (!func_243(iParam0))
	{
		return;
	}
	if (func_525() == iParam0)
	{
		if (bParam1)
		{
			if (func_526(iParam0) != 1)
			{
				func_75(iParam0, 1, 1);
			}
		}
		else if (func_526(iParam0) != func_74(3, 0, 0))
		{
			func_75(iParam0, func_74(3, 0, 0), 1);
		}
	}
}

struct<2> func_458(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

int func_459(var uParam0, var uParam1)
{
	stat_id_get_int(&uParam0, &uVar0);
	return uVar0;
}

void func_460(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

bool func_461(int iParam0, bool bParam1)
{
	if (bParam1 && !func_338(iParam0))
	{
		return false;
	}
	return !func_527(iParam0, 4);
}

bool func_462(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

void func_463(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

void func_464(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

int func_465(int iParam0)
{
	return iParam0;
}

void func_466(int iParam0)
{
	if (!func_528(iParam0))
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

int func_467(int iParam0)
{
	if (!func_340(iParam0))
	{
		return 0;
	}
	return (*Global_1895087)[iParam0]->f_1;
}

int func_468(int iParam0)
{
	iVar0 = func_467(iParam0);
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

int func_469(int iParam0)
{
	iVar0 = func_375(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_529(iVar0);
}

int func_470(int iParam0, int iParam1)
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
			func_530(iVar2);
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

void func_471()
{
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

bool func_472(int iParam0)
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

void func_473(int iParam0, int iParam1, bool bParam2)
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

void func_474(int iParam0, bool bParam1)
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

void func_475(int iParam0, bool bParam1)
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

int func_476(int iParam0)
{
	if (!func_340(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0];
}

bool func_477(int iParam0)
{
	return iParam0 != 0;
}

int func_478(int iParam0)
{
	if (!func_340(iParam0))
	{
		return 0;
	}
	return _0xa00df706c60173d1(Global_1895087[iParam0]);
}

void func_479(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_480(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_527(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_481(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_482(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

bool func_483(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 > -1 && iParam0 < 4)
	{
		if (!bParam1 || _does_volume_exist((*Global_1955500)[iParam0]->f_1))
		{
			if (!bParam2 || does_entity_exist((*Global_1955500)[iParam0]->f_2))
			{
				return true;
			}
		}
	}
	return false;
}

void func_484(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_339(&((*uParam1)[iParam0->f_3]->f_6), 1, 1);
		if (bParam2)
		{
			func_216(iParam0, 0);
		}
	}
}

int func_485(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

int func_486(int iParam0, int iParam1)
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

int func_487(bool bParam0)
{
	if (func_231() == -1)
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

int func_488(int iParam0)
{
	if (!func_531(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_489(int iParam0)
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

void func_490(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 - (Global_1946804->f_2657.f_26.f_6 && iParam0));
}

void func_491(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 || iParam0);
}

void func_492(int iParam0, int iParam1)
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
			func_532((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_532(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_34(&(Global_1898164->f_1[0])))
	{
		func_281(&(Global_1898164->f_1[0]), 3);
	}
}

bool func_493()
{
	if (func_533())
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

void func_494(var uParam0, var uParam1)
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

bool func_495(bool bParam0, int iParam1, int iParam2)
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

int func_496(var uParam0)
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

void func_497(var uParam0)
{
	if (Global_1935630->f_38 == 0)
	{
		func_233(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (does_entity_exist(&(Global_1935630->f_34[iVar0])))
			{
				if (!_0x88ad6cc10d8d35b2(&(Global_1935630->f_34[iVar0])))
				{
					func_234(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_498(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_499(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_500(get_entity_coords(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_500(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_501(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_502(int iParam0)
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

int func_503(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

bool func_504(int iParam0, int* iParam1)
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
		if (is_ped_in_combat(iParam0, func_534((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_505(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_522((*uParam0)[iVar0]))
		{
			func_463((*uParam0)[iVar0], 14);
		}
		iVar0++;
	}
}

int func_506(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(*uParam2)[iVar0]->f_8 = 6;
		func_535(iParam0, (*uParam2)[iVar0], fParam3, 3, 0, 6, bParam4, 0);
		if (func_338((*uParam2)[iVar0]->f_6))
		{
			func_463((*uParam2)[iVar0], 11);
			return (*Global_1945938)[(*uParam2)[iVar0]->f_6]->f_3;
		}
	}
	return 0;
}

int func_507(int iParam0)
{
	iVar0 = func_536(*iParam0);
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

int func_508(var uParam0, int iParam1)
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

void func_509(int* iParam0, int* iParam1)
{
	if (!func_444(iParam0, 23))
	{
		if (iParam1->f_7 == 648122183)
		{
			func_463(iParam1, 19);
			func_361(iParam0, 23);
			func_537(iParam1, 2);
		}
	}
}

bool func_510(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (func_538(16))
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
					func_539(16);
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

void func_511(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_535(iParam0, (*uParam1)[iVar0], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			clear_bit((*uParam1)[iVar0], 14);
		}
		iVar0++;
	}
}

int func_512(int iParam0)
{
	return _money_get_cash_balance();
}

bool func_513(int iParam0)
{
	return (func_540(iParam0, 4) || func_540(iParam0, 5));
}

int func_514(int iParam0)
{
	return func_540(iParam0, 7);
}

int func_515(int iParam0)
{
	return func_540(iParam0, 6);
}

void func_516(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (is_bit_set(*iParam1, 14))
	{
		if (func_522(iParam1))
		{
			clear_bit(iParam1, 14);
			func_535(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_517(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_541(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_461(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_359(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_359(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_542(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_518(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_543(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_544(iParam1, 1))
	{
		func_545(iParam1, 1);
		return true;
	}
	return false;
}

void func_519(var uParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_337((*uParam0)[iVar0], bParam1, bParam2);
		iVar0++;
	}
}

bool func_520(int* iParam0, float fParam1, bool bParam2)
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

void func_521(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		disable_control_action(0, 1101824977, true);
		disable_control_action(0, 966551065, true);
		disable_control_action(0, 668058244, true);
		set_ped_reset_flag(Global_35, 203, true);
	}
}

bool func_522(int* iParam0)
{
	if (!is_string_null_or_empty(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_523(int iParam0)
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

bool func_524()
{
	if (func_546(Global_35) || func_547(Global_35))
	{
		return true;
	}
	return false;
}

int func_525()
{
	return uVar374;
}

int func_526(int iParam0)
{
	return Local_317[iParam0]->f_56;
}

bool func_527(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

bool func_528(int iParam0)
{
	return func_527(iParam0, 2);
}

int func_529(int iParam0)
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

int func_530(int iParam0)
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

bool func_531(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

void func_532(int iParam0, int iParam1)
{
	Var0 = { *Global_1898164->f_1[iParam0] };
	*Global_1898164->f_1[iParam0] = { *Global_1898164->f_1[iParam1] };
	*Global_1898164->f_1[iParam1] = { Var0 };
}

bool func_533()
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

int func_534(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_535(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (func_338(iParam1->f_6))
	{
		if (bParam7 || is_bit_set(*iParam1, 11))
		{
			return;
		}
		func_339(&(iParam1->f_6), 0, 1);
	}
	if (!func_338(iParam1->f_6) && !is_bit_set(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_522(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_548(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824, 0, 1704213876, iParam1->f_10, 0);
			if (func_338(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_542(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_549(iParam1->f_6, 17, 1, 1);
				}
				if (is_bit_set(*iParam1, 1))
				{
					if (is_bit_set(*iParam1, 3))
					{
						func_550(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_357(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (is_bit_set(*iParam1, 10))
				{
					func_549(iParam1->f_6, 16, 1, 1);
				}
				if (!is_bit_set(*iParam1, 0) || is_bit_set(*iParam1, 13))
				{
					func_359(iParam1->f_6, 0, 1);
				}
				else
				{
					func_359(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

int func_536(int iParam0)
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

void func_537(int* iParam0, int iParam1)
{
	if (!func_462(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_463(iParam0, 14);
		}
	}
}

bool func_538(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_539(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_540(int iParam0, int iParam1)
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

bool func_541(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
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

void func_542(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (bParam3 && !func_338(iParam0))
	{
		return;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar0 = func_465(iParam0);
	func_549(iParam0, 18, 0, 1);
	func_549(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = _uiprompt_get_group_id_for_target_entity(iParam1);
	}
	_uiprompt_set_group((*Global_1945938)[iVar0]->f_3, iParam4, iParam2);
}

bool func_543(int iParam0, bool bParam1)
{
	if (bParam1 && !func_338(iParam0))
	{
		return false;
	}
	iVar0 = func_465(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

bool func_544(int iParam0, bool bParam1)
{
	if (bParam1 && !func_338(iParam0))
	{
		return false;
	}
	iVar0 = func_465(iParam0);
	return _uiprompt_is_pressed((*Global_1945938)[iVar0]->f_3);
}

void func_545(int iParam0, bool bParam1)
{
	if (bParam1 && !func_338(iParam0))
	{
		return;
	}
	iVar0 = func_465(iParam0);
	_uiprompt_restart_modes((*Global_1945938)[iVar0]->f_3);
}

int func_546(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	iVar0 = create_itemset(false);
	if (!is_itemset_valid(iVar0))
	{
		return 0;
	}
	_0x20a4bf0e09bee146(iVar0);
	find_all_attached_carriable_entities(iParam0, iVar0);
	iVar1 = get_itemset_size(iVar0);
	if (iVar1 == 0)
	{
	}
	destroy_itemset(iVar0);
	iVar9 = 0;
	while (iVar9 < 4)
	{
		iVar2 = func_551(iVar9);
		if (!_0x608bc6a6aacd5036(&Var3, iParam0, iVar2, 0))
		{
		}
		else
		{
			iVar7 = Var3.f_3;
			if (!does_entity_exist(iVar7))
			{
			}
			else
			{
				if (is_entity_dead(iVar7))
				{
				}
				iVar8 = _get_entity_carry_config(iVar7);
				if (iVar8 == -1992418870 || iVar8 == 822715387)
				{
					return 1;
				}
			}
		}
		iVar9++;
	}
	return 0;
}

int func_547(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	iVar0 = func_256();
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	iVar1 = create_itemset(false);
	if (!is_itemset_valid(iVar1))
	{
		return 0;
	}
	_0x20a4bf0e09bee146(iVar1);
	find_all_attached_carriable_entities(iParam0, iVar1);
	bVar2 = false;
	iVar3 = get_itemset_size(iVar1);
	if (iVar3 > 0)
	{
		if (is_in_itemset(iVar0, iVar1))
		{
			bVar2 = true;
		}
	}
	destroy_itemset(iVar1);
	if (bVar2)
	{
		return 1;
	}
	return 0;
}

int func_548(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_527(iVar0, 2))
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
				func_552(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, uParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_549(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_338(iParam0))
	{
		return;
	}
	iVar0 = func_465(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1945938)[iVar0]->f_3, iParam1, iParam2);
}

void func_550(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	if (bParam4 && !func_338(iParam0))
	{
		return;
	}
	iVar0 = func_465(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(10, sParam1, sParam2, sParam3));
}

int func_551(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 3;
	}
	return 0;
}

void func_552(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, var uParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_480(iParam0, 1);
	func_481(iParam0, 1);
	func_482(iParam0, 128);
}

