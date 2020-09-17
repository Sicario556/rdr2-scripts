void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_641 = -1047359107;
	iLocal_653 = -1;
	iLocal_681 = -1253725829;
	iLocal_682 = 480011144;
	func_1(&(Local_14.f_205));
	func_2(&Local_14);
	if (has_force_cleanup_occurred(555))
	{
		func_3(&Local_14);
	}
	while (true)
	{
		func_4(&Local_14);
		func_5(&Local_14, Local_14);
		switch (Local_14.f_203)
		{
			case 0:
				if (func_6(&Local_14))
				{
					func_7(&Local_14, 1);
				}
				break;
			case 1:
				if (func_8(&Local_14))
				{
					func_7(&Local_14, 2);
				}
				break;
			case 2:
				if (func_9(&Local_14))
				{
					func_7(&Local_14, 3);
				}
				if (Local_14.f_600 && does_entity_exist(Local_14.f_3))
				{
					if (Local_14.f_202)
					{
						func_10(&Local_14);
					}
					if (Local_14.f_599)
					{
						func_11(&Local_14);
					}
					else
					{
						func_12(&Local_14);
					}
				}
				break;
			case 3:
				if (Local_14.f_202)
				{
					func_10(&Local_14);
				}
				func_13(&Local_14);
				if ((func_14(&Local_14) || func_15(Local_14, Local_14.f_3, 1, 1)) && Local_14.f_622 == 0)
				{
					if (!func_16(&(Local_14.f_205), 8))
					{
						func_17(&(Local_14.f_205), 8, 0);
					}
				}
				else if (func_16(&(Local_14.f_205), 8))
				{
					func_18(&(Local_14.f_205), 8);
				}
				if ((func_16(&(Local_14.f_205), 2) || (Local_14.f_205.f_389 && func_16(&(Local_14.f_205), 1))) || Local_14.f_205.f_385 != 5)
				{
					if (func_19(Local_14, Local_14.f_1, &(Local_14.f_3), &(Local_14.f_4), &(Local_14.f_624), 0, 1097859072, 0))
					{
						func_20(&Local_14);
					}
					if (Local_14.f_599)
					{
						func_11(&Local_14);
					}
					else
					{
						func_12(&Local_14);
					}
					func_21(&Local_14);
					func_22(&Local_14);
					if (func_23(&Local_14, 1))
					{
						func_7(&Local_14, 4);
					}
				}
				else if (func_23(&Local_14, 0))
				{
					func_7(&Local_14, 4);
				}
				break;
			case 4:
				func_3(&Local_14);
				break;
		}
		wait(0);
	}
}

void func_1(var uParam0)
{
	uParam0->f_393 = 2899;
	func_25(&(uParam0->f_217));
	func_25(&(uParam0->f_245));
	func_25(&(uParam0->f_273));
	func_25(&(uParam0->f_301));
	func_25(&(uParam0->f_329));
}

void func_2(var uParam0)
{
	func_26();
	func_27();
	uParam0->f_10 = 115;
	func_28(&(uParam0->f_601));
	func_29(&(Local_14.f_11));
	func_30(&(Local_14.f_11), 0);
	func_31(&(Local_14.f_11), 0);
	func_32(&(Local_14.f_11), 1);
	func_33(&(Local_14.f_11), 1);
	func_34(&(Local_14.f_11), 0);
	func_35(&(Local_14.f_11), 0);
	func_36(&(Local_14.f_11), 0);
	func_37(&(Local_14.f_11), 1);
	func_38(&(Local_14.f_11), 1);
	func_39(&(Local_14.f_11), 1);
	func_40(&(Local_14.f_11), 1);
	func_41(&(Local_14.f_11), 1);
	func_42(&(Local_14.f_11), 1);
	func_43(&(Local_14.f_11), 1);
	func_44(&(Local_14.f_11), 1);
	func_45(&(Local_14.f_11), 1);
	func_46(&(Local_14.f_11), 1);
	func_47(&(Local_14.f_11), 1);
	func_48(&Local_14, 1);
}

void func_3(int iParam0)
{
	func_49(iParam0);
	func_50(&(iParam0->f_205));
	destroy_itemset(iParam0->f_163);
	func_51(iParam0->f_161);
	func_51(iParam0->f_164);
	func_52(&(iParam0->f_601));
	func_53(*iParam0);
	terminate_this_thread();
}

void func_4(var uParam0)
{
	if (Local_14.f_203 == 3)
	{
		if (func_54(&Local_14) <= 15f)
		{
			if (does_entity_exist(Local_14.f_3) && !is_entity_dead(Local_14.f_3))
			{
				set_ped_reset_flag(Local_14.f_3, 49, true);
				set_ped_reset_flag(Local_14.f_3, 53, true);
			}
		}
		if (((!func_55(Local_14.f_193, 2) && func_55(Local_14.f_193, 65536)) && func_56(&Local_14) == 1) && (((((is_entity_in_volume(Global_35, iVar640, true, 0) && !func_57(Global_35, 1)) && func_54(&Local_14) <= 5f) && func_54(&Local_14) > 2.2f) && (!func_58(&uLocal_677) || func_59(&uLocal_677) >= 16f)) || func_55(Local_14.f_193, 1048576)))
		{
			func_60(Local_14, &(Local_14.f_3), &(Local_14.f_193), Local_14.f_194);
			func_61(&(Local_14.f_193), 2);
			func_61(&(Local_14.f_193), 524288);
			func_62(&(Local_14.f_193), 1048576);
			func_62(&(Local_14.f_193), 65536);
			if (Local_14.f_1 == 2 || bVar677)
			{
				func_61(&(Local_14.f_193), 2048);
			}
			func_17(&(Local_14.f_205), 4, 0);
		}
	}
	if (bVar673)
	{
		func_63(&Local_14, 0);
		func_64(&Local_14, 0);
		iLocal_676 = 0;
		func_61(&(Local_14.f_193), 32);
	}
	vVar0 = { func_65(Local_14, Local_14.f_1, 0) };
	if (Local_14.f_1 == 1)
	{
		vVar0 = { -5497.847f, -2957.04f, -1.59251f };
	}
	if (func_66(Global_35, vVar0, 1) <= 7f)
	{
		disable_control_action(0, -762150781, false);
	}
}

void func_5(int iParam0, var uParam1)
{
	if (func_67(iParam0))
	{
		func_3(iParam0);
	}
	if (!func_68(Global_35, 0))
	{
		func_3(iParam0);
	}
	if (func_69(*iParam0, iParam0->f_1, &(iParam0->f_601), iParam0->f_3))
	{
		iParam0->f_622 = 1;
	}
	if (func_70(iParam0))
	{
		if (!func_58(&(iParam0->f_7)))
		{
			func_71(&(iParam0->f_7), 0);
		}
		else if (func_59(&(iParam0->f_7)) > 10f)
		{
			func_72(&(iParam0->f_7));
			func_3(iParam0);
		}
	}
	else if (func_58(&(iParam0->f_7)))
	{
		func_72(&(iParam0->f_7));
	}
}

bool func_6(var uParam0)
{
	if (func_73(uParam0))
	{
		uParam0->f_163 = create_itemset(true);
		return true;
	}
	return false;
}

void func_7(int iParam0, int iParam1)
{
	iParam0->f_203 = iParam1;
}

bool func_8(var uParam0)
{
	if (func_74(uParam0))
	{
		return true;
	}
	return false;
}

bool func_9(var uParam0)
{
	if (func_75(uParam0))
	{
		return true;
	}
	return false;
}

void func_10(var uParam0)
{
	if (!does_entity_exist(uParam0->f_3) || !does_entity_exist(Global_35))
	{
		return;
	}
	if (is_entity_dead(Global_35))
	{
		return;
	}
	if ((get_frame_count() % 40) == 0)
	{
		uParam0->f_201 = get_distance_between_coords(get_entity_coords(uParam0->f_3, true, false), get_entity_coords(Global_35, true, false), true);
	}
}

void func_11(int iParam0)
{
	if (((func_76(iParam0) && does_entity_exist(Global_35)) && !Global_1935630->f_12) && ((_does_volume_exist(iParam0->f_161) && is_entity_in_volume(Global_35, iParam0->f_161, true, 0)) || func_77(iParam0)))
	{
		if (func_78(iParam0, iParam0->f_160) > -1)
		{
			if (func_79(iParam0))
			{
				func_80(iParam0->f_41[iParam0->f_160], 0);
				func_81(iParam0->f_41[iParam0->f_160], 0);
				if (iParam0->f_623)
				{
					set_current_ped_weapon(Global_35, -1569615261, false, 0, false, false);
				}
				func_60(*iParam0, &(iParam0->f_3), &(iParam0->f_193), iParam0->f_194);
				func_82(iParam0, iParam0->f_160, -1);
				if (!func_83(iParam0, 2))
				{
					func_84(&(iParam0->f_3));
					func_85(&(iParam0->f_41[iParam0->f_160]->f_21), 0, 0, 1, 0);
				}
			}
		}
	}
	else
	{
		func_86(iParam0->f_41[iParam0->f_160], 0);
		func_84(&(iParam0->f_3));
		func_81(iParam0->f_41[iParam0->f_160], 0);
		func_85(&(iParam0->f_41[iParam0->f_160]->f_21), 0, 0, 1, 0);
	}
}

void func_12(int iParam0)
{
	if (func_76(iParam0))
	{
		if (func_87(iParam0, iParam0->f_160) > -1)
		{
			if (func_79(iParam0))
			{
				func_80(iParam0->f_41[iParam0->f_160], 0);
				func_84(&(iParam0->f_3));
				func_81(iParam0->f_41[iParam0->f_160], 0);
				func_85(&(iParam0->f_41[iParam0->f_160]->f_21), 0, 0, 1, 0);
				if (iParam0->f_623)
				{
					set_current_ped_weapon(Global_35, -1569615261, false, 0, false, false);
				}
				func_60(*iParam0, &(iParam0->f_3), &(iParam0->f_193), iParam0->f_194);
				func_82(iParam0, iParam0->f_160, -1);
			}
		}
	}
	else
	{
		func_80(iParam0->f_41[iParam0->f_160], 0);
		if (does_entity_exist(iParam0->f_3) && !is_entity_dead(iParam0->f_3))
		{
			_0xe98d55c5983f2509(iParam0->f_3);
		}
	}
}

void func_13(var uParam0)
{
	if (func_88(uParam0))
	{
		if (uParam0->f_626)
		{
			bVar0 = func_89(&(uParam0->f_11), &(uParam0->f_39), &(uParam0->f_3), &(uParam0->f_625), 1101004800);
		}
		else
		{
			bVar0 = func_90(uParam0->f_3, 0, &(uParam0->f_11), &(uParam0->f_39), 0, 0);
		}
		if (bVar0)
		{
			if (func_91(uParam0))
			{
				func_17(&(uParam0->f_205), 2, 1);
			}
		}
	}
}

int func_14(var uParam0)
{
	func_92();
	if (fVar665 >= 80f)
	{
		return 1;
	}
	return 0;
}

int func_15(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		if (func_93())
		{
			return 1;
		}
	}
	if (!is_ped_injured(iParam1))
	{
		if (vdist(Global_36, get_entity_coords(iParam1, true, false)) < 18f || is_scripted_speech_playing(iParam1))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		if (func_94(0) == 7 || func_95())
		{
			return 1;
		}
	}
	if (func_96(&((*Global_1396257)[iParam0]->f_626), 1024))
	{
		return 1;
	}
	return 0;
}

bool func_16(var uParam0, int iParam1)
{
	return func_55(uParam0->f_388, iParam1);
}

void func_17(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		uParam0->f_388 = 0;
		func_61(&(uParam0->f_388), iParam1);
	}
	else
	{
		func_61(&(uParam0->f_388), iParam1);
	}
}

void func_18(var uParam0, int iParam1)
{
	func_62(&(uParam0->f_388), iParam1);
}

bool func_19(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, float fParam5, float fParam6, bool bParam7)
{
	if (*uParam4)
	{
		return false;
	}
	if (is_entity_dead(*uParam2) || Global_1935630->f_12)
	{
		return false;
	}
	if (bParam7)
	{
		if (is_scripted_speech_playing(*uParam2))
		{
			Global_40.f_11623[iParam0]->f_5++;
			Global_40.f_11623[iParam0]->f_2 = func_97();
			*uParam4 = 1;
			return true;
		}
	}
	if (fParam5 == 0f)
	{
		if (!func_98(Global_35, *uParam2, fParam6, 1))
		{
			return false;
		}
	}
	else if (fParam5 > fParam6)
	{
		return false;
	}
	if (!func_58(uParam3))
	{
		func_99(uParam3, 0f);
	}
	else if (func_59(uParam3) >= 2f)
	{
		if (!func_100(Global_40.f_11623[iParam0]->f_2))
		{
			func_101(iParam0);
			*uParam4 = 1;
			func_72(uParam3);
			return true;
		}
		else
		{
			func_101(iParam0);
			*uParam4 = 1;
			func_72(uParam3);
			return true;
		}
	}
	return false;
}

void func_20(int iParam0)
{
}

void func_21(int iParam0)
{
	if (!func_102(iParam0) || func_103(iParam0->f_193, iParam0->f_195))
	{
		return;
	}
	if (iParam0->f_196 < 2)
	{
		if (func_104(&(iParam0->f_3), 249295937))
		{
			func_105(iParam0);
			func_106(&(iParam0->f_193), iParam0->f_195);
		}
	}
}

void func_22(int iParam0)
{
	if (func_107(iParam0))
	{
		func_108(&(iParam0->f_163), iParam0->f_164, &(iParam0->f_3), &(iParam0->f_165), &(iParam0->f_190), 5000);
	}
}

bool func_23(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_109(iParam0))
		{
			return true;
		}
	}
	func_110(&(iParam0->f_205));
	return false;
}

int func_24(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return 1;
}

void func_25(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	uParam0->f_2.f_1 = -1;
	uParam0->f_4 = -1;
	uParam0->f_4.f_1 = -1;
	uParam0->f_6 = -1;
	uParam0->f_6.f_1 = -1;
	uParam0->f_8 = -1;
	uParam0->f_8.f_1 = -1;
	uParam0->f_10 = -1;
	uParam0->f_10.f_1 = -1;
	uParam0->f_12 = 0;
	uParam0->f_13 = 0;
	uParam0->f_14 = 0;
	uParam0->f_15 = 0;
	uParam0->f_16 = 0;
	uParam0->f_17 = 0;
	uParam0->f_18 = 0;
	uParam0->f_19 = 0;
	uParam0->f_23 = 17743;
	uParam0->f_24 = 17752;
	uParam0->f_25 = 17761;
	uParam0->f_20 = 0;
	uParam0->f_21 = 2;
	uParam0->f_22 = 0.95f;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
}

void func_26()
{
	Local_14 = 22;
	Local_14.f_1 = func_114(22);
	func_115();
	Local_14.f_2 = func_117(Local_14, Local_14.f_1, 9, func_116(Local_14));
	if (Local_14.f_1 == 0)
	{
		Local_14.f_161 = _create_volume_cylinder_with_custom_name(-5508.085f, -2932.673f, -2.634242f, 0f, 0f, -49.7522f, 4.560063f, 6.078531f, 5.547368f, "volTalkTrigger");
	}
	else if (Local_14.f_1 == 1)
	{
		Local_14.f_161 = _create_volume_cylinder_with_custom_name(-5499.649f, -2953.863f, -2.634242f, 0f, 0f, -70.41862f, 4.560063f, 4.917511f, 5.547368f, "volTalkTrigger");
	}
	else
	{
		Local_14.f_161 = _create_volume_cylinder_with_custom_name(-5495.711f, -2942.673f, -2.634242f, 0f, 0f, 36.36764f, 3.194005f, 5.214571f, 5.547368f, "volTalkTrigger");
	}
	Local_14.f_194 = 16384;
	Local_14.f_195 = 4;
	Local_14.f_205.f_393 = 19236;
}

void func_27()
{
	if (Local_14.f_1 == 0)
	{
		iLocal_643 = _create_volume_cylinder_with_custom_name(-5508.085f, -2932.673f, -2.634242f, 0f, 0f, -49.7522f, 4.560063f, 6.078531f, 5.547368f, "m_volTrigger");
		iLocal_646 = _create_volume_cylinder_with_custom_name(-5510.888f, -2929.929f, -3.760728f, 0f, 0f, 0f, 25.86575f, 23.33263f, 11.63066f, "m_volCalloverArea");
		iLocal_645 = _create_volume_cylinder_with_custom_name(-5509.431f, -2932.574f, -2.987233f, 0f, 0f, 0f, 12.01924f, 10.87544f, 11.34509f, "m_volSpeechArea");
		iLocal_644 = _create_volume_box_with_custom_name(-5511.153f, -2929.652f, -2.776548f, 0f, 0f, -59.16267f, 2.746939f, 3.634164f, 8.927961f, "m_volStayAway");
		iLocal_642 = _create_volume_sphere_with_custom_name(-5511.153f, -2929.652f, -2.776548f, 0f, 0f, 0f, 40f, 40f, 40f, "m_volRandomEventBlock");
	}
	else if (Local_14.f_1 == 1)
	{
		iLocal_643 = _create_volume_cylinder_with_custom_name(-5499.649f, -2953.863f, -2.634242f, 0f, 0f, -70.41862f, 4.560063f, 4.917511f, 5.547368f, "m_volTrigger");
		iLocal_646 = _create_volume_cylinder_with_custom_name(-5510.172f, -2946.772f, -3.760728f, 0f, 0f, 19.2469f, 22.05198f, 26.8289f, 11.63066f, "m_volCalloverArea");
		iLocal_645 = _create_volume_cylinder_with_custom_name(-5502.124f, -2949.856f, -2.987233f, 0f, 0f, 6.290838f, 13.62729f, 11.91515f, 11.34509f, "m_volSpeechArea");
		iLocal_644 = _create_volume_box_with_custom_name(-5497.959f, -2957.207f, -2.776548f, 0f, 0f, -75.42225f, 1.296526f, 3.066641f, 8.927961f, "m_volStayAway");
		iLocal_642 = _create_volume_sphere_with_custom_name(-5497.959f, -2957.207f, -2.776548f, 0f, 0f, 0f, 40f, 40f, 40f, "m_volRandomEventBlock");
	}
	else
	{
		iLocal_643 = _create_volume_cylinder_with_custom_name(-5495.711f, -2942.673f, -2.634242f, 0f, 0f, 36.36764f, 3.194005f, 5.214571f, 5.547368f, "m_volTrigger");
		iLocal_646 = _create_volume_cylinder_with_custom_name(-5505.143f, -2945.473f, -3.760728f, 0f, 0f, 19.2469f, 22.05198f, 26.8289f, 11.63066f, "m_volCalloverArea");
		iLocal_645 = _create_volume_cylinder_with_custom_name(-5500.122f, -2945.972f, -2.987233f, 0f, 0f, 122.9969f, 14.78125f, 11.91515f, 11.34509f, "m_volSpeechArea");
		iLocal_644 = _create_volume_box_with_custom_name(-5493.419f, -2940.896f, -2.776548f, 0f, 0f, 36.69946f, 1.296526f, 2.754986f, 8.927961f, "m_volStayAway");
		iLocal_642 = _create_volume_sphere_with_custom_name(-5493.419f, -2940.896f, -2.776548f, 0f, 0f, 0f, 40f, 40f, 40f, "m_volRandomEventBlock");
	}
}

void func_28(var uParam0)
{
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	uParam0->f_4 = 1;
	uParam0->f_5 = 1;
	uParam0->f_6 = 1;
	uParam0->f_7 = 1;
	uParam0->f_8 = 1;
	uParam0->f_9 = 1;
	uParam0->f_10 = 1;
	uParam0->f_11 = 1.75f;
	uParam0->f_12 = 2.25f;
	uParam0->f_16 = 45000;
}

void func_29(var uParam0)
{
	func_32(uParam0, 0);
	func_39(uParam0, 0);
	func_119(uParam0, 1);
	func_42(uParam0, 1);
	func_120(uParam0, 0);
	func_30(uParam0, 1);
	func_121(uParam0, 1, 1, 1);
}

void func_30(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_122(uParam0, 256);
	}
	else
	{
		func_123(uParam0, 256);
	}
}

void func_31(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_122(uParam0, 524288);
	}
	else
	{
		func_123(uParam0, 524288);
	}
}

void func_32(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_123(&(uParam0->f_1), 16384);
	}
	else
	{
		func_122(&(uParam0->f_1), 16384);
	}
}

void func_33(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_123(&(uParam0->f_1), 524288);
	}
	else
	{
		func_122(&(uParam0->f_1), 524288);
	}
}

void func_34(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_123(&(uParam0->f_1), 131072);
	}
	else
	{
		func_122(&(uParam0->f_1), 131072);
	}
}

void func_35(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_122(uParam0, 4);
	}
	else
	{
		func_123(uParam0, 4);
	}
}

void func_36(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_122(uParam0, 2);
	}
	else
	{
		func_123(uParam0, 2);
	}
}

void func_37(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_123(&(uParam0->f_1), 2);
	}
	else
	{
		func_122(&(uParam0->f_1), 2);
	}
}

void func_38(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_123(&(uParam0->f_1), 8);
	}
	else
	{
		func_122(&(uParam0->f_1), 8);
	}
}

void func_39(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_123(&(uParam0->f_1), 2048);
	}
	else
	{
		func_122(&(uParam0->f_1), 2048);
	}
}

void func_40(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_122(uParam0, 128);
	}
	else
	{
		func_123(uParam0, 128);
	}
}

void func_41(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_123(&(uParam0->f_1), 16);
	}
	else
	{
		func_122(&(uParam0->f_1), 16);
	}
}

void func_42(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_122(uParam0, 16);
	}
	else
	{
		func_123(uParam0, 67108864);
		func_123(uParam0, 16);
	}
}

void func_43(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_122(uParam0, 262144);
	}
	else
	{
		func_123(uParam0, 262144);
	}
}

void func_44(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_123(&(uParam0->f_1), 1024);
	}
	else
	{
		func_122(&(uParam0->f_1), 1024);
	}
}

void func_45(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_122(uParam0, 8);
	}
	else
	{
		func_123(uParam0, 8);
	}
}

void func_46(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_122(uParam0, 32);
	}
	else
	{
		func_123(uParam0, 32);
	}
}

void func_47(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_123(&(uParam0->f_1), 4);
	}
	else
	{
		func_122(&(uParam0->f_1), 4);
	}
}

void func_48(int iParam0, int iParam1)
{
	iParam0->f_202 = iParam1;
}

int func_49(int iParam0)
{
	func_124();
	_0xc67a4910425f11f1(player_id(), "SheriffBubble");
	if (is_itemset_valid(iVar695))
	{
		destroy_itemset(iVar695);
	}
	if (is_itemset_valid(iVar696))
	{
		destroy_itemset(iVar696);
	}
	func_51(iVar640);
	func_51(iVar639);
	func_51(iVar643);
	func_51(iVar641);
	func_51(iVar642);
	func_125(0);
	if (does_entity_exist(Local_14.f_3))
	{
		set_ped_config_flag(Local_14.f_3, 153, false);
		remove_entity_from_audio_mix_group(Local_14.f_3, 0f);
	}
	stop_ped_speaking(Local_14.f_3, false);
	func_126();
	func_127(Local_14.f_3);
	if (func_128(348, 0))
	{
		if (func_55(Local_14.f_193, 512))
		{
			func_129();
			func_130(348, 0, 0, 0, 0);
		}
		else
		{
			func_130(348, 0, 1, 0, 0);
		}
	}
	return 1;
}

void func_50(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (_does_anim_scene_exist(uParam0[iVar0]))
		{
			_delete_anim_scene(uParam0[iVar0]);
		}
		iVar0++;
	}
}

void func_51(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

void func_52(var uParam0)
{
	if (is_itemset_valid(uParam0->f_18))
	{
		destroy_itemset(uParam0->f_18);
	}
	if (is_itemset_valid(uParam0->f_19))
	{
		destroy_itemset(uParam0->f_19);
	}
	if (_does_volume_exist(uParam0->f_20))
	{
		_delete_volume(uParam0->f_20);
	}
	if (func_58(&(uParam0->f_13)))
	{
		func_72(&(uParam0->f_13));
	}
}

void func_53(int iParam0)
{
	if (!is_entity_dead(Global_35))
	{
		set_ped_config_flag(Global_35, 43, false);
	}
	if ((*Global_1396257)[iParam0]->f_631)
	{
		func_131(0, -1);
	}
	func_132();
	(*Global_1396257)[iParam0]->f_631 = 0;
	Global_1415398->f_2 = (Global_1415398->f_2 - 1);
	Global_1935183->f_28 = 0;
}

float func_54(int iParam0)
{
	return iParam0->f_201;
}

bool func_55(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_56(int iParam0)
{
	return iParam0->f_205.f_385;
}

bool func_57(int iParam0, bool bParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (!is_ped_injured(iParam0) || !bParam1)
		{
			iVar0 = get_interior_from_entity(iParam0);
			if (is_valid_interior(iVar0))
			{
				if (func_133(iVar0) || func_134(iVar0))
				{
					return false;
				}
				return true;
			}
		}
	}
	return false;
}

bool func_58(var uParam0)
{
	return func_135(*uParam0, 1);
}

float func_59(var uParam0)
{
	if (!func_58(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_136(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_137() - uParam0->f_1);
}

void func_60(int iParam0, var uParam1, var uParam2, var uParam3)
{
	if (!does_entity_exist(*uParam1))
	{
		return;
	}
	if (func_103(*uParam2, uParam3))
	{
		return;
	}
	Global_40.f_11623[iParam0]->f_6++;
	if (Global_40.f_11623[iParam0]->f_6 == 1 && func_139(func_138(-1342635612)) < 5)
	{
		func_140(func_138(-1342635612), 1);
	}
	Global_40.f_11623[iParam0]->f_3 = func_97();
	func_106(uParam2, uParam3);
	(*Global_1396257)[iParam0]->f_631 = 1;
}

void func_61(var uParam0, int iParam1)
{
	func_106(uParam0, iParam1);
}

void func_62(var uParam0, int iParam1)
{
	func_141(uParam0, iParam1);
}

void func_63(int iParam0, int iParam1)
{
	if (!func_142(iParam1))
	{
		return;
	}
	iParam0->f_160 = iParam1;
}

void func_64(int iParam0, int iParam1)
{
	if (!func_142(iParam1))
	{
		return;
	}
	func_81(iParam0->f_41[iParam1], 0);
}

struct<4> func_65(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
					switch (iParam2)
					{
						case 0:
							Var0 = { 1992.478f, -370.7957f, 40.79723f };
							Var0.f_3 = 0f;
							break;
						case 1:
							Var0 = { 2015.352f, -327.9001f, 40.61312f };
							Var0.f_3 = 0f;
							break;
						case 2:
							Var0 = { 2048.973f, -308.3546f, 40.71767f };
							Var0.f_3 = 0f;
							break;
						case 3:
							Var0 = { 1988.401f, -327.9046f, 40.52593f };
							Var0.f_3 = 0f;
							break;
						case 4:
							Var0 = { 2043.473f, -299.7293f, 40.62843f };
							Var0.f_3 = 0f;
							break;
					}
					break;
				case 5:
					Var0 = { 2008.711f, -330.3677f, 40.6611f };
					Var0.f_3 = 0f;
					break;
			}
			break;
		case 1:
			Var0 = { 2434.052f, -1224.941f, 45.8519f };
			Var0.f_3 = -118f;
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					Var0 = { -3704.056f, -2618.024f, -14.9192f };
					Var0.f_3 = 23.3026f;
					break;
				case 1:
					switch (iParam2)
					{
						case 0:
							Var0 = { -3644.674f, -2615.925f, -14.8451f };
							Var0.f_3 = 349.841f;
							break;
						case 1:
							Var0 = { -3644.674f, -2615.925f, -14.8451f };
							Var0.f_3 = 349.841f;
							break;
						case 2:
							Var0 = { -3704.056f, -2618.024f, -14.9192f };
							Var0.f_3 = 23.3026f;
							break;
						case 3:
							Var0 = { -3704.056f, -2618.024f, -14.9192f };
							Var0.f_3 = 23.3026f;
							break;
					}
					break;
			}
			break;
		case 3:
			Var0 = { -1791.806f, -422.4149f, 154.8645f };
			Var0.f_3 = 205.9765f;
			break;
		case 4:
			switch (func_143(4))
			{
				case 3:
					Var0 = { 502.0502f, 1284.979f, 181.4051f };
					Var0.f_3 = 114.5882f;
					break;
				case 9:
					Var0 = { 414.5646f, 412.7333f, 107.6299f };
					Var0.f_3 = 352.4153f;
					break;
				case 10:
					Var0 = { 2794.157f, 1406.62f, 82.3539f };
					Var0.f_3 = 65.0766f;
					break;
				case 13:
					Var0 = { -5342.929f, -2947.815f, 0.80696f };
					Var0.f_3 = 20.08f;
					break;
				case 4:
					Var0 = { -1208.554f, -1229.683f, 74.7918f };
					Var0.f_3 = 19.5942f;
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					Var0 = { 888.6843f, 1276.612f, 234.0975f };
					Var0.f_3 = 321.3007f;
					break;
				case 1:
					Var0 = { 865.601f, 1248.82f, 179.7602f };
					Var0.f_3 = 321.3007f;
					break;
			}
			break;
		case 7:
			Var0 = { 2016.26f, 623.0106f, 158.6706f };
			Var0.f_3 = -167.98f;
			break;
		case 5:
			Var0 = { -1502.098f, 2458.125f, 417.4865f };
			Var0.f_3 = 160.0872f;
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					Var0 = { 2547.377f, -1216.046f, 52.3168f };
					Var0.f_3 = 87.45f;
					break;
				case 1:
					Var0 = { 2547.377f, -1216.046f, 52.3168f };
					Var0.f_3 = 87.45f;
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
				case 1:
					Var0 = { -326.079f, 765.2856f, 121.6327f };
					Var0.f_3 = 352.3531f;
					break;
			}
			break;
		case 10:
			Var0 = { 2673.46f, -1391.259f, 47.50816f };
			Var0.f_3 = 316.45f;
			break;
		case 11:
			switch (func_144(11))
			{
				case 105:
					Var0 = { 1423.438f, -1381.801f, 80.8106f };
					Var0.f_3 = 352.6983f;
					return Var0;
				case 38:
					Var0 = { -773.2449f, -1329.082f, 42.6291f };
					Var0.f_3 = 191.3503f;
					return Var0;
				case 126:
					Var0 = { -2378.475f, -2378.621f, 61.1724f };
					Var0.f_3 = 185.2923f;
					return Var0;
				case 5:
					Var0 = { 2563.835f, -1378.423f, 45.1925f };
					Var0.f_3 = 346.5068f;
					return Var0;
			}
			switch (func_143(11))
			{
				case 12:
					Var0 = { -2338.21f, -1271.362f, 147.062f };
					Var0.f_3 = 356.6931f;
					break;
				case 11:
					Var0 = { 1295.802f, -200.3015f, 99.0642f };
					Var0.f_3 = 1.8815f;
					break;
				case 10:
					Var0 = { 2428.864f, 1015.729f, 85.6131f };
					Var0.f_3 = 304.652f;
					break;
				case 15:
					Var0 = { -3157.477f, -2981.991f, 4.6224f };
					Var0.f_3 = 86.239f;
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
					Var0 = { 1702.736f, 2168.096f, 318.9191f };
					Var0.f_3 = 180.6669f;
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					Var0 = { -312.9856f, 808.8508f, 117.9822f };
					Var0.f_3 = 197.2573f;
					break;
			}
			break;
		case 14:
			Var0 = { 1320.745f, -1291.739f, 75.14026f };
			Var0.f_3 = 68.748f;
			break;
		case 15:
			switch (func_143(15))
			{
				case 7:
				case 9:
					Var0 = { -727.395f, 686.1953f, 58.2244f };
					Var0.f_3 = 177.0399f;
					break;
				case 13:
					Var0 = { -6122.201f, -3803.751f, -35.2455f };
					Var0.f_3 = 181.815f;
					break;
				case 10:
					Var0 = { 2183.348f, 1502.819f, 83.6009f };
					Var0.f_3 = 0f;
					break;
				case 1:
					Var0 = { -1891.265f, -289.866f, 176.457f };
					Var0.f_3 = 266.9828f;
					break;
				default:
					Var0 = { -1891.265f, -289.866f, 176.457f };
					Var0.f_3 = 266.9828f;
					break;
			}
			break;
		case 16:
			Var0 = { 2636.429f, -1229.537f, 52.3795f };
			Var0.f_3 = 358.7895f;
			break;
		case 17:
			Var0 = { 2943.588f, 1336.999f, 43.22713f };
			Var0.f_3 = 76.2778f;
			break;
		case 18:
			switch (iParam1)
			{
				case 0:
					Var0 = { -1812.186f, -367.3066f, 161.8834f };
					Var0.f_3 = 167.5016f;
					break;
				case 1:
					Var0 = { -1807.89f, -371.5062f, 161.8662f };
					Var0.f_3 = 167.5016f;
					break;
				case 2:
					Var0 = { -1800.857f, -357.3966f, 162.9631f };
					Var0.f_3 = 167.5016f;
					break;
			}
			break;
		case 19:
			switch (iParam2)
			{
				case 0:
					Var0 = { -256.365f, 753.5781f, 116.0851f };
					Var0.f_3 = 284.0192f;
					break;
				case 1:
					Var0 = { -192.9274f, 625.6254f, 113.5786f };
					Var0.f_3 = 145.05f;
					break;
				default:
					Var0 = { -256.365f, 753.5781f, 116.0851f };
					Var0.f_3 = 284.0192f;
					break;
			}
			break;
		case 20:
			Var0 = { -2725.277f, 709.9713f, 173.0266f };
			Var0.f_3 = 359.6814f;
			break;
		case 21:
			Var0 = { 2706.282f, 2369.827f, 170.2336f };
			Var0.f_3 = 359.6814f;
			break;
		case 22:
			switch (iParam1)
			{
				case 0:
					Var0 = { -5511.039f, -2929.552f, -3.278f };
					Var0.f_3 = -131.907f;
					break;
				case 1:
					Var0 = { -5497.666f, -2957.426f, -1.708f };
					Var0.f_3 = 12.912f;
					break;
				case 2:
					Var0 = { -5493.435f, -2940.703f, -1.471f };
					Var0.f_3 = 124.069f;
					break;
			}
			break;
		case 23:
			switch (func_143(23))
			{
				case 0:
					Var0 = { 1784.089f, -946.648f, 40.7225f };
					Var0.f_3 = 254.7072f;
					break;
				case 2:
					Var0 = { 2445.841f, -463.2956f, 41.1018f };
					Var0.f_3 = 126.5562f;
					break;
			}
			break;
		case 24:
			switch (iParam1)
			{
				case 0:
					Var0 = { -2233.602f, -2850.517f, 62.7628f };
					Var0.f_3 = 208.7791f;
					break;
				case 1:
					Var0 = { -3198.999f, -2538.554f, 66.5911f };
					Var0.f_3 = 292.1099f;
					break;
				case 2:
					Var0 = { -2927.12f, -2860.494f, 85.7312f };
					Var0.f_3 = 123.2795f;
					break;
				case 3:
					Var0 = { -3267.86f, -3416.677f, 39.5041f };
					Var0.f_3 = 332.5893f;
					break;
				case 4:
					Var0 = { -3572.794f, -3565.222f, 33.505f };
					Var0.f_3 = 260.2986f;
					break;
				case 5:
					Var0 = { -4399.393f, -3606.746f, 48.6452f };
					Var0.f_3 = 348.5519f;
					break;
				case 6:
					Var0 = { -4988.676f, -4060.992f, 1.0884f };
					Var0.f_3 = 163.9257f;
					break;
				case 7:
					Var0 = { -5333.317f, -3534.569f, 2.0586f };
					Var0.f_3 = 306.198f;
					break;
				case 8:
					Var0 = { -5374.994f, -4053.294f, -6.2292f };
					Var0.f_3 = 170.3096f;
					break;
				case 9:
					Var0 = { -5413.131f, -2606.156f, 2.5597f };
					Var0.f_3 = 255.0981f;
					break;
				case 10:
					Var0 = { -4956.249f, -3198.202f, 26.3575f };
					Var0.f_3 = 292.8281f;
					break;
				case 11:
					Var0 = { -4594.695f, -3045.041f, 6.5776f };
					Var0.f_3 = 4.7478f;
					break;
			}
			break;
		case 25:
			Var0 = { 2368.588f, -859.9452f, 42.0223f };
			Var0.f_3 = 198.7042f;
			break;
		case 26:
			Var0 = { -345.2797f, 794.6578f, 115.1777f };
			Var0.f_3 = 28.0552f;
			break;
		case 27:
			Var0 = { 2644.443f, -1207.946f, 52.3368f };
			Var0.f_3 = 199.0776f;
			break;
		case 28:
			Var0 = { 3025.557f, 1779.699f, 83.2056f };
			Var0.f_3 = 142.8609f;
			break;
		case 29:
			Var0 = { 2778.292f, -1313.274f, 45.89664f };
			Var0.f_3 = 216.3798f;
			break;
	}
	return Var0;
}

