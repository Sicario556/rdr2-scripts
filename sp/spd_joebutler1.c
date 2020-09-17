void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (has_force_cleanup_occurred(555))
	{
		while (true)
		{
			wait(0);
			if (func_1(Local_14.f_158[0]))
			{
				func_2(&Local_14, 1);
			}
		}
	}
	while (true)
	{
		wait(0);
		func_3(&Local_14);
		func_4(&Local_14, 0);
		if ((((func_5(14, &(Local_14.f_158[0]), 1, 1) && Local_14 > 2) && Local_14 < 49) || func_6(29, 1)) || func_7(&Local_14))
		{
			if (!func_8(Local_14.f_180, 1024))
			{
				if (Local_14 == 3 || Local_14 == 4)
				{
					func_10(&Local_14, &(Local_14.f_178), func_9(), 0, 1, 0);
				}
				else if (Local_14 == 50 || Local_14 == 51)
				{
					func_10(&Local_14, &(Local_14.f_178), func_11(), 0, 1, 0);
				}
				else if (Local_14 != 5)
				{
					func_10(&Local_14, &(Local_14.f_178), func_12(), 0, 1, 0);
				}
				else
				{
					func_10(&Local_14, &(Local_14.f_178), func_13(), 0, 1, 0);
				}
			}
			else
			{
				func_14(&Local_14);
				func_15(14, 0, Local_14.f_158[0], &(Local_14.f_137), &(Local_14.f_189), Local_14.f_175, 1097859072, 0);
				func_16(&Local_14);
				func_17(&Local_14);
				func_18(&Local_14);
				func_19(&Local_14);
				func_20(&(Local_14.f_158[0]), &(Local_14.f_180), 256, 14, Local_14.f_175);
				func_21(&(Local_14.f_158[0]), &(Local_14.f_180), 2048, 4096, 8192, "SPECIAL_PED_LIGHTWEIGHT_1_0", "SPECIAL_PED_GENERIC_INTERACT_FOCUS", "JoeBubble", "JoeConvo");
				func_22(&Local_14);
				switch (Local_14)
				{
					case 0:
						func_23(&Local_14);
						break;
					case 1:
						if (func_24(&Local_14))
						{
							func_25(&Local_14, 2);
						}
						break;
					case 2:
						func_26(&Local_14);
						break;
					case 6:
						if (func_8(Local_14.f_180, 1))
						{
							func_25(&Local_14, 49);
						}
						else if (func_8(Local_14.f_180, 2) && !func_8(Local_14.f_180, 16))
						{
							if (func_27(&(Local_14.f_179)))
							{
								set_anim_scene_entity(Local_14.f_179, "JOE_BUTLER", &(Local_14.f_158[0]), 0);
								set_anim_scene_entity(Local_14.f_179, "Cup", Local_14.f_160, 0);
								set_anim_scene_entity(Local_14.f_179, "COIN", Local_14.f_161, 0);
								set_anim_scene_entity(Local_14.f_179, "ARTHUR", Global_35, 0);
								set_anim_scene_entity(Local_14.f_179, "Crutch", Local_14.f_162, 0);
								set_anim_scene_bool(Local_14.f_179, "internal_loop", false, false);
								set_anim_scene_bool(Local_14.f_179, "internal_loop_end", false, false);
								func_10(&Local_14, &(Local_14.f_179), func_12(), 1, 0, 0);
								reset_anim_scene(Local_14.f_178, 0);
								func_25(&Local_14, 41);
							}
						}
						else if (has_anim_event_fired(&(Local_14.f_158[0]), -1527527524))
						{
							if (!func_28(&(Local_14.f_131)))
							{
								Local_14.f_174 = to_float(get_random_int_in_range(2, 3));
								func_29(&(Local_14.f_131), 0f);
							}
							else if (func_30(&(Local_14.f_131)) > Local_14.f_174)
							{
								func_31(&Local_14, &(Local_14.f_182));
								func_32(&(Local_14.f_131));
							}
						}
						break;
					case 4:
						if (func_10(&Local_14, &(Local_14.f_178), func_33(), 1, 0, 0))
						{
							func_25(&Local_14, 37);
						}
						if (func_8(Local_14.f_180, 4) && !func_8(Local_14.f_180, 16))
						{
							func_25(&Local_14, 37);
						}
						break;
					case 7:
						if (func_10(&Local_14, &(Local_14.f_178), func_34(), 1, 0, 1))
						{
							Local_14.f_183 = (1 + Local_14.f_183);
							_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_JOE_BUTLER"));
							func_25(&Local_14, 37);
						}
						if ((func_8(Local_14.f_180, 4) && !func_8(Local_14.f_180, 16)) || func_35(&Local_14))
						{
							func_25(&Local_14, 37);
						}
						break;
					case 8:
						if (func_10(&Local_14, &(Local_14.f_178), func_36(), 1, 0, 1))
						{
							Local_14.f_183++;
							_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_JOE_BUTLER"));
							func_25(&Local_14, 37);
						}
						if ((func_8(Local_14.f_180, 4) && !func_8(Local_14.f_180, 16)) || func_35(&Local_14))
						{
							func_25(&Local_14, 37);
						}
						break;
					case 9:
						if (func_10(&Local_14, &(Local_14.f_178), func_37(), 1, 0, 1))
						{
							Local_14.f_183 = (1 + Local_14.f_183);
							_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_JOE_BUTLER"));
							func_25(&Local_14, 37);
						}
						if ((func_8(Local_14.f_180, 4) && !func_8(Local_14.f_180, 16)) || func_35(&Local_14))
						{
							func_25(&Local_14, 37);
						}
						break;
					case 10:
						if (func_10(&Local_14, &(Local_14.f_178), func_38(), 1, 0, 1))
						{
							Local_14.f_183++;
							func_25(&Local_14, 37);
						}
						if ((func_8(Local_14.f_180, 4) && !func_8(Local_14.f_180, 16)) || func_35(&Local_14))
						{
							func_25(&Local_14, 37);
						}
						break;
					case 11:
						if (func_10(&Local_14, &(Local_14.f_178), func_39(), 1, 0, 1))
						{
							Local_14.f_183 = (1 + Local_14.f_183);
							_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_JOE_BUTLER"));
							func_25(&Local_14, 37);
						}
						if ((func_8(Local_14.f_180, 4) && !func_8(Local_14.f_180, 16)) || func_35(&Local_14))
						{
							func_25(&Local_14, 37);
						}
						break;
					case 12:
						if (func_10(&Local_14, &(Local_14.f_178), func_40(), 1, 0, 1))
						{
							Local_14.f_183 = (1 + Local_14.f_183);
							_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_JOE_BUTLER"));
							func_25(&Local_14, 37);
						}
						if ((func_8(Local_14.f_180, 4) && !func_8(Local_14.f_180, 16)) || func_35(&Local_14))
						{
							func_25(&Local_14, 37);
						}
						break;
					case 13:
						if (func_10(&Local_14, &(Local_14.f_178), func_41(), 1, 0, 1))
						{
							Local_14.f_183 = (1 + Local_14.f_183);
							_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_JOE_BUTLER"));
							func_25(&Local_14, 37);
						}
						if ((func_8(Local_14.f_180, 4) && !func_8(Local_14.f_180, 16)) || func_35(&Local_14))
						{
							func_25(&Local_14, 37);
						}
						break;
					case 14:
						if (func_10(&Local_14, &(Local_14.f_178), func_42(), 1, 0, 1))
						{
							Local_14.f_183++;
							_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_JOE_BUTLER"));
							func_25(&Local_14, 37);
						}
						if ((func_8(Local_14.f_180, 4) && !func_8(Local_14.f_180, 16)) || func_35(&Local_14))
						{
							func_25(&Local_14, 37);
						}
						break;
					case 15:
						if (func_10(&Local_14, &(Local_14.f_178), func_43(), 1, 0, 1))
						{
							Local_14.f_183 = (1 + Local_14.f_183);
							func_25(&Local_14, 37);
						}
						if ((func_8(Local_14.f_180, 4) && !func_8(Local_14.f_180, 16)) || func_35(&Local_14))
						{
							func_25(&Local_14, 37);
						}
						break;
					case 16:
						if (func_10(&Local_14, &(Local_14.f_178), func_44(), 1, 0, 1))
						{
							Local_14.f_183 = (1 + Local_14.f_183);
							_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_JOE_BUTLER"));
							func_25(&Local_14, 37);
						}
						if ((func_8(Local_14.f_180, 4) && !func_8(Local_14.f_180, 16)) || func_35(&Local_14))
						{
							func_25(&Local_14, 37);
						}
						break;
					case 17:
						if (func_10(&Local_14, &(Local_14.f_178), func_45(), 1, 0, 1))
						{
							Local_14.f_183++;
							_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_JOE_BUTLER"));
							func_25(&Local_14, 37);
						}
						if ((func_8(Local_14.f_180, 4) && !func_8(Local_14.f_180, 16)) || func_35(&Local_14))
						{
							func_25(&Local_14, 37);
						}
						break;
					case 18:
						if (func_10(&Local_14, &(Local_14.f_178), func_46(), 1, 0, 1))
						{
							Local_14.f_183 = (1 + Local_14.f_183);
							_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_JOE_BUTLER"));
							func_25(&Local_14, 37);
						}
						if ((func_8(Local_14.f_180, 4) && !func_8(Local_14.f_180, 16)) || func_35(&Local_14))
						{
							func_25(&Local_14, 37);
						}
						break;
					case 19:
						if (func_10(&Local_14, &(Local_14.f_178), func_47(), 1, 0, 1))
						{
							Local_14.f_183 = (1 + Local_14.f_183);
							_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_JOE_BUTLER"));
							func_25(&Local_14, 37);
						}
						if ((func_8(Local_14.f_180, 4) && !func_8(Local_14.f_180, 16)) || func_35(&Local_14))
						{
							func_25(&Local_14, 37);
						}
						break;
					case 20:
						if (func_10(&Local_14, &(Local_14.f_178), func_48(), 1, 0, 1))
						{
							Local_14.f_183++;
							func_25(&Local_14, 37);
						}
						if ((func_8(Local_14.f_180, 4) && !func_8(Local_14.f_180, 16)) || func_35(&Local_14))
						{
							func_25(&Local_14, 37);
						}
						break;
					case 21:
						if (func_10(&Local_14, &(Local_14.f_178), func_49(), 1, 0, 1))
						{
							Local_14.f_183++;
							_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_JOE_BUTLER"));
							func_25(&Local_14, 37);
						}
						if ((func_8(Local_14.f_180, 4) && !func_8(Local_14.f_180, 16)) || func_35(&Local_14))
						{
							func_25(&Local_14, 37);
						}
						break;
					case 22:
						if (func_10(&Local_14, &(Local_14.f_178), func_50(), 1, 0, 1))
						{
							Local_14.f_183++;
							_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_JOE_BUTLER"));
							func_25(&Local_14, 37);
						}
						if ((func_8(Local_14.f_180, 4) && !func_8(Local_14.f_180, 16)) || func_35(&Local_14))
						{
							func_25(&Local_14, 37);
						}
						break;
					case 23:
						if (func_10(&Local_14, &(Local_14.f_178), func_51(), 1, 0, 1))
						{
							Local_14.f_183++;
							_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_JOE_BUTLER"));
							func_25(&Local_14, 37);
						}
						if ((func_8(Local_14.f_180, 4) && !func_8(Local_14.f_180, 16)) || func_35(&Local_14))
						{
							func_25(&Local_14, 37);
						}
						break;
					case 24:
						if (func_10(&Local_14, &(Local_14.f_178), func_52(), 1, 0, 1))
						{
							Local_14.f_183++;
							func_25(&Local_14, 37);
						}
						if ((func_8(Local_14.f_180, 4) && !func_8(Local_14.f_180, 16)) || func_35(&Local_14))
						{
							func_25(&Local_14, 37);
						}
						break;
					case 25:
						if (func_10(&Local_14, &(Local_14.f_178), func_53(), 1, 0, 1))
						{
							Local_14.f_183 = (1 + Local_14.f_183);
							_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_JOE_BUTLER"));
							func_25(&Local_14, 37);
						}
						if ((func_8(Local_14.f_180, 4) && !func_8(Local_14.f_180, 16)) || func_35(&Local_14))
						{
							func_25(&Local_14, 37);
						}
						break;
					case 26:
						if (func_10(&Local_14, &(Local_14.f_178), func_54(), 1, 0, 1))
						{
							Local_14.f_183++;
							_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_JOE_BUTLER"));
							func_25(&Local_14, 37);
						}
						if ((func_8(Local_14.f_180, 4) && !func_8(Local_14.f_180, 16)) || func_35(&Local_14))
						{
							func_25(&Local_14, 37);
						}
						break;
					case 27:
						if (func_10(&Local_14, &(Local_14.f_178), func_55(), 1, 0, 1))
						{
							Local_14.f_183 = (1 + Local_14.f_183);
							_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_JOE_BUTLER"));
							func_25(&Local_14, 37);
						}
						if ((func_8(Local_14.f_180, 4) && !func_8(Local_14.f_180, 16)) || func_35(&Local_14))
						{
							func_25(&Local_14, 37);
						}
						break;
					case 28:
						if (func_10(&Local_14, &(Local_14.f_178), func_56(), 1, 0, 1))
						{
							Local_14.f_183++;
							_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_JOE_BUTLER"));
							func_25(&Local_14, 37);
						}
						if ((func_8(Local_14.f_180, 4) && !func_8(Local_14.f_180, 16)) || func_35(&Local_14))
						{
							func_25(&Local_14, 37);
						}
						break;
					case 29:
						if (func_10(&Local_14, &(Local_14.f_178), func_57(), 1, 0, 1))
						{
							Local_14.f_183 = (1 + Local_14.f_183);
							func_25(&Local_14, 37);
						}
						if ((func_8(Local_14.f_180, 4) && !func_8(Local_14.f_180, 16)) || func_35(&Local_14))
						{
							func_25(&Local_14, 37);
						}
						break;
					case 30:
						if (func_10(&Local_14, &(Local_14.f_178), func_58(), 1, 0, 1))
						{
							Local_14.f_183++;
							_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_JOE_BUTLER"));
							func_25(&Local_14, 37);
						}
						if ((func_8(Local_14.f_180, 4) && !func_8(Local_14.f_180, 16)) || func_35(&Local_14))
						{
							func_25(&Local_14, 37);
						}
						break;
					case 31:
						if (func_10(&Local_14, &(Local_14.f_178), func_59(), 1, 0, 1))
						{
							Local_14.f_183 = (1 + Local_14.f_183);
							_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_JOE_BUTLER"));
							func_25(&Local_14, 37);
						}
						if ((func_8(Local_14.f_180, 4) && !func_8(Local_14.f_180, 16)) || func_35(&Local_14))
						{
							func_25(&Local_14, 37);
						}
						break;
					case 32:
						if (func_10(&Local_14, &(Local_14.f_178), func_60(), 1, 0, 1))
						{
							Local_14.f_183 = (1 + Local_14.f_183);
							_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_JOE_BUTLER"));
							func_25(&Local_14, 37);
						}
						if ((func_8(Local_14.f_180, 4) && !func_8(Local_14.f_180, 16)) || func_35(&Local_14))
						{
							func_25(&Local_14, 37);
						}
						break;
					case 33:
						if (func_10(&Local_14, &(Local_14.f_178), func_61(), 1, 0, 1))
						{
							Local_14.f_183 = (1 + Local_14.f_183);
							func_25(&Local_14, 37);
						}
						if ((func_8(Local_14.f_180, 4) && !func_8(Local_14.f_180, 16)) || func_35(&Local_14))
						{
							func_25(&Local_14, 37);
						}
						break;
					case 34:
						if (func_10(&Local_14, &(Local_14.f_178), func_62(), 1, 0, 1))
						{
							Local_14.f_183 = (1 + Local_14.f_183);
							_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_JOE_BUTLER"));
							func_25(&Local_14, 37);
						}
						if ((func_8(Local_14.f_180, 4) && !func_8(Local_14.f_180, 16)) || func_35(&Local_14))
						{
							func_25(&Local_14, 37);
						}
						break;
					case 35:
						if (func_10(&Local_14, &(Local_14.f_178), func_63(), 1, 0, 1))
						{
							Local_14.f_183++;
							_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_JOE_BUTLER"));
							func_25(&Local_14, 37);
						}
						if ((func_8(Local_14.f_180, 4) && !func_8(Local_14.f_180, 16)) || func_35(&Local_14))
						{
							func_25(&Local_14, 37);
						}
						break;
					case 36:
						if (func_10(&Local_14, &(Local_14.f_178), func_64(), 1, 0, 1))
						{
							Local_14.f_183 = (1 + Local_14.f_183);
							_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_JOE_BUTLER"));
							func_25(&Local_14, 37);
						}
						if ((func_8(Local_14.f_180, 4) && !func_8(Local_14.f_180, 16)) || func_35(&Local_14))
						{
							func_25(&Local_14, 37);
						}
						break;
					case 37:
						if ((func_8(Local_14.f_180, 2) && func_8(Local_14.f_180, 4)) && !func_8(Local_14.f_180, 16))
						{
							if (func_27(&(Local_14.f_179)))
							{
								set_anim_scene_entity(Local_14.f_179, "JOE_BUTLER", &(Local_14.f_158[0]), 0);
								set_anim_scene_entity(Local_14.f_179, "Cup", Local_14.f_160, 0);
								set_anim_scene_entity(Local_14.f_179, "COIN", Local_14.f_161, 0);
								set_anim_scene_entity(Local_14.f_179, "ARTHUR", Global_35, 0);
								set_anim_scene_entity(Local_14.f_179, "Crutch", Local_14.f_162, 0);
								set_anim_scene_bool(Local_14.f_179, "internal_loop", false, false);
								set_anim_scene_bool(Local_14.f_179, "internal_loop_end", false, false);
								func_10(&Local_14, &(Local_14.f_179), func_12(), 0, 1, 0);
								reset_anim_scene(Local_14.f_178, 0);
								func_25(&Local_14, 41);
							}
						}
						else if (func_10(&Local_14, &(Local_14.f_178), func_65(), 0, 1, 0))
						{
							func_25(&Local_14, 6);
						}
						break;
					case 38:
						if (func_8(Local_14.f_180, 1))
						{
							func_25(&Local_14, 49);
						}
						else if (func_8(Local_14.f_180, 16))
						{
							if (func_27(&(Local_14.f_178)))
							{
								set_anim_scene_entity(Local_14.f_178, "JOE_BUTLER", &(Local_14.f_158[0]), 0);
								set_anim_scene_entity(Local_14.f_178, "Cup", Local_14.f_160, 0);
								set_anim_scene_entity(Local_14.f_178, "COIN", Local_14.f_161, 0);
								set_anim_scene_entity(Local_14.f_178, "Crutch", Local_14.f_162, 0);
								set_anim_scene_bool(Local_14.f_178, "internal_loop", false, false);
								set_anim_scene_bool(Local_14.f_178, "internal_loop_end", false, false);
								func_10(&Local_14, &(Local_14.f_178), func_65(), 0, 1, 0);
								reset_anim_scene(Local_14.f_179, 0);
							}
						}
						else if (!func_8(Local_14.f_180, 8))
						{
							if (has_anim_event_fired(&(Local_14.f_158[0]), -1527527524))
							{
								func_25(&Local_14, 39);
							}
						}
						else if (func_8(Local_14.f_180, 8) && func_8(Local_14.f_180, 4))
						{
							if (has_anim_event_fired(&(Local_14.f_158[0]), -1527527524))
							{
								_0xc67a4910425f11f1(get_player_index(), "JoeBubble");
								set_entity_visible(Local_14.f_161, true);
								func_25(&Local_14, 40);
							}
						}
						else
						{
							func_66(&Local_14);
						}
						break;
					case 39:
						if (func_10(&Local_14, &(Local_14.f_179), func_67(), 1, 0, 1))
						{
							if (!func_8(Local_14.f_180, 8))
							{
								func_68(&(Local_14.f_180), 8);
							}
							func_25(&Local_14, 41);
						}
						else if (_get_anim_scene_progress(Local_14.f_179) >= 0.65f)
						{
							if (!func_8(Local_14.f_180, 8))
							{
								func_68(&(Local_14.f_180), 8);
							}
						}
						break;
					case 40:
						func_69(14, 1);
						if (func_8(Local_14.f_180, 32))
						{
							if (_0x1f0e401031e20146(Local_14.f_179, func_70()) && (_get_anim_scene_progress(Local_14.f_179) >= 0.695f || _0x8d81e7824b7753f7(Local_14.f_179, "s_base_end", 1)))
							{
								func_71(&(Local_14.f_180), 1024);
								func_72(14, 32768);
								func_71(&(Local_14.f_180), 4096);
								_display_hud_component(724769646);
								func_73(&(Local_14.f_190), 0);
								func_74(&Local_14, 0);
								func_75(Local_14.f_211[0], 0, 0);
								func_75(Local_14.f_211[0], 0, 0);
							}
							if (func_10(&Local_14, &(Local_14.f_179), func_70(), 1, 0, 1))
							{
								func_76(&(Local_14.f_1), "SPJB_STILLHERE", &(Local_14.f_158[0]), Global_35, 0, 0, 1, 1);
								if (!func_8(Local_14.f_180, 16))
								{
									func_68(&(Local_14.f_180), 16);
								}
								func_25(&Local_14, 41);
							}
						}
						if (!func_8(Local_14.f_180, 512))
						{
							if (_0x1f0e401031e20146(Local_14.f_179, func_70()) && _get_anim_scene_progress(Local_14.f_179) > 0.32f)
							{
								func_77(100, 0, 0, 1, 1);
								func_78(12, 0, 0, "", &(Local_14.f_158[0]), 0, 1065353216, 0);
								func_68(&(Local_14.f_180), 512);
							}
						}
						break;
					case 41:
						if (func_8(Local_14.f_180, 16))
						{
							if (func_27(&(Local_14.f_178)))
							{
								set_anim_scene_entity(Local_14.f_178, "JOE_BUTLER", &(Local_14.f_158[0]), 0);
								set_anim_scene_entity(Local_14.f_178, "Cup", Local_14.f_160, 0);
								set_anim_scene_entity(Local_14.f_178, "COIN", Local_14.f_161, 0);
								set_anim_scene_entity(Local_14.f_178, "Crutch", Local_14.f_162, 0);
								set_anim_scene_bool(Local_14.f_178, "internal_loop", false, false);
								set_anim_scene_bool(Local_14.f_178, "internal_loop_end", false, false);
								func_10(&Local_14, &(Local_14.f_178), func_13(), 0, 1, 0);
								reset_anim_scene(Local_14.f_179, 0);
								func_25(&Local_14, 5);
							}
						}
						else if ((is_entity_in_volume(Global_35, Local_14.f_164, true, 0) || func_8(Local_14.f_180, 65536)) && !func_8(Local_14.f_180, 8))
						{
							if (func_10(&Local_14, &(Local_14.f_179), func_12(), 1, 0, 0))
							{
								func_25(&Local_14, 39);
							}
						}
						else if (func_10(&Local_14, &(Local_14.f_179), func_12(), 0, 1, 0))
						{
							func_25(&Local_14, 38);
						}
						break;
					case 5:
						if (func_10(&Local_14, &(Local_14.f_178), func_13(), 0, 1, 0))
						{
							func_25(&Local_14, 3);
						}
						break;
					case 3:
						func_79(&Local_14);
						if (func_10(&Local_14, &(Local_14.f_178), func_9(), 0, 1, 0))
						{
						}
						break;
					case 50:
						if (func_8(Local_14.f_180, 32768))
						{
							if (func_10(&Local_14, &(Local_14.f_178), func_80(), 0, 1, 0))
							{
								func_25(&Local_14, 51);
							}
						}
						else if (func_10(&Local_14, &(Local_14.f_178), func_81(), 0, 1, 0))
						{
							func_25(&Local_14, 51);
						}
						break;
					case 51:
						func_82(&Local_14);
						break;
					case 48:
						break;
					case 49:
						break;
					case 56:
						break;
					case 57:
						break;
					default:
						break;
				}
				func_83(&Local_14, 1);
			}
		}
	}
}

