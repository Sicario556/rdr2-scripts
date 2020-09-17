void __EntryFunction__()
{
	fLocal_12 = 1f;
	fLocal_13 = 1f;
	Var0.f_5.f_2 = 12;
	Var0.f_5.f_64 = 24;
	Var0.f_5.f_89 = 24;
	Var0.f_150 = 1;
	Var0.f_151 = 1;
	if (has_force_cleanup_occurred(523))
	{
		func_1(&Var0);
	}
	Var0.f_128 = _0x804425c4bbd00883(Global_35);
	if (!func_2(Var0.f_128, 0))
	{
		Global_1911772 = 323269915;
	}
	else
	{
		Global_1911772 = Var0.f_128;
	}
	Var0.f_131 = _item_database_localization_get_num_label_types(Var0.f_128);
	iVar152 = 0;
	while (iVar152 < Var0.f_131)
	{
		Var0.f_5.f_2[iVar152] = _item_database_localization_get_type(Var0.f_128, iVar152);
		Var0.f_5.f_2[iVar152]->f_2 = &Var0.f_5.f_2[iVar152];
		Var0.f_5.f_2[iVar152]->f_1 = _item_database_localization_get_num_values(Var0.f_128, Var0.f_5.f_2[iVar152]->f_2);
		iVar152++;
	}
	Var0.f_134 = _create_anim_scene("lightrig@player_journal", 0, "plMain", false, true);
	load_anim_scene(Var0.f_134);
	Var0.f_142 = 0;
	if (!is_entity_dead(Global_35) && (is_ped_using_any_scenario(Global_35) && !get_ped_config_flag(Global_35, 464, true)))
	{
		Var0.f_142 = 1;
	}
	if (func_3(Var0.f_128, -1903335637))
	{
		_0xcb9401f918cb0f75(Global_35, "GENERIC_DOCUMENT_FLIP_AVAILABLE", 1, -1);
	}
	else
	{
		_0xcb9401f918cb0f75(Global_35, "GENERIC_DOCUMENT_FLIP_AVAILABLE", 0, -1);
	}
	while (!func_4())
	{
		Var0.f_130 = _get_item_interaction_from_ped(Global_35);
		if ((_does_anim_scene_exist(Var0.f_134) && _is_anim_scene_loaded(Var0.f_134, true, false)) && !_is_anim_scene_started(Var0.f_134, false))
		{
			set_anim_scene_origin(Var0.f_134, Global_36, get_entity_rotation(Global_35, 2), 2);
			attach_anim_scene_to_entity_preserving_location(Var0.f_134, Global_35, -1);
			start_anim_scene(Var0.f_134);
		}
		iVar153 = _get_item_interaction_from_ped(Global_35);
		if (iVar153 == -1215562113 || iVar153 == -982676640)
		{
			func_5(&Var0);
		}
		else if (iVar153 == 579381260 || iVar153 == 1510958603)
		{
			func_6(&Var0);
		}
		wait(0);
	}
	func_1(&Var0);
	terminate_this_thread();
}

