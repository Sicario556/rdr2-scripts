void __EntryFunction__()
{
	if (_does_compressed_global_block_buffer_exist(13))
	{
		_restore_global_block(13);
	}
	else
	{
		_store_global_block(13);
	}
	terminate_this_thread();
}

