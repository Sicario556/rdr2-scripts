void __EntryFunction__()
{
	iLocal_0 = 674038080;
	uLocal_1 = _databinding_add_ui_item_list_from_path("", "VirtualizationUnitTestData");
	uVar0 = _databinding_add_data_container(uLocal_1, "item0");
	_databinding_add_data_string(uVar0, "title", "I am item 0");
	_databinding_insert_ui_item_to_list_from_context_string_alias(uLocal_1, -1, "checkbox", uVar0);
	uVar0 = _databinding_add_data_container(uLocal_1, "item1");
	_databinding_add_data_string(uVar0, "title", "I am item 1");
	_databinding_insert_ui_item_to_list_from_context_string_alias(uLocal_1, -1, "checkbox", uVar0);
	uVar0 = _databinding_add_data_container(uLocal_1, "item2");
	_databinding_add_data_string(uVar0, "title", "I am item 2");
	_databinding_insert_ui_item_to_list_from_context_string_alias(uLocal_1, -1, "checkbox", uVar0);
	uVar0 = _databinding_add_data_container(uLocal_1, "item3");
	_databinding_add_data_string(uVar0, "title", "I am item 3");
	_databinding_insert_ui_item_to_list_from_context_string_alias(uLocal_1, -1, "checkbox", uVar0);
	uVar0 = _databinding_add_data_container(uLocal_1, "item4");
	_databinding_add_data_string(uVar0, "title", "I am item 4");
	_databinding_insert_ui_item_to_list_from_context_string_alias(uLocal_1, -1, "checkbox", uVar0);
	uVar0 = _databinding_add_data_container(uLocal_1, "item5");
	_databinding_add_data_string(uVar0, "title", "I am item 5");
	_databinding_insert_ui_item_to_list_from_context_string_alias(uLocal_1, -1, "checkbox", uVar0);
	uVar0 = _databinding_add_data_container(uLocal_1, "item6");
	_databinding_add_data_string(uVar0, "title", "I am item 6");
	_databinding_insert_ui_item_to_list_from_context_string_alias(uLocal_1, -1, "checkbox", uVar0);
	uVar0 = _databinding_add_data_container(uLocal_1, "item7");
	_databinding_add_data_string(uVar0, "title", "I am item 7");
	_databinding_insert_ui_item_to_list_from_context_string_alias(uLocal_1, -1, "checkbox", uVar0);
	uVar0 = _databinding_add_data_container(uLocal_1, "item8");
	_databinding_add_data_string(uVar0, "title", "I am item 8");
	_databinding_insert_ui_item_to_list_from_context_string_alias(uLocal_1, -1, "checkbox", uVar0);
	uVar0 = _databinding_add_data_container(uLocal_1, "item9");
	_databinding_add_data_string(uVar0, "title", "I am item 9");
	_databinding_insert_ui_item_to_list_from_context_string_alias(uLocal_1, -1, "checkbox", uVar0);
	uVar0 = _databinding_add_data_container(uLocal_1, "item10");
	_databinding_add_data_string(uVar0, "title", "I am item 10");
	_databinding_insert_ui_item_to_list_from_context_string_alias(uLocal_1, -1, "checkbox", uVar0);
	uVar0 = _databinding_add_data_container(uLocal_1, "item11");
	_databinding_add_data_string(uVar0, "title", "I am item 11");
	_databinding_insert_ui_item_to_list_from_context_string_alias(uLocal_1, -1, "checkbox", uVar0);
	uVar0 = _databinding_add_data_container(uLocal_1, "item12");
	_databinding_add_data_string(uVar0, "title", "I am item 12");
	_databinding_insert_ui_item_to_list_from_context_string_alias(uLocal_1, -1, "checkbox", uVar0);
	if (has_force_cleanup_occurred(4))
	{
		func_1();
	}
	while (true)
	{
		while (_event_manager_is_event_pending(iLocal_0))
		{
			if (_event_manager_peek_event(iLocal_0, &iVar1))
			{
				switch (iVar1)
				{
					case -1203660660:
						uVar0 = _databinding_add_data_container(uLocal_1, "itemAA");
						_databinding_add_data_string(uVar0, "title", "I am item AA");
						_databinding_insert_ui_item_to_list_from_context_string_alias(uLocal_1, 13, "checkbox", uVar0);
						break;
				}
				_event_manager_pop_event(iLocal_0);
			}
		}
		wait(0);
	}
}

void func_1()
{
	_databinding_remove_data_entry(uLocal_1);
	terminate_this_thread();
}

