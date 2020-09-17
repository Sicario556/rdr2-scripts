void __EntryFunction__()
{
	if (_does_compressed_global_block_buffer_exist(3))
	{
		_restore_global_block(3);
	}
	else
	{
		_store_global_block(3);
	}
	terminate_this_thread();
}