void func_1(var uParam0)
{
	func_7(uParam0);
	if (_databinding_is_data_id_valid(uLocal_15))
	{
		_databinding_remove_data_entry(uLocal_15);
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

bool func_3(int iParam0, int iParam1)
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

bool func_4()
{
	if (is_entity_dead(Global_35))
	{
		return true;
	}
	if (_0x9e4ef615e307fbbe())
	{
		return true;
	}
	if (!_0x038b1f1674f0e242(Global_35))
	{
		return true;
	}
	if (!func_8())
	{
		return true;
	}
	return false;
}

void func_5(var uParam0)
{
	if (uParam0->f_131 > 0)
	{
		if (!_0x4912dfe492db98cd(Global_35, "GENERIC_BOOK_READ_AVAILABLE"))
		{
			_0xcb9401f918cb0f75(Global_35, "GENERIC_BOOK_READ_AVAILABLE", 1, -1);
		}
		if (_0x4912dfe492db98cd(Global_35, "GENERIC_BOOK_READ_AVAILABLE") && is_control_just_released(0, -473983589))
		{
			if (_launch_app_by_hash_with_entry(-605293197, -1769873703) == 0)
			{
				uParam0->f_5.f_1 = 1;
				func_9(uParam0);
			}
		}
	}
	else if (_0x4912dfe492db98cd(Global_35, "GENERIC_BOOK_READ_AVAILABLE"))
	{
		_0xcb9401f918cb0f75(Global_35, "GENERIC_BOOK_READ_AVAILABLE", 0, -1);
	}
	if (_is_app_running(-605293197))
	{
		_0xc9caeaeec1256e54(382897689);
	}
	else if (uParam0->f_5.f_1)
	{
		func_7(uParam0);
	}
}

void func_6(var uParam0)
{
	if (uParam0->f_131 > 0 && uParam0->f_128 == -197923977)
	{
		if (!_0x4912dfe492db98cd(Global_35, "GENERIC_BOOK_READ_AVAILABLE"))
		{
			_0xcb9401f918cb0f75(Global_35, "GENERIC_BOOK_READ_AVAILABLE", 1, -1);
		}
		if (_0x4912dfe492db98cd(Global_35, "GENERIC_BOOK_READ_AVAILABLE") && is_control_just_released(0, -473983589))
		{
			if (_launch_app_by_hash_with_entry(-605293197, -1769873703) == 0)
			{
				uParam0->f_5.f_1 = 1;
				func_9(uParam0);
			}
		}
	}
	else if (_0x4912dfe492db98cd(Global_35, "GENERIC_BOOK_READ_AVAILABLE"))
	{
		_0xcb9401f918cb0f75(Global_35, "GENERIC_BOOK_READ_AVAILABLE", 0, -1);
	}
	if (_is_app_running(-605293197))
	{
		_0xc9caeaeec1256e54(382897689);
	}
	else if (uParam0->f_5.f_1)
	{
		func_7(uParam0);
	}
}

void func_7(var uParam0)
{
	if (uParam0->f_5.f_1 && !_is_app_running(-605293197))
	{
		play_sound_frontend("READ", "HUD_SHOP_SOUNDSET", true, 0);
		uParam0->f_5.f_1 = 0;
	}
}

bool func_8()
{
	return func_10(1);
}

void func_9(var uParam0)
{
	if (_databinding_is_data_id_valid(uLocal_15))
	{
		_databinding_remove_data_entry(uLocal_15);
	}
	func_11(uParam0);
	uLocal_15 = _databinding_add_data_container_from_path("", "Translate");
	uParam0->f_5.f_63 = _databinding_add_data_container(uLocal_15, "Generic");
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_131)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_5.f_2[iVar1]->f_1)
		{
			uParam0->f_5 = _item_database_localization_get_value(uParam0->f_128, uParam0->f_5.f_2[iVar1]->f_2, iVar0);
			switch (&uParam0->f_5.f_2[iVar1])
			{
				case 1410847083:
					func_12(&(uParam0->f_5), iVar2, 1, 1, 0);
					iVar2++;
					break;
				case -641080715:
					func_12(&(uParam0->f_5), iVar2, 3, 1, 0);
					iVar2++;
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

bool func_10(int iParam0)
{
	return func_13(iParam0);
}

void func_11(var uParam0)
{
	if (_databinding_is_data_id_valid(uParam0->f_5.f_63))
	{
		_databinding_remove_data_entry(uParam0->f_5.f_63);
	}
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (_databinding_is_data_id_valid(&(uParam0->f_5.f_64[iVar0])))
		{
			_databinding_remove_data_entry(&(uParam0->f_5.f_64[iVar0]));
		}
		if (_databinding_is_data_id_valid(&(uParam0->f_5.f_89[iVar0])))
		{
			_databinding_remove_data_entry(&(uParam0->f_5.f_89[iVar0]));
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

void func_12(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (iParam1 >= 24)
	{
		return;
	}
	StringCopy(&cVar0, "textField", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	if (bParam4)
	{
		StringConCat(&cVar0, "Strike", 24);
	}
	uParam0->f_64[iParam1] = _databinding_add_data_container(uParam0->f_63, &cVar0);
	_databinding_add_data_hash(&(uParam0->f_64[iParam1]), "text", *uParam0);
	_databinding_add_data_hash(&(uParam0->f_64[iParam1]), "style", iParam2);
	StringCopy(&cVar0, "divider", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	uParam0->f_89[iParam1] = _databinding_add_data_container(uParam0->f_63, &cVar0);
	_databinding_add_data_bool(&(uParam0->f_89[iParam1]), "isVisible", iParam3);
}

bool func_13(int iParam0)
{
	return func_14(Global_1935496->f_27, iParam0);
}

bool func_14(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