bool func_1(var uParam0)
{
	if (!does_entity_exist(*uParam0) || is_entity_dead(*uParam0))
	{
		return true;
	}
	if (get_cause_of_most_recent_force_cleanup() != 1 && get_cause_of_most_recent_force_cleanup() != 2048)
	{
		return true;
	}
	if (is_screen_faded_out())
	{
		return true;
	}
	return false;
}

void func_2(int iParam0, bool bParam1)
{
	func_84(14);
	_display_hud_component(724769646);
	if (is_itemset_valid(iParam0->f_155))
	{
		destroy_itemset(iParam0->f_155);
	}
	if (is_itemset_valid(iParam0->f_156))
	{
		destroy_itemset(iParam0->f_156);
	}
	if (is_itemset_valid(iParam0->f_157))
	{
		destroy_itemset(iParam0->f_157);
	}
	func_85(&(iParam0->f_283));
	if (func_86(iParam0->f_149) && (func_87(iParam0->f_149) || func_88(iParam0->f_149)))
	{
		func_89(iParam0->f_149, 0, 2);
	}
	if (_is_anim_scene_started(iParam0->f_178, false))
	{
		remove_anim_scene_entity(iParam0->f_178, "Crutch", iParam0->f_162);
		apply_force_to_entity(iParam0->f_162, 1, 0f, 0f, 0.5f, 0f, 0f, -0.1f, 0, true, true, true, false, true);
	}
	if (_is_anim_scene_started(iParam0->f_179, false))
	{
		remove_anim_scene_entity(iParam0->f_179, "Crutch", iParam0->f_162);
		apply_force_to_entity(iParam0->f_162, 1, 0f, 0f, 0.5f, 0f, 0f, -0.1f, 0, true, true, true, false, true);
	}
	func_90(0);
	if (_does_volume_exist(iParam0->f_163))
	{
		func_91(iParam0->f_163);
		_delete_volume(iParam0->f_163);
	}
	if (_does_volume_exist(iParam0->f_165))
	{
		_0x74c2b3dc0b294102(iParam0->f_165);
		_0xa1cfb35069d23c23(iParam0->f_165);
		_delete_volume(iParam0->f_165);
	}
	if (_does_volume_exist(iParam0->f_164))
	{
		_0x74c2b3dc0b294102(iParam0->f_164);
		_0xa1cfb35069d23c23(iParam0->f_164);
		_delete_volume(iParam0->f_164);
	}
	if (_does_volume_exist(iParam0->f_166))
	{
		_delete_volume(iParam0->f_166);
	}
	if (_does_volume_exist(iParam0->f_167))
	{
		_delete_volume(iParam0->f_167);
	}
	if (_does_volume_exist(iParam0->f_168))
	{
		_delete_volume(iParam0->f_168);
	}
	if (_does_volume_exist(iParam0->f_169))
	{
		_delete_volume(iParam0->f_169);
	}
	if (_does_volume_exist(iParam0->f_170))
	{
		_delete_volume(iParam0->f_170);
	}
	if (_does_volume_exist((*(*Global_1396257)[14])[0]->f_47))
	{
		_delete_volume((*(*Global_1396257)[14])[0]->f_47);
	}
	if (_does_volume_exist((*(*Global_1396257)[14])[1]->f_47))
	{
		_delete_volume((*(*Global_1396257)[14])[1]->f_47);
	}
	if (_does_volume_exist((*(*Global_1396257)[14])[2]->f_47))
	{
		_delete_volume((*(*Global_1396257)[14])[2]->f_47);
	}
	if (_does_volume_exist((*(*Global_1396257)[14])[3]->f_47))
	{
		_delete_volume((*(*Global_1396257)[14])[3]->f_47);
	}
	if (bParam1)
	{
		if (_does_anim_scene_exist(iParam0->f_178))
		{
			_delete_anim_scene(iParam0->f_178);
		}
		if (_does_anim_scene_exist(iParam0->f_179))
		{
			_delete_anim_scene(iParam0->f_179);
		}
		if (is_entity_on_screen(&(iParam0->f_158[0])))
		{
			if (!is_entity_dead(&(iParam0->f_158[0])))
			{
				remove_entity_from_audio_mix_group(&(iParam0->f_158[0]), 0f);
				_0x39a2fc5af55a52b1(&(iParam0->f_158[0]), -1);
				set_ped_as_no_longer_needed(iParam0->f_158[0]);
			}
		}
		else if (!is_entity_dead(&(iParam0->f_158[0])))
		{
			set_ped_config_flag(&(iParam0->f_158[0]), 153, false);
			remove_entity_from_audio_mix_group(&(iParam0->f_158[0]), 0f);
			delete_ped(iParam0->f_158[0]);
		}
		if (does_entity_exist(iParam0->f_160))
		{
			set_object_as_no_longer_needed(&(iParam0->f_160));
		}
		if (does_entity_exist(iParam0->f_161))
		{
			set_object_as_no_longer_needed(&(iParam0->f_161));
		}
		if (does_entity_exist(iParam0->f_162))
		{
			set_object_as_no_longer_needed(&(iParam0->f_162));
		}
		if (func_92(&(iParam0->f_172)))
		{
			_0x9cf1836c03fb67a2(&(iParam0->f_172), 1);
		}
		_0xc67a4910425f11f1(get_player_index(), "JoeBubble");
		terminate_this_thread();
	}
}

void func_3(var uParam0)
{
	if ((*uParam0 >= 49 && *uParam0 <= 51) || func_6(29, 1))
	{
		return;
	}
	if (does_entity_exist(&(uParam0->f_158[0])))
	{
		if (!func_93(&(uParam0->f_158[0]), 0))
		{
			func_2(uParam0, 1);
			func_71(&(uParam0->f_180), 1024);
			func_72(14, 32768);
			func_71(&(uParam0->f_180), 4096);
			_display_hud_component(724769646);
			func_94(uParam0->f_158[0]);
			func_95(&(uParam0->f_211), 1, 1, 1, 0);
			func_25(uParam0, 49);
		}
		else if (((*uParam0 >= 2 && *uParam0 < 49) && func_96(&(uParam0->f_158[0]), 0, &(uParam0->f_99), &(uParam0->f_127), 0, uParam0->f_175)) || _get_lassoed_entity(Global_35) == &uParam0->f_158[0])
		{
			uParam0->f_282 = 1;
			if (!func_27(&(uParam0->f_178)))
			{
				return;
			}
			else
			{
				set_anim_scene_entity(uParam0->f_178, "JOE_BUTLER", &(uParam0->f_158[0]), 0);
				set_anim_scene_entity(uParam0->f_178, "Cup", uParam0->f_160, 0);
				set_anim_scene_entity(uParam0->f_178, "COIN", uParam0->f_161, 0);
				set_anim_scene_entity(uParam0->f_178, "Crutch", uParam0->f_162, 0);
				set_anim_scene_bool(uParam0->f_178, "internal_loop", false, false);
				set_anim_scene_bool(uParam0->f_178, "internal_loop_end", false, false);
			}
			if (uParam0->f_127 == 2048 || uParam0->f_127 == 2)
			{
				_0x2e5b5d1f1453e08e(&(uParam0->f_158[0]), 0);
				func_2(uParam0, 0);
				func_71(&(uParam0->f_180), 1024);
				func_72(14, 32768);
				func_71(&(uParam0->f_180), 4096);
				_display_hud_component(724769646);
				func_94(uParam0->f_158[0]);
				func_95(&(uParam0->f_211), 1, 1, 1, 0);
				func_25(uParam0, 49);
			}
			else
			{
				if (*uParam0 == 3)
				{
					func_68(&(uParam0->f_180), 32768);
				}
				else if (*uParam0 == 5)
				{
					if (_get_anim_scene_progress(uParam0->f_178) > 0.29f)
					{
						func_68(&(uParam0->f_180), 32768);
					}
				}
				else if (*uParam0 == 4)
				{
					if (_get_anim_scene_progress(uParam0->f_178) < 0.1f)
					{
						func_68(&(uParam0->f_180), 32768);
					}
				}
				func_71(&(uParam0->f_180), 1024);
				func_72(14, 32768);
				func_71(&(uParam0->f_180), 4096);
				_display_hud_component(724769646);
				func_94(uParam0->f_158[0]);
				func_95(&(uParam0->f_211), 1, 1, 1, 0);
				func_25(uParam0, 50);
			}
		}
	}
}

void func_4(var uParam0, int iParam1)
{
	if (!func_93(Global_35, 0))
	{
		func_2(uParam0, 1);
	}
	else if (!is_entity_in_volume(Global_35, (*(*Global_1396257)[14])[iParam1]->f_47, true, 0))
	{
		if (!func_28(&(uParam0->f_128)))
		{
			func_97(&(uParam0->f_128), 0);
		}
		else if (func_30(&(uParam0->f_128)) > 5f)
		{
			func_32(&(uParam0->f_128));
			func_2(uParam0, 1);
		}
	}
	else if (func_98(14, iParam1, &(uParam0->f_283), &(uParam0->f_158[0])))
	{
		if (func_99(&(uParam0->f_283)))
		{
			func_2(uParam0, 1);
		}
		else if (*uParam0 < 38 || *uParam0 > 47)
		{
			func_100(uParam0);
		}
	}
}

bool func_5(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		if (func_101())
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
		if (func_102(0) == 7 || func_103())
		{
			return true;
		}
	}
	if (func_104(&((*Global_1396257)[iParam0]->f_626), 1024))
	{
		return true;
	}
	return false;
}

bool func_6(int iParam0, int iParam1)
{
	if (!func_105(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_15768[iParam0] && iParam1) != 0;
}

bool func_7(int iParam0)
{
	if (!_does_volume_exist(iParam0->f_170))
	{
		return false;
	}
	if (func_106(Global_35, iParam0->f_170, 1, 0))
	{
		return true;
	}
	return false;
}

bool func_8(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

char[] func_9()
{
	return "pl_sit_loop_base";
}

bool func_10(int iParam0, var uParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	switch (iParam0->f_282)
	{
		case 0:
			if (!_is_anim_scene_started(*uParam1, false) && _is_anim_scene_loaded(*uParam1, true, false))
			{
				start_anim_scene(*uParam1);
			}
			else
			{
				iParam0->f_282 = 1;
			}
			break;
		case 1:
			if (_0x23e33cb9f4a3f547(*uParam1, sParam2))
			{
				bVar0 = true;
			}
			if (_0x1f0e401031e20146(*uParam1, sParam2))
			{
				bVar1 = true;
			}
			if (!bVar0 && !bVar1)
			{
				_0xdf7b5144e25cd3fe(*uParam1, sParam2);
			}
			if (bVar1)
			{
				iParam0->f_282 = 3;
			}
			if (bVar0)
			{
				iParam0->f_282 = 2;
			}
			break;
		case 2:
			if (bParam5)
			{
				if (!func_107(iParam0->f_158[0], 50f, iParam0->f_175))
				{
					return false;
				}
			}
			if (_0x23e33cb9f4a3f547(*uParam1, sParam2))
			{
				bVar0 = true;
			}
			if (_0x1f0e401031e20146(*uParam1, sParam2))
			{
				bVar1 = true;
			}
			if (!bVar1 && bVar0)
			{
				_set_anim_scene_playback_list_bool(*uParam1, sParam2, true);
				set_anim_scene_bool(*uParam1, "internal_loop", bParam3, false);
				set_anim_scene_bool(*uParam1, "internal_loop_end", bParam4, false);
				return false;
			}
			else if (bVar1)
			{
				iParam0->f_282 = 3;
			}
			break;
		case 3:
			if (_0x8d81e7824b7753f7(*uParam1, "s_base_end", 1) && !bParam4)
			{
				if (func_108(uParam1, iParam0->f_173))
				{
					iParam0->f_173 = sParam2;
					return true;
				}
			}
			else if (_0x8d81e7824b7753f7(*uParam1, "s_base", 1) && bParam4)
			{
				if (func_108(uParam1, iParam0->f_173))
				{
					iParam0->f_173 = sParam2;
					return true;
				}
			}
			else if (_0x8d81e7824b7753f7(*uParam1, "s_sit_loop_base", 1) && bParam4)
			{
				if (func_108(uParam1, iParam0->f_173))
				{
					iParam0->f_173 = sParam2;
					return true;
				}
			}
			else if (_0x8d81e7824b7753f7(*uParam1, "s_cower_loop_base", 1) && bParam4)
			{
				if (func_108(uParam1, iParam0->f_173))
				{
					iParam0->f_173 = sParam2;
					return true;
				}
			}
			break;
	}
	return false;
}

char[] func_11()
{
	return "pl_cower_loop_base";
}

char* func_12()
{
	return "pbl_base_reset";
}

char[] func_13()
{
	return "pl_stand_to_sit";
}

void func_14(int iParam0)
{
	if (is_entity_dead(&(iParam0->f_158[0])) && is_entity_dead(Global_35))
	{
		return;
	}
	if (!func_28(&(iParam0->f_140)))
	{
		func_29(&(iParam0->f_140), 0f);
	}
	else if (func_109(&(iParam0->f_140)) >= 1000)
	{
		iParam0->f_175 = get_distance_between_coords(get_entity_coords(&(iParam0->f_158[0]), true, false), func_110(get_player_index()), true);
		func_32(&(iParam0->f_140));
	}
}

int func_15(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, float fParam5, float fParam6, bool bParam7)
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
			Global_40.f_11623[iParam0]->f_2 = func_111();
			*uParam4 = 1;
			return 1;
		}
	}
	if (fParam5 == 0f)
	{
		if (!func_112(Global_35, *uParam2, fParam6, 1))
		{
			return 0;
		}
	}
	else if (fParam5 > fParam6)
	{
		return 0;
	}
	if (!func_28(uParam3))
	{
		func_29(uParam3, 0f);
	}
	else if (func_30(uParam3) >= 2f)
	{
		if (!func_113(Global_40.f_11623[iParam0]->f_2))
		{
			func_114(iParam0);
			*uParam4 = 1;
			func_32(uParam3);
			return 1;
		}
		else
		{
			func_114(iParam0);
			*uParam4 = 1;
			func_32(uParam3);
			return 1;
		}
	}
	return 0;
}

