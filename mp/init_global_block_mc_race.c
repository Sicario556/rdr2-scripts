void __EntryFunction__()
{
	if (_does_compressed_global_block_buffer_exist(8))
	{
		_restore_global_block(8);
	}
	else
	{
		_store_global_block(8);
	}
	terminate_this_thread();
}

