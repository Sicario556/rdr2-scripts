void __EntryFunction__()
{
	*Global_1048945 = { -557.7f, -3610.7f, 80.9f };
	Global_1051043 = -1;
	if (_does_compressed_global_block_buffer_exist(4))
	{
		_restore_global_block(4);
	}
	else
	{
		_store_global_block(4);
	}
	terminate_this_thread();
}

