void __EntryFunction__()
{
	if (_does_compressed_global_block_buffer_exist(9))
	{
		_restore_global_block(9);
	}
	else
	{
		_store_global_block(9);
	}
	terminate_this_thread();
}

