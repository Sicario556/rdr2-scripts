void __EntryFunction__()
{
	fLocal_13 = 1f;
	fLocal_14 = 1f;
	if (has_force_cleanup_occurred(523))
	{
		func_1();
	}
	Var0.f_5.f_2 = 12;
	Var0.f_5.f_64 = 11;
	Var0.f_5.f_76 = 11;
	Var0.f_124 = 1;
	Var0.f_125 = 1;
	Var0.f_102 = _0x804425c4bbd00883(Global_34);
	if (!func_2(Var0.f_102, 0))
	{
		Global_1913502 = 0;
	}
	else
	{
		Global_1913502 = Var0.f_102;
	}
	Var0.f_105 = _item_database_localization_get_num_label_types(Var0.f_102);
	iVar127 = 0;
	while (iVar127 < Var0.f_105)
	{
		Var0.f_5.f_2[iVar127] = _item_database_localization_get_type(Var0.f_102, iVar127);
		Var0.f_5.f_2[iVar127]->f_2 = &Var0.f_5.f_2[iVar127];
		Var0.f_5.f_2[iVar127]->f_1 = _item_database_localization_get_num_values(Var0.f_102, Var0.f_5.f_2[iVar127]->f_2);
		iVar127++;
	}
	Var0.f_108 = _create_anim_scene("lightrig@player_journal", 0, "plMain", false, true);
	load_anim_scene(Var0.f_108);
	Var0.f_116 = 0;
	if (!is_entity_dead(Global_34) && (is_ped_using_any_scenario(Global_34) && !get_ped_config_flag(Global_34, 464, true)))
	{
		Var0.f_116 = 1;
	}
	if (func_3(Var0.f_102, -1903335637))
	{
		_0xcb9401f918cb0f75(Global_34, "GENERIC_DOCUMENT_FLIP_AVAILABLE", 1, -1);
	}
	else
	{
		_0xcb9401f918cb0f75(Global_34, "GENERIC_DOCUMENT_FLIP_AVAILABLE", 0, -1);
	}
	while (!func_4())
	{
		Var0.f_104 = _get_item_interaction_from_ped(Global_34);
		if ((_does_anim_scene_exist(Var0.f_108) && _is_anim_scene_loaded(Var0.f_108, true, false)) && !_is_anim_scene_started(Var0.f_108, false))
		{
			set_anim_scene_origin(Var0.f_108, Global_35, get_entity_rotation(Global_34, 2), 2);
			attach_anim_scene_to_entity_preserving_location(Var0.f_108, Global_34, -1);
			start_anim_scene(Var0.f_108);
		}
		iVar128 = _get_item_interaction_from_ped(Global_34);
		if (iVar128 == -1215562113 || iVar128 == -982676640)
		{
			if (Var0.f_105 > 0)
			{
				if (!_0x4912dfe492db98cd(Global_34, "GENERIC_BOOK_READ_AVAILABLE"))
				{
					_0xcb9401f918cb0f75(Global_34, "GENERIC_BOOK_READ_AVAILABLE", 1, -1);
				}
				if (is_control_just_released(0, -473983589))
				{
					if (_launch_app_by_hash_with_entry(-605293197, -1769873703) != 0)
					{
					}
					else
					{
						func_5(&Var0);
					}
				}
			}
			else if (_0x4912dfe492db98cd(Global_34, "GENERIC_BOOK_READ_AVAILABLE"))
			{
				_0xcb9401f918cb0f75(Global_34, "GENERIC_BOOK_READ_AVAILABLE", 0, -1);
			}
		}
		else
		{
			if (_0x4912dfe492db98cd(Global_34, "GENERIC_BOOK_READ_AVAILABLE"))
			{
				_0xcb9401f918cb0f75(Global_34, "GENERIC_BOOK_READ_AVAILABLE", 0, -1);
			}
			if (_is_app_running(-605293197))
			{
				_close_app_by_hash(-605293197);
			}
		}
		wait(0);
	}
	func_1();
	terminate_this_thread();
}