float func_66(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

bool func_67(var uParam0)
{
	return false;
}

bool func_68(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return true;
	}
	if (func_55(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_55(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_55(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_55(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_55(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_55(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_55(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_55(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_69(int iParam0, int iParam1, var uParam2, var uParam3)
{
	if ((get_frame_count() % 10) == 0)
	{
		if (uParam2->f_1)
		{
			if (((func_94(0) == 1 || func_94(0) == 2) || func_94(0) == 8) || func_145(&Global_1935630, 2048))
			{
				func_61(uParam2, 2);
			}
		}
		if (uParam2->f_2)
		{
			if (func_94(0) == 11)
			{
				func_61(uParam2, 4);
			}
		}
		if (uParam2->f_4)
		{
			if (func_94(0) == 6)
			{
				func_61(uParam2, 8);
			}
		}
		if (uParam2->f_5)
		{
			if (Global_1394141->f_1328)
			{
				func_61(uParam2, 16);
			}
		}
	}
	if ((get_frame_count() % 30) == 0)
	{
		if (uParam2->f_6)
		{
			if (!(func_146((*(*Global_1396257)[iParam0])[iParam1]->f_19) == 0 && func_146((*(*Global_1396257)[iParam0])[iParam1]->f_20) == 23))
			{
				iVar0 = func_97();
				iVar1 = (*(*Global_1396257)[iParam0])[iParam1]->f_19;
				iVar2 = (*(*Global_1396257)[iParam0])[iParam1]->f_20;
				if (func_146(iVar2) > func_146(iVar1))
				{
					if (func_146(iVar0) > func_146(iVar2) + 1 || func_146(iVar0) < func_146(iVar1))
					{
						func_61(uParam2, 32);
					}
				}
				else if (func_146(iVar0) > func_146(iVar2) + 1 && func_146(iVar0) < func_146(iVar1))
				{
					func_61(uParam2, 32);
				}
			}
		}
		if (uParam2->f_7)
		{
			bVar3 = false;
			if ((*(*Global_1396257)[iParam0])[iParam1]->f_40 != 4)
			{
				if (&(*(*Global_1396257)[iParam0])[iParam1]->f_5[0] != -1 || &(*(*Global_1396257)[iParam0])[iParam1]->f_5[1] != -1)
				{
					if (((func_147(&((*(*Global_1396257)[iParam0])[iParam1]->f_5[0])) || func_147(&((*(*Global_1396257)[iParam0])[iParam1]->f_5[1]))) || func_148(&((*(*Global_1396257)[iParam0])[iParam1]->f_5[0]))) || func_148(&((*(*Global_1396257)[iParam0])[iParam1]->f_5[1])))
					{
						bVar3 = true;
					}
				}
				if (!bVar3)
				{
					if (!func_149((*(*Global_1396257)[iParam0])[iParam1]->f_40))
					{
						func_61(uParam2, 64);
					}
				}
			}
		}
		if (uParam2->f_8)
		{
			if (get_game_timer() > uParam2->f_17)
			{
				if (func_150(&uParam3, &(uParam2->f_18), uParam2->f_11, uParam2->f_12) || func_151(&uParam3, &(uParam2->f_20), &(uParam2->f_19), uParam2->f_11, uParam2->f_12, 2048))
				{
					if (!func_58(&(uParam2->f_13)))
					{
						func_99(&(uParam2->f_13), 0f);
					}
					else if (func_152(&(uParam2->f_13)) >= uParam2->f_16)
					{
						func_72(&(uParam2->f_13));
						func_61(uParam2, 512);
					}
					uParam2->f_17 = get_game_timer() + 1000;
				}
				else
				{
					if (func_58(&(uParam2->f_13)))
					{
						func_72(&(uParam2->f_13));
					}
					uParam2->f_17 = get_game_timer() + 1000;
				}
			}
		}
		if (uParam2->f_9)
		{
			if (func_153())
			{
				func_61(uParam2, 1024);
			}
		}
		if (uParam2->f_10)
		{
			if (func_154())
			{
				func_61(uParam2, 2048);
			}
		}
		if (func_145(&Global_1935630, 16384) || Global_1430231->f_4)
		{
			func_61(uParam2, 128);
		}
		if (func_96(&((*Global_1396257)[iParam0]->f_626), 2048))
		{
			func_61(uParam2, 256);
		}
	}
	if ((((((((((func_55(*uParam2, 2) || func_55(*uParam2, 4)) || func_55(*uParam2, 8)) || func_55(*uParam2, 16)) || func_55(*uParam2, 32)) || func_55(*uParam2, 64)) || func_55(*uParam2, 128)) || func_55(*uParam2, 256)) || func_55(*uParam2, 512)) || func_55(*uParam2, 1024)) || func_55(*uParam2, 2048))
	{
		return true;
	}
	return false;
}

bool func_70(int iParam0)
{
	if ((func_155(iParam0) || (func_156(iParam0->f_40, 1) && !func_157(Global_35, (*(*Global_1396257)[*iParam0])[iParam0->f_1]->f_47, 0, 1))) || (func_158(iParam0->f_10) && !is_entity_in_volume(Global_35, func_159(iParam0->f_10), true, 0)))
	{
		return true;
	}
	return false;
}

void func_71(var uParam0, bool bParam1)
{
	if (bParam1 || !func_58(uParam0))
	{
		func_160(uParam0);
	}
}

void func_72(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_73(var uParam0)
{
	_text_database_request("SPSOT");
	_text_database_request("SPDEF");
	_text_database_request("SPSOTAU");
	request_model(iVar638, false);
	request_model(iVar678, false);
	request_model(iVar679, false);
	func_161(iVar639, "SP_Sheriff_Block", 1, 0, 0, 0, -1082130432);
	_0xb56d41a694e42e86(uVar641, 2500607, 0, 0, -1, -1, 10);
	_0x18262cafebb5fbe1(uVar641, 0, 0, 0, -1, -1, 0);
	_request_scenario_type(-332343734, 15, 0, 0);
	_request_scenario_type(-22664287, 15, 0, 0);
	_request_scenario_type(830847823, 15, 0, 0);
	_request_scenario_type(2087366558, 15, 0, 0);
	_0xed9582b3da8f02b4(3);
	return true;
}

bool func_74(var uParam0)
{
	if (!_text_database_has_loaded("SPSOT"))
	{
		return false;
	}
	if (!_text_database_has_loaded("SPDEF"))
	{
		return false;
	}
	if (!_text_database_has_loaded("SPSOTAU"))
	{
		return false;
	}
	if (!has_model_loaded(iVar638))
	{
		return false;
	}
	if (!has_model_loaded(iVar678))
	{
		return false;
	}
	if (!has_model_loaded(iVar679))
	{
		return false;
	}
	if (!_has_scenario_type_loaded(-332343734, false))
	{
		return false;
	}
	if (!_has_scenario_type_loaded(-22664287, false))
	{
		return false;
	}
	if (!_has_scenario_type_loaded(830847823, false))
	{
		return false;
	}
	if (!_has_scenario_type_loaded(2087366558, false))
	{
		return false;
	}
	if (_0x5c16855277819bbf() != 3)
	{
		return false;
	}
	return true;
}

bool func_75(var uParam0)
{
	vVar0 = { func_65(Local_14, Local_14.f_1, 0) };
	if (!func_55(Local_14.f_193, 2097152))
	{
		if (func_162(&(Local_14.f_3), 348, vVar0, 0, 1320127128))
		{
			func_163(Local_14.f_3, 22);
			set_entity_heading(Local_14.f_3, vVar0.f_3);
			set_ped_combat_attributes(Local_14.f_3, 5, true);
			set_ped_flee_attributes(Local_14.f_3, 512, true);
			_0xe1b3be07d3aadded(Local_14.f_3, 4, 1);
			func_61(&(Local_14.f_193), 2097152);
			Local_14.f_599 = 1;
			Local_14.f_600 = 1;
			func_63(&Local_14, 0);
			func_164(&Local_14, 0, 0, "SPD_UC_GRT", "", -163964935, 0, 0, 0);
			func_164(&Local_14, 0, 1, "SPD_UC_ANT", "", 648122183, 0, 0, 0);
			func_166(&Local_14, 0, func_165(3, 0, 0), 0);
			func_167(&Local_14, 0, 0);
			if (Local_14.f_1 == 0)
			{
				func_164(&Local_14, 1, 0, "SPSOT_YES", "", -163964935, 0, 0, 0);
				func_164(&Local_14, 1, 1, "SPSOT_NO", "", 648122183, 0, 0, 0);
			}
			else if (Local_14.f_1 == 1)
			{
				func_164(&Local_14, 1, 0, "SPSOT_NOT_JOKE", "", -163964935, 0, 0, 0);
				func_164(&Local_14, 1, 1, "SPSOT_ARE_JOKE", "", 648122183, 0, 0, 0);
			}
			func_167(&Local_14, 1, 0);
			func_61(&(Local_14.f_193), 32);
			func_61(&(Local_14.f_193), 33554432);
		}
	}
	else if (!func_55(Local_14.f_193, 4194304))
	{
		if (Local_14.f_1 == 1)
		{
			vVar0 = { -5497.847f, -2957.04f, -1.59251f };
		}
		clear_ped_tasks_immediately(Local_14.f_3, true, true);
		open_sequence_task(&iVar4);
		task_follow_nav_mesh_to_coord(0, vVar0, 1f, 120000, 0.25f, 0, 40000f);
		task_achieve_heading(0, vVar0.f_3, 0);
		func_168(Local_14.f_3, &iVar4, 0, 0, 1, 1);
		func_61(&(Local_14.f_193), 4194304);
	}
	else if (!func_55(Local_14.f_193, 8388608))
	{
		if (Local_14.f_1 == 1)
		{
			vVar0 = { -5497.847f, -2957.04f, -1.59251f };
		}
		if (func_66(Local_14.f_3, vVar0, 1) <= 13f && is_position_occupied(vVar0, 0.5f, false, true, true, false, false, Local_14.f_3, true))
		{
			if (!func_58(&uLocal_695))
			{
				func_160(&uLocal_695);
			}
		}
		else if (func_58(&uLocal_695))
		{
			func_72(&uLocal_695);
		}
		if (func_90(Local_14.f_3, 0, &(Local_14.f_11), &(Local_14.f_39), 0, 0) || func_169(&uLocal_695) >= 6f)
		{
			func_101(22);
			func_7(&Local_14, 4);
			return false;
		}
		if (!func_170(Local_14.f_3, 242628503))
		{
			set_current_ped_weapon(Local_14.f_3, 1845102363, false, 0, false, false);
			task_swap_weapon(Local_14.f_3, 1, 0, 0, 0);
			func_61(&(Local_14.f_193), 8388608);
		}
	}
	else if (!func_55(Local_14.f_193, 16777216))
	{
		if (func_90(Local_14.f_3, 0, &(Local_14.f_11), &(Local_14.f_39), 0, 0))
		{
			func_101(22);
			func_7(&Local_14, 4);
			return false;
		}
		if (!func_170(Local_14.f_3, 716706914))
		{
			func_61(&(Local_14.f_193), 16777216);
		}
	}
	if (func_55(Local_14.f_193, 16777216))
	{
		add_entity_to_audio_mix_group(Local_14.f_3, "special_ped_group", 0f);
		stop_ped_speaking(Local_14.f_3, true);
		_0x86f0b6730c32ac14(Local_14.f_3, 1);
		_0xef371232bc6053e1(Local_14.f_3);
		set_ped_config_flag(Local_14.f_3, 153, true);
		func_171();
		func_118(&(Local_14.f_205.f_217), func_172(5), func_173(59), &(Local_14.f_205.f_245));
		func_174(&(Local_14.f_205), 1, 1);
		_0x3946fc742ac305cd(player_id(), Local_14.f_3, "SPECIAL_PED_LIGHTWEIGHT_1_1", 0f, 0f, 0f, 0, "SheriffBubble");
		return true;
	}
	return false;
}

bool func_76(int iParam0)
{
	if (func_55(Local_14.f_193, 32))
	{
		return true;
	}
	return false;
}

bool func_77(int iParam0)
{
	if (func_54(iParam0) <= 15f)
	{
		return true;
	}
	return false;
}

int func_78(int iParam0, int iParam1)
{
	iVar0 = -1;
	if (iParam1 < 0 || iParam1 >= 2)
	{
		return iVar0;
	}
	iVar1 = 0;
	if (!is_string_null_or_empty(iParam0->f_162))
	{
		iVar1 = iParam0->f_162;
	}
	iVar0 = func_175(&(iParam0->f_3), iParam0->f_41[iParam1], 15f, &(iParam0->f_41[iParam1]->f_21), 0f, 2, iParam0->f_41[iParam1]->f_57, iVar1, iParam0->f_41[iParam1]->f_56, 0, 0, 2, -1082130432);
	if (func_176(iParam0))
	{
		func_86(iParam0->f_41[iParam1], 1);
		if (iVar0 > -1)
		{
			iParam0->f_41[iParam1]->f_58 = iVar0;
		}
		return iParam0->f_41[iParam1]->f_58;
	}
	else
	{
		func_86(iParam0->f_41[iParam1], 0);
	}
	return iVar0;
}

bool func_79(int iParam0)
{
	if (!func_55(Local_14.f_193, 524288))
	{
		if (func_177(iParam0, 0, &iVar0))
		{
			func_61(&(Local_14.f_193), 524288);
			func_61(&(Local_14.f_193), 1048576);
			if (Local_14.f_1 == 2)
			{
				func_61(&(Local_14.f_193), 2048);
			}
			func_178(iVar0);
		}
	}
	else if (Local_14.f_1 != 2)
	{
		if (func_177(iParam0, 1, &iVar0))
		{
			if (iVar0 == 0)
			{
				func_61(&(Local_14.f_193), 64);
			}
			else if (iVar0 == 1)
			{
				func_61(&(Local_14.f_193), 128);
			}
			iLocal_676 = 1;
		}
	}
	return true;
}

void func_80(var uParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		sVar1 = func_179(uParam0->f_21[iVar0]->f_5);
		if (!is_string_null_or_empty(sVar1))
		{
			if (bParam1 && !func_180(uParam0->f_21[iVar0], 1, 0))
			{
				func_181(uParam0->f_21[iVar0], bParam1, 0);
			}
			else if (!bParam1 && func_180(uParam0->f_21[iVar0], 1, 0))
			{
				func_181(uParam0->f_21[iVar0], bParam1, 0);
			}
		}
		iVar0++;
	}
}

void func_81(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_72(&(iParam0->f_18));
}

void func_82(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 >= 2)
	{
		return;
	}
	iParam0->f_41[iParam1]->f_58 = iParam2;
}

bool func_83(int iParam0, int iParam1)
{
	return func_55(iParam0->f_197, iParam1);
}

void func_84(var uParam0)
{
	if (!is_entity_dead(*uParam0))
	{
		_0xe98d55c5983f2509(*uParam0);
		set_ped_config_flag(*uParam0, 297, false);
	}
}

void func_85(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_182((*uParam0)[iVar0]->f_6))
			{
				if (!bParam4 && is_bit_set(uParam0[iVar0], 11))
				{
				}
				else
				{
					func_183(&((*uParam0)[iVar0]->f_6), 1, 1);
					if (bParam2)
					{
						(*uParam0)[iVar0]->f_7 = 0;
						(*uParam0)[iVar0] = 0;
						(*uParam0)[iVar0]->f_5 = "";
						(*uParam0)[iVar0]->f_14 = 0;
						(*uParam0)[iVar0]->f_13 = "";
						(*uParam0)[iVar0]->f_15 = 0;
						(*uParam0)[iVar0]->f_11 = "";
						(*uParam0)[iVar0]->f_12 = "";
					}
				}
				iVar0++;
			}
		}
	}
}

void func_86(var uParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		sVar1 = func_179(uParam0->f_21[iVar0]->f_5);
		if (!is_string_null_or_empty(sVar1))
		{
			if (bParam1 && !func_180(uParam0->f_21[iVar0], 1, 0))
			{
				func_181(uParam0->f_21[iVar0], bParam1, 0);
			}
			else if (!bParam1 && func_180(uParam0->f_21[iVar0], 1, 0))
			{
				func_181(uParam0->f_21[iVar0], bParam1, 0);
			}
		}
		iVar0++;
	}
}

int func_87(int iParam0, int iParam1)
{
	iVar0 = -1;
	if (iParam1 < 0 || iParam1 >= 2)
	{
		return iVar0;
	}
	if (!does_entity_exist(Global_35) || Global_1935630->f_12)
	{
		return iVar0;
	}
	iVar1 = 0;
	if (!is_string_null_or_empty(iParam0->f_162))
	{
		iVar1 = iParam0->f_162;
	}
	if ((_does_volume_exist(iParam0->f_161) && is_entity_in_volume(Global_35, iParam0->f_161, true, 0)) || func_77(iParam0))
	{
		func_80(iParam0->f_41[iParam1], 1);
		iVar0 = func_175(&(iParam0->f_3), iParam0->f_41[iParam1], 15f, &(iParam0->f_41[iParam1]->f_21), 0f, 3, iParam0->f_41[iParam1]->f_57, iVar1, 1, 0, 0, 2, -1082130432);
		if (iVar0 > -1)
		{
			iParam0->f_41[iParam1]->f_58 = iVar0;
		}
		return iParam0->f_41[iParam1]->f_58;
	}
	else
	{
		func_80(iParam0->f_41[iParam1], 0);
	}
	return iVar0;
}

bool func_88(var uParam0)
{
	return true;
}

int func_89(var uParam0, var uParam1, var uParam2, var uParam3, float fParam4)
{
	if (!does_entity_exist(*uParam2))
	{
		return 0;
	}
	if (is_ped_dead_or_dying(*uParam2, true))
	{
		*uParam1 = 1;
		return 1;
	}
	if (Global_1935630->f_39 > 0 || _0x285d36c5c72b0569(Global_35) <= 1f)
	{
		if (func_90(*uParam2, 0, uParam0, uParam1, 0, 0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (*uParam3 < 0 || *uParam3 > 4)
	{
		*uParam3 = 0;
	}
	switch (*uParam3)
	{
		case 0:
			*uParam3++;
			if ((has_entity_been_damaged_by_any_ped(*uParam2) || has_entity_been_damaged_by_any_object(*uParam2)) || has_entity_been_damaged_by_any_vehicle(*uParam2))
			{
				*uParam1 = 2;
				return 1;
			}
			break;
		case 1:
			*uParam3++;
			if (_0x9c81338b2e62ce0a(player_id(), *uParam2, 1000))
			{
				*uParam1 = 4;
				return 1;
			}
			break;
		case 2:
			*uParam3++;
			if (is_shocking_event_in_sphere(217247011, get_entity_coords(*uParam2, false, true), fParam4))
			{
				*uParam1 = 16;
				return 1;
			}
			break;
		case 3:
			*uParam3++;
			if (is_shocking_event_in_sphere(956330317, get_entity_coords(*uParam2, false, true), fParam4))
			{
				*uParam1 = 16;
				return 1;
			}
			break;
		case 4:
			*uParam3 = 0;
			if (is_shocking_event_in_sphere(-966930978, get_entity_coords(*uParam2, false, true), fParam4))
			{
				*uParam1 = 16;
				return 1;
			}
			break;
	}
	return 0;
}

bool func_90(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	iVar0 = get_frame_count();
	if (iVar0 > uParam2->f_5)
	{
		func_184(uParam2, 1, iVar0);
	}
	if (!Global_1935630->f_12 && !is_entity_dead(iParam0))
	{
		if (fParam5 > 0f)
		{
			uParam2->f_12 = fParam5;
		}
		else
		{
			uParam2->f_12 = vdist(Global_36, get_entity_coords(iParam0, true, false));
		}
		if (!uParam2->f_1 & 128 != 0)
		{
			if (func_185(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_186(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_187(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_186(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (func_188(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_186(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_189(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_186(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_26 && func_190(player_id(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_186(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_191(uParam2, 1065353216))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_192(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_186(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_193(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_186(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_194(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_186(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (func_194(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_186(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_195(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_186(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || uParam2->f_12 < 20f)
			{
				if (func_196(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_186(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_197(uParam2, 4000))
				{
					if ((func_198(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_199(uParam2, iParam0)) && func_200(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_186(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_198(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_199(uParam2, iParam0)) && func_200(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_186(iParam0, uParam2, *uParam3);
					return true;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_201(iParam0, Global_1935630->f_41))
							{
								func_202();
								*uParam3 = 2;
								func_186(iParam0, uParam2, *uParam3);
								return true;
							}
						}
					}
				}
			}
			else if (Global_1935630->f_40 == 0)
			{
				if (Global_1935630->f_41 != 0)
				{
					if (*uParam2 & 131072 == 0)
					{
						if (func_201(iParam0, Global_1935630->f_41))
						{
							func_202();
							*uParam3 = 2;
							func_186(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_203(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_204() - uParam2->f_9) < 2000))
				{
					if (is_ped_ragdoll(iParam0))
					{
						func_202();
						*uParam3 = 2;
						func_186(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_205())
					{
						if (func_201(iParam0, Global_1935630->f_42))
						{
							func_202();
							*uParam3 = 2;
							func_186(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_206(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_186(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_207(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_186(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_208(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_186(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_209(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_186(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_210(uParam2, 4000))
				{
					if (func_211(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_186(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_212(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_186(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (does_entity_exist(iParam0))
		{
			if (func_213(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_186(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

bool func_91(var uParam0)
{
	func_101(22);
	func_125(0);
	return true;
}

void func_92()
{
	if (is_entity_dead(Local_14.f_3) && is_entity_dead(Global_35))
	{
		return;
	}
	if (!func_58(&uLocal_665))
	{
		func_99(&uLocal_665, 0f);
	}
	else if (func_152(&uLocal_665) >= 1000)
	{
		fLocal_668 = get_distance_between_coords(get_entity_coords(Local_14.f_3, true, false), func_214(get_player_index()), true);
		func_72(&uLocal_665);
	}
}

bool func_93()
{
	if (func_215() == -1)
	{
		if (_get_global_block_can_be_accessed(5))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if ((*Global_1392915)[iVar0]->f_1 != -1)
				{
					if (func_216((*Global_1392915)[iVar0]->f_4))
					{
						return true;
					}
				}
				iVar0++;
			}
		}
		return false;
	}
	return false;
}

int func_94(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

bool func_95()
{
	return Global_1310750->f_16077 != 0;
}

bool func_96(var uParam0, int iParam1)
{
	return func_156(*uParam0, iParam1);
}

int func_97()
{
	return &Global_1899515;
}

bool func_98(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	if (vdist2(get_entity_coords(iParam0, bParam3, false), get_entity_coords(iParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return true;
	}
	return false;
}

void func_99(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_137() - fParam1);
	func_217(uParam0, 1);
	func_218(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_100(int iParam0)
{
	return iParam0 != -15;
}

void func_101(int iParam0)
{
	Global_40.f_11623[iParam0]->f_5++;
	Global_40.f_11623[iParam0]->f_2 = func_97();
}

bool func_102(int iParam0)
{
	return false;
}

bool func_103(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_104(var uParam0, int iParam1)
{
	if (is_scripted_speech_playing(*uParam0))
	{
		force_sonar_blips_this_frame();
		allow_sonar_blips(true);
		_trigger_sonar_blip_2(iParam1, *uParam0);
		return true;
	}
	return false;
}

void func_105(int iParam0)
{
}

void func_106(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_107(int iParam0)
{
	return false;
}

void func_108(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5)
{
	if (is_entity_dead(*uParam2))
	{
		return;
	}
	if (Global_1935630->f_12)
	{
		return;
	}
	if (!_does_volume_exist(iParam1))
	{
		return;
	}
	uVar2[0] = Global_35;
	uVar2[1] = *uParam2;
	if (!func_58(uParam4))
	{
		func_99(uParam4, 0f);
	}
	else if (func_152(uParam4) > 1000)
	{
		if (!is_entity_in_volume(Global_35, iParam1, true, 0))
		{
			if (func_219(uParam0, &uVar0, &uVar2, 5, iParam1, 0, 0, -1) > 0)
			{
				uParam3->f_3 = &uVar0[0];
				func_99(uParam4, 0f);
			}
			else
			{
				return;
			}
		}
		else
		{
			uParam3->f_3 = Global_35;
			func_99(uParam4, 0f);
		}
	}
	*uParam3 = { 0f, 0f, 0f };
	uParam3->f_4 = 21030;
	uParam3->f_8 = 4;
	uParam3->f_17 = 2;
	uParam3->f_18 = 1;
	uParam3->f_19 = 3;
	uParam3->f_20 = 1;
	uParam3->f_21 = 3;
	uParam3->f_22 = 1;
	uParam3->f_13 = 3;
	uParam3->f_7 = iParam5;
	_0x66f9eb44342bb4c5(*uParam2, uParam3);
}

bool func_109(int iParam0)
{
	func_220(Local_14.f_3, &(Local_14.f_193), 1024, 22, 0);
	func_221();
	func_222();
	bVar0 = func_190(player_id(), 0, 0, 1);
	if (((func_16(&(Local_14.f_205), 2) || func_56(&Local_14) == 4) || func_55(Local_14.f_193, 512)) || bVar0)
	{
		func_61(&(Local_14.f_193), 512);
		return true;
	}
	if (func_55(Local_14.f_193, 8192))
	{
		return true;
	}
	if (iVar644 < 2 && iVar650 != func_223(&Local_14))
	{
		if (func_104(&(Local_14.f_3), 249295937))
		{
			iLocal_653 = func_223(&Local_14);
			uLocal_647 = iVar644 + 1;
		}
	}
	if (!does_entity_exist(Local_14.f_3) || is_entity_dead(Local_14.f_3))
	{
		return true;
	}
	if (!func_58(&uLocal_659))
	{
		func_160(&uLocal_659);
	}
	if (Local_14.f_622 && func_224(&(Local_14.f_601)))
	{
		return true;
	}
	return false;
}

void func_110(var uParam0)
{
	switch (uParam0->f_385)
	{
		case 1:
			if (func_225(uParam0, &(uParam0->f_217), uParam0->f_385))
			{
				if (func_16(uParam0, 2))
				{
					Stack.Push(&(uParam0->f_329));
					Stack.Push(uParam0->f_217.f_6);
					Stack.Push(uParam0->f_217.f_6.f_1);
					Stack.Push(&(uParam0->f_245));
					Call_Loc(uParam0->f_393);
					Stack.Push(&(uParam0->f_217));
					Stack.Push(uParam0->f_217.f_2);
					Stack.Push(uParam0->f_217.f_2.f_1);
					Stack.Push(&(uParam0->f_245));
					Call_Loc(uParam0->f_393);
					func_174(uParam0, 4, 1);
				}
				else if (uParam0->f_389 && func_16(uParam0, 1))
				{
					Stack.Push(&(uParam0->f_273));
					Stack.Push(uParam0->f_217.f_4);
					Stack.Push(uParam0->f_217.f_4.f_1);
					Stack.Push(&(uParam0->f_245));
					Call_Loc(uParam0->f_393);
					Stack.Push(&(uParam0->f_217));
					Stack.Push(uParam0->f_217.f_2);
					Stack.Push(uParam0->f_217.f_2.f_1);
					Stack.Push(&(uParam0->f_245));
					Call_Loc(uParam0->f_393);
					func_174(uParam0, 2, 1);
				}
				else if (func_16(uParam0, 8))
				{
					Stack.Push(&(uParam0->f_357));
					Stack.Push(uParam0->f_217.f_10);
					Stack.Push(uParam0->f_217.f_10.f_1);
					Stack.Push(&(uParam0->f_245));
					Call_Loc(uParam0->f_393);
					Stack.Push(&(uParam0->f_217));
					Stack.Push(uParam0->f_217.f_2);
					Stack.Push(uParam0->f_217.f_2.f_1);
					Stack.Push(&(uParam0->f_245));
					Call_Loc(uParam0->f_393);
					func_174(uParam0, 5, 0);
				}
				else if (func_16(uParam0, 4))
				{
					Stack.Push(&(uParam0->f_301));
					Stack.Push(uParam0->f_217.f_8);
					Stack.Push(uParam0->f_217.f_8.f_1);
					Stack.Push(&(uParam0->f_245));
					Call_Loc(uParam0->f_393);
					Stack.Push(&(uParam0->f_217));
					Stack.Push(uParam0->f_217.f_2);
					Stack.Push(uParam0->f_217.f_2.f_1);
					Stack.Push(&(uParam0->f_245));
					Call_Loc(uParam0->f_393);
					func_174(uParam0, 3, 1);
				}
				else if (func_16(uParam0, 1))
				{
					Stack.Push(&(uParam0->f_273));
					Stack.Push(uParam0->f_217.f_4);
					Stack.Push(uParam0->f_217.f_4.f_1);
					Stack.Push(&(uParam0->f_245));
					Call_Loc(uParam0->f_393);
					Stack.Push(&(uParam0->f_217));
					Stack.Push(uParam0->f_217.f_2);
					Stack.Push(uParam0->f_217.f_2.f_1);
					Stack.Push(&(uParam0->f_245));
					Call_Loc(uParam0->f_393);
					func_174(uParam0, 2, 1);
				}
				else
				{
					Stack.Push(&(uParam0->f_217));
					Stack.Push(uParam0->f_217.f_2);
					Stack.Push(uParam0->f_217.f_2.f_1);
					Stack.Push(&(uParam0->f_245));
					Call_Loc(uParam0->f_393);
					func_174(uParam0, 1, 1);
				}
			}
			break;
		case 2:
			if (func_225(uParam0, &(uParam0->f_273), uParam0->f_385))
			{
				if (!uParam0->f_389)
				{
					if (func_16(uParam0, 2))
					{
						Stack.Push(&(uParam0->f_329));
						Stack.Push(uParam0->f_273.f_6);
						Stack.Push(uParam0->f_273.f_6.f_1);
						Stack.Push(&(uParam0->f_245));
						Call_Loc(uParam0->f_393);
						if (func_226(uParam0->f_273.f_2))
						{
							Stack.Push(&(uParam0->f_217));
							Stack.Push(uParam0->f_273.f_2);
							Stack.Push(uParam0->f_273.f_2.f_1);
							Stack.Push(&(uParam0->f_245));
							Call_Loc(uParam0->f_393);
						}
						func_174(uParam0, 4, 1);
					}
					else if (func_16(uParam0, 8))
					{
						Stack.Push(&(uParam0->f_357));
						Stack.Push(uParam0->f_273.f_10);
						Stack.Push(uParam0->f_273.f_10.f_1);
						Stack.Push(&(uParam0->f_245));
						Call_Loc(uParam0->f_393);
						if (func_226(uParam0->f_273.f_2))
						{
							Stack.Push(&(uParam0->f_217));
							Stack.Push(uParam0->f_273.f_2);
							Stack.Push(uParam0->f_273.f_2.f_1);
							Stack.Push(&(uParam0->f_245));
							Call_Loc(uParam0->f_393);
						}
						func_174(uParam0, 5, 0);
					}
					else if (func_16(uParam0, 4))
					{
						Stack.Push(&(uParam0->f_301));
						Stack.Push(uParam0->f_273.f_8);
						Stack.Push(uParam0->f_273.f_8.f_1);
						Stack.Push(&(uParam0->f_245));
						Call_Loc(uParam0->f_393);
						if (func_226(uParam0->f_273.f_2))
						{
							Stack.Push(&(uParam0->f_217));
							Stack.Push(uParam0->f_273.f_2);
							Stack.Push(uParam0->f_273.f_2.f_1);
							Stack.Push(&(uParam0->f_245));
							Call_Loc(uParam0->f_393);
						}
						func_174(uParam0, 3, 1);
					}
					else
					{
						if (func_226(uParam0->f_273.f_2))
						{
							Stack.Push(&(uParam0->f_217));
							Stack.Push(uParam0->f_273.f_2);
							Stack.Push(uParam0->f_273.f_2.f_1);
							Stack.Push(&(uParam0->f_245));
							Call_Loc(uParam0->f_393);
						}
						func_174(uParam0, 1, 1);
					}
				}
				else if (uParam0->f_390)
				{
					if (uParam0->f_391)
					{
						func_174(uParam0, 6, 1);
					}
					else
					{
						func_174(uParam0, 0, 1);
					}
				}
				else
				{
					if (func_226(uParam0->f_273.f_2))
					{
						Stack.Push(&(uParam0->f_217));
						Stack.Push(uParam0->f_273.f_2);
						Stack.Push(uParam0->f_273.f_2.f_1);
						Stack.Push(&(uParam0->f_245));
						Call_Loc(uParam0->f_393);
					}
					func_174(uParam0, 1, 1);
				}
			}
			break;
		case 3:
			if (func_225(uParam0, &(uParam0->f_301), uParam0->f_385))
			{
				if (func_16(uParam0, 2))
				{
					Stack.Push(&(uParam0->f_329));
					Stack.Push(uParam0->f_301.f_6);
					Stack.Push(uParam0->f_301.f_6.f_1);
					Stack.Push(&(uParam0->f_245));
					Call_Loc(uParam0->f_393);
					if (func_226(uParam0->f_301.f_2))
					{
						Stack.Push(&(uParam0->f_217));
						Stack.Push(uParam0->f_301.f_2);
						Stack.Push(uParam0->f_301.f_2.f_1);
						Stack.Push(&(uParam0->f_245));
						Call_Loc(uParam0->f_393);
					}
					func_174(uParam0, 4, 1);
				}
				else if (uParam0->f_389 && func_16(uParam0, 1))
				{
					Stack.Push(&(uParam0->f_273));
					Stack.Push(uParam0->f_301.f_4);
					Stack.Push(uParam0->f_301.f_4.f_1);
					Stack.Push(&(uParam0->f_245));
					Call_Loc(uParam0->f_393);
					if (func_226(uParam0->f_301.f_2))
					{
						Stack.Push(&(uParam0->f_217));
						Stack.Push(uParam0->f_301.f_2);
						Stack.Push(uParam0->f_301.f_2.f_1);
						Stack.Push(&(uParam0->f_245));
						Call_Loc(uParam0->f_393);
					}
					func_174(uParam0, 2, 1);
				}
				else if (func_16(uParam0, 8))
				{
					Stack.Push(&(uParam0->f_357));
					Stack.Push(uParam0->f_301.f_10);
					Stack.Push(uParam0->f_301.f_10.f_1);
					Stack.Push(&(uParam0->f_245));
					Call_Loc(uParam0->f_393);
					if (func_226(uParam0->f_301.f_2))
					{
						Stack.Push(&(uParam0->f_217));
						Stack.Push(uParam0->f_301.f_2);
						Stack.Push(uParam0->f_301.f_2.f_1);
						Stack.Push(&(uParam0->f_245));
						Call_Loc(uParam0->f_393);
					}
					func_174(uParam0, 5, 0);
				}
				else if (func_16(uParam0, 1))
				{
					Stack.Push(&(uParam0->f_273));
					Stack.Push(uParam0->f_301.f_4);
					Stack.Push(uParam0->f_301.f_4.f_1);
					Stack.Push(&(uParam0->f_245));
					Call_Loc(uParam0->f_393);
					if (func_226(uParam0->f_301.f_2))
					{
						Stack.Push(&(uParam0->f_217));
						Stack.Push(uParam0->f_301.f_2);
						Stack.Push(uParam0->f_301.f_2.f_1);
						Stack.Push(&(uParam0->f_245));
						Call_Loc(uParam0->f_393);
					}
					func_174(uParam0, 2, 1);
				}
				else
				{
					if (func_226(uParam0->f_301.f_2))
					{
						Stack.Push(&(uParam0->f_217));
						Stack.Push(uParam0->f_301.f_2);
						Stack.Push(uParam0->f_301.f_2.f_1);
						Stack.Push(&(uParam0->f_245));
						Call_Loc(uParam0->f_393);
					}
					func_174(uParam0, 1, 1);
				}
			}
			break;
		case 4:
			if (func_225(uParam0, &(uParam0->f_329), uParam0->f_385))
			{
				if (uParam0->f_391)
				{
					func_174(uParam0, 6, 1);
				}
				else
				{
					func_174(uParam0, 0, 1);
				}
			}
			break;
		case 5:
			if (!uParam0->f_392)
			{
				if (func_225(uParam0, &(uParam0->f_357), uParam0->f_385))
				{
					uParam0->f_392 = 1;
					if (func_16(uParam0, 2))
					{
						Stack.Push(&(uParam0->f_329));
						Stack.Push(uParam0->f_357.f_6);
						Stack.Push(uParam0->f_357.f_6.f_1);
						Stack.Push(&(uParam0->f_245));
						Call_Loc(uParam0->f_393);
						uParam0->f_392 = 0;
						func_174(uParam0, 4, 0);
					}
					else if (uParam0->f_389 && func_16(uParam0, 1))
					{
						Stack.Push(&(uParam0->f_273));
						Stack.Push(uParam0->f_357.f_4);
						Stack.Push(uParam0->f_357.f_4.f_1);
						Stack.Push(&(uParam0->f_245));
						Call_Loc(uParam0->f_393);
						uParam0->f_392 = 0;
						func_174(uParam0, 2, 0);
					}
					else if (func_16(uParam0, 8))
					{
					}
					else
					{
						uParam0->f_392 = 0;
						func_174(uParam0, 1, 0);
					}
				}
			}
			else if (func_16(uParam0, 2))
			{
				Stack.Push(&(uParam0->f_329));
				Stack.Push(uParam0->f_357.f_6);
				Stack.Push(uParam0->f_357.f_6.f_1);
				Stack.Push(&(uParam0->f_245));
				Call_Loc(uParam0->f_393);
				uParam0->f_392 = 0;
				func_174(uParam0, 4, 0);
			}
			else if (uParam0->f_389 && func_16(uParam0, 1))
			{
				Stack.Push(&(uParam0->f_273));
				Stack.Push(uParam0->f_357.f_4);
				Stack.Push(uParam0->f_357.f_4.f_1);
				Stack.Push(&(uParam0->f_245));
				Call_Loc(uParam0->f_393);
				uParam0->f_392 = 0;
				func_174(uParam0, 2, 0);
			}
			else if (func_16(uParam0, 8))
			{
			}
			else
			{
				uParam0->f_392 = 0;
				func_174(uParam0, 1, 0);
			}
			break;
		case 6:
			func_227(uParam0);
			func_174(uParam0, 0, 1);
			break;
		case 0:
			break;
	}
}

int func_111(var uParam0)
{
	return 1;
}

int func_112(var uParam0)
{
	return 1;
}

int func_113(var uParam0)
{
	return 1;
}

var func_114(int iParam0)
{
	return &(Global_40.f_11623[iParam0]);
}

void func_115()
{
	if (Local_14.f_1 == 0)
	{
		vVar0 = { -5511.039f, -2929.552f, -3.278f };
		vVar3 = { 0f, 0f, -131.907f };
	}
	else if (Local_14.f_1 == 1)
	{
		vVar0 = { -5497.666f, -2957.426f, -1.708f };
		vVar3 = { 0f, 0f, 12.912f };
	}
	else
	{
		vVar0 = { -5493.435f, -2940.703f, -1.471f };
		vVar3 = { 0f, 0f, 124.069f };
	}
	func_228(Local_14.f_205[0], "script@specialped@pdsot_tumbleweed_sheriff@ig@ig_1@ig_1", vVar0, vVar3, "pl_IG1_Enjoy_Your_Day", 0, 0, 0, 0, 0);
	func_228(Local_14.f_205[1], "script@specialped@pdsot_tumbleweed_sheriff@ig@ig_2@ig2", vVar0, vVar3, "Pl_IG1_Loop01", 0, 0, 0, 0, 0);
	func_228(Local_14.f_205[2], "script@specialped@pdsot_tumbleweed_sheriff@ig@ig_3@ig_3", vVar0, vVar3, "pl_IG3_Remember_People", 0, 0, 0, 0, 0);
	func_228(Local_14.f_205[3], "script@specialped@pdsot_tumbleweed_sheriff@ig@ig_4@ig_4", vVar0, vVar3, "pl_IG4_Get_The", 0, 0, 0, 0, 0);
	func_228(Local_14.f_205[4], "script@specialped@pdsot_tumbleweed_sheriff@ig@ig_5@ig5", vVar0, vVar3, "Pl_IG6_Loop01", 0, 0, 0, 0, 0);
	func_228(Local_14.f_205[5], "script@specialped@pdsot_tumbleweed_sheriff@ig@ig_6@ig6", vVar0, vVar3, "pl_IG6_Aim_2_Stand", 0, 0, 0, 0, 0);
}

int func_116(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1472102294;
		case 0:
			return 1005861726;
		case 2:
			return -26239347;
		case 3:
			return 813446076;
		case 4:
			return -862094048;
		case 6:
			return -161610929;
		case 7:
			return 419383665;
		case 5:
			return 1809158435;
		case 8:
			return 698747486;
		case 9:
			return 399829678;
		case 10:
			return -1767525506;
		case 11:
			return 1533318556;
		case 12:
			return 846763582;
		case 13:
			return 974338564;
		case 14:
			return 860809165;
		case 15:
			return -1682386507;
		case 16:
			return 420952075;
		case 17:
			return 1340251064;
		case 18:
			return -1417023286;
		case 19:
			return 237608522;
		case 20:
			return 1487910336;
		case 21:
			return 129290505;
		case 22:
			return 1231488843;
		case 23:
			return -499580940;
		case 24:
			return 1953535365;
		case 25:
			return -315419568;
		case 26:
			return -1708806962;
		case 27:
			return 1405526353;
		case 28:
			return -1903564707;
		case 29:
			return -1132839335;
		default:
			break;
	}
	return 0;
}

int func_117(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar3 = iParam0;
	iVar4 = iParam1;
	if (Global_1572887->f_12 == -1)
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 100;
				iParam3 = get_hash_key(&((*Global_1835011)[iParam0]->f_8));
				break;
			case 2:
				iVar1 = 101;
				iVar2 = 170;
				break;
			case 3:
				iVar1 = 171;
				iVar2 = 190;
				break;
			case 4:
				iVar1 = 191;
				iVar2 = 230;
				break;
			case 5:
				iVar1 = 231;
				iVar2 = 260;
				break;
			case 6:
				iVar1 = 261;
				iVar2 = 290;
				break;
			case 7:
				iVar1 = 291;
				iVar2 = 370;
				break;
			case 8:
				iVar1 = 371;
				iVar2 = 570;
				iParam3 = get_hash_key(&((*Global_1347702)[iParam0]->f_3));
				break;
			case 9:
				iVar1 = 571;
				iVar2 = 650;
				break;
			case 11:
				iVar1 = 651;
				iVar2 = 750;
				break;
			case 10:
				return -1;
			case 12:
				return -1;
			default:
				return -1;
		}
	}
	else
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 200;
				break;
			case 2:
				iVar1 = 201;
				iVar2 = 15700;
				break;
			case 4:
				iVar1 = 15701;
				iVar2 = 16200;
				break;
			case 12:
				iVar1 = 16201;
				iVar2 = 19200;
				break;
			case 10:
				iVar1 = 19201;
				iVar2 = 20000;
				break;
			case 8:
				return -1;
			case 7:
				return -1;
			case 6:
				return -1;
			default:
				return -1;
		}
	}
	if (iVar2 >= func_229())
	{
		iVar2 = func_229();
	}
	iVar5 = func_230(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_231(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_231(iVar6) == 0)
			{
				return func_232(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
		iVar1 = 751;
		iVar2 = 770;
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_231(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_231(iVar6) == 0)
			{
				return func_232(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (&Global_1058888->f_498[iVar0] == iVar5)
			{
				return iVar0;
			}
			iVar0++;
		}
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (&Global_1058888->f_498[iVar0] == 0)
			{
				return func_232(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

int func_118(var uParam0, int iParam1, int iParam2, var uParam3)
{
	iVar0 = func_233(iParam1);
	iVar1 = func_234(iParam2);
	func_25(uParam0);
	switch (iVar0)
	{
		case 0:
			switch (iVar1)
			{
				case 0:
					func_235(uParam0, "pl_IG1_Welcome_To_Tumbleweed", func_172(iVar0), func_173(iVar1), func_172(1), func_173(7), 0, "", 0, "b_breakout", 0, "s_IG1_Welcome_To_Tumbleweed", "s_IG1_Idle_Loop", 2, 1064514355);
					func_124();
					func_237(uParam0, 39054);
					func_239(uParam0, 39148);
					break;
				case 1:
					func_235(uParam0, "pl_IG1_People_Please_Obey", func_172(iVar0), func_173(iVar1), func_172(1), func_173(7), 0, "", 0, "b_breakout", 0, "s_IG1_People_Please_Obey", "s_IG1_Idle_Loop", 2, 1064514355);
					func_240();
					break;
				case 2:
					func_235(uParam0, "pl_IG1_Enjoy_Your_Day", func_172(iVar0), func_173(iVar1), func_172(1), func_173(7), 0, "", 0, "b_breakout", 0, "s_IG1_Enjoy_Your_Day", "s_IG1_Idle_Loop", 2, 1064514355);
					func_240();
					break;
				case 3:
					func_235(uParam0, "pl_IG1_Enjoy_Your_Time", func_172(iVar0), func_173(iVar1), func_172(1), func_173(7), 0, "", 0, "b_breakout", 0, "s_IG1_Enjoy_Your_Time", "s_IG1_Idle_Loop", 2, 1064514355);
					func_240();
					break;
				case 4:
					func_235(uParam0, "pl_IG1_All_Of_You", func_172(iVar0), func_173(iVar1), func_172(1), func_173(9), 0, "", 0, "b_breakout", 0, "s_IG1_All_Of_You", "s_IG1_Idle_Loop", 2, 1064514355);
					uLocal_654 = iVar648 + 1;
					func_240();
					func_239(uParam0, 39826);
					break;
				case 5:
					func_235(uParam0, "pl_IG1_This_Is_A_Law", func_172(iVar0), func_173(iVar1), func_172(1), func_173(9), 0, "", 0, "b_breakout", 0, "s_IG1_This_Is_A_Law", "s_IG1_Idle_Loop", 2, 1064514355);
					uLocal_654 = iVar648 + 1;
					func_240();
					func_239(uParam0, 39826);
					break;
				case 6:
					func_235(uParam0, "pl_IG1_I_Hope_Youre_All", func_172(iVar0), func_173(iVar1), func_172(1), func_173(9), 0, "", 0, "b_breakout", 0, "s_IG1_I_Hope_Youre_All", "s_IG1_Idle_Loop", 2, 1064514355);
					uLocal_654 = iVar648 + 1;
					func_240();
					func_242();
					break;
			}
			break;
		case 1:
			switch (iVar1)
			{
				case 7:
					func_235(uParam0, "Pl_IG1_Loop01", func_172(iVar0), func_173(iVar1), func_172(1), func_173(7), 0, "", 0, "b_breakout", 0, "S_IG1_Loop01", "S_IG1_Loop01", 3, 0.25f);
					func_124();
					func_239(uParam0, 39995);
					break;
				case 8:
					func_235(uParam0, "Pl_IG6_Loop01", func_172(iVar0), func_173(iVar1), func_172(1), func_173(7), 0, "", 0, "b_breakout", 0, "S_IG6_Loop01", "S_IG6_Loop01", 3, 0.25f);
					func_124();
					func_239(uParam0, 39995);
					break;
				case 9:
					func_235(uParam0, "Pl_IG1_Loop01", func_172(iVar0), func_173(iVar1), func_172(1), func_173(7), 0, "", 0, "b_breakout", 0, "S_IG1_Loop01", "S_IG1_Loop01", 3, 0.75f);
					func_124();
					func_245(uParam0, 40698);
					func_237(uParam0, 40737);
					func_239(uParam0, 39995);
					break;
				case 10:
					func_235(uParam0, "Pl_IG6_Loop01", func_172(iVar0), func_173(iVar1), func_172(1), func_173(7), 0, "", 0, "b_breakout", 0, "S_IG6_Loop01", "S_IG6_Loop01", 3, 0.75f);
					func_124();
					func_245(uParam0, 40698);
					func_237(uParam0, 40737);
					func_239(uParam0, 39995);
					break;
				case 11:
					func_235(uParam0, "Pl_IG1_Loop01", func_172(iVar0), func_173(iVar1), func_172(1), func_173(9), 0, "", 0, "b_breakout", 0, "S_IG1_Loop01", "S_IG1_Loop01", 3, 0.25f);
					func_124();
					func_237(uParam0, 40849);
					break;
				case 12:
					func_235(uParam0, "Pl_IG1_Loop01", func_172(iVar0), func_173(iVar1), func_172(1), func_173(7), 0, "", 0, "b_breakout", 0, "S_IG1_Loop01", "S_IG1_Loop01", 3, 0.25f);
					func_124();
					func_239(uParam0, 39148);
					break;
				case 13:
					func_235(uParam0, "Pl_IG2_You_Tough_Guy", func_172(iVar0), func_173(iVar1), func_172(1), func_173(14), 0, "", 0, "b_breakout", 0, "S_IG2_You_Tough_Guy", "S_IG1_Loop01", 2, 1064514355);
					func_124();
					func_237(uParam0, 40922);
					break;
				case 14:
					func_235(uParam0, "Pl_IG2_Here_In_Tumbleweed", func_172(iVar0), func_173(iVar1), func_172(1), func_173(15), 0, "", 0, "b_breakout", 0, "S_IG2_Here_In_Tumbleweed", "S_IG1_Loop01", 2, 1064514355);
					func_237(uParam0, 40922);
					break;
				case 15:
					func_235(uParam0, "pl_IG2_Question", func_172(iVar0), func_173(iVar1), func_172(1), func_173(17), 0, "", 0, "b_breakout", 0, "S_IG6_Rifle_Up_2_Two_Hands", "s_IG2_Question_Wait_Idle", 2, 1064514355);
					func_237(uParam0, 41003);
					func_239(uParam0, 41038);
					break;
				case 16:
					func_235(uParam0, "Pl_IG2_Positive_Response", func_172(iVar0), func_173(iVar1), func_172(1), func_173(9), 0, "", 0, "b_breakout", 0, "S_IG2_Positive_Response", "S_IG1_Loop01", 2, 1064514355);
					break;
				case 17:
					func_235(uParam0, "Pl_IG2_Negative_Response", func_172(iVar0), func_173(iVar1), func_172(1), func_173(9), 0, "", 0, "b_breakout", 0, "S_IG2_Negative_Response", "S_IG2_Negative_Response", 3, 0.92f);
					func_239(uParam0, 41380);
					break;
				case 18:
					func_235(uParam0, "Pl_IG2_You_Walk_Away", func_172(iVar0), func_173(iVar1), func_172(1), func_173(9), 0, "", 0, "b_breakout", 0, "S_IG2_You_Walk_Away", "S_IG6_Loop01", 2, 1064514355);
					break;
				case 19:
					func_235(uParam0, "Pl_IG2_We_Are_A_Law", func_172(iVar0), func_173(iVar1), func_172(1), func_173(9), 0, "", 0, "b_breakout", 0, "S_IG2_We_Are_A_Law", "S_IG1_Loop01", 2, 1064514355);
					uLocal_654 = iVar648 + 1;
					func_240();
					func_239(uParam0, 39826);
					break;
				case 20:
					func_235(uParam0, "Pl_IG2_Together_We_Can", func_172(iVar0), func_173(iVar1), func_172(1), func_173(9), 0, "", 0, "b_breakout", 0, "S_IG2_Together_We_Can", "S_IG1_Loop01", 2, 1064514355);
					uLocal_654 = iVar648 + 1;
					func_240();
					func_239(uParam0, 39826);
					break;
				case 21:
					func_235(uParam0, "Pl_IG2_God_Expects", func_172(iVar0), func_173(iVar1), func_172(1), func_173(9), 0, "", 0, "b_breakout", 0, "S_IG2_God_Expects", "S_IG1_Loop01", 2, 1064514355);
					uLocal_654 = iVar648 + 1;
					func_240();
					func_242();
					func_239(uParam0, 39826);
					break;
				case 22:
					func_235(uParam0, "Pl_IG2_This_Shall_Be", func_172(iVar0), func_173(iVar1), func_172(1), func_173(9), 0, "", 0, "b_breakout", 0, "S_IG2_This_Shall_Be", "S_IG1_Loop01", 2, 1064514355);
					uLocal_654 = iVar648 + 1;
					func_240();
					func_239(uParam0, 39826);
					break;
				case 23:
					func_235(uParam0, "Pl_IG2_I_Am_Watching_You", func_172(iVar0), func_173(iVar1), func_172(1), func_173(9), 0, "", 0, "b_breakout", 0, "S_IG2_I_Am_Watching_You", "S_IG1_Loop01", 2, 1064514355);
					uLocal_654 = iVar648 + 1;
					func_240();
					break;
			}
			break;
		case 2:
			switch (iVar1)
			{
				case 24:
					func_235(uParam0, "pl_IG3_My_Authority_Is", func_172(iVar0), func_173(iVar1), func_172(1), func_173(9), 0, "", 0, "b_breakout", 0, "s_IG3_My_Authority_Is", "S_IG1_Loop01", 2, 1064514355);
					func_242();
					func_124();
					func_237(uParam0, 40922);
					break;
				case 25:
					func_235(uParam0, "pl_IG3_Remember_People", func_172(iVar0), func_173(iVar1), func_172(1), func_173(7), 0, "", 0, "b_breakout", 0, "s_IG3_Remember_People", "S_IG1_Loop01", 2, 1064514355);
					func_240();
					break;
				case 26:
					func_235(uParam0, "pl_IG3_This_Is_A_law", func_172(iVar0), func_173(iVar1), func_172(1), func_173(7), 0, "", 0, "b_breakout", 0, "s_IG3_This_Is_A_law", "S_IG1_Loop01", 2, 1064514355);
					func_240();
					break;
				case 27:
					func_235(uParam0, "pl_IG3_Let_Me_Tell_You", func_172(iVar0), func_173(iVar1), func_172(1), func_173(9), 0, "", 0, "b_breakout", 0, "s_IG3_Let_Me_Tell_You", "S_IG1_Loop01", 2, 1064514355);
					uLocal_654 = iVar648 + 1;
					func_240();
					func_239(uParam0, 39826);
					break;
				case 28:
					func_235(uParam0, "pl_IG3_I_Am_Not", func_172(iVar0), func_173(iVar1), func_172(1), func_173(9), 0, "", 0, "b_breakout", 0, "s_IG3_I_Am_Not", "S_IG1_Loop01", 2, 1064514355);
					uLocal_654 = iVar648 + 1;
					func_240();
					func_239(uParam0, 39826);
					break;
				case 29:
					func_235(uParam0, "pl_IG3_Anyone_And_I", func_172(iVar0), func_173(iVar1), func_172(1), func_173(9), 0, "", 0, "b_breakout", 0, "s_IG3_Anyone_And_I", "S_IG1_Loop01", 2, 1064514355);
					uLocal_654 = iVar648 + 1;
					func_240();
					func_242();
					break;
				case 30:
					func_235(uParam0, "pl_IG3_Whatever_The_Health", func_172(iVar0), func_173(iVar1), func_172(2), func_173(31), 0, "", 0, "b_breakout", 0, "s_IG3_Whatever_The_Health", "S_IG6_Loop01", 2, 1064514355);
					func_124();
					break;
				case 31:
					func_235(uParam0, "pl_IG3_Do_Not_Push", func_172(iVar0), func_173(iVar1), func_172(1), func_173(9), 0, "", 0, "b_breakout", 0, "s_IG3_Do_Not_Push", "S_IG1_Loop01", 2, 1064514355);
					break;
			}
			break;
		case 3:
			switch (iVar1)
			{
				case 32:
					func_235(uParam0, "pl_IG4_No_Lingering", func_172(iVar0), func_173(iVar1), func_172(1), func_173(9), 0, "", 0, "b_breakout", 0, "s_IG4_No_Lingering", "s_IG1_Loop01", 2, 1064514355);
					func_124();
					func_239(uParam0, 41535);
					break;
				case 33:
					func_235(uParam0, "pl_IG4_Get_The", func_172(iVar0), func_173(iVar1), func_172(1), func_173(9), 0, "", 0, "b_breakout", 0, "s_IG4_Get_The", "s_IG1_Loop01", 2, 1064514355);
					func_124();
					func_239(uParam0, 41535);
					break;
				case 34:
					func_235(uParam0, "pl_IG4_Your_Starting", func_172(iVar0), func_173(iVar1), func_172(1), func_173(9), 0, "", 0, "b_breakout", 0, "s_IG4_Your_Starting", "s_IG1_Loop01", 2, 1064514355);
					func_124();
					func_239(uParam0, 41535);
					break;
				case 35:
					func_235(uParam0, "pl_IG4_Dont_Take", func_172(iVar0), func_173(iVar1), func_172(1), func_173(9), 0, "", 0, "b_breakout", 0, "s_IG4_Dont_Take", "s_IG1_Loop01", 2, 1064514355);
					func_124();
					func_239(uParam0, 41535);
					break;
				case 36:
					func_235(uParam0, "pl_IG4_What_Are_You", func_172(iVar0), func_173(iVar1), func_172(1), func_173(9), 0, "", 0, "b_breakout", 0, "s_IG4_What_Are_You", "s_IG1_Loop01", 2, 1064514355);
					func_124();
					func_239(uParam0, 41535);
					break;
			}
			break;
		case 4:
			switch (iVar1)
			{
				case 37:
					func_235(uParam0, "Pl_IG6_Loop01", func_172(iVar0), func_173(iVar1), func_172(4), func_173(37), 0, "", 0, "b_breakout", 0, "S_IG6_Loop01", "S_IG6_Loop01", 3, 0.25f);
					func_124();
					func_239(uParam0, 39995);
					break;
				case 38:
					func_235(uParam0, "Pl_IG6_Loop01", func_172(iVar0), func_173(iVar1), func_172(4), func_173(37), 0, "", 0, "b_breakout", 0, "S_IG6_Loop01", "S_IG6_Loop01", 3, 0.75f);
					func_124();
					func_245(uParam0, 40698);
					func_237(uParam0, 40737);
					func_239(uParam0, 39995);
					break;
				case 39:
					func_235(uParam0, "Pl_IG5_Hey_You", func_172(iVar0), func_173(iVar1), func_172(1), func_173(9), 0, "", 0, "b_breakout", 0, "S_IG6_Rifle_Up_2_Two_Hands", "s_IG1_Loop_01", 2, 1064514355);
					func_124();
					break;
				case 40:
					func_235(uParam0, "Pl_IG5_Im_Watching_You_Tough_Guy", func_172(iVar0), func_173(iVar1), func_172(1), func_173(9), 0, "", 0, "b_breakout", 0, "S_IG6_Rifle_Up_2_Two_Hands", "s_IG1_Loop_01", 2, 1064514355);
					func_124();
					break;
				case 41:
					func_235(uParam0, "Pl_IG5_Im_Watching_You", func_172(iVar0), func_173(iVar1), func_172(1), func_173(9), 0, "", 0, "b_breakout", 0, "S_IG6_Rifle_Up_2_Two_Hands", "s_IG1_Loop_01", 2, 1064514355);
					func_124();
					break;
				case 42:
					func_235(uParam0, "Pl_IG5_I_Never_Sleep", func_172(iVar0), func_173(iVar1), func_172(1), func_173(9), 0, "", 0, "b_breakout", 0, "S_IG6_Rifle_Up_2_Two_Hands", "s_IG1_Loop_01", 2, 1064514355);
					func_124();
					break;
				case 43:
					func_235(uParam0, "Pl_IG5_Hey_You_Dont", func_172(iVar0), func_173(iVar1), func_172(1), func_173(9), 0, "", 0, "b_breakout", 0, "S_IG6_Rifle_Up_2_Two_Hands", "s_IG1_Loop_01", 2, 1064514355);
					func_124();
					break;
				case 44:
					func_235(uParam0, "Pl_IG5_As_Far_As", func_172(iVar0), func_173(iVar1), func_172(1), func_173(9), 0, "", 0, "b_breakout", 0, "S_IG6_Rifle_Up_2_Two_Hands", "s_IG1_Loop_01", 2, 1064514355);
					func_124();
					break;
				case 45:
					func_235(uParam0, "Pl_IG5_You_Your_Back", func_172(iVar0), func_173(iVar1), func_172(1), func_173(9), 0, "", 0, "b_breakout", 0, "S_IG6_Rifle_Up_2_Two_Hands", "s_IG1_Loop_01", 2, 1064514355);
					func_124();
					break;
				case 46:
					func_235(uParam0, "Pl_IG5_If_Youve_Come", func_172(iVar0), func_173(iVar1), func_172(1), func_173(9), 0, "", 0, "b_breakout", 0, "S_IG6_Rifle_Up_2_Two_Hands", "s_IG1_Loop_01", 2, 1064514355);
					func_124();
					break;
				case 47:
					func_235(uParam0, "Pl_IG5_I_Will_Give_You", func_172(iVar0), func_173(iVar1), func_172(1), func_173(9), 0, "", 0, "b_breakout", 0, "S_IG6_Rifle_Up_2_Two_Hands", "s_IG1_Loop_01", 2, 1064514355);
					func_124();
					break;
				case 48:
					func_235(uParam0, "Pl_IG5_Get_The_Hell", func_172(iVar0), func_173(iVar1), func_172(1), func_173(9), 0, "", 0, "b_breakout", 0, "S_IG6_Rifle_Up_2_Two_Hands", "s_IG1_Loop_01", 2, 1064514355);
					func_124();
					break;
				case 49:
					func_235(uParam0, "Pl_IG5_You_Get_Now", func_172(iVar0), func_173(iVar1), func_172(1), func_173(9), 0, "", 0, "b_breakout", 0, "S_IG6_Rifle_Up_2_Two_Hands", "s_IG1_Loop_01", 2, 1064514355);
					func_124();
					break;
				case 50:
					func_235(uParam0, "Pl_IG5_My_Reputation", func_172(iVar0), func_173(iVar1), func_172(1), func_173(9), 0, "", 0, "b_breakout", 0, "S_IG6_Rifle_Up_2_Two_Hands", "s_IG1_Loop_01", 2, 1064514355);
					func_124();
					break;
			}
			break;
		case 5:
			switch (iVar1)
			{
				case 51:
					func_235(uParam0, "pl_IG6_Your_Dead", func_172(iVar0), func_173(iVar1), -1, -1, 0, "", 0, "b_breakout", 0, "s_IG6_Your_Dead", "s_IG6_Your_Dead", 3, 1064514355);
					func_124();
					func_239(uParam0, 41560);
					break;
				case 52:
					func_235(uParam0, "pl_IG6_I_Will_Strike", func_172(iVar0), func_173(iVar1), -1, -1, 0, "", 0, "b_breakout", 0, "s_IG6_I_Will_Strike", "s_IG6_I_Will_Strike", 3, 1064514355);
					func_124();
					func_239(uParam0, 41560);
					break;
				case 53:
					func_235(uParam0, "pl_IG6_Now_Youll_Pay", func_172(iVar0), func_173(iVar1), -1, -1, 0, "", 0, "b_breakout", 0, "s_IG6_Now_Youll_Pay", "s_IG6_Now_Youll_Pay", 3, 1064514355);
					func_124();
					func_239(uParam0, 41560);
					break;
				case 54:
					func_235(uParam0, "pl_IG6_Your_Mine_Now", func_172(iVar0), func_173(iVar1), -1, -1, 0, "", 0, "b_breakout", 0, "s_IG6_Your_Mine_Now", "s_IG6_Your_Mine_Now", 3, 1064514355);
					func_124();
					func_239(uParam0, 41560);
					break;
				case 55:
					func_235(uParam0, "pl_IG6_You_Come_At", func_172(iVar0), func_173(iVar1), -1, -1, 0, "", 0, "b_breakout", 0, "s_IG6_You_Come_At", "s_IG6_You_Come_At", 3, 1064514355);
					func_124();
					func_239(uParam0, 41560);
					break;
				case 56:
					func_235(uParam0, "pl_IG6_Aim_2_Stand", func_172(iVar0), func_173(iVar1), func_172(1), func_173(7), 0, "", 0, "b_breakout", 0, "s_IG6_Aim_2_Stand", "s_IG1_Loop01", 2, 1064514355);
					func_124();
					break;
				case 57:
					func_235(uParam0, "pl_IG6_Rifle_Up_2_Two_Hands", func_172(iVar0), func_173(iVar1), func_172(1), func_173(8), 0, "", 0, "b_breakout", 0, "s_IG6_Rifle_Up_2_Two_Hands", "s_IG6_Loop01", 2, 1064514355);
					func_124();
					break;
				case 58:
					func_235(uParam0, "pl_IG6_Stand_2_Aim", func_172(iVar0), func_173(iVar1), -1, -1, 0, "", 0, "b_breakout", 0, "s_IG6_Stand_2_Aim", "s_IG6_Stand_2_Aim", 3, 1064514355);
					break;
				case 59:
					func_235(uParam0, "pl_IG6_Two_Hands_2_Rifle", func_172(iVar0), func_173(iVar1), func_172(1), func_173(7), 0, "", 0, "b_breakout", 0, "s_IG6_Two_Hands_2_Rifle", "s_IG1_Loop01", 2, 1064514355);
					func_124();
					func_239(uParam0, 41596);
					break;
			}
			break;
	}
	if (func_226(iParam1) && func_255(iParam2))
	{
		if (iVar0 != 5)
		{
			func_256(uParam0, func_172(1), func_173(7));
			if (!func_55(Local_14.f_193, 2))
			{
				iVar2 = func_257();
				if (iVar2 > 0)
				{
					iLocal_680 = 1;
					func_258(uParam0, iVar2);
				}
				else if (Local_14.f_1 == 0)
				{
					iLocal_680 = 0;
					func_259(uParam0, func_172(0), func_173(0));
				}
				else if (Local_14.f_1 == 1)
				{
					iLocal_680 = 0;
					func_259(uParam0, func_172(1), func_173(13));
				}
				else
				{
					iLocal_680 = 0;
					func_259(uParam0, func_172(2), func_173(24));
				}
			}
			if ((iVar1 == 0 || (iVar1 >= 13 && iVar1 <= 14)) || iVar1 == 24)
			{
				func_260(uParam0, func_172(1), func_173(18));
			}
		}
	}
	return 0;
}

void func_119(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_123(&(uParam0->f_1), 256);
	}
	else
	{
		func_122(&(uParam0->f_1), 256);
	}
}

void func_120(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_123(&(uParam0->f_1), 128);
	}
	else
	{
		func_122(&(uParam0->f_1), 128);
	}
}

void func_121(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_122(uParam0, 268435456);
	}
	else
	{
		func_123(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_122(uParam0, 1073741824);
	}
	else
	{
		func_123(uParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_122(uParam0, 536870912);
	}
	else
	{
		func_123(uParam0, 536870912);
	}
}

void func_122(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_123(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_124()
{
	func_261(&iLocal_673);
}

void func_125(bool bParam0)
{
	if (bParam0)
	{
		if (does_entity_exist(iVar680))
		{
			func_262(&iLocal_683, bParam0);
		}
		if (does_entity_exist(iVar681))
		{
			func_262(&iLocal_684, bParam0);
		}
	}
	else
	{
		if (does_entity_exist(iVar680))
		{
			if (!_0xbedbe39b5fd98fd6(iVar680) && !_0x77525bbf433f2cd6(iVar680))
			{
				_task_move_in_traffic(iVar680, -1082130432, 0, 0);
			}
			set_ped_keep_task(iVar680, true);
			set_ped_as_no_longer_needed(&iLocal_683);
		}
		if (does_entity_exist(iVar681))
		{
			if (!_0xbedbe39b5fd98fd6(iVar681) && !_0x77525bbf433f2cd6(iVar681))
			{
				_task_move_in_traffic(iVar681, -1082130432, 0, 0);
			}
			set_ped_keep_task(iVar681, true);
			set_ped_as_no_longer_needed(&iLocal_684);
		}
		func_263();
	}
}

void func_126()
{
	func_264(&(Local_14.f_3), Local_14.f_41[0], &(Local_14.f_41[0]->f_21), 1, 1);
	func_264(&(Local_14.f_3), Local_14.f_41[1], &(Local_14.f_41[1]->f_21), 1, 1);
}

void func_127(int iParam0)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	_0xa3db37edf9a74635(player_id(), iParam0, 7, 0, 1);
	_0xa3db37edf9a74635(player_id(), iParam0, 3, 2, 1);
	_0xa3db37edf9a74635(player_id(), iParam0, 4, 2, 1);
}

bool func_128(int iParam0, bool bParam1)
{
	if (func_215() != -1)
	{
		return false;
	}
	if (!func_265(iParam0))
	{
		return false;
	}
	if (!func_266(iParam0) && bParam1)
	{
		return false;
	}
	return func_267(iParam0, 1);
}

void func_129()
{
	_0xc67a4910425f11f1(player_id(), "SheriffBubble");
	set_ped_config_flag(Local_14.f_3, 153, false);
	open_sequence_task(&iVar0);
	task_combat_ped(0, Global_35, 0, 16);
	close_sequence_task(iVar0);
	task_perform_sequence(Local_14.f_3, iVar0);
	clear_sequence_task(&iVar0);
	set_ped_keep_task(Local_14.f_3, true);
}

void func_130(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_265(iParam0))
	{
		return;
	}
	if (!func_267(iParam0, 1))
	{
		return;
	}
	if (!func_267(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_266(iParam0)) && func_268(iParam0))
	{
		return;
	}
	func_269(iParam0, 1);
	func_270(iParam0);
	if (func_272(func_271(iParam0)))
	{
		iVar0 = func_273(iParam0);
		if (!_0x800df3fc913355f3(iVar0))
		{
			return;
		}
		_0xbb68908cd11aebdc(iVar0);
		_0xb65e7f733956cf25(iVar0);
		if (bParam2 && !_0xeb98b38ca60742d7(iVar0))
		{
			_0x631cd2d77fdc0316(iVar0);
		}
		iVar1 = _0x31c70a716cae1fee(iVar0);
		if (!is_ped_injured(iVar1))
		{
			set_ped_config_flag(iVar1, 171, false);
		}
		if (bParam1)
		{
			_0x7b204f88f6c3d287(iVar0);
		}
		func_269(iParam0, 16);
	}
	if (func_267(iParam0, 128) && !bParam3)
	{
		func_274(iParam0, 0);
	}
}

void func_131(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_275(&Global_0, 8);
	}
	if (!func_276() || func_215() != -1)
	{
		return;
	}
	func_275(&Global_0, 1);
}

void func_132()
{
	_0x9428447ded71fc7e("special_ped_scenes");
}

int func_133(int iParam0)
{
	if (is_valid_interior(iParam0))
	{
		_get_interior_info(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case -1571304986:
			case -1342123354:
			case -1269216817:
			case -1212338017:
			case -803716508:
			case 768224943:
			case 1245139812:
			case 1633500362:
				return 1;
		}
	}
	return 0;
}

int func_134(int iParam0)
{
	if (is_valid_interior(iParam0))
	{
		_get_interior_info(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case -1946266312:
			case -1817199644:
			case -1604045519:
			case -857108408:
			case -431793961:
			case -17417813:
			case 37578405:
			case 459745161:
			case 653987431:
			case 1107105323:
			case 1135757916:
			case 1442115297:
			case 1548023642:
			case 1911907177:
				return 1;
		}
	}
	return 0;
}

bool func_135(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_136(var uParam0)
{
	return func_135(*uParam0, 2);
}

float func_137()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

struct<2> func_138(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

int func_139(var uParam0, var uParam1)
{
	stat_id_get_int(&uParam0, &uVar0);
	return uVar0;
}

void func_140(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

void func_141(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_142(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 2)
	{
		return false;
	}
	return true;
}

int func_143(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			switch (func_277())
			{
				case 2:
					return 2;
				case 0:
					return 0;
				case 11:
					return 11;
				case 10:
					return 10;
				default:
					break;
			}
			return -1;
		case 1:
			return 0;
		case 2:
			return 15;
		case 3:
			return 1;
		case 4:
			switch (func_277())
			{
				case 3:
					return 3;
				case 9:
					return 9;
				case 10:
					return 10;
				case 4:
					return 4;
				case 13:
					return 13;
				default:
					break;
			}
			return -1;
		case 6:
			switch (func_277())
			{
				case 3:
					return 3;
				case 6:
					return 6;
				default:
					break;
			}
			return -1;
		case 7:
			return 10;
		case 5:
			return 7;
		case 8:
			return 0;
		case 9:
			return 9;
		case 10:
			return 0;
		case 11:
			switch (func_277())
			{
				case 12:
					return 12;
				case 10:
					return 10;
				case 15:
					return 15;
				case 11:
					return 11;
				case 16:
					return 16;
				case 1:
					return 1;
				case 0:
					return 0;
				default:
					break;
			}
			return -1;
		case 12:
			return 6;
		case 13:
			return 9;
		case 14:
			return 11;
		case 15:
			switch (func_277())
			{
				case 9:
					return 9;
				case 7:
					return 7;
				case 13:
					return 13;
				case 10:
					return 10;
				case 1:
					return 1;
				default:
					break;
			}
			return -1;
		case 16:
			return 0;
		case 17:
			return 10;
		case 18:
			return 1;
		case 19:
			return 9;
		case 20:
			return 1;
		case 21:
			return 10;
		case 22:
			return 13;
		case 23:
			switch (func_277())
			{
				case 0:
					return 0;
				case 2:
					return 2;
				default:
					break;
			}
			return -1;
		case 24:
			switch (func_277())
			{
				case 15:
					return 15;
				case 13:
					return 13;
				case 14:
					return 14;
				case 16:
					return 16;
				default:
					break;
			}
			return -1;
		case 25:
			return 0;
		case 26:
			return 9;
		case 27:
			return 0;
		case 28:
			return 10;
		case 29:
			return 0;
	}
	return -1;
}

int func_144(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return 5;
		case 2:
			return 120;
		case 3:
			return 26;
		case 4:
			return -1;
		case 6:
			return -1;
		case 7:
			return -1;
		case 5:
			return -1;
		case 8:
			return 5;
		case 9:
			return 76;
		case 10:
			return 5;
		case 11:
			switch (func_278())
			{
				case 105:
					return 105;
				case 38:
					return 38;
				case 126:
					return 126;
				case 5:
					return 5;
				default:
					break;
			}
			return -1;
		case 12:
			return -1;
		case 13:
			return 76;
		case 14:
			return 105;
		case 15:
			return -1;
		case 16:
			return 5;
		case 17:
			return 78;
		case 18:
			return 26;
		case 19:
			return 76;
		case 20:
			return -1;
		case 21:
			return -1;
		case 22:
			return 115;
		case 23:
			return -1;
		case 24:
			return -1;
		case 25:
			return -1;
		case 26:
			return 76;
		case 27:
			return 5;
		case 28:
			return -1;
		case 29:
			return 5;
	}
	return -1;
}

bool func_145(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_146(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

bool func_147(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_216((*Global_1835011)[iParam0]->f_1);
}

int func_148(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_279((*Global_1835011)[iParam0]->f_1);
}

bool func_149(int iParam0)
{
	iVar0 = func_280();
	switch (iParam0)
	{
		case 0:
			switch (iVar0)
			{
				case -173507739:
				case 1632247697:
					return true;
				default:
					return false;
			}
			break;
		case 1:
			switch (iVar0)
			{
				case -1148613331:
				case -173507739:
				case 433385945:
				case 821931868:
				case 1632247697:
					return true;
				default:
					return false;
			}
			break;
		case 2:
			switch (iVar0)
			{
				case -1721991356:
				case -1148613331:
				case -702816767:
				case -173507739:
				case 433385945:
				case 603685163:
				case 821931868:
				case 1500834021:
				case 1632247697:
				case 1679686673:
					return true;
				default:
					return false;
			}
			break;
		case 3:
			switch (iVar0)
			{
				case -1721991356:
				case -1233681761:
				case -1148613331:
				case -702816767:
				case -416908843:
				case -273223690:
				case -173507739:
				case 212278652:
				case 433385945:
				case 821931868:
				case 1420204096:
				case 1500834021:
				case 1632247697:
				case 1679686673:
					return true;
				default:
					return false;
			}
			break;
		case 4:
			return true;
		case 5:
			switch (iVar0)
			{
				case -702816767:
				case 1500834021:
					return true;
			}
			break;
	}
	return false;
}

bool func_150(var uParam0, var uParam1, float fParam2, int iParam3)
{
	if (!does_entity_exist(*uParam0))
	{
		return false;
	}
	vVar0 = { get_entity_forward_vector(*uParam0) };
	vVar3 = { get_entity_coords(*uParam0, true, false) + vVar0 * Vector(fParam2, fParam2, fParam2) };
	if (func_281(uParam1, vVar3, iParam3))
	{
		return true;
	}
	return false;
}

bool func_151(var uParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5)
{
	if (!does_entity_exist(*uParam0))
	{
		if (_does_volume_exist(*uParam1))
		{
			_0x74c2b3dc0b294102(*uParam1);
			_0xa1cfb35069d23c23(*uParam1);
			_delete_volume(*uParam1);
		}
		return false;
	}
	vVar2 = { get_entity_forward_vector(*uParam0) };
	vVar5 = { get_entity_coords(*uParam0, true, false) + vVar2 * Vector(fParam3, fParam3, fParam3) };
	if (!func_282(uParam2, &iVar1, vVar5, fParam3, fParam4))
	{
		if (_does_volume_exist(*uParam1))
		{
			_0x74c2b3dc0b294102(*uParam1);
			_0xa1cfb35069d23c23(*uParam1);
			_delete_volume(*uParam1);
		}
		return false;
	}
	else
	{
		if (!_does_volume_exist(*uParam1))
		{
			fVar0 = (fParam4 + 1f);
			*uParam1 = _create_volume_cylinder_with_custom_name(vVar5, 0f, 0f, 0f, fVar0, fVar0, fVar0, "SPDClearWagonsMount");
			_0xb56d41a694e42e86(*uParam1, iParam5 | 2228255, 0, 0, -1, -1, 10);
			_0x18262cafebb5fbe1(*uParam1, iParam5, 0, 0, -1, -1, 0);
		}
		vVar8 = { get_entity_coords(*uParam0, true, false) };
		if (!func_283(iVar1, 0))
		{
			func_284(&iVar1, vVar8, 1083179008);
		}
		return true;
	}
	return false;
}

int func_152(var uParam0)
{
	if (!func_58(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_136(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_204() - round((uParam0->f_1 * 1000f)));
}

bool func_153()
{
	return Global_1392040->f_6;
}

bool func_154()
{
	if (Global_1914319->f_18941.f_17)
	{
		return true;
	}
	return false;
}

bool func_155(int iParam0)
{
	return false;
}

bool func_156(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_157(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && is_entity_dead(iParam0))
	{
		return false;
	}
	if (!_does_volume_exist(iParam1))
	{
		return false;
	}
	return is_entity_in_volume(iParam0, iParam1, true, 0);
}

bool func_158(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_159(int iParam0)
{
	if (!func_158(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_3;
}

void func_160(var uParam0)
{
	func_99(uParam0, 0f);
}

int func_161(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	if (!_does_volume_exist(iParam0))
	{
		return 0;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	vVar3 = { _0x3e2a25b2416dd67e(iParam0) };
	iVar6 = func_285(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

bool func_162(var uParam0, int iParam1, vector3 vParam2, bool bParam5, int iParam6)
{
	if (func_273(iParam1) == 0)
	{
		return false;
	}
	if (!func_68(*uParam0, 0))
	{
		*uParam0 = func_286(iParam1, 1, 0, 0, 1, 1);
	}
	else
	{
		if (iParam6 != 1320127128)
		{
			func_287(*uParam0, iParam6);
		}
		if (bParam5)
		{
			_0x59c7ad6fea2ac449(func_273(iParam1), vParam2);
		}
		return true;
	}
	return false;
}

void func_163(int iParam0, int iParam1)
{
	if (!(iParam1 > -1 && iParam1 <= 29))
	{
		return;
	}
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	decor_set_bool(iParam0, "bIsSpecialPed", true);
	decor_set_int(iParam0, "iSpecialPedID", iParam1);
	(*Global_1396257)[iParam1]->f_636 = iParam0;
}

void func_164(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	if (!func_142(iParam1))
	{
		return;
	}
	if (!func_288(iParam2))
	{
		return;
	}
	func_289(iParam0->f_41[iParam1]->f_21[iParam2], sParam3, sParam4, iParam5, iParam6, iParam7, 0, 1, 0);
	if (bParam8)
	{
		func_290(iParam0->f_41[iParam1], iParam2, 1);
	}
}

int func_165(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 1:
			iVar0 = 64;
			break;
		case 3:
			iVar0 = 192;
			break;
		case 2:
			iVar0 = 208;
			break;
		case 4:
			iVar0 = 212;
			break;
		case 5:
			iVar0 = 77;
			break;
		case 7:
			iVar0 = 76;
			break;
		case 6:
			iVar0 = 96;
			break;
		default:
			iVar0 = 1;
			break;
	}
	iVar0 |= 16777216;
	if (iParam1 != 0)
	{
		iVar0 = (iVar0 || iParam1);
	}
	if (iParam2 != 0)
	{
		iVar0 = (iVar0 - (iVar0 && iParam2));
	}
	return iVar0;
}

void func_166(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3)
	{
		func_64(iParam0, iParam1);
	}
	iParam0->f_41[iParam1]->f_56 = iParam2;
}

void func_167(int iParam0, int iParam1, int iParam2)
{
	if (!func_142(iParam1))
	{
		return;
	}
	iParam0->f_41[iParam1]->f_57 = iParam2;
}

void func_168(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
{
	close_sequence_task(*iParam1);
	if (!bParam5 || !is_entity_dead(iParam0))
	{
		if (fParam2 > 0f)
		{
			if (fParam3 < fParam2)
			{
				fParam3 = fParam2;
			}
			_task_perform_sequence_2(iParam0, *iParam1, fParam2, fParam3);
		}
		else
		{
			task_perform_sequence(iParam0, *iParam1);
		}
	}
	if (bParam4)
	{
		clear_sequence_task(iParam1);
	}
}

float func_169(var uParam0)
{
	if (!func_58(uParam0))
	{
		return 0f;
	}
	if (func_136(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_137() - uParam0->f_1);
}

bool func_170(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (!is_ped_injured(iParam0))
		{
			if (iParam1 == 2104565373 && is_driveby_task_underneath_driving_task(iParam0))
			{
				return true;
			}
			if (get_script_task_status(iParam0, iParam1, true) == 1 || get_script_task_status(iParam0, iParam1, true) == 0)
			{
				return true;
			}
		}
	}
	return false;
}

void func_171()
{
	func_291(Local_14.f_205[0], Local_14.f_3, "IG_SHERIFFFREEMAN", Global_35, "JOHN", "player_zero", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	func_291(Local_14.f_205[1], Local_14.f_3, "IG_SHERIFFFREEMAN", Global_35, "JOHN", "ARTHUR", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	func_291(Local_14.f_205[2], Local_14.f_3, "IG_SHERIFFFREEMAN", Global_35, "JOHN", "player_zero", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	func_291(Local_14.f_205[3], Local_14.f_3, "IG_SHERIFFFREEMAN", Global_35, "JOHN", "player_zero", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	func_291(Local_14.f_205[4], Local_14.f_3, "IG_SHERIFFFREEMAN", Global_35, "JOHN", "player_zero", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	func_291(Local_14.f_205[5], Local_14.f_3, "IG_SHERIFFFREEMAN", Global_35, "JOHN", "player_zero", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}

int func_172(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = -1;
	if (iVar0 >= 0 && iVar0 < 6)
	{
		iVar1 = iVar0;
	}
	return iVar1;
}

int func_173(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = -1;
	if (iVar0 >= 0 && iVar0 < 100)
	{
		iVar1 = iVar0;
	}
	return iVar1;
}

void func_174(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_385 = iParam1;
	func_292(uParam0, 0, 1);
	if (bParam2)
	{
		func_293(uParam0);
	}
}

int func_175(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	if (!is_entity_dead(*uParam0))
	{
		func_294(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !_does_volume_exist(iParam9)) || is_entity_in_volume(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (is_ambient_speech_playing(*uParam0) || is_scripted_speech_playing(*uParam0));
		fVar8 = func_295(fParam12 >= 0f, fParam12, vdist(Global_36, get_entity_coords(*uParam0, true, false)));
		if (!iParam8 & 2097152 != 0)
		{
			set_ped_reset_flag(*uParam0, 184, true);
		}
		if (iParam8 & 8388608 != 0)
		{
			set_ped_reset_flag(*uParam0, 281, true);
		}
		if (bVar5)
		{
			bVar1 = (is_ambient_speech_playing(Global_35) || is_scripted_speech_playing(Global_35));
		}
		if (bVar7 || (bVar5 && bVar1))
		{
			func_160(&(iParam1->f_13));
		}
		if (func_296(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_297(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_175(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_84(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!get_ped_config_flag(*uParam0, 317, true))
						{
							func_298(*uParam0, 1, 1);
						}
					}
					else if (func_299(iParam1, 22))
					{
						func_298(*uParam0, 0, 1);
					}
				}
				if (func_300(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_301(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_302(iParam8);
					if (func_303(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (is_bit_set(uParam3[iParam1->f_1], 20))
								{
									func_304(uParam3);
								}
							}
							return iParam1->f_1;
						}
					}
					else if (iParam1->f_2 != 2)
					{
						if (iParam1->f_1 != -1)
						{
							iParam1->f_1 = -1;
						}
					}
				}
				else
				{
					func_305(iParam1, uParam3, fVar8);
					if (func_306(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (is_bit_set(*iParam1, 1))
					{
						func_85(uParam3, 0, 0, 1, 1);
						clear_bit(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_307(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_300(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_308(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_303(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_301(uParam0, func_300(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_302(iParam8);
				}
				else if (is_bit_set(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_85(uParam3, 0, 0, 1, 1);
					}
					func_309(iParam1, 1);
				}
				func_305(iParam1, uParam3, fVar8);
				if (func_307(uParam0, iParam1, fParam4, bVar6))
				{
					if (iParam8 & 512 != 0)
					{
						iParam1->f_2 = 0;
					}
					else
					{
						iParam1->f_2 = 1;
					}
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
		}
	}
	else if (!iParam8 & 1024 != 0)
	{
		if (!is_bit_set(*iParam1, 3))
		{
			func_310(iParam1, uParam3);
			set_bit(iParam1, 3);
		}
	}
	return -1;
}

bool func_176(int iParam0)
{
	if (!(_does_volume_exist(iParam0->f_161) && is_entity_in_volume(Global_35, iParam0->f_161, true, 0)))
	{
		func_311(&Local_14, 0, 0);
		return false;
	}
	if (((((((func_55(Local_14.f_193, 32) && func_55(Local_14.f_193, 65536)) && !func_55(Local_14.f_193, 64)) && !func_55(Local_14.f_193, 128)) && !func_55(Local_14.f_193, 2048)) && (func_55(Local_14.f_193, 524288) || func_54(&Local_14) > 2.2f)) && !func_150(&(Local_14.f_3), &uLocal_698, 1071644672, 1074790400)) && !func_312(&(Local_14.f_3), &uLocal_699, 1071644672, 1074790400))
	{
		func_311(&Local_14, 0, 1);
		return true;
	}
	else
	{
		func_311(&Local_14, 0, 0);
	}
	return false;
}

bool func_177(int iParam0, int iParam1, int iParam2)
{
	if (!func_142(iParam1))
	{
		return false;
	}
	if (iParam0->f_41[iParam1]->f_58 == -1)
	{
		return false;
	}
	iVar0 = iParam0->f_41[iParam1]->f_58;
	if (!func_288(iVar0))
	{
		return false;
	}
	*iParam2 = iVar0;
	return true;
}

void func_178(int iParam0)
{
	if (iParam0 == 0)
	{
		if (func_313())
		{
			func_314(Global_35, "GREET_GENERAL", -417894478, Local_14.f_3, 1, 0, 0, 1);
		}
		else
		{
			func_314(Global_35, "GREET_GENERAL", -417894478, Local_14.f_3, 1, 0, 0, 1);
		}
	}
	else if (iParam0 == 1)
	{
		if (func_313())
		{
			if (Local_14.f_1 == 0)
			{
				func_314(Global_35, "INSULT_MALE_CONV_PART1", -417894478, Local_14.f_3, 1, "JOHN_PLAYER", 2, 1);
			}
			else if (Local_14.f_1 == 1)
			{
				func_314(Global_35, "INSULT_MALE_CONV_PART1", -417894478, Local_14.f_3, 1, "JOHN_PLAYER", 10, 1);
			}
			else if (Local_14.f_1 == 2)
			{
				func_314(Global_35, "INSULT_MALE_CONV_PART1", -417894478, Local_14.f_3, 1, "JOHN_PLAYER", 20, 1);
			}
		}
		else
		{
			func_314(Global_35, "INSULT_MALE_CONV_PART2", -417894478, Local_14.f_3, 1, 0, 7, 1);
		}
	}
}

char* func_179(var uParam0)
{
	return uParam0;
}

bool func_180(var uParam0, bool bParam1, bool bParam2)
{
	if (!bParam1 || func_182(uParam0->f_6))
	{
		if (is_bit_set(*uParam0, 0))
		{
			if (!bParam2)
			{
				return true;
			}
			if (func_315(uParam0->f_6, bParam1))
			{
				return true;
			}
		}
	}
	return false;
}

void func_181(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_316(iParam0, 13))
	{
		func_317(iParam0, 0);
	}
	else
	{
		func_318(iParam0, 0);
	}
	if (func_182(iParam0->f_6))
	{
		if (bParam2)
		{
			func_183(&(iParam0->f_6), 0, 1);
		}
	}
}

bool func_182(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 48)
	{
		return false;
	}
	if ((*Global_1945938)[iParam0]->f_1 & 2 == 0)
	{
		return false;
	}
	return _uiprompt_is_valid((*Global_1945938)[iParam0]->f_3);
}

void func_183(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_182(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_319(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_320(iVar0);
	*uParam0 = 0;
}

void func_184(var uParam0, bool bParam1, int iParam2)
{
	func_321(iParam2);
	if (Global_1572887->f_12 == -1)
	{
		if (!does_entity_exist(Global_35))
		{
			return;
		}
		if (Global_1935630->f_12)
		{
			return;
		}
	}
	else
	{
		if (!Global_1225639->f_11)
		{
			return;
		}
		if (Global_1225639->f_12)
		{
			return;
		}
	}
	if (bParam1)
	{
		uParam0->f_10 = 0;
	}
	uParam0->f_5 = iParam2;
	if (Global_1572887->f_12 == -1)
	{
		uParam0->f_13 = Global_1935630->f_44;
	}
	else
	{
		uParam0->f_13 = func_322(0);
	}
	switch (uParam0->f_6)
	{
		case 0:
			if (*uParam0 & 16 != 0)
			{
				if (!*uParam0 & 33554432 != 0)
				{
					if (uParam0->f_13 == -1504859554)
					{
						if (is_ped_planting_bomb(Global_35))
						{
							func_122(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_323(1))
						{
							func_122(uParam0, 33554432);
						}
					}
				}
				else if (!is_ped_planting_bomb(Global_35) && (!func_323(1) || *uParam0 & 8192 != 0))
				{
					func_123(uParam0, 33554432);
				}
			}
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
	if (!uParam0->f_1 & 1024 != 0)
	{
		if (!does_entity_exist(uParam0->f_14))
		{
			if (func_324(uParam0))
			{
				uParam0->f_15 = func_204();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_204() - uParam0->f_15) > 500)
			{
				if (!is_ped_on_mount(uParam0->f_14))
				{
					uParam0->f_14 = 0;
					uParam0->f_15 = 0;
				}
			}
		}
	}
	uParam0->f_6++;
	if (uParam0->f_6 >= 4)
	{
		uParam0->f_6 = 0;
		uParam0->f_7++;
		if (uParam0->f_7 > 4)
		{
			uParam0->f_7 = 0;
		}
	}
	func_325(uParam0);
}

bool func_185(int iParam0, var uParam1)
{
	if (!_0x1d1b448d719415ab(iParam0))
	{
		return false;
	}
	iVar0 = _0x796eecff0c6d39be(iParam0, 0, 0);
	if (iVar0 == 0)
	{
		return false;
	}
	switch (iVar0)
	{
		case -196899787:
		case 178452260:
		case 869302489:
		case 1589923363:
			iVar1 = _0x822a001bcea5bd81(iParam0, iVar0, 0, 0);
			if (!is_entity_a_ped(iVar1))
			{
				return false;
			}
			iVar2 = get_ped_index_from_entity_index(iVar1);
			if (!is_ped_human(iVar2))
			{
				return false;
			}
			if (decor_exist_on(iVar2, "bIgnoreDamageChecking"))
			{
				return false;
			}
			if (iVar2 == Global_1935630->f_33)
			{
				return false;
			}
			if (iVar2 == Global_1935630->f_32)
			{
				return false;
			}
			if (!func_326(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_327(iParam0, iVar2) <= func_328(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_186(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_329(iParam2, 1, 1, 1, 0))
	{
		func_122(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_330(uParam1, 1);
	func_331();
}

bool func_187(int iParam0, var uParam1)
{
	fVar0 = 85f;
	if (!is_entity_dead(iParam0))
	{
		if (func_332(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_333(uParam1);
			if (func_334(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = get_game_timer();
				}
				iVar2 = (get_game_timer() - uParam1->f_2);
				iVar3 = func_335(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_330(uParam1, 1);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_330(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_188(int iParam0, int iParam1, var uParam2)
{
	if (iParam1 == 0)
	{
		return false;
	}
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	if (is_entity_dead(iParam1))
	{
		return false;
	}
	fVar0 = 85f;
	if (func_336(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_333(uParam2);
		if (func_334(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = get_game_timer();
			}
			if (uParam2->f_2 != 0)
			{
				if (get_game_timer() - uParam2->f_2) > func_335(uParam2)
				{
					func_330(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_189(int iParam0, var uParam1)
{
	if (!get_entity_player_is_free_aiming_at(player_id(), &iVar0))
	{
		return false;
	}
	if (_0x3ee1f7a8c32f24e1(player_id(), &iVar2, false, false))
	{
		if (iVar2 == iVar0)
		{
			return false;
		}
	}
	if (!is_entity_a_ped(iVar0))
	{
		return false;
	}
	if (Global_1935630->f_40 != 0)
	{
		if (_get_rider_of_mount(Global_1935630->f_40, true) == iParam0)
		{
			return false;
		}
	}
	iVar1 = get_ped_index_from_entity_index(iVar0);
	if (func_326(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = get_game_timer();
		}
		else if (get_game_timer() - uParam1->f_3) > func_335(uParam1)
		{
			fVar3 = func_333(uParam1);
			if (uParam1->f_12 < fVar3)
			{
				if (has_entity_clear_los_to_entity(iParam0, Global_35, 17) && has_entity_clear_los_to_entity(iParam0, iVar1, 17))
				{
					if (_0x06087579e7aa85a9(iParam0, Global_35, -1f, fVar3, -1f, -1f) && _0x06087579e7aa85a9(iParam0, iVar1, -1f, fVar3, -1f, -1f))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

int func_190(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_337(bParam1, bParam2, bParam3);
	}
	if (Global_1572887->f_12 != -1)
	{
		if (iParam0 == Global_1225639->f_10)
		{
			if (!Global_1225639->f_11)
			{
				return 0;
			}
		}
		else if (!does_entity_exist(get_player_ped(iParam0)))
		{
			return 0;
		}
	}
	else if (!does_entity_exist(get_player_ped(iParam0)))
	{
		return 0;
	}
	if (_0xad401c63158acbaa(iParam0))
	{
		_0xcbfb4951f2e3934c(iParam0, &Var0);
		if ((bParam3 || Var0.f_10 > 0) || get_player_wanted_level(iParam0) > 0)
		{
			return 1;
		}
	}
	else if (bParam2 && !_0x148e7ac8141c9e64(iParam0) == 1370593166)
	{
		return 0;
	}
	iVar17 = 0;
	while (iVar17 < 24)
	{
		if (_0x532c5fddb986ee5c(iParam0, iVar17, &Var18))
		{
			if (Var18.f_10 && (bParam3 || _0xdaefdfdb2aeece37(Var18, Var18.f_7) > 0))
			{
				return 1;
			}
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (_0x69e181772886f48b(iParam0) || _0xf0fbfb9ab15f7734(iParam0, 0, 0))
		{
			if (bParam3 || _0xe083beda81709891(iParam0) > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_191(var uParam0, float fParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_204();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_192(var uParam0, int iParam1, var uParam2)
{
	if (!is_entity_dead(iParam1))
	{
		if (!network_is_in_session())
		{
			fVar0 = func_338(uParam2);
			if (!is_weapon_valid(Global_1935630->f_46) || Global_1935630->f_46 == -1569615261)
			{
				_0xd355e2f1bb41087e(iParam1, fVar0);
			}
			else if (is_weapon_valid(Global_1935630->f_46) && _0xea522f991e120d45(Global_1935630->f_46))
			{
				_0xd355e2f1bb41087e(iParam1, 5f);
			}
			else
			{
				_0xd355e2f1bb41087e(iParam1, fVar0);
			}
		}
		if ((!is_weapon_valid(Global_1935630->f_46) || Global_1935630->f_46 == -1569615261) || (is_weapon_valid(Global_1935630->f_46) && _0x5809dbca0a37c82b(Global_1935630->f_46)))
		{
			fVar2 = 3f;
			iVar1 = 3000;
		}
		else
		{
			fVar2 = 1f;
			iVar1 = 1000;
		}
		if (_0x9c81338b2e62ce0a(player_id(), iParam1, iVar1) && _0x285d36c5c72b0569(uParam0) <= fVar2)
		{
			if (func_200(uParam2, iParam1))
			{
				func_330(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_193(var uParam0, int iParam1, var uParam2)
{
	if (uParam2->f_12 < IntToFloat(func_339(uParam2)))
	{
		if ((is_weapon_valid(Global_1935630->f_46) && !_0x5809dbca0a37c82b(Global_1935630->f_46)) || get_current_ped_vehicle_weapon(Global_35, &uVar0))
		{
			if (func_200(uParam2, iParam1))
			{
				if (_0x285d36c5c72b0569(uParam0) <= 1f)
				{
					func_330(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_194(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vVar0 = { get_entity_coords(iParam1, false, true) };
	iVar3 = func_340(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, uParam2->f_22))
				{
					func_330(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (is_shocking_event_in_sphere(956330317, vVar0, uParam2->f_27))
				{
					func_330(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_26, &vVar4, 0, 0);
					if (func_341(iParam1, vVar0, vVar4))
					{
						func_330(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	else
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, uParam2->f_22))
				{
					func_330(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_26, &vVar7, 0, 0);
					if (func_341(iParam1, vVar0, vVar7))
					{
						func_330(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_195(int iParam0, var uParam1)
{
	vVar9 = { get_entity_coords(iParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_326(iParam0, uParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_342(&(Global_1935630->f_34[iVar0]));
			fVar1 = vdist(get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_343(&(Global_1935630->f_34[iVar0])))
			{
				if (fVar1 < 35f)
				{
					if ((decor_exist_on(&(Global_1935630->f_34[iVar0]), "HorseTeamA") && decor_exist_on(iParam0, "HorseOwnerTeamA")) || (decor_exist_on(&(Global_1935630->f_34[iVar0]), "HorseTeamB") && decor_exist_on(iParam0, "HorseOwnerTeamB")))
					{
						*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
						*vVar2[1] = { vVar9 };
						uParam1->f_10 = iParam0;
						return true;
					}
				}
			}
			if (func_344(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_345(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_346(uParam1, iParam0, fVar1, iVar0))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_196(int iParam0, var uParam1)
{
	if (!_0x1d1b448d719415ab(*iParam0))
	{
		return false;
	}
	iVar0 = _0x796eecff0c6d39be(*iParam0, 0, 0);
	switch (iVar0)
	{
		case -1695849405:
		case 2044016570:
			iVar1 = _0x822a001bcea5bd81(*iParam0, iVar0, 0, 0);
			iVar2 = _0x38497f139981c5c9(*iParam0, iVar0, 0, 0);
			vVar5 = { get_entity_coords(iVar1, false, false) };
			vVar8 = { get_entity_coords(iVar2, false, false) };
			_0x1a5c5d350068a673(*iParam0, 0);
			return true;
	}
	return false;
}

bool func_197(var uParam0, int iParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_204();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_198(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = player_ped_id();
	if (!bParam3)
	{
		if (has_entity_been_damaged_by_any_ped(iParam0) || has_entity_been_damaged_by_any_vehicle(iParam0))
		{
			if (has_entity_been_damaged_by_entity(iParam0, iVar0, 1, 1))
			{
				return 1;
			}
			iVar1 = get_players_last_vehicle();
			if (!is_entity_dead(iVar1))
			{
				if (has_entity_been_damaged_by_entity(iParam0, iVar1, 1, 1))
				{
					return 1;
				}
			}
			if (is_ped_on_mount(iVar0))
			{
				if (!is_entity_dead(get_mount(iVar0)))
				{
					if (has_entity_been_damaged_by_entity(iParam0, get_mount(iVar0), 1, 1))
					{
						return 1;
					}
				}
			}
			else if (does_entity_exist(iParam1))
			{
				if (!is_entity_dead(iParam1))
				{
					if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
					{
						return 1;
					}
				}
			}
		}
	}
	else if (!bParam2)
	{
		if (func_347(iVar0, &iVar2))
		{
			if ((is_ped_ragdoll(iParam0) || _0x947e43f544b6ab34(iParam0, player_id(), 10, 1000)) || (!bParam4 && is_entity_touching_entity(iVar2, iParam0)))
			{
				return 1;
			}
		}
	}
	if (!bParam2)
	{
		if (_0x29fce825613fefca(iParam0, 400))
		{
			return 1;
		}
	}
	if (func_348(iVar0, iParam0))
	{
		return 1;
	}
	if (_0xd0b7aeb56229d317(player_ped_id()) == iParam0)
	{
		if (_0x0e99e3bf11bb6367(player_ped_id()))
		{
			return 1;
		}
	}
	if (!is_entity_dead(iParam0))
	{
		if (is_ped_being_jacked(iParam0))
		{
			if (get_peds_jacker(iParam0) == iVar0)
			{
				return 1;
			}
		}
	}
	if (is_ped_performing_melee_action(iVar0, 8, 0))
	{
		if (get_ped_config_flag(iParam0, 9, true) || is_ped_being_stealth_killed(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_199(var uParam0, int iParam1)
{
	if (!decor_exist_on(iParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = decor_get_int(iParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (decor_set_int(iParam1, "iDamageFrame", uParam0->f_5))
		{
		}
	}
	else if (uParam0->f_5 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

bool func_200(var uParam0, int iParam1)
{
	if (func_349(uParam0))
	{
		return true;
	}
	if (_0x29fce825613fefca(iParam1, 400))
	{
		return true;
	}
	if (is_ped_dead_or_dying(iParam1, true))
	{
		return false;
	}
	if ((is_ped_performing_melee_action(Global_35, 8, 0) || get_ped_config_flag(iParam1, 9, true)) || is_ped_being_stealth_killed(iParam1))
	{
		return false;
	}
	if (is_ped_performing_melee_action(Global_35, 16, 0) || get_ped_config_flag(iParam1, 10, true))
	{
		return false;
	}
	if (_get_lassoed_entity(Global_35) != 0)
	{
		return true;
	}
	if (!is_ped_ragdoll(iParam1))
	{
		return true;
	}
	return false;
}

bool func_201(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_350(iParam0, iParam1, 1, 1) < 4f)
		{
			if (is_entity_touching_entity(iParam0, iParam1) && is_ped_ragdoll(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_202()
{
}

bool func_203(var uParam0, int iParam1)
{
	iVar0 = get_vehicle_ped_is_using(Global_35);
	if (iVar0 != 0 && !is_this_model_a_train(get_entity_model(iVar0)))
	{
		vVar1 = { get_entity_coords(iParam1, false, false) };
		if (func_351(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_204();
			return true;
		}
		else if (_0xa19447d83294e29f(iVar0, &iVar5, &iVar4))
		{
			if (iVar5 <= 0)
			{
				return false;
			}
			else if (iVar4 == iVar5)
			{
				iVar6 = 0;
				while (iVar6 < iVar4)
				{
					iVar7 = _get_ped_in_draft_seat(iVar0, iVar6);
					if (does_entity_exist(iVar7))
					{
						if (func_66(iVar7, vVar1, 1) < 3f)
						{
							if (is_entity_touching_entity(iVar7, iParam1))
							{
								uParam0->f_9 = func_204();
								return true;
							}
						}
					}
					iVar6++;
				}
			}
		}
	}
	return false;
}

int func_204()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

bool func_205()
{
	if (Global_1935630->f_42 == 0)
	{
		return false;
	}
	if (Global_1935630->f_42 == Global_1935630->f_40)
	{
		return false;
	}
	if (Global_1935630->f_43 <= 0)
	{
		return false;
	}
	if ((func_204() - Global_1935630->f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_206(var uParam0, int iParam1)
{
	if (!does_entity_exist(uParam0->f_14))
	{
		return false;
	}
	if (!is_ped_human(iParam1))
	{
		return false;
	}
	fVar0 = func_328(uParam0);
	if (uParam0->f_12 > func_352(uParam0) && uParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_353(iParam1);
	iVar1 = func_354(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((_0x06087579e7aa85a9(iParam1, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, Global_35, 17)) && _0x7f9b9791d4cb71f6(iParam1, Global_35, 1, 0) == 1)) || ((_0x06087579e7aa85a9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, uParam0->f_14, 17)) && _0x7f9b9791d4cb71f6(iParam1, uParam0->f_14, 1, 0) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_207(int iParam0, int iParam1, var uParam2)
{
	if (uParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return func_355(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

bool func_208(int iParam0, var uParam1)
{
	if (*uParam1 & 67108864 != 0)
	{
		return true;
	}
	if (Global_1935630->f_24)
	{
		return true;
	}
	if (*uParam1 & 33554432 != 0)
	{
		if (func_356(iParam0, uParam1, 1))
		{
			return true;
		}
		if ((_0x06087579e7aa85a9(iParam0, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam0, Global_35, 17)) && _0x7f9b9791d4cb71f6(iParam0, Global_35, 1, 0) == 1)
		{
			return true;
		}
	}
	iVar0 = get_jack_target(Global_35);
	if (does_entity_exist(iVar0) && !does_entity_belong_to_this_script(iVar0, true))
	{
		if (_0x06087579e7aa85a9(iParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return true;
		}
	}
	if (!_0x1d1b448d719415ab(iParam0))
	{
		return false;
	}
	iVar1 = _0x796eecff0c6d39be(iParam0, 0, 0);
	if (iVar1 == 0)
	{
		return false;
	}
	switch (iVar1)
	{
		case -2027383723:
		case -870494873:
		case 73464052:
		case 1201762715:
			iVar2 = _0x822a001bcea5bd81(iParam0, iVar1, 0, 0);
			iVar3 = _0x38497f139981c5c9(iParam0, iVar1, 0, 0);
			if (!is_entity_a_ped(iVar2) || !is_entity_a_ped(iVar3))
			{
				_0x1a5c5d350068a673(iParam0, 0);
				return false;
			}
			iVar4 = get_ped_index_from_entity_index(iVar2);
			iVar5 = get_ped_index_from_entity_index(iVar3);
			if (iVar4 != Global_35)
			{
				_0x1a5c5d350068a673(iParam0, 0);
				return false;
			}
			if (_0x88ad6cc10d8d35b2(iVar5))
			{
				_0x1a5c5d350068a673(iParam0, 0);
				return false;
			}
			return true;
		case -1601932249:
			iVar2 = _0x822a001bcea5bd81(iParam0, iVar1, 0, 0);
			iVar3 = _0x38497f139981c5c9(iParam0, iVar1, 0, 0);
			if (!is_entity_a_ped(iVar2) || !is_entity_a_ped(iVar3))
			{
				_0x1a5c5d350068a673(iParam0, 0);
				return false;
			}
			iVar4 = get_ped_index_from_entity_index(iVar2);
			iVar5 = get_ped_index_from_entity_index(iVar3);
			if (_0x06087579e7aa85a9(iParam0, iVar4, -1f, -1f, -1f, -1f) && _0x06087579e7aa85a9(iParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (has_entity_clear_los_to_entity(iParam0, iVar4, 17) && has_entity_clear_los_to_entity(iParam0, Global_35, 17))
				{
					if (!func_357(uParam1, iParam0))
					{
						if (func_66(iVar4, Global_36, 1) < 7f)
						{
							return true;
						}
					}
				}
			}
			break;
	}
	return false;
}

bool func_209(int iParam0, var uParam1)
{
	if (!func_358(0))
	{
		return false;
	}
	if (is_ped_facing_ped(iParam0, Global_35, 90f))
	{
		if (has_entity_clear_los_to_entity(iParam0, Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

bool func_210(var uParam0, int iParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_204();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_211(int iParam0, var uParam1)
{
	return _0xe33f98bd76490abc(*iParam0, player_id(), 0);
}

int func_212(int iParam0, var uParam1)
{
	if (!is_ped_human(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_204();
	}
	else if (func_204() - uParam1->f_4) > func_359(uParam1)
	{
		return func_360(iParam0, uParam1, 0, -1082130432);
	}
	return 0;
}

bool func_213(var uParam0, int iParam1)
{
	iVar0 = get_ped_source_of_death(iParam1);
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (decor_exist_on(iParam1, "bIgnoreDamageChecking"))
	{
		return false;
	}
	iVar1 = get_ped_index_from_entity_index(iVar0);
	if (Global_35 == iVar1 || Global_1935630->f_40 == iVar1)
	{
		return true;
	}
	return false;
}

Vector3 func_214(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), false, false);
}

int func_215()
{
	return Global_1572887->f_12;
}

bool func_216(int iParam0)
{
	iVar0 = func_361(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_217(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_218(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_219(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	*uParam0 = create_itemset(true);
	iVar5 = _0x886171a12f400b89(iParam4, *uParam0, 1);
	if (iVar5 > 0)
	{
		iVar4 = 0;
		while (iVar4 < iVar5)
		{
			iVar0 = get_indexed_item_in_itemset(iVar4, *uParam0);
			iVar1 = iVar0;
			if ((does_entity_exist(iVar1) && iVar3 < *uParam1) && iVar3 < iParam3)
			{
				if (func_362(iVar1, bParam5, bParam6, 1, 0, 0) && !decor_exist_on(iVar1, "bIgnoreThisPed"))
				{
					if (!func_363(iVar1, uParam2))
					{
						bVar2 = false;
						if (iParam7 != -1)
						{
							iVar6 = 0;
							iVar6 = 0;
							while (iVar6 < get_num_models_in_population_set(iParam7))
							{
								if (is_ped_model(iVar1, get_ped_model_name_in_population_set(iParam7, iVar6)))
								{
									bVar2 = true;
								}
								else
								{
									iVar6++;
								}
							}
						}
						else
						{
							bVar2 = true;
						}
						if (bVar2)
						{
							(*uParam1)[iVar3] = iVar1;
							iVar3++;
						}
					}
				}
			}
			iVar4++;
		}
	}
	if (iVar3 >= (iParam3 - 1) && iVar5 >= iParam3)
	{
	}
	destroy_itemset(*uParam0);
	return iVar3;
}

void func_220(int iParam0, var uParam1, int iParam2, int iParam3, float fParam4)
{
	if (is_entity_dead(iParam0) || Global_1935630->f_12)
	{
		return;
	}
	sVar0 = func_364(iParam3);
	if (fParam4 == 0f)
	{
		if (func_98(iParam0, Global_35, 15f, 1))
		{
			if (!func_103(*uParam1, iParam2))
			{
				if (_0x6339c1ea3979b5f7(sVar0, "special_ped_scenes"))
				{
					func_106(uParam1, iParam2);
				}
			}
		}
		else if (func_103(*uParam1, iParam2))
		{
			_0x9428447ded71fc7e("special_ped_scenes");
			func_141(uParam1, iParam2);
		}
	}
	else if (fParam4 <= 15f)
	{
		if (!func_103(*uParam1, iParam2))
		{
			if (_0x6339c1ea3979b5f7(sVar0, "special_ped_scenes"))
			{
				func_106(uParam1, iParam2);
			}
		}
	}
	else if (func_103(*uParam1, iParam2))
	{
		_0x9428447ded71fc7e("special_ped_scenes");
		func_141(uParam1, iParam2);
	}
}

int func_221()
{
	if (iVar686 >= 2)
	{
		return 1;
	}
	if (iVar686 == 0)
	{
		if (func_365())
		{
			Var0 = { func_366(1) };
			vLocal_689 = { Var0.f_1 };
			set_ped_config_flag(iVar681, 130, false);
			task_start_scenario_at_position(iVar681, Var0, Var0.f_1, Var0.f_4, floor((Var0.f_5 * 1000f)), true, false, 0, -1f, false);
			func_160(&uLocal_685);
			uLocal_688 = iVar686 + 1;
		}
	}
	else if (func_58(&uLocal_685) && func_59(&uLocal_685) >= 5f)
	{
		if (func_367())
		{
			func_72(&uLocal_685);
			Var6 = { func_366(0) };
			vLocal_692 = { Var6.f_1 };
			set_ped_config_flag(iVar682, 130, false);
			task_start_scenario_at_position(iVar682, Var6, Var6.f_1, Var6.f_4, floor((Var6.f_5 * 1000f)), true, false, 0, -1f, false);
			uLocal_688 = iVar686 + 1;
		}
	}
	return 0;
}

void func_222()
{
	if (does_entity_exist(iVar681))
	{
		if (((func_368(iVar681, vLocal_689, 9f, 1, 1) && !_0xbedbe39b5fd98fd6(iVar681)) && !_0x77525bbf433f2cd6(iVar681)) && func_312(&(Local_14.f_3), &uLocal_699, 2.5f, 2.5f))
		{
			clear_ped_tasks(iVar681, 1, 0);
			_task_move_in_traffic(iVar681, -1082130432, 0, 0);
			set_ped_keep_task(iVar681, true);
			set_ped_as_no_longer_needed(&iLocal_683);
		}
		else if (((!func_170(iVar681, -1098463898) || _0xbedbe39b5fd98fd6(iVar681)) || _0x77525bbf433f2cd6(iVar681)) || func_368(iVar681, vLocal_689, 1.5f, 1, 1))
		{
			set_ped_keep_task(iVar681, true);
			set_ped_as_no_longer_needed(&iLocal_683);
		}
	}
	if (does_entity_exist(iVar682))
	{
		if (((func_368(iVar682, vLocal_692, 9f, 1, 1) && !_0xbedbe39b5fd98fd6(iVar682)) && !_0x77525bbf433f2cd6(iVar682)) && func_312(&(Local_14.f_3), &uLocal_699, 2.5f, 2.5f))
		{
			clear_ped_tasks(iVar682, 1, 0);
			_task_move_in_traffic(iVar682, -1082130432, 0, 0);
			set_ped_keep_task(iVar682, true);
			set_ped_as_no_longer_needed(&iLocal_684);
		}
		else if (((!func_170(iVar682, -1098463898) || _0xbedbe39b5fd98fd6(iVar682)) || _0x77525bbf433f2cd6(iVar682)) || func_368(iVar682, vLocal_692, 1.5f, 1, 1))
		{
			set_ped_keep_task(iVar682, true);
			set_ped_as_no_longer_needed(&iLocal_684);
		}
	}
}

int func_223(int iParam0)
{
	switch (iParam0->f_205.f_385)
	{
		case 1:
			return iParam0->f_205.f_217.f_1;
		case 2:
			return iParam0->f_205.f_273.f_1;
		case 3:
			return iParam0->f_205.f_301.f_1;
		case 4:
			return iParam0->f_205.f_329.f_1;
	}
	return -1;
}

bool func_224(var uParam0)
{
	if (((((func_55(*uParam0, 2) || func_55(*uParam0, 4)) || func_55(*uParam0, 16)) || func_55(*uParam0, 128)) || func_55(*uParam0, 1024)) || func_55(*uParam0, 2048))
	{
		return true;
	}
	return false;
}

bool func_225(var uParam0, var uParam1, int iParam2)
{
	switch (uParam0->f_386)
	{
		case 0:
			func_292(uParam0, func_369(uParam0, uParam1), 1);
			break;
		case 1:
			func_292(uParam0, func_370(uParam0, uParam1), 1);
			break;
		case 2:
			func_292(uParam0, func_371(uParam0, uParam1), 1);
			break;
		case 3:
			if (func_372(uParam0, uParam1))
			{
				func_292(uParam0, 4, 1);
			}
			break;
		case 4:
			if (!func_373(uParam0, 2))
			{
				Stack.Push(((iParam2 == 5 || (func_16(uParam0, 2) && iParam2 != 4)) || ((uParam0->f_389 && func_16(uParam0, 1)) && iParam2 != 2)));
				Stack.Push(uParam1);
				Call_Loc(uParam1->f_23);
				if (StackVal || StackVal)
				{
					func_374(uParam0, 2);
				}
			}
			else
			{
				func_292(uParam0, 5, 1);
			}
			break;
		case 5:
			if (!func_373(uParam0, 4))
			{
				if (func_375(uParam0, uParam1, iParam2))
				{
					func_374(uParam0, 4);
				}
			}
			if (!func_373(uParam0, 8))
			{
				Stack.Push(((iParam2 == 5 || (func_16(uParam0, 2) && iParam2 != 4)) || ((uParam0->f_389 && func_16(uParam0, 1)) && iParam2 != 2)));
				Stack.Push(uParam1);
				Call_Loc(uParam1->f_24);
				if (StackVal || StackVal)
				{
					func_374(uParam0, 8);
				}
			}
			if (func_373(uParam0, 4) && func_373(uParam0, 8))
			{
				func_292(uParam0, 6, 1);
			}
			break;
		case 6:
			if (!func_373(uParam0, 16))
			{
				if (func_376(uParam0, uParam1))
				{
					func_374(uParam0, 16);
				}
			}
			if (!func_373(uParam0, 32))
			{
				Stack.Push(((iParam2 == 5 || (func_16(uParam0, 2) && iParam2 != 4)) || ((uParam0->f_389 && func_16(uParam0, 1)) && iParam2 != 2)));
				Stack.Push(uParam1);
				Call_Loc(uParam1->f_25);
				if (StackVal || StackVal)
				{
					func_374(uParam0, 32);
				}
			}
			if (func_373(uParam0, 16) && func_373(uParam0, 32))
			{
				func_292(uParam0, 0, 1);
				return true;
			}
			break;
	}
	return false;
}

bool func_226(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 6)
	{
		return false;
	}
	return true;
}

void func_227(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (_does_anim_scene_exist(uParam0[iVar0]) && _is_anim_scene_started(uParam0[iVar0], false))
		{
			abort_anim_scene(uParam0[iVar0], false);
		}
		iVar0++;
	}
}

void func_228(var uParam0, char* sParam1, vector3 vParam2, vector3 vParam5, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	if (is_string_null_or_empty(sParam1))
	{
		uParam0->f_35 = 1;
		return;
	}
	uParam0->f_1 = sParam1;
	if (!is_string_null(sParam8))
	{
		uParam0->f_2 = sParam8;
	}
	uParam0->f_19 = iParam10;
	uParam0->f_20 = iParam11;
	uParam0->f_21 = iParam12;
	uParam0->f_22 = iParam13;
	uParam0->f_25 = { vParam2 };
	uParam0->f_28 = { vParam5 };
	uParam0->f_31 = iParam9;
	uParam0->f_35 = 0;
}

int func_229()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_230(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || shift_left(iParam0 & 1023, 5)) || shift_left(iParam1 & 16383, 15));
}

int func_231(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_12106[iParam0]);
	}
	if (iParam0 < 0 || iParam0 >= 20001)
	{
		return 0;
	}
	return &(Global_1058888->f_498[iParam0]);
}

int func_232(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_377(iParam2))
	{
		return -1;
	}
	if (iParam0 < 0 || iParam0 > 511)
	{
		return -1;
	}
	if (iParam1 < 0 || iParam1 > 255)
	{
		return -1;
	}
	if (iParam3 < 0 || iParam3 > func_229())
	{
		return -1;
	}
	iVar0 = func_230(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_378(iVar1, 0);
	func_379(iVar1, 0);
	func_380(iVar1, 0);
	func_381(iVar1, 0);
	func_382(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_383(iVar1, iParam4);
	}
	return iVar1;
}

int func_233(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = -1;
	if (iVar0 >= 0 && iVar0 < 6)
	{
		iVar1 = iVar0;
	}
	return iVar1;
}

int func_234(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = -1;
	if (iVar0 >= 0 && iVar0 < 60)
	{
		iVar1 = iVar0;
	}
	return iVar1;
}

void func_235(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8, char* sParam9, int iParam10, char* sParam11, char* sParam12, int iParam13, int iParam14)
{
	func_25(uParam0);
	uParam0->f_12 = sParam1;
	*uParam0 = iParam2;
	uParam0->f_1 = iParam3;
	uParam0->f_2 = iParam4;
	uParam0->f_2.f_1 = iParam5;
	uParam0->f_13 = iParam6;
	uParam0->f_14 = sParam7;
	uParam0->f_15 = iParam8;
	uParam0->f_16 = sParam9;
	uParam0->f_17 = iParam10;
	if (is_string_null_or_empty(sParam11))
	{
		uParam0->f_18 = "s_base";
	}
	else
	{
		uParam0->f_18 = sParam11;
	}
	if (is_string_null_or_empty(sParam12))
	{
		uParam0->f_19 = "s_base_end";
	}
	else
	{
		uParam0->f_19 = sParam12;
	}
	uParam0->f_20 = 0;
	uParam0->f_21 = iParam13;
	uParam0->f_22 = iParam14;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
}

int func_236(var uParam0)
{
	if (func_373(&(Local_14.f_205), 4))
	{
		func_62(&(Local_14.f_193), 32);
		return 1;
	}
	if (!is_entity_in_volume(Global_35, iVar640, true, 0))
	{
		func_17(&(Local_14.f_205), 1, 0);
		func_61(&(Local_14.f_193), 2048);
		func_242();
		return 1;
	}
	return 0;
}

void func_237(var uParam0, int iParam1)
{
	uParam0->f_24 = iParam1;
}

int func_238(var uParam0)
{
	if (!func_55(Local_14.f_193, 2048))
	{
		func_63(&Local_14, 1);
	}
	if (!func_55(Local_14.f_193, 2048))
	{
		func_61(&(Local_14.f_193), 32);
		func_61(&(Local_14.f_193), 65536);
	}
	if (!func_58(&uLocal_650))
	{
		func_160(&uLocal_650);
		return 0;
	}
	if (!func_55(Local_14.f_193, 2048))
	{
		if (!is_entity_in_volume(Global_35, iVar640, true, 0))
		{
			func_384(uParam0, func_172(1), func_173(18));
			func_61(&(Local_14.f_193), 2048);
			func_62(&(Local_14.f_193), 32);
			iLocal_676 = 1;
			func_242();
			return 1;
		}
		else if (func_55(Local_14.f_193, 64))
		{
			func_384(uParam0, func_172(1), func_173(7));
			func_61(&(Local_14.f_193), 2048);
			func_242();
			if (func_313())
			{
				func_314(Global_35, "GOT_MY_EYE_ON_YOU_POS", -417894478, Local_14.f_3, 1, "JOHN_PLAYER", 3, 1);
			}
			else
			{
				func_314(Global_35, "PLAYER_SURRENDER_AGAIN_NEAR", -417894478, Local_14.f_3, 1, "ARTHUR", 4, 1);
			}
			func_62(&(Local_14.f_193), 32);
			iLocal_676 = 1;
		}
		else if (func_55(Local_14.f_193, 128))
		{
			func_384(uParam0, func_172(3), func_173(35));
			func_61(&(Local_14.f_193), 2048);
			func_242();
			if (func_313())
			{
				func_314(Global_35, "GOT_MY_EYE_ON_YOU_NEG", -417894478, Local_14.f_3, 1, "JOHN_PLAYER", 2, 1);
			}
			else
			{
				func_314(Global_35, "BUMP_MALE", -417894478, Local_14.f_3, 1, "ARTHUR", 7, 1);
			}
			func_62(&(Local_14.f_193), 32);
			iLocal_676 = 1;
		}
		else if (func_59(&uLocal_650) >= 8f)
		{
			func_62(&(Local_14.f_193), 32);
			iLocal_676 = 1;
			func_384(uParam0, func_172(3), func_173(35));
			func_61(&(Local_14.f_193), 2048);
			func_242();
			if (func_313())
			{
				func_314(Global_35, "GOT_MY_EYE_ON_YOU_NEG", -417894478, Local_14.f_3, 1, "JOHN_PLAYER", 2, 1);
			}
			else
			{
				func_314(Global_35, "BUMP_MALE", -417894478, Local_14.f_3, 1, "ARTHUR", 7, 1);
			}
		}
	}
	else if (!is_scripted_speech_playing(Global_35))
	{
		return 1;
	}
	return 0;
}

void func_239(var uParam0, int iParam1)
{
	uParam0->f_25 = iParam1;
}

void func_240()
{
	if ((iVar671 == 0 && does_entity_exist(Local_14.f_3)) && !is_entity_dead(Local_14.f_3))
	{
		iLocal_673 = add_shocking_event_for_entity(-1130398329, Local_14.f_3, 0f, 30f, 30f, -1f, -1f, 180f, false, false, 4, -1);
	}
}

int func_241(var uParam0)
{
	if (func_385())
	{
		func_384(uParam0, func_172(1), func_173(11));
		return 1;
	}
	if (func_386(uParam0, 1))
	{
		return 1;
	}
	if (!is_entity_in_volume(Global_35, iVar642, true, 0))
	{
		func_384(uParam0, func_172(1), func_173(9));
	}
	return 1;
}

void func_242()
{
	if (!func_55(Local_14.f_193, 131072))
	{
		if (Local_14.f_1 == 0)
		{
			func_387(22, 1);
		}
		else if (Local_14.f_1 == 1)
		{
			func_387(22, 2);
		}
		else
		{
			func_387(22, 12);
		}
		func_61(&(Local_14.f_193), 131072);
		func_388(22);
	}
}

int func_243(var uParam0)
{
	if (func_16(&(Local_14.f_205), 4))
	{
		return 1;
	}
	if (((Local_14.f_622 && func_389(&(Local_14.f_601))) && !func_224(&(Local_14.f_601))) && !func_16(&(Local_14.f_205), 4))
	{
		func_61(&(Local_14.f_193), 8192);
		func_384(uParam0, func_172(-1), func_173(-1));
		func_390(-1);
		return 1;
	}
	if (func_385())
	{
		func_384(uParam0, func_172(1), func_173(11));
		func_390(11);
		return 1;
	}
	if (!func_55(Local_14.f_193, 8) && !(func_54(&Local_14) <= 2.2f && is_entity_in_volume(Global_35, iVar640, true, 0)))
	{
		func_391(iVar651, &iVar0, &iVar1);
		if (iVar0 == -1 || iVar1 == -1)
		{
			func_242();
			func_61(&(Local_14.f_193), 8);
		}
		else if (is_entity_in_volume(Global_35, iVar642, true, 0) && !func_57(Global_35, 1))
		{
			func_384(uParam0, func_172(iVar0), func_173(iVar1));
			func_390(iVar1);
			return 1;
		}
	}
	if (func_55(Local_14.f_193, 2) && func_55(Local_14.f_193, 8))
	{
		if (!func_58(&uLocal_662))
		{
			func_160(&uLocal_662);
		}
		if (func_392(&uLocal_662, 56f))
		{
			func_61(&(Local_14.f_193), 8192);
			func_384(uParam0, func_172(-1), func_173(-1));
			func_390(-1);
			func_242();
			return 1;
		}
	}
	if (func_386(uParam0, 0))
	{
		func_390(func_234(uParam0->f_2.f_1));
		return 1;
	}
	if (!func_55(Local_14.f_193, 8) && func_54(&Local_14) > 2.2f)
	{
		iVar2 = get_random_int_in_range(1, 100);
		if ((iVar2 >= 35 && is_entity_in_volume(Global_35, iVar643, true, 0)) && !func_57(Global_35, 1))
		{
			iVar2 = func_393(0, 4, iVar645);
			iLocal_648 = iVar2;
			switch (iVar2)
			{
				case 0:
					func_384(uParam0, func_172(0), func_173(1));
					func_390(1);
					return 1;
				case 1:
					func_384(uParam0, func_172(0), func_173(2));
					func_390(2);
					return 1;
				case 2:
					func_384(uParam0, func_172(0), func_173(3));
					func_390(3);
					return 1;
				case 3:
					func_384(uParam0, func_172(2), func_173(25));
					func_390(25);
					return 1;
				case 4:
					func_384(uParam0, func_172(2), func_173(26));
					func_390(26);
					return 1;
			}
		}
	}
	return 0;
}

int func_244(var uParam0)
{
	func_394(1);
	func_72(&uLocal_669);
	func_395();
	return 1;
}

void func_245(var uParam0, int iParam1)
{
	uParam0->f_23 = iParam1;
}

int func_246(var uParam0)
{
	if (!func_58(&uLocal_669))
	{
		func_160(&uLocal_669);
	}
	if (is_scripted_speech_playing(Local_14.f_3) || is_scripted_speech_playing(Global_35))
	{
		return 0;
	}
	if ((func_396(&Local_14) && (func_59(&uLocal_669) >= fVar669 && func_397())) || func_398(&Local_14))
	{
		func_72(&uLocal_669);
		return 1;
	}
	return 0;
}

int func_247(var uParam0)
{
	if (!bVar672 && !is_scripted_speech_playing(Local_14.f_3))
	{
		iLocal_674 = 1;
		func_399();
		iLocal_675 = 1;
	}
	else if (bVar672 && !is_scripted_speech_playing(Local_14.f_3))
	{
		iLocal_675 = 0;
		return 1;
	}
	return 0;
}

int func_248(var uParam0)
{
	if (Local_14.f_205.f_386 == 5)
	{
		if (func_373(&(Local_14.f_205), 4))
		{
			return 1;
		}
	}
	if (!is_entity_in_volume(Global_35, iVar640, true, 0))
	{
		func_17(&(Local_14.f_205), 1, 0);
		func_61(&(Local_14.f_193), 2048);
		func_242();
		return 1;
	}
	return 0;
}

int func_249(var uParam0)
{
	if (func_373(&(Local_14.f_205), 4))
	{
		func_62(&(Local_14.f_193), 32);
		return 1;
	}
	return 0;
}

int func_250(var uParam0)
{
	if (!func_55(Local_14.f_193, 2048))
	{
		func_63(&Local_14, 1);
		func_61(&(Local_14.f_193), 32);
		func_61(&(Local_14.f_193), 65536);
	}
	if (!func_58(&uLocal_650))
	{
		func_160(&uLocal_650);
		return 0;
	}
	if (!is_entity_in_volume(Global_35, iVar640, true, 0))
	{
		func_384(uParam0, func_172(1), func_173(18));
		func_61(&(Local_14.f_193), 2048);
		func_62(&(Local_14.f_193), 32);
		iLocal_676 = 1;
		func_242();
		return 1;
	}
	else if (func_55(Local_14.f_193, 64))
	{
		func_384(uParam0, func_172(1), func_173(16));
		func_61(&(Local_14.f_193), 2048);
		func_62(&(Local_14.f_193), 32);
		iLocal_676 = 1;
		func_242();
		return 1;
	}
	else if (func_55(Local_14.f_193, 128))
	{
		func_384(uParam0, func_172(1), func_173(17));
		func_61(&(Local_14.f_193), 2048);
		func_62(&(Local_14.f_193), 32);
		iLocal_676 = 1;
		func_242();
		return 1;
	}
	else if (func_59(&uLocal_650) >= 8f)
	{
		func_62(&(Local_14.f_193), 32);
		iLocal_676 = 1;
		func_384(uParam0, func_172(1), func_173(16));
		func_61(&(Local_14.f_193), 2048);
		func_242();
		return 1;
	}
	return 0;
}

int func_251(var uParam0)
{
	iVar0 = get_random_int_in_range(0, 5);
	switch (iVar0)
	{
		case 0:
			func_384(uParam0, func_172(5), func_173(51));
			break;
		case 1:
			func_384(uParam0, func_172(5), func_173(52));
			break;
		case 2:
			func_384(uParam0, func_172(5), func_173(53));
			break;
		case 3:
			func_384(uParam0, func_172(5), func_173(54));
			break;
		case 4:
			func_384(uParam0, func_172(5), func_173(55));
			break;
	}
	return 1;
}

int func_252(var uParam0)
{
	if (iVar652 >= 3)
	{
		return func_251(uParam0);
	}
	return 1;
}

int func_253(var uParam0)
{
	func_61(&(Local_14.f_193), 512);
	func_384(uParam0, func_172(-1), func_173(-1));
	return 1;
}

int func_254(var uParam0)
{
	if (func_55(Local_14.f_193, 33554432))
	{
		func_243(uParam0);
		func_62(&(Local_14.f_193), 33554432);
	}
	return 1;
}

bool func_255(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 100)
	{
		return false;
	}
	return true;
}

void func_256(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_10 = iParam1;
	uParam0->f_10.f_1 = iParam2;
}

int func_257()
{
	iVar0 = 1200;
	iVar19 = 0;
	while (iVar19 < 24)
	{
		if (_0xb527099d1e1eed49(player_id(), iVar19, &Var2))
		{
			if (func_400(115, 1, 1) != Var2.f_7)
			{
			}
			else
			{
				if (Var2.f_8 < iVar0)
				{
					if (_0xdaefdfdb2aeece37(Var2, 0) == 2)
					{
						iVar1 += 3;
					}
					else if (_0xdaefdfdb2aeece37(Var2, 0) == 1)
					{
						iVar1 += 2;
					}
					else
					{
						iVar1++;
					}
				}
				Jump @115; //curOff = 108
				iVar19 = 24;
			}
			iVar19++;
			if (iVar1 >= 6)
			{
				return 3;
			}
			else if (iVar1 >= 4)
			{
				return 2;
			}
			else if (iVar1 >= 2)
			{
				return 1;
			}
			return 0;
		}
	}
}

int func_258(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			iVar1 = func_97();
			iVar2 = func_146(iVar1);
			if (iVar2 <= 5 || iVar2 >= 22)
			{
				func_259(uParam0, func_172(4), func_173(42));
			}
			else
			{
				iVar0 = get_random_int_in_range(0, 3);
				switch (iVar0)
				{
					case 0:
						func_259(uParam0, func_172(4), func_173(39));
						break;
					case 1:
						func_259(uParam0, func_172(4), func_173(40));
						break;
					case 2:
						func_259(uParam0, func_172(4), func_173(41));
						break;
				}
			}
			break;
		case 2:
			iVar0 = get_random_int_in_range(0, 4);
			switch (iVar0)
			{
				case 0:
					func_259(uParam0, func_172(4), func_173(43));
					break;
				case 1:
					func_259(uParam0, func_172(4), func_173(44));
					break;
				case 2:
					func_259(uParam0, func_172(4), func_173(45));
					break;
				case 3:
					func_259(uParam0, func_172(4), func_173(46));
					break;
			}
			break;
		case 3:
			iVar0 = get_random_int_in_range(0, 4);
			switch (iVar0)
			{
				case 0:
					func_259(uParam0, func_172(4), func_173(47));
					break;
				case 1:
					func_259(uParam0, func_172(4), func_173(48));
					break;
				case 2:
					func_259(uParam0, func_172(4), func_173(49));
					break;
				case 3:
					func_259(uParam0, func_172(4), func_173(50));
					break;
			}
			break;
	}
	return 1;
}

void func_259(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_8 = iParam1;
	uParam0->f_8.f_1 = iParam2;
}

void func_260(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_4 = iParam1;
	uParam0->f_4.f_1 = iParam2;
}

void func_261(int iParam0)
{
	if (*iParam0 != 0)
	{
		remove_shocking_event(*iParam0);
		*iParam0 = 0;
	}
}

void func_262(int* iParam0, bool bParam1)
{
	if (does_entity_exist(*iParam0) && !is_entity_dead(*iParam0))
	{
		if (!bParam1)
		{
			set_ped_as_no_longer_needed(iParam0);
		}
		else
		{
			delete_ped(iParam0);
		}
	}
}

void func_263()
{
	iVar0 = create_itemset(true);
	vVar7 = { func_65(Local_14, Local_14.f_1, 0) };
	iVar4 = _0x59b57c4b06531e1e(vVar7, 8f, iVar0, 1);
	iVar3 = 0;
	while (iVar3 < iVar4)
	{
		iVar1 = get_indexed_item_in_itemset(iVar3, iVar0);
		iVar2 = iVar1;
		if (!is_entity_dead(iVar2))
		{
			if ((((is_ped_human(iVar2) && !is_ped_a_player(iVar2)) && iVar2 != Local_14.f_3) && !does_entity_belong_to_this_script(iVar2, true)) && ((((_is_ped_using_scenario_hash(iVar2, -332343734) || _is_ped_using_scenario_hash(iVar2, -22664287)) || _is_ped_using_scenario_hash(iVar2, 830847823)) || _is_ped_using_scenario_hash(iVar2, 2087366558)) || func_170(iVar2, -1098463898)))
			{
				if (!_0xbedbe39b5fd98fd6(iVar2) && !_0x77525bbf433f2cd6(iVar2))
				{
					_task_move_in_traffic(iVar2, -1082130432, 0, 0);
					iVar6++;
				}
			}
			iVar5++;
		}
		iVar3++;
	}
	destroy_itemset(iVar0);
}

void func_264(var uParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		func_84(uParam0);
		func_310(iParam1, uParam2);
	}
	func_401(*uParam0, 1, bParam4);
}

bool func_265(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

bool func_266(int iParam0)
{
	if (!func_265(iParam0))
	{
		return false;
	}
	return (*Global_1895087)[iParam0]->f_2 == get_id_of_this_thread();
}

bool func_267(int iParam0, int iParam1)
{
	if (func_215() != -1)
	{
		return false;
	}
	if (!func_265(iParam0))
	{
		return false;
	}
	return (Global_24887[iParam0] && iParam1) != 0;
}

bool func_268(int iParam0)
{
	if (!func_265(iParam0))
	{
		return false;
	}
	return _does_thread_exist((*Global_1895087)[iParam0]->f_2);
}

void func_269(int iParam0, int iParam1)
{
	if (func_215() != -1)
	{
		return;
	}
	if (!func_265(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (&Global_24887[iParam0] - (Global_24887[iParam0] && iParam1));
}

void func_270(int iParam0)
{
	if (!func_265(iParam0))
	{
		return;
	}
	iVar0 = func_402(iParam0);
	if (does_entity_exist(iVar0))
	{
		if (does_entity_belong_to_this_script(iVar0, false))
		{
			set_ped_as_no_longer_needed(&iVar0);
		}
	}
	(*Global_1895087)[iParam0]->f_2 = 0;
}

int func_271(int iParam0)
{
	if (!func_265(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0];
}

bool func_272(int iParam0)
{
	return iParam0 != 0;
}

int func_273(int iParam0)
{
	if (!func_265(iParam0))
	{
		return 0;
	}
	return (*Global_1895087)[iParam0]->f_1;
}

int func_274(int iParam0, bool bParam1)
{
	if (!func_265(iParam0))
	{
		return 0;
	}
	if (!func_267(iParam0, 2))
	{
		return 0;
	}
	if (func_271(iParam0) == 0)
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_273(iParam0)))
	{
		return 1;
	}
	if (func_267(iParam0, 1) && !bParam1)
	{
		func_403(iParam0, 128);
		return 1;
	}
	func_269(iParam0, 129);
	func_270(iParam0);
	_0xfc77c5b44d5ff7c0(func_273(iParam0));
	func_404(iParam0, 0);
	return 1;
}

void func_275(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_276()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

int func_277()
{
	return Global_1897952->f_41;
}

int func_278()
{
	return Global_1894899->f_2;
}

int func_279(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		if (!(iParam0 > 0 && iParam0 < 771))
		{
			return 0;
		}
		iVar0 = Global_12106[iParam0]->f_1;
	}
	else
	{
		if (!(iParam0 > 0 && iParam0 < 20001))
		{
			return 0;
		}
		iVar0 = func_405(iParam0);
	}
	if (iVar0 == 1)
	{
		return 1;
	}
	if (iVar0 == 2)
	{
		return 1;
	}
	return 0;
}

int func_280()
{
	_get_weather_type_transition(&uVar0, &uVar1, &fVar2);
	if (fVar2 < 0.75f)
	{
		uVar3 = uVar0;
	}
	else
	{
		uVar3 = uVar1;
	}
	return uVar3;
}

bool func_281(var uParam0, vector3 vParam1, float fParam4)
{
	if (!is_itemset_valid(*uParam0))
	{
		*uParam0 = create_itemset(true);
	}
	if (_0x59b57c4b06531e1e(vParam1, fParam4, *uParam0, 2) > 0)
	{
		_0x20a4bf0e09bee146(*uParam0);
		return true;
	}
	_0x20a4bf0e09bee146(*uParam0);
	return false;
}

bool func_282(var uParam0, int iParam1, vector3 vParam2, float fParam5, float fParam6)
{
	if (!is_itemset_valid(*uParam0))
	{
		*uParam0 = create_itemset(true);
	}
	iVar2 = _0x59b57c4b06531e1e(vParam2, fParam6, *uParam0, 1);
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		iVar0 = get_indexed_item_in_itemset(iVar1, *uParam0);
		*iParam1 = iVar0;
		if (does_entity_exist(*iParam1))
		{
			if (!is_entity_dead(*iParam1))
			{
				if (_is_this_model_a_horse(get_entity_model(*iParam1)))
				{
					if (func_406(Global_35, *iParam1, 0))
					{
					}
					else
					{
						_0x20a4bf0e09bee146(*uParam0);
						return true;
					}
				}
			}
		}
		iVar1++;
	}
	_0x20a4bf0e09bee146(*uParam0);
	return false;
}

bool func_283(int iParam0, bool bParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (bParam1)
		{
			return is_ped_dead_or_dying(iParam0, true);
		}
		else
		{
			return is_entity_dead(iParam0);
		}
	}
	return true;
}

void func_284(int iParam0, vector3 vParam1, int iParam4)
{
	if (!func_170(*iParam0, 518218985))
	{
		clear_ped_tasks(*iParam0, 1, 0);
		_task_smart_flee_style_coord(*iParam0, vParam1, 6, 0, iParam4, -1, 0);
	}
}

int func_285(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, float fParam9)
{
	if (!bParam8 && network_is_game_in_progress())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_407(vParam0))
	{
		return 0;
	}
	iVar1 = 0;
	if (!bParam5)
	{
		iVar1 |= 2;
	}
	iVar1 |= 1;
	if (!does_entity_exist(iParam6))
	{
		if (func_408(vParam0))
		{
			return 0;
		}
		iVar0 = _0x00bbf7ceae8c666a(vParam0, fParam3, iVar1, 0);
	}
	else
	{
		vVar2 = { get_entity_coords(iParam6, false, false) };
		iVar0 = _0xf383e96c4904df0c(iParam6, fParam3, iVar1, 0);
	}
	if (bParam7 != 0)
	{
		_0xb440f4e35393fc39(iVar0, bParam7);
	}
	if (fParam9 >= 0f)
	{
		_0xd460135c98940274(iVar0, fParam9);
	}
	func_409(iVar0, bParam8);
	return iVar0;
}

int func_286(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (!func_410(iParam0, 1))
	{
		return 0;
	}
	if (func_272(func_271(iParam0)))
	{
		iVar1 = func_273(iParam0);
		if (!_0x800df3fc913355f3(iVar1))
		{
			return 0;
		}
		if (bParam1)
		{
			if (_0xeb98b38ca60742d7(iVar1))
			{
				_0x49a8c2cd97815215(iVar1);
			}
		}
		_0x6759bee6762e140b(iVar1);
		iVar0 = _0x0cadc3a977997472(iVar1, 0);
		if (!does_entity_exist(iVar0))
		{
			return 0;
		}
	}
	if ((bParam4 && !func_266(iParam0)) && !is_entity_dead(iVar0))
	{
		set_ped_config_flag(iVar0, 171, bParam5);
		set_entity_as_mission_entity(iVar0, true, true);
	}
	func_403(iParam0, 1);
	func_411(iParam0);
	if (bParam3)
	{
		func_403(iParam0, 16);
	}
	if (!bParam2)
	{
	}
	return iVar0;
}

void func_287(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_412(iParam0, iParam1))
		{
			if (func_413(iParam0, iParam1))
			{
				if (func_414(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_415(iParam0);
				}
			}
			else
			{
				_set_ped_body_component(iParam0, iParam1);
				_update_ped_variation(iParam0, false, true, true, true, false);
			}
			_0xe3144b932dfdff65(iParam0, 0f, -1, 1, 1);
			clear_ped_damage_decal_by_zone(iParam0, 10, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 3);
			clear_ped_blood_damage_by_zone(iParam0, 0);
			clear_ped_blood_damage_by_zone(iParam0, 5);
			clear_ped_blood_damage_by_zone(iParam0, 7);
			clear_ped_blood_damage_by_zone(iParam0, 8);
			clear_ped_blood_damage_by_zone(iParam0, 9);
		}
	}
}

bool func_288(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 2)
	{
		return false;
	}
	return true;
}

void func_289(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = sParam1;
	iParam0->f_7 = iParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = sParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (func_182(iParam0->f_6))
		{
			if (is_bit_set(*iParam0, 1))
			{
				func_416(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_417(iParam0->f_6, iParam0->f_5, 0);
			}
			func_418(iParam0->f_6, 0, 1);
		}
		else
		{
			set_bit(iParam0, 14);
		}
		set_bit(iParam0, 0);
	}
	else
	{
		func_419(iParam0, iParam0->f_5);
		if (!is_bit_set(*iParam0, 13))
		{
			set_bit(iParam0, 0);
		}
	}
	set_bit(iParam0, 15);
}

void func_290(int* iParam0, int iParam1, bool bParam2)
{
	if (iParam1 > -1)
	{
		iParam0->f_3 = iParam1;
		iParam0->f_7 = 0f;
		iParam0->f_8 = 0f;
		func_420(iParam0, 5);
		if (bParam2)
		{
			func_420(iParam0, 6);
		}
		else
		{
			func_309(iParam0, 6);
		}
	}
}

void func_291(var uParam0, var uParam1, char* sParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	if (uParam0->f_35)
	{
		return;
	}
	uParam0->f_3 = uParam1;
	uParam0->f_4 = sParam2;
	if (does_entity_exist(iParam3))
	{
		uParam0->f_5 = iParam3;
		if (func_313())
		{
			if (is_string_null_or_empty(sParam4))
			{
				uParam0->f_6 = "JOHN";
			}
			else
			{
				uParam0->f_6 = sParam4;
			}
			uParam0->f_23 = 0;
			uParam0->f_24 = 0;
		}
		else
		{
			if (is_string_null_or_empty(sParam5))
			{
				uParam0->f_6 = "ARTHUR";
			}
			else
			{
				uParam0->f_6 = sParam5;
			}
			uParam0->f_23 = 1;
			uParam0->f_24 = "b_PlayerArthur";
		}
	}
	uParam0->f_7 = iParam6;
	uParam0->f_8 = iParam7;
	uParam0->f_9 = iParam8;
	uParam0->f_10 = iParam9;
	uParam0->f_11 = iParam10;
	uParam0->f_12 = iParam11;
	uParam0->f_13 = iParam12;
	uParam0->f_14 = iParam13;
	uParam0->f_15 = iParam14;
	uParam0->f_16 = iParam15;
	uParam0->f_17 = iParam16;
	uParam0->f_18 = iParam17;
}

void func_292(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_386 = iParam1;
	if (bParam2)
	{
		func_421(uParam0);
	}
}

void func_293(var uParam0)
{
	uParam0->f_388 = 0;
}

void func_294(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

float func_295(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_296(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_422(iParam0, iParam1))
		{
			if (!func_156(iParam1->f_10, 1))
			{
				set_ped_config_flag(iParam0, 130, false);
				set_ped_config_flag(iParam0, 315, false);
				set_ped_config_flag(iParam0, 297, false);
				set_ped_config_flag(iParam0, 178, true);
				func_85(uParam2, 0, 0, 1, 0);
				func_122(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_156(iParam1->f_10, 1))
		{
			func_423(uParam2);
			set_ped_config_flag(iParam0, 130, true);
			set_ped_config_flag(iParam0, 315, true);
			set_ped_config_flag(iParam0, 297, true);
			set_ped_config_flag(iParam0, 178, false);
			func_123(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_297(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!is_entity_dead(*uParam0))
	{
		_0xe98d55c5983f2509(*uParam0);
		bVar4 = func_156(iParam4, 32);
		func_424(iParam1, uParam2, 0);
		iVar5 = func_425(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			set_ped_config_flag(*uParam0, 178, false);
			return true;
		}
		func_85(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_156(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_156(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_156(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_156(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_156(iParam4, 8388608) || func_156(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_156(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_156(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_299(iParam1, 4))
		{
			iVar6 |= 1024;
			_0xbb1e41dd3d3c6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_299(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_156(iParam4, 67108864))
		{
			iVar6 |= 16384;
		}
		if (iParam1->f_6 < -1 || (iParam1->f_6 > -1 && iParam1->f_6 > 3))
		{
			iParam1->f_6 = -1;
		}
		if (_0x870708a6e147a9ad(*uParam0, &cVar0, fParam3, fParam3, iVar6, iParam1->f_7, iParam1->f_8, iVar5, 0, iParam1->f_6))
		{
			if (iParam6 == 2)
			{
				iParam6 = func_426(uParam0);
			}
			if (iParam6 != 2)
			{
				bVar7 = true;
			}
			if (!bVar7)
			{
				switch (iParam6)
				{
					case 2:
						if (!is_string_null_or_empty(&cVar0))
						{
							iParam6 = get_hash_key(&cVar0);
						}
						break;
				}
				if (iParam6 != 2)
				{
					_0xfca8fb9e15fa80d3(*uParam0, iParam6);
				}
				if (!is_string_null_or_empty(sParam5) && iParam6 == 2)
				{
					_0xfca8fb9e15fa80d3(*uParam0, get_hash_key(sParam5));
				}
				else if (iParam6 != 2)
				{
					_0xfca8fb9e15fa80d3(*uParam0, iParam6);
				}
			}
			set_ped_config_flag(*uParam0, 130, true);
			set_ped_config_flag(*uParam0, 178, false);
			set_ped_config_flag(*uParam0, 297, true);
			set_ped_config_flag(*uParam0, 301, false);
			if (func_156(iParam4, 268435456))
			{
				iVar8 = func_427(uParam2, 648122183);
				if (iVar8 > -1)
				{
					func_428(iParam1, (*uParam2)[iVar8]);
				}
			}
			if (func_299(iParam1, 23))
			{
				set_ped_config_flag(*uParam0, 315, false);
				set_ped_config_flag(*uParam0, 331, false);
				set_ped_config_flag(*uParam0, 493, true);
			}
			else
			{
				set_ped_config_flag(*uParam0, 315, true);
				set_ped_config_flag(*uParam0, 493, false);
			}
			if (func_156(iParam4, 2) || func_156(iParam4, 16))
			{
				func_298(*uParam0, 1, 1);
			}
			else
			{
				func_298(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_298(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !is_entity_dead(iParam0))
	{
		set_ped_config_flag(iParam0, 317, bParam1);
	}
}

bool func_299(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

bool func_300(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	bVar0 = (!_does_volume_exist(iParam2) || is_entity_in_volume(Global_35, iParam2, true, 0));
	bVar1 = iParam1 & 32 != false;
	bVar2 = iParam1 & 65792 != false;
	bVar3 = iParam1 & 1179648 != false;
	if (bVar0)
	{
		if (bVar1)
		{
			return true;
		}
		if (func_429(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_301(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
{
	if (bParam1)
	{
		if (!is_bit_set(*iParam2, 1))
		{
			if (bParam14)
			{
				iVar0 = 0;
				while (iVar0 < *uParam4)
				{
					set_bit((*uParam4)[iVar0], 14);
					iVar0++;
				}
			}
			func_430(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_156(iParam10, 32), 1, 0);
			set_bit(iParam2, 1);
		}
	}
	else if (is_bit_set(*iParam2, 1))
	{
		clear_bit(iParam2, 1);
	}
}

void func_302(int iParam0)
{
	if (func_156(iParam0, 4))
	{
		disable_control_action(0, -128997553, true);
		disable_control_action(0, 130948705, true);
		disable_control_action(0, 42190210, true);
		disable_control_action(0, 1632043089, true);
		disable_control_action(0, 1623727326, true);
		disable_control_action(0, -922478227, true);
		disable_control_action(0, -674562833, true);
		disable_control_action(0, -197984200, true);
		disable_control_action(0, -238861894, true);
	}
	if (func_156(iParam0, 16384))
	{
		disable_control_action(0, -485697785, false);
	}
	if (func_156(iParam0, 8))
	{
		disable_control_action(0, -1292666904, false);
		disable_control_action(0, 578288361, false);
	}
}

bool func_303(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	iVar1 = func_431(1);
	bVar2 = is_bit_set(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = is_ped_on_foot(Global_35);
	bVar10 = is_ped_injured(*uParam0);
	bVar11 = (((_is_ped_carrying(Global_35) || func_432(Global_35)) || func_433(Global_35)) || func_434(Global_35));
	fVar12 = -1f;
	if (func_58(&(iParam1->f_13)))
	{
		fVar12 = func_59(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((*uParam4)[iVar0]->f_8 != iParam12)
		{
			iParam12 = (*uParam4)[iVar0]->f_8;
		}
		bVar4 = func_182((*uParam4)[iVar0]->f_6);
		func_435(*uParam0, (*uParam4)[iVar0], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (is_bit_set(uParam4[iVar0], 20))
		{
			bVar3 = true;
		}
		if (func_436(*uParam0, iParam1, (*uParam4)[iVar0], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_437(iParam12, (*uParam4)[iVar0]->f_6))
				{
					if (!bVar7)
					{
						func_85(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_438(uParam4, 0, 0);
					}
					if (is_bit_set(uParam4[iVar0], 11))
					{
						func_424(iParam1, uParam4, is_bit_set(*iParam1, 6));
					}
					iParam1->f_1 = iVar0;
					bVar5 = true;
					iParam1->f_9 = is_bit_set(uParam4[iParam1->f_1], 16);
					if (!iParam1->f_9)
					{
						set_bit(iParam1, 0);
					}
					if (!bVar2)
					{
						if (!is_string_null_or_empty((*uParam4)[iVar0]->f_11))
						{
							if (!is_string_null_or_empty((*uParam4)[iVar0]->f_12))
							{
								task_play_anim(Global_35, (*uParam4)[iVar0]->f_11, (*uParam4)[iVar0]->f_12, 4f, -4f, -1, 67108880, 0f, false, 0, false, 0, false);
							}
						}
					}
					if (func_439(iParam1, fParam6, iParam1->f_9))
					{
						func_160(&(iParam1->f_18));
						if (bVar6)
						{
							func_438(uParam4, 0, 0);
						}
						iParam1->f_2 = 2;
					}
					if (iParam1->f_2 != 2)
					{
						if (iParam1->f_2 != 3)
						{
							if (bVar8)
							{
								iParam1->f_2 = 0;
							}
						}
					}
					if (!bParam14)
					{
						bVar5 = true;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		func_440(iParam1, fParam2);
	}
	return bVar5;
}

void func_304(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (is_bit_set(uParam0[iVar0], 20))
		{
			if (!is_bit_set(uParam0[iVar0], 21))
			{
				clear_bit((*uParam0)[iVar0], 20);
				clear_bit((*uParam0)[iVar0], 21);
			}
		}
		iVar0++;
	}
}

void func_305(int* iParam0, var uParam1, float fParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_441((*uParam1)[iVar0]))
		{
			if (is_bit_set(uParam1[iVar0], 20))
			{
				func_440(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_306(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!is_control_pressed(0, -124244224))
		{
			if (func_442(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_420(iParam1, 0);
				func_424(iParam1, uParam2, func_299(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

bool func_307(var uParam0, int* iParam1, float fParam2, bool bParam3)
{
	if (iParam1->f_9)
	{
		if (is_ambient_speech_playing(*uParam0) || is_scripted_speech_playing(*uParam0))
		{
			return false;
		}
		iParam1->f_9 = 0;
		set_bit(iParam1, 0);
		if (fParam2 > 0f)
		{
			func_160(&(iParam1->f_18));
			return false;
		}
		else if (func_58(&(iParam1->f_18)))
		{
			func_72(&(iParam1->f_18));
			return false;
		}
	}
	if (!func_58(&(iParam1->f_18)))
	{
		return true;
	}
	if (fParam2 > 0f && bParam3)
	{
		if (is_ambient_speech_playing(Global_35) || is_scripted_speech_playing(Global_35))
		{
			return false;
		}
	}
	return func_392(&(iParam1->f_18), fParam2);
	return true;
}

void func_308(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_435(iParam0, (*uParam2)[iVar0], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_309(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

void func_310(int* iParam0, var uParam1)
{
	Var1.f_1 = -1;
	Var1.f_3 = -1;
	Var1.f_6 = -1;
	Var1.f_12 = 1073741824;
	Var1.f_16 = 1;
	Var22.f_2 = 570;
	Var22.f_3 = 1065353216;
	Var22.f_4 = -1082130432;
	Var22.f_9 = 2;
	func_424(iParam0, uParam1, 1);
	func_85(uParam1, 0, 1, 1, 0);
	_copy_memory(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		_copy_memory((*uParam1)[iVar0], &Var22, 17);
		iVar0++;
	}
}

void func_311(int iParam0, int iParam1, bool bParam2)
{
	if (!func_142(iParam1))
	{
		return;
	}
	if (func_443(iParam0) == iParam1)
	{
		if (bParam2)
		{
			if (func_444(iParam0, iParam1) != 1)
			{
				func_166(iParam0, iParam1, 1, 1);
			}
		}
		else if (func_444(&Local_14, iParam1) != func_165(3, 0, 0))
		{
			func_166(&Local_14, iParam1, func_165(3, 0, 0), 1);
		}
	}
}

bool func_312(var uParam0, var uParam1, float fParam2, int iParam3)
{
	if (!does_entity_exist(*uParam0))
	{
		return false;
	}
	vVar1 = { get_entity_forward_vector(*uParam0) };
	vVar4 = { get_entity_coords(*uParam0, true, false) + vVar1 * Vector(fParam2, fParam2, fParam2) };
	if (func_282(uParam1, &uVar0, vVar4, fParam2, iParam3))
	{
		return true;
	}
	return false;
}

bool func_313()
{
	if (func_215() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

bool func_314(int iParam0, char* sParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = uParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return func_445(iParam0, &Var0);
}

bool func_315(int iParam0, bool bParam1)
{
	if (bParam1 && !func_182(iParam0))
	{
		return false;
	}
	return !func_446(iParam0, 4);
}

bool func_316(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

void func_317(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

void func_318(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

int func_319(int iParam0)
{
	return iParam0;
}

void func_320(int iParam0)
{
	if (!func_447(iParam0))
	{
		return;
	}
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_delete((*Global_1945938)[iParam0]->f_3);
	}
	(*Global_1945938)[iParam0]->f_4 = 0;
	(*Global_1945938)[iParam0] = 1;
	(*Global_1945938)[iParam0]->f_16 = 0;
	(*Global_1945938)[iParam0]->f_1 = 0;
	(*Global_1945938)[iParam0]->f_6 = { 0f, 0f, 0f };
	(*Global_1945938)[iParam0]->f_12 = { 0f, 0f, 0f };
	(*Global_1945938)[iParam0]->f_9 = 0f;
	(*Global_1945938)[iParam0]->f_10 = 0;
	(*Global_1945938)[iParam0]->f_11 = 0;
	(*Global_1945938)[iParam0]->f_2 = 1;
	(*Global_1945938)[iParam0]->f_15 = -1f;
}

void func_321(int iParam0)
{
	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_448();
	if (Global_1935630->f_27)
	{
		Global_1935630->f_28 = get_game_timer();
	}
	if (is_weapon_valid(Global_1935630->f_44))
	{
		if (is_ped_shooting(Global_35))
		{
			if (get_current_ped_vehicle_weapon(Global_35, &uVar1))
			{
			}
			else
			{
				uVar1 = Global_1935630->f_44;
			}
			Global_1935630->f_46 = uVar1;
		}
	}
	switch (iVar0)
	{
		case 0:
			func_449(&(Global_1935630->f_34), &(Global_1935630->f_39));
			Global_1935630->f_38 = iParam0;
			break;
		case 1:
			Global_1935630->f_30 = _0x72ad59f7b7fb6e24(player_id(), 4000);
			if (!Global_1935630->f_30)
			{
				if (Global_1935630->f_44 == 2055893578)
				{
					Global_1935630->f_30 = _get_lassoed_entity(Global_35) != 0;
				}
			}
			break;
		case 2:
			switch (Global_1935630->f_46)
			{
				case 2055893578:
					Global_1935630->f_25 = 0;
					break;
				default:
					if (is_weapon_valid(Global_1935630->f_46) && _0x5809dbca0a37c82b(Global_1935630->f_46))
					{
						Global_1935630->f_25 = _0x285d36c5c72b0569(Global_35) <= 3f;
					}
					else
					{
						Global_1935630->f_25 = _0x285d36c5c72b0569(Global_35) <= 1f;
					}
					if (Global_1935630->f_25)
					{
						Global_1935630->f_29 = get_frame_count();
					}
					break;
			}
			break;
		default:
			Global_1935630->f_38 = iParam0 + 1;
			break;
	}
	Global_22 |= 4;
}

var func_322(int iParam0)
{
	return &(Global_1109400->f_276[iParam0]);
}

bool func_323(bool bParam0)
{
	if (func_450(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_324(var uParam0)
{
	iVar0 = Global_1935630->f_40;
	if (func_215() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_451(uParam0);
		}
	}
	else if (!does_entity_exist(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_451(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_354(iVar0) == -1)
	{
		return false;
	}
	if (!decor_exist_on(iVar0, "HorseScriptCreator") || decor_get_int(iVar0, "HorseScriptCreator") != get_hash_of_this_script_name())
	{
		return false;
	}
	uParam0->f_14 = iVar0;
	return true;
}

void func_325(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_452(uParam0);
	}
}

bool func_326(int iParam0, var uParam1, int iParam2)
{
	if (!does_entity_exist(iParam2))
	{
		return false;
	}
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!is_ped_human(iParam2))
	{
		iVar1 = func_354(iParam2);
	}
	else
	{
		iVar1 = func_353(iParam2);
	}
	if (!is_ped_human(iParam0))
	{
		iVar0 = func_354(iParam0);
	}
	else
	{
		iVar0 = func_353(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_156(*uParam1, 8388608))
	{
		return true;
	}
	iVar2 = get_ped_relationship_group_hash(iParam0);
	iVar3 = get_ped_relationship_group_hash(iParam2);
	switch (iVar2)
	{
		case -1976316465:
		case -1505548114:
		case -350651841:
		case -50399569:
		case 106566339:
		case 707888648:
		case 841021282:
			switch (iVar3)
			{
				case -1976316465:
				case -1505548114:
				case -350651841:
				case 841021282:
					return true;
			}
			break;
	}
	if (iVar2 == iVar3)
	{
		return true;
	}
	return false;
}

float func_327(int iParam0, int iParam1)
{
	return func_350(iParam0, iParam1, 1, 1);
}

float func_328(var uParam0)
{
	return uParam0->f_26;
}

bool func_329(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam0)
	{
		case 8:
			return iParam2;
		case 4:
		case 16:
			return iParam1;
		case 32:
		case 64:
		case 128:
			return iParam3;
		case 1:
		case 2:
		case 2048:
			return true;
		case 8192:
			return iParam4;
		default:
			break;
	}
	return false;
}

void func_330(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_122(uParam0, 134217728);
	}
	else
	{
		func_123(uParam0, 134217728);
	}
}

void func_331()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

bool func_332(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	iVar0 = player_ped_id();
	if (is_entity_dead(iVar0))
	{
		return false;
	}
	iVar1 = get_player_index();
	if (is_player_dead(iVar1))
	{
		return false;
	}
	if (Global_1935630->f_44 == 2055893578 && Global_1935630->f_27)
	{
	}
	else if (_0x3ee1f7a8c32f24e1(player_id(), &iVar2, false, false))
	{
		if (is_entity_a_ped(iVar2) && iParam0 == get_ped_index_from_entity_index(iVar2))
		{
			return false;
		}
	}
	if (Global_1935630->f_40 != 0)
	{
		if (_get_rider_of_mount(Global_1935630->f_40, true) == iParam0)
		{
			return false;
		}
	}
	if (bParam3)
	{
		if (((_0xcb690f680a3ea971(iVar0, 1) && is_player_targetting_entity(iVar1, iParam0, bParam5)) && is_player_free_aiming_at_entity(iVar1, iParam0)) && func_350(iVar0, iParam0, 1, 1) <= 4f)
		{
			return true;
		}
	}
	if (is_player_targetting_entity(iVar1, iParam0, bParam5) || is_player_free_aiming_at_entity(iVar1, iParam0))
	{
		if ((bParam1 && _0xcb690f680a3ea971(iVar0, 4)) || (bParam2 && _0xcb690f680a3ea971(iVar0, 2)))
		{
			return true;
		}
	}
	if (is_player_free_aiming(iVar1))
	{
		if (_is_weapon_sniper(func_453(iVar0, 0)))
		{
			if (func_454(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_333(var uParam0)
{
	return uParam0->f_17;
}

bool func_334(var uParam0, int iParam1, float fParam2, float fParam3)
{
	if (uParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_156(*uParam0, 4194304))
	{
		fVar0 = fParam3;
	}
	if (_0x06087579e7aa85a9(iParam1, Global_35, -1f, fParam3, -1f, fVar0))
	{
		return true;
	}
	if (*uParam0 & 32768 != 0)
	{
		if (has_entity_clear_los_to_entity(iParam1, Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

int func_335(var uParam0)
{
	return uParam0->f_18;
}

bool func_336(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	iVar0 = player_ped_id();
	if (is_entity_dead(iVar0))
	{
		return false;
	}
	iVar1 = get_player_index();
	if (is_player_dead(iVar1))
	{
		return false;
	}
	if (bParam3)
	{
	}
	if (is_player_targetting_entity(iVar1, iParam0, false) || is_player_free_aiming_at_entity(iVar1, iParam0))
	{
		if ((bParam1 && _0xcb690f680a3ea971(iVar0, 4)) || (bParam2 && _0xcb690f680a3ea971(iVar0, 2)))
		{
			return true;
		}
	}
	if (is_player_free_aiming(iVar1))
	{
		if (_is_weapon_sniper(func_453(iVar0, 0)))
		{
			if (func_455(get_entity_coords(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_337(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1935630->f_18)
	{
		if ((bParam2 || Global_1935630->f_19 > 0) || Global_1935630->f_17 > 0)
		{
			return 1;
		}
	}
	else if (bParam1 && !Global_1935630->f_15 == 1370593166)
	{
		return 0;
	}
	if (Global_1935630->f_20 > 0 || (bParam2 && Global_1935630->f_20 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1935630->f_13)
		{
			if (bParam2 || Global_1935630->f_21 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_338(var uParam0)
{
	return uParam0->f_23;
}

int func_339(var uParam0)
{
	return uParam0->f_21;
}

int func_340(var uParam0)
{
	switch (uParam0->f_7)
	{
		case 0:
			switch (uParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 2:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 1:
			switch (uParam0->f_6)
			{
				case 3:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
		case 2:
			switch (uParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 1:
					iVar0 = 2;
					break;
			}
			break;
		case 3:
			switch (uParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 4:
			switch (uParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
	}
	if (*uParam0 & 16777216 != 0)
	{
		if (iVar0 == 2)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_341(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_456(iParam0, vParam4, 0.5f))
	{
		if (_0x0c9dbf48c6ba6e4c(iParam0, vParam4, 17))
		{
			return true;
		}
	}
	if (vdist(vParam1, vParam4) < 5f)
	{
		return true;
	}
	return false;
}

int func_342(int iParam0)
{
	if (get_ped_config_flag(iParam0, 9, false))
	{
		if (Global_1935630->f_44 == -1569615261)
		{
			return 1;
		}
		if (is_weapon_valid(Global_1935630->f_46))
		{
			if (_is_weapon_melee(Global_1935630->f_46) || _is_weapon_bow(Global_1935630->f_46))
			{
				return 1;
			}
		}
	}
	if (func_457(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_343(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	iVar0 = get_entity_model(iParam0);
	if (_is_this_model_a_horse(iVar0))
	{
		return true;
	}
	return false;
}

bool func_344(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_458(iParam1))
		{
			return false;
		}
	}
	fVar0 = 5f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = _0x900ca00ce703e1e2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_345(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_458(iParam1))
		{
			return false;
		}
	}
	fVar0 = 10f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = _0x900ca00ce703e1e2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_346(var uParam0, int iParam1, float fParam2, int iParam3)
{
	fVar0 = 40f;
	if (func_458(iParam1))
	{
		return false;
	}
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = _0x2ba9d7bf629f920c(iParam1);
	}
	if (fParam2 < fVar0)
	{
		if (has_entity_clear_los_to_entity(iParam1, &(Global_1935630->f_34[iParam3]), 17))
		{
			if (_0x06087579e7aa85a9(iParam1, &(Global_1935630->f_34[iParam3]), -1f, -1f, -1f, -1f))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_347(int iParam0, int iParam1)
{
	if (!_0xefc4303ddc6e60d3(iParam0))
	{
		return false;
	}
	*iParam1 = _0xed1f514af4732258(iParam0);
	if (!does_entity_exist(*iParam1))
	{
		return false;
	}
	if (is_ped_dead_or_dying(*iParam1, true))
	{
		return false;
	}
	if (!_0x2d64376cf437363e(*iParam1))
	{
		return false;
	}
	return true;
}

bool func_348(int iParam0, int iParam1)
{
	if (_get_lassoed_entity(iParam0) == iParam1)
	{
		return true;
	}
	if (func_459(iParam0, 1, 0, 0) != 2055893578)
	{
		return false;
	}
	if (is_ped_performing_melee_action(iParam0, 16, 0))
	{
		if (get_melee_target_for_ped(iParam0) == iParam1)
		{
			return true;
		}
	}
	return false;
}

bool func_349(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

float func_350(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!does_entity_exist(iParam0) && bParam3)
	{
		return 0f;
	}
	if (!does_entity_exist(iParam1) && bParam3)
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false), bParam2);
}

bool func_351(int iParam0, int iParam1, vector3 vParam2)
{
	fVar0 = func_66(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (is_entity_touching_entity(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_352(var uParam0)
{
	return uParam0->f_24;
}

int func_353(int iParam0)
{
	if (!does_entity_belong_to_this_script(iParam0, true))
	{
		return -1;
	}
	if (decor_exist_on(iParam0, "HorseOwnerTeamA") && decor_get_bool(iParam0, "HorseOwnerTeamA"))
	{
		return 0;
	}
	if (decor_exist_on(iParam0, "HorseOwnerTeamB") && decor_get_bool(iParam0, "HorseOwnerTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_354(int iParam0)
{
	if (!decor_exist_on(iParam0, "HorseScriptCreator") || decor_get_int(iParam0, "HorseScriptCreator") != get_hash_of_this_script_name())
	{
		return -1;
	}
	if (decor_exist_on(iParam0, "HorseTeamA") && decor_get_bool(iParam0, "HorseTeamA"))
	{
		return 0;
	}
	if (decor_exist_on(iParam0, "HorseTeamB") && decor_get_bool(iParam0, "HorseTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_355(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
{
	if (Global_1935630->f_40 != 0)
	{
		bVar0 = true;
	}
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam1, player_ped_id(), 1, 1))
		{
			return 1;
		}
	}
	if (bVar0)
	{
		if (has_entity_been_damaged_by_entity(iParam0, Global_1935630->f_40, 1, 1))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (_0x947e43f544b6ab34(iParam0, get_player_index(), 10, 400))
		{
			if (is_ped_ragdoll(iParam0))
			{
				return 1;
			}
		}
		if (_0x947e43f544b6ab34(iParam0, get_player_index(), 11, 400))
		{
			if (is_ped_ragdoll(iParam0))
			{
				return 1;
			}
		}
		if (bParam3)
		{
			if (func_347(Global_35, &iVar1))
			{
				if (fParam4 < 4f)
				{
					if (is_ped_ragdoll(iParam0) || (!bParam2 && is_entity_touching_entity(iVar1, iParam0)))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (_0x29fce825613fefca(iParam0, 400))
		{
			return 1;
		}
	}
	if (fParam4 <= 0f)
	{
		fVar2 = func_350(iParam0, player_ped_id(), 0, 1);
	}
	else
	{
		fVar2 = fParam4;
	}
	if (fVar2 < 1f)
	{
		if (is_entity_touching_entity(player_ped_id(), iParam0))
		{
			if (!bParam2)
			{
				return 1;
			}
			else if (is_ped_ragdoll(iParam0))
			{
				return 1;
			}
		}
	}
	if (bVar0)
	{
		if (func_350(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
		{
			if (is_entity_touching_entity(Global_1935630->f_40, iParam0))
			{
				if (!bParam2)
				{
					return 1;
				}
				else if (is_ped_ragdoll(iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_356(int iParam0, var uParam1, bool bParam2)
{
	func_450(1, &iVar0, &iVar1);
	if (!does_entity_exist(iVar0) && !does_entity_exist(iVar1))
	{
		return false;
	}
	if (does_entity_exist(iVar0))
	{
		if (iVar0 != iParam0)
		{
			if (_0x06087579e7aa85a9(iParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (has_entity_clear_los_to_entity(iParam0, Global_35, 17))
				{
					if (!bParam2 || !func_357(uParam1, iVar0))
					{
						return true;
					}
				}
			}
		}
	}
	if (does_entity_exist(iVar1))
	{
		if (iVar1 != iParam0)
		{
			if (_0x06087579e7aa85a9(iParam0, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam0, Global_35, 17))
			{
				if (!bParam2 || !func_357(uParam1, iVar1))
				{
					if (func_66(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_357(var uParam0, int iParam1)
{
	if (decor_exist_on(iParam1, "bIsCriminal") && decor_get_bool(iParam1, "bIsCriminal"))
	{
		return true;
	}
	if (get_ped_config_flag(iParam1, 4, false))
	{
		return true;
	}
	iVar0 = get_ped_relationship_group_default_hash(iParam1);
	switch (iVar0)
	{
		case -1996978098:
		case -1448293989:
		case -350226955:
		case 266218800:
		case 555364152:
		case 1078461828:
		case 1222652248:
			return true;
		default:
			break;
	}
	return false;
}

bool func_358(int iParam0)
{
	if (func_313())
	{
		return false;
	}
	return func_460((*Global_1347702)[58]->f_15, 1);
}

int func_359(var uParam0)
{
	return uParam0->f_20;
}

int func_360(int iParam0, var uParam1, bool bParam2, float fParam3)
{
	if (!bParam2)
	{
		if (uParam1->f_4 == 0)
		{
			return 0;
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = uParam1->f_12;
	}
	if (is_ped_facing_ped(iParam0, Global_35, 90f))
	{
		if (_0x06087579e7aa85a9(iParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return 1;
		}
	}
	else if (fParam3 < 1.5f)
	{
		if (is_entity_touching_entity(iParam0, Global_35))
		{
			return 1;
		}
	}
	return 0;
}

int func_361(int iParam0)
{
	if (!func_461(iParam0))
	{
		return -1;
	}
	return func_405(iParam0);
}

bool func_362(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (bParam3 && is_entity_dead(iParam0))
	{
		return false;
	}
	if (!bParam5 && !is_ped_human(iParam0))
	{
		return false;
	}
	if (is_ped_a_player(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		if (is_entity_a_mission_entity(iParam0))
		{
			return false;
		}
	}
	if (bParam3 && func_462(iParam0))
	{
		return false;
	}
	if (bParam4)
	{
		if (is_ped_on_mount(iParam0))
		{
			return false;
		}
	}
	if (bParam2)
	{
		if (func_463(iParam0, 0) != -1)
		{
			return false;
		}
	}
	return true;
}

bool func_363(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (iParam0 == uParam1[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

char* func_364(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "agnes_dowd";
		case 1:
			return "anders_helgerson";
		case 2:
			return "armadillo_town_crier";
		case 3:
			return "bland_preacher";
		case 4:
			return "blind_man_cassidy";
		case 6:
			return "chelonian_master";
		case 7:
			return "civil_war_commando";
		case 5:
			return "crackpot_robot";
		case 8:
			return "dorothea_wicklow";
		case 9:
			return "endless_strainer";
		case 10:
			return "early_eugenics_proponent";
		case 11:
			return "gavins_friend";
		case 12:
			return "giant";
		case 13:
			return "grizzeld_jon";
		case 14:
			return "joe_butler";
		case 15:
			return "john_the_baptising_madman";
		case 16:
			return "lillian_powell";
		case 17:
			return "mad_scientist";
		case 18:
			return "mayor_of_strawberry";
		case 19:
			return "bum_civil_war_vet";
		case 20:
			return "philosopher_in_cave";
		case 21:
			return "poor_joe";
		case 22:
			return "sheriff_of_tumbleweed";
		case 23:
			return "soothsayer";
		case 25:
			return "swamp_weirdo_sonny";
		case 24:
			return "sun_worshipper";
		case 26:
			return "thomas_downe";
		case 27:
			return "timothy_donahue";
		case 28:
			return "tiny_hermit_in_cabin";
		case 29:
			return "vampire";
		default:
			break;
	}
	return "speci";
}

bool func_365()
{
	vVar0 = { func_464() };
	if (!func_407(vVar0))
	{
		func_465(&iLocal_683, iVar680, &uVar3, vVar0, 0f, 1, 0, 1);
		return true;
	}
	return false;
}

struct<6> func_366(bool bParam0)
{
	if (bParam0)
	{
		if (Local_14.f_1 == 0)
		{
			Var0 = -22664287;
			Var0.f_1 = { -5508.813f, -2931.202f, -3.165f };
			Var0.f_4 = 41.901f;
			Var0.f_5 = 120f;
		}
		else if (Local_14.f_1 == 1)
		{
			Var0 = 830847823;
			Var0.f_1 = { -5494.188f, -2953.978f, -2.872f };
			Var0.f_4 = 154.544f;
			Var0.f_5 = 120f;
		}
		else
		{
			Var0 = 830847823;
			Var0.f_1 = { -5496.852f, -2939.842f, -2.247f };
			Var0.f_4 = -78.588f;
			Var0.f_5 = 120f;
		}
	}
	else if (Local_14.f_1 == 0)
	{
		Var0 = -332343734;
		Var0.f_1 = { -5511.769f, -2931.98f, -3.242f };
		Var0.f_4 = -1.995f;
		Var0.f_5 = 100f;
	}
	else if (Local_14.f_1 == 1)
	{
		Var0 = 2087366558;
		Var0.f_1 = { -5496.233f, -2954.071f, -2.819f };
		Var0.f_4 = 167.403f;
		Var0.f_5 = 100f;
	}
	else
	{
		Var0 = -332343734;
		Var0.f_1 = { -5495.7f, -2941.675f, -2.211f };
		Var0.f_4 = -48.996f;
		Var0.f_5 = 100f;
	}
	return Var0;
}

bool func_367()
{
	vVar0 = { func_466() };
	if (!func_407(vVar0))
	{
		func_465(&iLocal_684, iVar679, &uVar3, vVar0, 0f, 2, 0, 1);
		return true;
	}
	return false;
}

bool func_368(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (bParam6)
	{
		if (vdist2(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
		{
			return true;
		}
	}
	else if (func_467(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

int func_369(var uParam0, var uParam1)
{
	uParam1->f_27 = 0;
	if (func_468(uParam0, uParam1, 0))
	{
		return 4;
	}
	uVar0 = *uParam1;
	if (!func_469(uVar0, &iVar1))
	{
		return 4;
	}
	if (!_does_anim_scene_exist(uParam0[iVar1]))
	{
		if (!is_string_null_or_empty(uParam1->f_12))
		{
			func_470((*uParam0)[iVar1], uParam1->f_12);
		}
		else
		{
			func_470((*uParam0)[iVar1], 0);
		}
		return 2;
	}
	return 1;
}

int func_370(var uParam0, var uParam1)
{
	if (func_468(uParam0, uParam1, 0))
	{
		return 4;
	}
	uVar0 = *uParam1;
	if (!func_469(uVar0, &iVar1))
	{
		return 4;
	}
	if (!_is_anim_scene_started(uParam0[iVar1], false) || _is_anim_scene_finished(uParam0[iVar1], false))
	{
		if (!is_string_null_or_empty(uParam1->f_12))
		{
			reset_anim_scene(uParam0[iVar1], uParam1->f_12);
		}
		else
		{
			reset_anim_scene(uParam0[iVar1], (*uParam0)[iVar1]->f_2);
		}
	}
	return 2;
}

int func_371(var uParam0, var uParam1)
{
	if (func_468(uParam0, uParam1, 0))
	{
		return 4;
	}
	uVar0 = *uParam1;
	if (!func_469(uVar0, &iVar1))
	{
		return 4;
	}
	if (!_does_anim_scene_exist(uParam0[iVar1]))
	{
		return 0;
	}
	if (!_is_anim_scene_loaded(uParam0[iVar1], true, false))
	{
		func_471((*uParam0)[iVar1]);
		return 3;
	}
	return 4;
}

bool func_372(var uParam0, var uParam1)
{
	if (func_468(uParam0, uParam1, 0))
	{
		return true;
	}
	uVar0 = *uParam1;
	if (!func_469(uVar0, &iVar1))
	{
		return true;
	}
	if (_is_anim_scene_loaded(uParam0[iVar1], true, false) && !_is_anim_scene_loading(uParam0[iVar1], true))
	{
		func_472((*uParam0)[iVar1]);
		return true;
	}
	return false;
}

bool func_373(var uParam0, int iParam1)
{
	return func_55(uParam0->f_387, iParam1);
}

void func_374(var uParam0, int iParam1)
{
	func_61(&(uParam0->f_387), iParam1);
}

bool func_375(var uParam0, var uParam1, int iParam2)
{
	uVar0 = *uParam1;
	if (func_468(uParam0, uParam1, 0))
	{
		return true;
	}
	if (!func_469(uVar0, &iVar1))
	{
		return true;
	}
	if (uParam1->f_20 >= 5)
	{
		if (func_16(uParam0, 2) && iParam2 != 4)
		{
			func_473(uParam0, uParam1);
			return true;
		}
		else if ((uParam0->f_389 && func_16(uParam0, 1)) && iParam2 != 2)
		{
			func_473(uParam0, uParam1);
			return true;
		}
		if (iParam2 != 5)
		{
			if ((!uParam0->f_389 && func_16(uParam0, 1)) && iParam2 != 2)
			{
				func_473(uParam0, uParam1);
				return true;
			}
			if (func_16(uParam0, 4) && iParam2 != 3)
			{
				if (!is_scripted_speech_playing((*uParam0)[iVar1]->f_3))
				{
					func_473(uParam0, uParam1);
					return true;
				}
			}
		}
	}
	switch (uParam1->f_20)
	{
		case 0:
			if ((*uParam0)[iVar1]->f_32)
			{
				uParam1->f_20 = 1;
			}
			else
			{
				if (!_is_anim_scene_started(uParam0[iVar1], false))
				{
					start_anim_scene(uParam0[iVar1]);
				}
				uParam1->f_20 = 2;
			}
			return false;
		case 1:
			if (func_474(Global_35, uParam0[iVar1], (*uParam0)[iVar1]->f_33, uParam1->f_12, &((*uParam0)[iVar1]->f_34), 1065353216, 1, 0, 1))
			{
				if (!_is_anim_scene_started(uParam0[iVar1], false))
				{
					start_anim_scene(uParam0[iVar1]);
				}
				else
				{
					uParam1->f_20 = 2;
				}
			}
			return false;
		case 2:
			if (!_0x23e33cb9f4a3f547(uParam0[iVar1], uParam1->f_12) && !_0x0df57f86fe71dbe5(uParam0[iVar1], uParam1->f_12))
			{
				_0xdf7b5144e25cd3fe(uParam0[iVar1], uParam1->f_12);
			}
			uParam1->f_20 = 3;
			return false;
		case 3:
			if (_0x23e33cb9f4a3f547(uParam0[iVar1], uParam1->f_12))
			{
				uParam1->f_20 = 4;
			}
			return false;
		case 4:
			if (!_0x1f0e401031e20146(uParam0[iVar1], uParam1->f_12))
			{
				_set_anim_scene_playback_list_bool(uParam0[iVar1], uParam1->f_12, true);
				if (!is_string_null_or_empty(uParam1->f_14))
				{
					set_anim_scene_bool(uParam0[iVar1], uParam1->f_14, uParam1->f_13, false);
				}
				if (!is_string_null_or_empty(uParam1->f_16))
				{
					set_anim_scene_bool(uParam0[iVar1], uParam1->f_16, uParam1->f_15, false);
				}
			}
			uParam1->f_20 = 5;
			return false;
		case 5:
			func_473(uParam0, uParam1);
			uParam1->f_20 = 6;
			return false;
		case 6:
			if (iParam2 != 5)
			{
				switch (uParam1->f_21)
				{
					case 0:
						if (_0x8d81e7824b7753f7(uParam0[iVar1], uParam1->f_18, 1))
						{
							return true;
						}
						break;
					case 1:
						if (_0x8d81e7824b7753f7(uParam0[iVar1], uParam1->f_18, 1) && _get_anim_scene_progress(uParam0[iVar1]) >= uParam1->f_22)
						{
							return true;
						}
						break;
					case 2:
						if (_0x8d81e7824b7753f7(uParam0[iVar1], uParam1->f_19, 1))
						{
							return true;
						}
						break;
					case 3:
						if (_0x8d81e7824b7753f7(uParam0[iVar1], uParam1->f_19, 1) && _get_anim_scene_progress(uParam0[iVar1]) >= uParam1->f_22)
						{
							return true;
						}
						break;
					case 4:
						if (_0x8d81e7824b7753f7(uParam0[iVar1], uParam1->f_19, 1) || _0x8d81e7824b7753f7(uParam0[iVar1], uParam1->f_18, 1))
						{
							return true;
						}
						break;
					case 5:
						if ((_0x8d81e7824b7753f7(uParam0[iVar1], uParam1->f_19, 1) || _0x8d81e7824b7753f7(uParam0[iVar1], uParam1->f_18, 1)) && _get_anim_scene_progress(uParam0[iVar1]) >= uParam1->f_22)
						{
							return true;
						}
						break;
				}
				if (_is_anim_scene_finished(uParam0[iVar1], false) || _0x34a0671be613d3d0(uParam0[iVar1]))
				{
					return true;
				}
			}
			else if (!func_16(uParam0, 8))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_376(var uParam0, var uParam1)
{
	func_475(uParam1, &(uParam0->f_245));
	return true;
}

bool func_377(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_378(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_476(iParam0);
	}
	else
	{
		func_477(iParam0, iParam1);
	}
	func_478();
}

void func_379(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_2 = iParam1;
}

void func_380(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_3 = iParam1;
}

void func_381(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_4 = iParam1;
}

void func_382(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0] = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0] = iParam1;
}

void func_383(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_5 = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0]->f_1 = iParam1;
}

void func_384(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = iParam1;
	uParam0->f_2.f_1 = iParam2;
}

bool func_385()
{
	if (!bVar672)
	{
		if (func_54(&Local_14) <= 15f && is_ped_facing_ped(Local_14.f_3, Global_35, 120f))
		{
			if (func_479())
			{
				return true;
			}
		}
	}
	return false;
}

bool func_386(var uParam0, bool bParam1)
{
	if (is_entity_in_volume(Global_35, iVar639, true, 0) && !func_57(Global_35, 1))
	{
		if ((func_55(Local_14.f_193, 2) && func_55(Local_14.f_193, 8)) || func_54(&Local_14) <= 2.2f)
		{
			if (func_54(&Local_14) <= 2.2f || func_55(Local_14.f_193, 32768))
			{
				fVar0 = 0f;
			}
			else
			{
				fVar0 = 7f;
			}
			if (!func_58(&uLocal_656))
			{
				func_160(&uLocal_656);
			}
			if (func_392(&uLocal_656, fVar0) || bParam1)
			{
				if (bParam1)
				{
					func_72(&uLocal_656);
				}
				iVar1 = func_393(0, 5, iVar645);
				iLocal_649 = iVar1;
				switch (iVar1)
				{
					case 0:
						func_384(uParam0, func_172(3), func_173(32));
						break;
					case 1:
						func_384(uParam0, func_172(3), func_173(33));
						break;
					case 2:
						func_384(uParam0, func_172(3), func_173(34));
						break;
					case 3:
						func_384(uParam0, func_172(3), func_173(35));
						break;
					case 4:
						func_384(uParam0, func_172(3), func_173(36));
						break;
				}
				if (fVar0 == 0f)
				{
					uLocal_655 = iVar651 + 1;
				}
				func_160(&uLocal_677);
				return true;
			}
		}
	}
	return false;
}

void func_387(int iParam0, int iParam1)
{
	if (&Global_40.f_11623[iParam0] != iParam1)
	{
		Global_40.f_11623[iParam0] = iParam1;
	}
}

void func_388(int iParam0)
{
	(*Global_1396257)[iParam0]->f_631 = 1;
}

int func_389(var uParam0)
{
	if ((((func_55(*uParam0, 32) || func_55(*uParam0, 64)) || func_55(*uParam0, 512)) || func_55(*uParam0, 256)) || func_55(*uParam0, 8))
	{
		return 1;
	}
	return 0;
}

void func_390(int iParam0)
{
	if ((iParam0 != 9 && iParam0 != 10) && iParam0 != 38)
	{
		func_394(0);
	}
}

void func_391(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = -1;
	*iParam2 = -1;
	if (Local_14.f_1 == 0)
	{
		switch (iParam0)
		{
			case 0:
				*iParam1 = 0;
				*iParam2 = 4;
				break;
			case 1:
				*iParam1 = 0;
				*iParam2 = 5;
				break;
			case 2:
				*iParam1 = 0;
				*iParam2 = 6;
				break;
		}
	}
	else if (Local_14.f_1 == 1)
	{
		switch (iParam0)
		{
			case 0:
				*iParam1 = 1;
				*iParam2 = 19;
				break;
			case 1:
				*iParam1 = 1;
				*iParam2 = 20;
				break;
			case 2:
				*iParam1 = 1;
				*iParam2 = 21;
				break;
			case 3:
				*iParam1 = 1;
				*iParam2 = 22;
				break;
			case 4:
				*iParam1 = 1;
				*iParam2 = 23;
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				*iParam1 = 2;
				*iParam2 = 27;
				break;
			case 1:
				*iParam1 = 2;
				*iParam2 = 28;
				break;
			case 2:
				*iParam1 = 2;
				*iParam2 = 29;
				break;
		}
	}
}

bool func_392(var uParam0, float fParam1)
{
	if (func_480(uParam0, fParam1))
	{
		func_72(uParam0);
		return true;
	}
	return false;
}

int func_393(int iParam0, int iParam1, int iParam2)
{
	iVar0 = get_random_int_in_range(iParam0, iParam1);
	if (iVar0 == iParam2)
	{
		if (func_481())
		{
			iVar0 = (iVar0 - 1);
		}
		else
		{
			iVar0++;
		}
		if (iVar0 < iParam0)
		{
			iVar0 = iParam0;
		}
		else if (iVar0 >= iParam1)
		{
			iVar0 = (iParam1 - 1);
		}
		if (iVar0 == iParam0 && iParam0 == iParam2)
		{
			iVar0++;
		}
		else if (iVar0 == (iParam1 - 1) && (iParam1 - 1) == iParam2)
		{
			iVar0 = (iVar0 - 1);
		}
		if (iVar0 < iParam0 || iVar0 >= iParam1)
		{
			iVar0 = func_482(func_481(), iParam0, (iParam1 - 1));
		}
	}
	return iVar0;
}

void func_394(bool bParam0)
{
	if (!bParam0)
	{
		func_62(&(Local_14.f_193), 65536);
	}
	else
	{
		func_61(&(Local_14.f_193), 65536);
	}
}

void func_395()
{
	fLocal_672 = get_random_float_in_range(20f, 30f);
}

bool func_396(int iParam0)
{
	if (iParam0->f_205.f_386 == 5)
	{
		if (func_373(&(iParam0->f_205), 4))
		{
			return true;
		}
	}
	return false;
}

bool func_397()
{
	if (are_strings_equal(Local_14.f_205.f_217.f_12, "Pl_IG1_Loop01"))
	{
		if (func_483(&Local_14))
		{
			fVar0 = func_484(&Local_14);
			if (fVar0 < 0.8188f)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	return true;
}

bool func_398(int iParam0)
{
	if (((func_16(&(iParam0->f_205), 2) || func_16(&(iParam0->f_205), 4)) || func_16(&(iParam0->f_205), 1)) || func_16(&(iParam0->f_205), 8))
	{
		return true;
	}
	return false;
}

void func_399()
{
	iVar0 = get_random_int_in_range(1, 3);
	iVar0 = func_485(iVar0, 1, 2);
	func_314(Local_14.f_3, "GUN", -417894478, Global_35, 1, "TWD_Sheriff", iVar0, 1);
}

int func_400(int iParam0, bool bParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 76:
			if (func_486(iParam0))
			{
				return 305496830;
			}
			else
			{
				return -1482428221;
			}
			break;
		case 105:
			if (func_486(iParam0))
			{
				return -1323821455;
			}
			else
			{
				return -1994249944;
			}
			break;
		case 5:
			return 1559741032;
		case 61:
			return 60667583;
		case 78:
			return 1758133584;
		case 26:
			return -577559008;
		case 38:
			if (!bParam1 || func_215() != -1)
			{
				return 1624541293;
			}
			if (func_487(45))
			{
				return 1624541293;
			}
			else
			{
				return 1716860278;
			}
			break;
		case 92:
			return 1637569166;
		case 65:
			return -867798278;
		case 69:
			return 1543937523;
		case 93:
			return 1030875135;
		case 95:
			return -201437056;
		case 57:
			return 794246846;
		case 3:
			return -968357677;
		case 32:
			return 728480338;
		case 82:
			return 725489698;
		case 35:
			return 183652754;
		case 56:
			return 2056744450;
		case 126:
			return 963280223;
		case 120:
			return -256309418;
		case 124:
			return 1666986024;
		case 115:
			return 251328732;
		case 127:
			if (!bParam1 || func_215() != -1)
			{
				return 1024208566;
			}
			if (func_487(45))
			{
				return 1024208566;
			}
			else
			{
				return 1640255731;
			}
			break;
		case 22:
			if (!bParam1 || func_215() != -1)
			{
				return 965626876;
			}
			if (func_460((*Global_1835011)[59]->f_1, 1))
			{
				return 965626876;
			}
			else
			{
				return 1039226266;
			}
			break;
		case 37:
			if (!bParam1 || func_215() != -1)
			{
				return -497792649;
			}
			if (func_460((*Global_1347702)[9]->f_15, 1))
			{
				return -497792649;
			}
			else if (func_487(45))
			{
				return -1738342532;
			}
			else
			{
				return -1308265478;
			}
			break;
		case 4:
		case 9:
		case 43:
		case 58:
		case 71:
		case 79:
		case 98:
			if (iParam0 == func_488())
			{
				return 2126166785;
			}
			break;
		case 110:
			if (!bParam1 || func_215() != -1)
			{
				return -1990305778;
			}
			if (func_487(45))
			{
				return -1990305778;
			}
			else
			{
				return -1679988168;
			}
			break;
	}
	if (bParam2)
	{
		iVar0 = func_489(iParam0);
		if (iVar0 != -1)
		{
			return func_490(iVar0, bParam1);
		}
	}
	return 0;
}

void func_401(int iParam0, bool bParam1, bool bParam2)
{
	set_ped_config_flag(iParam0, 297, false);
	set_ped_config_flag(iParam0, 301, false);
	set_ped_config_flag(iParam0, 315, false);
	set_ped_config_flag(iParam0, 130, false);
	set_ped_config_flag(iParam0, 178, bParam2);
	set_ped_config_flag(iParam0, 330, false);
	set_ped_config_flag(iParam0, 317, bParam1);
}

int func_402(int iParam0)
{
	iVar0 = func_273(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!_0x800df3fc913355f3(iVar0))
	{
		return 0;
	}
	return _0x31c70a716cae1fee(iVar0);
}

void func_403(int iParam0, int iParam1)
{
	if (func_215() != -1)
	{
		return;
	}
	if (!func_265(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (Global_24887[iParam0] || iParam1);
}

void func_404(int iParam0, int iParam1)
{
	if (!func_265(iParam0))
	{
		return;
	}
	(*Global_1895087)[iParam0]->f_1 = iParam1;
}

int func_405(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_491(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

bool func_406(int iParam0, int iParam1, bool bParam2)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		if (does_entity_exist(iParam1) && !is_entity_dead(iParam1))
		{
			if (bParam2)
			{
				return (_is_ped_getting_into_a_mount_seat(iParam0, true) && get_mount(iParam0) == iParam1);
			}
			else
			{
				return (is_ped_on_mount(iParam0) && get_mount(iParam0) == iParam1);
			}
		}
	}
	return false;
}

bool func_407(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_408(vector3 vParam0)
{
	return _0x769bb7626b8cdb06(vParam0, 0.5f, 0, 0, 16384);
}

int func_409(int iParam0, bool bParam1)
{
	if (!bParam1 && network_is_game_in_progress())
	{
		return 0;
	}
	if (!_0xf6a8a652a6b186cd(iParam0))
	{
	}
	iVar1 = 0;
	while (iVar1 < &Global_1911670)
	{
		iVar0 = Global_1911670[iVar1];
		if (!_0xf6a8a652a6b186cd(iVar0) || iVar0 == iParam0)
		{
			(*Global_1911670)[iVar1] = iParam0;
			return 1;
		}
		iVar1++;
	}
	return 0;
}

bool func_410(int iParam0, bool bParam1)
{
	if (!func_265(iParam0))
	{
		return false;
	}
	if ((func_267(iParam0, 1) && !func_266(iParam0)) && func_268(iParam0))
	{
		return false;
	}
	if (!func_267(iParam0, 2))
	{
		return false;
	}
	if (!bParam1)
	{
		if (!func_492(iParam0, 0))
		{
			return false;
		}
	}
	return true;
}

void func_411(int iParam0)
{
	if (!func_265(iParam0))
	{
		return;
	}
	(*Global_1895087)[iParam0]->f_2 = get_id_of_this_thread();
}

bool func_412(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	bVar0 = _does_metaped_outfit_exist_for_ped_model(iParam1, get_entity_model(iParam0));
	if (bVar0)
	{
	}
	return bVar0;
}

bool func_413(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!decor_exist_on(iParam0, "metaped_outfit_request") || !decor_exist_on(iParam0, "metaped_outfit_request_name"))
	{
		return false;
	}
	iVar0 = decor_get_int(iParam0, "metaped_outfit_request_name");
	if (iVar0 == iParam1)
	{
		return true;
	}
	return false;
}

bool func_414(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!decor_exist_on(iParam0, "metaped_outfit_request") || !decor_exist_on(iParam0, "metaped_outfit_request_name"))
	{
		return false;
	}
	iVar0 = decor_get_int(iParam0, "metaped_outfit_request_name");
	if (!func_412(iParam0, iVar0))
	{
		return true;
	}
	if (iVar0 != iParam1)
	{
		return false;
	}
	iVar1 = decor_get_int(iParam0, "metaped_outfit_request");
	return _0x610438375e5d1801(iVar1);
}

void func_415(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

void func_416(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3 && !func_182(iParam0))
	{
		return;
	}
	iVar0 = func_319(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(2, sParam1, sParam2));
}

void func_417(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 && !func_182(iParam0))
	{
		return;
	}
	iVar0 = func_319(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, sParam1);
}

void func_418(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_182(iParam0))
	{
		return;
	}
	iVar0 = func_319(iParam0);
	if (bParam1)
	{
		func_493(iParam0, 4);
		func_494(iVar0, 1);
		func_495(iVar0, 1);
	}
	else
	{
		func_496(iParam0, 4);
		func_495(iVar0, 0);
	}
}

void func_419(int* iParam0, char* sParam1)
{
	if (func_182(iParam0->f_6) && !is_string_null_or_empty(sParam1))
	{
		func_417(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_318(iParam0, 1);
}

void func_420(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

void func_421(var uParam0)
{
	uParam0->f_387 = 0;
}

bool func_422(int iParam0, int* iParam1)
{
	if (iParam1->f_11 & 1 != 0)
	{
		if (_is_ped_lassoed(iParam0))
		{
			return true;
		}
	}
	if (iParam1->f_11 & 2 != 0)
	{
		if (_is_ped_hogtied(iParam0))
		{
			return true;
		}
	}
	bVar0 = iParam1->f_11 & 4 != false;
	bVar1 = iParam1->f_11 & 8 != false;
	if (bVar0 || bVar1)
	{
		if (is_ped_in_combat(iParam0, func_497((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_423(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_441((*uParam0)[iVar0]))
		{
			func_317((*uParam0)[iVar0], 14);
		}
		iVar0++;
	}
}

void func_424(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_183(&((*uParam1)[iParam0->f_3]->f_6), 1, 1);
		if (bParam2)
		{
			func_81(iParam0, 0);
		}
	}
}

int func_425(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(*uParam2)[iVar0]->f_8 = 6;
		func_498(iParam0, (*uParam2)[iVar0], fParam3, 3, 0, 6, bParam4, 0);
		if (func_182((*uParam2)[iVar0]->f_6))
		{
			func_317((*uParam2)[iVar0], 11);
			return (*Global_1945938)[(*uParam2)[iVar0]->f_6]->f_3;
		}
	}
	return 0;
}

int func_426(var uParam0)
{
	iVar0 = func_499(*uParam0);
	iVar1 = 2;
	switch (iVar0)
	{
		case 2:
			iVar1 = 295425337;
			break;
		case 1:
			iVar1 = 768137552;
			break;
		case 0:
			iVar1 = 1415388528;
			break;
		case 4:
			iVar1 = 1449436544;
			break;
		case 3:
			iVar1 = -1807204482;
			break;
		case 5:
			iVar1 = -1096701282;
			break;
	}
	return iVar1;
}

int func_427(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0]->f_7 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_428(int* iParam0, int* iParam1)
{
	if (!func_299(iParam0, 23))
	{
		if (iParam1->f_7 == 648122183)
		{
			func_317(iParam1, 19);
			func_420(iParam0, 23);
			func_500(iParam1, 2);
		}
	}
}

bool func_429(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (func_501(16))
	{
		return Global_1935630->f_58 == iParam0;
	}
	if (!is_entity_dead(get_player_ped(player_id())))
	{
		if (_0x3ee1f7a8c32f24e1(player_id(), &iVar0, bParam2, bParam3))
		{
			if (does_entity_exist(iVar0))
			{
				if (is_entity_a_ped(iVar0))
				{
					func_502(16);
					Global_1935630->f_58 = get_ped_index_from_entity_index(iVar0);
					if (Global_1935630->f_58 == iParam0)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

void func_430(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_498(iParam0, (*uParam1)[iVar0], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			clear_bit((*uParam1)[iVar0], 14);
		}
		iVar0++;
	}
}

int func_431(int iParam0)
{
	return _money_get_cash_balance();
}

bool func_432(int iParam0)
{
	return (func_503(iParam0, 4) || func_503(iParam0, 5));
}

int func_433(int iParam0)
{
	return func_503(iParam0, 7);
}

int func_434(int iParam0)
{
	return func_503(iParam0, 6);
}

void func_435(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (is_bit_set(*iParam1, 14))
	{
		if (func_441(iParam1))
		{
			clear_bit(iParam1, 14);
			func_498(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_436(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_504(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_315(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_418(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_418(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_505(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_437(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_506(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_507(iParam1, 1))
	{
		func_508(iParam1, 1);
		return true;
	}
	return false;
}

void func_438(var uParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_181((*uParam0)[iVar0], bParam1, bParam2);
		iVar0++;
	}
}

bool func_439(int* iParam0, float fParam1, bool bParam2)
{
	if (iParam0->f_2 != 3)
	{
		if (bParam2 || fParam1 > 0f)
		{
			return true;
		}
	}
	return false;
}

void func_440(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		disable_control_action(0, 1101824977, true);
		disable_control_action(0, 966551065, true);
		disable_control_action(0, 668058244, true);
		set_ped_reset_flag(Global_35, 203, true);
	}
}

bool func_441(int* iParam0)
{
	if (!is_string_null_or_empty(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_442(int iParam0)
{
	iVar1 = get_number_of_events(0);
	if (iVar1 > 0)
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			switch (get_event_at_index(0, iVar0))
			{
				case 1387172233:
					if (get_event_data(0, iVar0, &vVar3, 10))
					{
						iVar2 = vVar3.x;
						switch (iVar2)
						{
							case 9:
								if (is_entity_a_ped(vVar3.z))
								{
									if (iParam0 == get_ped_index_from_entity_index(vVar3.z))
									{
										return true;
									}
								}
								break;
						}
					}
					break;
			}
			iVar0++;
		}
	}
	return false;
}

int func_443(int iParam0)
{
	return iParam0->f_160;
}

int func_444(int iParam0, int iParam1)
{
	return iParam0->f_41[iParam1]->f_56;
}

bool func_445(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

bool func_446(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

bool func_447(int iParam0)
{
	return func_446(iParam0, 2);
}

bool func_448()
{
	if (func_509())
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		if (Global_1935630->f_44 == 2055893578)
		{
			return is_control_pressed(0, 130948705);
		}
		return get_ped_reset_flag(Global_35, 311);
	}
	else
	{
		return &(Global_1955569->f_992[2]);
	}
	return false;
}

void func_449(var uParam0, var uParam1)
{
	iVar2 = player_id();
	if (!_0x72ad59f7b7fb6e24(iVar2, 200))
	{
		*uParam1 = 0;
		return;
	}
	if (_0x1a6e84f13c952094(iVar2, 200, uParam0))
	{
		iVar1 = 0;
		while (iVar1 < *uParam0)
		{
			if (!does_entity_exist(uParam0[iVar1]))
			{
			}
			else if (!is_ped_human(uParam0[iVar1]) && !(decor_exist_on(uParam0[iVar1], "HorseTeamA") || decor_exist_on(uParam0[iVar1], "HorseTeamB")))
			{
			}
			else if (decor_exist_on(uParam0[iVar1], "bIgnoreDamageChecking"))
			{
			}
			else
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	*uParam1 = iVar0;
}

bool func_450(bool bParam0, int iParam1, int iParam2)
{
	if (does_entity_exist(Global_1935630->f_32))
	{
		if (!bParam0 || is_ped_human(Global_1935630->f_32))
		{
			*iParam1 = Global_1935630->f_32;
			iVar0 = 1;
		}
	}
	if (does_entity_exist(Global_1935630->f_33))
	{
		if (!bParam0 || is_ped_human(Global_1935630->f_33))
		{
			if (_is_ped_hogtied(Global_1935630->f_33) || is_entity_dead(Global_1935630->f_33))
			{
				*iParam2 = Global_1935630->f_33;
				iVar0 = 1;
			}
		}
	}
	if (Global_1935630->f_30 && !is_ped_injured(Global_35))
	{
		iVar1 = _get_lassoed_entity(Global_35);
		if (does_entity_exist(iVar1))
		{
			if (!bParam0 || is_ped_human(iVar1))
			{
				*iParam1 = iVar1;
				iVar0 = 1;
			}
		}
	}
	return iVar0;
}

int func_451(var uParam0)
{
	if (iVar0 == 0)
	{
		if (is_control_just_pressed(0, -171675621))
		{
			if (_0x3ee1f7a8c32f24e1(player_id(), &iVar1, false, false))
			{
				if (does_entity_exist(iVar1))
				{
					if (is_entity_a_ped(iVar1))
					{
						if (_is_this_model_a_horse(get_entity_model(iVar1)))
						{
							iVar0 = get_ped_index_from_entity_index(iVar1);
							return iVar0;
						}
					}
				}
			}
		}
	}
	if (uParam0->f_6 == 3)
	{
		if (iVar0 == 0)
		{
			if (!Global_1935630->f_12)
			{
				iVar0 = _0x4b19f171450e0d4f(Global_35);
			}
		}
		if (iVar0 == 0)
		{
			iVar0 = _get_lassoed_entity(Global_35);
		}
		if (iVar0 != 0)
		{
			if (does_entity_exist(iVar0))
			{
				if (!_is_this_model_a_horse(get_entity_model(iVar0)))
				{
					iVar0 = 0;
				}
			}
		}
	}
	return iVar0;
}

void func_452(var uParam0)
{
	if (Global_1935630->f_38 == 0)
	{
		func_123(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (does_entity_exist(&(Global_1935630->f_34[iVar0])))
			{
				if (!_0x88ad6cc10d8d35b2(&(Global_1935630->f_34[iVar0])))
				{
					func_122(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_453(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_454(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_455(get_entity_coords(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_455(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	bVar2 = get_hud_screen_position_from_world_position(vParam0, &fVar0, &fVar1);
	if (bVar2 == 0)
	{
		if (((fVar0 > fParam3 && fVar0 < fParam4) && fVar1 > fParam5) && fVar1 < fParam6)
		{
			return true;
		}
	}
	return false;
}

bool func_456(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { get_entity_forward_vector(iParam0) };
	vVar3 = { vParam1 - get_entity_coords(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_457(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3 || !is_entity_dead(iParam0))
	{
		if (_0x9e2d5d6bc97a5f1e(iParam0, -1569615261, iParam1))
		{
			return true;
		}
		else if (!bParam2)
		{
			if (is_weapon_valid(Global_1935630->f_44))
			{
				if (_is_weapon_melee(Global_1935630->f_44) || Global_1935630->f_44 == -618550132)
				{
					if (_0x9e2d5d6bc97a5f1e(iParam0, Global_1935630->f_44, iParam1))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_458(int iParam0)
{
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (!is_ped_using_any_scenario(iParam0))
	{
		return false;
	}
	iVar0 = _get_scenario_point_type_ped_is_using(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if ((((((((iVar0 == -1689755873 || iVar0 == 1690225020) || iVar0 == 1774730608) || iVar0 == 309374745) || iVar0 == -363194080) || iVar0 == 640190094) || iVar0 == -1085971095) || iVar0 == 49488831) || iVar0 == 343112864)
	{
		return true;
	}
	if (iVar0 == -2016812721 || iVar0 == 1097070152)
	{
		iVar0 = _0xc22aa08a8adb87d4(iParam0);
		if (iVar0 == 970972795)
		{
			return true;
		}
		return false;
	}
	return false;
}

int func_459(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	iVar0 = -1569615261;
	if (is_entity_dead(iParam0) || !is_ped_human(iParam0))
	{
		return iVar0;
	}
	if (get_current_ped_weapon(iParam0, &iVar0, bParam1, iParam2, bParam3))
	{
		return iVar0;
	}
	return iVar0;
}

bool func_460(int iParam0, bool bParam1)
{
	switch (func_361(iParam0))
	{
		case 5:
			return true;
		case 6:
			if (bParam1)
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_461(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_462(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_ped_group_member(iParam0, func_510(), 1))
	{
		return true;
	}
	return false;
}

int func_463(int iParam0, bool bParam1)
{
	return func_511(iParam0, Global_1894899->f_2, bParam1);
}

Vector3 func_464()
{
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		vVar1 = { func_512(iVar0) };
		if (!is_sphere_visible(vVar1, 1.5f))
		{
			return vVar1;
		}
		iVar0++;
	}
	return 0f, 0f, 0f;
}

int func_465(int iParam0, int iParam1, var uParam2, vector3 vParam3, float fParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (*uParam2)
	{
		return 0;
	}
	if (does_entity_exist(*iParam0))
	{
		return 1;
	}
	if (!bParam8)
	{
		*iParam0 = func_513(iParam1, vParam3, fParam6, 0, 1, bParam7, 1, 1, 1, 0, 0, 0, 0);
	}
	else
	{
		*iParam0 = func_513(iParam1, vParam3, fParam6, 0, 1, bParam7, 1, 1, bParam9, 1, 1, 0, 0);
	}
	if (does_entity_exist(*iParam0))
	{
		*uParam2 = 1;
		return 1;
	}
	return 0;
}

Vector3 func_466()
{
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		vVar1 = { func_514(iVar0) };
		if (!is_sphere_visible(vVar1, 1.5f))
		{
			return vVar1;
		}
		iVar0++;
	}
	return 0f, 0f, 0f;
}

float func_467(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

bool func_468(var uParam0, var uParam1, bool bParam2)
{
	uVar0 = *uParam1;
	if (bParam2)
	{
		if (func_16(uParam0, 2))
		{
			return true;
		}
		if (func_16(uParam0, 1))
		{
			return true;
		}
	}
	if (!func_469(uVar0, &iVar1))
	{
		return true;
	}
	if ((*uParam0)[iVar1]->f_35)
	{
		return true;
	}
	if (uParam1->f_26 == 1)
	{
		return true;
	}
	else if (uParam1->f_26 == 2)
	{
		return false;
	}
	if (is_string_null_or_empty(uParam1->f_12))
	{
		uParam1->f_26 = 1;
		return true;
	}
	if ((_does_anim_scene_exist(uParam0[iVar1]) && !_is_anim_scene_loading(uParam0[iVar1], true)) && _is_anim_scene_loaded(uParam0[iVar1], true, false))
	{
		if (!_0xa9016536015de29d(uParam0[iVar1], uParam1->f_12))
		{
			uParam1->f_26 = 1;
			return true;
		}
		else
		{
			uParam1->f_26 = 2;
			return false;
		}
	}
	return false;
}

bool func_469(int iParam0, int iParam1)
{
	if (func_226(iParam0))
	{
		*iParam1 = iParam0;
		return true;
	}
	return false;
}

int func_470(var uParam0, char* sParam1)
{
	if (is_string_null_or_empty(uParam0->f_1))
	{
		return 1;
	}
	if (_does_anim_scene_exist(*uParam0))
	{
		return 1;
	}
	if (!is_string_null_or_empty(sParam1))
	{
		*uParam0 = _create_anim_scene(uParam0->f_1, uParam0->f_31, sParam1, false, true);
	}
	else if (!is_string_null_or_empty(uParam0->f_2))
	{
		*uParam0 = _create_anim_scene(uParam0->f_1, uParam0->f_31, uParam0->f_2, false, true);
	}
	else
	{
		*uParam0 = _create_anim_scene(uParam0->f_1, uParam0->f_31, 0, false, true);
	}
	return 1;
}

int func_471(var uParam0)
{
	bVar0 = _is_anim_scene_loaded(*uParam0, true, false);
	bVar1 = _is_anim_scene_started(*uParam0, false);
	if (bVar0 || bVar1)
	{
		return 1;
	}
	bVar3 = _does_anim_scene_exist(*uParam0);
	bVar2 = _is_anim_scene_loading(*uParam0, true);
	if ((bVar3 && !bVar0) && !bVar2)
	{
		load_anim_scene(*uParam0);
		return 0;
	}
	if (bVar2)
	{
	}
	if (!bVar3)
	{
	}
	return 0;
}

int func_472(var uParam0)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return 1;
	}
	if (!_is_anim_scene_loaded(*uParam0, true, false))
	{
		return 0;
	}
	if (does_entity_exist(uParam0->f_5) && !is_string_null_or_empty(uParam0->f_6))
	{
		set_anim_scene_entity(*uParam0, uParam0->f_6, uParam0->f_5, 0);
	}
	if (does_entity_exist(uParam0->f_3) && !is_string_null_or_empty(uParam0->f_4))
	{
		set_anim_scene_entity(*uParam0, uParam0->f_4, uParam0->f_3, 0);
	}
	if (does_entity_exist(uParam0->f_7) && !is_string_null_or_empty(uParam0->f_8))
	{
		set_anim_scene_entity(*uParam0, uParam0->f_8, uParam0->f_7, 0);
	}
	if (does_entity_exist(uParam0->f_9) && !is_string_null_or_empty(uParam0->f_10))
	{
		set_anim_scene_entity(*uParam0, uParam0->f_10, uParam0->f_9, 0);
	}
	if (does_entity_exist(uParam0->f_11) && !is_string_null_or_empty(uParam0->f_12))
	{
		set_anim_scene_entity(*uParam0, uParam0->f_12, uParam0->f_11, 0);
	}
	if (does_entity_exist(uParam0->f_13) && !is_string_null_or_empty(uParam0->f_14))
	{
		set_anim_scene_entity(*uParam0, uParam0->f_14, uParam0->f_13, 0);
	}
	if (does_entity_exist(uParam0->f_15) && !is_string_null_or_empty(uParam0->f_16))
	{
		set_anim_scene_entity(*uParam0, uParam0->f_16, uParam0->f_15, 0);
	}
	if (does_entity_exist(uParam0->f_17) && !is_string_null_or_empty(uParam0->f_18))
	{
		set_anim_scene_entity(*uParam0, uParam0->f_18, uParam0->f_17, 0);
	}
	if (!is_string_null_or_empty(uParam0->f_20))
	{
		set_anim_scene_bool(*uParam0, uParam0->f_20, uParam0->f_19, false);
	}
	if (!is_string_null_or_empty(uParam0->f_22))
	{
		set_anim_scene_bool(*uParam0, uParam0->f_22, uParam0->f_21, false);
	}
	if (!is_string_null_or_empty(uParam0->f_24))
	{
		set_anim_scene_bool(*uParam0, uParam0->f_24, uParam0->f_23, false);
	}
	if (!func_407(uParam0->f_25) || !func_407(uParam0->f_28))
	{
		set_anim_scene_origin(*uParam0, uParam0->f_25, uParam0->f_28, 2);
	}
	return 1;
}

int func_473(var uParam0, var uParam1)
{
	iVar0 = uParam0->f_245.f_1;
	iVar1 = uParam1->f_1;
	iVar2 = uParam0->f_245;
	iVar3 = *uParam1;
	if (iVar2 != iVar3)
	{
		return func_515(uParam0, iVar2, &(uParam1->f_27));
	}
	if (iVar0 != iVar1)
	{
		return func_516(uParam0);
	}
	return 1;
}

bool func_474(int iParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar5 = 0;
	if (!is_entity_dead(iParam0))
	{
		switch (*uParam4)
		{
			case 0:
				if (bParam8 && is_ped_on_mount(iParam0))
				{
					vVar0 = { func_517(iParam0, iParam1, sParam2, sParam3, 0) };
					if (!func_407(vVar0))
					{
						if (func_518(get_entity_coords(iParam0, true, false), get_entity_coords(iParam0, true, false) + get_entity_forward_vector(iParam0), vVar0))
						{
							iVar5 = 131072;
						}
						else
						{
							iVar5 = 262144;
						}
					}
					task_dismount_animal(iParam0, iVar5, 0, 0, 0, 0);
					*uParam4 = 1;
				}
				else
				{
					if (bParam6)
					{
						_0x4820a6939d7cef28(Global_35, 0);
						_hide_ped_weapons(Global_35, 2, false);
					}
					open_sequence_task(&iVar4);
					if (bParam6)
					{
						task_swap_weapon(0, 0, 0, 0, 0);
					}
					if (_is_ped_carrying(iParam0))
					{
						iVar6 = _get_first_entity_ped_is_carrying(iParam0);
						task_place_carried_entity_at_coord(0, iVar6, get_entity_coords(iParam0, true, false), 2f, 8);
					}
					task_enter_anim_scene(0, iParam1, sParam2, sParam3, iParam5, bParam7, 0, 20000, -1082130432);
					func_168(iParam0, &iVar4, 0, 0, 1, 1);
					*uParam4 = 2;
				}
				break;
			case 1:
				if (!is_ped_on_mount(iParam0))
				{
					iVar3 = _get_last_mount(iParam0);
					if (!is_entity_dead(iVar3))
					{
						_task_smart_flee_style_ped(iVar3, iParam0, 6, 0, 4f, -1, 0);
					}
					if (bParam6)
					{
						_0x4820a6939d7cef28(Global_35, 0);
						_hide_ped_weapons(Global_35, 2, false);
					}
					open_sequence_task(&iVar4);
					if (bParam6)
					{
						task_swap_weapon(0, 0, 0, 0, 0);
					}
					task_enter_anim_scene(0, iParam1, sParam2, sParam3, iParam5, bParam7, 0, 20000, -1082130432);
					func_168(iParam0, &iVar4, 0, 0, 1, 1);
					*uParam4 = 2;
				}
				break;
			case 2:
				if (bParam7)
				{
					if (_0x3ab6c7b0bb0df4b1(iParam0, iParam1))
					{
						return true;
					}
				}
				else if (func_170(iParam0, 242628503))
				{
					if (!bParam6 || get_sequence_progress(iParam0) > 0)
					{
						if (_0x23e33cb9f4a3f547(iParam1, sParam3))
						{
							if (!_0x3b393716c3fd8237(iParam0) && _0x337f1cc8ee895601(iParam1, sParam2))
							{
								*uParam4 = 3;
								return true;
							}
						}
					}
				}
				break;
			case 3:
				return true;
		}
	}
	return false;
}

void func_475(var uParam0, var uParam1)
{
	*uParam1 = *uParam0;
	uParam1->f_1 = uParam0->f_1;
	uParam1->f_2 = uParam0->f_2;
	uParam1->f_2.f_1 = uParam0->f_2.f_1;
	uParam1->f_4 = uParam0->f_4;
	uParam1->f_4.f_1 = uParam0->f_4.f_1;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_6.f_1 = uParam0->f_6.f_1;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_8.f_1 = uParam0->f_8.f_1;
	uParam1->f_10 = uParam0->f_10;
	uParam1->f_10.f_1 = uParam0->f_10.f_1;
	uParam1->f_12 = uParam0->f_12;
	uParam1->f_13 = uParam0->f_13;
	uParam1->f_14 = uParam0->f_14;
	uParam1->f_15 = uParam0->f_15;
	uParam1->f_16 = uParam0->f_16;
	uParam1->f_17 = uParam0->f_17;
	uParam1->f_18 = uParam0->f_18;
	uParam1->f_19 = uParam0->f_19;
	uParam1->f_23 = uParam0->f_23;
	uParam1->f_24 = uParam0->f_24;
	uParam1->f_25 = uParam0->f_25;
	uParam1->f_20 = uParam0->f_20;
	uParam1->f_21 = uParam0->f_21;
	uParam1->f_22 = uParam0->f_22;
	uParam1->f_26 = uParam0->f_26;
	uParam1->f_27 = uParam0->f_27;
}

int func_476(int iParam0)
{
	iVar0 = func_491(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_519(iVar0);
}

int func_477(int iParam0, int iParam1)
{
	if (Global_1058888->f_40501 >= 32)
	{
		return -1;
	}
	Var0 = -1;
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	if (Global_1058888->f_40501 == 0)
	{
		*Global_1058888->f_40501.f_1[Global_1058888->f_40501] = { Var0 };
		Global_1058888->f_40501++;
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < Global_1058888->f_40501)
	{
		if (iParam0 == &Global_1058888->f_40501.f_1[iVar2])
		{
			*Global_1058888->f_40501.f_1[iVar2] = { Var0 };
			return iVar2;
		}
		else if (iParam0 > &Global_1058888->f_40501.f_1[iVar2])
		{
			iVar2++;
		}
		else if (iParam0 < &Global_1058888->f_40501.f_1[iVar2])
		{
			func_520(iVar2);
			*Global_1058888->f_40501.f_1[iVar2] = { Var0 };
			return iVar2;
		}
	}
	if (Global_1058888->f_40501 < 31)
	{
		iVar2 = Global_1058888->f_40501;
		*Global_1058888->f_40501.f_1[iVar2] = { Var0 };
		Global_1058888->f_40501++;
		if (Global_1058888->f_40501 > 32)
		{
			Global_1058888->f_40501 = 32;
		}
		return iVar2;
	}
	return -1;
}

void func_478()
{
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

bool func_479()
{
	if (Global_1935630->f_44 != 0 && Global_1935630->f_44 != -1569615261)
	{
		return true;
	}
	return false;
}

bool func_480(var uParam0, float fParam1)
{
	if (!func_58(uParam0))
	{
		return false;
	}
	if (func_59(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

bool func_481()
{
	if (is_bit_set(get_random_int_in_range(0, 65536), 0))
	{
		return true;
	}
	return false;
}

int func_482(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_483(int iParam0)
{
	iVar0 = -1;
	if (func_521(iParam0, &iVar0, 1))
	{
		return _0x1f0e401031e20146(iVar0, func_522(iParam0));
	}
	return false;
}

float func_484(int iParam0)
{
	switch (iParam0->f_205.f_385)
	{
		case 1:
			iVar0 = &iParam0->f_205[iParam0->f_205.f_217];
			break;
		case 2:
			iVar0 = &iParam0->f_205[iParam0->f_205.f_273];
			break;
		case 3:
			iVar0 = &iParam0->f_205[iParam0->f_205.f_301];
			break;
		case 4:
			iVar0 = &iParam0->f_205[iParam0->f_205.f_329];
			break;
	}
	if (!_does_anim_scene_exist(iVar0))
	{
		return 0f;
	}
	if (!_is_anim_scene_loaded(iVar0, true, false))
	{
		return 0f;
	}
	if (_is_anim_scene_started(iVar0, false))
	{
		return _get_anim_scene_progress(iVar0);
	}
	else if (_is_anim_scene_finished(iVar0, false))
	{
		return 1f;
	}
	return 0f;
}

int func_485(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_486(int iParam0)
{
	if (!func_158(iParam0))
	{
		return false;
	}
	return func_523(iParam0, 33554432);
}

bool func_487(int iParam0)
{
	if (!func_524(iParam0))
	{
		return false;
	}
	return func_525(iParam0);
}

int func_488()
{
	return Global_40.f_4283.f_1;
}

int func_489(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	else if (iParam0 <= 10)
	{
		return 0;
	}
	else if (iParam0 <= 29)
	{
		return 1;
	}
	else if (iParam0 <= 32)
	{
		return 2;
	}
	else if (iParam0 <= 36)
	{
		return 3;
	}
	else if (iParam0 <= 39)
	{
		return 4;
	}
	else if (iParam0 <= 49)
	{
		return 7;
	}
	else if (iParam0 <= 56)
	{
		return 6;
	}
	else if (iParam0 <= 61)
	{
		return 8;
	}
	else if (iParam0 <= 76)
	{
		return 9;
	}
	else if (iParam0 <= 92)
	{
		return 10;
	}
	else if (iParam0 <= 106)
	{
		return 11;
	}
	else if (iParam0 <= 113)
	{
		return 12;
	}
	else if (iParam0 <= 115)
	{
		return 13;
	}
	else if (iParam0 <= 119)
	{
		return 14;
	}
	else if (iParam0 <= 125)
	{
		return 15;
	}
	else if (iParam0 <= 127)
	{
		return 16;
	}
	return -1;
}

int func_490(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return -2137625828;
		case 1:
			return 1039226266;
		case 2:
			return 493546894;
		case 3:
			return -2119728378;
		case 4:
			if (!bParam1 || func_215() != -1)
			{
				return -1308265478;
			}
			if (func_487(45))
			{
				return -1308265478;
			}
			else
			{
				return -1738342532;
			}
			break;
		case 5:
			return -1147969487;
		case 6:
			return -1147969487;
		case 7:
			return -1147969487;
		case 8:
			return 537788226;
		case 9:
			return -1391142299;
		case 10:
			return 1178102426;
		case 11:
			return 1608357655;
		case 12:
			if (!bParam1 || func_215() != -1)
			{
				return -650528936;
			}
			if (func_487(45))
			{
				return -650528936;
			}
			else
			{
				return 139139039;
			}
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			if (!bParam1 || func_215() != -1)
			{
				return -877373104;
			}
			if (func_487(45))
			{
				return -877373104;
			}
			else
			{
				return -1618764825;
			}
			break;
	}
	return 0;
}

int func_491(int iParam0)
{
	if (Global_1058888->f_40501 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar1 = (Global_1058888->f_40501 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if (&Global_1058888->f_40501.f_1[iVar2] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if (&Global_1058888->f_40501.f_1[iVar2] < iParam0)
		{
			iVar0 = iVar2 + 1;
		}
		else
		{
			return iVar2;
		}
	}
	return -1;
}

bool func_492(int iParam0, bool bParam1)
{
	if (func_215() != -1)
	{
		return false;
	}
	if (!func_265(iParam0))
	{
		return false;
	}
	if (!_0x800df3fc913355f3(func_273(iParam0)))
	{
		return false;
	}
	if (bParam1 && !does_entity_exist(func_402(iParam0)))
	{
		return false;
	}
	return !_0xeb98b38ca60742d7(func_273(iParam0));
}

void func_493(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_494(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_446(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_495(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_496(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

int func_497(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_498(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (func_182(iParam1->f_6))
	{
		if (bParam7 || is_bit_set(*iParam1, 11))
		{
			return;
		}
		func_183(&(iParam1->f_6), 0, 1);
	}
	if (!func_182(iParam1->f_6) && !is_bit_set(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_441(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_526(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824, 0, 1704213876, iParam1->f_10, 0);
			if (func_182(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_505(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_527(iParam1->f_6, 17, 1, 1);
				}
				if (is_bit_set(*iParam1, 1))
				{
					if (is_bit_set(*iParam1, 3))
					{
						func_528(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_416(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (is_bit_set(*iParam1, 10))
				{
					func_527(iParam1->f_6, 16, 1, 1);
				}
				if (!is_bit_set(*iParam1, 0) || is_bit_set(*iParam1, 13))
				{
					func_418(iParam1->f_6, 0, 1);
				}
				else
				{
					func_418(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

int func_499(int iParam0)
{
	iVar0 = get_ped_relationship_group_default_hash(iParam0);
	switch (iVar0)
	{
		case -1448293989:
			return 3;
		case 555364152:
			return 2;
		case -1996978098:
			return 0;
		case 1078461828:
			return 1;
		case -1535431934:
			return 4;
		case -1663301869:
			return 5;
		default:
			break;
	}
	return -1;
}

void func_500(int* iParam0, int iParam1)
{
	if (!func_316(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_317(iParam0, 14);
		}
	}
}

bool func_501(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_502(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_503(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_ped_injured(iParam0))
	{
		return 0;
	}
	iVar4 = _0x4642182a298187d0(iParam0, iParam1, &uVar0, 4, 1);
	if (iVar4 != 0)
	{
		return 1;
	}
	return 0;
}

bool func_504(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
{
	bVar0 = (is_bit_set(*iParam1, 0) && !is_bit_set(*iParam1, 4));
	if (is_bit_set(*iParam1, 13))
	{
		return true;
	}
	if (bParam10)
	{
		if (is_bit_set(*iParam1, 20))
		{
			if (!is_bit_set(*iParam0, 25))
			{
				set_bit(iParam0, 24);
			}
			return true;
		}
	}
	if (is_bit_set(*iParam1, 9))
	{
		clear_bit(iParam1, 9);
		return true;
	}
	if (bParam6)
	{
		if (is_bit_set(*iParam1, 6))
		{
			return true;
		}
	}
	else if (is_bit_set(*iParam1, 5))
	{
		return true;
	}
	if (is_bit_set(*iParam1, 7))
	{
		if (fParam5 > iParam1->f_4)
		{
			return true;
		}
	}
	if (!is_bit_set(*iParam1, 17))
	{
		if (bParam3)
		{
			if (bParam4)
			{
				return true;
			}
		}
	}
	if (!is_bit_set(*iParam1, 18))
	{
		if (is_bit_set(*iParam1, 8))
		{
			bVar1 = false;
			if (fParam9 > -1f)
			{
				if (fParam9 < iParam1->f_3)
				{
					bVar1 = true;
				}
			}
			if (!bParam7)
			{
				if (bParam8 || bVar1)
				{
					return true;
				}
			}
		}
	}
	if (!is_bit_set(*iParam1, 2))
	{
		if (is_bit_set(*iParam1, 1))
		{
			if (iParam11 < iParam1->f_14)
			{
				return true;
			}
		}
	}
	return !bVar0;
}

void func_505(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (bParam3 && !func_182(iParam0))
	{
		return;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar0 = func_319(iParam0);
	func_527(iParam0, 18, 0, 1);
	func_527(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = _uiprompt_get_group_id_for_target_entity(iParam1);
	}
	_uiprompt_set_group((*Global_1945938)[iVar0]->f_3, iParam4, iParam2);
}

bool func_506(int iParam0, bool bParam1)
{
	if (bParam1 && !func_182(iParam0))
	{
		return false;
	}
	iVar0 = func_319(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

bool func_507(int iParam0, bool bParam1)
{
	if (bParam1 && !func_182(iParam0))
	{
		return false;
	}
	iVar0 = func_319(iParam0);
	return _uiprompt_is_pressed((*Global_1945938)[iVar0]->f_3);
}

void func_508(int iParam0, bool bParam1)
{
	if (bParam1 && !func_182(iParam0))
	{
		return;
	}
	iVar0 = func_319(iParam0);
	_uiprompt_restart_modes((*Global_1945938)[iVar0]->f_3);
}

bool func_509()
{
	switch (Global_1935630->f_44)
	{
		case -164645981:
		case -160924582:
		case 827679807:
		case 1247405313:
			return true;
		default:
			break;
	}
	return false;
}

int func_510()
{
	return get_player_group(get_player_index());
}

int func_511(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return -1;
	}
	if (!func_529(iParam1, &iVar0, &iVar1, 0, 0))
	{
		return -1;
	}
	return func_530(iParam0, iVar0, iVar1, bParam2);
}

Vector3 func_512(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -5511.963f, -2916.757f, -2.75131f;
		case 1:
			return -5509.715f, -2909.147f, 0.6699f;
		case 2:
			return -5488.088f, -2935.998f, -1.40398f;
		case 3:
			return -5482.864f, -2934.063f, -1.3961f;
		case 4:
			return -5532.449f, -2927.814f, -2.36092f;
		case 5:
			return -5526.629f, -2927.384f, -2.36093f;
		case 6:
			return -5483.338f, -2959.907f, -2.68245f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_513(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_531(iVar0, iParam0, bParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

Vector3 func_514(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -5511.963f, -2916.757f, -2.75131f;
		case 1:
			return -5509.715f, -2909.147f, 0.6699f;
		case 2:
			return -5488.088f, -2935.998f, -1.40398f;
		case 3:
			return -5482.864f, -2934.063f, -1.3961f;
		case 4:
			return -5489.375f, -2909.036f, -2.15232f;
		case 5:
			return -5530.926f, -2964.578f, -2.25008f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_515(var uParam0, int iParam1, var uParam2)
{
	if (*uParam2)
	{
		return 1;
	}
	if (!func_469(iParam1, &iVar0))
	{
		return 0;
	}
	if ((*uParam0)[iVar0]->f_35)
	{
		*uParam2 = 1;
		return 1;
	}
	if (_does_anim_scene_exist(uParam0[iVar0]) && (_is_anim_scene_loading(uParam0[iVar0], true) || _is_anim_scene_loaded(uParam0[iVar0], true, false)))
	{
		if (!is_string_null_or_empty((*uParam0)[iVar0]->f_2))
		{
			reset_anim_scene(uParam0[iVar0], (*uParam0)[iVar0]->f_2);
			*uParam2 = 1;
		}
		else
		{
			reset_anim_scene(uParam0[iVar0], 0);
			*uParam2 = 1;
		}
	}
	return 1;
}

int func_516(var uParam0)
{
	iVar0 = uParam0->f_245;
	if (uParam0->f_245.f_27)
	{
		return 1;
	}
	if (func_469(iVar0, &iVar1))
	{
		if (func_532((*uParam0)[iVar1], uParam0->f_245.f_12) || uParam0->f_245.f_26 == 1)
		{
			uParam0->f_245.f_27 = 1;
			return 1;
		}
	}
	return 0;
}

Vector3 func_517(int iParam0, int iParam1, char* sParam2, char* sParam3, bool bParam4)
{
	if (!bParam4 && is_ped_injured(iParam0))
	{
		return 0f, 0f, 0f;
	}
	if (!_does_anim_scene_exist(iParam1))
	{
		return 0f, 0f, 0f;
	}
	if (_get_anim_scene_entity_matrix(iParam1, sParam2, &vVar0, true, sParam3, 2))
	{
		return vVar0;
	}
	return 0f, 0f, 0f;
}

bool func_518(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

int func_519(int iParam0)
{
	iVar0 = iParam0;
	while (iVar0 < Global_1058888->f_40501)
	{
		if (iVar0 + 1 < 32)
		{
			*Global_1058888->f_40501.f_1[iVar0] = { *(Global_1058888->f_40501.f_1[iVar0 + 1]) };
		}
		iVar0++;
	}
	Var1 = -1;
	if (Global_1058888->f_40501 < 32)
	{
		*Global_1058888->f_40501.f_1[Global_1058888->f_40501] = { Var1 };
	}
	Global_1058888->f_40501 = (Global_1058888->f_40501 - 1);
	if (Global_1058888->f_40501 < 0)
	{
		Global_1058888->f_40501 = 0;
	}
	return 1;
}

int func_520(int iParam0)
{
	iVar0 = (Global_1058888->f_40501 - 1);
	Var1 = -1;
	while (iVar0 >= iParam0)
	{
		if (iVar0 + 1 < 32)
		{
			*(Global_1058888->f_40501.f_1[iVar0 + 1]) = { *Global_1058888->f_40501.f_1[iVar0] };
		}
		iVar0 = (iVar0 - 1);
	}
	*Global_1058888->f_40501.f_1[iParam0] = { Var1 };
	Global_1058888->f_40501++;
	if (Global_1058888->f_40501 > 32)
	{
		Global_1058888->f_40501 = 32;
	}
	return 1;
}

bool func_521(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0->f_205.f_385)
	{
		case 1:
			*iParam1 = &iParam0->f_205[iParam0->f_205.f_217];
			break;
		case 2:
			*iParam1 = &iParam0->f_205[iParam0->f_205.f_273];
			break;
		case 3:
			*iParam1 = &iParam0->f_205[iParam0->f_205.f_301];
			break;
		case 4:
			*iParam1 = &iParam0->f_205[iParam0->f_205.f_329];
			break;
	}
	if (!_does_anim_scene_exist(*iParam1))
	{
		*iParam1 = -1;
		return false;
	}
	if (bParam2 && ((!_is_anim_scene_loaded(*iParam1, true, false) || !_is_anim_scene_started(*iParam1, false)) || _is_anim_scene_finished(*iParam1, false)))
	{
		*iParam1 = -1;
		return false;
	}
	return true;
}

char* func_522(int iParam0)
{
	switch (iParam0->f_205.f_385)
	{
		case 1:
			return iParam0->f_205.f_217.f_12;
		case 2:
			return iParam0->f_205.f_273.f_12;
		case 3:
			return iParam0->f_205.f_301.f_12;
		case 4:
			return iParam0->f_205.f_329.f_12;
	}
	return "";
}

bool func_523(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23118[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0] && iParam1) != 0;
}

bool func_524(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_525(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

int func_526(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
{
	if (is_string_null_or_empty(sParam0))
	{
		return 0;
	}
	if (!_0xbc0884bc590951c7(iParam1, 0))
	{
		return 0;
	}
	if (!does_entity_exist(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_446(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == (*Global_1945938)[iVar0]->f_11 && iParam1 == (*Global_1945938)[iVar0]->f_4)
				{
					if (iParam3 <= Global_1945938[iVar0])
					{
						return iVar0;
					}
				}
				Jump @140; //curOff = 127
				if (iVar1 == 0)
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
			if (iVar1 != 0)
			{
				func_533(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, uParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_527(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_182(iParam0))
	{
		return;
	}
	iVar0 = func_319(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1945938)[iVar0]->f_3, iParam1, iParam2);
}

void func_528(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	if (bParam4 && !func_182(iParam0))
	{
		return;
	}
	iVar0 = func_319(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(10, sParam1, sParam2, sParam3));
}

bool func_529(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	bVar0 = func_215() != -1;
	switch (iParam0)
	{
		case 76:
			*uParam1 = 0;
			if (bParam3)
			{
				*iParam2 = 47;
			}
			else
			{
				*iParam2 = 63;
			}
			if (bVar0)
			{
				*iParam2 = 5;
			}
			break;
		case 105:
			*uParam1 = 69;
			if (bParam3)
			{
				*iParam2 = 127;
			}
			else
			{
				*iParam2 = 136;
			}
			if (bVar0)
			{
				*iParam2 = 72;
			}
			break;
		case 5:
			*uParam1 = 137;
			*iParam2 = 324;
			if (bVar0)
			{
				*iParam2 = 142;
			}
			break;
		case 61:
			*uParam1 = 380;
			*iParam2 = 381;
			if (bVar0)
			{
				*iParam2 = 380;
			}
			break;
		case 78:
			*uParam1 = 382;
			*iParam2 = 431;
			if (bVar0)
			{
				*iParam2 = 384;
			}
			break;
		case 92:
			*uParam1 = 443;
			*iParam2 = 471;
			if (bVar0)
			{
				*iParam2 = 443;
			}
			break;
		case 26:
			*uParam1 = 472;
			if (bParam3)
			{
				*iParam2 = 500;
			}
			else
			{
				*iParam2 = 502;
			}
			if (bVar0)
			{
				*iParam2 = 472;
			}
			break;
		case 38:
			*uParam1 = 508;
			*iParam2 = 553;
			if (bVar0)
			{
				*iParam2 = 509;
			}
			break;
		case 68:
			*uParam1 = 554;
			*iParam2 = 565;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 65:
			*uParam1 = 566;
			*iParam2 = 588;
			if (bVar0)
			{
				*iParam2 = 566;
			}
			break;
		case 69:
			*uParam1 = 589;
			if (bParam3)
			{
				*iParam2 = 598;
			}
			else
			{
				*iParam2 = 612;
			}
			if (bVar0)
			{
				*iParam2 = 590;
			}
			break;
		case 75:
			*uParam1 = 503;
			*iParam2 = 506;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 93:
			*uParam1 = 613;
			*iParam2 = 625;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 95:
			*uParam1 = 626;
			*iParam2 = 641;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 97:
			*uParam1 = 642;
			*iParam2 = 643;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 3:
			*uParam1 = 644;
			*iParam2 = 656;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 6:
			*uParam1 = 657;
			*iParam2 = 658;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 32:
			*uParam1 = 325;
			*iParam2 = 344;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 82:
			*uParam1 = 659;
			if (bParam3)
			{
				*iParam2 = 673;
			}
			else
			{
				*iParam2 = 690;
			}
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 35:
			*uParam1 = 691;
			*iParam2 = 700;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 56:
			*uParam1 = 701;
			*iParam2 = 708;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 22:
			if (bParam4)
			{
				*uParam1 = 715;
			}
			else
			{
				*uParam1 = 715;
			}
			*iParam2 = 723;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 110:
			*uParam1 = 724;
			*iParam2 = 730;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 64:
			*uParam1 = 736;
			*iParam2 = 740;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 66:
			*uParam1 = 745;
			*iParam2 = 750;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 70:
			*uParam1 = 751;
			*iParam2 = 754;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 77:
			*uParam1 = 731;
			*iParam2 = 732;
			break;
		case 96:
			*uParam1 = 741;
			*iParam2 = 743;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 29:
			*uParam1 = 744;
			*iParam2 = 744;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 100:
			*uParam1 = 755;
			*iParam2 = 763;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 102:
			*uParam1 = 764;
			*iParam2 = 767;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 72:
			*uParam1 = 733;
			*iParam2 = 735;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 124:
			*uParam1 = 791;
			*iParam2 = 793;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 86:
			*uParam1 = 768;
			*iParam2 = 772;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 126:
			*uParam1 = 773;
			*iParam2 = 779;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 120:
			*uParam1 = 432;
			*iParam2 = 442;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 115:
			*uParam1 = 345;
			*iParam2 = 375;
			if (bVar0)
			{
				*iParam2 = 375;
			}
			break;
		case 125:
			*uParam1 = 376;
			*iParam2 = 379;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 116:
			*uParam1 = 783;
			*iParam2 = 790;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 21:
			*uParam1 = 780;
			*iParam2 = 782;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 42:
			*uParam1 = 794;
			*iParam2 = 798;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 89:
			*uParam1 = 799;
			*iParam2 = 800;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 23:
			*uParam1 = 801;
			*iParam2 = 801;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 28:
			*uParam1 = 802;
			*iParam2 = 803;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 101:
			*uParam1 = 804;
			*iParam2 = 806;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 117:
			*uParam1 = 507;
			*iParam2 = 507;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 11:
			*uParam1 = 807;
			*iParam2 = 833;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 128:
			*uParam1 = 834;
			*iParam2 = 857;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		default:
			*uParam1 = -1;
			*iParam2 = -1;
			break;
	}
	if (*uParam1 == -1 || *iParam2 == -1)
	{
		return false;
	}
	return true;
}

int func_530(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (is_entity_dead(iParam0) && !bParam3)
	{
		return -1;
	}
	iVar0 = _0x32a1e3b83d501096(iParam0);
	if (!_0x800df3fc913355f3(iVar0))
	{
		return -1;
	}
	iVar1 = iParam1;
	iVar1 = iParam1;
	while (iVar1 <= iParam2)
	{
		iVar2 = iVar1;
		if (func_271(iVar2) != 0 && _0x800df3fc913355f3(func_273(iVar2)))
		{
			if (func_273(iVar2) == iVar0)
			{
				return iVar2;
			}
		}
		iVar1++;
	}
	return -1;
}

void func_531(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_534(iParam1))
		{
			func_287(iParam0, 41788943);
		}
		else if (bParam5)
		{
			_set_random_outfit_variation(iParam0, true);
			bVar0 = true;
		}
	}
	if (is_ped_human(iParam0))
	{
		if (bParam6)
		{
			_0x899a04afcc725d04(iParam0, _0xd42514c182121c23(iParam1));
		}
		if (is_ped_male(iParam0) && !bParam3)
		{
			func_535(iParam0, 0, 1);
		}
		set_ped_config_flag(iParam0, 502, true);
	}
	else if (_is_this_model_a_horse(get_entity_model(iParam0)))
	{
		if (!bParam5)
		{
			_set_ped_outfit_preset(iParam0, 0, 0);
			bVar0 = true;
		}
		if (bParam4)
		{
			func_536(iParam0, 0);
			bVar0 = true;
		}
		func_537(iParam0, bParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

bool func_532(var uParam0, char* sParam1)
{
	if (is_string_null_or_empty(sParam1))
	{
		return true;
	}
	if (!_does_anim_scene_exist(*uParam0))
	{
		return true;
	}
	if (!_0xa9016536015de29d(*uParam0, sParam1))
	{
		return true;
	}
	if (!_0x23e33cb9f4a3f547(*uParam0, sParam1))
	{
		return true;
	}
	if (_0x23e33cb9f4a3f547(*uParam0, sParam1) || _0x0df57f86fe71dbe5(*uParam0, sParam1))
	{
		_0xae6ada8fe7e84acc(*uParam0, sParam1);
	}
	return false;
}

void func_533(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, var uParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	(*Global_1945938)[iParam0]->f_4 = iParam1;
	(*Global_1945938)[iParam0] = iParam4;
	(*Global_1945938)[iParam0]->f_16 = get_id_of_this_thread();
	(*Global_1945938)[iParam0]->f_2 = iParam5;
	(*Global_1945938)[iParam0]->f_6 = { vParam6 };
	(*Global_1945938)[iParam0]->f_9 = fParam9;
	(*Global_1945938)[iParam0]->f_10 = iParam10;
	(*Global_1945938)[iParam0]->f_11 = iParam11;
	(*Global_1945938)[iParam0]->f_12 = { 0f, 0f, 0f };
	(*Global_1945938)[iParam0]->f_5 = iParam12;
	(*Global_1945938)[iParam0]->f_1 = 2;
	(*Global_1945938)[iParam0]->f_17 = -1;
	iVar0 = _uiprompt_register_begin();
	_uiprompt_set_control_action(iVar0, iParam1);
	if (iParam23 != 0)
	{
		_uiprompt_set_control_action(iVar0, iParam23);
	}
	_uiprompt_set_text(iVar0, sParam2);
	if (iParam3 == 4)
	{
		_uiprompt_context_set_point(iVar0, vParam6);
		_uiprompt_context_set_size(iVar0, fParam9);
	}
	else if (iParam3 == 2)
	{
		_0x4d107406667423be(iVar0, iParam10);
	}
	else if (iParam3 == 5)
	{
		_0x4d107406667423be(iVar0, iParam11);
		_uiprompt_context_set_point(iVar0, 0f, 0f, 0f);
		_uiprompt_context_set_size(iVar0, fParam9);
	}
	_uiprompt_set_priority(iVar0, iParam4);
	_uiprompt_set_transport_mode(iVar0, iParam5);
	_uiprompt_set_attribute(iVar0, 18, 1);
	if (bParam22)
	{
		_0x53ce46c01a089da1(iVar0, 1);
	}
	switch (iParam14)
	{
		case 0:
			_uiprompt_set_standard_mode(iVar0, 0);
			break;
		case 2:
			_uiprompt_set_standard_mode(iVar0, 1);
			break;
		case 1:
			_uiprompt_set_pressed_timed_mode(iVar0, iParam16);
			break;
		case 3:
			_uiprompt_set_hold_indefinitely_mode(iVar0);
			break;
		case 6:
			_uiprompt_set_hold_auto_fill_mode(iVar0, iParam16, uParam15);
			if (bParam25)
			{
				_uiprompt_set_attribute(iVar0, 24, 1);
			}
			break;
		case 7:
			_uiprompt_set_mash_mode(iVar0, iParam17);
			break;
		case 8:
			_uiprompt_set_mash_auto_fill_mode(iVar0, iParam16, iParam17);
			break;
		case 13:
			_uiprompt_set_mash_indefinitely_mode(iVar0);
			break;
		case 15:
			_uiprompt_set_target_mode(iVar0, 0.5f, 0.1f, 0);
			break;
		case 9:
			_uiprompt_set_mash_with_resistance_mode(iVar0, iParam17, iParam18, iParam19);
			break;
		case 4:
		case 5:
			_uiprompt_set_standardized_hold_mode(iVar0, iParam24);
			break;
		case 10:
			_uiprompt_set_mash_with_resistance_can_fail_mode(iVar0, iParam17, iParam18, iParam19);
			break;
		case 11:
			_uiprompt_set_mash_manual_mode(iVar0, (1f / to_float(iParam17)), iParam18, 0f, iParam19);
			break;
		case 12:
			_uiprompt_set_mash_manual_can_fail_mode(iVar0, (1f / to_float(iParam17)), iParam18, 0f, iParam19);
			break;
		case 14:
			_uiprompt_set_rotate_mode(iVar0, iParam20, iParam21);
			_uiprompt_set_attribute(iVar0, 10, 1);
			break;
	}
	_uiprompt_register_end(iVar0);
	(*Global_1945938)[iParam0]->f_3 = iVar0;
	func_494(iParam0, 1);
	func_495(iParam0, 1);
	func_496(iParam0, 128);
}

bool func_534(int iParam0)
{
	switch (iParam0)
	{
		case -2086875988:
		case -2081966149:
		case -2075588078:
		case -2046943672:
		case -2045269112:
		case -2019245895:
		case -2014377075:
		case -2012656841:
		case -2007761031:
		case -2006398858:
		case -1980150291:
		case -1977628089:
		case -1966295439:
		case -1925758912:
		case -1922688829:
		case -1901892087:
		case -1835251821:
		case -1769295812:
		case -1765531164:
		case -1745321414:
		case -1714108174:
		case -1688959031:
		case -1676898583:
		case -1646049752:
		case -1632694866:
		case -1629501717:
		case -1614719852:
		case -1607722277:
		case -1603909164:
		case -1579174863:
		case -1533320518:
		case -1520417507:
		case -1483559144:
		case -1464743433:
		case -1458432563:
		case -1448924971:
		case -1423504183:
		case -1418951751:
		case -1329383517:
		case -1270572406:
		case -1263119823:
		case -1258801034:
		case -1161832176:
		case -1154137714:
		case -1135378761:
		case -1116138991:
		case -1112260815:
		case -1101883765:
		case -1070459848:
		case -1067338663:
		case -1049237750:
		case -1047115350:
		case -1002525623:
		case -944019243:
		case -937140420:
		case -920985758:
		case -823649241:
		case -820854800:
		case -814357706:
		case -792643455:
		case -781994133:
		case -779472377:
		case -756996682:
		case -747792496:
		case -695175124:
		case -670436990:
		case -639059862:
		case -607414220:
		case -572941403:
		case -558131359:
		case -550289621:
		case -538512200:
		case -464684897:
		case -446093729:
		case -373817191:
		case -350169314:
		case -343178443:
		case -272492171:
		case -265719023:
		case -253049070:
		case -229065721:
		case -216561112:
		case -205121720:
		case -167880668:
		case -161553439:
		case -98087368:
		case -77509825:
		case -71527226:
		case -55633154:
		case -46607261:
		case -46389610:
		case -17071680:
		case 4991732:
		case 20251888:
		case 65010948:
		case 68512371:
		case 93760123:
		case 122377164:
		case 184120185:
		case 224310170:
		case 230517792:
		case 236407543:
		case 254009656:
		case 300505615:
		case 316325071:
		case 323324563:
		case 351634388:
		case 382040614:
		case 401817002:
		case 426274298:
		case 430764551:
		case 434730246:
		case 477547053:
		case 482703333:
		case 513427234:
		case 594026681:
		case 624882545:
		case 686051865:
		case 716675958:
		case 755774783:
		case 774211111:
		case 794654164:
		case 823321772:
		case 836525272:
		case 848012614:
		case 852072701:
		case 888681950:
		case 907019741:
		case 972892334:
		case 988668512:
		case 993577366:
		case 1006076574:
		case 1010320580:
		case 1020041649:
		case 1051047356:
		case 1092921608:
		case 1143979484:
		case 1149349599:
		case 1231309423:
		case 1234550949:
		case 1245530084:
		case 1253299569:
		case 1266159496:
		case 1266592839:
		case 1270841555:
		case 1276534479:
		case 1281122482:
		case 1294255258:
		case 1304311224:
		case 1320786287:
		case 1347320453:
		case 1367851675:
		case 1372065533:
		case 1407740785:
		case 1419055257:
		case 1436424114:
		case 1439158431:
		case 1446935015:
		case 1479772615:
		case 1483156731:
		case 1485366395:
		case 1599685341:
		case 1604947233:
		case 1643370744:
		case 1701730764:
		case 1705504999:
		case 1726560673:
		case 1785923813:
		case 1815090590:
		case 1841492722:
		case 1966444740:
		case 1998496121:
		case 1999476738:
		case 2000903921:
		case 2001384088:
		case 2029634351:
		case 2041494024:
		case 2042088799:
		case 2100656433:
		case 2115504616:
		case 2141515026:
			return true;
		default:
			break;
	}
	return false;
}

void func_535(int iParam0, int iParam1, bool bParam2)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	_set_ped_component_disabled(iParam0, -1725579161, 1);
	if (bParam2)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

void func_536(int iParam0, bool bParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	_set_ped_body_component(iParam0, 1268180497);
	if (bParam1)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

void func_537(int iParam0, bool bParam1)
{
	if (bParam1 == 1)
	{
		_set_ped_face_feature(iParam0, 41611, 0f);
	}
	else
	{
		_set_ped_face_feature(iParam0, 41611, 1f);
	}
}

