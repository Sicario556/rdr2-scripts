void __EntryFunction__()
{
	Global_1357515 = -1;
	Global_1357516 = 1;
	if (_does_compressed_global_block_buffer_exist(5))
	{
		_restore_global_block(5);
	}
	else
	{
		_store_global_block(5);
	}
	terminate_this_thread();
}

