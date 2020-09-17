void __EntryFunction__()
{
	if (has_force_cleanup_occurred(523))
	{
		terminate_this_thread();
	}
	bVar0 = false;
	iVar1 = 0;
	while (!bVar0)
	{
		iVar2 = iVar1;
		if (func_1(Global_1415419->f_19[iVar2]->f_11, 8))
		{
			func_2(iVar2);
		}
		iVar1++;
		if (iVar1 > 247)
		{
			bVar0 = true;
		}
		wait(0);
	}
	terminate_this_thread();
}

bool func_1(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_2(int iParam0)
{
	Var0 = &Global_1415419;
	Var0.f_1 = Global_1415419->f_19[iParam0]->f_10;
	Var0.f_2 = -641542860;
	Var0.f_3 = func_3(Global_1415419->f_9756);
	Global_1415419->f_19[iParam0]->f_8 = -1;
	Global_1415419->f_19[iParam0]->f_9 = -1;
	if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		uVar14 = Var0.f_1;
		iVar5 = _datafile_get_num_children(Var0, Var0.f_1);
		iVar6 = 0;
		while (iVar6 < iVar5)
		{
			if (Global_1415419->f_9717 >= 960)
			{
			}
			else
			{
				Var0.f_2 = 1696282352;
				Var0.f_3 = iVar6;
				if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
				{
					Var0.f_2 = -1119853910;
					if (_datafile_get_vector(&vVar8, &Var0))
					{
						if (Global_1415419->f_19[iParam0]->f_8 == -1)
						{
							Global_1415419->f_19[iParam0]->f_8 = Global_1415419->f_9717;
						}
						*Global_1415419->f_2996[Global_1415419->f_9717] = { vVar8 };
						Global_1415419->f_19[iParam0]->f_9 = Global_1415419->f_9717;
					}
				else
				{
					}
					else
					{
						Var0.f_2 = -1983241935;
						if (_datafile_get_vector(&vVar11, &Var0))
						{
							Global_1415419->f_2996[Global_1415419->f_9717]->f_3 = { vVar11 };
						}
						Var0.f_2 = -143463129;
						if (_datafile_get_int(&uVar7, &Var0))
						{
							Global_1415419->f_2996[Global_1415419->f_9717]->f_6 = uVar7;
						}
						else
						{
							Global_1415419->f_2996[Global_1415419->f_9717]->f_6 = 0;
						}
						Global_1415419->f_9717++;
						Var0.f_1 = uVar14;
					}
					iVar6++;
					func_4(&(Global_1415419->f_19[iParam0]->f_11), 8);
					func_4(&(Global_1415419->f_19[iParam0]->f_11), 1);
					func_4(&(Global_1415419->f_19[iParam0]->f_11), 2);
				}
			}
		}
	}
}

int func_3(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 675537701;
		case 1:
			return -1915988145;
		case 2:
			return 38535626;
		case 3:
			return 1904167574;
		case 4:
			return 244711249;
		case 5:
			return -1859792564;
		case 6:
			return -1808688941;
		case 7:
			return -736296038;
		case 8:
			return -909439131;
		case 9:
			return 1917744724;
		case 10:
			return 821748379;
		case 11:
			return 196685551;
		case 12:
			return 1983548039;
		case 15:
			return -1716084250;
		case 13:
			return 985737465;
		case 16:
			return 869827975;
		case 14:
			return -735550853;
		default:
			break;
	}
	return 1776960747;
}

void func_4(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

