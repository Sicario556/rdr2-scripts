void __EntryFunction__()
{
	if (_does_compressed_global_block_buffer_exist(2))
	{
		_restore_global_block(2);
	}
	else
	{
		_store_global_block(2);
	}
	terminate_this_thread();
}