void func_16(int iParam0)
{
	if (func_8(iParam0->f_180, 2))
	{
		func_115(iParam0);
	}
	else
	{
		func_116(iParam0);
	}
}

void func_17(int iParam0)
{
	if (((((!is_entity_dead(Global_35) && !is_entity_dead(&(iParam0->f_158[0]))) && func_8(iParam0->f_180, 8)) && func_8(iParam0->f_180, 4)) && !func_8(iParam0->f_180, 16)) && !func_8(iParam0->f_180, 32))
	{
		func_117(&(iParam0->f_169), &(iParam0->f_155), &(iParam0->f_188));
		func_90(1);
		if (!func_8(iParam0->f_180, 1024))
		{
			func_68(&(iParam0->f_180), 1024);
			func_118(14, 32768);
			_hide_hud_component(724769646);
		}
		if (func_120(func_119(Global_35, 0, 1, 0)) || func_120(func_119(Global_35, 1, 1, 0)))
		{
			_0x94a3c1b804d291ec(Global_35, 1, 0, 1, 0);
			return;
		}
		if (!func_121())
		{
			return;
		}
		if (func_122(&Global_35, 1319.544f, -1291.12f, 76.1169f, -115.09f, &(iParam0->f_281), 20000, 1056964608, 1092616192))
		{
			func_90(0);
			func_68(&(iParam0->f_180), 32);
		}
	}
}

void func_18(int iParam0)
{
	if (func_8(iParam0->f_180, 128) && iParam0->f_184 >= 3)
	{
		return;
	}
	if (*iParam0 >= 7 && *iParam0 <= 36)
	{
		if (_get_anim_scene_progress(iParam0->f_178) >= 0.8f)
		{
			return;
		}
		if (iParam0->f_183 < 2)
		{
			if (func_123(iParam0->f_158[0], &(iParam0->f_187), &(iParam0->f_143), &(iParam0->f_184), 3, 0, 7000, 0))
			{
				func_68(&(iParam0->f_180), 128);
			}
		}
	}
}

void func_19(int iParam0)
{
	if (func_8(iParam0->f_180, 1024))
	{
		disable_all_control_actions(0);
		disable_all_control_actions(1);
		enable_control_action(0, -668070958, true);
		enable_control_action(0, 1250966545, true);
		func_124();
		func_125(&(iParam0->f_211));
		func_126();
		func_127(Global_35);
		func_127(&(iParam0->f_158[0]));
	}
}

void func_20(int iParam0, var uParam1, int iParam2, int iParam3, float fParam4)
{
	if (is_entity_dead(iParam0) || Global_1935630->f_12)
	{
		return;
	}
	sVar0 = func_128(iParam3);
	if (fParam4 == 0f)
	{
		if (func_112(iParam0, Global_35, 15f, 1))
		{
			if (!func_129(*uParam1, iParam2))
			{
				if (_0x6339c1ea3979b5f7(sVar0, "special_ped_scenes"))
				{
					func_130(uParam1, iParam2);
				}
			}
		}
		else if (func_129(*uParam1, iParam2))
		{
			_0x9428447ded71fc7e("special_ped_scenes");
			func_131(uParam1, iParam2);
		}
	}
	else if (fParam4 <= 15f)
	{
		if (!func_129(*uParam1, iParam2))
		{
			if (_0x6339c1ea3979b5f7(sVar0, "special_ped_scenes"))
			{
				func_130(uParam1, iParam2);
			}
		}
	}
	else if (func_129(*uParam1, iParam2))
	{
		_0x9428447ded71fc7e("special_ped_scenes");
		func_131(uParam1, iParam2);
	}
}

void func_21(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8)
{
	if (!func_129(*uParam1, iParam2))
	{
		return;
	}
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		if (!is_string_null_or_empty(sParam7))
		{
			_0xc67a4910425f11f1(player_id(), sParam7);
		}
		if (!is_string_null_or_empty(sParam8))
		{
			_0xc67a4910425f11f1(player_id(), sParam8);
		}
		return;
	}
	if (func_129(*uParam1, iParam3))
	{
		if (!func_129(*uParam1, iParam4))
		{
			if (!is_string_null_or_empty(sParam7))
			{
				_0xc67a4910425f11f1(player_id(), sParam7);
			}
			if (!is_string_null_or_empty(sParam8) && !is_string_null_or_empty(sParam6))
			{
				_0x3946fc742ac305cd(player_id(), iParam0, sParam6, 0f, 0f, 0f, 0, sParam8);
			}
			func_130(uParam1, iParam4);
		}
	}
	else if (func_129(*uParam1, iParam4))
	{
		if (!is_string_null_or_empty(sParam8))
		{
			_0xc67a4910425f11f1(player_id(), sParam8);
		}
		if (!is_string_null_or_empty(sParam7) && !is_string_null_or_empty(sParam5))
		{
			_0x3946fc742ac305cd(player_id(), iParam0, sParam5, 0f, 0f, 0f, 0, sParam7);
		}
		func_131(uParam1, iParam4);
	}
}

void func_22(int iParam0)
{
	if (!does_entity_exist(&(iParam0->f_158[0])))
	{
		return;
	}
	set_ped_can_play_gesture_anims(&(iParam0->f_158[0]), 0, 1);
}

void func_23(int iParam0)
{
	iParam0->f_176 = (30 - 1);
	if (!_does_anim_scene_exist(iParam0->f_178))
	{
		iParam0->f_178 = _create_anim_scene(func_132(), 0, func_33(), false, true);
	}
	if (!_does_anim_scene_exist(iParam0->f_179))
	{
		iParam0->f_179 = _create_anim_scene(func_133(), 32, func_12(), false, true);
	}
	if (_does_anim_scene_exist(iParam0->f_178) && _does_anim_scene_exist(iParam0->f_179))
	{
		load_anim_scene(iParam0->f_178);
		load_anim_scene(iParam0->f_179);
		request_anim_dict(func_134());
		request_anim_dict(func_135());
		_text_database_request("SPJB");
		_text_database_request("SPJBAUD");
		_text_database_request("SPDEF");
		request_model(iParam0->f_150, false);
		request_model(iParam0->f_151, false);
		request_model(iParam0->f_152, false);
		request_model(iParam0->f_153, false);
		func_136(iParam0);
		func_137(iParam0->f_163, "SP_JoeButler1_Block", 1, 0, 0, 0, -1082130432);
		_0xb56d41a694e42e86(iParam0->f_165, 2500607, 0, 0, -1, -1, 10);
		_0x18262cafebb5fbe1(iParam0->f_165, 2238463, 0, 0, -1, -1, 0);
		iParam0->f_149 = func_139(14, 0, 9, func_138(14));
		if (!func_86(iParam0->f_149))
		{
		}
		if (func_140())
		{
			func_141(&(iParam0->f_1), Global_35, "JOHN", 0);
		}
		else
		{
			func_141(&(iParam0->f_1), Global_35, "ARTHUR", 0);
		}
		func_142(&(iParam0->f_283));
		func_143(&(iParam0->f_99));
		func_144(&(iParam0->f_99), 1);
		func_145(&(iParam0->f_99), 1);
		func_146(&(iParam0->f_99), 1);
		func_147(&(iParam0->f_99), 1);
		func_148(&(iParam0->f_99), 1);
		func_149(&(iParam0->f_99), 1);
		func_150(&(iParam0->f_99), 0);
		func_151(&(iParam0->f_99), 1);
		func_152(&(iParam0->f_99), 0);
		func_153(&(iParam0->f_99), 1);
		func_154(&(iParam0->f_99), 1);
		func_155(&(iParam0->f_99), 1);
		func_156(&(iParam0->f_99), 0);
		func_157(&(iParam0->f_99), 0);
		func_158(&(iParam0->f_99), 1);
		func_159(&(iParam0->f_99), 1);
		func_160(&(iParam0->f_99), 1);
		func_161(&(iParam0->f_99), 0);
		iParam0->f_282 = 0;
		iParam0->f_182 = 0;
		if (func_86(iParam0->f_149))
		{
			if (!func_162(iParam0->f_149, 1))
			{
				func_25(iParam0, 1);
			}
			else
			{
				func_25(iParam0, 56);
			}
		}
	}
}

bool func_24(int iParam0)
{
	_0xed9582b3da8f02b4(1);
	if (((((((((((_is_anim_scene_loaded(iParam0->f_178, true, false) && _is_anim_scene_loaded(iParam0->f_179, true, false)) && has_anim_dict_loaded(func_134())) && has_anim_dict_loaded(func_135())) && _text_database_has_loaded("SPJB")) && _text_database_has_loaded("SPJBAUD")) && _text_database_has_loaded("SPDEF")) && has_model_loaded(iParam0->f_150)) && has_model_loaded(iParam0->f_151)) && has_model_loaded(iParam0->f_152)) && has_model_loaded(iParam0->f_153)) && _0x5c16855277819bbf() == 1)
	{
		return true;
	}
	return false;
}

void func_25(int iParam0, int iParam1)
{
	iParam0->f_282 = 0;
	*iParam0 = iParam1;
}

