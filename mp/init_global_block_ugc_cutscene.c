void __EntryFunction__()
{
	if (_does_compressed_global_block_buffer_exist(14))
	{
		_restore_global_block(14);
	}
	else
	{
		_store_global_block(14);
	}
	terminate_this_thread();
}

