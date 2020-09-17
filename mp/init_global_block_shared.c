void __EntryFunction__()
{
	Global_1903070 = -1;
	Global_1904648 = -1;
	Global_1904649 = -1;
	Global_1956130 = -1;
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