void func_1()
{
	if (_databinding_is_data_id_valid(uLocal_20))
	{
		_databinding_remove_data_entry(uLocal_20);
	}
	terminate_this_thread();
}

bool func_2(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_3(int iParam0, int iParam1)
{
	if (!func_2(iParam0, 0))
	{
		return func_7(func_6(iParam0), iParam1);
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (_item_database_does_item_have_tag(iParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

bool func_4()
{
	if (Global_1572887->f_13 == 0 && func_8(0, 0))
	{
		return true;
	}
	if (is_entity_dead(Global_34))
	{
		return true;
	}
	if (_0x9e4ef615e307fbbe())
	{
		return true;
	}
	if (!_0x038b1f1674f0e242(Global_34))
	{
		return true;
	}
	if (!func_9())
	{
		return true;
	}
	return false;
}

void func_5(var uParam0)
{
	if (_databinding_is_data_id_valid(uLocal_20))
	{
		_databinding_remove_data_entry(uLocal_20);
	}
	func_10(uParam0);
	uLocal_20 = _databinding_add_data_container_from_path("", "Translate");
	uParam0->f_5.f_63 = _databinding_add_data_container(uLocal_20, "Generic");
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_105)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_5.f_2[iVar1]->f_1)
		{
			uParam0->f_5 = _item_database_localization_get_value(uParam0->f_102, uParam0->f_5.f_2[iVar1]->f_2, iVar0);
			switch (&uParam0->f_5.f_2[iVar1])
			{
				case 1410847083:
					func_11(&(uParam0->f_5), iVar2, 1, 1, 0);
					iVar2++;
					break;
				case -641080715:
					func_11(&(uParam0->f_5), iVar2, 3, 1, 0);
					iVar2++;
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

int func_6(int iParam0)
{
	return iParam0;
}

int func_7(int iParam0, int iParam1)
{
	if (!func_12(iParam0, 2))
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

bool func_8(bool bParam0, bool bParam1)
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

bool func_9()
{
	return func_13(1);
}

void func_10(var uParam0)
{
	if (_databinding_is_data_id_valid(uParam0->f_5.f_63))
	{
		_databinding_remove_data_entry(uParam0->f_5.f_63);
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (_databinding_is_data_id_valid(&(uParam0->f_5.f_64[iVar0])))
		{
			_databinding_remove_data_entry(&(uParam0->f_5.f_64[iVar0]));
		}
		if (_databinding_is_data_id_valid(&(uParam0->f_5.f_76[iVar0])))
		{
			_databinding_remove_data_entry(&(uParam0->f_5.f_76[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_5.f_2)
	{
		uParam0->f_5.f_2[iVar0]->f_3 = 0;
		iVar0++;
	}
}

void func_11(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (iParam1 >= 11)
	{
		return;
	}
	StringCopy(&cVar0, "textField", 16);
	StringIntConCat(&cVar0, iParam1, 16);
	if (bParam4)
	{
		StringConCat(&cVar0, "Strike", 16);
	}
	uParam0->f_64[iParam1] = _databinding_add_data_container(uParam0->f_63, &cVar0);
	_databinding_add_data_hash(&(uParam0->f_64[iParam1]), "text", *uParam0);
	_databinding_add_data_hash(&(uParam0->f_64[iParam1]), "style", iParam2);
	StringCopy(&cVar0, "divider", 16);
	StringIntConCat(&cVar0, iParam1, 16);
	uParam0->f_76[iParam1] = _databinding_add_data_container(uParam0->f_63, &cVar0);
	_databinding_add_data_bool(&(uParam0->f_76[iParam1]), "isVisible", iParam3);
}

bool func_12(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x4308812a6e9ca62e(iParam0, iParam1);
}

bool func_13(int iParam0)
{
	return func_14(iParam0);
}

bool func_14(int iParam0)
{
	return func_15(Global_1940144->f_38, iParam0);
}

bool func_15(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

