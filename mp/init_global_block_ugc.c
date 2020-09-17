void __EntryFunction__()
{
	*Global_262148 = { 16.1983f, 2.16f, 1983.02f };
	Global_262152 = 4;
	Global_262154 = -1;
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

