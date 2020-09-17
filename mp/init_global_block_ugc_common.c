void __EntryFunction__()
{
	if (_does_compressed_global_block_buffer_exist(12))
	{
		_restore_global_block(12);
	}
	else
	{
		_store_global_block(12);
	}
	terminate_this_thread();
}

