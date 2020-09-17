void __EntryFunction__()
{
	Global_1899847 = -1;
	Global_1905941 = -1;
	Global_1905942 = -1;
	Global_1955499 = -1;
	if (_does_compressed_global_block_buffer_exist(7))
	{
		_restore_global_block(7);
	}
	else
	{
		_store_global_block(7);
	}
	terminate_this_thread();
}