void func_26(int iParam0)
{
	vVar0 = { func_163(0) };
	vVar4 = { func_163(3) };
	vVar8 = { func_163(1) };
	if (((func_164(iParam0->f_158[0], iParam0->f_150, vVar0, vVar0.f_3, 1, 0, 1) && func_165(&(iParam0->f_160), iParam0->f_151, vVar8)) && func_165(&(iParam0->f_161), iParam0->f_152, vVar4)) && func_165(&(iParam0->f_162), iParam0->f_153, vVar8))
	{
		if (func_93(&(iParam0->f_158[0]), 0))
		{
			add_entity_to_audio_mix_group(&(iParam0->f_158[0]), "special_ped_group", 0f);
			set_blocking_of_non_temporary_events(&(iParam0->f_158[0]), true);
			set_ped_can_ragdoll_from_player_impact(&(iParam0->f_158[0]), true);
			func_141(&(iParam0->f_1), &(iParam0->f_158[0]), "JOE_BUTLER", 0);
			_set_entity_coords_and_heading(&(iParam0->f_158[0]), vVar0, vVar0.f_3, true, false, true);
			set_ped_config_flag(&(iParam0->f_158[0]), 297, true);
			set_ped_config_flag(&(iParam0->f_158[0]), 130, true);
			set_ped_config_flag(&(iParam0->f_158[0]), 317, true);
			set_ped_config_flag(&(iParam0->f_158[0]), 315, true);
			set_ped_config_flag(&(iParam0->f_158[0]), 153, true);
			_0xfd3c31a2e45671e7(&(iParam0->f_158[0]), 43312);
			_0xae6004120c18df97(&(iParam0->f_158[0]), 0, 0);
			func_166(&(iParam0->f_158[0]), 1);
			_0x5bcf0b79d4f5dba3(&(iParam0->f_158[0]), 5f);
			_0x2e5b5d1f1453e08e(&(iParam0->f_158[0]), 0);
			set_entity_visible(iParam0->f_161, false);
			set_anim_scene_entity(iParam0->f_178, "JOE_BUTLER", &(iParam0->f_158[0]), 0);
			set_anim_scene_entity(iParam0->f_178, "Cup", iParam0->f_160, 0);
			set_anim_scene_entity(iParam0->f_178, "COIN", iParam0->f_161, 0);
			set_anim_scene_entity(iParam0->f_178, "Crutch", iParam0->f_162, 0);
			set_anim_scene_entity(iParam0->f_179, "JOE_BUTLER", &(iParam0->f_158[0]), 0);
			set_anim_scene_entity(iParam0->f_179, "Cup", iParam0->f_160, 0);
			set_anim_scene_entity(iParam0->f_179, "COIN", iParam0->f_161, 0);
			set_anim_scene_entity(iParam0->f_179, "ARTHUR", Global_35, 0);
			set_anim_scene_entity(iParam0->f_179, "Crutch", iParam0->f_162, 0);
			func_167(iParam0->f_158[0], &(iParam0->f_181), -1130398329, 15f, 3600f);
			func_74(iParam0, 0);
			func_75(iParam0->f_211[0], 0, 0);
			func_75(iParam0->f_211[1], 0, 0);
			_0x3946fc742ac305cd(get_player_index(), &(iParam0->f_158[0]), "SPECIAL_PED_LIGHTWEIGHT_1_0", 0f, 0f, 0f, 0, "JoeBubble");
			_0x7c00cfc48a782dc0(iParam0->f_167, &(iParam0->f_158[0]), 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
			if (!_does_volume_exist(iParam0->f_168))
			{
				Var12 = { func_168(5) };
				iParam0->f_168 = _0x0eb78c2b156635b1(Var12, Var12.f_1, Var12.f_4, Var12.f_7);
				_0x7c00cfc48a782dc0(iParam0->f_168, &(iParam0->f_158[0]), 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
			}
			if (!_does_volume_exist(iParam0->f_169))
			{
				Var12 = { func_168(6) };
				iParam0->f_169 = _0x0eb78c2b156635b1(Var12, Var12.f_1, Var12.f_4, Var12.f_7);
				_0x7c00cfc48a782dc0(iParam0->f_169, &(iParam0->f_158[0]), 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
				_0x5b23dff8e0948bb2(iParam0->f_169, 0);
				_0xbe551c2cc421185d(iParam0->f_169, 1);
			}
			if (!func_92(&(iParam0->f_172)))
			{
				iParam0->f_172 = _0xfa50f79257745e74(vVar0, 1.25f, 1, 2, 0);
			}
			func_68(&(iParam0->f_180), 2048);
			func_169(&(iParam0->f_158[0]), 14);
			func_25(iParam0, 4);
		}
	}
}

bool func_27(var uParam0)
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

bool func_28(var uParam0)
{
	return func_170(*uParam0, 1);
}

void func_29(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_171() - fParam1);
	func_172(uParam0, 1);
	func_173(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_30(var uParam0)
{
	if (!func_28(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_174(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_171() - uParam0->f_1);
}

void func_31(int iParam0, var uParam1)
{
	switch (*uParam1)
	{
		case 0:
			*uParam1++;
			func_25(iParam0, 7);
			break;
		case 1:
			*uParam1++;
			func_25(iParam0, 8);
			break;
		case 2:
			*uParam1++;
			if (func_140())
			{
				func_25(iParam0, 32);
			}
			else
			{
				func_25(iParam0, 9);
			}
			break;
		case 3:
			*uParam1++;
			func_25(iParam0, 10);
			break;
		case 4:
			*uParam1++;
			func_25(iParam0, 11);
			break;
		case 5:
			*uParam1++;
			if (func_140())
			{
				func_25(iParam0, 34);
			}
			else
			{
				func_25(iParam0, 12);
			}
			break;
		case 6:
			*uParam1++;
			func_25(iParam0, 13);
			break;
		case 7:
			*uParam1++;
			func_25(iParam0, 14);
			break;
		case 8:
			*uParam1++;
			func_25(iParam0, 15);
			break;
		case 9:
			*uParam1++;
			func_25(iParam0, 16);
			break;
		case 10:
			*uParam1++;
			func_25(iParam0, 17);
			break;
		case 11:
			*uParam1++;
			func_25(iParam0, 18);
			break;
		case 12:
			*uParam1++;
			func_25(iParam0, 19);
			break;
		case 13:
			*uParam1++;
			func_25(iParam0, 20);
			break;
		case 14:
			*uParam1++;
			if (func_140())
			{
				func_25(iParam0, 14);
			}
			else
			{
				func_25(iParam0, 21);
			}
			break;
		case 15:
			*uParam1++;
			func_25(iParam0, 22);
			break;
		case 16:
			*uParam1++;
			func_25(iParam0, 23);
			break;
		case 17:
			*uParam1++;
			func_25(iParam0, 24);
			break;
		case 18:
			*uParam1++;
			func_25(iParam0, 25);
			break;
		case 19:
			*uParam1++;
			func_25(iParam0, 26);
			break;
		case 20:
			*uParam1++;
			if (func_140())
			{
				func_25(iParam0, 17);
			}
			else
			{
				func_25(iParam0, 27);
			}
			break;
		case 21:
			*uParam1++;
			func_25(iParam0, 28);
			break;
		case 22:
			*uParam1++;
			func_25(iParam0, 29);
			break;
		case 23:
			*uParam1++;
			func_25(iParam0, 30);
			break;
		case 24:
			*uParam1++;
			func_25(iParam0, 31);
			break;
		case 25:
			*uParam1++;
			if (func_140())
			{
				func_25(iParam0, 22);
			}
			else
			{
				func_25(iParam0, 32);
			}
			break;
		case 26:
			*uParam1++;
			func_25(iParam0, 33);
			break;
		case 27:
			*uParam1++;
			func_25(iParam0, 34);
			break;
		case 28:
			*uParam1++;
			func_25(iParam0, 35);
			break;
		case 29:
			*uParam1 = 0;
			func_25(iParam0, 36);
			break;
		case 30:
			func_25(iParam0, 37);
			break;
		default:
			break;
	}
}

void func_32(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

char* func_33()
{
	return "pl_sit_to_stand";
}

char[] func_34()
{
	return "pbl_P10_Loop01";
}

bool func_35(int iParam0)
{
	if ((is_entity_in_volume(Global_35, iParam0->f_164, true, 0) && !is_scripted_speech_playing(&(iParam0->f_158[0]))) || (func_8(iParam0->f_180, 65536) && !is_scripted_speech_playing(&(iParam0->f_158[0]))))
	{
		return true;
	}
	return false;
}

char[] func_36()
{
	return "pbl_P10_loop02";
}

char[] func_37()
{
	return "pbl_P11_T01_Loop01";
}

char[] func_38()
{
	return "pbl_P1_T01_Loop01";
}

char[] func_39()
{
	return "pbl_P11_T01_Loop02";
}

char[] func_40()
{
	return "pbl_P11_T02_Loop01";
}

char[] func_41()
{
	return "pbl_P8_T03_Loop03";
}

char[] func_42()
{
	return "pbl_P1_T02_Loop01";
}

char[] func_43()
{
	return "pbl_P1_T01_Loop02";
}

char[] func_44()
{
	return "pbl_P1_T02_Loop02";
}

char[] func_45()
{
	return "pbl_P8_T03_Loop01";
}

char[] func_46()
{
	return "pbl_P8_T03_Loop02";
}

char[] func_47()
{
	return "pbl_P1_T02_Loop03";
}

char[] func_48()
{
	return "pbl_P1_T01_Loop03";
}

char[] func_49()
{
	return "pbl_P2_Loop02";
}

char[] func_50()
{
	return "pbl_P3_Loop01";
}

char[] func_51()
{
	return "pbl_P4_Loop01";
}

char[] func_52()
{
	return "pbl_P1_T01_Loop04";
}

char[] func_53()
{
	return "pbl_P4_T03_Loop02";
}

char[] func_54()
{
	return "pbl_P5_Loop01";
}

char[] func_55()
{
	return "pbl_P5_Loop02";
}

char[] func_56()
{
	return "pbl_P2_Loop01";
}

char[] func_57()
{
	return "pbl_P1_T01_Loop05";
}

char[] func_58()
{
	return "pbl_P6_T02_Loop01";
}

char[] func_59()
{
	return "pbl_P6_T03_Loop01";
}

char[] func_60()
{
	return "pbl_P7_Loop01";
}

char[] func_61()
{
	return "pbl_P1_T01_Loop06";
}

char[] func_62()
{
	return "pbl_P8_T05_Loop01";
}

char[] func_63()
{
	return "pbl_P9_Loop01";
}

char[] func_64()
{
	return "pbl_P9_Loop02";
}

char[] func_65()
{
	return "pbl_base_reset";
}

void func_66(int iParam0)
{
	if (!does_entity_exist(Global_35) || !does_entity_exist(&(iParam0->f_158[0])))
	{
		return;
	}
	if ((func_8(iParam0->f_180, 16) || func_8(iParam0->f_180, 4)) || iParam0->f_175 > 12f)
	{
		if (func_28(&(iParam0->f_146)))
		{
			func_32(&(iParam0->f_146));
		}
		return;
	}
	if (is_scripted_speech_playing(Global_35) || is_scripted_speech_playing(&(iParam0->f_158[0])))
	{
		return;
	}
	if (!func_28(&(iParam0->f_146)))
	{
		func_29(&(iParam0->f_146), 0f);
	}
	else if (func_109(&(iParam0->f_146)) >= 10000)
	{
		func_32(&(iParam0->f_146));
		func_175(&(iParam0->f_158[0]), "HEY_IM_TALKING", -417894478, Global_35, 0, "JOE_BUTLER", 0, 1);
	}
}

char[] func_67()
{
	return "pbl_AskForMoney";
}

void func_68(var uParam0, int iParam1)
{
	func_130(uParam0, iParam1);
}

void func_69(int iParam0, int iParam1)
{
	if (&Global_40.f_11623[iParam0] != iParam1)
	{
		Global_40.f_11623[iParam0] = iParam1;
	}
}

char[] func_70()
{
	return "pbl_GiveMoney";
}

void func_71(var uParam0, int iParam1)
{
	func_131(uParam0, iParam1);
}

void func_72(int iParam0, int iParam1)
{
	func_176(&((*Global_1396257)[iParam0]->f_626), iParam1, 0);
}

void func_73(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_32(&(iParam0->f_18));
}

void func_74(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		Var0 = "JB1_UC_GIVE";
		Var0.f_1 = -163964935;
	}
	else
	{
		Var0 = "SPD_UC_GRT";
		Var0.f_1 = -163964935;
	}
	Var2 = "SPD_UC_ANT";
	Var2.f_1 = 648122183;
	func_177(iParam0->f_211[0], Var0, 100, "", Var0.f_1, 0, 0, 0, 1);
	func_178(iParam0->f_211[1], Var2, "", Var2.f_1, 0, 0, 0, 1, 0);
}

void func_75(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_179(iParam0, 13))
	{
		func_180(iParam0, 0);
	}
	else
	{
		func_181(iParam0, 0);
	}
	if (func_182(iParam0->f_6))
	{
		if (bParam2)
		{
			func_183(&(iParam0->f_6), 0, 1);
		}
	}
}

int func_76(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	iParam3 = iParam3;
	iParam4 = iParam4;
	if (!is_entity_dead(iParam2) && (func_184(iParam2, iParam3, 1, 1) < 70f || bParam5))
	{
		StringCopy(&cVar0, sParam1, 24);
		if (bParam7)
		{
			task_look_at_entity(iParam2, iParam3, 7000, 0, 51, 0);
			if (func_184(iParam2, iParam3, 1, 1) < 25f)
			{
				task_look_at_entity(iParam3, iParam2, 7000, 0, 51, 0);
			}
		}
		if (iParam4 > 0)
		{
			iVar3 = 1;
		}
		func_185(&uLocal_0);
		if (_0xd89504d9d7d5057d(sParam1))
		{
			if (func_186(sParam1))
			{
				return 1;
			}
		}
		else if (func_187(uParam0, cVar0, iVar3, iParam4, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_77(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_188(iParam0);
	if (bParam3)
	{
		func_189(iParam0, sParam1, iParam2);
	}
}

void func_78(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	if (func_190() != -1)
	{
		return;
	}
	if ((Global_36616 && func_191(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_192(iParam0);
	iVar0 = round((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_193(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_194(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_193(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

void func_79(int iParam0)
{
	if (!does_entity_exist(Global_35) || !does_entity_exist(&(iParam0->f_158[0])))
	{
		return;
	}
	if (((!func_8(iParam0->f_180, 16) || iParam0->f_175 > 10f) || func_8(iParam0->f_180, 16384)) || func_195(Global_35, 1))
	{
		if (func_28(&(iParam0->f_146)))
		{
			func_32(&(iParam0->f_146));
		}
		return;
	}
	if (is_any_speech_playing(Global_35) || is_scripted_speech_playing(&(iParam0->f_158[0])))
	{
		if (func_28(&(iParam0->f_146)))
		{
			func_32(&(iParam0->f_146));
		}
		return;
	}
	if (!func_28(&(iParam0->f_146)))
	{
		func_29(&(iParam0->f_146), 0f);
	}
	else if (func_109(&(iParam0->f_146)) >= 12000)
	{
		func_32(&(iParam0->f_146));
		func_175(&(iParam0->f_158[0]), "PLAYER_STILL_HANGING", -417894478, Global_35, 0, "JOE_BUTLER", 0, 1);
		iParam0->f_186++;
		if (!func_8(iParam0->f_180, 16384) && iParam0->f_186 >= 2)
		{
			func_68(&(iParam0->f_180), 16384);
		}
	}
}

char[] func_80()
{
	return "pbl_sit_to_cower";
}

char[] func_81()
{
	return "pl_enter_cower";
}

void func_82(int iParam0)
{
	if (func_6(29, 1) || iParam0->f_185 >= 2)
	{
		return;
	}
	if (!func_28(&(iParam0->f_131)))
	{
		iParam0->f_174 = to_float(get_random_int_in_range(8, 12));
		func_29(&(iParam0->f_131), 0f);
	}
	else if (func_30(&(iParam0->f_131)) > iParam0->f_174)
	{
		func_175(&(iParam0->f_158[0]), "GENERIC_FRIGHTENED_HIGH", -417894478, Global_35, 0, "JOE_BUTLER", 0, 1);
		iParam0->f_185++;
		func_29(&(iParam0->f_131), 0f);
		func_32(&(iParam0->f_131));
	}
}

void func_83(int iParam0, int iParam1)
{
	if (func_86(iParam0->f_149))
	{
		switch (*iParam0)
		{
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
			case 24:
			case 25:
			case 26:
			case 27:
			case 28:
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
			case 41:
			case 43:
			case 45:
			case 47:
			case 48:
				break;
			case 40:
			case 42:
			case 44:
			case 46:
				break;
			case 49:
				break;
			case 56:
				func_69(14, iParam1);
				func_2(iParam0, 1);
				break;
			case 57:
				break;
		}
	}
}

void func_84(int iParam0)
{
	if (!is_entity_dead(Global_35))
	{
		set_ped_config_flag(Global_35, 43, false);
	}
	if ((*Global_1396257)[iParam0]->f_631)
	{
		func_196(0, -1);
	}
	func_197();
	(*Global_1396257)[iParam0]->f_631 = 0;
	Global_1415398->f_2 = (Global_1415398->f_2 - 1);
	Global_1935183->f_28 = 0;
}

void func_85(var uParam0)
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
	if (func_28(&(uParam0->f_13)))
	{
		func_32(&(uParam0->f_13));
	}
}

bool func_86(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_87(int iParam0)
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
		iVar0 = func_198(iParam0);
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

bool func_88(int iParam0)
{
	iVar0 = func_199(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_89(int iParam0, bool bParam1, int iParam2)
{
	if (!func_86(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_88(iParam0) && !func_87(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_200(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_88(iParam0))
	{
		iParam2 = -1;
	}
	if (func_198(iParam0) == 3 || (func_198(iParam0) == 1 && _0x01f4d242765c6b24(func_200(iParam0))))
	{
		func_202(func_201(iParam0), func_200(iParam0), iParam2);
		if ((!func_86(Global_1572864->f_8) && !func_203(0, 1, 0)) && !func_204(&Global_1935630, 32768))
		{
			iVar0 = func_205(iParam0);
			if (iVar0 != -1)
			{
				func_206(0);
			}
			else if (func_201(iParam0) == 8)
			{
				iVar0 = func_207();
				if (iVar0 != -1)
				{
					func_206(0);
				}
			}
		}
	}
	func_208(iParam0, 0);
	if (func_209(0) == iParam0)
	{
		func_210(1);
		func_211(0);
		func_212(1);
	}
	func_213(iParam0, 1);
	func_214(iParam0);
}

void func_90(bool bParam0)
{
	iVar0 = func_215();
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

void func_91(int iParam0)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	func_216(vVar0, 0);
}

bool func_92(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

bool func_93(int iParam0, int iParam1)
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

void func_94(var uParam0)
{
	if (!is_entity_dead(*uParam0))
	{
		_0xe98d55c5983f2509(*uParam0);
		set_ped_config_flag(*uParam0, 297, false);
	}
}

void func_95(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_182((*uParam0)[iVar0]->f_6))
			{
				if (!bParam4 && is_bit_set(uParam0[iVar0], 11))
				{
				}
				else
				{
					func_183(&((*uParam0)[iVar0]->f_6), 1, 1);
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

bool func_96(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	iVar0 = get_frame_count();
	if (iVar0 > uParam2->f_5)
	{
		func_217(uParam2, 1, iVar0);
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
			if (func_218(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_219(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_220(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_219(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (func_221(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_219(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_222(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_219(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_26 && func_223(player_id(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_219(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_224(uParam2, 1065353216))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_225(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_219(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_226(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_219(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_227(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_219(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (func_227(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_219(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_228(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_219(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || uParam2->f_12 < 20f)
			{
				if (func_229(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_219(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_230(uParam2, 4000))
				{
					if ((func_231(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_232(uParam2, iParam0)) && func_233(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_219(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_231(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_232(uParam2, iParam0)) && func_233(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_219(iParam0, uParam2, *uParam3);
					return true;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_234(iParam0, Global_1935630->f_41))
							{
								func_235();
								*uParam3 = 2;
								func_219(iParam0, uParam2, *uParam3);
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
						if (func_234(iParam0, Global_1935630->f_41))
						{
							func_235();
							*uParam3 = 2;
							func_219(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_236(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_237() - uParam2->f_9) < 2000))
				{
					if (is_ped_ragdoll(iParam0))
					{
						func_235();
						*uParam3 = 2;
						func_219(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_238())
					{
						if (func_234(iParam0, Global_1935630->f_42))
						{
							func_235();
							*uParam3 = 2;
							func_219(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_239(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_219(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_240(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_219(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_241(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_219(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_242(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_219(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_243(uParam2, 4000))
				{
					if (func_244(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_219(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_245(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_219(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (does_entity_exist(iParam0))
		{
			if (func_246(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_219(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

void func_97(var uParam0, bool bParam1)
{
	if (bParam1 || !func_28(uParam0))
	{
		func_185(uParam0);
	}
}

bool func_98(int iParam0, int iParam1, var uParam2, var uParam3)
{
	if ((get_frame_count() % 10) == 0)
	{
		if (uParam2->f_1)
		{
			if (((func_102(0) == 1 || func_102(0) == 2) || func_102(0) == 8) || func_204(&Global_1935630, 2048))
			{
				func_68(uParam2, 2);
			}
		}
		if (uParam2->f_2)
		{
			if (func_102(0) == 11)
			{
				func_68(uParam2, 4);
			}
		}
		if (uParam2->f_4)
		{
			if (func_102(0) == 6)
			{
				func_68(uParam2, 8);
			}
		}
		if (uParam2->f_5)
		{
			if (Global_1394141->f_1328)
			{
				func_68(uParam2, 16);
			}
		}
	}
	if ((get_frame_count() % 30) == 0)
	{
		if (uParam2->f_6)
		{
			if (!(func_247((*(*Global_1396257)[iParam0])[iParam1]->f_19) == 0 && func_247((*(*Global_1396257)[iParam0])[iParam1]->f_20) == 23))
			{
				iVar0 = func_111();
				iVar1 = (*(*Global_1396257)[iParam0])[iParam1]->f_19;
				iVar2 = (*(*Global_1396257)[iParam0])[iParam1]->f_20;
				if (func_247(iVar2) > func_247(iVar1))
				{
					if (func_247(iVar0) > func_247(iVar2) + 1 || func_247(iVar0) < func_247(iVar1))
					{
						func_68(uParam2, 32);
					}
				}
				else if (func_247(iVar0) > func_247(iVar2) + 1 && func_247(iVar0) < func_247(iVar1))
				{
					func_68(uParam2, 32);
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
					if (((func_248(&((*(*Global_1396257)[iParam0])[iParam1]->f_5[0])) || func_248(&((*(*Global_1396257)[iParam0])[iParam1]->f_5[1]))) || func_249(&((*(*Global_1396257)[iParam0])[iParam1]->f_5[0]))) || func_249(&((*(*Global_1396257)[iParam0])[iParam1]->f_5[1])))
					{
						bVar3 = true;
					}
				}
				if (!bVar3)
				{
					if (!func_250((*(*Global_1396257)[iParam0])[iParam1]->f_40))
					{
						func_68(uParam2, 64);
					}
				}
			}
		}
		if (uParam2->f_8)
		{
			if (get_game_timer() > uParam2->f_17)
			{
				if (func_251(&uParam3, &(uParam2->f_18), uParam2->f_11, uParam2->f_12) || func_252(&uParam3, &(uParam2->f_20), &(uParam2->f_19), uParam2->f_11, uParam2->f_12, 2048))
				{
					if (!func_28(&(uParam2->f_13)))
					{
						func_29(&(uParam2->f_13), 0f);
					}
					else if (func_109(&(uParam2->f_13)) >= uParam2->f_16)
					{
						func_32(&(uParam2->f_13));
						func_68(uParam2, 512);
					}
					uParam2->f_17 = get_game_timer() + 1000;
				}
				else
				{
					if (func_28(&(uParam2->f_13)))
					{
						func_32(&(uParam2->f_13));
					}
					uParam2->f_17 = get_game_timer() + 1000;
				}
			}
		}
		if (uParam2->f_9)
		{
			if (func_253())
			{
				func_68(uParam2, 1024);
			}
		}
		if (uParam2->f_10)
		{
			if (func_254())
			{
				func_68(uParam2, 2048);
			}
		}
		if (func_204(&Global_1935630, 16384) || Global_1430231->f_4)
		{
			func_68(uParam2, 128);
		}
		if (func_104(&((*Global_1396257)[iParam0]->f_626), 2048))
		{
			func_68(uParam2, 256);
		}
	}
	if ((((((((((func_8(*uParam2, 2) || func_8(*uParam2, 4)) || func_8(*uParam2, 8)) || func_8(*uParam2, 16)) || func_8(*uParam2, 32)) || func_8(*uParam2, 64)) || func_8(*uParam2, 128)) || func_8(*uParam2, 256)) || func_8(*uParam2, 512)) || func_8(*uParam2, 1024)) || func_8(*uParam2, 2048))
	{
		return true;
	}
	return false;
}

bool func_99(var uParam0)
{
	if (((((func_8(*uParam0, 2) || func_8(*uParam0, 4)) || func_8(*uParam0, 16)) || func_8(*uParam0, 128)) || func_8(*uParam0, 1024)) || func_8(*uParam0, 2048))
	{
		return true;
	}
	return false;
}

void func_100(int iParam0)
{
	if ((func_8(iParam0->f_180, 131072) || func_8(iParam0->f_180, 1024)) || is_scripted_speech_playing(&(iParam0->f_158[0])))
	{
		return;
	}
	if (*iParam0 >= 4 && *iParam0 <= 37)
	{
		func_68(&(iParam0->f_180), 131072);
		func_25(iParam0, 5);
	}
	else if (*iParam0 >= 38 && *iParam0 <= 47)
	{
		if (func_27(&(iParam0->f_178)))
		{
			set_anim_scene_entity(iParam0->f_178, "JOE_BUTLER", &(iParam0->f_158[0]), 0);
			set_anim_scene_entity(iParam0->f_178, "Cup", iParam0->f_160, 0);
			set_anim_scene_entity(iParam0->f_178, "COIN", iParam0->f_161, 0);
			set_anim_scene_entity(iParam0->f_178, "Crutch", iParam0->f_162, 0);
			set_anim_scene_bool(iParam0->f_178, "internal_loop", false, false);
			set_anim_scene_bool(iParam0->f_178, "internal_loop_end", false, false);
			func_68(&(iParam0->f_180), 131072);
			func_25(iParam0, 5);
		}
		else if (!func_8(iParam0->f_180, 262144))
		{
			if (!_is_anim_scene_loaded(iParam0->f_178, true, false) || !_is_anim_scene_loading(iParam0->f_178, true))
			{
				reset_anim_scene(iParam0->f_178, 0);
			}
			func_68(&(iParam0->f_180), 262144);
		}
	}
}

bool func_101()
{
	if (func_190() == -1)
	{
		if (_get_global_block_can_be_accessed(5))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if ((*Global_1392915)[iVar0]->f_1 != -1)
				{
					if (func_88((*Global_1392915)[iVar0]->f_4))
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

int func_102(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

bool func_103()
{
	return Global_1310750->f_16077 != 0;
}

bool func_104(var uParam0, int iParam1)
{
	return func_255(*uParam0, iParam1);
}

bool func_105(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

bool func_106(int iParam0, int iParam1, bool bParam2, int iParam3)
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

bool func_107(var uParam0, float fParam1, float fParam2)
{
	if (Global_1935630->f_12)
	{
		return false;
	}
	if (is_entity_dead(*uParam0))
	{
		return false;
	}
	if (fParam1 == 0f)
	{
		if (fParam2 == 0f)
		{
			if (func_112(Global_35, *uParam0, 25f, 1))
			{
				return true;
			}
		}
		else if (fParam2 <= 25f)
		{
			return true;
		}
	}
	else if (fParam2 == 0f)
	{
		if (func_112(Global_35, *uParam0, fParam1, 1))
		{
			return true;
		}
	}
	else if (fParam2 <= fParam1)
	{
		return true;
	}
	return false;
}

bool func_108(var uParam0, char* sParam1)
{
	if (is_string_null_or_empty(sParam1))
	{
		return true;
	}
	bVar0 = _0x1f0e401031e20146(*uParam0, sParam1);
	if (bVar0)
	{
		return true;
	}
	bVar1 = _0xa9016536015de29d(*uParam0, sParam1);
	if (!bVar1)
	{
		return true;
	}
	bVar2 = _0x23e33cb9f4a3f547(*uParam0, sParam1);
	if (!bVar2)
	{
		return true;
	}
	bVar3 = _0x0df57f86fe71dbe5(*uParam0, sParam1);
	if (bVar2 || bVar3)
	{
		_0xae6ada8fe7e84acc(*uParam0, sParam1);
	}
	return false;
}

int func_109(var uParam0)
{
	if (!func_28(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_174(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_237() - round((uParam0->f_1 * 1000f)));
}

Vector3 func_110(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), false, false);
}

var func_111()
{
	return &Global_1899515;
}

bool func_112(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_113(int iParam0)
{
	return iParam0 != -15;
}

void func_114(int iParam0)
{
	Global_40.f_11623[iParam0]->f_5++;
	Global_40.f_11623[iParam0]->f_2 = func_111();
}

void func_115(int iParam0)
{
	if ((((*iParam0 <= 2 || *iParam0 >= 49) || *iParam0 == 40) || *iParam0 == 3) || *iParam0 == 5)
	{
		if ((iParam0->f_246 != 3 || func_256(iParam0->f_211[0], 1, 0)) || func_256(iParam0->f_211[1], 1, 0))
		{
			func_73(&(iParam0->f_190), 0);
			func_75(iParam0->f_211[0], 0, 0);
			func_75(iParam0->f_211[1], 0, 0);
			iParam0->f_246 = 3;
		}
		return;
	}
	if (func_8(iParam0->f_180, 4))
	{
		if ((iParam0->f_246 != 3 || func_256(iParam0->f_211[0], 1, 0)) || func_256(iParam0->f_211[1], 1, 0))
		{
			func_73(&(iParam0->f_190), 0);
			func_74(iParam0, 0);
			func_75(iParam0->f_211[0], 0, 0);
			func_75(iParam0->f_211[1], 0, 0);
			iParam0->f_246 = 3;
		}
	}
	if (!_does_volume_exist(iParam0->f_164))
	{
		return;
	}
	if (!does_entity_exist(Global_35) || !does_entity_exist(&(iParam0->f_158[0])))
	{
		return;
	}
	if (!func_8(iParam0->f_180, 4))
	{
		if (!func_8(iParam0->f_180, 2) && !func_8(iParam0->f_180, 65536))
		{
			if (is_entity_in_volume(Global_35, iParam0->f_164, true, 0) && !is_ped_on_mount(Global_35))
			{
				if (iParam0->f_246 != 3)
				{
					func_73(&(iParam0->f_190), 0);
					func_75(iParam0->f_211[0], 0, 0);
					func_75(iParam0->f_211[1], 0, 0);
					iParam0->f_246 = 3;
				}
				func_68(&(iParam0->f_180), 2);
			}
			else if (iParam0->f_246 != 3)
			{
				func_73(&(iParam0->f_190), 0);
				func_75(iParam0->f_211[0], 0, 0);
				func_75(iParam0->f_211[1], 0, 0);
				iParam0->f_246 = 3;
			}
		}
		else if (!is_entity_in_volume(Global_35, iParam0->f_164, true, 0))
		{
			if (iParam0->f_246 != 3)
			{
				func_73(&(iParam0->f_190), 0);
				func_75(iParam0->f_211[0], 0, 0);
				func_75(iParam0->f_211[1], 0, 0);
				iParam0->f_246 = 3;
			}
		}
		else if ((is_ped_on_mount(Global_35) || func_251(iParam0->f_158[0], &(iParam0->f_157), 1071644672, 1074790400)) || func_257(iParam0->f_158[0], &(iParam0->f_156), 1071644672, 1074790400))
		{
			if (iParam0->f_246 != 3)
			{
				func_73(&(iParam0->f_190), 0);
				func_75(iParam0->f_211[0], 0, 0);
				func_75(iParam0->f_211[1], 0, 0);
				iParam0->f_246 = 3;
			}
		}
		else if (func_258(1) < 100 || !func_8(iParam0->f_180, 8))
		{
			if (iParam0->f_246 != 3)
			{
				func_73(&(iParam0->f_190), 0);
				func_74(iParam0, 1);
				func_75(iParam0->f_211[0], 0, 0);
				func_75(iParam0->f_211[1], 0, 0);
				iParam0->f_246 = 3;
			}
		}
		else if (iParam0->f_246 != 2)
		{
			func_73(&(iParam0->f_190), 0);
			func_74(iParam0, 1);
			func_75(iParam0->f_211[0], 1, 0);
			func_75(iParam0->f_211[1], 0, 0);
			iParam0->f_246 = 2;
		}
	}
	switch (func_260(iParam0->f_158[0], &(iParam0->f_190), 15f, &(iParam0->f_211), 0f, 3, 0, "", func_259(iParam0->f_246, 0, 0), 0, 0, 2, -1082130432))
	{
		case 0:
			if (!func_8(iParam0->f_180, 4))
			{
				iVar0 = get_random_int_in_range(100, 200);
				func_261(&(iParam0->f_158[0]), iVar0);
				func_262();
				func_263(14, iParam0->f_158[0], &(iParam0->f_180), 64);
				func_94(iParam0->f_158[0]);
				func_75(iParam0->f_211[0], 0, 0);
				func_75(iParam0->f_211[1], 0, 0);
				func_95(&(iParam0->f_211), 1, 1, 1, 0);
				func_264(14);
				func_74(iParam0, 0);
				func_68(&(iParam0->f_180), 4096);
				func_68(&(iParam0->f_180), 4);
			}
			break;
	}
}

void func_116(int iParam0)
{
	if (!_does_volume_exist(iParam0->f_164))
	{
		return;
	}
	if (!does_entity_exist(Global_35) || !does_entity_exist(&(iParam0->f_158[0])))
	{
		return;
	}
	if (!func_8(iParam0->f_180, 2))
	{
		if (is_entity_in_volume(Global_35, iParam0->f_164, true, 0))
		{
			if (iParam0->f_246 != 3)
			{
				func_73(&(iParam0->f_190), 0);
				func_74(iParam0, 0);
				func_75(iParam0->f_211[0], 0, 0);
				func_75(iParam0->f_211[1], 0, 0);
				iParam0->f_246 = 3;
			}
			func_68(&(iParam0->f_180), 2);
		}
		else if (((!is_scripted_speech_playing(Global_35) && !_0x54b187f111d9c6f8(Global_35, 1)) && !is_scripted_speech_playing(&(iParam0->f_158[0]))) && !_0x54b187f111d9c6f8(&(iParam0->f_158[0]), 1))
		{
			if (iParam0->f_246 != 2)
			{
				func_73(&(iParam0->f_190), 0);
				func_74(iParam0, 0);
				func_75(iParam0->f_211[0], 1, 0);
				func_75(iParam0->f_211[1], 1, 0);
				iParam0->f_246 = 2;
			}
		}
		else if (iParam0->f_246 != 3)
		{
			func_73(&(iParam0->f_190), 0);
			func_74(iParam0, 0);
			func_75(iParam0->f_211[0], 0, 0);
			func_75(iParam0->f_211[1], 0, 0);
			iParam0->f_246 = 3;
		}
	}
	else
	{
		return;
	}
	switch (func_260(iParam0->f_158[0], &(iParam0->f_190), 15f, &(iParam0->f_211), 0f, 3, 0, "", func_259(iParam0->f_246, 0, 0), 0, 0, 2, -1082130432))
	{
		case 0:
			if (!func_8(iParam0->f_180, 4))
			{
				func_262();
				func_263(14, iParam0->f_158[0], &(iParam0->f_180), 64);
				func_94(iParam0->f_158[0]);
				func_75(iParam0->f_211[0], 0, 0);
				func_75(iParam0->f_211[1], 0, 0);
				func_175(Global_35, "GREET_MALE", 291934926, &(iParam0->f_158[0]), 0, 0, 0, 1);
				func_95(&(iParam0->f_211), 1, 1, 1, 0);
				func_74(iParam0, 1);
				func_68(&(iParam0->f_180), 2);
				func_68(&(iParam0->f_180), 65536);
			}
			break;
		case 1:
			if (!func_8(iParam0->f_180, 4))
			{
				func_262();
				func_263(14, iParam0->f_158[0], &(iParam0->f_180), 64);
				func_94(iParam0->f_158[0]);
				func_75(iParam0->f_211[0], 0, 0);
				func_75(iParam0->f_211[1], 0, 0);
				func_175(Global_35, "INSULT_JOEBUTLER_CONV_PART1", 291934926, &(iParam0->f_158[0]), 0, 0, 1, 1);
				func_95(&(iParam0->f_211), 1, 1, 1, 0);
				func_74(iParam0, 1);
				func_68(&(iParam0->f_180), 2);
				func_68(&(iParam0->f_180), 65536);
			}
			break;
	}
}

void func_117(var uParam0, var uParam1, var uParam2)
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

void func_118(int iParam0, int iParam1)
{
	func_176(&((*Global_1396257)[iParam0]->f_626), iParam1, 1);
}

int func_119(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

bool func_120(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_121()
{
	if (((!func_265() && !func_266(Global_35, -208384378)) && (!does_entity_exist(func_215()) || !is_entity_in_air(func_215(), 1))) && (!does_entity_exist(_get_first_entity_ped_is_carrying(Global_35)) || !is_entity_in_air(_get_first_entity_ped_is_carrying(Global_35), 1)))
	{
		return true;
	}
	if (func_267())
	{
		func_268();
	}
	else if (_is_ped_carrying(Global_35))
	{
		if (!func_266(Global_35, -208384378))
		{
			task_place_carried_entity_at_coord(Global_35, _get_first_entity_ped_is_carrying(Global_35), func_110(get_player_index()), 1f, 8);
		}
	}
	return false;
}

bool func_122(var uParam0, vector3 vParam1, float fParam4, var uParam5, int iParam6, int iParam7, float fParam8)
{
	switch (*uParam5)
	{
		case 0:
			if (!func_266(*uParam0, 242628503))
			{
				open_sequence_task(&iVar0);
				task_go_straight_to_coord(0, vParam1, 1f, iParam6, fParam4, iParam7, 0);
				task_achieve_heading(0, fParam4, 0);
				close_sequence_task(iVar0);
				task_perform_sequence(*uParam0, iVar0);
				set_ped_keep_task(*uParam0, true);
				clear_sequence_task(&iVar0);
			}
			else
			{
				*uParam5 = 1;
			}
			break;
		case 1:
			if (func_269(*uParam0, vParam1, fParam4, iParam7, fParam8, 0) || get_script_task_status(*uParam0, 242628503, true) == 8)
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_123(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7)
{
	if (*uParam3 >= iParam4)
	{
		return false;
	}
	if (*uParam1)
	{
		if (!func_28(uParam2))
		{
			func_29(uParam2, 0f);
			return false;
		}
		else if (func_109(uParam2) > iParam6)
		{
			func_32(uParam2);
			*uParam3++;
			*uParam1 = 0;
			return false;
		}
		else
		{
			return false;
		}
	}
	if (is_scripted_speech_playing(*uParam0))
	{
		if (fParam7 == 0f)
		{
			if (!does_entity_exist(*uParam0) || !does_entity_exist(Global_35))
			{
				return false;
			}
			fParam7 = func_184(*uParam0, Global_35, 1, 1);
		}
		if (iParam5 == 0)
		{
			if (fParam7 >= 0f && fParam7 < 10f)
			{
				iParam5 = 249295937;
			}
			else if (fParam7 >= 10f && fParam7 < 20f)
			{
				iParam5 = 1715123483;
			}
			else if (fParam7 >= 20f && fParam7 < 30f)
			{
				iParam5 = 1891783641;
			}
			else if (fParam7 >= 30f && fParam7 < 50f)
			{
				iParam5 = 2001176446;
			}
			else
			{
				iParam5 = 1515458263;
			}
		}
		force_sonar_blips_this_frame();
		allow_sonar_blips(true);
		_trigger_sonar_blip_2(iParam5, *uParam0);
		*uParam1 = 1;
		return true;
	}
	return false;
}

void func_124()
{
	_disable_first_person_cam_this_frame_2();
	_0x8370d34bd2e60b73();
	_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
	if (Global_1935689->f_1)
	{
		func_270(0);
	}
}

void func_125(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_180((*uParam0)[iVar0], 9);
		iVar0++;
	}
}

void func_126()
{
	Global_1905944->f_5695 = 1;
}

int func_127(int iParam0)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		set_ped_reset_flag(iParam0, 49, true);
		return 1;
	}
	return 0;
}

char* func_128(int iParam0)
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

bool func_129(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_130(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_131(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

char* func_132()
{
	return "script@specialped@pdjeb_joe_butler@ig@ig_1@ig_1";
}

char* func_133()
{
	return "script@specialped@pdjeb_joe_butler@ig@ig_2@ig_2";
}

char* func_134()
{
	return "script_special_ped@pdjeb_joe_butler@ig@ig1";
}

char* func_135()
{
	return "script_special_ped@pdjeb_joe_butler@ig@ig2";
}

void func_136(int iParam0)
{
	if (!_does_volume_exist(iParam0->f_163))
	{
		Var0 = { func_168(0) };
		iParam0->f_163 = _create_volume_by_hash_with_custom_name(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!_does_volume_exist(iParam0->f_164))
	{
		Var0 = { func_168(1) };
		iParam0->f_164 = _create_volume_by_hash_with_custom_name(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!_does_volume_exist(iParam0->f_165))
	{
		Var0 = { func_168(2) };
		iParam0->f_165 = _create_volume_by_hash_with_custom_name(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!_does_volume_exist(iParam0->f_166))
	{
		Var0 = { func_168(3) };
		iParam0->f_166 = _create_volume_by_hash_with_custom_name(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!_does_volume_exist(iParam0->f_167))
	{
		Var0 = { func_168(4) };
		iParam0->f_167 = _create_volume_by_hash_with_custom_name(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!_does_volume_exist(iParam0->f_170))
	{
		Var0 = { func_168(7) };
		iParam0->f_170 = _create_volume_aggregate_with_custom_name(Var0.f_10);
		_0x39816f6f94f385ad(iParam0->f_170, Var0.f_1, Var0.f_4, Var0.f_7);
		Var0 = { func_168(8) };
		_0xbce668aaf83608be(iParam0->f_170, Var0.f_1, Var0.f_4, Var0.f_7);
	}
}

int func_137(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	if (!_does_volume_exist(iParam0))
	{
		return 0;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	vVar3 = { _0x3e2a25b2416dd67e(iParam0) };
	iVar6 = func_271(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

int func_138(int iParam0)
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

int func_139(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_272())
	{
		iVar2 = func_272();
	}
	iVar5 = func_273(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_274(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_274(iVar6) == 0)
			{
				return func_275(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_274(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_274(iVar6) == 0)
			{
				return func_275(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_275(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

bool func_140()
{
	if (func_190() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

void func_141(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_276(uParam0, iParam1, sParam2))
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

void func_142(var uParam0)
{
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	uParam0->f_4 = 1;
	uParam0->f_5 = 1;
	uParam0->f_6 = 1;
	uParam0->f_7 = 1;
	uParam0->f_8 = 1;
	uParam0->f_9 = 1;
	uParam0->f_10 = 1;
	uParam0->f_11 = 1.75f;
	uParam0->f_12 = 2.25f;
	uParam0->f_16 = 45000;
}

void func_143(var uParam0)
{
	func_148(uParam0, 0);
	func_147(uParam0, 0);
	func_144(uParam0, 1);
	func_159(uParam0, 1);
	func_277(uParam0, 0);
	func_155(uParam0, 1);
	func_278(uParam0, 1, 1, 1);
}

void func_144(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_279(&(uParam0->f_1), 256);
	}
	else
	{
		func_280(&(uParam0->f_1), 256);
	}
}

void func_145(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_279(&(uParam0->f_1), 4);
	}
	else
	{
		func_280(&(uParam0->f_1), 4);
	}
}

void func_146(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_279(&(uParam0->f_1), 2);
	}
	else
	{
		func_280(&(uParam0->f_1), 2);
	}
}

void func_147(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_279(&(uParam0->f_1), 2048);
	}
	else
	{
		func_280(&(uParam0->f_1), 2048);
	}
}

void func_148(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_279(&(uParam0->f_1), 16384);
	}
	else
	{
		func_280(&(uParam0->f_1), 16384);
	}
}

void func_149(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_279(&(uParam0->f_1), 1);
	}
	else
	{
		func_280(&(uParam0->f_1), 1);
	}
}

void func_150(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_279(&(uParam0->f_1), 131072);
	}
	else
	{
		func_280(&(uParam0->f_1), 131072);
	}
}

void func_151(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_280(uParam0, 128);
	}
	else
	{
		func_279(uParam0, 128);
	}
}

void func_152(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_280(uParam0, 4);
	}
	else
	{
		func_279(uParam0, 4);
	}
}

void func_153(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_279(&(uParam0->f_1), 8);
	}
	else
	{
		func_280(&(uParam0->f_1), 8);
	}
}

void func_154(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_280(uParam0, 32);
	}
	else
	{
		func_279(uParam0, 32);
	}
}

void func_155(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_280(uParam0, 256);
	}
	else
	{
		func_279(uParam0, 256);
	}
}

void func_156(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_280(uParam0, 2);
	}
	else
	{
		func_279(uParam0, 2);
	}
}

void func_157(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_279(&(uParam0->f_1), 1024);
	}
	else
	{
		func_280(&(uParam0->f_1), 1024);
	}
}

void func_158(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_279(&(uParam0->f_1), 16);
	}
	else
	{
		func_280(&(uParam0->f_1), 16);
	}
}

void func_159(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_280(uParam0, 16);
	}
	else
	{
		func_279(uParam0, 67108864);
		func_279(uParam0, 16);
	}
}

void func_160(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_279(&(uParam0->f_1), 524288);
	}
	else
	{
		func_280(&(uParam0->f_1), 524288);
	}
}

void func_161(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_280(uParam0, 524288);
	}
	else
	{
		func_279(uParam0, 524288);
	}
}

bool func_162(int iParam0, bool bParam1)
{
	switch (func_199(iParam0))
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

struct<4> func_163(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Var0 = { 1320.167f, -1291.738f, 75.23311f };
			Var0.f_3 = 68.748f;
			break;
		case 1:
			Var0 = { 1320.96f, -1290.723f, 75.27775f };
			Var0.f_3 = 68.748f;
			break;
		case 2:
			Var0 = { 1319.546f, -1291.098f, 76.1904f };
			Var0.f_3 = -119.68f;
			break;
		case 3:
			Var0 = { 1321.58f, -1290.592f, 76.39468f };
			Var0.f_3 = 0f;
			break;
	}
	return Var0;
}

int func_164(var uParam0, int iParam1, vector3 vParam2, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	if (!does_entity_exist(*uParam0))
	{
		wait(0);
		if (!bParam7)
		{
			*uParam0 = func_281(iParam1, vParam2, iParam5, 0, 1, bParam6, 1, 1, 1, 0, 0, 0, 0);
		}
		else
		{
			*uParam0 = func_281(iParam1, vParam2, iParam5, 0, 1, bParam6, 1, 1, bParam8, 1, 1, 0, 0);
		}
		return 0;
	}
	if (!does_entity_exist(*uParam0))
	{
		return 0;
	}
	if (_0xa0bc8faed8cfeb3c(*uParam0))
	{
		return 1;
	}
	return 0;
}

int func_165(var uParam0, int iParam1, vector3 vParam2)
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

void func_166(int iParam0, bool bParam1)
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

void func_167(var uParam0, var uParam1, int iParam2, float fParam3, float fParam4)
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

struct<11> func_168(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Var0 = -432403087;
			Var0.f_1 = { 1320.787f, -1291.887f, 75.307f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 55f, 55f, 55f };
			Var0.f_10 = "RandomEventBlock";
			break;
		case 1:
			Var0 = 665633627;
			Var0.f_1 = { 1318.473f, -1290.612f, 84.303f };
			Var0.f_4 = { 0f, 0f, -25.67596f };
			Var0.f_7 = { 3f, 3f, 10f };
			Var0.f_10 = "Trigger";
			break;
		case 2:
			Var0 = -1612834106;
			Var0.f_1 = { 1321.154f, -1291.387f, 79.97336f };
			Var0.f_4 = { 0f, 0f, 65f };
			Var0.f_7 = { 3f, 6f, 10f };
			Var0.f_10 = "StayAway";
			break;
		case 3:
			Var0 = 665633627;
			Var0.f_1 = { 1316.051f, -1289.458f, 78.75141f };
			Var0.f_4 = { 0f, 0f, 155f };
			Var0.f_7 = { 6f, 8f, 6f };
			Var0.f_10 = "LookIKVolume";
			break;
		case 4:
			Var0 = 665633627;
			Var0.f_1 = { 1319.544f, -1291.433f, 84.30341f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 3f, 3f, 10f };
			Var0.f_10 = "Focus";
			break;
		case 5:
			Var0 = 665633627;
			Var0.f_1 = { 1320.894f, -1291.958f, 76.3277f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 1f, 1f, 10f };
			Var0.f_10 = "Grief";
			break;
		case 6:
			Var0 = 665633627;
			Var0.f_1 = { 1320.894f, -1291.958f, 76.3277f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 1.85f, 1.85f, 10f };
			Var0.f_10 = "Grief";
			break;
		case 7:
			Var0 = -1612834106;
			Var0.f_1 = { 1325.705f, -1322.965f, 76.01214f };
			Var0.f_4 = { 0f, 0f, 74.99999f };
			Var0.f_7 = { 11f, 12f, 9f };
			Var0.f_10 = "Gunsmith";
			break;
		case 8:
			Var0 = 665633627;
			Var0.f_1 = { 1320.371f, -1318.493f, 78.10471f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 3f, 3f, 3f };
			Var0.f_10 = "Gunsmith2";
			break;
	}
	return Var0;
}

void func_169(int iParam0, int iParam1)
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

bool func_170(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_171()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_172(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_173(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_174(var uParam0)
{
	return func_170(*uParam0, 2);
}

bool func_175(int iParam0, char* sParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = uParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return func_282(iParam0, &Var0);
}

void func_176(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_280(uParam0, iParam1);
	}
	else
	{
		func_279(uParam0, iParam1);
	}
}

void func_177(int* iParam0, var uParam1, int iParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	iParam0->f_14 = iParam2;
	func_180(iParam0, 1);
	func_178(iParam0, uParam1, sParam3, uParam4, iParam5, iParam6, iParam7, bParam8, 0);
}

void func_178(int* iParam0, var uParam1, char* sParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = uParam1;
	iParam0->f_7 = uParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = sParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (func_182(iParam0->f_6))
		{
			if (is_bit_set(*iParam0, 1))
			{
				func_283(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_284(iParam0->f_6, iParam0->f_5, 0);
			}
			func_285(iParam0->f_6, 0, 1);
		}
		else
		{
			set_bit(iParam0, 14);
		}
		set_bit(iParam0, 0);
	}
	else
	{
		func_286(iParam0, iParam0->f_5);
		if (!is_bit_set(*iParam0, 13))
		{
			set_bit(iParam0, 0);
		}
	}
	set_bit(iParam0, 15);
}

bool func_179(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

void func_180(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

void func_181(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

bool func_182(int iParam0)
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

void func_183(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_182(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_287(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_288(iVar0);
	*uParam0 = 0;
}

float func_184(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_185(var uParam0)
{
	func_29(uParam0, 0f);
}

bool func_186(char* sParam0)
{
	if (_0xd89504d9d7d5057d(sParam0))
	{
		start_preloaded_conversation(sParam0);
		return true;
	}
	return false;
}

bool func_187(char[4] cParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_289(cParam1, cParam0);
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

void func_188(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_258(1) < iParam0)
	{
		iParam0 = func_258(1);
	}
	_money_decrement_cash_balance(iParam0);
	Var0 = { func_290(1644987397) };
	_0xbd861ae8a5181ed7(&Var0, iParam0);
}

void func_189(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_291(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

int func_190()
{
	return Global_1572887->f_12;
}

int func_191(int iParam0)
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

int func_192(int iParam0)
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

void func_193(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = func_292();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_293(iParam0);
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
	if (func_294(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_140())
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
	Global_40.f_11095.f_35 = func_295(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_292();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || bParam7)
	{
		iVar6 = func_296(iVar1);
		func_298(func_297(), 0, 4000);
		func_299(Global_40.f_11095.f_35);
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
		func_300(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_301(func_290(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (does_entity_exist(iParam5))
			{
				decor_set_int(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_192(14))
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
					sParam4 = func_302(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_291(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_291(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_301(func_290(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_192(4))
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
					sParam4 = func_302(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_291(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_291(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_290(-1990689970) };
	stat_id_set_int(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		_0xe6b763c7f4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_303(10, 1);
	}
}

void func_194(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0] = iParam1;
	Global_1347477->f_155[iParam0]->f_2 = iParam2;
	Global_1347477->f_155[iParam0]->f_3 = iParam3;
	Global_1347477->f_155[iParam0]->f_4 = iParam4;
	Global_1347477->f_155[iParam0]->f_5 = bParam5;
	Global_1347477->f_155[iParam0]->f_1 = get_game_timer() + 500;
}

bool func_195(int iParam0, bool bParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (!is_ped_injured(iParam0) || !bParam1)
		{
			iVar0 = get_interior_from_entity(iParam0);
			if (is_valid_interior(iVar0))
			{
				if (func_304(iVar0) || func_305(iVar0))
				{
					return false;
				}
				return true;
			}
		}
	}
	return false;
}

void func_196(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_306(&Global_0, 8);
	}
	if (!func_307() || func_190() != -1)
	{
		return;
	}
	func_306(&Global_0, 1);
}

void func_197()
{
	_0x9428447ded71fc7e("special_ped_scenes");
}

int func_198(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_308(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

int func_199(int iParam0)
{
	if (!func_86(iParam0))
	{
		return -1;
	}
	return func_198(iParam0);
}

int func_200(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_5;
	}
	return Global_1058888->f_498[iParam0]->f_1;
}

int func_201(int iParam0)
{
	if (!func_86(iParam0))
	{
		return 0;
	}
	return func_309(func_274(iParam0));
}

void func_202(int iParam0, int iParam1, int iParam2)
{
	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_190() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	_0xd5910ecf81a2278c(iParam0, iParam1, iParam2, &vVar0);
}

bool func_203(int iParam0, bool bParam1, bool bParam2)
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
		if (func_310())
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
		iVar0 = func_311(&(Global_1898164->f_1[0]));
		if (func_312(iVar0) && func_313((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_86(&(Global_1898164->f_1[0])))
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

bool func_204(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_205(int iParam0)
{
	switch (func_201(iParam0))
	{
		case 1:
			iVar0 = func_311(iParam0);
			return func_314(iVar0);
		case 8:
			iVar1 = func_311(iParam0);
			if (func_313((*Global_1347702)[iVar1]->f_12, 1))
			{
				return func_315(iVar1);
			}
			break;
	}
	return -1;
}

void func_206(bool bParam0)
{
	if (Global_1898077->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_190() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077->f_2 == 4 && Global_1898077->f_12 != Global_1898077->f_13) && !bParam0)
	{
		Global_1898077->f_1 = Global_1898077->f_2;
		Global_1898077->f_12 = Global_1898077->f_13;
		func_316(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_317();
		Global_1898077->f_9 = func_318(Global_1894899->f_2);
		func_319(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

int func_207()
{
	if (!func_162((*Global_1835011)[4]->f_1, 1))
	{
		return 0;
	}
	else if (!func_162((*Global_1347702)[66]->f_15, 1))
	{
		return 1;
	}
	else if (!func_162((*Global_1347702)[67]->f_15, 1))
	{
		return 2;
	}
	else if (!func_162((*Global_1835011)[38]->f_1, 1))
	{
		return 3;
	}
	else if (!func_162((*Global_1347702)[68]->f_15, 1))
	{
		return 4;
	}
	else if (!func_162((*Global_1835011)[59]->f_1, 1))
	{
		return 5;
	}
	else if (!func_162((*Global_1835011)[67]->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_208(int iParam0, int iParam1)
{
	if (!func_86(iParam0))
	{
		return;
	}
	func_320(iParam0, iParam1);
}

int func_209(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

void func_210(bool bParam0)
{
	if (bParam0)
	{
		set_wanted_level_multiplier(1f);
		func_321(Global_1935630, 4194304);
	}
	else
	{
		set_wanted_level_multiplier(0f);
		func_322(Global_1935630, 4194304);
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

int func_211(bool bParam0)
{
	if (!bParam0 && func_323(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

void func_212(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

void func_213(int iParam0, bool bParam1)
{
	if (func_190() != -1)
	{
		return;
	}
	if (func_209(0) != iParam0)
	{
		return;
	}
	if (func_324(iParam0))
	{
		if (bParam1)
		{
			func_325(-525676072);
		}
		else
		{
			func_326(-525676072);
		}
	}
}

int func_214(int iParam0)
{
	return func_328(func_327(iParam0));
}

int func_215()
{
	return Global_1900383->f_393;
}

void func_216(vector3 vParam0, int iParam3)
{
	if (func_329(vParam0))
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
			if (func_330(vVar2, vParam0, 2f, 1))
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

void func_217(var uParam0, bool bParam1, int iParam2)
{
	func_331(iParam2);
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
		uParam0->f_13 = func_332(0);
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
							func_280(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_333(1))
						{
							func_280(uParam0, 33554432);
						}
					}
				}
				else if (!is_ped_planting_bomb(Global_35) && (!func_333(1) || *uParam0 & 8192 != 0))
				{
					func_279(uParam0, 33554432);
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
			if (func_334(uParam0))
			{
				uParam0->f_15 = func_237();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_237() - uParam0->f_15) > 500)
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
	func_335(uParam0);
}

bool func_218(int iParam0, var uParam1)
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
			if (!func_336(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_337(iParam0, iVar2) <= func_338(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_219(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_339(iParam2, 1, 1, 1, 0))
	{
		func_280(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_340(uParam1, 1);
	func_341();
}

bool func_220(int iParam0, var uParam1)
{
	fVar0 = 85f;
	if (!is_entity_dead(iParam0))
	{
		if (func_342(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_343(uParam1);
			if (func_344(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = get_game_timer();
				}
				iVar2 = (get_game_timer() - uParam1->f_2);
				iVar3 = func_345(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_340(uParam1, 1);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_340(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_221(int iParam0, int iParam1, var uParam2)
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
	if (func_346(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_343(uParam2);
		if (func_344(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = get_game_timer();
			}
			if (uParam2->f_2 != 0)
			{
				if (get_game_timer() - uParam2->f_2) > func_345(uParam2)
				{
					func_340(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_222(int iParam0, var uParam1)
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
	if (func_336(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = get_game_timer();
		}
		else if (get_game_timer() - uParam1->f_3) > func_345(uParam1)
		{
			fVar3 = func_343(uParam1);
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

int func_223(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_347(bParam1, bParam2, bParam3);
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

bool func_224(var uParam0, float fParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_237();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_225(var uParam0, int iParam1, var uParam2)
{
	if (!is_entity_dead(iParam1))
	{
		if (!network_is_in_session())
		{
			fVar0 = func_348(uParam2);
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
			if (func_233(uParam2, iParam1))
			{
				func_340(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_226(var uParam0, int iParam1, var uParam2)
{
	if (uParam2->f_12 < IntToFloat(func_349(uParam2)))
	{
		if ((is_weapon_valid(Global_1935630->f_46) && !_0x5809dbca0a37c82b(Global_1935630->f_46)) || get_current_ped_vehicle_weapon(Global_35, &uVar0))
		{
			if (func_233(uParam2, iParam1))
			{
				if (_0x285d36c5c72b0569(uParam0) <= 1f)
				{
					func_340(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_227(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vVar0 = { get_entity_coords(iParam1, false, true) };
	iVar3 = func_350(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, uParam2->f_22))
				{
					func_340(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (is_shocking_event_in_sphere(956330317, vVar0, uParam2->f_27))
				{
					func_340(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_26, &vVar4, 0, 0);
					if (func_351(iParam1, vVar0, vVar4))
					{
						func_340(uParam2, 1);
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
					func_340(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_26, &vVar7, 0, 0);
					if (func_351(iParam1, vVar0, vVar7))
					{
						func_340(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_228(int iParam0, var uParam1)
{
	vVar9 = { get_entity_coords(iParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_336(iParam0, uParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_352(&(Global_1935630->f_34[iVar0]));
			fVar1 = vdist(get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_353(&(Global_1935630->f_34[iVar0])))
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
			if (func_354(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_355(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_356(uParam1, iParam0, fVar1, iVar0))
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

bool func_229(int iParam0, var uParam1)
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

bool func_230(var uParam0, int iParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_237();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_231(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_357(iVar0, &iVar2))
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
	if (func_358(iVar0, iParam0))
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

int func_232(var uParam0, int iParam1)
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

bool func_233(var uParam0, int iParam1)
{
	if (func_359(uParam0))
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

bool func_234(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_184(iParam0, iParam1, 1, 1) < 4f)
		{
			if (is_entity_touching_entity(iParam0, iParam1) && is_ped_ragdoll(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_235()
{
}

bool func_236(var uParam0, int iParam1)
{
	iVar0 = get_vehicle_ped_is_using(Global_35);
	if (iVar0 != 0 && !is_this_model_a_train(get_entity_model(iVar0)))
	{
		vVar1 = { get_entity_coords(iParam1, false, false) };
		if (func_360(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_237();
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
						if (func_361(iVar7, vVar1, 1) < 3f)
						{
							if (is_entity_touching_entity(iVar7, iParam1))
							{
								uParam0->f_9 = func_237();
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

int func_237()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

bool func_238()
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
	if ((func_237() - Global_1935630->f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_239(var uParam0, int iParam1)
{
	if (!does_entity_exist(uParam0->f_14))
	{
		return false;
	}
	if (!is_ped_human(iParam1))
	{
		return false;
	}
	fVar0 = func_338(uParam0);
	if (uParam0->f_12 > func_362(uParam0) && uParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_363(iParam1);
	iVar1 = func_364(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((_0x06087579e7aa85a9(iParam1, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, Global_35, 17)) && _0x7f9b9791d4cb71f6(iParam1, Global_35, 1, 0) == 1)) || ((_0x06087579e7aa85a9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, uParam0->f_14, 17)) && _0x7f9b9791d4cb71f6(iParam1, uParam0->f_14, 1, 0) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_240(int iParam0, int iParam1, var uParam2)
{
	if (uParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return func_365(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

bool func_241(int iParam0, var uParam1)
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
		if (func_366(iParam0, uParam1, 1))
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
					if (!func_367(uParam1, iParam0))
					{
						if (func_361(iVar4, Global_36, 1) < 7f)
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

bool func_242(int iParam0, var uParam1)
{
	if (!func_368(0))
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

bool func_243(var uParam0, int iParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_237();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_244(int iParam0, var uParam1)
{
	return _0xe33f98bd76490abc(*iParam0, player_id(), 0);
}

int func_245(int iParam0, var uParam1)
{
	if (!is_ped_human(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_237();
	}
	else if (func_237() - uParam1->f_4) > func_369(uParam1)
	{
		return func_370(iParam0, uParam1, 0, -1082130432);
	}
	return 0;
}

bool func_246(var uParam0, int iParam1)
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

int func_247(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

bool func_248(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_88((*Global_1835011)[iParam0]->f_1);
}

bool func_249(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_87((*Global_1835011)[iParam0]->f_1);
}

bool func_250(int iParam0)
{
	iVar0 = func_371();
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

bool func_251(var uParam0, var uParam1, float fParam2, int iParam3)
{
	if (!does_entity_exist(*uParam0))
	{
		return false;
	}
	vVar0 = { get_entity_forward_vector(*uParam0) };
	vVar3 = { get_entity_coords(*uParam0, true, false) + vVar0 * Vector(fParam2, fParam2, fParam2) };
	if (func_372(uParam1, vVar3, iParam3))
	{
		return true;
	}
	return false;
}

int func_252(var uParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5)
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
	if (!func_373(uParam2, &iVar1, vVar5, fParam3, fParam4))
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
		if (!func_374(iVar1, 0))
		{
			func_375(&iVar1, vVar8, 1083179008);
		}
		return 1;
	}
	return 0;
}

bool func_253()
{
	return Global_1392040->f_6;
}

bool func_254()
{
	if (Global_1914319->f_18941.f_17)
	{
		return true;
	}
	return false;
}

bool func_255(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_256(var uParam0, bool bParam1, bool bParam2)
{
	if (!bParam1 || func_182(uParam0->f_6))
	{
		if (is_bit_set(*uParam0, 0))
		{
			if (!bParam2)
			{
				return true;
			}
			if (func_376(uParam0->f_6, bParam1))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_257(var uParam0, var uParam1, float fParam2, int iParam3)
{
	if (!does_entity_exist(*uParam0))
	{
		return false;
	}
	vVar1 = { get_entity_forward_vector(*uParam0) };
	vVar4 = { get_entity_coords(*uParam0, true, false) + vVar1 * Vector(fParam2, fParam2, fParam2) };
	if (func_373(uParam1, &uVar0, vVar4, fParam2, iParam3))
	{
		return true;
	}
	return false;
}

int func_258(int iParam0)
{
	return _money_get_cash_balance();
}

int func_259(int iParam0, int iParam1, int iParam2)
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

int func_260(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	if (!is_entity_dead(*uParam0))
	{
		func_377(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !_does_volume_exist(iParam9)) || is_entity_in_volume(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (is_ambient_speech_playing(*uParam0) || is_scripted_speech_playing(*uParam0));
		fVar8 = func_378(fParam12 >= 0f, fParam12, vdist(Global_36, get_entity_coords(*uParam0, true, false)));
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
			func_185(&(iParam1->f_13));
		}
		if (func_379(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_380(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_260(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_94(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!get_ped_config_flag(*uParam0, 317, true))
						{
							func_381(*uParam0, 1, 1);
						}
					}
					else if (func_382(iParam1, 22))
					{
						func_381(*uParam0, 0, 1);
					}
				}
				if (func_383(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_384(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_385(iParam8);
					if (func_386(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (is_bit_set(uParam3[iParam1->f_1], 20))
								{
									func_387(uParam3);
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
					func_388(iParam1, uParam3, fVar8);
					if (func_389(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (is_bit_set(*iParam1, 1))
					{
						func_95(uParam3, 0, 0, 1, 1);
						clear_bit(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_390(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_383(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_391(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_386(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_384(uParam0, func_383(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_385(iParam8);
				}
				else if (is_bit_set(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_95(uParam3, 0, 0, 1, 1);
					}
					func_392(iParam1, 1);
				}
				func_388(iParam1, uParam3, fVar8);
				if (func_390(uParam0, iParam1, fParam4, bVar6))
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
			func_393(iParam1, uParam3);
			set_bit(iParam1, 3);
		}
	}
	return -1;
}

bool func_261(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0) && is_entity_a_ped(iParam0))
	{
		iVar0 = func_394(iParam0);
		return func_395(iParam0, 2084597891, iParam1, iVar0);
	}
	return decor_set_int(iParam0, "loot_money", iParam1);
}

void func_262()
{
	func_396();
	func_397(-1, 0, 0, 0, 0);
	func_398(60, 0, 1);
}

void func_263(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (!does_entity_exist(*uParam1))
	{
		return;
	}
	if (func_129(*uParam2, iParam3))
	{
		return;
	}
	Global_40.f_11623[iParam0]->f_6++;
	if (Global_40.f_11623[iParam0]->f_6 == 1 && func_399(func_290(-1342635612)) < 5)
	{
		func_301(func_290(-1342635612), 1);
	}
	Global_40.f_11623[iParam0]->f_3 = func_111();
	func_130(uParam2, iParam3);
	(*Global_1396257)[iParam0]->f_631 = 1;
}

void func_264(int iParam0)
{
	(*Global_1396257)[iParam0]->f_631 = 1;
}

bool func_265()
{
	if (_is_ped_carrying(Global_35) || func_267())
	{
		return true;
	}
	return false;
}

bool func_266(int iParam0, int iParam1)
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

bool func_267()
{
	if (func_400(Global_35) || func_401(Global_35))
	{
		return true;
	}
	return false;
}

int func_268()
{
	if (func_400(Global_35) || func_401(Global_35))
	{
		if (!func_266(Global_35, -208384378))
		{
			task_place_carried_entity_at_coord(Global_35, func_215(), func_110(get_player_index()), 1f, 8);
		}
		return 0;
	}
	else if ((!func_400(Global_35) && !func_401(Global_35)) && !func_266(Global_35, -208384378))
	{
		return 1;
	}
	return 0;
}

bool func_269(int iParam0, vector3 vParam1, float fParam4, float fParam5, float fParam6, bool bParam7)
{
	fVar0 = func_402(get_entity_heading(iParam0));
	fParam4 = func_402(fParam4);
	if (is_entity_at_coord(iParam0, vParam1, fParam5, fParam5, 2f, false, bParam7, 0) && absf((fVar0 - fParam4)) <= fParam6)
	{
		return true;
	}
	return false;
}

void func_270(bool bParam0)
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

int func_271(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, float fParam9)
{
	if (!bParam8 && network_is_game_in_progress())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_329(vParam0))
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
		if (func_403(vParam0))
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
	func_404(iVar0, bParam8);
	return iVar0;
}

int func_272()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_273(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || shift_left(iParam0 & 1023, 5)) || shift_left(iParam1 & 16383, 15));
}

int func_274(int iParam0)
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

int func_275(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_405(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_272())
	{
		return -1;
	}
	iVar0 = func_273(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_320(iVar1, 0);
	func_406(iVar1, 0);
	func_407(iVar1, 0);
	func_408(iVar1, 0);
	func_409(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_410(iVar1, iParam4);
	}
	return iVar1;
}

bool func_276(var uParam0, int iParam1, char* sParam2)
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

void func_277(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_279(&(uParam0->f_1), 128);
	}
	else
	{
		func_280(&(uParam0->f_1), 128);
	}
}

void func_278(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_280(uParam0, 268435456);
	}
	else
	{
		func_279(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_280(uParam0, 1073741824);
	}
	else
	{
		func_279(uParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_280(uParam0, 536870912);
	}
	else
	{
		func_279(uParam0, 536870912);
	}
}

void func_279(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_280(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_281(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_411(iVar0, iParam0, bParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_282(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

void func_283(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3 && !func_182(iParam0))
	{
		return;
	}
	iVar0 = func_287(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(2, sParam1, sParam2));
}

void func_284(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 && !func_182(iParam0))
	{
		return;
	}
	iVar0 = func_287(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, sParam1);
}

void func_285(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_182(iParam0))
	{
		return;
	}
	iVar0 = func_287(iParam0);
	if (bParam1)
	{
		func_412(iParam0, 4);
		func_413(iVar0, 1);
		func_414(iVar0, 1);
	}
	else
	{
		func_415(iParam0, 4);
		func_414(iVar0, 0);
	}
}

void func_286(int* iParam0, char* sParam1)
{
	if (func_182(iParam0->f_6) && !is_string_null_or_empty(sParam1))
	{
		func_284(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_181(iParam0, 1);
}

int func_287(int iParam0)
{
	return iParam0;
}

void func_288(int iParam0)
{
	if (!func_416(iParam0))
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

void func_289(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)
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

struct<2> func_290(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

var func_291(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	Var0 = -2;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = iParam4;
	Var13.f_6 = 0;
	uVar20 = _0xb249ebcb30dd88e0(&Var0, &Var13, iParam8);
	func_417(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_292()
{
	iVar0 = func_418();
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

int func_293(int iParam0)
{
	if (func_190() != -1)
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
	fVar1 = func_378(absf(fVar1) < 1f, func_378(fVar1 < 0f, -1f, 1f), fVar1);
	return ceil(fVar1);
}

bool func_294(int iParam0)
{
	if (!func_419(iParam0))
	{
		return false;
	}
	return func_420(iParam0);
}

int func_295(int iParam0, int iParam1, int iParam2)
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

int func_296(int iParam0)
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

int func_297()
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

void func_298(int iParam0, bool bParam1, int iParam2)
{
	func_421((get_game_timer() + iParam2), !bParam1);
	_databinding_write_data_int(Global_1955569->f_1.f_2.f_1, iParam0);
	func_422(iParam0);
}

void func_299(int iParam0)
{
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[2]), 0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[2]), 1);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[2]), func_423(iParam0));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[2]), "pausemenu_player");
}

void func_300(bool bParam0)
{
	bVar3 = false;
	if (func_424(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_425(iVar5, &iVar2, &iVar0))
			{
				if (!func_426(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_427(iVar2);
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
							if (func_428(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_292() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_292() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_429();
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

void func_301(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

char* func_302(int iParam0)
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

int func_303(int iParam0, int iParam1)
{
	if (!func_430(iParam0))
	{
		return 0;
	}
	if (!func_307())
	{
		return 0;
	}
	if (!func_431(iParam0, &iVar0, &uVar1))
	{
		return 0;
	}
	if (iVar0 == -816321659 && Global_1572887->f_12 != -1)
	{
		return 0;
	}
	chal_add_goal_progress_int(iVar0, uVar1, iParam1);
	return 1;
}

int func_304(int iParam0)
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

int func_305(int iParam0)
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

void func_306(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_307()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

int func_308(int iParam0)
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

int func_309(int iParam0)
{
	return iParam0 & 31;
}

bool func_310()
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

int func_311(int iParam0)
{
	if (!func_86(iParam0))
	{
		return -1;
	}
	return func_432(func_274(iParam0));
}

bool func_312(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_313(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_314(int iParam0)
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

int func_315(int iParam0)
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

void func_316(int iParam0, var uParam1)
{
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(4, &Var0, 2, 2);
}

int func_317()
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

int func_318(int iParam0)
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

void func_319(var uParam0, var uParam1, var uParam2)
{
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	network_set_rich_presence(3, &vVar0, 3, 3);
}

void func_320(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_433(iParam0);
	}
	else
	{
		func_434(iParam0, iParam1);
	}
	func_435();
}

void func_321(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_322(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_323(int iParam0)
{
	iVar0 = func_436(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

bool func_324(int iParam0)
{
	if (!func_86(iParam0))
	{
		return false;
	}
	switch (func_201(iParam0))
	{
		case 1:
			switch (func_311(iParam0))
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
			switch (func_311(iParam0))
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

void func_325(int iParam0)
{
	iVar2 = func_437(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_438(iVar1) == iParam0)
		{
			_0x6a564540fac12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_440(func_439(iParam0), 6);
}

void func_326(int iParam0)
{
	iVar2 = func_437(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_438(iVar1) == iParam0)
		{
			_0x766315a564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_441(func_439(iParam0), 6);
}

int func_327(int iParam0)
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

int func_328(int iParam0)
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
	func_442(iParam0, Global_1898164->f_162);
	return 1;
}

bool func_329(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_330(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_331(int iParam0)
{
	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_443();
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
			func_444(&(Global_1935630->f_34), &(Global_1935630->f_39));
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

var func_332(int iParam0)
{
	return &(Global_1109400->f_276[iParam0]);
}

bool func_333(bool bParam0)
{
	if (func_445(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_334(var uParam0)
{
	iVar0 = Global_1935630->f_40;
	if (func_190() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_446(uParam0);
		}
	}
	else if (!does_entity_exist(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_446(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_364(iVar0) == -1)
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

void func_335(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_447(uParam0);
	}
}

bool func_336(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_364(iParam2);
	}
	else
	{
		iVar1 = func_363(iParam2);
	}
	if (!is_ped_human(iParam0))
	{
		iVar0 = func_364(iParam0);
	}
	else
	{
		iVar0 = func_363(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_255(*uParam1, 8388608))
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

float func_337(int iParam0, int iParam1)
{
	return func_184(iParam0, iParam1, 1, 1);
}

float func_338(var uParam0)
{
	return uParam0->f_26;
}

bool func_339(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_340(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_280(uParam0, 134217728);
	}
	else
	{
		func_279(uParam0, 134217728);
	}
}

void func_341()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

bool func_342(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((_0xcb690f680a3ea971(iVar0, 1) && is_player_targetting_entity(iVar1, iParam0, bParam5)) && is_player_free_aiming_at_entity(iVar1, iParam0)) && func_184(iVar0, iParam0, 1, 1) <= 4f)
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
		if (_is_weapon_sniper(func_448(iVar0, 0)))
		{
			if (func_449(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_343(var uParam0)
{
	return uParam0->f_17;
}

bool func_344(var uParam0, int iParam1, float fParam2, float fParam3)
{
	if (uParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_255(*uParam0, 4194304))
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

int func_345(var uParam0)
{
	return uParam0->f_18;
}

bool func_346(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (_is_weapon_sniper(func_448(iVar0, 0)))
		{
			if (func_450(get_entity_coords(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_347(bool bParam0, bool bParam1, bool bParam2)
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

float func_348(var uParam0)
{
	return uParam0->f_23;
}

int func_349(var uParam0)
{
	return uParam0->f_21;
}

int func_350(var uParam0)
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

bool func_351(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_451(iParam0, vParam4, 0.5f))
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

int func_352(int iParam0)
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
	if (func_452(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_353(int iParam0)
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

bool func_354(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_453(iParam1))
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

bool func_355(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_453(iParam1))
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

bool func_356(var uParam0, int iParam1, float fParam2, int iParam3)
{
	fVar0 = 40f;
	if (func_453(iParam1))
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

bool func_357(int iParam0, int iParam1)
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

bool func_358(int iParam0, int iParam1)
{
	if (_get_lassoed_entity(iParam0) == iParam1)
	{
		return true;
	}
	if (func_454(iParam0, 1, 0, 0) != 2055893578)
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

bool func_359(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

bool func_360(int iParam0, int iParam1, vector3 vParam2)
{
	fVar0 = func_361(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (is_entity_touching_entity(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_361(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

float func_362(var uParam0)
{
	return uParam0->f_24;
}

int func_363(int iParam0)
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

int func_364(int iParam0)
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

int func_365(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_357(Global_35, &iVar1))
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
		fVar2 = func_184(iParam0, player_ped_id(), 0, 1);
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
		if (func_184(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
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

bool func_366(int iParam0, var uParam1, bool bParam2)
{
	func_445(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_367(uParam1, iVar0))
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
				if (!bParam2 || !func_367(uParam1, iVar1))
				{
					if (func_361(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_367(var uParam0, int iParam1)
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

bool func_368(int iParam0)
{
	if (func_140())
	{
		return false;
	}
	return func_162((*Global_1347702)[58]->f_15, 1);
}

int func_369(var uParam0)
{
	return uParam0->f_20;
}

int func_370(int iParam0, var uParam1, bool bParam2, float fParam3)
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

var func_371()
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

bool func_372(var uParam0, vector3 vParam1, int iParam4)
{
	if (!is_itemset_valid(*uParam0))
	{
		*uParam0 = create_itemset(true);
	}
	if (_0x59b57c4b06531e1e(vParam1, iParam4, *uParam0, 2) > 0)
	{
		_0x20a4bf0e09bee146(*uParam0);
		return true;
	}
	_0x20a4bf0e09bee146(*uParam0);
	return false;
}

bool func_373(var uParam0, int iParam1, vector3 vParam2, float fParam5, float fParam6)
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
					if (func_455(Global_35, *iParam1, 0))
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

bool func_374(int iParam0, bool bParam1)
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

void func_375(int iParam0, vector3 vParam1, int iParam4)
{
	if (!func_266(*iParam0, 518218985))
	{
		clear_ped_tasks(*iParam0, 1, 0);
		_task_smart_flee_style_coord(*iParam0, vParam1, 6, 0, iParam4, -1, 0);
	}
}

bool func_376(int iParam0, bool bParam1)
{
	if (bParam1 && !func_182(iParam0))
	{
		return false;
	}
	return !func_456(iParam0, 4);
}

void func_377(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

float func_378(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_379(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_457(iParam0, iParam1))
		{
			if (!func_255(iParam1->f_10, 1))
			{
				set_ped_config_flag(iParam0, 130, false);
				set_ped_config_flag(iParam0, 315, false);
				set_ped_config_flag(iParam0, 297, false);
				set_ped_config_flag(iParam0, 178, true);
				func_95(uParam2, 0, 0, 1, 0);
				func_280(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_255(iParam1->f_10, 1))
		{
			func_458(uParam2);
			set_ped_config_flag(iParam0, 130, true);
			set_ped_config_flag(iParam0, 315, true);
			set_ped_config_flag(iParam0, 297, true);
			set_ped_config_flag(iParam0, 178, false);
			func_279(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_380(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!is_entity_dead(*uParam0))
	{
		_0xe98d55c5983f2509(*uParam0);
		bVar4 = func_255(iParam4, 32);
		func_459(iParam1, uParam2, 0);
		iVar5 = func_460(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			set_ped_config_flag(*uParam0, 178, false);
			return true;
		}
		func_95(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_255(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_255(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_255(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_255(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_255(iParam4, 8388608) || func_255(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_255(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_255(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_382(iParam1, 4))
		{
			iVar6 |= 1024;
			_0xbb1e41dd3d3c6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_382(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_255(iParam4, 67108864))
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
				iParam6 = func_461(uParam0);
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
			if (func_255(iParam4, 268435456))
			{
				iVar8 = func_462(uParam2, 648122183);
				if (iVar8 > -1)
				{
					func_463(iParam1, (*uParam2)[iVar8]);
				}
			}
			if (func_382(iParam1, 23))
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
			if (func_255(iParam4, 2) || func_255(iParam4, 16))
			{
				func_381(*uParam0, 1, 1);
			}
			else
			{
				func_381(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_381(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !is_entity_dead(iParam0))
	{
		set_ped_config_flag(iParam0, 317, bParam1);
	}
}

bool func_382(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

bool func_383(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_464(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_384(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_465(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_255(iParam10, 32), 1, 0);
			set_bit(iParam2, 1);
		}
	}
	else if (is_bit_set(*iParam2, 1))
	{
		clear_bit(iParam2, 1);
	}
}

void func_385(int iParam0)
{
	if (func_255(iParam0, 4))
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
	if (func_255(iParam0, 16384))
	{
		disable_control_action(0, -485697785, false);
	}
	if (func_255(iParam0, 8))
	{
		disable_control_action(0, -1292666904, false);
		disable_control_action(0, 578288361, false);
	}
}

bool func_386(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	iVar1 = func_258(1);
	bVar2 = is_bit_set(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = is_ped_on_foot(Global_35);
	bVar10 = is_ped_injured(*uParam0);
	bVar11 = (((_is_ped_carrying(Global_35) || func_466(Global_35)) || func_467(Global_35)) || func_468(Global_35));
	fVar12 = -1f;
	if (func_28(&(iParam1->f_13)))
	{
		fVar12 = func_30(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((*uParam4)[iVar0]->f_8 != iParam12)
		{
			iParam12 = (*uParam4)[iVar0]->f_8;
		}
		bVar4 = func_182((*uParam4)[iVar0]->f_6);
		func_469(*uParam0, (*uParam4)[iVar0], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (is_bit_set(uParam4[iVar0], 20))
		{
			bVar3 = true;
		}
		if (func_470(*uParam0, iParam1, (*uParam4)[iVar0], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_471(iParam12, (*uParam4)[iVar0]->f_6))
				{
					if (!bVar7)
					{
						func_95(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_472(uParam4, 0, 0);
					}
					if (is_bit_set(uParam4[iVar0], 11))
					{
						func_459(iParam1, uParam4, is_bit_set(*iParam1, 6));
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
					if (func_473(iParam1, fParam6, iParam1->f_9))
					{
						func_185(&(iParam1->f_18));
						if (bVar6)
						{
							func_472(uParam4, 0, 0);
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
		func_474(iParam1, fParam2);
	}
	return bVar5;
}

void func_387(var uParam0)
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

void func_388(int* iParam0, var uParam1, float fParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_475((*uParam1)[iVar0]))
		{
			if (is_bit_set(uParam1[iVar0], 20))
			{
				func_474(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_389(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!is_control_pressed(0, -124244224))
		{
			if (func_476(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_477(iParam1, 0);
				func_459(iParam1, uParam2, func_382(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

int func_390(var uParam0, int* iParam1, float fParam2, bool bParam3)
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
			func_185(&(iParam1->f_18));
			return 0;
		}
		else if (func_28(&(iParam1->f_18)))
		{
			func_32(&(iParam1->f_18));
			return 0;
		}
	}
	if (!func_28(&(iParam1->f_18)))
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
	return func_478(&(iParam1->f_18), fParam2);
	return 1;
}

void func_391(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_469(iParam0, (*uParam2)[iVar0], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_392(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

void func_393(int* iParam0, var uParam1)
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
	func_459(iParam0, uParam1, 1);
	func_95(uParam1, 0, 1, 1, 0);
	_copy_memory(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		_copy_memory((*uParam1)[iVar0], &Var22, 17);
		iVar0++;
	}
}

int func_394(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		if (is_entity_a_ped(iParam0))
		{
			iVar0 = get_ped_index_from_entity_index(iParam0);
			if (is_ped_human(iVar0))
			{
				if (is_ped_male(iVar0))
				{
					return 536905469;
				}
				else
				{
					return -352521166;
				}
			}
		}
	}
	return 205298116;
}

var func_395(int iParam0, int iParam1, int iParam2, int iParam3)
{
	Var0.f_1 = 10;
	Var0.f_12 = 10;
	Var0 = 1;
	Var0.f_1[0] = iParam1;
	Var0.f_12[0] = iParam2;
	iVar23 = 13;
	return _0xa88e215ceb0435c0(iParam0, &Var0, iParam3, iVar23, 2, 0);
}

void func_396()
{
	if (!func_479(&Global_1327479))
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
	func_480(0);
	Global_1327479 = -1;
	Global_1310750->f_16075 = 0;
	Global_1310750->f_16076 = 0;
	Global_1310750->f_16103 = { 0f, 0f, 0f };
}

void func_397(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (bParam1)
	{
	}
	if (func_481() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0];
		if (((func_479(iVar1) && !func_482(iVar1, iParam2)) && (!bParam3 || !func_483(iVar1))) && (!bParam4 || !func_484(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_485(iVar0);
			}
		}
		iVar0++;
	}
}

void func_398(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = iParam0 * 1000;
	if ((iVar0 + get_game_timer()) > Global_1327479->f_4)
	{
		func_486(iParam0, iParam1, bParam2);
	}
	else
	{
		iVar0 = (iVar0 / 2);
		if ((iVar0 + get_game_timer()) > Global_1327479->f_5)
		{
			Global_1327479->f_5 = (get_game_timer() + iVar0);
		}
	}
}

int func_399(var uParam0, var uParam1)
{
	stat_id_get_int(&uParam0, &uVar0);
	return uVar0;
}

bool func_400(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	iVar0 = create_itemset(false);
	if (!is_itemset_valid(iVar0))
	{
		return false;
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
		iVar2 = func_487(iVar9);
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
					return true;
				}
			}
		}
		iVar9++;
	}
	return false;
}

bool func_401(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	iVar0 = func_215();
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	iVar1 = create_itemset(false);
	if (!is_itemset_valid(iVar1))
	{
		return false;
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
		return true;
	}
	return false;
}

float func_402(float fParam0)
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

bool func_403(vector3 vParam0)
{
	return _0x769bb7626b8cdb06(vParam0, 0.5f, 0, 0, 16384);
}

int func_404(int iParam0, bool bParam1)
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

bool func_405(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_406(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_2 = iParam1;
}

void func_407(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_3 = iParam1;
}

void func_408(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_4 = iParam1;
}

void func_409(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0] = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0] = iParam1;
}

void func_410(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_5 = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0]->f_1 = iParam1;
}

void func_411(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_488(iParam1))
		{
			func_489(iParam0, 41788943);
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
			func_490(iParam0, 0, 1);
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
			func_491(iParam0, 0);
			bVar0 = true;
		}
		func_492(iParam0, bParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

void func_412(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_413(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_456(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_414(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_415(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

bool func_416(int iParam0)
{
	return func_456(iParam0, 2);
}

void func_417(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

int func_418()
{
	return Global_40.f_11095.f_35;
}

bool func_419(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_420(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_421(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_493(bParam1);
	}
}

void func_422(int iParam0)
{
	_0x74bcceb233ad95b2(-156028329, iParam0);
}

char* func_423(int iParam0)
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

bool func_424(int iParam0)
{
	if (!func_494(23, &vVar0))
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

bool func_425(int iParam0, int iParam1, int iParam2)
{
	if (!func_494(23, &Var0))
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

bool func_426(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_427(int iParam0)
{
	return iParam0;
}

int func_428(int iParam0)
{
	if (!func_426(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_429()
{
	iVar0 = func_292();
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

bool func_430(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_431(int iParam0, int iParam1, var uParam2)
{
	if (!func_430(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
			*iParam1 = -816321659;
			*uParam2 = -987026056;
			break;
		case 1:
			*iParam1 = -816321659;
			*uParam2 = -1822602787;
			break;
		case 2:
			*iParam1 = -816321659;
			*uParam2 = -1602329569;
			break;
		case 3:
			*iParam1 = -816321659;
			*uParam2 = 1881899898;
			break;
		case 4:
			*iParam1 = -816321659;
			*uParam2 = -1906196506;
			break;
		case 5:
			*iParam1 = -816321659;
			*uParam2 = -674995867;
			break;
		case 6:
			*iParam1 = -816321659;
			*uParam2 = -734156617;
			break;
		case 7:
			*iParam1 = -816321659;
			*uParam2 = 261758426;
			break;
		case 8:
			*iParam1 = -816321659;
			*uParam2 = 1545586131;
			break;
		case 9:
			*iParam1 = -816321659;
			*uParam2 = -489125522;
			break;
		case 10:
			*iParam1 = -816321659;
			*uParam2 = 1190367681;
			break;
		case 11:
			*iParam1 = -816321659;
			*uParam2 = -1179367301;
			break;
		case 12:
			*iParam1 = -816321659;
			*uParam2 = 1154513253;
			break;
		case 13:
			*iParam1 = -816321659;
			*uParam2 = -1825640214;
			break;
		case 14:
			*iParam1 = -816321659;
			*uParam2 = 1209829059;
			break;
		case 15:
			*iParam1 = -816321659;
			*uParam2 = -1713230487;
			break;
		case 16:
			*iParam1 = -816321659;
			*uParam2 = 2092309893;
			break;
		default:
			return false;
	}
	return true;
}

int func_432(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

int func_433(int iParam0)
{
	iVar0 = func_308(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_495(iVar0);
}

int func_434(int iParam0, int iParam1)
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
			func_496(iVar2);
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

void func_435()
{
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

int func_436(int iParam0, int iParam1)
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

int func_437(bool bParam0)
{
	if (func_190() == -1)
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

int func_438(int iParam0)
{
	if (!func_426(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_439(int iParam0)
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

void func_440(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 - (Global_1946804->f_2657.f_26.f_6 && iParam0));
}

void func_441(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 || iParam0);
}

void func_442(int iParam0, int iParam1)
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
			func_497((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_497(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_86(&(Global_1898164->f_1[0])))
	{
		func_208(&(Global_1898164->f_1[0]), 3);
	}
}

bool func_443()
{
	if (func_498())
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

void func_444(var uParam0, var uParam1)
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

bool func_445(bool bParam0, int iParam1, int iParam2)
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

int func_446(var uParam0)
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

void func_447(var uParam0)
{
	if (Global_1935630->f_38 == 0)
	{
		func_279(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (does_entity_exist(&(Global_1935630->f_34[iVar0])))
			{
				if (!_0x88ad6cc10d8d35b2(&(Global_1935630->f_34[iVar0])))
				{
					func_280(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_448(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_449(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_450(get_entity_coords(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_450(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_451(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { get_entity_forward_vector(iParam0) };
	vVar3 = { vParam1 - get_entity_coords(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_452(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_453(int iParam0)
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

int func_454(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

bool func_455(int iParam0, int iParam1, bool bParam2)
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

bool func_456(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

bool func_457(int iParam0, int* iParam1)
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
		if (is_ped_in_combat(iParam0, func_499((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_458(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_475((*uParam0)[iVar0]))
		{
			func_180((*uParam0)[iVar0], 14);
		}
		iVar0++;
	}
}

void func_459(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_183(&((*uParam1)[iParam0->f_3]->f_6), 1, 1);
		if (bParam2)
		{
			func_73(iParam0, 0);
		}
	}
}

int func_460(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(*uParam2)[iVar0]->f_8 = 6;
		func_500(iParam0, (*uParam2)[iVar0], fParam3, 3, 0, 6, bParam4, 0);
		if (func_182((*uParam2)[iVar0]->f_6))
		{
			func_180((*uParam2)[iVar0], 11);
			return (*Global_1945938)[(*uParam2)[iVar0]->f_6]->f_3;
		}
	}
	return 0;
}

int func_461(var uParam0)
{
	iVar0 = func_501(*uParam0);
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

int func_462(var uParam0, int iParam1)
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

void func_463(int* iParam0, int* iParam1)
{
	if (!func_382(iParam0, 23))
	{
		if (iParam1->f_7 == 648122183)
		{
			func_180(iParam1, 19);
			func_477(iParam0, 23);
			func_502(iParam1, 2);
		}
	}
}

bool func_464(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (func_503(16))
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
					func_504(16);
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

void func_465(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_500(iParam0, (*uParam1)[iVar0], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			clear_bit((*uParam1)[iVar0], 14);
		}
		iVar0++;
	}
}

bool func_466(int iParam0)
{
	return (func_505(iParam0, 4) || func_505(iParam0, 5));
}

int func_467(int iParam0)
{
	return func_505(iParam0, 7);
}

int func_468(int iParam0)
{
	return func_505(iParam0, 6);
}

void func_469(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (is_bit_set(*iParam1, 14))
	{
		if (func_475(iParam1))
		{
			clear_bit(iParam1, 14);
			func_500(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_470(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_506(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_376(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_285(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_285(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_507(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_471(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_508(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_509(iParam1, 1))
	{
		func_510(iParam1, 1);
		return true;
	}
	return false;
}

void func_472(var uParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_75((*uParam0)[iVar0], bParam1, bParam2);
		iVar0++;
	}
}

bool func_473(int* iParam0, float fParam1, bool bParam2)
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

void func_474(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		disable_control_action(0, 1101824977, true);
		disable_control_action(0, 966551065, true);
		disable_control_action(0, 668058244, true);
		set_ped_reset_flag(Global_35, 203, true);
	}
}

bool func_475(int* iParam0)
{
	if (!is_string_null_or_empty(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_476(int iParam0)
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

void func_477(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

int func_478(var uParam0, float fParam1)
{
	if (func_511(uParam0, fParam1))
	{
		func_32(uParam0);
		return 1;
	}
	return 0;
}

bool func_479(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_480(int iParam0)
{
	Global_1327479->f_3 = iParam0;
}

int func_481()
{
	return Global_1310750->f_16037;
}

bool func_482(int iParam0, int iParam1)
{
	if (!func_479(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0] && iParam1) != 0;
}

bool func_483(int iParam0)
{
	if (!func_479(iParam0))
	{
		return false;
	}
	if (func_512(64) && func_513(iParam0))
	{
		return true;
	}
	return (*Global_1310750)[iParam0]->f_46;
}

bool func_484(int iParam0)
{
	if (!func_479(iParam0))
	{
		return false;
	}
	return (*Global_1310750)[iParam0]->f_47;
}

void func_485(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_479(&(Global_1310750->f_13321[iParam0])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0];
	force_cleanup_for_thread_with_this_id(Global_1310750->f_13321[iParam0]->f_5, 523);
	(*Global_1310750)[iVar0]->f_48 = 0;
	func_514(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

void func_486(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = get_game_timer();
	func_515(iParam0, iParam1, bParam2);
}

int func_487(int iParam0)
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

bool func_488(int iParam0)
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

void func_489(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_516(iParam0, iParam1))
		{
			if (func_517(iParam0, iParam1))
			{
				if (func_518(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_519(iParam0);
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

void func_490(int iParam0, int iParam1, bool bParam2)
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

void func_491(int iParam0, bool bParam1)
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

void func_492(int iParam0, bool bParam1)
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

void func_493(bool bParam0)
{
	func_520(bParam0);
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

bool func_494(int iParam0, var uParam1)
{
	if (!func_521(iParam0))
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

int func_495(int iParam0)
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

int func_496(int iParam0)
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

void func_497(int iParam0, int iParam1)
{
	Var0 = { *Global_1898164->f_1[iParam0] };
	*Global_1898164->f_1[iParam0] = { *Global_1898164->f_1[iParam1] };
	*Global_1898164->f_1[iParam1] = { Var0 };
}

bool func_498()
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

int func_499(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_500(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (func_182(iParam1->f_6))
	{
		if (bParam7 || is_bit_set(*iParam1, 11))
		{
			return;
		}
		func_183(&(iParam1->f_6), 0, 1);
	}
	if (!func_182(iParam1->f_6) && !is_bit_set(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_475(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_522(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824, 0, 1704213876, iParam1->f_10, 0);
			if (func_182(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_507(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_523(iParam1->f_6, 17, 1, 1);
				}
				if (is_bit_set(*iParam1, 1))
				{
					if (is_bit_set(*iParam1, 3))
					{
						func_524(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_283(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (is_bit_set(*iParam1, 10))
				{
					func_523(iParam1->f_6, 16, 1, 1);
				}
				if (!is_bit_set(*iParam1, 0) || is_bit_set(*iParam1, 13))
				{
					func_285(iParam1->f_6, 0, 1);
				}
				else
				{
					func_285(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

int func_501(int iParam0)
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

void func_502(int* iParam0, int iParam1)
{
	if (!func_179(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_180(iParam0, 14);
		}
	}
}

bool func_503(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_504(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_505(int iParam0, int iParam1)
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

bool func_506(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
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

void func_507(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (bParam3 && !func_182(iParam0))
	{
		return;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar0 = func_287(iParam0);
	func_523(iParam0, 18, 0, 1);
	func_523(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = _uiprompt_get_group_id_for_target_entity(iParam1);
	}
	_uiprompt_set_group((*Global_1945938)[iVar0]->f_3, iParam4, iParam2);
}

bool func_508(int iParam0, bool bParam1)
{
	if (bParam1 && !func_182(iParam0))
	{
		return false;
	}
	iVar0 = func_287(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

bool func_509(int iParam0, bool bParam1)
{
	if (bParam1 && !func_182(iParam0))
	{
		return false;
	}
	iVar0 = func_287(iParam0);
	return _uiprompt_is_pressed((*Global_1945938)[iVar0]->f_3);
}

void func_510(int iParam0, bool bParam1)
{
	if (bParam1 && !func_182(iParam0))
	{
		return;
	}
	iVar0 = func_287(iParam0);
	_uiprompt_restart_modes((*Global_1945938)[iVar0]->f_3);
}

bool func_511(var uParam0, float fParam1)
{
	if (!func_28(uParam0))
	{
		return false;
	}
	if (func_30(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

bool func_512(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

bool func_513(int iParam0)
{
	return func_482(iParam0, Global_1310750->f_16072 | 64);
}

void func_514(int iParam0)
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

void func_515(int iParam0, int iParam1, bool bParam2)
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

bool func_516(int iParam0, int iParam1)
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

bool func_517(int iParam0, int iParam1)
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

bool func_518(int iParam0, int iParam1)
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
	if (!func_516(iParam0, iVar0))
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

void func_519(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

void func_520(bool bParam0)
{
	_0xb6fd96420c0126a1(-1056478928, bParam0);
}

bool func_521(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_522(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_456(iVar0, 2))
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
				func_525(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, uParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_523(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_182(iParam0))
	{
		return;
	}
	iVar0 = func_287(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1945938)[iVar0]->f_3, iParam1, iParam2);
}

void func_524(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	if (bParam4 && !func_182(iParam0))
	{
		return;
	}
	iVar0 = func_287(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(10, sParam1, sParam2, sParam3));
}

void func_525(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, var uParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_413(iParam0, 1);
	func_414(iParam0, 1);
	func_415(iParam0, 128);
}

