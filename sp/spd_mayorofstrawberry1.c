void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (has_force_cleanup_occurred(555))
	{
		func_1(&Local_14);
	}
	while (true)
	{
		wait(0);
		if ((func_2(18, Local_14.f_226, 1, 1) && Local_14 > 18) && !Local_14.f_647)
		{
			if (Local_14.f_1 == 0)
			{
				func_4(&Local_14, &(Local_14.f_250), 0, func_3(), &(Local_14.f_3), &(Local_14.f_4), 0, 1, 1, 0, 0);
			}
			else if (Local_14.f_1 != 2)
			{
				if (Local_14.f_1 == 3)
				{
					func_4(&Local_14, &(Local_14.f_250), 2, func_5(), &(Local_14.f_3), &(Local_14.f_4), 0, 1, 1, "s_BASE", "s_base_end");
				}
			}
			else
			{
				func_4(&Local_14, &(Local_14.f_250), 1, func_6(), &(Local_14.f_3), &(Local_14.f_4), 0, 1, 1, "s_IG2_PDMOS_Base", "s_IG2_PDMOS_Base_End");
			}
		}
		func_7(18, 0, &(Local_14.f_226), &(Local_14.f_150), &(Local_14.f_648), 0, 1097859072, 0);
		if (Local_14.f_643)
		{
			set_ped_reset_flag(Local_14.f_226, 49, true);
		}
		set_ped_can_play_gesture_anims(Local_14.f_226, 0, 1);
		func_8(Local_14.f_226, Local_14.f_234);
		if (!func_9(Global_35, 0))
		{
			func_1(&Local_14);
		}
		else if (func_10() != 26)
		{
			if (!func_11(&(Local_14.f_132)))
			{
				func_12(&(Local_14.f_132), 0);
			}
			else if (func_13(&(Local_14.f_132)) > 10f)
			{
				func_14(&(Local_14.f_132));
				func_1(&Local_14);
			}
		}
		else if ((is_ped_using_any_scenario(Global_35) && _get_scenario_point_type_ped_is_using(Global_35) == -1054012177) && is_screen_faded_out())
		{
			func_14(&(Local_14.f_132));
			func_1(&Local_14);
		}
		else if (func_16(18, func_15(18), &(Local_14.f_259), Local_14.f_226))
		{
			Local_14.f_651 = 1;
			if (func_17(&(Local_14.f_259)))
			{
				func_1(&Local_14);
			}
		}
		if ((Local_14 == 11 || Local_14 == 6) || Local_14 == 17)
		{
			if (Local_14.f_651)
			{
				if (func_18(&(Local_14.f_259)))
				{
					if (!func_17(&(Local_14.f_259)))
					{
						if (Local_14 != 11)
						{
							if (Local_14 == 6)
							{
								if (func_19(&(Local_14.f_225), 3))
								{
									func_20(&Local_14, 20);
									func_21(&(Local_14.f_253), 134217728);
								}
							}
							else if (Local_14 == 17)
							{
								func_20(&Local_14, 58);
							}
						}
						else
						{
							func_20(&Local_14, 13);
						}
					}
				}
			}
		}
		func_22(&Local_14);
		func_23(&Local_14);
		func_24(&Local_14);
		func_25(&Local_14);
		if ((((Local_14 >= 5 && Local_14 < 60) && Local_14 != 57) && Local_14 != 58) && Local_14 != 18)
		{
			func_26(&Local_14, &(Local_14.f_141));
			func_27(&Local_14);
			func_28(&Local_14);
			func_29(&Local_14);
		}
		func_30(&Local_14);
		func_31(Local_14.f_226, &(Local_14.f_253), 8192, 18, 0);
		if (((Local_14.f_1 == 0 || Local_14.f_1 == 2) && _does_volume_exist(Local_14.f_239)) && func_32(Global_35, Local_14.f_239, 1, 0))
		{
			disable_control_action(0, 782960533, false);
			disable_control_action(0, -762150781, false);
		}
		switch (Local_14)
		{
			case 0:
				func_33(&(Local_14.f_253));
				if (func_34(Local_14.f_253, 16))
				{
					Local_14.f_1 = 0;
					func_20(&Local_14, 3);
				}
				else if (func_34(Local_14.f_253, 8))
				{
					Local_14.f_1 = 2;
					func_20(&Local_14, 8);
				}
				else if (func_34(Local_14.f_253, 32))
				{
					Local_14.f_1 = 3;
					func_20(&Local_14, 14);
				}
				break;
			case 3:
				Local_14.f_257 = 2;
				Local_14.f_248 = (8 - 1);
				Local_14.f_249 = (2 - 1);
				_text_database_request("SPMS");
				_text_database_request("SPMAYAU");
				request_model(func_35(0), false);
				request_model(func_35(1), false);
				request_model(func_35(2), false);
				request_model(func_35(3), false);
				request_model(func_35(4), false);
				request_model(func_35(5), false);
				func_36(&Local_14);
				func_37(Local_14.f_232, "SP_MayorOfStrawberry1_Block", 1, 0, 0, 0, -1082130432);
				_0xb56d41a694e42e86(Local_14.f_235, 0, 0, 0, -1, -1, 0);
				_0x18262cafebb5fbe1(Local_14.f_235, 0, 0, 0, -1, -1, 0);
				Local_14.f_644 = func_38(Local_14.f_239, 0, 0, 0);
				Local_14.f_280 = "NICHOLAS_TIMMINS";
				Local_14.f_159 = func_40(18, 0, 9, func_39(18));
				if (!func_41(Local_14.f_159))
				{
				}
				Local_14.f_254 = func_42(Local_14.f_159);
				Local_14.f_258 = func_43(func_40(18, 0, 9, func_39(18)));
				if (func_34(Local_14.f_254, 128))
				{
					func_44(&(Local_14.f_254), 128);
				}
				if (func_45())
				{
					func_46(&(Local_14.f_5), Global_35, "JOHN", 0);
				}
				else
				{
					func_46(&(Local_14.f_5), Global_35, "ARTHUR", 0);
				}
				func_47(&(Local_14.f_259));
				func_48(&(Local_14.f_103));
				func_49(&(Local_14.f_103), 1);
				func_50(&(Local_14.f_103), 0);
				func_51(&(Local_14.f_103), 0);
				func_52(&(Local_14.f_103), 1);
				func_53(&(Local_14.f_103), 1);
				func_54(&(Local_14.f_103), 0);
				func_55(&(Local_14.f_103), 1);
				func_56(&(Local_14.f_103), 1);
				func_57(&(Local_14.f_103), 1);
				Local_14.f_640 = 8;
				if (func_41(Local_14.f_159))
				{
					func_20(&Local_14, 4);
				}
				break;
			case 8:
				Local_14.f_257 = 4;
				Local_14.f_248 = (5 - 1);
				Local_14.f_249 = (2 - 1);
				_text_database_request("SPMS");
				_text_database_request("SPMAYAU");
				request_model(func_35(0), false);
				request_model(func_35(2), false);
				request_model(func_35(3), false);
				request_model(func_35(6), false);
				func_58(&Local_14);
				func_37(Local_14.f_232, "SP_MayorOfStrawberry2_Block", 1, 0, 0, 0, -1082130432);
				_0xb56d41a694e42e86(Local_14.f_235, 0, 0, 0, -1, -1, 0);
				_0x18262cafebb5fbe1(Local_14.f_235, 0, 0, 0, -1, -1, 0);
				_0xb03944057fd735ba(Local_14.f_238, 6, 0);
				Local_14.f_644 = func_38(Local_14.f_239, 0, 0, 0);
				Local_14.f_645 = _0x4c39c95ae5db1329(Local_14.f_240, false, 15);
				Local_14.f_280 = "NICHOLAS_TIMMINS";
				Local_14.f_159 = func_40(18, 1, 9, 0);
				if (!func_41(Local_14.f_159))
				{
				}
				Local_14.f_254 = func_42(Local_14.f_159);
				Local_14.f_258 = func_43(func_40(18, 0, 9, func_39(18)));
				if (func_34(Local_14.f_254, 128))
				{
					func_44(&(Local_14.f_254), 128);
				}
				if (func_45())
				{
					func_46(&(Local_14.f_5), Global_35, "JOHN", 0);
				}
				else
				{
					func_46(&(Local_14.f_5), Global_35, "ARTHUR", 0);
				}
				func_47(&(Local_14.f_259));
				func_48(&(Local_14.f_103));
				func_49(&(Local_14.f_103), 1);
				func_50(&(Local_14.f_103), 0);
				func_51(&(Local_14.f_103), 0);
				func_52(&(Local_14.f_103), 1);
				func_53(&(Local_14.f_103), 1);
				func_54(&(Local_14.f_103), 0);
				func_55(&(Local_14.f_103), 1);
				func_56(&(Local_14.f_103), 1);
				func_57(&(Local_14.f_103), 1);
				Local_14.f_640 = 3;
				create_model_hide(-1817.047f, -371.4747f, 163.116f, 1f, 2095602337, false);
				if (func_41(Local_14.f_159))
				{
					func_20(&Local_14, 9);
				}
				break;
			case 14:
				Local_14.f_257 = 4;
				Local_14.f_248 = (6 - 1);
				_text_database_request("SPMS");
				_text_database_request("SPMAYAU");
				request_model(func_35(0), false);
				request_model(func_35(2), false);
				request_model(func_35(3), false);
				func_59(&Local_14);
				if (!func_34(Local_14.f_253, 268435456))
				{
					iVar11 = func_60(884);
					if (_0x800df3fc913355f3(iVar11))
					{
						if (!does_entity_exist(func_61(884)) || (!is_entity_on_screen(func_61(884)) && func_62(Global_35, func_61(884), 1, 1) > 100f))
						{
							func_63(884);
							_0xfcc6db8dbe709bc8(iVar11);
							func_21(&(Local_14.f_253), 268435456);
						}
					}
				}
				func_37(Local_14.f_232, "SP_MayorOfStrawberry5_Block", 1, 0, 0, 0, -1082130432);
				_0xb56d41a694e42e86(Local_14.f_235, 0, 0, 0, -1, -1, 0);
				_0x18262cafebb5fbe1(Local_14.f_235, 0, 0, 0, -1, -1, 0);
				_0x7c00cfc48a782dc0(Local_14.f_235, Local_14.f_226, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
				Local_14.f_644 = func_38(Local_14.f_239, 0, 0, 0);
				Local_14.f_280 = "NICHOLAS_TIMMINS";
				Local_14.f_159 = func_40(18, 2, 9, 0);
				if (!func_41(Local_14.f_159))
				{
				}
				if (func_45())
				{
					func_46(&(Local_14.f_5), Global_35, "JOHN", 0);
				}
				else
				{
					func_46(&(Local_14.f_5), Global_35, "ARTHUR", 0);
				}
				Local_14.f_254 = func_42(Local_14.f_159);
				Local_14.f_258 = func_43(func_40(18, 0, 9, func_39(18)));
				if (func_34(Local_14.f_254, 128))
				{
					func_44(&(Local_14.f_254), 128);
				}
				func_47(&(Local_14.f_259));
				func_48(&(Local_14.f_103));
				func_49(&(Local_14.f_103), 1);
				func_50(&(Local_14.f_103), 0);
				func_51(&(Local_14.f_103), 0);
				func_52(&(Local_14.f_103), 1);
				func_53(&(Local_14.f_103), 1);
				func_54(&(Local_14.f_103), 0);
				func_55(&(Local_14.f_103), 1);
				func_56(&(Local_14.f_103), 1);
				func_57(&(Local_14.f_103), 1);
				func_64(&(Local_14.f_103), 0);
				Local_14.f_640 = 11;
				if (func_41(Local_14.f_159))
				{
					func_20(&Local_14, 15);
				}
				break;
			case 4:
				_0xed9582b3da8f02b4(5);
				if ((((((((_text_database_has_loaded("SPMS") && _text_database_has_loaded("SPMAYAU")) && has_model_loaded(func_35(0))) && has_model_loaded(func_35(1))) && has_model_loaded(func_35(2))) && has_model_loaded(func_35(3))) && has_model_loaded(func_35(4))) && has_model_loaded(func_35(5))) && _0x5c16855277819bbf() == 5)
				{
					func_20(&Local_14, 5);
				}
				break;
			case 9:
				_0xed9582b3da8f02b4(5);
				if ((((((((_text_database_has_loaded("SPMS") && _text_database_has_loaded("SPMAYAU")) && has_model_loaded(func_35(0))) && has_model_loaded(func_35(2))) && has_model_loaded(func_35(3))) && has_model_loaded(func_35(6))) && _0x5c16855277819bbf() == 5) && func_65(&Local_14, 0)) && func_19(&(Local_14.f_225), 3))
				{
					func_20(&Local_14, 10);
				}
				break;
			case 15:
				_0xed9582b3da8f02b4(5);
				if (((((_text_database_has_loaded("SPMS") && _text_database_has_loaded("SPMAYAU")) && has_model_loaded(func_35(0))) && has_model_loaded(func_35(2))) && has_model_loaded(func_35(3))) && _0x5c16855277819bbf() == 5)
				{
					func_20(&Local_14, 16);
				}
				break;
			case 5:
				Var0 = { func_66(0) };
				vVar4 = { func_66(1) };
				if ((((func_67(&(Local_14.f_226), 483, Var0, 1, 1320127128) && func_68(&(Local_14.f_229), func_35(4), vVar4)) && func_68(&(Local_14.f_230), func_35(5), vVar4)) && func_69(&(Local_14.f_646), &(Local_14.f_228), func_35(1), vVar4, 9)) && func_70(&Local_14))
				{
					add_entity_to_audio_mix_group(Local_14.f_226, "special_ped_group", 0f);
					func_71(Local_14.f_226, 18);
					_0x3946fc742ac305cd(player_id(), Local_14.f_226, "SPECIAL_PED_LIGHTWEIGHT_1_1", 0f, 0f, 0f, 0, "MayorBubble");
					sVar9 = func_72(&Local_14, &iVar10);
					func_73(&(Local_14.f_226), &(Local_14.f_255), 161068336, 20f, -1082130432);
					func_75(Local_14.f_303[0], "INTERACT_GREET", func_74(), -163964935, 0, 0, 0, 1, 0);
					func_75(Local_14.f_303[1], "INTERACT_INSULT", sVar9, 648122183, 0, 0, 0, 1, iVar10);
					func_76(Local_14.f_303[0], 10);
					func_76(Local_14.f_303[1], 10);
					iVar12 = 0;
					while (iVar12 < Local_14.f_257)
					{
						func_75(Local_14.f_338[iVar12]->f_21[0], "INTERACT_GREET", func_74(), -163964935, 0, 0, 0, 1, 0);
						func_75(Local_14.f_338[iVar12]->f_21[1], "INTERACT_INSULT", sVar9, 648122183, 0, 0, 0, 1, iVar10);
						func_77(Local_14.f_338[iVar12]->f_21[0], 0, 0);
						func_77(Local_14.f_338[iVar12]->f_21[1], 0, 0);
						iVar12++;
					}
					if (!func_34(Local_14.f_253, 16777216))
					{
						Local_14.f_639 = func_78(3, 0, 0);
						func_79(Local_14.f_281[0], 0);
						func_21(&(Local_14.f_253), 16777216);
					}
					set_blocking_of_non_temporary_events(Local_14.f_226, true);
					set_ped_can_ragdoll_from_player_impact(Local_14.f_226, false);
					set_ped_config_flag(Local_14.f_226, 448, true);
					func_46(&(Local_14.f_5), Local_14.f_226, Local_14.f_280, 0);
					_set_entity_coords_and_heading(Local_14.f_226, Var0, Var0.f_3, true, false, true);
					set_entity_is_target_priority(Local_14.f_226, true, 15f);
					set_ped_combat_attributes(Local_14.f_226, 17, true);
					set_ped_combat_attributes(Local_14.f_226, 5, false);
					if (func_45())
					{
						func_80(Local_14.f_226, 1689938120);
					}
					stop_ped_speaking(Local_14.f_226, true);
					_0x7c00cfc48a782dc0(Local_14.f_237, Local_14.f_226, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
					_0x7c00cfc48a782dc0(Local_14.f_234, Local_14.f_226, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
					_0x7c00cfc48a782dc0(Local_14.f_242, Local_14.f_226, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
					func_20(&Local_14, 32);
				}
				break;
			case 10:
				Var0 = { func_66(2) };
				vVar4 = { func_66(2) };
				if ((func_67(&(Local_14.f_226), 483, Var0, 1, 1320127128) && func_68(&(Local_14.f_231), func_35(6), vVar4)) && func_70(&Local_14))
				{
					func_81(&Local_14);
					add_entity_to_audio_mix_group(Local_14.f_226, "special_ped_group", 0f);
					func_71(Local_14.f_226, 18);
					_0x3946fc742ac305cd(player_id(), Local_14.f_226, "SPECIAL_PED_LIGHTWEIGHT_1_1", 0f, 0f, 0f, 0, "MayorBubble");
					sVar9 = func_72(&Local_14, &iVar10);
					func_73(&(Local_14.f_226), &(Local_14.f_255), 161068336, 20f, -1082130432);
					func_75(Local_14.f_303[0], "INTERACT_GREET", func_74(), -163964935, 0, 0, 0, 1, 0);
					func_75(Local_14.f_303[1], "INTERACT_INSULT", sVar9, 648122183, 0, 0, 0, 1, iVar10);
					func_76(Local_14.f_303[0], 10);
					func_76(Local_14.f_303[1], 10);
					iVar13 = 0;
					while (iVar13 < Local_14.f_257)
					{
						func_75(Local_14.f_338[iVar13]->f_21[0], "INTERACT_GREET", func_74(), -163964935, 0, 0, 0, 1, 0);
						func_75(Local_14.f_338[iVar13]->f_21[1], "INTERACT_INSULT", sVar9, 648122183, 0, 0, 0, 1, iVar10);
						func_77(Local_14.f_338[iVar13]->f_21[0], 0, 0);
						func_77(Local_14.f_338[iVar13]->f_21[1], 0, 0);
						iVar13++;
					}
					if (!func_34(Local_14.f_253, 16777216))
					{
						Local_14.f_639 = func_78(3, 0, 0);
						func_79(Local_14.f_281[0], 0);
						func_21(&(Local_14.f_253), 16777216);
					}
					set_blocking_of_non_temporary_events(Local_14.f_226, true);
					set_ped_can_ragdoll_from_player_impact(Local_14.f_226, false);
					set_ped_config_flag(Local_14.f_226, 448, true);
					func_46(&(Local_14.f_5), Local_14.f_226, Local_14.f_280, 0);
					func_46(&(Local_14.f_5), Global_35, "ARTHUR", 0);
					set_ped_combat_attributes(Local_14.f_226, 17, true);
					set_ped_combat_attributes(Local_14.f_226, 5, false);
					stop_ped_speaking(Local_14.f_226, true);
					if (func_45())
					{
						func_80(Local_14.f_226, 1689938120);
					}
					_set_entity_coords_and_heading(Local_14.f_226, Var0, Var0.f_3, true, false, true);
					_0x7c00cfc48a782dc0(Local_14.f_237, Local_14.f_226, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
					_0x7c00cfc48a782dc0(Local_14.f_234, Local_14.f_226, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
					_0x7c00cfc48a782dc0(Local_14.f_242, Local_14.f_226, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
					func_20(&Local_14, 42);
				}
				break;
			case 16:
				Var0 = { func_66(3) };
				if (func_67(&(Local_14.f_226), 483, Var0, 1, 1320127128) && func_70(&Local_14))
				{
					func_81(&Local_14);
					add_entity_to_audio_mix_group(Local_14.f_226, "special_ped_group", 0f);
					func_71(Local_14.f_226, 18);
					_0x3946fc742ac305cd(player_id(), Local_14.f_226, "SPECIAL_PED_LIGHTWEIGHT_1_1", 0f, 0f, 0f, 0, "MayorBubble");
					sVar9 = func_72(&Local_14, &iVar10);
					func_73(&(Local_14.f_226), &(Local_14.f_255), 161068336, 20f, -1082130432);
					func_75(Local_14.f_303[0], "INTERACT_GREET", func_74(), -163964935, 0, 0, 0, 1, 0);
					func_75(Local_14.f_303[1], "INTERACT_INSULT", sVar9, 648122183, 0, 0, 0, 1, iVar10);
					func_76(Local_14.f_303[0], 10);
					func_76(Local_14.f_303[1], 10);
					iVar14 = 0;
					while (iVar14 < Local_14.f_257)
					{
						func_75(Local_14.f_338[iVar14]->f_21[0], "INTERACT_GREET", func_74(), -163964935, 0, 0, 0, 1, 0);
						func_75(Local_14.f_338[iVar14]->f_21[1], "INTERACT_INSULT", sVar9, 648122183, 0, 0, 0, 1, iVar10);
						func_77(Local_14.f_338[iVar14]->f_21[0], 0, 0);
						func_77(Local_14.f_338[iVar14]->f_21[1], 0, 0);
						iVar14++;
					}
					if (!func_34(Local_14.f_253, 16777216))
					{
						Local_14.f_639 = func_78(3, 0, 0);
						func_79(Local_14.f_281[0], 0);
						func_21(&(Local_14.f_253), 16777216);
					}
					set_blocking_of_non_temporary_events(Local_14.f_226, true);
					set_ped_can_ragdoll_from_player_impact(Local_14.f_226, false);
					set_ped_config_flag(Local_14.f_226, 448, true);
					set_ped_config_flag(Local_14.f_226, 153, true);
					set_ped_combat_attributes(Local_14.f_226, 17, true);
					set_ped_combat_attributes(Local_14.f_226, 5, false);
					func_46(&(Local_14.f_5), Local_14.f_226, Local_14.f_280, 0);
					stop_ped_speaking(Local_14.f_226, true);
					_0x946d46cd6dfb9742(get_player_index(), 0, _0x0139637a3bff8b6d(Local_14.f_226, &uVar8));
					if (func_45())
					{
						func_80(Local_14.f_226, 1689938120);
					}
					_set_entity_coords_and_heading(Local_14.f_226, Var0, Var0.f_3, true, false, true);
					_0x7c00cfc48a782dc0(Local_14.f_237, Local_14.f_226, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
					_0x7c00cfc48a782dc0(Local_14.f_234, Local_14.f_226, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
					_0x7c00cfc48a782dc0(Local_14.f_242, Local_14.f_226, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
					func_20(&Local_14, 50);
				}
				break;
			case 6:
				if (func_34(Local_14.f_253, 1))
				{
					func_20(&Local_14, 60);
				}
				else if (func_34(Local_14.f_253, 2) && !func_34(Local_14.f_253, 4))
				{
					func_82(180);
					func_83(&Local_14);
				}
				else if (!func_11(&(Local_14.f_153)))
				{
					func_12(&(Local_14.f_153), 0);
				}
				else if (func_13(&(Local_14.f_153)) > func_84(&Local_14) || !func_34(Local_14.f_253, 524288))
				{
					if (func_62(Global_35, Local_14.f_226, 1, 1) <= 35f)
					{
						if (func_85(&Local_14))
						{
							func_14(&(Local_14.f_153));
							func_21(&(Local_14.f_253), 524288);
						}
					}
				}
				break;
			case 11:
				if (func_34(Local_14.f_253, 1))
				{
					func_20(&Local_14, 63);
				}
				else if (func_34(Local_14.f_253, 2) && !func_34(Local_14.f_253, 4))
				{
					func_82(180);
					func_86(&Local_14);
				}
				else if (!func_11(&(Local_14.f_153)))
				{
					func_12(&(Local_14.f_153), 0);
				}
				else if (func_13(&(Local_14.f_153)) > func_84(&Local_14) || !func_34(Local_14.f_253, 524288))
				{
					if (func_62(Global_35, Local_14.f_226, 1, 1) <= 35f)
					{
						if (func_87(&Local_14))
						{
							func_14(&(Local_14.f_153));
							func_21(&(Local_14.f_253), 524288);
						}
					}
				}
				break;
			case 17:
				if (func_34(Local_14.f_253, 1))
				{
					func_20(&Local_14, 66);
				}
				else if (func_34(Local_14.f_253, 2) && !func_34(Local_14.f_253, 4))
				{
					func_20(&Local_14, 18);
				}
				else if (!func_11(&(Local_14.f_153)))
				{
					func_12(&(Local_14.f_153), 0);
				}
				else if (func_13(&(Local_14.f_153)) > func_84(&Local_14) || !func_34(Local_14.f_253, 524288))
				{
					if (func_62(Global_35, Local_14.f_226, 1, 1) <= 35f)
					{
						if (func_88(&Local_14))
						{
							func_14(&(Local_14.f_153));
							func_21(&(Local_14.f_253), 524288);
						}
					}
				}
				break;
			case 7:
				if (func_34(Local_14.f_253, 1))
				{
					func_20(&Local_14, 60);
				}
				else if (func_34(Local_14.f_253, 4))
				{
					if (func_89(&(Local_14.f_250)))
					{
						if (func_4(&Local_14, &(Local_14.f_250), 0, func_3(), &(Local_14.f_3), &(Local_14.f_4), 0, 1, 1, 0, 0))
						{
							func_20(&Local_14, 32);
						}
					}
				}
				else
				{
					func_82(180);
					func_83(&Local_14);
				}
				break;
			case 12:
				if (func_34(Local_14.f_253, 1))
				{
					func_20(&Local_14, 63);
				}
				else if (func_34(Local_14.f_253, 4))
				{
					if (func_4(&Local_14, &(Local_14.f_250), 1, func_6(), &(Local_14.f_3), &(Local_14.f_4), 0, 1, 1, "s_IG2_PDMOS_Base", "s_IG2_PDMOS_Base_End"))
					{
						func_20(&Local_14, 42);
					}
				}
				else
				{
					func_82(180);
					func_86(&Local_14);
				}
				break;
			case 13:
				set_ped_reset_flag(Local_14.f_226, 202, true);
				_0x3bbdd6143ff16f98(Local_14.f_226, Local_14.f_231, "p_cs_newspaper_03x_PH_R_HAND", "WORLD_HUMAN_NEWSPAPER_PUTDOWN", 0, 1);
				set_anim_scene_bool(Local_14.f_250, "internal_loop", true, false);
				set_anim_scene_bool(Local_14.f_250, "internal_loop_end", true, false);
				func_21(&(Local_14.f_253), 65536);
				if (_does_volume_exist(Local_14.f_238))
				{
					_0x5a4e1a41e3a02ad0(Local_14.f_238, 6, 0);
					_delete_volume(Local_14.f_238);
				}
				if (_is_anim_scene_started(Local_14.f_250, false))
				{
					clear_ped_tasks(Local_14.f_226, 1, 0);
				}
				else if (func_90(&Local_14, &(Local_14.f_224), 0))
				{
					if (is_entity_at_coord(Local_14.f_226, func_91(0), 1f, 1f, 3f, false, true, 0))
					{
						_0xc67a4910425f11f1(player_id(), "MayorBubble");
						func_92(&(Local_14.f_135));
						func_20(&Local_14, 57);
					}
				}
				break;
			case 18:
				if (((!is_entity_dead(Local_14.f_226) && _does_anim_scene_exist(Local_14.f_252)) && _is_anim_scene_loaded(Local_14.f_252, true, false)) && !is_scripted_speech_playing(Global_35))
				{
					if (!func_34(Local_14.f_253, 32768))
					{
						Local_14.f_647 = 1;
						func_93(1, 1, 0);
						func_94(Global_35, Local_14.f_226, &(Local_14.f_160), 0f, 0f, 0f, 0, 0, 1, 1069547520, -1082130432, 1073069561, 1056964608, 1092616192, -1, 1, 0, 0, 0, 1);
						func_95(Local_14.f_226, Global_35, &(Local_14.f_160), 10f, 0, 0, 2f, -1f, 1, 8, 0f, 0f, 2f, 2f, 0.3f, 1.5f, 0, 0.5f, -1, 1, -1082130432, -1082130432, 1);
						func_96(&(Local_14.f_198));
						set_anim_scene_entity(Local_14.f_252, "CS_NicholasTimmins", Local_14.f_226, 0);
						if (!func_45())
						{
							set_anim_scene_bool(Local_14.f_252, "b_PlayerArthur", true, false);
							set_anim_scene_entity(Local_14.f_252, "ARTHUR", Global_35, 0);
						}
						else
						{
							set_anim_scene_entity(Local_14.f_252, "JOHN", Global_35, 0);
						}
						reset_anim_scene(Local_14.f_250, 0);
						start_anim_scene(Local_14.f_252);
						_0xc67a4910425f11f1(player_id(), "MayorBubble");
						func_21(&(Local_14.f_253), 65536);
						func_21(&(Local_14.f_253), 32768);
						func_21(&(Local_14.f_253), 262144);
					}
					if (_does_volume_exist(Local_14.f_242))
					{
						_delete_volume(Local_14.f_242);
					}
					func_97(&(Local_14.f_198), Local_14.f_226);
					func_98(Local_14.f_226, Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
					if (_is_anim_scene_started(Local_14.f_252, false))
					{
						func_44(&(Local_14.f_253), 32768);
						func_82(180);
						func_20(&Local_14, 58);
					}
				}
				else if ((!is_entity_dead(Local_14.f_226) && !_is_anim_scene_loaded(Local_14.f_252, true, false)) && !_is_anim_scene_loading(Local_14.f_252, true))
				{
					if (!_does_anim_scene_exist(Local_14.f_252))
					{
						Local_14.f_252 = _create_anim_scene(func_99(), 0, 0, false, true);
					}
					if (_does_anim_scene_exist(Local_14.f_252))
					{
						load_anim_scene(Local_14.f_252);
					}
				}
				if (does_entity_exist(Local_14.f_226))
				{
					if (func_9(Local_14.f_226, 0))
					{
						set_ped_max_move_blend_ratio(Local_14.f_226, 1.5f);
					}
				}
				break;
			case 19:
				if (func_4(&Local_14, &(Local_14.f_250), 0, func_100(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, 0, 0))
				{
					func_20(&Local_14, 32);
				}
				break;
			case 33:
				break;
			case 34:
				break;
			case 22:
				if (func_4(&Local_14, &(Local_14.f_250), 0, func_101(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, 0, 0))
				{
					_0x946d46cd6dfb9742(get_player_index(), 0, _0x0139637a3bff8b6d(Local_14.f_226, &uVar8));
					Local_14.f_256++;
					func_20(&Local_14, 32);
				}
				break;
			case 23:
				if (func_4(&Local_14, &(Local_14.f_250), 0, func_102(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, 0, 0))
				{
					_0x946d46cd6dfb9742(get_player_index(), 0, _0x0139637a3bff8b6d(Local_14.f_226, &uVar8));
					Local_14.f_256++;
					func_20(&Local_14, 32);
				}
				break;
			case 24:
				if (func_4(&Local_14, &(Local_14.f_250), 0, func_103(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, 0, 0))
				{
					Local_14.f_256++;
					func_20(&Local_14, 32);
				}
				break;
			case 25:
				if (func_4(&Local_14, &(Local_14.f_250), 0, func_104(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, 0, 0))
				{
					Local_14.f_256 = (1 + Local_14.f_256);
					func_20(&Local_14, 32);
				}
				break;
			case 26:
				if (func_4(&Local_14, &(Local_14.f_250), 0, func_105(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, 0, 0))
				{
					Local_14.f_256++;
					func_20(&Local_14, 32);
				}
				break;
			case 27:
				if (func_4(&Local_14, &(Local_14.f_250), 0, func_106(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, 0, 0))
				{
					Local_14.f_256++;
					func_20(&Local_14, 32);
				}
				break;
			case 28:
				if (func_4(&Local_14, &(Local_14.f_250), 0, func_107(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, 0, 0))
				{
					Local_14.f_256++;
					func_20(&Local_14, 32);
				}
				break;
			case 29:
				if (func_4(&Local_14, &(Local_14.f_250), 0, func_108(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, 0, 0))
				{
					Local_14.f_256 = (1 + Local_14.f_256);
					func_20(&Local_14, 32);
				}
				break;
			case 30:
				if (func_4(&Local_14, &(Local_14.f_250), 0, func_109(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, 0, 0))
				{
					Local_14.f_256++;
					func_20(&Local_14, 32);
				}
				break;
			case 31:
				if (func_4(&Local_14, &(Local_14.f_250), 0, func_110(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, 0, 0))
				{
					Local_14.f_256++;
					func_20(&Local_14, 32);
				}
				break;
			case 32:
				if (func_34(Local_14.f_253, 2) && !func_34(Local_14.f_253, 4))
				{
					if (func_4(&Local_14, &(Local_14.f_251), 3, func_111(), &(Local_14.f_3), &(Local_14.f_4), 0, 1, 0, 0, 0))
					{
						func_20(&Local_14, 7);
					}
				}
				else if (func_4(&Local_14, &(Local_14.f_250), 0, func_3(), &(Local_14.f_3), &(Local_14.f_4), 0, 1, 1, 0, 0))
				{
					func_20(&Local_14, 6);
				}
				break;
			case 20:
				set_ped_reset_flag(Local_14.f_226, 202, true);
				_0x3bbdd6143ff16f98(Local_14.f_226, Local_14.f_229, "p_cigar01x_PH_R_HAND", "WORLD_HUMAN_SMOKE_CIGAR", 0, 1);
				if (!_is_anim_scene_finished(Local_14.f_250, false))
				{
					func_4(&Local_14, &(Local_14.f_250), 0, func_112(), &(Local_14.f_3), &(Local_14.f_4), 1, 1, 0, 0, 0);
				}
				if (_0x005e6f28dd7ed58d(Local_14.f_250, "CS_NicholasTimmins"))
				{
					remove_anim_scene_entity(Local_14.f_250, "CS_NicholasTimmins", Local_14.f_226);
					remove_anim_scene_entity(Local_14.f_250, "p_cigar02x", Local_14.f_229);
					if (func_34(Local_14.f_253, 134217728))
					{
						func_90(&Local_14, &(Local_14.f_225), -1);
					}
					else
					{
						func_113(&Local_14, 1);
					}
					func_20(&Local_14, 59);
				}
				break;
			case 21:
				if (!_is_anim_scene_finished(Local_14.f_250, false))
				{
					func_4(&Local_14, &(Local_14.f_250), 0, func_114(), &(Local_14.f_3), &(Local_14.f_4), 1, 1, 0, 0, 0);
				}
				else if (!is_entity_dead(Local_14.f_226))
				{
				}
				break;
			case 35:
				if (func_4(&Local_14, &(Local_14.f_250), 1, func_115(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, "s_IG2_PDMOS_Base", "s_IG2_PDMOS_Base_End"))
				{
					_0x946d46cd6dfb9742(get_player_index(), 0, _0x0139637a3bff8b6d(Local_14.f_226, &uVar8));
					Local_14.f_256 = (1 + Local_14.f_256);
					func_20(&Local_14, 42);
				}
				break;
			case 36:
				if (func_4(&Local_14, &(Local_14.f_250), 1, func_116(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, "s_IG2_PDMOS_Base", "s_IG2_PDMOS_Base_End"))
				{
					Local_14.f_256 = (1 + Local_14.f_256);
					func_20(&Local_14, 42);
				}
				break;
			case 37:
				if (func_4(&Local_14, &(Local_14.f_250), 1, func_117(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, "s_IG2_PDMOS_Base", "s_IG2_PDMOS_Base_End"))
				{
					Local_14.f_256 = (1 + Local_14.f_256);
					func_20(&Local_14, 42);
				}
				break;
			case 38:
				if (func_4(&Local_14, &(Local_14.f_250), 1, func_118(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, "s_IG2_PDMOS_Base", "s_IG2_PDMOS_Base_End"))
				{
					Local_14.f_256 = (1 + Local_14.f_256);
					func_20(&Local_14, 42);
				}
				break;
			case 39:
				if (func_4(&Local_14, &(Local_14.f_250), 1, func_119(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, "s_IG2_PDMOS_Base", "s_IG2_PDMOS_Base_End"))
				{
					Local_14.f_256++;
					func_20(&Local_14, 42);
				}
				break;
			case 40:
				if (func_4(&Local_14, &(Local_14.f_250), 1, func_120(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, "s_IG3_PDMOS_Base", "s_IG3_PDMOS_Base_End"))
				{
					Local_14.f_256 = (1 + Local_14.f_256);
					func_20(&Local_14, 42);
				}
				break;
			case 41:
				if (func_4(&Local_14, &(Local_14.f_250), 1, func_121(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, "s_IG3_PDMOS_Base", "s_IG3_PDMOS_Base_End"))
				{
					Local_14.f_256++;
					func_20(&Local_14, 42);
				}
				break;
			case 42:
				if (func_34(Local_14.f_253, 2) && !func_34(Local_14.f_253, 4))
				{
					if (func_4(&Local_14, &(Local_14.f_251), 4, func_122(), &(Local_14.f_3), &(Local_14.f_4), 0, 1, 0, 0, 0))
					{
						func_20(&Local_14, 12);
					}
				}
				else if (func_4(&Local_14, &(Local_14.f_250), 1, func_6(), &(Local_14.f_3), &(Local_14.f_4), 0, 1, 1, "s_IG2_PDMOS_Base", "s_IG2_PDMOS_Base_End"))
				{
					func_20(&Local_14, 11);
				}
				break;
			case 43:
				if (func_4(&Local_14, &(Local_14.f_250), 2, func_123(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, "s_BASE", "s_base_end"))
				{
					_0x946d46cd6dfb9742(get_player_index(), 0, _0x0139637a3bff8b6d(Local_14.f_226, &uVar8));
					Local_14.f_256++;
					func_20(&Local_14, 50);
				}
				break;
			case 44:
				if (func_4(&Local_14, &(Local_14.f_250), 2, func_124(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, "s_BASE", "s_base_end"))
				{
					Local_14.f_256++;
					func_20(&Local_14, 50);
				}
				break;
			case 45:
				if (func_4(&Local_14, &(Local_14.f_250), 2, func_125(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, "s_BASE", "s_base_end"))
				{
					Local_14.f_256++;
					func_20(&Local_14, 50);
				}
				break;
			case 46:
				if (func_4(&Local_14, &(Local_14.f_250), 2, func_126(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, "s_BASE", "s_base_end"))
				{
					Local_14.f_256 = (1 + Local_14.f_256);
					func_20(&Local_14, 50);
				}
				break;
			case 47:
				if (func_4(&Local_14, &(Local_14.f_250), 2, func_127(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, "s_BASE", "s_base_end"))
				{
					Local_14.f_256 = (1 + Local_14.f_256);
					func_20(&Local_14, 50);
				}
				break;
			case 48:
				if (func_4(&Local_14, &(Local_14.f_250), 2, func_128(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, "s_BASE", "s_base_end"))
				{
					Local_14.f_256++;
					func_20(&Local_14, 50);
				}
				break;
			case 49:
				if (func_4(&Local_14, &(Local_14.f_250), 2, func_129(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, "s_IG5_Base", "s_IG5_Base_End"))
				{
					Local_14.f_256 = (1 + Local_14.f_256);
					func_20(&Local_14, 50);
				}
				break;
			case 50:
				if (func_34(Local_14.f_253, 2) && !func_34(Local_14.f_253, 4))
				{
					if (!is_entity_dead(Local_14.f_226))
					{
						func_20(&Local_14, 18);
					}
				}
				else if (func_4(&Local_14, &(Local_14.f_250), 2, func_5(), &(Local_14.f_3), &(Local_14.f_4), 0, 1, 1, "s_BASE", "s_base_end"))
				{
					func_20(&Local_14, 17);
				}
				break;
			case 51:
				func_130(&(Local_14.f_239), &(Local_14.f_649), &(Local_14.f_650));
				func_131(1);
				if (func_132(Local_14.f_226, get_offset_from_entity_in_world_coords(Local_14.f_226, 0.25f, 2f, 0f), 1036831949, 20000) && !is_scripted_speech_playing(Global_35))
				{
					if (func_4(&Local_14, &(Local_14.f_251), 3, func_133(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 0, 0, 0))
					{
						_0xc67a4910425f11f1(player_id(), "MayorBubble");
						if (!func_34(Local_14.f_253, 4))
						{
							func_21(&(Local_14.f_253), 4);
						}
						func_134(Local_14.f_303[0], 0);
						func_134(Local_14.f_303[1], 0);
						func_77(Local_14.f_303[0], 0, 0);
						func_77(Local_14.f_303[1], 0, 0);
						Local_14.f_639 = func_78(3, 0, 0);
						func_79(Local_14.f_281[0], 0);
						func_131(0);
						func_20(&Local_14, 53);
					}
				}
				break;
			case 52:
				func_130(&(Local_14.f_239), &(Local_14.f_649), &(Local_14.f_650));
				func_131(1);
				if (func_132(Local_14.f_226, get_offset_from_entity_in_world_coords(Local_14.f_226, 0.25f, 2f, 0f), 1036831949, 20000) && !is_scripted_speech_playing(Global_35))
				{
					if (func_4(&Local_14, &(Local_14.f_251), 3, func_135(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 0, 0, 0))
					{
						_0xc67a4910425f11f1(player_id(), "MayorBubble");
						if (!func_34(Local_14.f_253, 4))
						{
							func_21(&(Local_14.f_253), 4);
						}
						func_134(Local_14.f_303[0], 0);
						func_134(Local_14.f_303[1], 0);
						func_77(Local_14.f_303[0], 0, 0);
						func_77(Local_14.f_303[1], 0, 0);
						Local_14.f_639 = func_78(3, 0, 0);
						func_79(Local_14.f_281[0], 0);
						func_131(0);
						func_20(&Local_14, 53);
					}
				}
				break;
			case 53:
				if (func_136(Local_14.f_303[0], 0))
				{
					func_134(Local_14.f_303[0], 0);
					func_134(Local_14.f_303[1], 0);
					func_77(Local_14.f_303[0], 1, 0);
					func_77(Local_14.f_303[1], 1, 0);
				}
				if (func_34(Local_14.f_253, 4))
				{
					remove_anim_scene_entity(Local_14.f_251, "p_chaireagle01x", Local_14.f_228);
					if (func_4(&Local_14, &(Local_14.f_250), 0, func_3(), &(Local_14.f_3), &(Local_14.f_4), 0, 1, 0, 0, 0))
					{
						func_20(&Local_14, 6);
					}
				}
				else if (func_4(&Local_14, &(Local_14.f_251), 3, func_111(), &(Local_14.f_3), &(Local_14.f_4), 0, 1, 0, 0, 0))
				{
					func_20(&Local_14, 7);
				}
				break;
			case 54:
				_0xc67a4910425f11f1(player_id(), "MayorBubble");
				if (!is_scripted_speech_playing(Global_35))
				{
					if (func_4(&Local_14, &(Local_14.f_251), 4, func_137(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 0, 0, 0))
					{
						if (!func_34(Local_14.f_253, 4))
						{
							func_21(&(Local_14.f_253), 4);
						}
						func_20(&Local_14, 56);
					}
				}
				break;
			case 55:
				_0xc67a4910425f11f1(player_id(), "MayorBubble");
				if (!is_scripted_speech_playing(Global_35))
				{
					if (func_4(&Local_14, &(Local_14.f_251), 4, func_138(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 0, 0, 0))
					{
						if (!func_34(Local_14.f_253, 4))
						{
							func_21(&(Local_14.f_253), 4);
						}
						func_20(&Local_14, 56);
					}
				}
				break;
			case 56:
				if (func_34(Local_14.f_253, 4))
				{
					if (func_4(&Local_14, &(Local_14.f_250), 1, func_6(), &(Local_14.f_3), &(Local_14.f_4), 0, 1, 0, "s_IG2_PDMOS_Base", "s_IG2_PDMOS_Base_End"))
					{
						func_20(&Local_14, 11);
					}
				}
				else if (func_4(&Local_14, &(Local_14.f_251), 4, func_122(), &(Local_14.f_3), &(Local_14.f_4), 0, 1, 0, 0, 0))
				{
					func_20(&Local_14, 12);
				}
				break;
			case 57:
				if (!_0x9c54041bb66bcf9e(Local_14.f_226, Local_14.f_224))
				{
					if (!is_entity_at_coord(Local_14.f_226, func_91(3), 1f, 1f, 3f, false, true, 0))
					{
						if (!func_139(Local_14.f_226, 713668775))
						{
							task_follow_nav_mesh_to_coord(Local_14.f_226, func_91(3), 1f, -1, 0.25f, 0, 40000f);
						}
					}
					else if (func_140(&(Local_14.f_135)) > 3f)
					{
						if (func_90(&Local_14, &(Local_14.f_225), -1))
						{
							func_44(&(Local_14.f_253), 1024);
							func_20(&Local_14, 62);
						}
					}
				}
				break;
			case 58:
				if (func_62(Local_14.f_226, Global_35, 1, 1) > 10f)
				{
					if (!_0x34a0671be613d3d0(Local_14.f_252) && !_0xd70c7a30412f8fa0(Local_14.f_252))
					{
						abort_anim_scene(Local_14.f_252, false);
					}
				}
				if (!_is_anim_scene_started(Local_14.f_252, false) || _is_anim_scene_finished(Local_14.f_252, false))
				{
					reset_anim_scene(Local_14.f_252, 0);
					if (!func_34(Local_14.f_253, 4))
					{
						func_21(&(Local_14.f_253), 4);
					}
					if (func_34(Local_14.f_253, 262144))
					{
						func_141(Global_35);
						func_142(Local_14.f_226, 1);
						func_143(Global_35, 1);
						func_44(&(Local_14.f_253), 262144);
					}
					_0x946d46cd6dfb9742(get_player_index(), 0, _0x0139637a3bff8b6d(Local_14.f_226, &uVar8));
					if (func_113(&Local_14, 2))
					{
						func_44(&(Local_14.f_253), 1024);
						func_20(&Local_14, 65);
					}
				}
				else
				{
					if (does_entity_exist(Local_14.f_226))
					{
						if (func_9(Local_14.f_226, 0))
						{
							set_ped_max_move_blend_ratio(Local_14.f_226, 1.5f);
						}
					}
					func_98(Local_14.f_226, Global_35, 1, 1, 1, 1, 1, 1, 0, 1, 1);
				}
				break;
			case 63:
				Local_14.f_643 = 0;
				_0xc67a4910425f11f1(player_id(), "MayorBubble");
				if (does_entity_exist(Local_14.f_231))
				{
					if (is_entity_attached(Local_14.f_231))
					{
						func_144(Local_14.f_231, 1, 1);
						activate_physics(Local_14.f_231);
					}
				}
				if (!func_34(Local_14.f_254, 128))
				{
					if (func_145(Local_14.f_226, "PANIC_HELP", -1021994891, 0, Local_14.f_280, 0))
					{
						func_21(&(Local_14.f_254), 128);
					}
				}
				if (_does_volume_exist(Local_14.f_238))
				{
					_0x5a4e1a41e3a02ad0(Local_14.f_238, 6, 0);
					_delete_volume(Local_14.f_238);
				}
				if (!is_ped_fleeing(Local_14.f_226))
				{
					func_146(Local_14.f_226, 1, 1);
					func_147(Local_14.f_226);
					_task_smart_flee_style_ped(Local_14.f_226, Global_35, 3, 256, -1082130432, -1, 0);
					set_ped_config_flag(Local_14.f_226, 153, false);
					func_148(Local_14.f_242);
					set_blocking_of_non_temporary_events(Local_14.f_226, false);
					stop_ped_speaking(Local_14.f_226, false);
					set_ped_keep_task(Local_14.f_226, true);
				}
				break;
			case 62:
				break;
			case 64:
				break;
			case 60:
				Local_14.f_643 = 0;
				_0xc67a4910425f11f1(player_id(), "MayorBubble");
				_0xc67a4910425f11f1(player_id(), "MayorConvo");
				if (does_entity_exist(Local_14.f_229))
				{
					if (is_entity_attached(Local_14.f_229))
					{
						func_144(Local_14.f_229, 1, 1);
						activate_physics(Local_14.f_229);
					}
				}
				if (!func_34(Local_14.f_254, 128))
				{
					if (func_145(Local_14.f_226, "PANIC_HELP", -1021994891, 0, Local_14.f_280, 0))
					{
						func_21(&(Local_14.f_254), 128);
					}
				}
				if (func_34(Local_14.f_253, 4194304))
				{
					if ((_does_anim_scene_exist(Local_14.f_250) && _0x3ab6c7b0bb0df4b1(Local_14.f_226, -1)) && (_is_anim_scene_started(Local_14.f_250, false) || (_does_anim_scene_exist(Local_14.f_251) && _is_anim_scene_started(Local_14.f_251, false))))
					{
						func_4(&Local_14, &(Local_14.f_250), 0, func_114(), &(Local_14.f_3), &(Local_14.f_4), 0, 0, 0, 0, 0);
						if ((_is_anim_scene_started(Local_14.f_250, false) && _does_anim_scene_exist(Local_14.f_251)) && _is_anim_scene_started(Local_14.f_251, false))
						{
							reset_anim_scene(Local_14.f_251, 0);
						}
					}
					else if (_is_anim_scene_finished(Local_14.f_250, false) || !_0x3ab6c7b0bb0df4b1(Local_14.f_226, -1))
					{
						func_149(&Local_14);
						func_44(&(Local_14.f_253), 4194304);
					}
				}
				else if (!is_ped_fleeing(Local_14.f_226))
				{
					func_146(Local_14.f_226, 1, 1);
					func_147(Local_14.f_226);
					_task_smart_flee_style_ped(Local_14.f_226, Global_35, 3, 256, -1082130432, -1, 0);
					set_ped_config_flag(Local_14.f_226, 153, false);
					func_148(Local_14.f_242);
					set_blocking_of_non_temporary_events(Local_14.f_226, false);
					stop_ped_speaking(Local_14.f_226, false);
					set_ped_keep_task(Local_14.f_226, true);
				}
				break;
			case 2:
				break;
			case 59:
				set_ped_reset_flag(Local_14.f_226, 202, true);
				if (func_34(Local_14.f_253, 134217728))
				{
					func_90(&Local_14, &(Local_14.f_225), -1);
				}
				else
				{
					func_113(&Local_14, 1);
				}
				if (!func_34(Local_14.f_253, 65536))
				{
					if (func_62(Local_14.f_226, &(Local_14.f_214[0]), 1, 1) > 4f)
					{
						func_21(&(Local_14.f_253), 65536);
					}
				}
				break;
			case 61:
				break;
			case 66:
				Local_14.f_643 = 0;
				_0xc67a4910425f11f1(player_id(), "MayorBubble");
				if (!func_34(Local_14.f_254, 128))
				{
					if (func_145(Local_14.f_226, "PANIC_HELP", -1021994891, 0, Local_14.f_280, 0))
					{
						func_21(&(Local_14.f_254), 128);
					}
				}
				if (!is_ped_fleeing(Local_14.f_226))
				{
					func_146(Local_14.f_226, 1, 1);
					func_147(Local_14.f_226);
					_task_smart_flee_style_ped(Local_14.f_226, Global_35, 3, 256, -1082130432, -1, 0);
					set_ped_config_flag(Local_14.f_226, 153, false);
					func_148(Local_14.f_242);
					set_blocking_of_non_temporary_events(Local_14.f_226, false);
					stop_ped_speaking(Local_14.f_226, false);
					set_ped_keep_task(Local_14.f_226, true);
				}
				break;
			case 65:
				break;
			case 67:
				break;
			default:
				break;
		}
		if (func_41(Local_14.f_159))
		{
			switch (Local_14)
			{
				case 62:
					if (!_0x5102307ce88798eb(Local_14.f_226))
					{
						request_ped_visibility_tracking(Local_14.f_226);
					}
					if (func_62(Global_35, Local_14.f_226, 1, 1) > 50f && !is_tracked_ped_visible(Local_14.f_226))
					{
						if (does_entity_exist(Local_14.f_226))
						{
							remove_entity_from_audio_mix_group(Local_14.f_226, 0f);
							delete_ped(&(Local_14.f_226));
						}
						func_1(&Local_14);
					}
					break;
				case 59:
				case 65:
					if (!_0x5102307ce88798eb(Local_14.f_226))
					{
						request_ped_visibility_tracking(Local_14.f_226);
					}
					if (func_62(Global_35, Local_14.f_226, 1, 1) > 100f && !is_tracked_ped_visible(Local_14.f_226))
					{
						if (does_entity_exist(Local_14.f_226))
						{
							remove_entity_from_audio_mix_group(Local_14.f_226, 0f);
							delete_ped(&(Local_14.f_226));
						}
						func_1(&Local_14);
					}
					break;
			}
		}
	}
}

void func_1(int iParam0)
{
	func_150(&(iParam0->f_259));
	func_151(18);
	if (func_34(iParam0->f_253, 262144))
	{
		func_142(iParam0->f_226, 1);
		func_143(Global_35, 1);
	}
	if (func_41(iParam0->f_159))
	{
		func_152(iParam0->f_159, iParam0->f_254);
		func_153(func_40(18, 0, 9, func_39(18)), iParam0->f_258);
	}
	func_154(&(iParam0->f_226), &(iParam0->f_255), 161068336, 20f, 1);
	stop_ped_speaking(iParam0->f_226, false);
	_0xc67a4910425f11f1(player_id(), 0);
	if (!is_entity_dead(iParam0->f_226))
	{
		set_blocking_of_non_temporary_events(iParam0->f_226, false);
		func_146(iParam0->f_226, 1, 1);
		func_147(iParam0->f_226);
		remove_entity_from_audio_mix_group(iParam0->f_226, 0f);
		_0x39a2fc5af55a52b1(iParam0->f_226, -1);
		set_ped_as_no_longer_needed(&(iParam0->f_226));
	}
	if (func_155(483, 0))
	{
		func_156(483, 0, 1, 0, 0);
	}
	if (func_34(iParam0->f_253, 268435456))
	{
		iVar0 = func_60(884);
		if (_0x800df3fc913355f3(iVar0))
		{
			_0x4f81ead1de8fa19b(iVar0);
		}
	}
	func_157(&(iParam0->f_646));
	if (does_entity_exist(iParam0->f_229))
	{
		if (is_entity_attached(iParam0->f_229))
		{
			func_144(iParam0->f_229, 1, 1);
			activate_physics(iParam0->f_229);
		}
		set_object_as_no_longer_needed(&(iParam0->f_229));
	}
	if (does_entity_exist(iParam0->f_230))
	{
		if (is_entity_attached(iParam0->f_230))
		{
			func_144(iParam0->f_230, 1, 1);
			activate_physics(iParam0->f_230);
		}
		set_object_as_no_longer_needed(&(iParam0->f_230));
	}
	remove_model_hide(-1817.047f, -371.4747f, 163.116f, 1f, 2095602337, 0);
	if (_does_scenario_point_exist(iParam0->f_224))
	{
		_delete_scenario_point(iParam0->f_224);
	}
	if (does_entity_exist(iParam0->f_231))
	{
		if (is_entity_attached(iParam0->f_231))
		{
			func_144(iParam0->f_231, 1, 1);
			activate_physics(iParam0->f_231);
		}
		set_object_as_no_longer_needed(&(iParam0->f_231));
	}
	if (_does_volume_exist(iParam0->f_237))
	{
		_delete_volume(iParam0->f_237);
	}
	if (_0x91a5f9cbebb9d936(iParam0->f_645))
	{
		remove_scenario_blocking_area(iParam0->f_645, false);
	}
	func_158(iParam0);
	if (_does_volume_exist((*(*Global_1396257)[18])[0]->f_47))
	{
		_delete_volume((*(*Global_1396257)[18])[0]->f_47);
	}
	if (_does_volume_exist((*(*Global_1396257)[18])[1]->f_47))
	{
		_delete_volume((*(*Global_1396257)[18])[1]->f_47);
	}
	if (_does_volume_exist((*(*Global_1396257)[18])[2]->f_47))
	{
		_delete_volume((*(*Global_1396257)[18])[2]->f_47);
	}
	if (_does_volume_exist((*(*Global_1396257)[18])[3]->f_47))
	{
		_delete_volume((*(*Global_1396257)[18])[3]->f_47);
	}
	if (_does_volume_exist((*(*Global_1396257)[18])[4]->f_47))
	{
		_delete_volume((*(*Global_1396257)[18])[4]->f_47);
	}
	if (is_itemset_valid(iParam0->f_649))
	{
		destroy_itemset(iParam0->f_649);
	}
	func_131(0);
	terminate_this_thread();
}

bool func_2(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		if (func_159())
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
		if (func_160(0) == 7 || func_161())
		{
			return true;
		}
	}
	if (func_162(&((*Global_1396257)[iParam0]->f_626), 1024))
	{
		return true;
	}
	return false;
}

char* func_3()
{
	return "pbl_Base_Reset";
}

bool func_4(int iParam0, var uParam1, int iParam2, char* sParam3, var uParam4, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, char* sParam10)
{
	if (!func_163(uParam1, iParam2, uParam5))
	{
		return false;
	}
	if (!func_164(uParam1, uParam4, iParam2, iParam0))
	{
		return false;
	}
	if (!_is_anim_scene_started(*uParam1, false) && !bParam8)
	{
		start_anim_scene(*uParam1);
	}
	if (bParam8 && !_is_anim_scene_started(*uParam1, false))
	{
		if ((!_0x23e33cb9f4a3f547(*uParam1, sParam3) && !_0x0df57f86fe71dbe5(*uParam1, sParam3)) && !_0x1f0e401031e20146(*uParam1, sParam3))
		{
			_0xdf7b5144e25cd3fe(*uParam1, sParam3);
		}
		if (_0x23e33cb9f4a3f547(*uParam1, sParam3))
		{
			_set_anim_scene_playback_list_bool(*uParam1, sParam3, true);
			start_anim_scene(*uParam1);
		}
	}
	if (_is_anim_scene_started(*uParam1, false))
	{
		if ((!_0x23e33cb9f4a3f547(*uParam1, sParam3) && !_0x0df57f86fe71dbe5(*uParam1, sParam3)) && !_0x1f0e401031e20146(*uParam1, sParam3))
		{
			_0xdf7b5144e25cd3fe(*uParam1, sParam3);
		}
		if (!_0x1f0e401031e20146(*uParam1, sParam3) && _0x23e33cb9f4a3f547(*uParam1, sParam3))
		{
			_set_anim_scene_playback_list_bool(*uParam1, sParam3, true);
			wait(0);
			return false;
		}
		else if (_0x1f0e401031e20146(*uParam1, sParam3))
		{
			if (iParam0->f_244 != -1)
			{
				if (iParam0->f_244 == *uParam1)
				{
					_0xae6ada8fe7e84acc(iParam0->f_244, iParam0->f_243);
				}
				else if (_does_anim_scene_exist(iParam0->f_244) && _is_anim_scene_loaded(iParam0->f_244, true, false))
				{
					reset_anim_scene(iParam0->f_244, func_165(iParam0->f_245));
				}
			}
			if (_0x8d81e7824b7753f7(*uParam1, "s_Base_End", 1))
			{
				iParam0->f_244 = *uParam1;
				iParam0->f_243 = sParam3;
				iParam0->f_245 = iParam2;
				return true;
			}
			else if (_0x8d81e7824b7753f7(*uParam1, "s_base_end", 1))
			{
				iParam0->f_244 = *uParam1;
				iParam0->f_243 = sParam3;
				iParam0->f_245 = iParam2;
				return true;
			}
			else if (!is_string_null_or_empty(sParam10) && _0x8d81e7824b7753f7(*uParam1, sParam10, 1))
			{
				iParam0->f_244 = *uParam1;
				iParam0->f_243 = sParam3;
				iParam0->f_245 = iParam2;
				return true;
			}
			else if (_is_anim_scene_finished(*uParam1, false))
			{
				iParam0->f_244 = *uParam1;
				iParam0->f_243 = sParam3;
				iParam0->f_245 = iParam2;
				return true;
			}
			else if ((iParam0->f_641 && func_34(iParam0->f_253, 16384)) && !is_scripted_speech_playing(iParam0->f_226))
			{
				iParam0->f_641 = 0;
				iParam0->f_244 = *uParam1;
				iParam0->f_243 = sParam3;
				iParam0->f_245 = iParam2;
				return true;
			}
		}
	}
	return false;
}

char* func_5()
{
	return "pbl_base_reset";
}

char* func_6()
{
	return "pbl_IG2_base_reset";
}

int func_7(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, float fParam5, float fParam6, bool bParam7)
{
	if (*uParam4)
	{
		return 0;
	}
	if (is_entity_dead(*uParam2) || Global_1935630->f_12)
	{
		return 0;
	}
	if (bParam7)
	{
		if (is_scripted_speech_playing(*uParam2))
		{
			Global_40.f_11623[iParam0]->f_5++;
			Global_40.f_11623[iParam0]->f_2 = func_166();
			*uParam4 = 1;
			return 1;
		}
	}
	if (fParam5 == 0f)
	{
		if (!func_167(Global_35, *uParam2, fParam6, 1))
		{
			return 0;
		}
	}
	else if (fParam5 > fParam6)
	{
		return 0;
	}
	if (!func_11(uParam3))
	{
		func_168(uParam3, 0f);
	}
	else if (func_13(uParam3) >= 2f)
	{
		if (!func_169(Global_40.f_11623[iParam0]->f_2))
		{
			func_170(iParam0);
			*uParam4 = 1;
			func_14(uParam3);
			return 1;
		}
		else
		{
			func_170(iParam0);
			*uParam4 = 1;
			func_14(uParam3);
			return 1;
		}
	}
	return 0;
}

void func_8(int iParam0, int iParam1)
{
	if (func_171(iParam0))
	{
		if (func_172(Global_35, iParam1, 0, 1))
		{
			_0x785177e4d57d7389(player_id(), 1714017012, 0, 0, -1);
		}
	}
}

bool func_9(int iParam0, int iParam1)
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
	if (func_34(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_34(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_34(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_34(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_34(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_34(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_34(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_34(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_10()
{
	return Global_1894899->f_2;
}

bool func_11(var uParam0)
{
	return func_173(*uParam0, 1);
}

void func_12(var uParam0, bool bParam1)
{
	if (bParam1 || !func_11(uParam0))
	{
		func_92(uParam0);
	}
}

float func_13(var uParam0)
{
	if (!func_11(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_174(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_175() - uParam0->f_1);
}

void func_14(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_15(int iParam0)
{
	return &(Global_40.f_11623[iParam0]);
}

bool func_16(int iParam0, int iParam1, var uParam2, var uParam3)
{
	if ((get_frame_count() % 10) == 0)
	{
		if (uParam2->f_1)
		{
			if (((func_160(0) == 1 || func_160(0) == 2) || func_160(0) == 8) || func_176(&Global_1935630, 2048))
			{
				func_21(uParam2, 2);
			}
		}
		if (uParam2->f_2)
		{
			if (func_160(0) == 11)
			{
				func_21(uParam2, 4);
			}
		}
		if (uParam2->f_4)
		{
			if (func_160(0) == 6)
			{
				func_21(uParam2, 8);
			}
		}
		if (uParam2->f_5)
		{
			if (Global_1394141->f_1328)
			{
				func_21(uParam2, 16);
			}
		}
	}
	if ((get_frame_count() % 30) == 0)
	{
		if (uParam2->f_6)
		{
			if (!(func_177((*(*Global_1396257)[iParam0])[iParam1]->f_19) == 0 && func_177((*(*Global_1396257)[iParam0])[iParam1]->f_20) == 23))
			{
				iVar0 = func_166();
				iVar1 = (*(*Global_1396257)[iParam0])[iParam1]->f_19;
				iVar2 = (*(*Global_1396257)[iParam0])[iParam1]->f_20;
				if (func_177(iVar2) > func_177(iVar1))
				{
					if (func_177(iVar0) > func_177(iVar2) + 1 || func_177(iVar0) < func_177(iVar1))
					{
						func_21(uParam2, 32);
					}
				}
				else if (func_177(iVar0) > func_177(iVar2) + 1 && func_177(iVar0) < func_177(iVar1))
				{
					func_21(uParam2, 32);
				}
			}
		}
		if (uParam2->f_7)
		{
			bVar3 = false;
			if ((*(*Global_1396257)[iParam0])[iParam1]->f_40 != 4)
			{
				if (&(*(*Global_1396257)[iParam0])[iParam1]->f_5[0] != -1 || &(*(*Global_1396257)[iParam0])[iParam1]->f_5[1] != -1)
				{
					if (((func_178(&((*(*Global_1396257)[iParam0])[iParam1]->f_5[0])) || func_178(&((*(*Global_1396257)[iParam0])[iParam1]->f_5[1]))) || func_179(&((*(*Global_1396257)[iParam0])[iParam1]->f_5[0]))) || func_179(&((*(*Global_1396257)[iParam0])[iParam1]->f_5[1])))
					{
						bVar3 = true;
					}
				}
				if (!bVar3)
				{
					if (!func_180((*(*Global_1396257)[iParam0])[iParam1]->f_40))
					{
						func_21(uParam2, 64);
					}
				}
			}
		}
		if (uParam2->f_8)
		{
			if (get_game_timer() > uParam2->f_17)
			{
				if (func_181(&uParam3, &(uParam2->f_18), uParam2->f_11, uParam2->f_12) || func_182(&uParam3, &(uParam2->f_20), &(uParam2->f_19), uParam2->f_11, uParam2->f_12, 2048))
				{
					if (!func_11(&(uParam2->f_13)))
					{
						func_168(&(uParam2->f_13), 0f);
					}
					else if (func_183(&(uParam2->f_13)) >= uParam2->f_16)
					{
						func_14(&(uParam2->f_13));
						func_21(uParam2, 512);
					}
					uParam2->f_17 = get_game_timer() + 1000;
				}
				else
				{
					if (func_11(&(uParam2->f_13)))
					{
						func_14(&(uParam2->f_13));
					}
					uParam2->f_17 = get_game_timer() + 1000;
				}
			}
		}
		if (uParam2->f_9)
		{
			if (func_184())
			{
				func_21(uParam2, 1024);
			}
		}
		if (uParam2->f_10)
		{
			if (func_185())
			{
				func_21(uParam2, 2048);
			}
		}
		if (func_176(&Global_1935630, 16384) || Global_1430231->f_4)
		{
			func_21(uParam2, 128);
		}
		if (func_162(&((*Global_1396257)[iParam0]->f_626), 2048))
		{
			func_21(uParam2, 256);
		}
	}
	if ((((((((((func_34(*uParam2, 2) || func_34(*uParam2, 4)) || func_34(*uParam2, 8)) || func_34(*uParam2, 16)) || func_34(*uParam2, 32)) || func_34(*uParam2, 64)) || func_34(*uParam2, 128)) || func_34(*uParam2, 256)) || func_34(*uParam2, 512)) || func_34(*uParam2, 1024)) || func_34(*uParam2, 2048))
	{
		return true;
	}
	return false;
}

bool func_17(var uParam0)
{
	if (((((func_34(*uParam0, 2) || func_34(*uParam0, 4)) || func_34(*uParam0, 16)) || func_34(*uParam0, 128)) || func_34(*uParam0, 1024)) || func_34(*uParam0, 2048))
	{
		return true;
	}
	return false;
}

bool func_18(var uParam0)
{
	if ((((func_34(*uParam0, 32) || func_34(*uParam0, 64)) || func_34(*uParam0, 512)) || func_34(*uParam0, 256)) || func_34(*uParam0, 8))
	{
		return true;
	}
	return false;
}

bool func_19(var uParam0, int iParam1)
{
	vVar0 = { func_91(iParam1) };
	iVar3 = func_186(iParam1);
	*uParam0 = _find_closest_active_scenario_point_of_type(vVar0, iVar3, 1f, 0, false);
	if (_does_scenario_point_exist(*uParam0))
	{
		return true;
	}
	return false;
}

void func_20(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

void func_21(var uParam0, int iParam1)
{
	func_187(uParam0, iParam1);
}

void func_22(int iParam0)
{
	if (does_entity_exist(iParam0->f_226))
	{
		if (!func_9(iParam0->f_226, 0))
		{
			if (!func_34(iParam0->f_253, 33554432))
			{
				func_20(iParam0, func_188(iParam0));
				func_21(&(iParam0->f_253), 33554432);
			}
		}
		else if ((*iParam0 > 5 && *iParam0 < func_188(iParam0)) && (func_189(iParam0->f_226, 0, &(iParam0->f_103), &(iParam0->f_131), 0, 0) || func_34(iParam0->f_253, 8388608)))
		{
			func_170(18);
			set_ped_config_flag(iParam0->f_226, 448, false);
			set_ped_config_flag(iParam0->f_226, 153, false);
			stop_ped_speaking(iParam0->f_226, false);
			_0x36559148b78853b3(1, 0, 0);
			func_21(&(iParam0->f_253), 8388608);
			if (iParam0->f_1 == 0)
			{
				func_21(&(iParam0->f_253), 4194304);
				func_20(iParam0, 60);
			}
			else if (iParam0->f_1 == 2)
			{
				func_20(iParam0, 63);
				func_149(iParam0);
			}
			else if (iParam0->f_1 == 3)
			{
				func_20(iParam0, 66);
				func_149(iParam0);
			}
		}
	}
}

void func_23(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < iParam0->f_257)
	{
		if (does_entity_exist(&(iParam0->f_214[iVar0])))
		{
			if (!is_ped_fleeing(&(iParam0->f_214[iVar0])))
			{
				if (iParam0->f_643)
				{
					set_ped_reset_flag(&(iParam0->f_214[iVar0]), 49, true);
				}
				if (func_189(&(iParam0->f_214[iVar0]), 0, &(iParam0->f_103), &(iParam0->f_131), 0, 0) || func_34(iParam0->f_253, 8388608))
				{
					if (!func_11(&(iParam0->f_147)) || func_140(&(iParam0->f_147)) > 0.4f)
					{
						if (iParam0->f_1 == 0)
						{
							_0xeeed8fafec331a70(&(iParam0->f_214[iVar0]), get_entity_coords(Global_35, true, false), 1);
						}
						else
						{
							_0xf1c03a5352243a30(&(iParam0->f_214[iVar0]));
						}
						func_79(iParam0->f_338[iVar0], 0);
						func_190(iParam0->f_338[iVar0]);
						set_ped_config_flag(&(iParam0->f_214[iVar0]), 315, false);
						set_ped_combat_attributes(&(iParam0->f_214[iVar0]), 17, true);
						_task_smart_flee_style_ped(&(iParam0->f_214[iVar0]), Global_35, 3, 1, -1082130432, -1, 0);
						set_ped_keep_task(&(iParam0->f_214[iVar0]), true);
						set_blocking_of_non_temporary_events(&(iParam0->f_214[iVar0]), false);
						func_92(&(iParam0->f_147));
						func_21(&(iParam0->f_253), 8388608);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_24(int iParam0)
{
	bVar1 = false;
	iVar0 = iParam0->f_1;
	switch (iVar0)
	{
		case 0:
			if (((*iParam0 == 6 && func_34(iParam0->f_253, 524288)) || ((*iParam0 != 6 && !_0x54b187f111d9c6f8(iParam0->f_226, 0)) && !has_anim_event_fired(iParam0->f_226, -1546655685))) && !func_34(iParam0->f_253, 2))
			{
				bVar1 = true;
			}
			break;
		case 1:
			if (((*iParam0 == 6 && func_34(iParam0->f_253, 524288)) && !func_34(iParam0->f_253, 2)) && !func_191())
			{
				bVar1 = true;
			}
			break;
		case 2:
			if ((*iParam0 == 11 && func_34(iParam0->f_253, 524288)) && !func_34(iParam0->f_253, 2))
			{
				bVar1 = true;
			}
			break;
		case 3:
			if ((*iParam0 == 17 && func_34(iParam0->f_253, 524288)) && !func_34(iParam0->f_253, 2))
			{
				bVar1 = true;
			}
			break;
	}
	iVar2 = 0;
	if ((_does_volume_exist(iParam0->f_234) && _does_volume_exist(iParam0->f_233)) && !is_entity_dead(Global_35))
	{
		if (is_entity_in_volume(Global_35, iParam0->f_234, true, 0))
		{
			if (is_entity_in_volume(Global_35, iParam0->f_233, true, 0) && bVar1)
			{
				if (!func_192(iParam0->f_303[0], 1, 0))
				{
					func_77(iParam0->f_303[0], 1, 0);
					func_77(iParam0->f_303[1], 1, 0);
				}
				if (func_34(iParam0->f_253, 16777216))
				{
					iParam0->f_639 = func_78(2, 0, 0);
					func_79(iParam0->f_281[0], 0);
					func_44(&(iParam0->f_253), 16777216);
				}
			}
			else
			{
				if (func_192(iParam0->f_303[0], 1, 0))
				{
					func_77(iParam0->f_303[0], 0, 0);
					func_77(iParam0->f_303[1], 0, 0);
				}
				if (!func_34(iParam0->f_253, 16777216))
				{
					iParam0->f_639 = func_78(3, 0, 0);
					func_79(iParam0->f_281[0], 0);
					func_21(&(iParam0->f_253), 16777216);
				}
			}
		}
		else if (func_192(iParam0->f_303[0], 1, 0))
		{
			func_77(iParam0->f_303[0], 0, 0);
			func_77(iParam0->f_303[1], 0, 0);
			if (!func_34(iParam0->f_253, 16777216))
			{
				iParam0->f_639 = func_78(3, 0, 0);
				func_79(iParam0->f_281[0], 0);
				func_21(&(iParam0->f_253), 16777216);
			}
		}
		iVar3 = -1;
		iVar4 = 0;
		iVar3 = func_193(&(iParam0->f_226), iParam0->f_281[0], 15f, &(iParam0->f_303), &iVar4, 0f, 2, 0, iVar2, iParam0->f_639, 0, 0, 2, 1, -1082130432, 0);
		if (!func_34(iParam0->f_253, 2))
		{
			switch (iVar3)
			{
				case 0:
				case 1:
					if (iVar3 == 1)
					{
						iParam0->f_258++;
					}
					func_77(iParam0->f_303[0], 0, 0);
					func_77(iParam0->f_303[1], 0, 0);
					if (!func_34(iParam0->f_253, 16777216))
					{
						iParam0->f_639 = func_78(3, 0, 0);
						func_79(iParam0->f_281[0], 0);
						func_21(&(iParam0->f_253), 16777216);
					}
					func_194(18, &(iParam0->f_226), &(iParam0->f_253), 2048);
					func_21(&(iParam0->f_253), 2);
					func_196(18, func_195(iParam0));
					iParam0->f_641 = 1;
					if (iVar0 == 0)
					{
						func_134(iParam0->f_303[0], 1);
						func_134(iParam0->f_303[1], 1);
						func_82(180);
						func_83(iParam0);
					}
					break;
			}
		}
		iVar5 = 0;
		while (iVar5 < iParam0->f_257)
		{
			func_197(iParam0->f_214[iVar5], iParam0->f_338[iVar5], 15f, &(iParam0->f_338[iVar5]->f_21), 0f, 2, 0, "", func_78(3, 0, 0), 0, 0, 2, -1082130432);
			iVar5++;
		}
	}
}

void func_25(int iParam0)
{
	if ((((func_34(iParam0->f_253, 65536) && !func_34(iParam0->f_253, 131072)) && *iParam0 != 60) && *iParam0 != 63) && *iParam0 != 66)
	{
		bVar1 = true;
		iVar0 = 0;
		while (iVar0 < iParam0->f_257)
		{
			if (does_entity_exist(&(iParam0->f_214[iVar0])))
			{
				bVar1 = false;
				if (!func_11(&(iParam0->f_144)) || func_140(&(iParam0->f_144)) > 0.4f)
				{
					if (is_ped_using_any_scenario(&(iParam0->f_214[iVar0])))
					{
						clear_ped_tasks(&(iParam0->f_214[iVar0]), 1, 0);
					}
					func_79(iParam0->f_338[iVar0], 0);
					func_190(iParam0->f_338[iVar0]);
					set_ped_config_flag(&(iParam0->f_214[iVar0]), 315, false);
					func_141(&(iParam0->f_214[iVar0]));
					set_blocking_of_non_temporary_events(&(iParam0->f_214[iVar0]), false);
					_0x39a2fc5af55a52b1(&(iParam0->f_214[iVar0]), -1);
					set_ped_as_no_longer_needed(iParam0->f_214[iVar0]);
					func_92(&(iParam0->f_144));
				}
			}
			iVar0++;
		}
		if (bVar1)
		{
			func_21(&(iParam0->f_253), 131072);
		}
	}
}

void func_26(int iParam0, var uParam1)
{
	if (func_34(iParam0->f_253, 128) || func_34(iParam0->f_253, 4))
	{
		return;
	}
	if (_0xa2cac9def0195e6f(0))
	{
		return;
	}
	if (!func_11(uParam1))
	{
		func_168(uParam1, 0f);
		func_198(iParam0);
	}
}

void func_27(int iParam0)
{
	iVar1 = iParam0->f_1;
	if (iVar1 == 2)
	{
		iVar2 = 0;
		iVar3 = 3;
	}
	else if (iVar1 == 3)
	{
		iVar2 = 2;
		iVar3 = 3;
	}
	if (*iParam0 == func_188(iParam0))
	{
		iParam0->f_2 = 3;
	}
	switch (iParam0->f_2)
	{
		case 0:
		case 1:
			switch (iVar1)
			{
				case 0:
				case 2:
				case 3:
					iVar0 = 0;
					while (iVar0 < iParam0->f_257)
					{
						func_171(&(iParam0->f_214[iVar0]));
						iVar0++;
					}
					break;
			}
			break;
	}
	switch (iParam0->f_2)
	{
		case 0:
			if (func_199(iParam0))
			{
				iParam0->f_2 = 1;
			}
			break;
		case 1:
			switch (iVar1)
			{
				case 0:
					iVar0 = 0;
					while (iVar0 < iParam0->f_257)
					{
						task_look_at_entity(&(iParam0->f_214[iVar0]), iParam0->f_226, -1, 2108, 51, 1);
						if (!func_139(&(iParam0->f_214[iVar0]), -76381094))
						{
							iParam0->f_2 = 0;
						}
						iVar0++;
					}
					break;
				case 2:
				case 3:
					iVar0 = 0;
					while (iVar0 < iParam0->f_257)
					{
						if (func_9(&(iParam0->f_214[iVar0]), 0))
						{
							task_look_at_entity(&(iParam0->f_214[iVar0]), iParam0->f_226, -1, 2108, 51, 1);
							if (!func_139(&(iParam0->f_214[iVar0]), 993674639))
							{
								iParam0->f_2 = 0;
							}
							if (func_62(Global_35, iParam0->f_226, 1, 1) <= 14f)
							{
								if (!func_11(&(iParam0->f_144)))
								{
									func_92(&(iParam0->f_144));
								}
								if (!func_34(iParam0->f_253, 67108864))
								{
									if (func_140(&(iParam0->f_144)) > 2f)
									{
										func_92(&(iParam0->f_144));
										iParam0->f_2 = 2;
									}
								}
								else if (func_140(&(iParam0->f_144)) > 30f)
								{
									func_92(&(iParam0->f_144));
									iParam0->f_2 = 2;
								}
							}
							else
							{
								func_92(&(iParam0->f_144));
							}
						}
						iVar0++;
					}
					break;
			}
			break;
		case 2:
			switch (iVar1)
			{
				case 2:
				case 3:
					if (!func_34(iParam0->f_253, 67108864))
					{
						iVar0 = iVar2;
					}
					else
					{
						iVar0 = iVar3;
					}
					if (func_9(&(iParam0->f_214[iVar0]), 0))
					{
						if (is_ped_using_any_scenario(&(iParam0->f_214[iVar0])))
						{
							clear_ped_tasks(&(iParam0->f_214[iVar0]), 1, 0);
							func_92(&(iParam0->f_144));
						}
						else if (func_140(&(iParam0->f_144)) > 4f)
						{
							func_79(iParam0->f_338[iVar0], 0);
							func_190(iParam0->f_338[iVar0]);
							set_ped_config_flag(&(iParam0->f_214[iVar0]), 315, false);
							_0x39a2fc5af55a52b1(&(iParam0->f_214[iVar0]), -1);
							set_ped_as_no_longer_needed(iParam0->f_214[iVar0]);
							func_92(&(iParam0->f_144));
							iParam0->f_2 = 1;
							func_21(&(iParam0->f_253), 67108864);
						}
						func_141(&(iParam0->f_214[iVar0]));
						set_blocking_of_non_temporary_events(&(iParam0->f_214[iVar0]), false);
					}
					break;
			}
			break;
		case 3:
			if (func_200(iParam0))
			{
				func_201(iParam0);
			}
			break;
	}
}

void func_28(int iParam0)
{
	switch (iParam0->f_1)
	{
		case 2:
			if (func_9(iParam0->f_226, 0))
			{
				if ((_does_anim_scene_exist(iParam0->f_251) && _is_anim_scene_started(iParam0->f_251, false)) && _0x1f0e401031e20146(iParam0->f_251, func_137()))
				{
					if (!func_34(iParam0->f_253, 2097152))
					{
						task_look_at_entity(iParam0->f_226, Global_35, -1, 2108, 51, 1);
						func_21(&(iParam0->f_253), 2097152);
					}
				}
				else
				{
					if (func_34(iParam0->f_253, 2097152))
					{
						func_141(iParam0->f_226);
						func_44(&(iParam0->f_253), 2097152);
					}
					if (_does_anim_scene_exist(iParam0->f_250) && _is_anim_scene_started(iParam0->f_250, false))
					{
						if (!func_11(&(iParam0->f_156)))
						{
							func_92(&(iParam0->f_156));
						}
						else if (func_140(&(iParam0->f_156)) > 6f)
						{
							iVar0 = get_random_int_in_range(0, iParam0->f_257);
							if (func_9(&(iParam0->f_214[iVar0]), 0))
							{
								task_look_at_entity(iParam0->f_226, &(iParam0->f_214[iVar0]), -1, 2108, 51, 1);
								func_92(&(iParam0->f_156));
							}
						}
					}
				}
			}
			break;
		case 0:
			if (func_9(iParam0->f_226, 0) && func_9(&(iParam0->f_214[1]), 0))
			{
				if (_does_anim_scene_exist(iParam0->f_251) && _is_anim_scene_started(iParam0->f_251, false))
				{
					if (_0x1f0e401031e20146(iParam0->f_251, func_133()))
					{
						if (!func_34(iParam0->f_253, 2097152))
						{
							task_look_at_entity(iParam0->f_226, Global_35, -1, 2108, 51, 1);
							func_21(&(iParam0->f_253), 2097152);
						}
					}
					else
					{
						if (func_34(iParam0->f_253, 2097152))
						{
							func_141(iParam0->f_226);
							func_44(&(iParam0->f_253), 2097152);
						}
						task_look_at_entity(iParam0->f_226, &(iParam0->f_214[1]), -1, 2108, 51, 1);
					}
				}
				else
				{
					func_141(iParam0->f_226);
				}
				if (_does_anim_scene_exist(iParam0->f_250) && !func_202(iParam0))
				{
					func_141(iParam0->f_226);
				}
			}
			break;
		case 3:
			if (func_9(iParam0->f_226, 0))
			{
				if (_does_anim_scene_exist(iParam0->f_250) && _is_anim_scene_started(iParam0->f_250, false))
				{
					if (!func_11(&(iParam0->f_156)))
					{
						func_92(&(iParam0->f_156));
					}
					else if (func_140(&(iParam0->f_156)) > 6f)
					{
						iVar1 = func_203(0, iParam0->f_257, 3);
						if (func_9(&(iParam0->f_214[iVar1]), 0))
						{
							task_look_at_entity(iParam0->f_226, &(iParam0->f_214[iVar1]), -1, 2108, 51, 1);
							func_92(&(iParam0->f_156));
						}
					}
				}
			}
			break;
	}
}

void func_29(int iParam0)
{
	if (*iParam0 != 51 && *iParam0 != 52)
	{
		func_204(iParam0);
		return;
	}
	if (func_34(iParam0->f_253, 4))
	{
		func_204(iParam0);
		return;
	}
	if (is_entity_dead(iParam0->f_226) || is_entity_dead(Global_35))
	{
		func_204(iParam0);
		return;
	}
	if (func_167(Global_35, iParam0->f_226, 15f, 1))
	{
		if (!func_34(iParam0->f_253, 1048576))
		{
			_0xc67a4910425f11f1(player_id(), "MayorBubble");
			_0x3946fc742ac305cd(player_id(), iParam0->f_226, "SPECIAL_PED_GENERIC_INTERACT_FOCUS", 0f, 0f, 0f, 0, "MayorConvo");
			func_21(&(iParam0->f_253), 1048576);
		}
	}
	else
	{
		func_204(iParam0);
	}
}

void func_30(int iParam0)
{
	if (func_34(iParam0->f_253, 4096))
	{
		return;
	}
	if (*iParam0 >= 22 && *iParam0 <= 49)
	{
		if (iParam0->f_256 < 2)
		{
			if (func_205(&(iParam0->f_226), 249295937))
			{
				func_21(&(iParam0->f_253), 4096);
			}
		}
	}
}

void func_31(int iParam0, var uParam1, int iParam2, int iParam3, float fParam4)
{
	if (is_entity_dead(iParam0) || Global_1935630->f_12)
	{
		return;
	}
	sVar0 = func_206(iParam3);
	if (fParam4 == 0f)
	{
		if (func_167(iParam0, Global_35, 15f, 1))
		{
			if (!func_207(*uParam1, iParam2))
			{
				if (_0x6339c1ea3979b5f7(sVar0, "special_ped_scenes"))
				{
					func_187(uParam1, iParam2);
				}
			}
		}
		else if (func_207(*uParam1, iParam2))
		{
			_0x9428447ded71fc7e("special_ped_scenes");
			func_208(uParam1, iParam2);
		}
	}
	else if (fParam4 <= 15f)
	{
		if (!func_207(*uParam1, iParam2))
		{
			if (_0x6339c1ea3979b5f7(sVar0, "special_ped_scenes"))
			{
				func_187(uParam1, iParam2);
			}
		}
	}
	else if (func_207(*uParam1, iParam2))
	{
		_0x9428447ded71fc7e("special_ped_scenes");
		func_208(uParam1, iParam2);
	}
}

bool func_32(int iParam0, int iParam1, bool bParam2, int iParam3)
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

void func_33(var uParam0)
{
	if (func_34(*uParam0, 64))
	{
		return;
	}
	if (func_15(18) == 0)
	{
		if (!func_34(*uParam0, 8))
		{
			func_21(uParam0, 8);
			func_21(uParam0, 64);
		}
	}
	else if (func_15(18) == 1)
	{
		if (!func_34(*uParam0, 16))
		{
			func_21(uParam0, 16);
			func_21(uParam0, 64);
		}
	}
	else if (func_15(18) == 2)
	{
		if (!func_34(*uParam0, 32))
		{
			func_21(uParam0, 32);
			func_21(uParam0, 64);
		}
	}
}

bool func_34(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_35(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			iVar0 = 1234550949;
			break;
		case 1:
			iVar0 = -1345208079;
			break;
		case 2:
			iVar0 = -1384606398;
			break;
		case 3:
			iVar0 = 1127589605;
			break;
		case 4:
			iVar0 = -548150401;
			break;
		case 5:
			iVar0 = 617552302;
			break;
		case 6:
			iVar0 = -1812624322;
			break;
	}
	return iVar0;
}

void func_36(int iParam0)
{
	if (!_does_volume_exist(iParam0->f_232))
	{
		iParam0->f_232 = _create_volume_sphere_with_custom_name(-1807.259f, -373.538f, 160.545f, 0f, 0f, -40.7371f, 40f, 40f, 40f, "RandomEventBlock");
	}
	if (!_does_volume_exist(iParam0->f_233))
	{
		iParam0->f_233 = _create_volume_box_with_custom_name(-1808.178f, -372.9722f, 162.925f, 0f, 0f, 0f, 2.4f, 3.25f, 3f, "BarTrigger");
	}
	if (!_does_volume_exist(iParam0->f_234))
	{
		iParam0->f_234 = _create_volume_cylinder_with_custom_name(-1780.52f, -386.1113f, 164.7127f, 0f, 0f, 0f, 15f, 15f, 10f, "Interaction");
	}
	if (!_does_volume_exist(iParam0->f_235))
	{
		iParam0->f_235 = _create_volume_box_with_custom_name(-1807.915f, -374.0633f, 163.2964f, 0f, 0f, 0f, 2f, 2f, 3f, "BarStayAway");
	}
	if (!_does_volume_exist(iParam0->f_236))
	{
		iParam0->f_236 = _create_volume_cylinder_with_custom_name(-1805.002f, -370.4279f, 162.451f, 0f, 0f, 0f, 5f, 5f, 3f, "LookIKVol");
	}
	if (!_does_volume_exist(iParam0->f_237))
	{
		iParam0->f_237 = _create_volume_cylinder_with_custom_name(-1807.915f, -374.0633f, 163.2964f, 0f, 0f, 0f, 3f, 3f, 6f, "Focus");
	}
	if (!_does_volume_exist(iParam0->f_239))
	{
		iParam0->f_239 = _create_volume_box_with_custom_name(-1808.159f, -370.5105f, 162.2462f, 0f, 0f, 0f, 2.370875f, 9.299027f, 3.438804f, "ScenarioBlock");
	}
	if (!_does_volume_exist(iParam0->f_235))
	{
		iParam0->f_235 = _create_volume_box_with_custom_name(-1807.915f, -374.0633f, 163.2964f, 0f, 0f, 0f, 2f, 2f, 3f, "BarStayAway");
	}
	if (!_does_volume_exist(iParam0->f_242))
	{
		iParam0->f_242 = _0x0eb78c2b156635b1(665633627, -1808.158f, -374.1018f, 163.1033f, 0f, 0f, 0f, 1.85f, 1.85f, 3f);
		_0x5b23dff8e0948bb2(iParam0->f_242, 0);
		_0xbe551c2cc421185d(iParam0->f_242, 1);
	}
}

int func_37(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	if (!_does_volume_exist(iParam0))
	{
		return 0;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	vVar3 = { _0x3e2a25b2416dd67e(iParam0) };
	iVar6 = func_209(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

var func_38(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!_does_volume_exist(iParam0))
	{
		return uVar0;
	}
	func_210(iParam0, bParam2);
	_0x18262cafebb5fbe1(iParam0, iParam3, 0, 0, -1, -1, 0);
	_0xb56d41a694e42e86(iParam0, iParam3, 0, 0, -1, -1, 2);
	uVar0 = _0x4c39c95ae5db1329(iParam0, bParam2, 15);
	return uVar0;
}

int func_39(int iParam0)
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

int func_40(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_211())
	{
		iVar2 = func_211();
	}
	iVar5 = func_212(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_213(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_213(iVar6) == 0)
			{
				return func_214(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_213(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_213(iVar6) == 0)
			{
				return func_214(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_214(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

bool func_41(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_42(int iParam0)
{
	if (!func_41(iParam0))
	{
		return -1;
	}
	return func_215(iParam0);
}

int func_43(int iParam0)
{
	if (!func_41(iParam0))
	{
		return -1;
	}
	return func_216(iParam0);
}

void func_44(var uParam0, int iParam1)
{
	func_208(uParam0, iParam1);
}

bool func_45()
{
	if (func_217() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

void func_46(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_218(uParam0, iParam1, sParam2))
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

void func_47(var uParam0)
{
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	uParam0->f_4 = 1;
	uParam0->f_5 = 1;
	uParam0->f_6 = 1;
	uParam0->f_7 = 1;
	uParam0->f_8 = 0;
	uParam0->f_9 = 1;
	uParam0->f_10 = 1;
	uParam0->f_11 = 1.75f;
	uParam0->f_12 = 2.25f;
	uParam0->f_16 = 45000;
}

void func_48(var uParam0)
{
	func_49(uParam0, 0);
	func_54(uParam0, 0);
	func_219(uParam0, 1);
	func_220(uParam0, 1);
	func_221(uParam0, 0);
	func_222(uParam0, 1);
	func_223(uParam0, 1, 1, 1);
}

void func_49(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_224(&(uParam0->f_1), 16384);
	}
	else
	{
		func_225(&(uParam0->f_1), 16384);
	}
}

void func_50(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_224(&(uParam0->f_1), 131072);
	}
	else
	{
		func_225(&(uParam0->f_1), 131072);
	}
}

void func_51(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_225(uParam0, 4);
	}
	else
	{
		func_224(uParam0, 4);
	}
}

void func_52(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_224(&(uParam0->f_1), 8);
	}
	else
	{
		func_225(&(uParam0->f_1), 8);
	}
}

void func_53(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_224(&(uParam0->f_1), 2);
	}
	else
	{
		func_225(&(uParam0->f_1), 2);
	}
}

void func_54(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_224(&(uParam0->f_1), 2048);
	}
	else
	{
		func_225(&(uParam0->f_1), 2048);
	}
}

void func_55(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_224(&(uParam0->f_1), 16);
	}
	else
	{
		func_225(&(uParam0->f_1), 16);
	}
}

void func_56(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_224(&(uParam0->f_1), 1);
	}
	else
	{
		func_225(&(uParam0->f_1), 1);
	}
}

void func_57(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_224(&(uParam0->f_1), 4);
	}
	else
	{
		func_225(&(uParam0->f_1), 4);
	}
}

void func_58(int iParam0)
{
	if (!_does_volume_exist(iParam0->f_232))
	{
		iParam0->f_232 = _create_volume_sphere_with_custom_name(-1807.259f, -373.538f, 160.545f, 0f, 0f, -40.7371f, 40f, 40f, 40f, "RandomEventBlock");
	}
	if (!_does_volume_exist(iParam0->f_233))
	{
		iParam0->f_233 = _create_volume_cylinder_with_custom_name(-1803.973f, -372.7202f, 162.9169f, 0f, 0f, 0f, 2.5f, 3.5f, 3f, "BarTrigger");
	}
	if (!_does_volume_exist(iParam0->f_234))
	{
		iParam0->f_234 = _create_volume_cylinder_with_custom_name(-1780.52f, -386.1113f, 164.7127f, 0f, 0f, 0f, 15f, 15f, 10f, "Interaction");
	}
	if (!_does_volume_exist(iParam0->f_235))
	{
		iParam0->f_235 = _create_volume_box_with_custom_name(-1812.402f, -366.9263f, 163.2964f, 0f, 0f, 0f, 2f, 2f, 3f, "BarStayAway");
	}
	if (!_does_volume_exist(iParam0->f_236))
	{
		iParam0->f_236 = _create_volume_cylinder_with_custom_name(-1804.474f, -373.0866f, 163.7856f, 0f, 0f, 170f, 5f, 7f, 9f, "LookIKVolume");
	}
	if (!_does_volume_exist(iParam0->f_237))
	{
		iParam0->f_237 = _create_volume_cylinder_with_custom_name(-1807.915f, -374.0633f, 163.2964f, 0f, 0f, 0f, 3f, 3f, 6f, "Focus");
	}
	if (!_does_volume_exist(iParam0->f_239))
	{
		iParam0->f_239 = _create_volume_box_with_custom_name(-1807.266f, -370.5105f, 161.9648f, 0f, 0f, 0f, 5.4f, 9.3f, 3.8f, "ScenarioBlock");
	}
	if (!_does_volume_exist(iParam0->f_235))
	{
		iParam0->f_235 = _create_volume_box_with_custom_name(-1807.915f, -374.0633f, 163.2964f, 0f, 0f, 0f, 2f, 2f, 3f, "BarStayAway");
	}
	if (!_does_volume_exist(iParam0->f_240))
	{
		iParam0->f_240 = _create_volume_box_with_custom_name(-1817.343f, -371.0179f, 163.4183f, 0f, 0f, 0f, 1.5f, 1.5f, 3f, "EndScenarioBlock");
	}
	if (!_does_volume_exist(iParam0->f_238))
	{
		iParam0->f_238 = _create_volume_aggregate_with_custom_name("BridgeBlock");
		_0x39816f6f94f385ad(iParam0->f_238, -1812.224f, -389.8523f, 161.4299f, 0f, 0f, -33f, 6f, 52f, 5f);
		_0x39816f6f94f385ad(iParam0->f_238, -1779.902f, -384.4528f, 159.3328f, 0f, 0f, 47f, 10f, 50f, 10f);
	}
	if (!_does_volume_exist(iParam0->f_242))
	{
		iParam0->f_242 = _0x0eb78c2b156635b1(665633627, -1808.158f, -374.1018f, 163.1033f, 0f, 0f, 0f, 1.85f, 1.85f, 3f);
		_0x5b23dff8e0948bb2(iParam0->f_242, 0);
		_0xbe551c2cc421185d(iParam0->f_242, 1);
	}
}

void func_59(int iParam0)
{
	if (!_does_volume_exist(iParam0->f_232))
	{
		iParam0->f_232 = _create_volume_sphere_with_custom_name(-1781.978f, -387.436f, 158.14f, 0f, 0f, 0f, 40f, 40f, 40f, "RandomEventBlock");
	}
	if (!_does_volume_exist(iParam0->f_233))
	{
		iParam0->f_233 = _create_volume_cylinder_with_custom_name(-1780.52f, -386.1113f, 164.7127f, 0f, 0f, 0f, 5f, 5f, 10f, "BarTrigger");
	}
	if (!_does_volume_exist(iParam0->f_234))
	{
		iParam0->f_234 = _create_volume_cylinder_with_custom_name(-1780.52f, -386.1113f, 164.7127f, 0f, 0f, 0f, 15f, 15f, 10f, "Interaction");
	}
	if (!_does_volume_exist(iParam0->f_235))
	{
		iParam0->f_235 = _create_volume_box_with_custom_name(-1781.117f, -386.2386f, 158.8012f, 0f, 0f, 49.00006f, 2.280238f, 2.759403f, 5f, "BarStayAway");
	}
	if (!_does_volume_exist(iParam0->f_236))
	{
		iParam0->f_236 = _create_volume_cylinder_with_custom_name(-1779.163f, -383.5739f, 161.6929f, 0f, 0f, 140f, 8f, 4f, 7f, "LookIKVolume");
	}
	if (!_does_volume_exist(iParam0->f_237))
	{
		iParam0->f_237 = _create_volume_cylinder_with_custom_name(-1807.915f, -374.0633f, 163.2964f, 0f, 0f, 0f, 3f, 3f, 6f, "Focus");
	}
	if (!_does_volume_exist(iParam0->f_239))
	{
		iParam0->f_239 = _create_volume_box_with_custom_name(-1781.01f, -387.628f, 158.5448f, 0f, 0f, 53f, 4f, 4f, 7f, "ScenarioBlock");
	}
	if (!_does_volume_exist(iParam0->f_235))
	{
		iParam0->f_235 = _create_volume_box_with_custom_name(-1807.915f, -374.0633f, 163.2964f, 0f, 0f, 0f, 2f, 2f, 3f, "BarStayAway");
	}
	if (!_does_volume_exist(iParam0->f_242))
	{
		iParam0->f_242 = _0x0eb78c2b156635b1(665633627, -1808.158f, -374.1018f, 163.1033f, 0f, 0f, 0f, 1.85f, 1.85f, 3f);
		_0x5b23dff8e0948bb2(iParam0->f_242, 0);
		_0xbe551c2cc421185d(iParam0->f_242, 1);
	}
}

int func_60(int iParam0)
{
	if (!func_226(iParam0))
	{
		return 0;
	}
	return (*Global_1895087)[iParam0]->f_1;
}

int func_61(int iParam0)
{
	if (!func_226(iParam0))
	{
		return 0;
	}
	if (!func_227(iParam0, 2))
	{
		return 0;
	}
	if (func_229(func_228(iParam0)))
	{
		return func_230(iParam0);
	}
	return _0xe76687023d8c8505(func_231(iParam0), 0);
}

float func_62(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_63(int iParam0)
{
	if (!func_226(iParam0))
	{
		return 0;
	}
	if (!func_229(func_228(iParam0)))
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_60(iParam0)))
	{
		return 0;
	}
	if (network_is_in_session())
	{
		if (!network_has_control_of_entity(_0x31c70a716cae1fee(func_60(iParam0))))
		{
			return 1;
		}
	}
	iVar0 = _0x31c70a716cae1fee(func_60(iParam0));
	if (does_entity_exist(iVar0))
	{
		if (!_0x88ad6cc10d8d35b2(iVar0))
		{
			set_entity_as_mission_entity(iVar0, true, true);
		}
	}
	_0x7b204f88f6c3d287(func_60(iParam0));
	return 1;
}

void func_64(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_225(uParam0, 524288);
	}
	else
	{
		func_224(uParam0, 524288);
	}
}

bool func_65(int iParam0, int iParam1)
{
	vVar0 = { func_91(iParam1) };
	fVar3 = func_232(iParam1);
	iVar4 = func_233(iParam1);
	iParam0->f_224 = create_scenario_point(iVar4, vVar0, fVar3, 0, 0, 0);
	if (_does_scenario_point_exist(iParam0->f_224))
	{
		return true;
	}
	return false;
}

struct<4> func_66(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Var0 = { -1807.855f, -373.9421f, 161.8663f };
			Var0.f_3 = 193.945f;
			break;
		case 1:
			Var0 = { -1807.839f, -374.7922f, 161.8436f };
			Var0.f_3 = 180f;
			break;
		case 2:
			Var0 = { -1807.327f, -372.7494f, 161.8703f };
			Var0.f_3 = -80.87f;
			break;
		case 3:
			Var0 = { -1781.684f, -387.2436f, 159.247f };
			Var0.f_3 = -44.78f;
			break;
	}
	return Var0;
}

int func_67(var uParam0, int iParam1, vector3 vParam2, bool bParam5, int iParam6)
{
	if (func_60(iParam1) == 0)
	{
		return 0;
	}
	if (!func_9(*uParam0, 0))
	{
		*uParam0 = func_234(iParam1, 1, 0, 0, 1, 1);
	}
	else
	{
		if (iParam6 != 1320127128)
		{
			func_80(*uParam0, iParam6);
		}
		if (bParam5)
		{
			_0x59c7ad6fea2ac449(func_60(iParam1), vParam2);
		}
		return 1;
	}
	return 0;
}

int func_68(var uParam0, int iParam1, vector3 vParam2)
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

int func_69(var uParam0, var uParam1, int iParam2, vector3 vParam3, int iParam6)
{
	if (!_0x1ff441d7954f8709(*uParam0))
	{
		*uParam0 = _0x6f3068258a499e52(iParam2, vParam3, iParam6);
		return 0;
	}
	if (!does_entity_exist(*uParam1))
	{
		*uParam1 = get_object_index_from_entity_index(_0x4735e2a4bb83d9da(*uParam0));
		return 0;
	}
	if (!does_entity_exist(*uParam1))
	{
		return 0;
	}
	return 1;
}

int func_70(int iParam0)
{
	bVar1 = true;
	iVar0 = 0;
	while (iVar0 < iParam0->f_257)
	{
		if (!does_entity_exist(&(iParam0->f_214[iVar0])))
		{
			bVar1 = false;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	bVar1 = true;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_257)
	{
		if (!func_239(iParam0->f_214[iVar0], func_35(func_235(iParam0, iVar0)), func_236(iParam0, iVar0), func_237(iParam0, iVar0), func_238(iParam0, iVar0), 0, 1))
		{
			bVar1 = false;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

void func_71(int iParam0, int iParam1)
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

char* func_72(int iParam0, int iParam1)
{
	if (func_240())
	{
		switch (iParam0->f_258)
		{
			case 0:
				*iParam1 = 1;
				return "INSULT_MAYOR_CONV_PART1";
			case 1:
				*iParam1 = 2;
				return "INSULT_MAYOR_CONV_PART1";
			case 2:
				*iParam1 = 2;
				return "INSULT_MALE_CONV_PART1";
			case 3:
				*iParam1 = 19;
				return "INSULT_MALE_CONV_PART1";
		}
	}
	else
	{
		switch (get_random_int_in_range(0, 5))
		{
			case 0:
				*iParam1 = 16;
				return "INSULT_MALE_CONV_PART1";
			case 1:
				*iParam1 = 2;
				return "INSULT_MALE_CONV_PART1";
			case 2:
				*iParam1 = 6;
				return "INSULT_MALE_CONV_PART1";
			case 3:
				*iParam1 = 18;
				return "INSULT_MALE_CONV_PART1";
			case 4:
				*iParam1 = 19;
				return "INSULT_MALE_CONV_PART1";
		}
	}
	*iParam1 = 2;
	return "INSULT_MALE_CONV_PART1";
}

void func_73(var uParam0, var uParam1, int iParam2, float fParam3, float fParam4)
{
	if (!does_entity_exist(*uParam0))
	{
		return;
	}
	if (is_shocking_event_in_sphere(iParam2, get_entity_coords(*uParam0, true, false), fParam3))
	{
		return;
	}
	*uParam1 = add_shocking_event_for_entity(iParam2, *uParam0, fParam4, fParam3, fParam3, -1f, -1f, 180f, false, false, -1, -1);
}

char* func_74()
{
	return "GREET_GENERAL";
}

void func_75(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
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
		if (func_241(iParam0->f_6))
		{
			if (is_bit_set(*iParam0, 1))
			{
				func_242(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_243(iParam0->f_6, iParam0->f_5, 0);
			}
			func_244(iParam0->f_6, 0, 1);
		}
		else
		{
			set_bit(iParam0, 14);
		}
		set_bit(iParam0, 0);
	}
	else
	{
		func_245(iParam0, iParam0->f_5);
		if (!is_bit_set(*iParam0, 13))
		{
			set_bit(iParam0, 0);
		}
	}
	set_bit(iParam0, 15);
}

void func_76(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

void func_77(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_246(iParam0, 13))
	{
		func_76(iParam0, 0);
	}
	else
	{
		func_247(iParam0, 0);
	}
	if (func_241(iParam0->f_6))
	{
		if (bParam2)
		{
			func_248(&(iParam0->f_6), 0, 1);
		}
	}
}

int func_78(int iParam0, int iParam1, int iParam2)
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

void func_79(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_14(&(iParam0->f_18));
}

void func_80(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_249(iParam0, iParam1))
		{
			if (func_250(iParam0, iParam1))
			{
				if (func_251(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_252(iParam0);
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

void func_81(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < iParam0->f_257)
	{
		if (does_entity_exist(&(iParam0->f_214[iVar0])))
		{
			set_blocking_of_non_temporary_events(&(iParam0->f_214[iVar0]), true);
		}
		iVar0++;
	}
}

void func_82(int iParam0)
{
	func_253();
	func_254(-1, 0, 0, 0, 0);
	func_255(iParam0, 0, 1);
}

void func_83(int iParam0)
{
	iVar0 = func_203(0, (2 - 1), iParam0->f_249);
	iParam0->f_249 = iVar0;
	switch (iVar0)
	{
		case 0:
			func_20(iParam0, 51);
			break;
		case 1:
			func_20(iParam0, 52);
			break;
		case 2:
			func_20(iParam0, 53);
			break;
		default:
			break;
	}
}

float func_84(int iParam0)
{
	if (func_34(iParam0->f_253, 2))
	{
		return 3f;
	}
	if (func_62(Global_35, iParam0->f_226, 1, 1) <= 14f)
	{
		return 5f;
	}
	return 13f;
}

bool func_85(int iParam0)
{
	iVar0 = get_interior_from_entity(Global_35);
	if (iVar0 != 0)
	{
		if (_get_interior_minimap_hash(iVar0) != 978821587)
		{
			return false;
		}
	}
	switch (iParam0->f_640)
	{
		case 8:
			if (func_62(Global_35, iParam0->f_226, 1, 1) <= 14f)
			{
				if (!func_34(iParam0->f_254, 256))
				{
					func_20(iParam0, 22);
					iParam0->f_640 = 9;
					func_21(&(iParam0->f_254), 256);
					return true;
				}
			}
			break;
		case 9:
			if (func_62(Global_35, iParam0->f_226, 1, 1) <= 14f)
			{
				if (!func_34(iParam0->f_254, 512))
				{
					func_20(iParam0, 23);
					iParam0->f_640 = 10;
					func_21(&(iParam0->f_254), 512);
					return true;
				}
			}
			break;
		case 10:
			if (func_62(Global_35, iParam0->f_226, 1, 1) <= 14f)
			{
				if (!func_34(iParam0->f_254, 1024))
				{
					func_20(iParam0, 24);
					iParam0->f_640 = 16;
					func_21(&(iParam0->f_254), 1024);
					return true;
				}
			}
			break;
	}
	iVar1 = func_203(3, 8, iParam0->f_248);
	iParam0->f_248 = iVar1;
	if (iParam0->f_640 == 16)
	{
		func_196(18, func_195(iParam0));
		func_20(iParam0, 20);
		return true;
	}
	switch (iVar1)
	{
		case 3:
			if (!func_34(iParam0->f_254, 2048))
			{
				func_20(iParam0, 25);
				func_21(&(iParam0->f_254), 2048);
				return true;
			}
			break;
		case 4:
			if (!func_34(iParam0->f_254, 4096))
			{
				func_20(iParam0, 26);
				func_21(&(iParam0->f_254), 4096);
				return true;
			}
			break;
		case 5:
			if (!func_34(iParam0->f_254, 32768))
			{
				func_20(iParam0, 29);
				func_21(&(iParam0->f_254), 32768);
				return true;
			}
			break;
		case 6:
			if (!func_34(iParam0->f_254, 65536))
			{
				func_20(iParam0, 30);
				func_21(&(iParam0->f_254), 65536);
				return true;
			}
			break;
		case 7:
			if (!func_34(iParam0->f_254, 131072))
			{
				func_20(iParam0, 31);
				func_21(&(iParam0->f_254), 131072);
				return true;
			}
			break;
		case 8:
			func_20(iParam0, 32);
			break;
		default:
			break;
	}
	return false;
}

void func_86(int iParam0)
{
	iVar0 = func_203(0, 2, iParam0->f_249);
	iParam0->f_249 = iVar0;
	switch (iVar0)
	{
		case 0:
			func_20(iParam0, 54);
			break;
		case 1:
			func_20(iParam0, 55);
			break;
		case 2:
			func_20(iParam0, 56);
			break;
		default:
			break;
	}
}

bool func_87(int iParam0)
{
	iVar0 = get_interior_from_entity(Global_35);
	if (iVar0 != 0)
	{
		if (_get_interior_minimap_hash(iVar0) != 978821587)
		{
			return false;
		}
	}
	switch (iParam0->f_640)
	{
		case 0:
			if (func_62(Global_35, iParam0->f_226, 1, 1) >= 14f)
			{
				if (!func_34(iParam0->f_254, 1))
				{
					func_20(iParam0, 37);
					func_21(&(iParam0->f_254), 1);
					return true;
				}
				func_256(iParam0, 1);
			}
			else
			{
				func_256(iParam0, 3);
			}
			return false;
		case 1:
			if (func_62(Global_35, iParam0->f_226, 1, 1) >= 14f)
			{
				if (!func_34(iParam0->f_254, 2))
				{
					func_20(iParam0, 38);
					func_21(&(iParam0->f_254), 2);
					return true;
				}
				func_256(iParam0, 2);
			}
			else
			{
				func_256(iParam0, 3);
			}
			return false;
		case 2:
			if (func_62(Global_35, iParam0->f_226, 1, 1) >= 14f)
			{
				if (!func_34(iParam0->f_254, 4))
				{
					func_20(iParam0, 41);
					func_21(&(iParam0->f_254), 4);
					return true;
				}
				func_256(iParam0, 3);
			}
			else
			{
				func_256(iParam0, 3);
			}
			return false;
		case 3:
			if (func_62(Global_35, iParam0->f_226, 1, 1) <= 14f)
			{
				if (!func_34(iParam0->f_254, 8))
				{
					func_20(iParam0, 36);
					func_21(&(iParam0->f_254), 8);
					return true;
				}
				else
				{
					func_256(iParam0, 4);
				}
			}
			else
			{
				func_256(iParam0, 0);
			}
			return false;
		case 4:
			if (func_62(Global_35, iParam0->f_226, 1, 1) <= 14f)
			{
				if (!func_34(iParam0->f_254, 16))
				{
					func_20(iParam0, 40);
					func_21(&(iParam0->f_254), 16);
					return true;
				}
				else
				{
					func_256(iParam0, 5);
				}
			}
			else
			{
				func_256(iParam0, 0);
			}
			return false;
		case 5:
			if (func_62(Global_35, iParam0->f_226, 1, 1) <= 14f)
			{
				if (!func_34(iParam0->f_254, 32))
				{
					func_20(iParam0, 39);
					func_21(&(iParam0->f_254), 32);
					return true;
				}
				else
				{
					func_256(iParam0, 6);
				}
			}
			else
			{
				func_256(iParam0, 0);
			}
			return false;
		case 6:
			if (func_62(Global_35, iParam0->f_226, 1, 1) <= 14f)
			{
				if (!func_34(iParam0->f_254, 64))
				{
					func_20(iParam0, 35);
					func_21(&(iParam0->f_254), 64);
					return true;
				}
				else
				{
					func_256(iParam0, 16);
				}
			}
			else
			{
				func_256(iParam0, 0);
			}
			return false;
		case 16:
			func_196(18, func_195(iParam0));
			func_20(iParam0, 13);
			return true;
	}
	return false;
}

bool func_88(int iParam0)
{
	iVar0 = get_interior_from_entity(Global_35);
	if (iVar0 != 0)
	{
		if (_get_interior_minimap_hash(iVar0) != 978821587)
		{
			return false;
		}
	}
	switch (iParam0->f_640)
	{
		case 11:
			if (func_62(Global_35, iParam0->f_226, 1, 1) <= 14f)
			{
				if (!func_34(iParam0->f_254, 262144))
				{
					func_20(iParam0, 43);
					iParam0->f_640 = 12;
					func_21(&(iParam0->f_254), 262144);
					return true;
				}
			}
			break;
		case 12:
			if (func_62(Global_35, iParam0->f_226, 1, 1) <= 14f)
			{
				if (!func_34(iParam0->f_254, 524288))
				{
					func_20(iParam0, 45);
					iParam0->f_640 = 13;
					func_21(&(iParam0->f_254), 524288);
					return true;
				}
			}
			break;
		case 13:
			if (func_62(Global_35, iParam0->f_226, 1, 1) <= 14f)
			{
				if (!func_34(iParam0->f_254, 1048576))
				{
					func_20(iParam0, 44);
					iParam0->f_640 = 14;
					func_21(&(iParam0->f_254), 1048576);
					return true;
				}
			}
			break;
		case 14:
			if (func_62(Global_35, iParam0->f_226, 1, 1) <= 14f)
			{
				if (!func_34(iParam0->f_254, 2097152))
				{
					func_20(iParam0, 46);
					iParam0->f_640 = 15;
					func_21(&(iParam0->f_254), 2097152);
					return true;
				}
			}
			break;
		case 15:
			if (func_62(Global_35, iParam0->f_226, 1, 1) <= 14f)
			{
				if (!func_34(iParam0->f_254, 4194304))
				{
					func_20(iParam0, 47);
					iParam0->f_640 = 16;
					func_21(&(iParam0->f_254), 4194304);
					return true;
				}
			}
			break;
	}
	if (iParam0->f_640 == 16)
	{
		func_196(18, func_195(iParam0));
		func_257(iParam0);
		func_20(iParam0, 62);
		return true;
	}
	if (!func_34(iParam0->f_254, 8388608))
	{
		func_20(iParam0, 49);
		func_21(&(iParam0->f_254), 8388608);
		return true;
	}
	return false;
}

bool func_89(var uParam0)
{
	bVar0 = _is_anim_scene_loaded(*uParam0, true, false);
	bVar1 = _is_anim_scene_started(*uParam0, false);
	if (bVar0 || bVar1)
	{
		return true;
	}
	bVar3 = _does_anim_scene_exist(*uParam0);
	bVar2 = _is_anim_scene_loading(*uParam0, true);
	if ((bVar3 && !bVar0) && !bVar2)
	{
		load_anim_scene(*uParam0);
		return false;
	}
	if (bVar2)
	{
	}
	if (!bVar3)
	{
	}
	return false;
}

bool func_90(int iParam0, var uParam1, int iParam2)
{
	if (!func_9(iParam0->f_226, 0))
	{
		return false;
	}
	if (_0x9c54041bb66bcf9e(iParam0->f_226, *uParam1))
	{
		return true;
	}
	if (!func_139(iParam0->f_226, -76381094))
	{
		if (_does_volume_exist(iParam0->f_242))
		{
			_delete_volume(iParam0->f_242);
		}
		_task_use_scenario_point(iParam0->f_226, *uParam1, 0, iParam2, true, false, 0, false, -1f, false);
		func_141(iParam0->f_226);
		set_ped_config_flag(iParam0->f_226, 448, false);
		set_ped_config_flag(iParam0->f_226, 153, false);
		stop_ped_speaking(iParam0->f_226, false);
		set_blocking_of_non_temporary_events(iParam0->f_226, false);
		set_ped_keep_task(iParam0->f_226, true);
	}
	return false;
}

Vector3 func_91(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			vVar0 = { -1817.09f, -370.825f, 162.296f };
			break;
		case 1:
			vVar0 = { -1796.195f, -432.0646f, 154.8438f };
			break;
		case 2:
			vVar0 = { -1830.637f, -411.2434f, 161.4105f };
			break;
		case 3:
			vVar0 = { -1820.684f, -374.7641f, 165.4969f };
			break;
	}
	return vVar0;
}

void func_92(var uParam0)
{
	func_168(uParam0, 0f);
}

void func_93(int iParam0, int iParam1, int iParam2)
{
	_0x36559148b78853b3(iParam0, iParam1, iParam2);
}

void func_94(int iParam0, int iParam1, var uParam2, vector3 vParam3, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, int iParam16, int iParam17, int iParam18, bool bParam19)
{
	if (is_entity_dead(iParam0))
	{
	}
	if (is_entity_dead(iParam1))
	{
	}
	if (!is_string_null_or_empty(uParam2->f_1))
	{
		task_scripted_animation(iParam0, uParam2);
	}
	if (!is_string_null_or_empty(sParam6))
	{
		if (iParam7 == 0)
		{
			iParam7 = 14;
		}
		Var0 = 2;
		Var0.f_4 = sParam6;
		Var0.f_5 = iParam7;
		Var0.f_7 = iParam16;
		Var0.f_9 = iParam17;
		task_lead_and_converse(iParam0, iParam1, &Var0, iParam8, iParam9, iParam10, iParam11, iParam13, iParam12);
	}
	else if (!func_258(vParam3, 0f, 0f, 0f))
	{
		Var11 = 0;
		Var11.f_1 = { vParam3 };
		Var11.f_7 = iParam16;
		Var11.f_9 = iParam17;
		Var11.f_8 = iParam18;
		task_lead_and_converse(iParam0, iParam1, &Var11, iParam8, iParam9, iParam10, iParam11, iParam13, iParam12);
	}
	if (bParam15)
	{
		_set_ped_crouch_movement(iParam0, false, 0, false);
	}
	if (bParam19)
	{
		func_259(iParam0, iParam1, iParam14);
	}
}

void func_95(int iParam0, int iParam1, var uParam2, float fParam3, int iParam4, int iParam5, float fParam6, float fParam7, bool bParam8, int iParam9, float fParam10, float fParam11, float fParam12, float fParam13, float fParam14, float fParam15, int iParam16, float fParam17, int iParam18, bool bParam19, int iParam20, int iParam21, bool bParam22)
{
	if (is_entity_dead(iParam0))
	{
	}
	if (is_entity_dead(iParam1))
	{
	}
	if (!is_string_null_or_empty(uParam2->f_1))
	{
		task_scripted_animation(iParam0, uParam2);
	}
	if (is_ped_a_player(iParam0))
	{
		_0x2beed53b912537d0(player_id(), iParam1, -1f);
		Var0.f_1 = 1050253722;
		Var0.f_2 = 1067030938;
		Var0.f_5 = -1082130432;
		Var0.f_6 = -1082130432;
		Var0.f_3 = iParam16;
		Var0.f_1 = fParam14;
		Var0.f_2 = fParam15;
		Var0.f_4 = fParam17;
		Var0.f_5 = iParam20;
		Var0.f_6 = iParam21;
		if (bParam8)
		{
			Var0 = 0;
		}
		else
		{
			Var0 = 1;
		}
		_0xca59808e51fd67c4(player_id(), &Var0);
	}
	else
	{
		task_follow_and_converse_with_ped(iParam0, iParam1, iParam4, iParam5, fParam6, fParam7, iParam9, fParam10, fParam11, fParam12, fParam13);
	}
	if (bParam19)
	{
		_set_ped_crouch_movement(iParam0, false, 0, false);
	}
	if (bParam22)
	{
		func_259(iParam0, iParam1, iParam18);
	}
}

void func_96(char* sParam0)
{
	StringCopy(sParam0, "walk_and_talk", 64);
	StringCopy(&(sParam0->f_8), "WALK_AND_TALK_REQUEST", 64);
	_0x6a4d224fc7643941(sParam0);
}

void func_97(var uParam0, var uParam1)
{
	if (_0xdd0b7c5ae58f721d(uParam0) && !_0x927b810e43e99932(uParam0))
	{
		_0xb8b207c34285e978(uParam0);
		uVar0[0] = uParam1;
		_0xfeb8646818294c75(uParam0, &uVar0);
	}
}

void func_98(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (is_entity_dead(iParam0))
	{
	}
	if (is_entity_dead(iParam1))
	{
	}
	if (bParam8)
	{
		set_ped_reset_flag(iParam0, 229, true);
	}
	if (is_ped_a_player(iParam0))
	{
		if (bParam3 && _get_ped_crouch_movement(iParam0))
		{
			_set_ped_crouch_movement(iParam0, false, 0, false);
		}
		func_260(bParam4, bParam5, bParam6, bParam7, bParam3, bParam9, bParam10);
		if (bParam2)
		{
			set_ped_reset_flag(iParam0, 188, true);
		}
	}
}

char* func_99()
{
	return "script@specialped@pdmos_nicholas_trimmins@ig@ig_9_mainstreetwalkntalk";
}

char* func_100()
{
	return "pbl_Enter01";
}

char* func_101()
{
	return "pbl_P1_Loop01";
}

char* func_102()
{
	return "pbl_P2_Loop01";
}

char* func_103()
{
	return "pbl_P3_Loop01";
}

char* func_104()
{
	return "pbl_P4_Loop01";
}

char* func_105()
{
	return "pbl_P4_Loop02";
}

char* func_106()
{
	return "pbl_P4_Loop03";
}

char* func_107()
{
	return "pbl_P4_Loop04";
}

char* func_108()
{
	return "pbl_P4_Loop05";
}

char* func_109()
{
	return "pbl_P4_Loop06";
}

char* func_110()
{
	return "pbl_P4_Loop07";
}

char* func_111()
{
	return "pbl_Base_Reset";
}

char* func_112()
{
	return "pbl_Exit01";
}

bool func_113(int iParam0, int iParam1)
{
	if (!func_9(iParam0->f_226, 0))
	{
		return false;
	}
	iVar0 = iParam1;
	iVar1 = func_233(iVar0);
	if (iVar0 != -1)
	{
		if (_is_ped_using_scenario_hash(iParam0->f_226, iVar1))
		{
			return true;
		}
	}
	else if (is_ped_using_any_scenario(iParam0->f_226))
	{
		return true;
	}
	if (!func_139(iParam0->f_226, 1647992574))
	{
		if (_does_volume_exist(iParam0->f_242))
		{
			_delete_volume(iParam0->f_242);
		}
		vVar2 = { func_91(iVar0) };
		_task_use_nearest_scenario_to_coord(iParam0->f_226, vVar2, 5f, -1, false, false, true, false);
		func_141(iParam0->f_226);
		set_ped_config_flag(iParam0->f_226, 448, false);
		set_ped_config_flag(iParam0->f_226, 153, false);
		stop_ped_speaking(iParam0->f_226, false);
		set_blocking_of_non_temporary_events(iParam0->f_226, false);
		set_ped_keep_task(iParam0->f_226, true);
	}
	return false;
}

char* func_114()
{
	return "pbl_Exit02";
}

char* func_115()
{
	return "pbl_P1_Loop01";
}

char* func_116()
{
	return "pbl_P2_Loop01";
}

char* func_117()
{
	return "pbl_P2_Loop02";
}

char* func_118()
{
	return "pbl_P2_Loop03";
}

char* func_119()
{
	return "pbl_P2_Loop04";
}

char* func_120()
{
	return "pbl_T04_Loop01";
}

char* func_121()
{
	return "pbl_T05_Loop01";
}

char* func_122()
{
	return "pbl_base_reset";
}

char* func_123()
{
	return "pbl_P1_Loop01";
}

char* func_124()
{
	return "pbl_P2_loop01";
}

char* func_125()
{
	return "pbl_P3_loop01";
}

char* func_126()
{
	return "pbl_P4_loop01";
}

char* func_127()
{
	return "pbl_Part01";
}

char* func_128()
{
	return "pbl_Part02";
}

char* func_129()
{
	return "pbl_IG5_Loop01";
}

void func_130(var uParam0, var uParam1, var uParam2)
{
	if (!_does_volume_exist(*uParam0))
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
		iVar3 = _0x886171a12f400b89(*uParam0, iVar0, 1);
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

void func_131(bool bParam0)
{
	iVar0 = func_261();
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

bool func_132(int iParam0, vector3 vParam1, var uParam4, var uParam5)
{
	if (is_entity_dead(Global_35) || is_entity_dead(iParam0))
	{
		return false;
	}
	disable_all_control_actions(0);
	disable_all_control_actions(1);
	enable_control_action(0, 648122183, true);
	enable_control_action(0, -163964935, true);
	enable_control_action(0, -668070958, true);
	enable_control_action(0, 1250966545, true);
	_0xc9caeaeec1256e54(724769646);
	func_262();
	func_263();
	set_current_ped_weapon(Global_35, -1569615261, false, 0, false, false);
	set_current_ped_weapon(Global_35, -1569615261, false, 1, false, false);
	task_swap_weapon(Global_35, 0, 1, 0, 0);
	if (!func_139(Global_35, 242628503))
	{
		if (func_62(Global_35, iParam0, 1, 1) < func_264(iParam0, vParam1, 1))
		{
			if (is_ped_facing_ped(Global_35, iParam0, 20f))
			{
				return true;
			}
			else
			{
				open_sequence_task(&iVar0);
				task_turn_ped_to_face_entity(0, iParam0, 0, -1082130432, -1082130432, -1082130432);
				close_sequence_task(iVar0);
				task_perform_sequence(Global_35, iVar0);
				set_ped_keep_task(Global_35, true);
				clear_sequence_task(&iVar0);
			}
		}
	}
	if (!func_265(Global_35, vParam1, (get_entity_heading(iParam0) - 180f), uParam4, 45f, 1))
	{
		if (!func_139(Global_35, 242628503))
		{
			open_sequence_task(&iVar0);
			task_go_straight_to_coord(0, vParam1, 1f, uParam5, (get_entity_heading(iParam0) - 180f), uParam4, 0);
			task_turn_ped_to_face_entity(0, iParam0, 0, -1082130432, -1082130432, -1082130432);
			close_sequence_task(iVar0);
			task_perform_sequence(Global_35, iVar0);
			set_ped_keep_task(Global_35, true);
			clear_sequence_task(&iVar0);
		}
	}
	else
	{
		return true;
	}
	return false;
}

char* func_133()
{
	return "pbl_Loop01";
}

void func_134(int* iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_246(iParam0, 4))
		{
			func_248(&(iParam0->f_6), 1, 1);
			func_76(iParam0, 4);
		}
	}
	else if (func_246(iParam0, 4))
	{
		func_247(iParam0, 4);
		func_76(iParam0, 14);
	}
}

char* func_135()
{
	return "pbl_Loop01";
}

bool func_136(int* iParam0, bool bParam1)
{
	if (!bParam1 || func_241(iParam0->f_6))
	{
		return func_246(iParam0, 4);
	}
	return false;
}

char* func_137()
{
	return "pbl_Loop01";
}

char* func_138()
{
	return "pbl_Loop01";
}

bool func_139(int iParam0, int iParam1)
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

float func_140(var uParam0)
{
	if (!func_11(uParam0))
	{
		return 0f;
	}
	if (func_174(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_175() - uParam0->f_1);
}

void func_141(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		task_clear_look_at(iParam0);
	}
}

void func_142(int iParam0, bool bParam1)
{
	if (is_entity_dead(iParam0))
	{
	}
	_0xaac0ee3b4999abb5(iParam0, 0);
	_0x9e66708b2b41f14a(iParam0, -1);
	if (bParam1)
	{
		clear_ped_secondary_task(iParam0);
	}
	if (is_ped_a_player(iParam0))
	{
		set_ped_config_flag(iParam0, 43, false);
	}
	else
	{
		_0x15f4732c357b1d6d(iParam0, player_id(), 6);
	}
}

void func_143(int iParam0, bool bParam1)
{
	if (is_entity_dead(iParam0))
	{
	}
	_0xaac0ee3b4999abb5(iParam0, 0);
	if (is_ped_a_player(iParam0))
	{
		if (_0xd1f6b912785bfd35(player_id()))
		{
			_0x908d4b72854c8f62(player_id());
		}
		set_ped_config_flag(iParam0, 43, false);
		_0xc67a4910425f11f1(player_id(), "WalkAndTalk");
	}
	_0x9e66708b2b41f14a(iParam0, -1);
	if (is_ped_a_player(iParam0))
	{
		_0xc4873b053054c04b(player_id(), 0, 1050253722, 1067030938, 0, 0, -1082130432, -1082130432);
	}
	else
	{
		_0x15f4732c357b1d6d(iParam0, player_id(), 6);
	}
	if (bParam1)
	{
		clear_ped_secondary_task(iParam0);
	}
}

void func_144(int iParam0, bool bParam1, bool bParam2)
{
	if (!is_entity_dead(iParam0))
	{
		if (is_entity_attached(iParam0))
		{
			detach_entity(iParam0, bParam1, bParam2);
		}
	}
}

bool func_145(int iParam0, char* sParam1, int iParam2, int iParam3, var uParam4, int iParam5)
{
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_3 = iParam2;
	Var0.f_6 = iParam5;
	Var0.f_1 = uParam4;
	Var0.f_4 = iParam3;
	return func_266(iParam0, &Var0);
}

void func_146(int iParam0, bool bParam1, bool bParam2)
{
	set_ped_config_flag(iParam0, 297, false);
	set_ped_config_flag(iParam0, 301, false);
	set_ped_config_flag(iParam0, 315, false);
	set_ped_config_flag(iParam0, 130, false);
	set_ped_config_flag(iParam0, 178, bParam2);
	set_ped_config_flag(iParam0, 330, false);
	set_ped_config_flag(iParam0, 317, bParam1);
}

void func_147(int iParam0)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	_0xa3db37edf9a74635(player_id(), iParam0, 7, 0, 1);
	_0xa3db37edf9a74635(player_id(), iParam0, 3, 2, 1);
	_0xa3db37edf9a74635(player_id(), iParam0, 4, 2, 1);
}

void func_148(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

void func_149(int iParam0)
{
	if (_does_anim_scene_exist(iParam0->f_250) && _is_anim_scene_started(iParam0->f_250, false))
	{
		reset_anim_scene(iParam0->f_250, 0);
	}
	if (_does_anim_scene_exist(iParam0->f_251) && _is_anim_scene_started(iParam0->f_251, false))
	{
		reset_anim_scene(iParam0->f_251, 0);
	}
	if (_does_anim_scene_exist(iParam0->f_252) && _is_anim_scene_started(iParam0->f_252, false))
	{
		reset_anim_scene(iParam0->f_252, 0);
	}
}

void func_150(var uParam0)
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
	if (func_11(&(uParam0->f_13)))
	{
		func_14(&(uParam0->f_13));
	}
}

void func_151(int iParam0)
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

void func_152(int iParam0, int iParam1)
{
	if (!func_41(iParam0))
	{
		return;
	}
	func_269(iParam0, iParam1);
}

void func_153(int iParam0, int iParam1)
{
	if (!func_41(iParam0))
	{
		return;
	}
	func_270(iParam0, iParam1);
}

void func_154(var uParam0, var uParam1, int iParam2, float fParam3, bool bParam4)
{
	if (bParam4)
	{
		if (!does_entity_exist(*uParam0))
		{
			return;
		}
		if (!is_shocking_event_in_sphere(iParam2, get_entity_coords(*uParam0, true, false), fParam3))
		{
			return;
		}
	}
	remove_shocking_event(*uParam1);
}

bool func_155(int iParam0, bool bParam1)
{
	if (func_217() != -1)
	{
		return false;
	}
	if (!func_226(iParam0))
	{
		return false;
	}
	if (!func_271(iParam0) && bParam1)
	{
		return false;
	}
	return func_227(iParam0, 1);
}

void func_156(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_226(iParam0))
	{
		return;
	}
	if (!func_227(iParam0, 1))
	{
		return;
	}
	if (!func_227(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_271(iParam0)) && func_272(iParam0))
	{
		return;
	}
	func_273(iParam0, 1);
	func_274(iParam0);
	if (func_229(func_228(iParam0)))
	{
		iVar0 = func_60(iParam0);
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
		func_273(iParam0, 16);
	}
	if (func_227(iParam0, 128) && !bParam3)
	{
		func_275(iParam0, 0);
	}
}

int func_157(var uParam0)
{
	if (_0x1ff441d7954f8709(*uParam0))
	{
		_0xd2b9c78537ed5759(*uParam0);
		return 0;
	}
	if (_0x1ff441d7954f8709(*uParam0))
	{
		return 0;
	}
	return 1;
}

void func_158(int iParam0)
{
	if (_does_anim_scene_exist(iParam0->f_250))
	{
		_delete_anim_scene(iParam0->f_250);
	}
	if (_does_anim_scene_exist(iParam0->f_251))
	{
		_delete_anim_scene(iParam0->f_251);
	}
	func_201(iParam0);
	if (!is_entity_dead(iParam0->f_226))
	{
		remove_entity_from_audio_mix_group(iParam0->f_226, 0f);
	}
	if (_does_volume_exist(iParam0->f_232))
	{
		func_276(iParam0->f_232);
		_delete_volume(iParam0->f_232);
	}
	if (_does_volume_exist(iParam0->f_235))
	{
		_0x74c2b3dc0b294102(iParam0->f_235);
		_0xa1cfb35069d23c23(iParam0->f_235);
		_delete_volume(iParam0->f_235);
	}
	if (_does_volume_exist(iParam0->f_233))
	{
		_0x74c2b3dc0b294102(iParam0->f_233);
		_0xa1cfb35069d23c23(iParam0->f_233);
		_delete_volume(iParam0->f_233);
	}
	if (_does_volume_exist(iParam0->f_236))
	{
		_delete_volume(iParam0->f_236);
	}
	if (_does_volume_exist(iParam0->f_241))
	{
		_delete_volume(iParam0->f_241);
	}
	if (_does_volume_exist(iParam0->f_239))
	{
		func_277(&(iParam0->f_644), iParam0->f_239, 0);
	}
	if (_does_volume_exist(iParam0->f_240))
	{
		_delete_volume(iParam0->f_240);
	}
	if (_does_volume_exist(iParam0->f_238))
	{
		_0x5a4e1a41e3a02ad0(iParam0->f_238, 6, 0);
		_delete_volume(iParam0->f_238);
	}
	if (_does_volume_exist(iParam0->f_242))
	{
		_delete_volume(iParam0->f_242);
	}
}

bool func_159()
{
	if (func_217() == -1)
	{
		if (_get_global_block_can_be_accessed(5))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if ((*Global_1392915)[iVar0]->f_1 != -1)
				{
					if (func_278((*Global_1392915)[iVar0]->f_4))
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

int func_160(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

bool func_161()
{
	return Global_1310750->f_16077 != 0;
}

bool func_162(var uParam0, int iParam1)
{
	return func_279(*uParam0, iParam1);
}

bool func_163(var uParam0, int iParam1, var uParam2)
{
	switch (*uParam2)
	{
		case 0:
			if (_does_anim_scene_exist(*uParam0))
			{
				return true;
			}
			else
			{
				*uParam2 = 1;
			}
			break;
		case 1:
			*uParam0 = _create_anim_scene(func_280(iParam1), 0, func_165(iParam1), false, true);
			*uParam2 = 2;
			break;
		case 2:
			if (_does_anim_scene_exist(*uParam0))
			{
				*uParam2 = 3;
			}
			break;
		case 3:
			*uParam2 = 0;
			return true;
	}
	return false;
}

bool func_164(var uParam0, var uParam1, int iParam2, int iParam3)
{
	switch (*uParam1)
	{
		case 0:
			if (!_is_anim_scene_loaded(*uParam0, true, false) && !_is_anim_scene_loading(*uParam0, true))
			{
				*uParam1 = 1;
			}
			else if (_is_anim_scene_loaded(*uParam0, true, false))
			{
				return true;
			}
			break;
		case 1:
			load_anim_scene(*uParam0);
			*uParam1 = 2;
			break;
		case 2:
			if (_is_anim_scene_loaded(*uParam0, true, false))
			{
				*uParam1 = 3;
			}
			break;
		case 3:
			func_281(uParam0, iParam2, iParam3);
			*uParam1 = 4;
			break;
		case 4:
			*uParam1 = 0;
			return true;
	}
	return false;
}

char* func_165(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_3();
		case 1:
			return func_6();
		case 2:
			return func_5();
		case 3:
			return func_133();
		case 4:
			return func_137();
		case 5:
			return "";
	}
	return "";
}

var func_166()
{
	return &Global_1899515;
}

bool func_167(int iParam0, int iParam1, float fParam2, bool bParam3)
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

void func_168(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_175() - fParam1);
	func_282(uParam0, 1);
	func_283(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_169(int iParam0)
{
	return iParam0 != -15;
}

void func_170(int iParam0)
{
	Global_40.f_11623[iParam0]->f_5++;
	Global_40.f_11623[iParam0]->f_2 = func_166();
}

bool func_171(int iParam0)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		set_ped_reset_flag(iParam0, 49, true);
		return true;
	}
	return false;
}

bool func_172(int iParam0, int iParam1, int iParam2, bool bParam3)
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

bool func_173(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_174(var uParam0)
{
	return func_173(*uParam0, 2);
}

float func_175()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

bool func_176(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_177(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

bool func_178(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_278((*Global_1835011)[iParam0]->f_1);
}

bool func_179(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_284((*Global_1835011)[iParam0]->f_1);
}

bool func_180(int iParam0)
{
	iVar0 = func_285();
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

int func_181(var uParam0, var uParam1, float fParam2, var uParam3)
{
	if (!does_entity_exist(*uParam0))
	{
		return 0;
	}
	vVar0 = { get_entity_forward_vector(*uParam0) };
	vVar3 = { get_entity_coords(*uParam0, true, false) + vVar0 * Vector(fParam2, fParam2, fParam2) };
	if (func_286(uParam1, vVar3, uParam3))
	{
		return 1;
	}
	return 0;
}

int func_182(var uParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5)
{
	if (!does_entity_exist(*uParam0))
	{
		if (_does_volume_exist(*uParam1))
		{
			_0x74c2b3dc0b294102(*uParam1);
			_0xa1cfb35069d23c23(*uParam1);
			_delete_volume(*uParam1);
		}
		return 0;
	}
	vVar2 = { get_entity_forward_vector(*uParam0) };
	vVar5 = { get_entity_coords(*uParam0, true, false) + vVar2 * Vector(fParam3, fParam3, fParam3) };
	if (!func_287(uParam2, &iVar1, vVar5, fParam3, fParam4))
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
		vVar8 = { get_entity_coords(*uParam0, true, false) };
		if (!func_288(iVar1, 0))
		{
			func_289(&iVar1, vVar8, 1083179008);
		}
		return 1;
	}
	return 0;
}

int func_183(var uParam0)
{
	if (!func_11(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_174(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_290() - round((uParam0->f_1 * 1000f)));
}

bool func_184()
{
	return Global_1392040->f_6;
}

bool func_185()
{
	if (Global_1914319->f_18941.f_17)
	{
		return true;
	}
	return false;
}

int func_186(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			iVar0 = -1555421003;
			break;
		case 1:
			iVar0 = -1543059912;
			break;
		case 2:
			iVar0 = -781832595;
			break;
		case 3:
			iVar0 = -1543059912;
			break;
	}
	return iVar0;
}

void func_187(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_188(int iParam0)
{
	if (iParam0->f_1 == 2)
	{
		return 63;
	}
	else if (iParam0->f_1 == 0)
	{
		return 60;
	}
	else if (iParam0->f_1 == 3)
	{
		return 66;
	}
	return -1;
}

bool func_189(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	iVar0 = get_frame_count();
	if (iVar0 > uParam2->f_5)
	{
		func_291(uParam2, 1, iVar0);
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
			if (func_292(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_293(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_294(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_293(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (func_295(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_293(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_296(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_293(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_26 && func_297(player_id(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_293(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_298(uParam2, 1065353216))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_299(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_293(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_300(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_293(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_301(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_293(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (func_301(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_293(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_302(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_293(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || uParam2->f_12 < 20f)
			{
				if (func_303(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_293(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_304(uParam2, 4000))
				{
					if ((func_305(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_306(uParam2, iParam0)) && func_307(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_293(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_305(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_306(uParam2, iParam0)) && func_307(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_293(iParam0, uParam2, *uParam3);
					return true;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_308(iParam0, Global_1935630->f_41))
							{
								func_309();
								*uParam3 = 2;
								func_293(iParam0, uParam2, *uParam3);
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
						if (func_308(iParam0, Global_1935630->f_41))
						{
							func_309();
							*uParam3 = 2;
							func_293(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_310(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_290() - uParam2->f_9) < 2000))
				{
					if (is_ped_ragdoll(iParam0))
					{
						func_309();
						*uParam3 = 2;
						func_293(iParam0, uParam2, *uParam3);
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
						if (func_308(iParam0, Global_1935630->f_42))
						{
							func_309();
							*uParam3 = 2;
							func_293(iParam0, uParam2, *uParam3);
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
				*uParam3 = 1024;
				func_293(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_313(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_293(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_314(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_293(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_315(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_293(iParam0, uParam2, *uParam3);
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
						*uParam3 = 512;
						func_293(iParam0, uParam2, *uParam3);
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
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_293(iParam0, uParam2, *uParam3);
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
				*uParam3 = 1;
				func_293(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

void func_190(int* iParam0)
{
	func_320(iParam0, &(iParam0->f_21));
}

bool func_191()
{
	if (_is_ped_carrying(Global_35) || func_321())
	{
		return true;
	}
	return false;
}

bool func_192(var uParam0, bool bParam1, bool bParam2)
{
	if (!bParam1 || func_241(uParam0->f_6))
	{
		if (is_bit_set(*uParam0, 0))
		{
			if (!bParam2)
			{
				return true;
			}
			if (func_322(uParam0->f_6, bParam1))
			{
				return true;
			}
		}
	}
	return false;
}

int func_193(var uParam0, int* iParam1, float fParam2, var uParam3, int iParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	iVar0 = iParam9;
	func_323(&iVar0);
	if (func_279(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_197(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_279(iVar0, 134217728))
	{
		func_324(iParam1, uParam3, uParam0);
	}
	if (!*iParam4)
	{
		if (!is_bit_set(*iParam1, 25))
		{
			if (is_bit_set(*iParam1, 24))
			{
				if (!func_325(558))
				{
					func_326(558, 0);
				}
				set_bit(iParam1, 24);
				set_bit(iParam1, 25);
			}
		}
	}
	return iVar1;
}

void func_194(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (!does_entity_exist(*uParam1))
	{
		return;
	}
	if (func_207(*uParam2, iParam3))
	{
		return;
	}
	Global_40.f_11623[iParam0]->f_6++;
	if (Global_40.f_11623[iParam0]->f_6 == 1 && func_328(func_327(-1342635612)) < 5)
	{
		func_329(func_327(-1342635612), 1);
	}
	Global_40.f_11623[iParam0]->f_3 = func_166();
	func_187(uParam2, iParam3);
	(*Global_1396257)[iParam0]->f_631 = 1;
}

int func_195(int iParam0)
{
	switch (iParam0->f_1)
	{
		case 2:
			iVar0 = 1;
			break;
		case 0:
			iVar0 = 2;
			break;
		case 3:
			iVar0 = 12;
			break;
	}
	return iVar0;
}

void func_196(int iParam0, int iParam1)
{
	if (&Global_40.f_11623[iParam0] != iParam1)
	{
		Global_40.f_11623[iParam0] = iParam1;
	}
}

int func_197(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	if (!is_entity_dead(*uParam0))
	{
		func_323(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !_does_volume_exist(iParam9)) || is_entity_in_volume(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (is_ambient_speech_playing(*uParam0) || is_scripted_speech_playing(*uParam0));
		fVar8 = func_330(fParam12 >= 0f, fParam12, vdist(Global_36, get_entity_coords(*uParam0, true, false)));
		if (!iParam8 & 2097152 != 0)
		{
			set_ped_reset_flag(*uParam0, 184, true);
		}
		if (iParam8 & 8388608 != 0)
		{
			set_ped_reset_flag(*uParam0, 281, true);
		}
		if (bVar5)
		{
			bVar1 = (is_ambient_speech_playing(Global_35) || is_scripted_speech_playing(Global_35));
		}
		if (bVar7 || (bVar5 && bVar1))
		{
			func_92(&(iParam1->f_13));
		}
		if (func_331(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_332(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_197(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_333(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!get_ped_config_flag(*uParam0, 317, true))
						{
							func_334(*uParam0, 1, 1);
						}
					}
					else if (func_335(iParam1, 22))
					{
						func_334(*uParam0, 0, 1);
					}
				}
				if (func_336(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_337(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_338(iParam8);
					if (func_339(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (is_bit_set(uParam3[iParam1->f_1], 20))
								{
									func_340(uParam3);
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
					func_341(iParam1, uParam3, fVar8);
					if (func_342(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (is_bit_set(*iParam1, 1))
					{
						func_343(uParam3, 0, 0, 1, 1);
						clear_bit(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_344(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_336(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_345(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_339(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_337(uParam0, func_336(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_338(iParam8);
				}
				else if (is_bit_set(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_343(uParam3, 0, 0, 1, 1);
					}
					func_346(iParam1, 1);
				}
				func_341(iParam1, uParam3, fVar8);
				if (func_344(uParam0, iParam1, fParam4, bVar6))
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
			func_320(iParam1, uParam3);
			set_bit(iParam1, 3);
		}
	}
	return -1;
}

void func_198(int iParam0)
{
	func_44(&(iParam0->f_253), 8);
	func_44(&(iParam0->f_253), 16);
	func_44(&(iParam0->f_253), 32);
	func_44(&(iParam0->f_253), 64);
}

bool func_199(int iParam0)
{
	iVar0 = iParam0->f_1;
	switch (iVar0)
	{
		case 0:
			iVar1 = 0;
			while (iVar1 < iParam0->f_257)
			{
				if (func_349(iParam0->f_214[iVar1], func_347(iVar1), func_348(iVar1), 20000, 1f, 360f))
				{
					iVar2++;
					iParam0->f_219[iVar1] = _find_closest_active_scenario_point_of_type(func_347(iVar1), func_350(iVar1), 0.25f, 0, false);
					_set_scenario_point_flag(&(iParam0->f_219[iVar1]), 16, true);
					_task_use_scenario_point(&(iParam0->f_214[iVar1]), &(iParam0->f_219[iVar1]), 0, -1, false, true, func_350(iVar1), false, -1f, false);
				}
				else
				{
					iVar2 = 0;
				}
				iVar1++;
			}
			break;
		case 2:
			iVar1 = 0;
			while (iVar1 < iParam0->f_257)
			{
				if (func_349(iParam0->f_214[iVar1], func_351(iVar1), func_352(iVar1), 20000, 1056964608, 1092616192))
				{
					iVar2++;
					_task_start_scenario_in_place(&(iParam0->f_214[iVar1]), func_353(iVar1), -1, true, 0, -1f, false);
				}
				else
				{
					iVar2 = 0;
				}
				iVar1++;
			}
			break;
		case 3:
			iVar1 = 0;
			while (iVar1 < iParam0->f_257)
			{
				if (func_349(iParam0->f_214[iVar1], func_354(iVar1), func_355(iVar1), 20000, 1056964608, 1092616192))
				{
					iVar2++;
					_task_start_scenario_in_place(&(iParam0->f_214[iVar1]), func_356(iVar1), -1, true, 0, -1f, false);
				}
				else
				{
					iVar2 = 0;
				}
				iVar1++;
			}
			break;
	}
	if (iVar2 == iParam0->f_257)
	{
		return true;
	}
	return false;
}

bool func_200(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < iParam0->f_257)
	{
		if (func_9(&(iParam0->f_214[iVar0]), 0))
		{
			if (!is_ped_fleeing(&(iParam0->f_214[iVar0])))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

void func_201(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (does_entity_exist(&(iParam0->f_214[iVar0])) && !is_entity_dead(&(iParam0->f_214[iVar0])))
		{
			if (ped_has_use_scenario_task(&(iParam0->f_214[iVar0])))
			{
				clear_ped_tasks(&(iParam0->f_214[iVar0]), 1, 0);
			}
			func_141(&(iParam0->f_214[iVar0]));
			set_blocking_of_non_temporary_events(&(iParam0->f_214[iVar0]), false);
			_0x39a2fc5af55a52b1(&(iParam0->f_214[iVar0]), -1);
			set_ped_as_no_longer_needed(iParam0->f_214[iVar0]);
		}
		iVar0++;
	}
}

bool func_202(int iParam0)
{
	if (func_9(iParam0->f_226, 0))
	{
		if (_does_anim_scene_exist(iParam0->f_250))
		{
			if (((((((((_0x1f0e401031e20146(iParam0->f_250, func_100()) || _0x1f0e401031e20146(iParam0->f_250, func_104())) || _0x1f0e401031e20146(iParam0->f_250, func_105())) || _0x1f0e401031e20146(iParam0->f_250, func_106())) || _0x1f0e401031e20146(iParam0->f_250, func_107())) || _0x1f0e401031e20146(iParam0->f_250, func_108())) || _0x1f0e401031e20146(iParam0->f_250, func_109())) || _0x1f0e401031e20146(iParam0->f_250, func_110())) || _0x1f0e401031e20146(iParam0->f_250, func_112())) || _0x1f0e401031e20146(iParam0->f_250, func_114()))
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
	return true;
}

int func_203(int iParam0, int iParam1, int iParam2)
{
	iVar0 = get_random_int_in_range(iParam0, iParam1);
	if (iVar0 == iParam2)
	{
		if (func_357())
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
			iVar0 = func_358(func_357(), iParam0, (iParam1 - 1));
		}
	}
	return iVar0;
}

void func_204(int iParam0)
{
	if (func_34(iParam0->f_253, 1048576))
	{
		_0xc67a4910425f11f1(player_id(), "MayorConvo");
		_0x3946fc742ac305cd(player_id(), iParam0->f_226, "SPECIAL_PED_LIGHTWEIGHT_1_1", 0f, 0f, 0f, 0, "MayorBubble");
		func_44(&(iParam0->f_253), 1048576);
	}
}

bool func_205(var uParam0, int iParam1)
{
	if (is_scripted_speech_playing(*uParam0))
	{
		force_sonar_blips_this_frame();
		allow_sonar_blips(true);
		_trigger_sonar_blip_2(iParam1, *uParam0);
		return true;
	}
	return false;
}

char* func_206(int iParam0)
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

bool func_207(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_208(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_209(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, float fParam9)
{
	if (!bParam8 && network_is_game_in_progress())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_359(vParam0))
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
		if (func_360(vParam0))
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
	func_361(iVar0, bParam8);
	return iVar0;
}

void func_210(int iParam0, bool bParam1)
{
	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(iParam0, iVar0);
}

int func_211()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_212(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || shift_left(iParam0 & 1023, 5)) || shift_left(iParam1 & 16383, 15));
}

int func_213(int iParam0)
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

int func_214(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_362(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_211())
	{
		return -1;
	}
	iVar0 = func_212(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_363(iVar1, 0);
	func_364(iVar1, 0);
	func_269(iVar1, 0);
	func_270(iVar1, 0);
	func_365(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_366(iVar1, iParam4);
	}
	return iVar1;
}

int func_215(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_3;
	}
	return 0;
}

int func_216(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_4;
	}
	return 0;
}

int func_217()
{
	return Global_1572887->f_12;
}

bool func_218(var uParam0, int iParam1, char* sParam2)
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

void func_219(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_224(&(uParam0->f_1), 256);
	}
	else
	{
		func_225(&(uParam0->f_1), 256);
	}
}

void func_220(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_225(uParam0, 16);
	}
	else
	{
		func_224(uParam0, 67108864);
		func_224(uParam0, 16);
	}
}

void func_221(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_224(&(uParam0->f_1), 128);
	}
	else
	{
		func_225(&(uParam0->f_1), 128);
	}
}

void func_222(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_225(uParam0, 256);
	}
	else
	{
		func_224(uParam0, 256);
	}
}

void func_223(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_225(uParam0, 268435456);
	}
	else
	{
		func_224(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_225(uParam0, 1073741824);
	}
	else
	{
		func_224(uParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_225(uParam0, 536870912);
	}
	else
	{
		func_224(uParam0, 536870912);
	}
}

void func_224(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_225(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_226(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

bool func_227(int iParam0, int iParam1)
{
	if (func_217() != -1)
	{
		return false;
	}
	if (!func_226(iParam0))
	{
		return false;
	}
	return (Global_24887[iParam0] && iParam1) != 0;
}

int func_228(int iParam0)
{
	if (!func_226(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0];
}

bool func_229(int iParam0)
{
	return iParam0 != 0;
}

int func_230(int iParam0)
{
	iVar0 = func_60(iParam0);
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

int func_231(int iParam0)
{
	if (!func_226(iParam0))
	{
		return 0;
	}
	return _0xa00df706c60173d1(Global_1895087[iParam0]);
}

float func_232(int iParam0)
{
	fVar0 = 0f;
	switch (iParam0)
	{
		case 0:
			fVar0 = 179.6551f;
			break;
	}
	return fVar0;
}

int func_233(int iParam0)
{
	iVar0 = -781832595;
	switch (iParam0)
	{
		case 0:
			iVar0 = -1555421003;
			break;
		case 1:
			iVar0 = -1543059912;
			break;
		case 2:
			iVar0 = -781832595;
			break;
		case 3:
			iVar0 = -1543059912;
			break;
	}
	return iVar0;
}

int func_234(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (!func_367(iParam0, 1))
	{
		return 0;
	}
	if (func_229(func_228(iParam0)))
	{
		iVar1 = func_60(iParam0);
		if (!_0x800df3fc913355f3(iVar1))
		{
			return 0;
		}
		if (bParam1)
		{
			if (_0xeb98b38ca60742d7(iVar1))
			{
				_0x49a8c2cd97815215(iVar1);
			}
		}
		_0x6759bee6762e140b(iVar1);
		iVar0 = _0x0cadc3a977997472(iVar1, 0);
		if (!does_entity_exist(iVar0))
		{
			return 0;
		}
	}
	if ((bParam4 && !func_271(iParam0)) && !is_entity_dead(iVar0))
	{
		set_ped_config_flag(iVar0, 171, bParam5);
		set_entity_as_mission_entity(iVar0, true, true);
	}
	func_368(iParam0, 1);
	func_369(iParam0);
	if (bParam3)
	{
		func_368(iParam0, 16);
	}
	if (!bParam2)
	{
	}
	return iVar0;
}

int func_235(int iParam0, int iParam1)
{
	if (*iParam0 >= 3 && *iParam0 <= 7)
	{
		return func_370(iParam1);
	}
	if (*iParam0 >= 8 && *iParam0 <= 12)
	{
		return func_371(iParam1);
	}
	if (*iParam0 >= 14 && *iParam0 <= 18)
	{
		return func_372(iParam1);
	}
	return 3;
}

Vector3 func_236(int iParam0, int iParam1)
{
	if (*iParam0 >= 3 && *iParam0 <= 7)
	{
		return func_347(iParam1);
	}
	if (*iParam0 >= 8 && *iParam0 <= 12)
	{
		return func_351(iParam1);
	}
	if (*iParam0 >= 14 && *iParam0 <= 18)
	{
		return func_354(iParam1);
	}
	return 0f, 0f, 0f;
}

float func_237(int iParam0, int iParam1)
{
	if (*iParam0 >= 3 && *iParam0 <= 7)
	{
		return func_348(iParam1);
	}
	if (*iParam0 >= 8 && *iParam0 <= 12)
	{
		return func_352(iParam1);
	}
	if (*iParam0 >= 14 && *iParam0 <= 18)
	{
		return func_355(iParam1);
	}
	return 0f;
}

int func_238(int iParam0, int iParam1)
{
	if (*iParam0 >= 3 && *iParam0 <= 7)
	{
		return func_373(iParam1);
	}
	if (*iParam0 >= 8 && *iParam0 <= 12)
	{
		return func_374(iParam1);
	}
	if (*iParam0 >= 14 && *iParam0 <= 18)
	{
		return func_375(iParam1);
	}
	return 1;
}

bool func_239(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	if (!does_entity_exist(*uParam0))
	{
		wait(0);
		if (!bParam7)
		{
			*uParam0 = func_376(iParam1, vParam2, fParam5, 0, 1, bParam6, 1, 1, 1, 0, 0, 0, 0);
		}
		else
		{
			*uParam0 = func_376(iParam1, vParam2, fParam5, 0, 1, bParam6, 1, 1, bParam8, 1, 1, 0, 0);
		}
		return false;
	}
	if (!does_entity_exist(*uParam0))
	{
		return false;
	}
	if (_0xa0bc8faed8cfeb3c(*uParam0))
	{
		return true;
	}
	return false;
}

bool func_240()
{
	if (func_217() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 225514697)
	{
		return true;
	}
	return false;
}

bool func_241(int iParam0)
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

void func_242(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3 && !func_241(iParam0))
	{
		return;
	}
	iVar0 = func_377(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(2, sParam1, sParam2));
}

void func_243(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 && !func_241(iParam0))
	{
		return;
	}
	iVar0 = func_377(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, sParam1);
}

void func_244(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_241(iParam0))
	{
		return;
	}
	iVar0 = func_377(iParam0);
	if (bParam1)
	{
		func_378(iParam0, 4);
		func_379(iVar0, 1);
		func_380(iVar0, 1);
	}
	else
	{
		func_381(iParam0, 4);
		func_380(iVar0, 0);
	}
}

void func_245(int* iParam0, char* sParam1)
{
	if (func_241(iParam0->f_6) && !is_string_null_or_empty(sParam1))
	{
		func_243(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_247(iParam0, 1);
}

bool func_246(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

void func_247(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

void func_248(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_241(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_377(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_382(iVar0);
	*uParam0 = 0;
}

bool func_249(int iParam0, int iParam1)
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

bool func_250(int iParam0, int iParam1)
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

bool func_251(int iParam0, int iParam1)
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
	if (!func_249(iParam0, iVar0))
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

void func_252(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

void func_253()
{
	if (!func_383(&Global_1327479))
	{
		return;
	}
	if (does_script_exist(&((*Global_1310750)[&Global_1327479]->f_40)))
	{
		if (has_script_loaded(&((*Global_1310750)[&Global_1327479]->f_40)))
		{
			set_script_as_no_longer_needed(&((*Global_1310750)[&Global_1327479]->f_40));
		}
	}
	func_384(0);
	Global_1327479 = -1;
	Global_1310750->f_16075 = 0;
	Global_1310750->f_16076 = 0;
	Global_1310750->f_16103 = { 0f, 0f, 0f };
}

void func_254(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (bParam1)
	{
	}
	if (func_385() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0];
		if (((func_383(iVar1) && !func_386(iVar1, iParam2)) && (!bParam3 || !func_387(iVar1))) && (!bParam4 || !func_388(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_389(iVar0);
			}
		}
		iVar0++;
	}
}

void func_255(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = get_game_timer();
	func_390(iParam0, iParam1, bParam2);
}

void func_256(int iParam0, int iParam1)
{
	iParam0->f_640 = iParam1;
}

void func_257(int iParam0)
{
	if (func_155(483, 0))
	{
		func_156(483, 0, 1, 0, 0);
	}
	if (_does_anim_scene_exist(iParam0->f_250))
	{
		set_anim_scene_bool(iParam0->f_250, "internal_loop", true, false);
		set_anim_scene_bool(iParam0->f_250, "internal_loop_end", true, false);
	}
	if (_does_anim_scene_exist(iParam0->f_251))
	{
		set_anim_scene_bool(iParam0->f_251, "internal_loop", true, false);
		set_anim_scene_bool(iParam0->f_251, "internal_loop_end", true, false);
	}
	if (!is_entity_dead(iParam0->f_226))
	{
		remove_entity_from_audio_mix_group(iParam0->f_226, 0f);
		_0x39a2fc5af55a52b1(iParam0->f_226, -1);
		set_ped_as_no_longer_needed(&(iParam0->f_226));
	}
	func_158(iParam0);
}

bool func_258(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_259(int iParam0, int iParam1, int iParam2)
{
	if (is_entity_dead(iParam0))
	{
	}
	if (iParam2 == -1)
	{
		if (!is_ped_a_player(iParam1))
		{
			iParam2 = 0;
		}
		else
		{
			iParam2 = 1;
		}
	}
	_0xaac0ee3b4999abb5(iParam0, iParam1);
	_0xf634e2892220ef34(iParam0, iParam2);
}

void func_260(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam5)
	{
		disable_control_action(0, -640622144, false);
	}
	disable_control_action(0, -562475458, false);
	disable_control_action(0, -128997553, false);
	disable_control_action(0, 130948705, false);
	if (is_ped_on_mount(Global_35))
	{
		disable_control_action(0, 1632043089, false);
		disable_control_action(0, 1623727326, false);
		disable_control_action(0, -922478227, false);
	}
	if (bParam0)
	{
		disable_control_action(0, -1404316431, false);
		disable_control_action(0, 1287709438, false);
		disable_control_action(0, -1304887797, false);
	}
	if (bParam3)
	{
		disable_control_action(0, -1292666904, false);
		disable_control_action(0, 578288361, false);
		if (is_ped_on_mount(Global_35))
		{
			disable_control_action(0, 440314811, false);
			disable_control_action(0, 2028806450, false);
			disable_control_action(0, 371916472, false);
		}
	}
	if (bParam4)
	{
		disable_control_action(0, -620139643, false);
	}
	func_391(0);
	if (bParam1)
	{
		disable_control_action(0, -822242784, false);
	}
	if (!is_ped_injured(Global_35))
	{
		if (bParam2)
		{
			set_ped_reset_flag(Global_35, 129, true);
			set_ped_reset_flag(Global_35, 189, true);
		}
		if (bParam6)
		{
			if (!get_ped_config_flag(Global_35, 43, true))
			{
				set_ped_config_flag(Global_35, 43, true);
			}
		}
	}
}

int func_261()
{
	return Global_1900383->f_393;
}

void func_262()
{
	_disable_first_person_cam_this_frame_2();
	_0x8370d34bd2e60b73();
	_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
	if (Global_1935689->f_1)
	{
		func_392(0);
	}
}

void func_263()
{
	Global_1905944->f_5695 = 1;
}

float func_264(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

bool func_265(int iParam0, vector3 vParam1, float fParam4, float fParam5, float fParam6, bool bParam7)
{
	fVar0 = func_393(get_entity_heading(iParam0));
	fParam4 = func_393(fParam4);
	if (is_entity_at_coord(iParam0, vParam1, fParam5, fParam5, 2f, false, bParam7, 0) && absf((fVar0 - fParam4)) <= fParam6)
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
		func_394(&Global_0, 8);
	}
	if (!func_395() || func_217() != -1)
	{
		return;
	}
	func_394(&Global_0, 1);
}

void func_268()
{
	_0x9428447ded71fc7e("special_ped_scenes");
}

void func_269(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_3 = iParam1;
}

void func_270(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_4 = iParam1;
}

bool func_271(int iParam0)
{
	if (!func_226(iParam0))
	{
		return false;
	}
	return (*Global_1895087)[iParam0]->f_2 == get_id_of_this_thread();
}

bool func_272(int iParam0)
{
	if (!func_226(iParam0))
	{
		return false;
	}
	return _does_thread_exist((*Global_1895087)[iParam0]->f_2);
}

void func_273(int iParam0, int iParam1)
{
	if (func_217() != -1)
	{
		return;
	}
	if (!func_226(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (&Global_24887[iParam0] - (Global_24887[iParam0] && iParam1));
}

void func_274(int iParam0)
{
	if (!func_226(iParam0))
	{
		return;
	}
	iVar0 = func_230(iParam0);
	if (does_entity_exist(iVar0))
	{
		if (does_entity_belong_to_this_script(iVar0, false))
		{
			set_ped_as_no_longer_needed(&iVar0);
		}
	}
	(*Global_1895087)[iParam0]->f_2 = 0;
}

int func_275(int iParam0, bool bParam1)
{
	if (!func_226(iParam0))
	{
		return 0;
	}
	if (!func_227(iParam0, 2))
	{
		return 0;
	}
	if (func_228(iParam0) == 0)
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_60(iParam0)))
	{
		return 1;
	}
	if (func_227(iParam0, 1) && !bParam1)
	{
		func_368(iParam0, 128);
		return 1;
	}
	func_273(iParam0, 129);
	func_274(iParam0);
	_0xfc77c5b44d5ff7c0(func_60(iParam0));
	func_396(iParam0, 0);
	return 1;
}

void func_276(int iParam0)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	func_397(vVar0, 0);
}

void func_277(var uParam0, int iParam1, bool bParam2)
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

bool func_278(int iParam0)
{
	iVar0 = func_398(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_279(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

char* func_280(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_399();
		case 1:
			return func_400();
		case 2:
			return func_401();
		case 3:
			return func_402();
		case 4:
			return func_403();
		case 5:
			return func_99();
	}
	return "";
}

void func_281(var uParam0, int iParam1, int iParam2)
{
	set_anim_scene_bool(*uParam0, "internal_loop", false, false);
	set_anim_scene_bool(*uParam0, "internal_loop_end", false, false);
	switch (iParam1)
	{
		case 0:
			set_anim_scene_origin(*uParam0, func_404(), func_405(), 2);
			set_anim_scene_entity(*uParam0, "cs_nicholastimmins", iParam2->f_226, 0);
			set_anim_scene_entity(*uParam0, "p_chaireagle01x", iParam2->f_228, 0);
			set_anim_scene_entity(*uParam0, "p_cigar02x", iParam2->f_229, 0);
			set_anim_scene_entity(*uParam0, "p_matchstick01x", iParam2->f_230, 0);
			break;
		case 1:
			set_anim_scene_origin(*uParam0, func_406(), func_407(), 2);
			set_anim_scene_entity(*uParam0, "cs_nicholastimmins", iParam2->f_226, 0);
			set_anim_scene_entity(*uParam0, "P_CS_NEWSPAPER_02X", iParam2->f_231, 0);
			break;
		case 2:
			set_anim_scene_origin(*uParam0, func_408(), func_409(), 2);
			set_anim_scene_entity(*uParam0, "cs_nicholastimmins", iParam2->f_226, 0);
			break;
		case 3:
			set_anim_scene_origin(*uParam0, func_410(), func_411(), 2);
			set_anim_scene_entity(*uParam0, "cs_nicholastimmins", iParam2->f_226, 0);
			set_anim_scene_entity(*uParam0, "p_chaireagle_01x", iParam2->f_228, 0);
			set_anim_scene_entity(*uParam0, "p_cigar02x", iParam2->f_229, 0);
			if (!func_45())
			{
				set_anim_scene_bool(*uParam0, "b_PlayerArthur", true, false);
				set_anim_scene_entity(*uParam0, "ARTHUR", Global_35, 0);
			}
			else
			{
				set_anim_scene_entity(*uParam0, "JOHN", Global_35, 0);
			}
			break;
		case 4:
			set_anim_scene_origin(*uParam0, func_412(), func_413(), 2);
			set_anim_scene_entity(*uParam0, "cs_nicholastimmins", iParam2->f_226, 0);
			set_anim_scene_entity(*uParam0, "P_CS_NEWSPAPER_02X", iParam2->f_231, 0);
			if (!func_45())
			{
				set_anim_scene_bool(*uParam0, "b_PlayerArthur", true, false);
				set_anim_scene_entity(*uParam0, "ARTHUR", Global_35, 0);
			}
			else
			{
				set_anim_scene_entity(*uParam0, "JOHN", Global_35, 0);
			}
			break;
		case 5:
			set_anim_scene_entity(*uParam0, "CS_NicholasTimmins", iParam2->f_226, 0);
			if (!func_45())
			{
				set_anim_scene_bool(*uParam0, "b_PlayerArthur", true, false);
				set_anim_scene_entity(*uParam0, "ARTHUR", Global_35, 0);
			}
			else
			{
				set_anim_scene_entity(*uParam0, "JOHN", Global_35, 0);
			}
			break;
	}
}

void func_282(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_283(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_284(int iParam0)
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
		iVar0 = func_414(iParam0);
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

var func_285()
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

bool func_286(var uParam0, vector3 vParam1, float fParam4)
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

bool func_287(var uParam0, int iParam1, vector3 vParam2, float fParam5, float fParam6)
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
					if (func_415(Global_35, *iParam1, 0))
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

bool func_288(int iParam0, bool bParam1)
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

void func_289(int iParam0, vector3 vParam1, int iParam4)
{
	if (!func_139(*iParam0, 518218985))
	{
		clear_ped_tasks(*iParam0, 1, 0);
		_task_smart_flee_style_coord(*iParam0, vParam1, 6, 0, iParam4, -1, 0);
	}
}

int func_290()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

void func_291(var uParam0, bool bParam1, int iParam2)
{
	func_416(iParam2);
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
		uParam0->f_13 = func_417(0);
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
							func_225(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_418(1))
						{
							func_225(uParam0, 33554432);
						}
					}
				}
				else if (!is_ped_planting_bomb(Global_35) && (!func_418(1) || *uParam0 & 8192 != 0))
				{
					func_224(uParam0, 33554432);
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
			if (func_419(uParam0))
			{
				uParam0->f_15 = func_290();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_290() - uParam0->f_15) > 500)
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
	func_420(uParam0);
}

bool func_292(int iParam0, var uParam1)
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
			if (!func_421(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_422(iParam0, iVar2) <= func_423(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_293(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_424(iParam2, 1, 1, 1, 0))
	{
		func_225(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_425(uParam1, 1);
	func_426();
}

bool func_294(int iParam0, var uParam1)
{
	fVar0 = 85f;
	if (!is_entity_dead(iParam0))
	{
		if (func_427(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_428(uParam1);
			if (func_429(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = get_game_timer();
				}
				iVar2 = (get_game_timer() - uParam1->f_2);
				iVar3 = func_430(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_425(uParam1, 1);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_425(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_295(int iParam0, int iParam1, var uParam2)
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
	if (func_431(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_428(uParam2);
		if (func_429(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = get_game_timer();
			}
			if (uParam2->f_2 != 0)
			{
				if (get_game_timer() - uParam2->f_2) > func_430(uParam2)
				{
					func_425(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_296(int iParam0, var uParam1)
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
	if (func_421(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = get_game_timer();
		}
		else if (get_game_timer() - uParam1->f_3) > func_430(uParam1)
		{
			fVar3 = func_428(uParam1);
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

int func_297(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_432(bParam1, bParam2, bParam3);
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

bool func_298(var uParam0, float fParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_290();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_299(var uParam0, int iParam1, var uParam2)
{
	if (!is_entity_dead(iParam1))
	{
		if (!network_is_in_session())
		{
			fVar0 = func_433(uParam2);
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
			if (func_307(uParam2, iParam1))
			{
				func_425(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_300(var uParam0, int iParam1, var uParam2)
{
	if (uParam2->f_12 < IntToFloat(func_434(uParam2)))
	{
		if ((is_weapon_valid(Global_1935630->f_46) && !_0x5809dbca0a37c82b(Global_1935630->f_46)) || get_current_ped_vehicle_weapon(Global_35, &uVar0))
		{
			if (func_307(uParam2, iParam1))
			{
				if (_0x285d36c5c72b0569(uParam0) <= 1f)
				{
					func_425(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_301(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vVar0 = { get_entity_coords(iParam1, false, true) };
	iVar3 = func_435(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, uParam2->f_22))
				{
					func_425(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (is_shocking_event_in_sphere(956330317, vVar0, uParam2->f_27))
				{
					func_425(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_26, &vVar4, 0, 0);
					if (func_436(iParam1, vVar0, vVar4))
					{
						func_425(uParam2, 1);
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
					func_425(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_26, &vVar7, 0, 0);
					if (func_436(iParam1, vVar0, vVar7))
					{
						func_425(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_302(int iParam0, var uParam1)
{
	vVar9 = { get_entity_coords(iParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_421(iParam0, uParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_437(&(Global_1935630->f_34[iVar0]));
			fVar1 = vdist(get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_438(&(Global_1935630->f_34[iVar0])))
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
			if (func_439(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_440(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_441(uParam1, iParam0, fVar1, iVar0))
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

bool func_303(int iParam0, var uParam1)
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

bool func_304(var uParam0, int iParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_290();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_305(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_442(iVar0, &iVar2))
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
	if (func_443(iVar0, iParam0))
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

int func_306(var uParam0, int iParam1)
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

bool func_307(var uParam0, int iParam1)
{
	if (func_444(uParam0))
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

bool func_308(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_62(iParam0, iParam1, 1, 1) < 4f)
		{
			if (is_entity_touching_entity(iParam0, iParam1) && is_ped_ragdoll(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_309()
{
}

bool func_310(var uParam0, int iParam1)
{
	iVar0 = get_vehicle_ped_is_using(Global_35);
	if (iVar0 != 0 && !is_this_model_a_train(get_entity_model(iVar0)))
	{
		vVar1 = { get_entity_coords(iParam1, false, false) };
		if (func_445(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_290();
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
						if (func_264(iVar7, vVar1, 1) < 3f)
						{
							if (is_entity_touching_entity(iVar7, iParam1))
							{
								uParam0->f_9 = func_290();
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
	if ((func_290() - Global_1935630->f_43) >= 10000)
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
	fVar0 = func_423(uParam0);
	if (uParam0->f_12 > func_446(uParam0) && uParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_447(iParam1);
	iVar1 = func_448(uParam0->f_14);
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
	return func_449(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
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
		if (func_450(iParam0, uParam1, 1))
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
					if (!func_451(uParam1, iParam0))
					{
						if (func_264(iVar4, Global_36, 1) < 7f)
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
	if (!func_452(0))
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
	iVar0 = func_290();
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
		uParam1->f_4 = func_290();
	}
	else if (func_290() - uParam1->f_4) > func_453(uParam1)
	{
		return func_454(iParam0, uParam1, 0, -1082130432);
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

void func_320(int* iParam0, var uParam1)
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
	func_455(iParam0, uParam1, 1);
	func_343(uParam1, 0, 1, 1, 0);
	_copy_memory(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		_copy_memory((*uParam1)[iVar0], &Var22, 17);
		iVar0++;
	}
}

bool func_321()
{
	if (func_456(Global_35) || func_457(Global_35))
	{
		return true;
	}
	return false;
}

bool func_322(int iParam0, bool bParam1)
{
	if (bParam1 && !func_241(iParam0))
	{
		return false;
	}
	return !func_458(iParam0, 4);
}

void func_323(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

void func_324(int* iParam0, var uParam1, var uParam2)
{
	iVar0 = func_459(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = (*uParam1)[iVar0]->f_13;
		uVar2 = (*uParam1)[iVar0]->f_15;
		if (!is_string_null_or_empty(sVar1))
		{
			func_460(Global_35, *uParam2, sVar1, "", -1082130432, uVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

bool func_325(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_217() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_40.f_7832[iVar1]), iVar2);
}

void func_326(int iParam0, bool bParam1)
{
	func_461(iParam0, &iVar0, &iVar1);
	if (!func_462(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_463(iVar0, iVar1);
}

struct<2> func_327(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

int func_328(var uParam0, var uParam1)
{
	stat_id_get_int(&uParam0, &uVar0);
	return uVar0;
}

void func_329(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

float func_330(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_331(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_464(iParam0, iParam1))
		{
			if (!func_279(iParam1->f_10, 1))
			{
				set_ped_config_flag(iParam0, 130, false);
				set_ped_config_flag(iParam0, 315, false);
				set_ped_config_flag(iParam0, 297, false);
				set_ped_config_flag(iParam0, 178, true);
				func_343(uParam2, 0, 0, 1, 0);
				func_225(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_279(iParam1->f_10, 1))
		{
			func_465(uParam2);
			set_ped_config_flag(iParam0, 130, true);
			set_ped_config_flag(iParam0, 315, true);
			set_ped_config_flag(iParam0, 297, true);
			set_ped_config_flag(iParam0, 178, false);
			func_224(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_332(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!is_entity_dead(*uParam0))
	{
		_0xe98d55c5983f2509(*uParam0);
		bVar4 = func_279(iParam4, 32);
		func_455(iParam1, uParam2, 0);
		iVar5 = func_466(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			set_ped_config_flag(*uParam0, 178, false);
			return true;
		}
		func_343(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_279(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_279(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_279(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_279(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_279(iParam4, 8388608) || func_279(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_279(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_279(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_335(iParam1, 4))
		{
			iVar6 |= 1024;
			_0xbb1e41dd3d3c6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_335(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_279(iParam4, 67108864))
		{
			iVar6 |= 16384;
		}
		if (iParam1->f_6 < -1 || (iParam1->f_6 > -1 && iParam1->f_6 > 3))
		{
			iParam1->f_6 = -1;
		}
		if (_0x870708a6e147a9ad(*uParam0, &cVar0, fParam3, fParam3, iVar6, iParam1->f_7, iParam1->f_8, iVar5, 0, iParam1->f_6))
		{
			if (iParam6 == 2)
			{
				iParam6 = func_467(uParam0);
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
					_0xfca8fb9e15fa80d3(*uParam0, iParam6);
				}
				if (!is_string_null_or_empty(sParam5) && iParam6 == 2)
				{
					_0xfca8fb9e15fa80d3(*uParam0, get_hash_key(sParam5));
				}
				else if (iParam6 != 2)
				{
					_0xfca8fb9e15fa80d3(*uParam0, iParam6);
				}
			}
			set_ped_config_flag(*uParam0, 130, true);
			set_ped_config_flag(*uParam0, 178, false);
			set_ped_config_flag(*uParam0, 297, true);
			set_ped_config_flag(*uParam0, 301, false);
			if (func_279(iParam4, 268435456))
			{
				iVar8 = func_468(uParam2, 648122183);
				if (iVar8 > -1)
				{
					func_469(iParam1, (*uParam2)[iVar8]);
				}
			}
			if (func_335(iParam1, 23))
			{
				set_ped_config_flag(*uParam0, 315, false);
				set_ped_config_flag(*uParam0, 331, false);
				set_ped_config_flag(*uParam0, 493, true);
			}
			else
			{
				set_ped_config_flag(*uParam0, 315, true);
				set_ped_config_flag(*uParam0, 493, false);
			}
			if (func_279(iParam4, 2) || func_279(iParam4, 16))
			{
				func_334(*uParam0, 1, 1);
			}
			else
			{
				func_334(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_333(var uParam0)
{
	if (!is_entity_dead(*uParam0))
	{
		_0xe98d55c5983f2509(*uParam0);
		set_ped_config_flag(*uParam0, 297, false);
	}
}

void func_334(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !is_entity_dead(iParam0))
	{
		set_ped_config_flag(iParam0, 317, bParam1);
	}
}

bool func_335(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

bool func_336(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_470(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_337(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_471(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_279(iParam10, 32), 1, 0);
			set_bit(iParam2, 1);
		}
	}
	else if (is_bit_set(*iParam2, 1))
	{
		clear_bit(iParam2, 1);
	}
}

void func_338(int iParam0)
{
	if (func_279(iParam0, 4))
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
	if (func_279(iParam0, 16384))
	{
		disable_control_action(0, -485697785, false);
	}
	if (func_279(iParam0, 8))
	{
		disable_control_action(0, -1292666904, false);
		disable_control_action(0, 578288361, false);
	}
}

bool func_339(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	iVar1 = func_472(1);
	bVar2 = is_bit_set(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = is_ped_on_foot(Global_35);
	bVar10 = is_ped_injured(*uParam0);
	bVar11 = (((_is_ped_carrying(Global_35) || func_473(Global_35)) || func_474(Global_35)) || func_475(Global_35));
	fVar12 = -1f;
	if (func_11(&(iParam1->f_13)))
	{
		fVar12 = func_13(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((*uParam4)[iVar0]->f_8 != iParam12)
		{
			iParam12 = (*uParam4)[iVar0]->f_8;
		}
		bVar4 = func_241((*uParam4)[iVar0]->f_6);
		func_476(*uParam0, (*uParam4)[iVar0], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (is_bit_set(uParam4[iVar0], 20))
		{
			bVar3 = true;
		}
		if (func_477(*uParam0, iParam1, (*uParam4)[iVar0], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_478(iParam12, (*uParam4)[iVar0]->f_6))
				{
					if (!bVar7)
					{
						func_343(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_479(uParam4, 0, 0);
					}
					if (is_bit_set(uParam4[iVar0], 11))
					{
						func_455(iParam1, uParam4, is_bit_set(*iParam1, 6));
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
					if (func_480(iParam1, fParam6, iParam1->f_9))
					{
						func_92(&(iParam1->f_18));
						if (bVar6)
						{
							func_479(uParam4, 0, 0);
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
		func_481(iParam1, fParam2);
	}
	return bVar5;
}

void func_340(var uParam0)
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

void func_341(int* iParam0, var uParam1, float fParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_482((*uParam1)[iVar0]))
		{
			if (is_bit_set(uParam1[iVar0], 20))
			{
				func_481(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_342(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!is_control_pressed(0, -124244224))
		{
			if (func_483(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_484(iParam1, 0);
				func_455(iParam1, uParam2, func_335(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

void func_343(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_241((*uParam0)[iVar0]->f_6))
			{
				if (!bParam4 && is_bit_set(uParam0[iVar0], 11))
				{
				}
				else
				{
					func_248(&((*uParam0)[iVar0]->f_6), 1, 1);
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

int func_344(var uParam0, int* iParam1, float fParam2, bool bParam3)
{
	if (iParam1->f_9)
	{
		if (is_ambient_speech_playing(*uParam0) || is_scripted_speech_playing(*uParam0))
		{
			return 0;
		}
		iParam1->f_9 = 0;
		set_bit(iParam1, 0);
		if (fParam2 > 0f)
		{
			func_92(&(iParam1->f_18));
			return 0;
		}
		else if (func_11(&(iParam1->f_18)))
		{
			func_14(&(iParam1->f_18));
			return 0;
		}
	}
	if (!func_11(&(iParam1->f_18)))
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
	return func_485(&(iParam1->f_18), fParam2);
	return 1;
}

void func_345(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_476(iParam0, (*uParam2)[iVar0], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_346(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

Vector3 func_347(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			vVar0 = { -1808.908f, -373.3501f, 162.3387f };
			break;
		case 1:
			vVar0 = { -1808.91f, -372.71f, 162.32f };
			break;
	}
	return vVar0;
}

float func_348(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			fVar0 = 284.2307f;
			break;
		case 1:
			fVar0 = 92.6596f;
			break;
	}
	return fVar0;
}

bool func_349(var uParam0, vector3 vParam1, float fParam4, int iParam5, float fParam6, float fParam7)
{
	if (func_9(*uParam0, 0))
	{
		if (func_139(*uParam0, -1098463898) || func_139(*uParam0, 993674639))
		{
			return false;
		}
		if (!func_265(*uParam0, vParam1, fParam4, fParam6, fParam7, 0))
		{
			if (!func_139(*uParam0, 242628503))
			{
				clear_ped_tasks(*uParam0, 1, 0);
				open_sequence_task(&iVar0);
				task_follow_nav_mesh_to_coord(0, vParam1, 1f, iParam5, fParam6, 0, 40000f);
				task_achieve_heading(0, fParam4, 0);
				close_sequence_task(iVar0);
				task_perform_sequence(*uParam0, iVar0);
				set_ped_keep_task(*uParam0, true);
				clear_sequence_task(&iVar0);
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

int func_350(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			iVar0 = -1426662425;
			break;
		case 1:
			iVar0 = 201363338;
			break;
	}
	return iVar0;
}

Vector3 func_351(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			vVar0 = { -1805.405f, -371.9168f, 160.4901f };
			break;
		case 1:
			vVar0 = { -1805.56f, -373.7274f, 160.3914f };
			break;
		case 2:
			vVar0 = { -1805.595f, -374.8352f, 160.3612f };
			break;
		case 3:
			vVar0 = { -1805.926f, -376.052f, 160.3409f };
			break;
		case 4:
			vVar0 = { -1804.244f, -372.0793f, 160.3452f };
			break;
	}
	return vVar0;
}

float func_352(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			fVar0 = 132.3116f;
			break;
		case 1:
			fVar0 = 75.5789f;
			break;
		case 2:
			fVar0 = 58.7203f;
			break;
		case 3:
			fVar0 = 54.6217f;
			break;
		case 4:
			fVar0 = 119.06f;
			break;
	}
	return fVar0;
}

int func_353(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			iVar0 = -22664287;
			break;
		case 1:
			iVar0 = 2087366558;
			break;
		case 2:
			iVar0 = 2087366558;
			break;
		case 3:
			iVar0 = 2087366558;
			break;
		case 4:
			iVar0 = -22664287;
			break;
	}
	return iVar0;
}

Vector3 func_354(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			vVar0 = { -1781.5f, -384.5139f, 156.9384f };
			break;
		case 1:
			vVar0 = { -1780.587f, -385.0345f, 156.7968f };
			break;
		case 2:
			vVar0 = { -1779.604f, -387.0019f, 156.7149f };
			break;
		case 3:
			vVar0 = { -1775.285f, -382.412f, 156.4505f };
			break;
	}
	return vVar0;
}

float func_355(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			fVar0 = 160.8908f;
			break;
		case 1:
			fVar0 = 148.6998f;
			break;
		case 2:
			fVar0 = 100.2494f;
			break;
		case 3:
			fVar0 = 134.7941f;
			break;
	}
	return fVar0;
}

int func_356(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			iVar0 = 2087366558;
			break;
		case 1:
			iVar0 = 2087366558;
			break;
		case 2:
			iVar0 = -22664287;
			break;
		case 3:
			iVar0 = -22664287;
			break;
	}
	return iVar0;
}

bool func_357()
{
	if (is_bit_set(get_random_int_in_range(0, 65536), 0))
	{
		return true;
	}
	return false;
}

int func_358(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_359(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_360(vector3 vParam0)
{
	return _0x769bb7626b8cdb06(vParam0, 0.5f, 0, 0, 16384);
}

int func_361(int iParam0, bool bParam1)
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

bool func_362(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_363(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_486(iParam0);
	}
	else
	{
		func_487(iParam0, iParam1);
	}
	func_488();
}

void func_364(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_2 = iParam1;
}

void func_365(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0] = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0] = iParam1;
}

void func_366(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_5 = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0]->f_1 = iParam1;
}

bool func_367(int iParam0, bool bParam1)
{
	if (!func_226(iParam0))
	{
		return false;
	}
	if ((func_227(iParam0, 1) && !func_271(iParam0)) && func_272(iParam0))
	{
		return false;
	}
	if (!func_227(iParam0, 2))
	{
		return false;
	}
	if (!bParam1)
	{
		if (!func_489(iParam0, 0))
		{
			return false;
		}
	}
	return true;
}

void func_368(int iParam0, int iParam1)
{
	if (func_217() != -1)
	{
		return;
	}
	if (!func_226(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (Global_24887[iParam0] || iParam1);
}

void func_369(int iParam0)
{
	if (!func_226(iParam0))
	{
		return;
	}
	(*Global_1895087)[iParam0]->f_2 = get_id_of_this_thread();
}

int func_370(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 1:
			return 3;
	}
	return 3;
}

int func_371(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 2;
		case 2:
			return 3;
		case 3:
			return 3;
		case 4:
			return 3;
	}
	return 3;
}

int func_372(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 2;
		case 2:
			return 3;
		case 3:
			return 3;
	}
	return 3;
}

int func_373(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 1:
			return 1;
	}
	return 1;
}

int func_374(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 1;
		case 3:
			return 1;
		case 4:
			return 1;
	}
	return 1;
}

int func_375(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 1;
		case 3:
			return 1;
	}
	return 1;
}

int func_376(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_490(iVar0, iParam0, bParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

int func_377(int iParam0)
{
	return iParam0;
}

void func_378(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_379(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_458(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_380(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_381(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

void func_382(int iParam0)
{
	if (!func_491(iParam0))
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

bool func_383(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_384(int iParam0)
{
	Global_1327479->f_3 = iParam0;
}

int func_385()
{
	return Global_1310750->f_16037;
}

bool func_386(int iParam0, int iParam1)
{
	if (!func_383(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0] && iParam1) != 0;
}

bool func_387(int iParam0)
{
	if (!func_383(iParam0))
	{
		return false;
	}
	if (func_492(64) && func_493(iParam0))
	{
		return true;
	}
	return (*Global_1310750)[iParam0]->f_46;
}

bool func_388(int iParam0)
{
	if (!func_383(iParam0))
	{
		return false;
	}
	return (*Global_1310750)[iParam0]->f_47;
}

void func_389(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_383(&(Global_1310750->f_13321[iParam0])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0];
	force_cleanup_for_thread_with_this_id(Global_1310750->f_13321[iParam0]->f_5, 523);
	(*Global_1310750)[iVar0]->f_48 = 0;
	func_494(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

void func_390(int iParam0, int iParam1, bool bParam2)
{
	if (Global_1327479->f_9)
	{
		return;
	}
	Global_1327479->f_4 = (Global_1327479->f_4 + iParam0 * 1000);
	if (bParam2)
	{
		Global_1310750->f_16106 = { Global_36 };
	}
	if (iParam1 == 0)
	{
		if (iParam0 > 0)
		{
			Global_1327479->f_5 = (get_game_timer() + ((Global_1327479->f_4 - get_game_timer()) / 2));
		}
		else
		{
			Global_1327479->f_5 = (Global_1327479->f_5 + iParam0 * 500);
		}
	}
	else
	{
		Global_1327479->f_5 = (get_game_timer() + iParam1 * 1000);
	}
}

void func_391(bool bParam0)
{
	if (bParam0)
	{
		func_495(4);
	}
	func_495(2);
	set_bit(&(Global_1956580->f_1), 0);
}

void func_392(bool bParam0)
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

float func_393(float fParam0)
{
	fVar0 = fParam0;
	if (fParam0 < 0f)
	{
		fVar0 = (fVar0 + 360f);
	}
	else if (fParam0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	return fVar0;
}

void func_394(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_395()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

void func_396(int iParam0, int iParam1)
{
	if (!func_226(iParam0))
	{
		return;
	}
	(*Global_1895087)[iParam0]->f_1 = iParam1;
}

void func_397(vector3 vParam0, int iParam3)
{
	if (func_359(vParam0))
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
			if (func_496(vVar2, vParam0, 2f, 1))
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

int func_398(int iParam0)
{
	if (!func_41(iParam0))
	{
		return -1;
	}
	return func_414(iParam0);
}

char* func_399()
{
	return "script@specialped@pdmos_nicholas_trimmins@ig@ig_1_sittingspeech";
}

char* func_400()
{
	return "script@specialped@pdmos_nicholas_trimmins@ig@ig_2_and_3_porchspeechwnewspaper";
}

char* func_401()
{
	return "script@specialped@pdmos_nicholas_trimmins@ig@ig_4_and_5_hotelporchandsherrifofficespeech";
}

char* func_402()
{
	return "script@specialped@pdmos_nicholas_trimmins@ig@ig_6_sittingspeech";
}

char* func_403()
{
	return "script@specialped@pdmos_nicholas_trimmins@ig@ig_7_porchspeechwnewspaper";
}

Vector3 func_404()
{
	return -1807.839f, -374.7922f, 161.8656f;
}

Vector3 func_405()
{
	return 0f, 0f, 180f;
}

Vector3 func_406()
{
	return -1807.44f, -373.83f, 161.84f;
}

Vector3 func_407()
{
	return 0f, 0f, -97.5f;
}

Vector3 func_408()
{
	return -1781.675f, -387.235f, 158.3f;
}

Vector3 func_409()
{
	return 0f, 0f, -44.787f;
}

Vector3 func_410()
{
	return func_404();
}

Vector3 func_411()
{
	return func_405();
}

Vector3 func_412()
{
	return func_406();
}

Vector3 func_413()
{
	return func_407();
}

int func_414(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_497(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

bool func_415(int iParam0, int iParam1, bool bParam2)
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

void func_416(int iParam0)
{
	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_498();
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
			func_499(&(Global_1935630->f_34), &(Global_1935630->f_39));
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

var func_417(int iParam0)
{
	return &(Global_1109400->f_276[iParam0]);
}

bool func_418(bool bParam0)
{
	if (func_500(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_419(var uParam0)
{
	iVar0 = Global_1935630->f_40;
	if (func_217() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_501(uParam0);
		}
	}
	else if (!does_entity_exist(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_501(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_448(iVar0) == -1)
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

void func_420(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_502(uParam0);
	}
}

bool func_421(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_448(iParam2);
	}
	else
	{
		iVar1 = func_447(iParam2);
	}
	if (!is_ped_human(iParam0))
	{
		iVar0 = func_448(iParam0);
	}
	else
	{
		iVar0 = func_447(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_279(*uParam1, 8388608))
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

float func_422(int iParam0, int iParam1)
{
	return func_62(iParam0, iParam1, 1, 1);
}

float func_423(var uParam0)
{
	return uParam0->f_26;
}

bool func_424(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_425(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_225(uParam0, 134217728);
	}
	else
	{
		func_224(uParam0, 134217728);
	}
}

void func_426()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

bool func_427(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((_0xcb690f680a3ea971(iVar0, 1) && is_player_targetting_entity(iVar1, iParam0, bParam5)) && is_player_free_aiming_at_entity(iVar1, iParam0)) && func_62(iVar0, iParam0, 1, 1) <= 4f)
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
		if (_is_weapon_sniper(func_503(iVar0, 0)))
		{
			if (func_504(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_428(var uParam0)
{
	return uParam0->f_17;
}

bool func_429(var uParam0, int iParam1, float fParam2, float fParam3)
{
	if (uParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_279(*uParam0, 4194304))
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

int func_430(var uParam0)
{
	return uParam0->f_18;
}

bool func_431(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (_is_weapon_sniper(func_503(iVar0, 0)))
		{
			if (func_505(get_entity_coords(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_432(bool bParam0, bool bParam1, bool bParam2)
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

float func_433(var uParam0)
{
	return uParam0->f_23;
}

int func_434(var uParam0)
{
	return uParam0->f_21;
}

int func_435(var uParam0)
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

bool func_436(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_506(iParam0, vParam4, 0.5f))
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

int func_437(int iParam0)
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
	if (func_507(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_438(int iParam0)
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

bool func_439(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_508(iParam1))
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

bool func_440(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_508(iParam1))
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

bool func_441(var uParam0, int iParam1, float fParam2, int iParam3)
{
	fVar0 = 40f;
	if (func_508(iParam1))
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

bool func_442(int iParam0, int iParam1)
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

bool func_443(int iParam0, int iParam1)
{
	if (_get_lassoed_entity(iParam0) == iParam1)
	{
		return true;
	}
	if (func_509(iParam0, 1, 0, 0) != 2055893578)
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

bool func_444(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

bool func_445(int iParam0, int iParam1, vector3 vParam2)
{
	fVar0 = func_264(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (is_entity_touching_entity(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_446(var uParam0)
{
	return uParam0->f_24;
}

int func_447(int iParam0)
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

int func_448(int iParam0)
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

int func_449(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_442(Global_35, &iVar1))
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
		fVar2 = func_62(iParam0, player_ped_id(), 0, 1);
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
		if (func_62(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
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

bool func_450(int iParam0, var uParam1, bool bParam2)
{
	func_500(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_451(uParam1, iVar0))
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
				if (!bParam2 || !func_451(uParam1, iVar1))
				{
					if (func_264(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_451(var uParam0, int iParam1)
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

int func_452(int iParam0)
{
	if (func_45())
	{
		return 0;
	}
	return func_510((*Global_1347702)[58]->f_15, 1);
}

int func_453(var uParam0)
{
	return uParam0->f_20;
}

int func_454(int iParam0, var uParam1, bool bParam2, float fParam3)
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

void func_455(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_248(&((*uParam1)[iParam0->f_3]->f_6), 1, 1);
		if (bParam2)
		{
			func_79(iParam0, 0);
		}
	}
}

int func_456(int iParam0)
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
		iVar2 = func_511(iVar9);
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

int func_457(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	iVar0 = func_261();
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

bool func_458(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

int func_459(int* iParam0)
{
	if (func_335(iParam0, 0))
	{
		if (func_512(iParam0))
		{
			func_346(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

bool func_460(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, var uParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_513(iParam0, iParam1, sParam2, sParam3, fParam4, uParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

void func_461(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_462(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_514(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_515(iParam0))
	{
		return false;
	}
	if (func_516(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_517(iParam0, 1)) || func_518(32768))
	{
		if (!func_517(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_519())
	{
		return false;
	}
	return true;
}

void func_463(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_464(int iParam0, int* iParam1)
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
		if (is_ped_in_combat(iParam0, func_520((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_465(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_482((*uParam0)[iVar0]))
		{
			func_76((*uParam0)[iVar0], 14);
		}
		iVar0++;
	}
}

int func_466(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(*uParam2)[iVar0]->f_8 = 6;
		func_521(iParam0, (*uParam2)[iVar0], fParam3, 3, 0, 6, bParam4, 0);
		if (func_241((*uParam2)[iVar0]->f_6))
		{
			func_76((*uParam2)[iVar0], 11);
			return (*Global_1945938)[(*uParam2)[iVar0]->f_6]->f_3;
		}
	}
	return 0;
}

int func_467(var uParam0)
{
	iVar0 = func_522(*uParam0);
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

int func_468(var uParam0, int iParam1)
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

void func_469(int* iParam0, int* iParam1)
{
	if (!func_335(iParam0, 23))
	{
		if (iParam1->f_7 == 648122183)
		{
			func_76(iParam1, 19);
			func_484(iParam0, 23);
			func_523(iParam1, 2);
		}
	}
}

bool func_470(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (func_524(16))
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
					func_525(16);
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

void func_471(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_521(iParam0, (*uParam1)[iVar0], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			clear_bit((*uParam1)[iVar0], 14);
		}
		iVar0++;
	}
}

int func_472(int iParam0)
{
	return _money_get_cash_balance();
}

bool func_473(int iParam0)
{
	return (func_526(iParam0, 4) || func_526(iParam0, 5));
}

int func_474(int iParam0)
{
	return func_526(iParam0, 7);
}

int func_475(int iParam0)
{
	return func_526(iParam0, 6);
}

void func_476(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (is_bit_set(*iParam1, 14))
	{
		if (func_482(iParam1))
		{
			clear_bit(iParam1, 14);
			func_521(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_477(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_527(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_322(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_244(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_244(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_528(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_478(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_529(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_530(iParam1, 1))
	{
		func_531(iParam1, 1);
		return true;
	}
	return false;
}

void func_479(var uParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_77((*uParam0)[iVar0], bParam1, bParam2);
		iVar0++;
	}
}

bool func_480(int* iParam0, float fParam1, bool bParam2)
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

void func_481(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		disable_control_action(0, 1101824977, true);
		disable_control_action(0, 966551065, true);
		disable_control_action(0, 668058244, true);
		set_ped_reset_flag(Global_35, 203, true);
	}
}

bool func_482(int* iParam0)
{
	if (!is_string_null_or_empty(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_483(int iParam0)
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

void func_484(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

int func_485(var uParam0, float fParam1)
{
	if (func_532(uParam0, fParam1))
	{
		func_14(uParam0);
		return 1;
	}
	return 0;
}

int func_486(int iParam0)
{
	iVar0 = func_497(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_533(iVar0);
}

int func_487(int iParam0, int iParam1)
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
			func_534(iVar2);
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

void func_488()
{
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

bool func_489(int iParam0, bool bParam1)
{
	if (func_217() != -1)
	{
		return false;
	}
	if (!func_226(iParam0))
	{
		return false;
	}
	if (!_0x800df3fc913355f3(func_60(iParam0)))
	{
		return false;
	}
	if (bParam1 && !does_entity_exist(func_230(iParam0)))
	{
		return false;
	}
	return !_0xeb98b38ca60742d7(func_60(iParam0));
}

void func_490(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_535(iParam1))
		{
			func_80(iParam0, 41788943);
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
			func_536(iParam0, 0, 1);
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
			func_537(iParam0, 0);
			bVar0 = true;
		}
		func_538(iParam0, bParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

bool func_491(int iParam0)
{
	return func_458(iParam0, 2);
}

bool func_492(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

bool func_493(int iParam0)
{
	return func_386(iParam0, Global_1310750->f_16072 | 64);
}

void func_494(int iParam0)
{
	if (&Global_1310750->f_13321[iParam0] != -1)
	{
		(*Global_1310750)[&Global_1310750->f_13321[iParam0]]->f_48 = 0;
	}
	Global_1310750->f_13321[iParam0] = -1;
	Global_1310750->f_13321[iParam0]->f_1 = -1;
	Global_1310750->f_13321[iParam0]->f_2 = { 0f, 0f, 0f };
	Global_1310750->f_13321[iParam0]->f_5 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_1310750->f_13321[iParam0]->f_6[iVar0] = -1881652455;
		iVar0++;
	}
}

void func_495(int iParam0)
{
	Global_1900383->f_316 = (Global_1900383->f_316 || iParam0);
}

bool func_496(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

int func_497(int iParam0)
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

bool func_498()
{
	if (func_539())
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

void func_499(var uParam0, var uParam1)
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

bool func_500(bool bParam0, int iParam1, int iParam2)
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

int func_501(var uParam0)
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

void func_502(var uParam0)
{
	if (Global_1935630->f_38 == 0)
	{
		func_224(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (does_entity_exist(&(Global_1935630->f_34[iVar0])))
			{
				if (!_0x88ad6cc10d8d35b2(&(Global_1935630->f_34[iVar0])))
				{
					func_225(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_503(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_504(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_505(get_entity_coords(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_505(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_506(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { get_entity_forward_vector(iParam0) };
	vVar3 = { vParam1 - get_entity_coords(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_507(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_508(int iParam0)
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

int func_509(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_510(int iParam0, bool bParam1)
{
	switch (func_398(iParam0))
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

int func_511(int iParam0)
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

bool func_512(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return true;
	}
	return false;
}

int func_513(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, var uParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
{
	uParam5 = uParam5;
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
		if (func_540())
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
				if (func_541(iParam0, 1, 1) > fParam4)
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
			fVar1 = func_62(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_92(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!is_entity_dead(iParam1))
				{
					task_look_at_entity(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_542(iParam0, iParam1, fVar1, bParam13))
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
				Var3.f_2 = uParam5;
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
				iVar2 = func_358(func_543(iParam0, sParam2, iParam11, iParam1, network_is_game_in_progress(), 0, uParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

bool func_514(int iParam0, int iParam1)
{
	if (func_217() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_515(int iParam0)
{
	if (func_217() != -1)
	{
		if (func_517(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_517(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_516(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_517(iParam0, 65536) && !func_517(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_517(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_517(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_517(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_518(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_519()
{
	return Global_1905944->f_5694;
}

int func_520(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_521(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (func_241(iParam1->f_6))
	{
		if (bParam7 || is_bit_set(*iParam1, 11))
		{
			return;
		}
		func_248(&(iParam1->f_6), 0, 1);
	}
	if (!func_241(iParam1->f_6) && !is_bit_set(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_482(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_544(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824, 0, 1704213876, iParam1->f_10, 0);
			if (func_241(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_528(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_545(iParam1->f_6, 17, 1, 1);
				}
				if (is_bit_set(*iParam1, 1))
				{
					if (is_bit_set(*iParam1, 3))
					{
						func_546(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_242(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (is_bit_set(*iParam1, 10))
				{
					func_545(iParam1->f_6, 16, 1, 1);
				}
				if (!is_bit_set(*iParam1, 0) || is_bit_set(*iParam1, 13))
				{
					func_244(iParam1->f_6, 0, 1);
				}
				else
				{
					func_244(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

int func_522(int iParam0)
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

void func_523(int* iParam0, int iParam1)
{
	if (!func_246(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_76(iParam0, 14);
		}
	}
}

bool func_524(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_525(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_526(int iParam0, int iParam1)
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

bool func_527(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
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

void func_528(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (bParam3 && !func_241(iParam0))
	{
		return;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar0 = func_377(iParam0);
	func_545(iParam0, 18, 0, 1);
	func_545(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = _uiprompt_get_group_id_for_target_entity(iParam1);
	}
	_uiprompt_set_group((*Global_1945938)[iVar0]->f_3, iParam4, iParam2);
}

bool func_529(int iParam0, bool bParam1)
{
	if (bParam1 && !func_241(iParam0))
	{
		return false;
	}
	iVar0 = func_377(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

bool func_530(int iParam0, bool bParam1)
{
	if (bParam1 && !func_241(iParam0))
	{
		return false;
	}
	iVar0 = func_377(iParam0);
	return _uiprompt_is_pressed((*Global_1945938)[iVar0]->f_3);
}

void func_531(int iParam0, bool bParam1)
{
	if (bParam1 && !func_241(iParam0))
	{
		return;
	}
	iVar0 = func_377(iParam0);
	_uiprompt_restart_modes((*Global_1945938)[iVar0]->f_3);
}

bool func_532(var uParam0, float fParam1)
{
	if (!func_11(uParam0))
	{
		return false;
	}
	if (func_13(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

int func_533(int iParam0)
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

int func_534(int iParam0)
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

bool func_535(int iParam0)
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

void func_536(int iParam0, int iParam1, bool bParam2)
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

void func_537(int iParam0, bool bParam1)
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

void func_538(int iParam0, bool bParam1)
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

bool func_539()
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

bool func_540()
{
	return (Global_1894899 & 1 != 0 && func_10() != -1);
}

float func_541(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return -1f;
	}
	return func_62(Global_35, iParam0, bParam1, bParam2);
}

bool func_542(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_543(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, var uParam6, int iParam7)
{
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = uParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = bParam4;
	Var0.f_6 = iParam7;
	return func_266(iParam0, &Var0);
}

int func_544(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_458(iVar0, 2))
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
				func_547(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, uParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_545(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_241(iParam0))
	{
		return;
	}
	iVar0 = func_377(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1945938)[iVar0]->f_3, iParam1, iParam2);
}

void func_546(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	if (bParam4 && !func_241(iParam0))
	{
		return;
	}
	iVar0 = func_377(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(10, sParam1, sParam2, sParam3));
}

void func_547(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, var uParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_379(iParam0, 1);
	func_380(iParam0, 1);
	func_381(iParam0, 128);
}

