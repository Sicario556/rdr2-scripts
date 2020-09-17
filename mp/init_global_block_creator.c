void __EntryFunction__()
{
	if (_does_compressed_global_block_buffer_exist(11))
	{
		_restore_global_block(11);
	}
	else
	{
		_store_global_block(11);
	}
	terminate_this_thread();
}

