void __EntryFunction__()
{
	if (_does_compressed_global_block_buffer_exist(1))
	{
		_restore_global_block(1);
	}
	else
	{
		_store_global_block(1);
	}
	terminate_this_thread();
}

