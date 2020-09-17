void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	sLocal_14 = "props_misc@campfires@5_logs";
	sLocal_15 = "Script_PropCampfire";
	Var0 = 6;
	Var0.f_7 = 6;
	Var0.f_26.f_29 = 1;
	Var0.f_57 = 7;
	Var0.f_57.f_21 = -1;
	Var0.f_57.f_22 = 1;
	Var0.f_57.f_23 = 1;
	Var0.f_57.f_36 = 1;
	Var0.f_57.f_37 = -1;
	Var0.f_57.f_41 = 4;
	Var0.f_57.f_46 = 4;
	Var0.f_57.f_57 = 1;
	Var0.f_150 = 16191;
	Var0.f_151 = 131136;
	Var0.f_154 = -1;
	Var0.f_156 = -1;
	Var0.f_162 = 18;
	Var0.f_186 = 6;
	Var0.f_187 = -1;
	Var0.f_191 = -2016812721;
	Var0.f_197 = -1;
	Var0.f_207 = -1;
	Var0.f_208 = 1;
	Var0.f_210 = 1085378666;
	Var0.f_212.f_9 = 1084227584;
	Var0.f_212.f_10 = 1073741824;
	Var0.f_212.f_30 = 1;
	if (has_force_cleanup_occurred(523))
	{
		_0xe7282390542f570d(vLocal_16.x);
		func_1(&Var0);
		terminate_this_thread();
	}
	if (!_does_scenario_point_exist(vLocal_16.y))
	{
		_0xe7282390542f570d(vLocal_16.x);
		func_1(&Var0);
		terminate_this_thread();
	}
	Var0.f_249 = { _get_scenario_point_coords(vLocal_16.y, true) };
	Var0.f_252 = _get_scenario_point_heading(vLocal_16.y, true);
	if (func_2(&Var0))
	{
		_0xe7282390542f570d(vLocal_16.x);
		func_1(&Var0);
		terminate_this_thread();
	}
	iVar255 = 0;
	while (!func_3(1) && !bScriptParam_1)
	{
		switch (Var0.f_211)
		{
			case 0:
				fVar256 = func_4(Global_35, Var0.f_249, 1);
				if (!func_5() || fScriptParam_2 < 6400f)
				{
					func_6(&(Var0.f_151), 131072);
					func_7(&Var0, vLocal_16.z);
					request_model(Var0.f_210, false);
					func_8(&(Var0.f_211), 1);
				}
				break;
			case 1:
				if (has_model_loaded(Var0.f_210))
				{
					func_8(&(Var0.f_211), 2);
				}
				break;
			case 2:
				Var0.f_152 = create_object(Var0.f_210, Var0.f_249, false, false, false, false, true);
				set_entity_heading(Var0.f_152, Var0.f_252);
				Var0.f_248 = _0x0eb78c2b156635b1(665633627, Var0.f_249, 0f, 0f, 0f, 0.3f, 0.3f, 2f);
				func_8(&(Var0.f_211), 3);
				break;
			case 3:
				if (func_2(&Var0))
				{
					iVar255 = 1;
				}
				else
				{
					fVar256 = func_4(Global_35, Var0.f_249, 1);
					if (fScriptParam_2 < func_9() || !Var0.f_212.f_34)
					{
						func_10(&(Var0.f_212), &(Var0.f_152));
					}
					if (!func_11(&Global_1935630, 2097152))
					{
						if (fScriptParam_2 < func_12())
						{
							func_13(&Var0, 0);
						}
					}
				}
				break;
		}
		wait(0);
	}
	func_1(&Var0);
	_0xe7282390542f570d(vLocal_16.x);
}

void func_1(var uParam0)
{
	if (does_entity_exist(uParam0->f_152))
	{
		delete_object(&(uParam0->f_152));
	}
	if (_does_volume_exist(uParam0->f_248))
	{
		_delete_volume(uParam0->f_248);
	}
	func_14(uParam0, 1);
}

bool func_2(var uParam0)
{
	iVar0 = get_game_timer();
	if ((iVar0 - uParam0->f_253) > 1000)
	{
		iVar1 = func_15(uParam0->f_249);
		if (func_16(iVar1, 8))
		{
			return true;
		}
		if (func_16(iVar1, 1) || uParam0->f_254)
		{
			if (func_16(uParam0->f_150, 8192))
			{
				func_17(&(uParam0->f_150), 64);
			}
		}
		else if (func_16(iVar1, 2) && !uParam0->f_254)
		{
			if (!func_16(uParam0->f_150, 8192))
			{
				func_17(&(uParam0->f_150), 128);
			}
		}
		else if (func_18(0, 0, 1) && !func_19())
		{
			if (func_16(uParam0->f_150, 8192))
			{
				func_17(&(uParam0->f_150), 64);
			}
		}
		else if (!uParam0->f_254)
		{
			if (!func_16(uParam0->f_150, 8192))
			{
				func_17(&(uParam0->f_150), 128);
			}
		}
		if (func_16(iVar1, 32))
		{
			func_20(uParam0, 1, 0, 0, 0, 0, 0);
		}
		else if (func_16(iVar1, 4))
		{
			func_20(uParam0, 0, 1, 0, 0, 0, 0);
		}
		else if (func_16(iVar1, 16))
		{
			func_20(uParam0, 0, 0, 1, 0, 0, 0);
		}
		else if (func_16(iVar1, 64))
		{
			func_20(uParam0, 0, 0, 0, 1, 0, 0);
		}
		else if (func_16(iVar1, 128))
		{
			func_20(uParam0, 0, 0, 0, 0, 1, 0);
		}
		else if (func_16(iVar1, 256))
		{
			func_20(uParam0, 0, 0, 0, 0, 0, 1);
		}
		uParam0->f_253 = iVar0;
	}
	return false;
}

bool func_3(bool bParam0)
{
	if (_0x9e4ef615e307fbbe())
	{
		switch (_0x54ae4fdeefeab77e())
		{
			case 0:
				return true;
			case 1:
				return true;
			case 2:
				if (!bParam0)
				{
					return true;
				}
				break;
			case 4:
				return true;
			case 3:
				return true;
			default:
				return true;
		}
	}
	return false;
}

float func_4(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!is_entity_dead(iParam0))
	{
		vVar0 = { get_entity_coords(iParam0, true, false) };
	}
	else
	{
		vVar0 = { get_entity_coords(iParam0, false, false) };
	}
	if (bParam4)
	{
		return vdist2(vVar0, vParam1);
	}
	return func_21(vVar0, vParam1);
}

bool func_5()
{
	return (Global_1894899 & 1 != 0 && func_22() != -1);
}

void func_6(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_7(var uParam0, int iParam1)
{
	if (func_23() == -1)
	{
		if (!func_24(4))
		{
			func_6(&(uParam0->f_150), 8075);
			func_17(&(uParam0->f_150), 64);
			uParam0->f_254 = 1;
			return;
		}
	}
	switch (iParam1)
	{
		case -1189729144:
			func_6(&(uParam0->f_150), 6402);
			if (func_25(1510719693, 1, 0))
			{
				func_17(&(uParam0->f_150), 1);
			}
			break;
		case 1403995973:
			func_6(&(uParam0->f_150), 267);
			if (func_25(1510719693, 1, 0))
			{
				func_17(&(uParam0->f_150), 1);
			}
			break;
		case -2140664311:
			func_6(&(uParam0->f_150), 7435);
			if (func_25(1510719693, 1, 0))
			{
				func_17(&(uParam0->f_150), 1);
			}
			break;
		case -1973379805:
			func_6(&(uParam0->f_150), 7435);
			if (func_25(1510719693, 1, 0))
			{
				func_17(&(uParam0->f_150), 1);
			}
			break;
		case -886679600:
			func_6(&(uParam0->f_150), 6402);
			if (func_25(1510719693, 1, 0))
			{
				func_17(&(uParam0->f_150), 1);
			}
			break;
		case 1228786282:
			func_6(&(uParam0->f_150), 8075);
			func_17(&(uParam0->f_150), 64);
			uParam0->f_254 = 1;
			break;
		case -1241326640:
			func_6(&(uParam0->f_150), 8075);
			func_17(&(uParam0->f_150), 64);
			uParam0->f_254 = 1;
			break;
		case 1588618021:
			func_6(&(uParam0->f_150), 8075);
			func_17(&(uParam0->f_150), 64);
			uParam0->f_212.f_4 = 1;
			uParam0->f_254 = 1;
			break;
		case 1127868139:
			func_6(&(uParam0->f_150), 8075);
			func_17(&(uParam0->f_150), 64);
			uParam0->f_212.f_4 = 1;
			uParam0->f_254 = 1;
			break;
		default:
			break;
	}
}

void func_8(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

float func_9()
{
	if (func_11(&Global_1935630, 2097152))
	{
		return 1600f;
	}
	if (func_5())
	{
		if (func_22() == 5)
		{
			return 3600f;
		}
		else
		{
			return 6400f;
		}
	}
	return 10000f;
}

void func_10(var uParam0, var uParam1)
{
	fVar0 = 0.019f;
	func_26(uParam0);
	if (does_entity_exist(*uParam0))
	{
		fVar1 = get_rain_level();
		if ((fVar1 > 0f && uParam0->f_9 >= 1f) && !uParam0->f_3)
		{
			func_27(uParam0, 4);
		}
		else if (uParam0->f_5)
		{
			func_27(uParam0, 0);
		}
		else if (uParam0->f_2)
		{
			func_27(uParam0, 2);
		}
		else if (uParam0->f_3)
		{
			func_27(uParam0, 5);
		}
		else if (uParam0->f_6)
		{
			func_27(uParam0, 6);
		}
		else if (uParam0->f_7)
		{
			func_27(uParam0, 7);
		}
		else if (uParam0->f_8)
		{
			func_27(uParam0, 8);
		}
		else if (func_29(&(uParam0->f_31), func_28()))
		{
			func_30(uParam0);
		}
	}
	switch (uParam0->f_30)
	{
		case 0:
			if (uParam0->f_1)
			{
				set_task_move_network_signal_float(*uParam0, "LogBurnRate", 0f);
			}
			if (uParam0->f_1 && uParam0->f_9 <= 2f)
			{
				uParam0->f_20 = 0.25f;
				uParam0->f_21 = 0.015f;
				uParam0->f_22 = 0.25f;
				uParam0->f_23 = 0.015f;
				uParam0->f_24 = 0.5f;
				uParam0->f_25 = 0.01f;
				uParam0->f_26 = 0.5f;
				uParam0->f_27 = 0.01f;
				uParam0->f_28 = 0.1f;
			}
			else
			{
				uParam0->f_24 = 1f;
			}
			break;
		case 1:
			if (does_entity_exist(*uParam0) == 0)
			{
				*uParam0 = *uParam1;
			}
			else
			{
				uParam0->f_30 = 2;
			}
			break;
		case 2:
			if (uParam0->f_1)
			{
				func_27(uParam0, 0);
				request_anim_dict(sLocal_14);
				_0x2b6529c54d29037a(sLocal_15);
			}
			else
			{
				if (uParam0->f_5)
				{
					func_27(uParam0, 0);
				}
				else if (uParam0->f_2)
				{
					func_27(uParam0, 2);
				}
				else if (uParam0->f_3)
				{
					func_27(uParam0, 5);
				}
				else if (uParam0->f_6)
				{
					func_27(uParam0, 6);
				}
				else if (uParam0->f_7)
				{
					func_27(uParam0, 7);
				}
				else if (uParam0->f_8)
				{
					func_27(uParam0, 8);
				}
				else
				{
					func_27(uParam0, 0);
				}
				uParam0->f_35 = 1;
			}
			_set_lights_type_for_entity(*uParam0, 20);
			_set_lights_color_for_entity(*uParam0, 255, 50, 9);
			uParam0->f_29 = start_particle_fx_looped_on_entity("ent_amb_campfire_dynamic", *uParam0, 0f, 0f, 0f, 0f, 0f, 0f, 1f, false, false, false);
			if (does_particle_fx_looped_exist(uParam0->f_29))
			{
				set_particle_fx_looped_evolution(uParam0->f_29, "Flames", uParam0->f_27, false);
				set_particle_fx_looped_evolution(uParam0->f_29, "Embers", uParam0->f_25, false);
			}
			uParam0->f_30 = 3;
			break;
		case 3:
			if (!uParam0->f_1)
			{
				uParam0->f_30 = 4;
			}
			else if (has_anim_dict_loaded(sLocal_14) && _0x2c04d89a0fb4e244(sLocal_15))
			{
				task_move_network_by_name(*uParam0, sLocal_15, 0f, false, sLocal_14, 128);
				uParam0->f_30 = 5;
			}
			func_31(&(uParam0->f_31));
			break;
		case 4:
			uParam0->f_34 = 1;
			break;
		case 5:
			if (is_task_move_network_active(*uParam0))
			{
				set_task_move_network_signal_float(*uParam0, "LogCount", uParam0->f_9);
				set_task_move_network_signal_float(*uParam0, "LogSet", uParam0->f_10);
				uParam0->f_30 = 6;
			}
			break;
		case 6:
			set_task_move_network_signal_float(*uParam0, "LogCount", uParam0->f_9);
			set_task_move_network_signal_float(*uParam0, "LogSet", uParam0->f_10);
			if (is_task_move_network_ready_for_transition(*uParam0))
			{
				uParam0->f_34 = 1;
				if (uParam0->f_1 && get_rain_level() <= 0f)
				{
					if (uParam0->f_9 <= 2f)
					{
						uParam0->f_30 = 0;
					}
					else if (_0x844ceee428ea35b0(*uParam0, "BurnPhase") <= 0f || _0x844ceee428ea35b0(*uParam0, "BurnPhase") >= 1f)
					{
						uParam0->f_30 = 8;
					}
					else
					{
						set_task_move_network_signal_float(*uParam0, "LogBurnRate", fVar0);
					}
				}
				else
				{
					uParam0->f_30 = 0;
				}
			}
			break;
		case 7:
			if (is_task_move_network_active(*uParam0))
			{
				if (get_task_move_network_event(*uParam0, "AddLogFinished"))
				{
					uParam0->f_30 = 8;
				}
			}
			break;
		case 8:
			if (is_task_move_network_active(*uParam0))
			{
				if (is_task_move_network_ready_for_transition(*uParam0))
				{
					request_task_move_network_state_transition(*uParam0, "CollapseLog");
					uParam0->f_24 = (uParam0->f_24 + (1f / 5f));
					uParam0->f_30 = 9;
				}
			}
			break;
		case 9:
			if (is_task_move_network_active(*uParam0))
			{
				set_task_move_network_signal_float(*uParam0, "LogBurnRate", fVar0);
				if (get_task_move_network_event(*uParam0, "CollapseLogFinished"))
				{
					uParam0->f_21 = (uParam0->f_21 - (1f / 5f));
					uParam0->f_22 = (uParam0->f_22 - (0.5f / 5f));
					uParam0->f_25 = (uParam0->f_25 - (1f / 5f));
					uParam0->f_26 = (uParam0->f_26 - (1f / 5f));
					uParam0->f_27 = (uParam0->f_27 - (1.55f / 5f));
					uParam0->f_9 = (uParam0->f_9 - 1f);
					if (uParam0->f_9 == 4f)
					{
						uParam0->f_20 = 0.8f;
						uParam0->f_23 = 0.4f;
					}
					else if (uParam0->f_9 == 3f)
					{
						uParam0->f_20 = 0.7f;
						uParam0->f_23 = 0.3f;
					}
					else if (uParam0->f_9 == 2f)
					{
						uParam0->f_20 = 0.6f;
						uParam0->f_23 = 0.2f;
					}
					else if (uParam0->f_9 == 1f)
					{
						uParam0->f_20 = 0.5f;
						uParam0->f_23 = 0.1f;
					}
					uParam0->f_30 = 6;
				}
			}
			break;
		case 10:
			set_task_move_network_signal_float(*uParam0, "LogBurnRate", 0f);
			break;
	}
}

bool func_11(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_12()
{
	if (func_5())
	{
		if (func_22() == 5)
		{
			return 400f;
		}
		else
		{
			return 1600f;
		}
	}
	return 6400f;
}

int func_13(var uParam0, bool bParam1)
{
	if (!func_32(Global_35, 0))
	{
		return 0;
	}
	func_33(uParam0);
	if (uParam0->f_153 > 4 && uParam0->f_153 < 13)
	{
		func_34(0);
	}
	if (uParam0->f_153 > 3)
	{
		if (((uParam0->f_153 != 8 && uParam0->f_153 != 13) && uParam0->f_153 != 4) && uParam0->f_154 != 5)
		{
			_0x18c3dfac458783bb();
			func_35(uParam0);
		}
	}
	else
	{
		if (uParam0->f_153 == 3)
		{
			if (is_ped_active_in_scenario(Global_35, 1))
			{
				iVar0 = func_36(uParam0);
				if (iVar0 >= 0 && iVar0 <= 3)
				{
					func_35(uParam0);
				}
			}
			else if (_0x927b810e43e99932(&(uParam0->f_26)))
			{
				_0x0a5a4f1979abb40e(&(uParam0->f_26));
			}
		}
		if (func_16(uParam0->f_151, 64))
		{
			_display_hud_component(2011163970);
			func_6(&(uParam0->f_151), 64);
		}
	}
	if (func_16(uParam0->f_151, 2097152))
	{
		if (func_37(Global_35, 1, 0, 0) != -1569615261)
		{
			if (has_anim_event_fired(Global_35, 320193935))
			{
				set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
				func_6(&(uParam0->f_151), 2097152);
			}
		}
	}
	switch (uParam0->f_153)
	{
		case 0:
			if (func_38(uParam0))
			{
				func_39(uParam0);
			}
			func_40(uParam0);
			uParam0->f_57.f_31 = 1;
			uParam0->f_57.f_32 = func_16(uParam0->f_150, 8);
			func_41(uParam0, 1);
			break;
		case 1:
			if (func_38(uParam0))
			{
				func_39(uParam0);
			}
			if (func_42(uParam0))
			{
				func_41(uParam0, 2);
			}
			break;
		case 2:
			if (func_38(uParam0))
			{
				func_39(uParam0);
			}
			if (func_43(uParam0))
			{
				func_41(uParam0, 3);
			}
			break;
		case 3:
			if (func_38(uParam0))
			{
				_0x9428447ded71fc7e("Player_Campfire_Scenes");
				func_44(&(uParam0->f_57), 1);
				func_45(&(uParam0->f_57), 2);
				func_39(uParam0);
			}
			func_46(uParam0);
			if (bParam1)
			{
				return 1;
			}
			func_47(8388608);
			if (!func_16(uParam0->f_150, 8192))
			{
				func_48(2048);
			}
			else
			{
				func_49(2048);
			}
			if (!func_16(uParam0->f_151, 131072))
			{
				func_48(1024);
			}
			else
			{
				if (!_does_scenario_point_exist(uParam0[5]))
				{
					if (func_50(uParam0->f_188))
					{
						uParam0->f_188 = { 2.526f, 2.68f, 0f };
					}
					vVar1 = { _get_object_offset_from_coords(get_entity_coords(uParam0->f_152, true, false), get_entity_heading(uParam0->f_152), uParam0->f_188) };
					*uParam0->f_7[5] = { vVar1 + Vector(1f, 0f, 0f) };
					(*uParam0)[5] = _find_closest_active_scenario_point_of_type(vVar1, uParam0->f_191, 1.5f, 0, false);
				}
				func_49(1024);
			}
			if ((get_game_timer() - uParam0->f_194) >= 500)
			{
				if (func_51(uParam0))
				{
					func_17(&(uParam0->f_151), 4194304);
				}
				else
				{
					func_6(&(uParam0->f_151), 4194304);
				}
				uParam0->f_194 = get_game_timer();
			}
			if (func_52(Global_35, uParam0->f_152, 1) > 36f)
			{
				func_53(uParam0);
				func_54(uParam0);
				func_55(8388608);
				if (!func_16(uParam0->f_151, 131072))
				{
					func_49(1024);
				}
				func_41(uParam0, 4);
				if (_0x927b810e43e99932(&(uParam0->f_26)))
				{
					_0x0a5a4f1979abb40e(&(uParam0->f_26));
				}
				return 0;
			}
			if (func_56(2097152) || func_16(uParam0->f_150, 64))
			{
				if (func_16(uParam0->f_150, 8192))
				{
					func_57(uParam0, 0);
					func_6(&(uParam0->f_150), 8192);
				}
				func_55(2097152);
				func_6(&(uParam0->f_150), 64);
			}
			else if (func_56(4194304) || func_16(uParam0->f_150, 128))
			{
				if (!func_16(uParam0->f_150, 8192))
				{
					func_57(uParam0, 1);
					func_17(&(uParam0->f_150), 8192);
				}
				func_55(4194304);
				func_6(&(uParam0->f_150), 128);
			}
			func_58(uParam0);
			if (func_16(uParam0->f_151, 1))
			{
				func_41(uParam0, 6);
				uParam0->f_157 = 10;
				func_17(&(uParam0->f_151), 64);
				_hide_hud_component(2011163970);
			}
			else
			{
				uParam0->f_154 = func_36(uParam0);
				if (uParam0->f_154 != -1 && uParam0->f_154 != 5)
				{
					func_59();
					disable_control_action(0, -209515122, false);
					disable_control_action(0, 1287709438, false);
					disable_control_action(0, -2131587435, false);
				}
				if ((func_60(uParam0->f_154 == 4) && uParam0->f_154 != -1) || (((func_16(uParam0->f_151, 131072) && func_56(268435456)) && func_56(16777216)) && Global_1392040->f_2))
				{
					uParam0->f_155 = func_61();
					_hide_hud_component(2011163970);
					func_17(&(uParam0->f_151), 64);
					func_41(uParam0, 5);
					if ((func_56(16777216) || func_16(uParam0->f_151, 524288)) || Global_1392040->f_2)
					{
						if (func_56(268435456))
						{
							Global_1392040->f_2 = 0;
							func_55(16777216);
							func_45(&(uParam0->f_57), 2);
							func_62(uParam0, 0);
							func_41(uParam0, 10);
						}
					}
					else if (func_23() == -1)
					{
						if (func_24(4) && !func_18(0, 0, 1))
						{
							func_63(99, 1);
						}
					}
					func_54(uParam0);
				}
				else
				{
					func_64(uParam0);
					func_65(uParam0);
					if ((!func_66(4) && !func_56(536870912)) && func_16(uParam0->f_150, 8192))
					{
						if (func_16(uParam0->f_151, 4194304) && func_52(Global_35, uParam0->f_152, 1) <= 9f)
						{
							uParam0->f_185 = func_67(_uiprompt_get_group_active_page(1754796591));
							_uiprompt_set_ambient_group_this_frame(uParam0->f_152, 3f, 0, 1, 1754796591, uParam0->f_185, 2);
						}
						else if ((func_16(uParam0->f_151, 131072) && func_52(Global_35, uParam0->f_152, 1) > 9f) && func_52(Global_35, uParam0->f_152, 1) < 25f)
						{
							uParam0->f_185 = func_67(0);
							if (!_uiprompt_does_ambient_group_exist(1754796591))
							{
								_uiprompt_set_ambient_group_this_frame(uParam0->f_152, 5f, 0, 1, -523698323, uParam0->f_185, 2);
							}
						}
					}
					if ((func_56(16777216) && func_16(uParam0->f_151, 131072)) || func_16(uParam0->f_151, 524288))
					{
						if (!ped_has_use_scenario_task(Global_35))
						{
							if (uParam0->f_197 != -1 && (get_game_timer() - uParam0->f_197) > 1000)
							{
								func_55(16777216);
								func_6(&(uParam0->f_151), 524288);
								uParam0->f_197 = -1;
								clear_ped_tasks(Global_35, 1, 0);
								uParam0->f_157 = 0;
							}
							else
							{
								uParam0->f_157 = 2;
								func_68(uParam0);
								uParam0->f_197 = get_game_timer();
								if (func_56(268435456))
								{
									func_55(16777216);
									func_6(&(uParam0->f_151), 524288);
									func_17(&(uParam0->f_151), 64);
									_hide_hud_component(2011163970);
									func_45(&(uParam0->f_57), 2);
									func_62(uParam0, 0);
									func_41(uParam0, 10);
								}
							}
						}
						else if (uParam0->f_157 == 2)
						{
							if ((get_game_timer() - uParam0->f_197) > 10000)
							{
								clear_ped_tasks(Global_35, 1, 0);
								func_55(16777216);
								func_6(&(uParam0->f_151), 524288);
								uParam0->f_197 = -1;
								uParam0->f_157 = 0;
							}
						}
						else if (uParam0->f_154 == 5)
						{
							func_41(uParam0, 9);
						}
					}
				}
				Jump @4934; //curOff = 1996
				if (func_38(uParam0))
				{
					func_39(uParam0);
				}
				if (func_52(Global_35, uParam0->f_152, 1) <= 36f)
				{
					func_41(uParam0, 3);
				}
				Jump @4934; //curOff = 2042
				if (func_38(uParam0))
				{
					_0x6339c1ea3979b5f7("idle", "Player_Campfire_Scenes");
					func_39(uParam0);
				}
				disable_control_action(0, 255439828, false);
				func_69();
				func_58(uParam0);
				if ((func_70(&(uParam0->f_162[17])) && func_71(&(uParam0->f_162[17]), 1)) && func_72())
				{
					func_73(&Global_43907, 4);
				}
				else if (!func_60(1) || func_74(&Global_43907, 8))
				{
					func_34(0);
					uParam0->f_156 = -1;
					func_75(uParam0, 0);
					if (func_74(&Global_43907, 8))
					{
						func_17(&(uParam0->f_151), 262144);
						func_41(uParam0, 13);
					}
					else
					{
						func_76();
						func_41(uParam0, 3);
					}
				}
				else
				{
					if (uParam0->f_154 != -1 && uParam0->f_154 != 5)
					{
						func_59();
					}
					if (has_anim_event_fired(Global_35, -996707397) || func_77() == 1)
					{
						func_75(uParam0, 0);
					}
					else
					{
						func_75(uParam0, 1);
					}
					func_78(uParam0);
					if (uParam0->f_157 == 1 || func_79(uParam0, 0, 0, -1))
					{
						func_76();
						if (uParam0->f_157 != 10)
						{
							func_75(uParam0, 0);
						}
						else
						{
							func_53(uParam0);
						}
						if (uParam0->f_157 == 2)
						{
							if (uParam0->f_154 == 5)
							{
								func_41(uParam0, 9);
							}
							else
							{
								func_45(&(uParam0->f_57), 2);
								func_62(uParam0, 0);
								func_41(uParam0, 10);
							}
						}
						else if (uParam0->f_157 == 0)
						{
							func_41(uParam0, 13);
						}
						else if (uParam0->f_157 == 12 || uParam0->f_157 == 11)
						{
							func_41(uParam0, 11);
						}
						else
						{
							if (uParam0->f_157 == 1)
							{
								uParam0->f_57.f_84 = (uParam0->f_57.f_84 - 1);
							}
							func_41(uParam0, 6);
						}
					}
				}
				Jump @4934; //curOff = 2498
				if (func_38(uParam0))
				{
					func_39(uParam0);
				}
				if (uParam0->f_154 != -1 && uParam0->f_154 != 5)
				{
					func_59();
					disable_control_action(0, 1287709438, false);
				}
				disable_control_action(0, -2131587435, false);
				disable_control_action(0, -209515122, false);
				disable_control_action(0, -399233038, false);
				if (((has_anim_event_fired(Global_35, 1070143458) && (get_game_timer() - uParam0->f_196) > 2000) && !func_16(uParam0->f_151, 4)) && uParam0->f_157 != 1)
				{
					if (func_79(uParam0, 1, uParam0->f_157, uParam0->f_156))
					{
						if (uParam0->f_157 == 0)
						{
							func_41(uParam0, 13);
							func_53(uParam0);
							return 0;
						}
						else
						{
							func_75(uParam0, 0);
							uParam0->f_196 = get_game_timer();
						}
					}
				}
				if ((func_80(uParam0) || !ped_has_use_scenario_task(Global_35)) || func_16(uParam0->f_151, 1))
				{
					if (uParam0->f_157 == 10 || func_16(uParam0->f_151, 1))
					{
						uParam0->f_156 = -1;
						_0x6339c1ea3979b5f7("Fade_To_Black", "Sleep_Respawn_Scenes");
						func_41(uParam0, 8);
					}
					else if ((uParam0->f_154 == uParam0->f_156 || uParam0->f_156 == -1) || uParam0->f_157 == 1)
					{
						if (uParam0->f_157 != 0)
						{
							uParam0->f_155 = uParam0->f_157;
						}
						if (uParam0->f_156 != -1)
						{
							uParam0->f_154 = uParam0->f_156;
						}
						else
						{
							uParam0->f_154 = func_36(uParam0);
						}
						uParam0->f_156 = -1;
						if (uParam0->f_157 == 1)
						{
							uParam0->f_157 = 6;
							uParam0->f_155 = 6;
							uParam0->f_162[8] = func_81("DRINK", -1181049683, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
							func_82(&(uParam0->f_162[8]), -1067771379, 0, 1);
							func_83(&(uParam0->f_162[8]), 10, 1, 1);
							func_84(&(uParam0->f_162[8]), 0, 1);
							func_41(uParam0, 12);
						}
						else
						{
							func_41(uParam0, 5);
						}
					}
				}
				Jump @4934; //curOff = 3012
				if (func_38(uParam0))
				{
					func_39(uParam0);
				}
				iVar4 = _0xc22aa08a8adb87d4(Global_35);
				if (func_85(uParam0) && (get_game_timer() - uParam0->f_196) > 500)
				{
					if ((iVar4 == 1135271674 || iVar4 == -571916863) || iVar4 == -229964281)
					{
						if (uParam0->f_157 == 12)
						{
							if (_0x3d10d7179d7034af(func_86(0), -569063887, 0))
							{
								_0x6a564540fac12211(func_86(0), -569063887);
							}
							func_87(-569063887, 0, 0, 0, 1, 0, 0);
							uParam0->f_196 = get_game_timer();
							uParam0->f_157 = 0;
						}
						else if (uParam0->f_157 == 11)
						{
							func_87(1259508039, 0, 0, 0, 1, 0, 0);
							uParam0->f_196 = get_game_timer();
							uParam0->f_157 = 0;
						}
						else
						{
							uParam0->f_157 = 0;
							_0xd962f8579d702db5();
							func_31(&(uParam0->f_204));
							func_41(uParam0, 5);
						}
					}
					else if (iVar4 == -597629206)
					{
						func_88(36116464, 0.5f);
						uParam0->f_196 = get_game_timer();
					}
					else if (iVar4 == -518407211)
					{
						func_88(653141085, 2f);
						uParam0->f_196 = get_game_timer();
					}
					else if (iVar4 == -1433449364)
					{
						func_88(1335077954, 2f);
						uParam0->f_196 = get_game_timer();
					}
				}
				if (!ped_has_use_scenario_task(Global_35))
				{
					_0xd962f8579d702db5();
					uParam0->f_157 = 0;
					func_41(uParam0, 5);
				}
				Jump @4934; //curOff = 3370
				disable_control_action(0, 1287709438, false);
				disable_control_action(0, -2131587435, false);
				disable_control_action(0, -209515122, false);
				disable_control_action(0, -1046962283, false);
				disable_control_action(0, -1404316431, false);
				_uiprompt_set_active_group_this_frame(-1067771379, _create_var_string(0, -1199896558), 1, 0, 0, 0);
				iVar4 = _0x569f1e1237508deb(Global_35);
				func_89(uParam0, iVar4);
				if (has_anim_event_fired(Global_35, 442509369))
				{
					if (func_90())
					{
						func_91(1);
					}
					else if (func_92())
					{
						func_91(0);
					}
					func_93(-1199896558, 1f, 1);
				}
				if ((func_85(uParam0) && (get_game_timer() - uParam0->f_196) > 500) && iVar4 == -1433449364)
				{
					func_41(uParam0, 5);
				}
				if (!ped_has_use_scenario_task(Global_35))
				{
					_0xd962f8579d702db5();
					uParam0->f_157 = 0;
					func_41(uParam0, 5);
				}
				Jump @4934; //curOff = 3597
				if (func_38(uParam0))
				{
					func_39(uParam0);
					switch (uParam0->f_155)
					{
						case 8:
							func_88(-1890302844, 0.5f);
							break;
						case 7:
							func_88(36116464, 0.5f);
							break;
					}
				}
				func_94(uParam0);
				Jump @4934; //curOff = 3680
				if (func_38(uParam0))
				{
					func_39(uParam0);
				}
				if (!is_screen_fading_out() && !is_screen_faded_out())
				{
					if (func_85(uParam0))
					{
						clear_ped_tasks(Global_35, 1, 0);
					}
					do_screen_fade_out(1500);
				}
				if (is_screen_faded_out())
				{
					if (uParam0->f_154 != 0)
					{
						clear_ped_tasks_immediately(Global_35, true, true);
						_task_use_scenario_point(Global_35, uParam0[0], "WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_ARTHUR", 0, false, true, 0, false, -1f, false);
						uParam0->f_196 = get_game_timer();
						uParam0->f_154 = 0;
					}
					else if ((get_game_timer() - uParam0->f_196) > 500)
					{
						do_screen_fade_in(1000);
						func_95(77.236f, -5.6759f);
						func_45(&(uParam0->f_57), 2);
						func_62(uParam0, 0);
						func_41(uParam0, 10);
					}
				}
				Jump @4934; //curOff = 3867
				if (func_38(uParam0))
				{
					func_39(uParam0);
				}
				_disable_first_person_cam_this_frame();
				func_96(uParam0);
				func_59();
				disable_control_action(0, 1287709438, false);
				disable_control_action(0, -2131587435, false);
				disable_control_action(0, -209515122, false);
				disable_control_action(0, -399233038, false);
				disable_control_action(0, -1046962283, false);
				disable_control_action(0, -1404316431, false);
				if ((((func_97(uParam0, uParam0->f_155) || !ped_has_use_scenario_task(Global_35)) || _0x916b8e075abc8b4e(Global_35, 1)) || is_entity_on_fire(Global_35)) || _0x0c3cb2e600c8977d(Global_35, 0))
				{
					set_entity_proofs(Global_35, 0, false);
					_0x0f2a2175734926d8("cook_meat_sizzle_loop", "Player_Campfire_Sounds");
					func_44(&(uParam0->f_57), 1);
					_0xd962f8579d702db5();
					if (((!ped_has_use_scenario_task(Global_35) || _0x916b8e075abc8b4e(Global_35, 1)) || is_entity_on_fire(Global_35)) || _0x0c3cb2e600c8977d(Global_35, 0))
					{
						if (is_screen_faded_out())
						{
							do_screen_fade_in(500);
						}
						if (does_entity_exist(uParam0->f_160))
						{
							delete_object(&(uParam0->f_160));
						}
						if (func_98(0) && !func_16(uParam0->f_151, 1024))
						{
							if (((((((uParam0->f_149 == 3 || uParam0->f_149 == 4) || uParam0->f_149 == 15) || uParam0->f_149 == 20) || uParam0->f_149 == 7) || uParam0->f_149 == 6) || uParam0->f_149 == 18) || uParam0->f_149 == 19)
							{
								func_99(uParam0->f_57.f_77, 1, 1, 1, 0);
								func_17(&(uParam0->f_151), 1024);
							}
						}
						if (is_entity_on_fire(Global_35))
						{
							clear_ped_tasks(Global_35, 1, 0);
						}
					}
					if (uParam0->f_154 == 4)
					{
						uParam0->f_155 = 9;
						uParam0->f_157 = 9;
					}
					else
					{
						uParam0->f_155 = 6;
						uParam0->f_157 = 6;
					}
					func_31(&(uParam0->f_204));
					func_41(uParam0, 5);
				}
				Jump @4934; //curOff = 4366
				if (func_38(uParam0))
				{
					func_39(uParam0);
				}
				hide_hud_and_radar_this_frame();
				if ((!is_screen_faded_out() && !is_screen_fading_out()) && has_anim_event_fired(Global_35, -954213463))
				{
					do_screen_fade_out(1000);
				}
				if ((func_16(uParam0->f_151, 1) || _0xf94692eb9dc15d74(uParam0->f_195, 0)) || is_screen_faded_out())
				{
					_0x8910c24b7e0046ec();
					func_53(uParam0);
					if (_does_anim_scene_exist(uParam0->f_193))
					{
						if (!_is_anim_scene_loaded(uParam0->f_193, true, false))
						{
							if (!_is_anim_scene_loading(uParam0->f_193, true))
							{
								load_anim_scene(uParam0->f_193);
							}
						}
						else
						{
							func_100(Global_36);
							Global_40.f_9 = 0;
							func_101(0, 7);
							func_6(&(uParam0->f_151), 1);
							_0xac84686c06184b0d("Clouds", "Sleep_Respawn_Scenes");
							start_anim_scene(uParam0->f_193);
							trigger_music_event("SLEEP_TRANSITION_START");
							func_102(14, 1);
							func_103();
							if (!_does_scenario_point_exist(uParam0[5]))
							{
								(*uParam0)[5] = _find_closest_active_scenario_point_of_type(*uParam0->f_7[5], uParam0->f_191, 1f, 0, false);
							}
							if (uParam0->f_191 == -2016812721)
							{
								sVar5 = "PROP_PLAYER_SLEEP_TENT_MALE_A";
							}
							else
							{
								sVar5 = "WORLD_PLAYER_SLEEP_BEDROLL_ARTHUR";
							}
							func_6(&(uParam0->f_151), 4);
							_task_use_scenario_point(Global_35, uParam0[5], sVar5, 0, false, true, 0, false, -1f, false);
							if (_0x927b810e43e99932(&(uParam0->f_26)))
							{
								_0x0a5a4f1979abb40e(&(uParam0->f_26));
							}
							func_104(1);
							advance_clock_time_to(uParam0->f_186, 0, 0);
							_0xf9f14080d80937bd(uParam0->f_186);
							if (!func_18(0, 0, 1))
							{
								set_random_weather_type(true, true);
							}
							func_105(1);
							func_106(Global_36, 300f, 0, 0);
							func_107(-1, 0, 0, 0, 0);
							func_108(0);
							func_109(_get_deadeye_ability_level(player_id()));
							uParam0->f_156 = -1;
							func_17(&(uParam0->f_151), 1048576);
							disable_all_control_actions(0);
							func_41(uParam0, 3);
						}
					}
					else
					{
						func_41(uParam0, 3);
					}
				}
				Jump @4934; //curOff = 4840
				if (func_38(uParam0))
				{
					func_48(8192);
					func_39(uParam0);
				}
				if (!ped_has_use_scenario_task(Global_35))
				{
					_0xd962f8579d702db5();
					func_49(8192);
					func_44(&(uParam0->f_57), 1);
					func_41(uParam0, 3);
				}
				else if (!_0x0c3cb2e600c8977d(Global_35, 1))
				{
					func_110(uParam0);
				}
				Jump @4934; //curOff = 4924
				return 1;
			}
			return 0;
			default:
				break;
	}
}

void func_14(var uParam0, bool bParam1)
{
	func_53(uParam0);
	func_111(uParam0);
	func_112(uParam0);
	func_54(uParam0);
	if (_0x927b810e43e99932(&(uParam0->f_26)))
	{
		_0x0a5a4f1979abb40e(&(uParam0->f_26));
	}
	if (bParam1)
	{
		func_113(uParam0);
	}
	uParam0->f_197 = -1;
	func_44(&(uParam0->f_57), 0);
}

int func_15(vector3 vParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_114(Global_1935475[iVar0], vParam0))
		{
			return (*Global_1935475)[iVar0]->f_1;
		}
		iVar0++;
	}
	return 0;
}

bool func_16(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_17(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_18(int iParam0, bool bParam1, bool bParam2)
{
	if (Global_1572887->f_12 != -1)
	{
		if ((bParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1898164->f_163;
		}
		if ((bParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1898164->f_164;
		}
		if (func_115())
		{
			return true;
		}
		if (Global_1058888->f_3 && !Global_1572887->f_8)
		{
			if ((*Global_1055058)[network_player_id_to_int()]->f_114 && network_is_in_tutorial_session())
			{
				return true;
			}
		}
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1898164->f_163;
		}
		else
		{
			return Global_1898164->f_164;
		}
	}
	if (Global_1898164->f_1[0]->f_2 == 8)
	{
		iVar0 = func_116(&(Global_1898164->f_1[0]));
		if (func_117(iVar0) && func_118((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_119(&(Global_1898164->f_1[0])))
	{
		return true;
	}
	if ((Global_1935630 && 40959 & (-1 - iParam0)) != 0)
	{
		return true;
	}
	if (!bParam1)
	{
		if ((get_game_timer() - 5000) < &Global_1898438)
		{
			return true;
		}
	}
	switch (Global_1898164->f_1[0]->f_2)
	{
		case 0:
			return false;
		case 1:
			return iParam0 & 1 == 0;
		case 4:
			return iParam0 & 2 == 0;
		case 6:
			return iParam0 & 4 == 0;
		case 2:
			return iParam0 & 16 == 0;
		case 5:
			return iParam0 & 32 == 0;
		case 9:
			return iParam0 & 64 == 0;
		case 8:
			return iParam0 & 8 == 0;
		case 10:
			return iParam0 & 512 == 0;
		case 3:
			return iParam0 & 128 == 0;
		case 11:
			return iParam0 & 256 == 0;
		default:
			break;
	}
	return false;
}

bool func_19()
{
	return Global_1911914->f_1578;
}

void func_20(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	uParam0->f_212.f_5 = iParam1;
	uParam0->f_212.f_2 = iParam2;
	uParam0->f_212.f_3 = iParam3;
	uParam0->f_212.f_2 = iParam4;
	uParam0->f_212.f_2 = iParam5;
	uParam0->f_212.f_2 = iParam6;
}

float func_21(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

int func_22()
{
	return Global_1894899->f_2;
}

int func_23()
{
	return Global_1572887->f_12;
}

bool func_24(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_120((*Global_1835011)[iParam0]->f_1, 1);
	}
	return (_unlock_is_unlocked((*Global_1835011)[iParam0]->f_2) && !_unlock_is_visible((*Global_1835011)[iParam0]->f_2));
}

bool func_25(int iParam0, int iParam1, bool bParam2)
{
	if (!func_121(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_122(iParam0);
	if (iVar0 == -427144552)
	{
		if (has_ped_got_weapon(Global_35, iParam0, 0, false))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (iVar0 == 307971639)
	{
		if (!func_123(iParam0, 1))
		{
			return false;
		}
	}
	return func_124(iParam0, 0, bParam2) >= iParam1;
}

void func_26(var uParam0)
{
	bVar0 = does_particle_fx_looped_exist(uParam0->f_29);
	if (does_entity_exist(*uParam0))
	{
		_0x646564a3b7df68f8(*uParam0, (0.65f + (uParam0->f_11 * 0.35f)), (0.65f + (uParam0->f_11 * 0.35f)));
		if (bVar0)
		{
			set_particle_fx_looped_evolution(uParam0->f_29, "Smoke", uParam0->f_17, false);
		}
		if (uParam0->f_1)
		{
			_0xc8e21c1677dc5e6f(*uParam0, (uParam0->f_12 * 0.5f));
			if (bVar0)
			{
				set_particle_fx_looped_evolution(uParam0->f_29, "Flames", uParam0->f_18, false);
			}
		}
	}
	if (uParam0->f_12 != uParam0->f_21 || uParam0->f_35)
	{
		if (uParam0->f_35)
		{
			uParam0->f_12 = uParam0->f_21;
		}
		else
		{
			uParam0->f_12 = (((uParam0->f_12 * 15f) + uParam0->f_21) / 16f);
		}
		if (absf((uParam0->f_12 - uParam0->f_21)) < 0.0025f)
		{
			uParam0->f_12 = uParam0->f_21;
			_0xc8e21c1677dc5e6f(*uParam0, (uParam0->f_12 * 0.5f));
		}
	}
	if (uParam0->f_13 != uParam0->f_22 || uParam0->f_35)
	{
		if (uParam0->f_35)
		{
			uParam0->f_13 = uParam0->f_22;
		}
		else
		{
			uParam0->f_13 = (((uParam0->f_13 * 12f) + uParam0->f_22) / 13f);
		}
		if (absf((uParam0->f_13 - uParam0->f_22)) < 0.0025f)
		{
			uParam0->f_13 = uParam0->f_22;
			_0x7d7285efeab5af15(*uParam0, uParam0->f_13);
		}
	}
	if (uParam0->f_14 != uParam0->f_23 || uParam0->f_35)
	{
		if (uParam0->f_35)
		{
			uParam0->f_14 = uParam0->f_23;
		}
		else
		{
			uParam0->f_14 = (((uParam0->f_14 * 14f) + uParam0->f_23) / 15f);
		}
		if (absf((uParam0->f_14 - uParam0->f_23)) < 0.005f && !uParam0->f_35)
		{
			uParam0->f_14 = uParam0->f_23;
		}
		else if (uParam0->f_14 != uParam0->f_23 || uParam0->f_35)
		{
			_0xf49574e2332a8f06(*uParam0, (uParam0->f_14 * 0.33f));
		}
	}
	if (uParam0->f_15 != uParam0->f_24 || uParam0->f_35)
	{
		if (uParam0->f_35)
		{
			uParam0->f_15 = uParam0->f_24;
		}
		else
		{
			uParam0->f_15 = (((uParam0->f_15 * 19f) + uParam0->f_24) / 20f);
		}
		if (absf((uParam0->f_15 - uParam0->f_24)) < 0.0025f)
		{
			uParam0->f_15 = uParam0->f_24;
			_set_object_burn_level(*uParam0, ((uParam0->f_15 * 0.9f) + 0.1f), true);
		}
	}
	if (uParam0->f_4)
	{
		if (bVar0)
		{
			set_particle_fx_looped_evolution(uParam0->f_29, "Under", uParam0->f_16, false);
		}
	}
	else if ((uParam0->f_16 != uParam0->f_25 || uParam0->f_35) && bVar0)
	{
		if (uParam0->f_35)
		{
			uParam0->f_16 = uParam0->f_25;
		}
		else
		{
			uParam0->f_16 = (((uParam0->f_16 * 15f) + uParam0->f_25) / 16f);
		}
		if (absf((uParam0->f_16 - uParam0->f_25)) < 0.0025f)
		{
			uParam0->f_16 = uParam0->f_25;
			if (bVar0)
			{
				set_particle_fx_looped_evolution(uParam0->f_29, "Embers", uParam0->f_16, false);
			}
		}
	}
	if (uParam0->f_4)
	{
		if (bVar0)
		{
			set_particle_fx_looped_evolution(uParam0->f_29, "Under", uParam0->f_17, false);
		}
	}
	else if ((uParam0->f_17 != uParam0->f_26 || uParam0->f_35) && bVar0)
	{
		if (uParam0->f_35)
		{
			uParam0->f_17 = uParam0->f_26;
		}
		else
		{
			uParam0->f_17 = (((uParam0->f_17 * 15f) + uParam0->f_26) / 16f);
		}
		if (absf((uParam0->f_17 - uParam0->f_26)) < 0.0025f)
		{
			uParam0->f_17 = uParam0->f_26;
			if (bVar0)
			{
				set_particle_fx_looped_evolution(uParam0->f_29, "Smoke", uParam0->f_17, false);
			}
		}
	}
	if ((uParam0->f_18 != uParam0->f_27 || uParam0->f_35) && bVar0)
	{
		if (uParam0->f_35)
		{
			uParam0->f_18 = uParam0->f_27;
		}
		else
		{
			uParam0->f_18 = (((uParam0->f_18 * 19f) + uParam0->f_27) / 20f);
		}
		if (absf((uParam0->f_18 - uParam0->f_27)) < 0.0025f)
		{
			uParam0->f_18 = uParam0->f_27;
			if (bVar0)
			{
				set_particle_fx_looped_evolution(uParam0->f_29, "Flames", uParam0->f_18, false);
			}
		}
	}
	if ((uParam0->f_19 != uParam0->f_28 || uParam0->f_35) && bVar0)
	{
		if (uParam0->f_35)
		{
			uParam0->f_19 = uParam0->f_28;
		}
		else
		{
			uParam0->f_19 = (((uParam0->f_19 * 19f) + uParam0->f_28) / 20f);
		}
		if (absf((uParam0->f_19 - uParam0->f_28)) < 0.0025f)
		{
			uParam0->f_19 = uParam0->f_28;
			if (bVar0)
			{
				set_particle_fx_looped_evolution(uParam0->f_29, "Smolder", uParam0->f_19, false);
			}
		}
	}
	if (uParam0->f_18 < 0f)
	{
		uParam0->f_18 = 0f;
	}
	if (uParam0->f_18 > 1f)
	{
		uParam0->f_18 = 1f;
	}
	if (uParam0->f_12 < 0f)
	{
		uParam0->f_12 = 0f;
	}
	if (uParam0->f_12 > 1f)
	{
		uParam0->f_12 = 1f;
	}
	if (uParam0->f_11 < 0.5f)
	{
		uParam0->f_11 = 0.5f;
	}
	if (uParam0->f_11 > 1f)
	{
		uParam0->f_11 = 1f;
	}
	if (bVar0)
	{
		uParam0->f_35 = 0;
	}
}

void func_27(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			uParam0->f_20 = 0.9f;
			uParam0->f_21 = 1f;
			uParam0->f_22 = 1f;
			uParam0->f_23 = 0.9f;
			uParam0->f_24 = 0.99f;
			uParam0->f_25 = 1f;
			uParam0->f_26 = 0.75f;
			uParam0->f_27 = 1f;
			uParam0->f_28 = 0f;
			break;
		case 1:
			uParam0->f_20 = 0.66f;
			uParam0->f_21 = 0.66f;
			uParam0->f_22 = 0.6f;
			uParam0->f_23 = 0.5f;
			uParam0->f_24 = 0.88f;
			uParam0->f_25 = 0.66f;
			uParam0->f_26 = 0.66f;
			uParam0->f_27 = 0.66f;
			uParam0->f_28 = 0f;
			break;
		case 2:
			uParam0->f_20 = 0.25f;
			uParam0->f_21 = 0.25f;
			uParam0->f_22 = 0.25f;
			uParam0->f_23 = 0.25f;
			uParam0->f_24 = 0.77f;
			uParam0->f_25 = 0.2f;
			uParam0->f_26 = 0.5f;
			uParam0->f_27 = 0.2f;
			uParam0->f_28 = 0f;
			break;
		case 3:
			uParam0->f_20 = 0.2f;
			uParam0->f_21 = 0.1f;
			uParam0->f_22 = 0.22f;
			uParam0->f_23 = 0.1f;
			uParam0->f_24 = 0.66f;
			uParam0->f_25 = 0.1f;
			uParam0->f_26 = 0.5f;
			uParam0->f_27 = 0.1f;
			uParam0->f_28 = 0f;
			break;
		case 4:
			uParam0->f_20 = 0.15f;
			uParam0->f_21 = 0.01f;
			uParam0->f_22 = 0.2f;
			uParam0->f_23 = 0.018f;
			uParam0->f_24 = 0.55f;
			uParam0->f_25 = 0.005f;
			uParam0->f_26 = 0.25f;
			uParam0->f_27 = 0.01f;
			uParam0->f_28 = 0.6f;
			break;
		case 5:
			uParam0->f_20 = 0f;
			uParam0->f_21 = 0f;
			uParam0->f_22 = 1f;
			uParam0->f_23 = 0f;
			uParam0->f_24 = 1f;
			uParam0->f_25 = 0.2f;
			uParam0->f_26 = 0.66f;
			uParam0->f_27 = 0f;
			uParam0->f_28 = 1f;
			break;
		case 6:
			uParam0->f_20 = 0f;
			uParam0->f_21 = 0f;
			uParam0->f_22 = 0f;
			uParam0->f_23 = 0f;
			uParam0->f_24 = 0f;
			uParam0->f_25 = 0f;
			uParam0->f_26 = 0f;
			uParam0->f_27 = 0f;
			uParam0->f_28 = 0f;
			break;
		case 7:
			uParam0->f_20 = 0.4f;
			uParam0->f_21 = 0.2f;
			uParam0->f_22 = 0.2f;
			uParam0->f_23 = 0.02f;
			uParam0->f_24 = 0f;
			uParam0->f_25 = 0f;
			uParam0->f_26 = 0f;
			uParam0->f_27 = 0.01f;
			uParam0->f_28 = 0f;
			break;
		case 8:
			uParam0->f_20 = 0f;
			uParam0->f_21 = 0.06f;
			uParam0->f_22 = 0.1f;
			uParam0->f_23 = 0.01f;
			uParam0->f_24 = 0f;
			uParam0->f_25 = 0f;
			uParam0->f_26 = 0f;
			uParam0->f_27 = 0f;
			uParam0->f_28 = 0f;
			break;
	}
}

float func_28()
{
	if (func_11(&Global_1935630, 2097152) || func_22() == 5)
	{
		return 1f;
	}
	return 0.5f;
}

bool func_29(var uParam0, float fParam1)
{
	if (!func_125(uParam0))
	{
		return false;
	}
	if (func_126(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_30(var uParam0)
{
	if (!uParam0->f_1)
	{
		iVar0 = get_clock_hours();
		if (iVar0 >= 2 && iVar0 < 4)
		{
			func_27(uParam0, 1);
		}
		else if (iVar0 >= 4 && iVar0 < 6)
		{
			func_27(uParam0, 2);
		}
		else if (iVar0 >= 6 && iVar0 < 12)
		{
			func_27(uParam0, 3);
		}
		else if (iVar0 >= 12 && iVar0 < 17)
		{
			func_27(uParam0, 2);
		}
		else if (iVar0 >= 17 && iVar0 < 19)
		{
			func_27(uParam0, 1);
		}
		else
		{
			func_27(uParam0, 0);
		}
		func_31(&(uParam0->f_31));
	}
}

void func_31(var uParam0)
{
	func_127(uParam0, 0f);
}

bool func_32(int iParam0, int iParam1)
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
	if (func_128(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_128(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_128(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_128(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_128(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_128(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_128(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_128(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_33(var uParam0)
{
	if (func_56(16777216) || uParam0->f_153 == 10)
	{
		iVar0 = func_36(uParam0);
		if (iVar0 != -1 && iVar0 != 5)
		{
			if (!func_70(&(uParam0->f_162[10])))
			{
				disable_control_action(0, 1287709438, false);
			}
			if (!func_70(&(uParam0->f_162[9])))
			{
				disable_control_action(0, -209515122, false);
				disable_control_action(0, -2131587435, false);
			}
			disable_control_action(0, -1046962283, false);
		}
	}
}

void func_34(bool bParam0)
{
	if (bParam0)
	{
		func_129(4);
	}
	func_129(2);
	set_bit(&(Global_1956580->f_1), 0);
}

void func_35(var uParam0)
{
	vVar0.f_4 = -1;
	vVar0.f_8 = 2;
	vVar0.f_9 = 1;
	vVar0.f_10 = 1;
	vVar0.f_11 = 1;
	vVar0.f_13 = 1;
	vVar0.f_14 = 2;
	vVar0.f_15 = 2;
	vVar0.f_16 = 3;
	vVar0.f_19 = 3;
	vVar0.f_20 = 1;
	vVar0.f_21 = 3;
	vVar0.f_22 = 3;
	vVar0.f_8 = 0;
	vVar0.f_14 = 0;
	vVar0.f_3 = uParam0->f_152;
	vVar0 = { 0f, 0f, 0.5f };
	_0x66f9eb44342bb4c5(Global_35, &vVar0);
	bVar25 = false;
	bVar26 = false;
	if (is_ped_active_in_scenario(Global_35, 0))
	{
		bVar26 = true;
	}
	if (!bVar26)
	{
		if (is_ped_active_in_scenario(Global_35, 1))
		{
			bVar25 = true;
		}
	}
	if (bVar26 || (bVar25 && has_anim_event_fired(Global_35, -1206250122)))
	{
		if (_0xdd0b7c5ae58f721d(&(uParam0->f_26)))
		{
			if (!_0x927b810e43e99932(&(uParam0->f_26)))
			{
				_0xb8b207c34285e978(&(uParam0->f_26));
			}
		}
	}
}

int func_36(var uParam0)
{
	iVar0 = _get_scenario_point_ped_is_using(Global_35, false);
	if (_does_scenario_point_exist(iVar0) && !_0x0c3cb2e600c8977d(Global_35, 1))
	{
		iVar1 = 0;
		while (iVar1 < 6)
		{
			if (_does_scenario_point_exist(uParam0[iVar1]))
			{
				if (iVar0 == uParam0[iVar1])
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_37(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

bool func_38(var uParam0)
{
	return func_16(uParam0->f_151, 4096);
}

void func_39(var uParam0)
{
	func_6(&(uParam0->f_151), 4096);
}

void func_40(var uParam0)
{
	StringCopy(&(uParam0->f_26), "restbyfire_orbit_cam", 64);
	StringCopy(&(uParam0->f_26.f_8), "RESTBYFIRE_ORBIT_REQUEST", 64);
}

void func_41(var uParam0, int iParam1)
{
	func_17(&(uParam0->f_151), 4096);
	uParam0->f_153 = iParam1;
}

bool func_42(var uParam0)
{
	return true;
}

bool func_43(var uParam0)
{
	if (does_entity_exist(uParam0->f_152))
	{
		if (func_16(uParam0->f_150, 512))
		{
			vVar0 = { get_offset_from_entity_in_world_coords(uParam0->f_152, -0.966f, 0.203f, 0f) };
			*uParam0->f_7[0] = { vVar0 + Vector(1f, 0f, 0f) };
			fVar3 = (get_entity_heading(uParam0->f_152) + -99.171f);
			(*uParam0)[0] = create_scenario_point(1020517461, vVar0, fVar3, 0, 0, 0);
		}
		if (func_16(uParam0->f_150, 1024))
		{
			vVar0 = { get_offset_from_entity_in_world_coords(uParam0->f_152, -0.212f, -1.045f, 0f) };
			*uParam0->f_7[1] = { vVar0 + Vector(1f, 0f, 0f) };
			fVar3 = (get_entity_heading(uParam0->f_152) + -11.405f);
			(*uParam0)[1] = create_scenario_point(1259174088, vVar0, fVar3, 0, 0, 0);
		}
		if (func_16(uParam0->f_150, 2048))
		{
			vVar0 = { get_offset_from_entity_in_world_coords(uParam0->f_152, 1.025f, 0.043f, 0f) };
			*uParam0->f_7[2] = { vVar0 + Vector(1f, 0f, 0f) };
			fVar3 = (get_entity_heading(uParam0->f_152) + 91.78f);
			(*uParam0)[2] = create_scenario_point(-1075420544, vVar0, fVar3, 0, 0, 0);
		}
		if (func_16(uParam0->f_150, 4096))
		{
			vVar0 = { get_offset_from_entity_in_world_coords(uParam0->f_152, 0.249f, 1.05f, 0f) };
			*uParam0->f_7[3] = { vVar0 + Vector(1f, 0f, 0f) };
			fVar3 = (get_entity_heading(uParam0->f_152) + 164.29f);
			(*uParam0)[3] = create_scenario_point(-1767895052, vVar0, fVar3, 0, 0, 0);
		}
		if (func_16(uParam0->f_150, 2))
		{
			vVar0 = { get_offset_from_entity_in_world_coords(uParam0->f_152, -1.534f, 0.233f, 0.5f) };
			*uParam0->f_7[4] = { vVar0 + Vector(0.5f, 0f, 0f) };
			fVar3 = (get_entity_heading(uParam0->f_152) + -97.186f);
			(*uParam0)[4] = create_scenario_point(889554021, vVar0, fVar3, 0, 0, 0);
			_set_scenario_point_flag(uParam0[4], 51, true);
		}
		if (!_does_scenario_point_exist(uParam0[5]))
		{
			vVar0 = { _get_object_offset_from_coords(get_entity_coords(uParam0->f_152, true, false), get_entity_heading(uParam0->f_152), uParam0->f_188) };
			*uParam0->f_7[5] = { vVar0 + Vector(1f, 0f, 0f) };
			(*uParam0)[5] = _find_closest_active_scenario_point_of_type(vVar0, uParam0->f_191, 1f, 0, false);
		}
		return true;
	}
	return false;
}

void func_44(var uParam0, bool bParam1)
{
	func_130(uParam0);
	func_131(uParam0, 0);
	_databinding_remove_data_entry(uParam0->f_39);
	if (func_132())
	{
		func_133(0);
	}
	if (bParam1)
	{
		func_134(uParam0);
		return;
	}
	if (_does_text_database_exist(&(uParam0->f_17)))
	{
		_text_database_delete(&(uParam0->f_17));
	}
	if (uParam0->f_22)
	{
		if (!is_gameplay_cam_rendering())
		{
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
		render_script_cams(false, true, 3000, true, false, 0);
	}
	if (_does_anim_scene_exist(uParam0->f_63))
	{
		_delete_anim_scene(uParam0->f_63);
	}
	if (_does_anim_scene_exist(uParam0->f_65))
	{
		_delete_anim_scene(uParam0->f_65);
	}
	if (_does_anim_scene_exist(uParam0->f_66))
	{
		_delete_anim_scene(uParam0->f_66);
	}
	if (_does_anim_scene_exist(uParam0->f_67))
	{
		_delete_anim_scene(uParam0->f_67);
	}
	if (_does_anim_scene_exist(uParam0->f_68))
	{
		_delete_anim_scene(uParam0->f_68);
	}
	if (_does_anim_scene_exist(uParam0->f_69))
	{
		_delete_anim_scene(uParam0->f_69);
	}
	if (_does_anim_scene_exist(uParam0->f_70))
	{
		_delete_anim_scene(uParam0->f_70);
	}
	if (_does_anim_scene_exist(uParam0->f_71))
	{
		_delete_anim_scene(uParam0->f_71);
	}
	if (_does_anim_scene_exist(uParam0->f_72))
	{
		_delete_anim_scene(uParam0->f_72);
	}
	if (does_entity_exist(uParam0->f_85))
	{
		delete_object(&(uParam0->f_85));
	}
	if (does_entity_exist(uParam0->f_86))
	{
		delete_object(&(uParam0->f_86));
	}
	if (does_entity_exist(uParam0->f_87))
	{
		delete_object(&(uParam0->f_87));
	}
	set_streamed_texture_dict_as_no_longer_needed("satchel_textures");
	Global_1911914->f_1576 = 0;
	if (func_23() == -1)
	{
		func_45(uParam0, 16);
	}
	else
	{
		if (uParam0->f_8 == 11)
		{
			if (uParam0->f_21 == -1)
			{
				func_135(uParam0->f_77, uParam0->f_78);
				func_136(uParam0->f_77, uParam0->f_20);
			}
		}
		uParam0->f_21 = -1;
		func_45(uParam0, 0);
	}
}

void func_45(var uParam0, int iParam1)
{
	if (uParam0->f_8 != iParam1)
	{
		uParam0->f_8 = iParam1;
		func_137(uParam0);
	}
}

void func_46(var uParam0)
{
	if (!_0xdd0b7c5ae58f721d(&(uParam0->f_26)))
	{
		if (!_0xc285fd21294a1c49(&(uParam0->f_26)))
		{
			_0x6a4d224fc7643941(&(uParam0->f_26));
		}
	}
}

void func_47(int iParam0)
{
	if (!func_56(iParam0))
	{
		Global_1392040 = (Global_1392040 || iParam0);
	}
}

void func_48(int iParam0)
{
	if (!func_66(iParam0))
	{
		Global_1392040->f_1 = (Global_1392040->f_1 || iParam0);
	}
}

void func_49(int iParam0)
{
	if (func_66(iParam0))
	{
		Global_1392040->f_1 = (Global_1392040->f_1 - (Global_1392040->f_1 && iParam0));
	}
}

bool func_50(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_51(var uParam0)
{
	func_6(&(uParam0->f_151), 16384);
	if (_is_ped_carrying(Global_35))
	{
		iVar0 = _get_first_entity_ped_is_carrying(Global_35);
		if (is_entity_a_ped(iVar0))
		{
			iVar1 = get_ped_index_from_entity_index(iVar0);
			if (_0x9a100f1cf4546629(iVar1))
			{
				func_17(&(uParam0->f_151), 16384);
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	if (func_56(134217728) || !func_16(uParam0->f_150, 8192))
	{
		return false;
	}
	if (func_138(Global_35, 0))
	{
		return false;
	}
	if (_does_anim_scene_exist(uParam0->f_195))
	{
		if (_is_anim_scene_started(uParam0->f_195, false))
		{
			return false;
		}
	}
	if (_0x4912dfe492db98cd(Global_35, "inInspectionMode"))
	{
		return false;
	}
	if (get_ped_config_flag(Global_35, 227, true))
	{
		return false;
	}
	if (func_139(Global_35))
	{
		return false;
	}
	if (_0xec7e480ff8bd0bed(Global_35))
	{
		return false;
	}
	if (_0xd04241bbf6d03a5e(Global_35) != 0)
	{
		return false;
	}
	if ((func_140(Global_35) || func_141(Global_35)) || func_142(Global_35))
	{
		return false;
	}
	if (!func_143(Global_35, uParam0->f_152, -0.5f))
	{
		return false;
	}
	if (get_number_of_fires_in_range(get_entity_coords(uParam0->f_152, true, false), 1.5f) > 2)
	{
		return false;
	}
	return true;
}

float func_52(int iParam0, int iParam1, bool bParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	if (!does_entity_exist(iParam1))
	{
		return 0f;
	}
	if (bParam2)
	{
		return vdist2(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
	}
	return func_21(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
}

void func_53(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 18)
	{
		if (func_70(&(uParam0->f_162[iVar0])))
		{
			func_144(uParam0->f_162[iVar0], 1, 1);
		}
		iVar0++;
	}
}

void func_54(var uParam0)
{
	func_144(&(uParam0->f_183), 1, 1);
	func_144(&(uParam0->f_182), 1, 1);
	func_144(&(uParam0->f_181), 1, 1);
}

void func_55(int iParam0)
{
	if (func_56(iParam0))
	{
		Global_1392040 = (&Global_1392040 - (Global_1392040 && iParam0));
	}
}

bool func_56(int iParam0)
{
	return (Global_1392040 && iParam0) != 0;
}

void func_57(var uParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (_does_scenario_point_exist(uParam0[iVar0]) && uParam0[iVar0] != uParam0[5])
		{
			_set_scenario_point_flag(uParam0[iVar0], 8, !bParam1);
		}
		iVar0++;
	}
}

void func_58(var uParam0)
{
	if (_does_anim_scene_exist(uParam0->f_193))
	{
		if (_is_anim_scene_active(uParam0->f_193))
		{
			_0xd65fdc686a031c83(Global_35, -1961588683, 3f);
			_0x9428447ded71fc7e("Sleep_Respawn_Scenes");
			trigger_music_event("SLEEP_TRANSITION_STOP");
			do_screen_fade_out(0);
			do_screen_fade_in(1500);
			func_145(1);
			func_146();
			if (_get_scenario_point_type_ped_is_using(Global_35) == 1097070152)
			{
				func_95(98.2971f, -4.2336f);
				_0xec6935ebe0847b90(Global_35, _get_object_offset_from_coords(Global_36, get_entity_heading(Global_35), -5f, 0f, 0f));
				clear_ped_tasks(Global_35, 1, 0);
			}
			func_105(0);
			Global_1392040->f_7 = func_147();
		}
		if (_is_anim_scene_started(uParam0->f_193, false))
		{
			if (is_screen_faded_out())
			{
				do_screen_fade_in(500);
			}
			hide_hud_and_radar_this_frame();
			_0x8910c24b7e0046ec();
			disable_all_control_actions(0);
			func_34(0);
			enable_control_action(0, -668070958, true);
			enable_control_action(0, 1250966545, true);
		}
	}
}

void func_59()
{
	disable_control_action(0, 1301263553, false);
	disable_control_action(0, -39308912, false);
	disable_control_action(0, 130948705, false);
}

bool func_60(bool bParam0)
{
	if (!is_entity_dead(Global_35))
	{
		if (ped_has_use_scenario_task(Global_35) && !_0x0c3cb2e600c8977d(Global_35, 1))
		{
			if (((_0x02ebbb3989b7e695(Global_35) || (bParam0 && is_ped_active_in_scenario(Global_35, 0))) || (is_task_move_network_active(Global_35) && get_task_move_network_event(Global_35, "SCENARIO_POINT_TRANS_COMPLETE"))) || (func_56(16777216) && has_anim_event_fired(Global_35, -1208591336)))
			{
				return true;
			}
		}
	}
	return false;
}

int func_61()
{
	iVar0 = _0xc22aa08a8adb87d4(Global_35);
	switch (iVar0)
	{
		case -229964281:
			return 9;
		case 512684539:
			return 3;
		case 1135271674:
			return 6;
		case -571916863:
			return 8;
		case -597629206:
			return 7;
		case -1879538536:
			return 1;
		case -734326242:
			return 4;
		default:
			break;
	}
	return 0;
}

void func_62(var uParam0, int iParam1)
{
	uParam0->f_149 = iParam1;
}

void func_63(int iParam0, bool bParam1)
{
	func_148(iParam0, &iVar0, &iVar1);
	if (!func_149(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_150(iVar0, iVar1);
}

void func_64(var uParam0)
{
	if (((!ped_has_use_scenario_task(Global_35) && func_16(uParam0->f_151, 4194304)) && !_is_ped_carrying(Global_35)) && !func_56(4))
	{
		if (does_entity_exist(uParam0->f_152))
		{
			if (!func_70(uParam0->f_181))
			{
				uParam0->f_181 = func_151("REST_BY_FIRE", -719620017, uParam0->f_152, 1, 1, 1, 0, 5, 9f, 570, 4000, 10, 1073741824, 0, -820096546, 0, 0);
			}
			else if (func_152(uParam0->f_181, 1))
			{
				func_68(uParam0);
				func_54(uParam0);
				func_6(&(uParam0->f_151), 4194304);
			}
			if (uParam0->f_57.f_84 > 0 && (func_21(Global_36, _get_scenario_point_coords(uParam0[0], true)) < 0.5625f || func_21(Global_36, _get_scenario_point_coords(uParam0[1], true)) < 0.5625f))
			{
				func_96(uParam0);
				if (!func_70(uParam0->f_183))
				{
					uParam0->f_183 = func_151("POUR_COFFEE", 1367437629, uParam0->f_152, 1, 1, 1, 0, 5, 9f, 570, 4000, 10, 1073741824, 0, -820096546, 0, 0);
					func_82(uParam0->f_183, 1754796591, 0, 1);
				}
				else if (func_152(uParam0->f_183, 1))
				{
					uParam0->f_157 = 1;
					func_68(uParam0);
					func_54(uParam0);
					func_6(&(uParam0->f_151), 4194304);
				}
			}
			else if (func_70(uParam0->f_183))
			{
				func_153(uParam0);
			}
		}
	}
	else
	{
		func_153(uParam0);
		func_154(uParam0);
	}
	if (func_70(uParam0->f_181))
	{
		func_82(uParam0->f_181, 1754796591, 0, 1);
	}
}

void func_65(var uParam0)
{
	if (func_16(uParam0->f_151, 4194304))
	{
		if (!func_70(uParam0->f_182))
		{
			if (((((!ped_has_use_scenario_task(Global_35) && !func_56(16777216)) && !func_56(4096)) && !func_56(1)) && !func_155()) && !func_16(uParam0->f_151, 524288))
			{
				uParam0->f_182 = func_151("CRAFT_COOK", -473983589, uParam0->f_152, 0, 1, 1, 0, 5, 7f, 570, 4000, 10, 1073741824, 0, -820096546, 0, 0);
				set_bit(&(Global_1956580->f_1), 2);
				set_bit(&(Global_1956580->f_1), 3);
				if (func_16(uParam0->f_151, 16384))
				{
					if (func_156(uParam0))
					{
						func_157(uParam0->f_182, "CAMP_REC_COOK", 1);
					}
					else
					{
						clear_bit(&(Global_1956580->f_1), 2);
						func_84(uParam0->f_182, 0, 1);
					}
				}
			}
		}
		else if (ped_has_use_scenario_task(Global_35))
		{
			func_54(uParam0);
			func_6(&(uParam0->f_151), 4194304);
		}
		else if (func_56(16777216) || func_16(uParam0->f_151, 524288))
		{
			func_55(16777216);
			func_17(&(uParam0->f_151), 524288);
			func_54(uParam0);
			func_6(&(uParam0->f_151), 4194304);
		}
		else
		{
			if (func_16(uParam0->f_151, 16384) != func_16(uParam0->f_151, 32768))
			{
				if (func_16(uParam0->f_151, 16384))
				{
					if (func_156(uParam0) && !func_70(Global_1935496->f_114))
					{
						func_157(uParam0->f_182, "CAMP_REC_COOK", 1);
						func_84(uParam0->f_182, 1, 1);
						func_17(&(uParam0->f_151), 65536);
					}
					else
					{
						func_144(&(uParam0->f_182), 1, 1);
						uParam0->f_182 = func_151("CRAFT_COOK", -473983589, uParam0->f_152, 0, 1, 1, 0, 5, 7f, 570, 4000, 10, 1073741824, 0, -820096546, 0, 0);
						func_84(uParam0->f_182, 0, 1);
						func_6(&(uParam0->f_151), 65536);
					}
				}
				else
				{
					set_bit(&(Global_1956580->f_1), 2);
					set_bit(&(Global_1956580->f_1), 3);
					func_144(&(uParam0->f_182), 1, 1);
					uParam0->f_182 = func_151("CRAFT_COOK", -473983589, uParam0->f_152, 0, 1, 1, 0, 5, 7f, 570, 4000, 10, 1073741824, 0, -820096546, 0, 0);
				}
				if (func_16(uParam0->f_151, 16384))
				{
					func_17(&(uParam0->f_151), 32768);
				}
				else
				{
					func_6(&(uParam0->f_151), 32768);
				}
			}
			if (func_152(uParam0->f_182, 1))
			{
				func_17(&(uParam0->f_151), 524288);
				clear_bit(&(Global_1956580->f_1), 2);
				func_54(uParam0);
				func_6(&(uParam0->f_151), 4194304);
				if (func_16(uParam0->f_151, 16384))
				{
					if (func_156(uParam0))
					{
						func_17(&(uParam0->f_151), 65536);
					}
					else
					{
						func_6(&(uParam0->f_151), 65536);
					}
				}
				if (func_16(uParam0->f_151, 16384) && func_16(uParam0->f_151, 65536))
				{
					func_47(268435456);
				}
			}
		}
	}
	else
	{
		func_144(&(uParam0->f_182), 1, 1);
	}
	if (func_70(uParam0->f_182))
	{
		func_82(uParam0->f_182, 1754796591, 0, 1);
	}
}

bool func_66(int iParam0)
{
	return (Global_1392040->f_1 && iParam0) != 0;
}

char* func_67(int iParam0)
{
	return "CAMPFIRE";
}

void func_68(var uParam0)
{
	fVar0 = 10000f;
	iVar1 = -1;
	iVar2 = create_itemset(true);
	iVar3 = 0;
	while (iVar3 < 6)
	{
		if (iVar3 < 5)
		{
			if (_does_scenario_point_exist(uParam0[iVar3]))
			{
				if (_get_ped_using_scenario_point(uParam0[iVar3]) != 0)
				{
				}
				else if (!_0xab643407d0b26f07(Global_35, uParam0[iVar3], 0, 0, 1) && !func_56(268435456))
				{
				}
				else
				{
					_0x20a4bf0e09bee146(iVar2);
					if (func_158(&iVar2, _get_scenario_point_coords(uParam0[iVar3], true)))
					{
					}
					else
					{
						fVar4 = func_21(Global_36, *uParam0->f_7[iVar3]);
						if (fVar4 < fVar0)
						{
							iVar1 = iVar3;
							fVar0 = fVar4;
						}
					}
				}
			}
		}
		iVar3++;
	}
	destroy_itemset(iVar2);
	if (iVar1 == -1)
	{
		func_55(268435456);
		func_55(16777216);
		func_6(&(uParam0->f_151), 524288);
		uParam0->f_157 = 0;
		return;
	}
	if (func_56(268435456))
	{
		func_159(Global_35, 1, 1);
		switch (iVar1)
		{
			case 4:
				uParam0->f_157 = 2;
				_task_use_scenario_point(Global_35, uParam0[4], "PROP_PLAYER_SEAT_CHAIR_PLAYER_CAMP", 0, false, true, 0, false, -1f, false);
				uParam0->f_155 = 9;
				uParam0->f_154 = 4;
				break;
			case 0:
			case 3:
				uParam0->f_157 = 2;
				_task_use_scenario_point(Global_35, uParam0[0], "WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE", 0, false, true, 0, false, -1f, false);
				uParam0->f_155 = 6;
				uParam0->f_154 = 0;
				break;
			case 1:
			case 2:
				uParam0->f_157 = 2;
				_task_use_scenario_point(Global_35, uParam0[1], "WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE", 0, false, true, 0, false, -1f, false);
				uParam0->f_155 = 6;
				uParam0->f_154 = 1;
				break;
		}
		do_screen_fade_out(0);
	}
	else
	{
		switch (iVar1)
		{
			case 4:
				_task_use_scenario_point(Global_35, uParam0[iVar1], "PROP_PLAYER_SEAT_CHAIR_PLAYER_CAMP", 0, true, false, 0, false, -1f, false);
				break;
			case 0:
			case 1:
			case 2:
			case 3:
				if (func_56(16777216) || func_16(uParam0->f_151, 524288))
				{
					bVar5 = true;
					if (func_160(0) || func_160(1))
					{
						bVar5 = false;
					}
					if (bVar5)
					{
						_0xd65fdc686a031c83(Global_35, -1955932021, 3f);
					}
					_task_use_scenario_point(Global_35, uParam0[iVar1], "WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_ARTHUR", 0, true, false, 0, false, -1f, false);
				}
				else if (uParam0->f_157 == 1)
				{
					_task_use_scenario_point(Global_35, uParam0[iVar1], "WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_ARTHUR", 0, true, false, 0, false, -1f, false);
				}
				else if (func_161())
				{
					_task_use_scenario_point(Global_35, uParam0[iVar1], "WORLD_PLAYER_CAMP_FIRE_SQUAT_MALE_A", 0, true, false, 0, false, -1f, false);
				}
				else
				{
					_task_use_scenario_point(Global_35, uParam0[iVar1], "WORLD_PLAYER_CAMP_FIRE_SIT_MALE_A", 0, true, false, 0, false, -1f, false);
				}
				break;
		}
		uParam0->f_154 = iVar1;
	}
}

void func_69()
{
	if (func_121(-160924582, 0))
	{
		func_162(32);
	}
	if (func_121(-1016714371, 0))
	{
		func_162(64);
	}
}

bool func_70(int iParam0)
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

bool func_71(int iParam0, bool bParam1)
{
	if (bParam1 && !func_70(iParam0))
	{
		return false;
	}
	iVar0 = func_163(iParam0);
	return _uiprompt_is_just_released((*Global_1945938)[iVar0]->f_3);
}

bool func_72()
{
	return (((!_is_app_active(1433015236) && !Global_1898068->f_4) && !func_164()) && _can_launch_app_by_hash(1833066477));
}

void func_73(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_74(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_75(var uParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 18)
	{
		if (func_70(&(uParam0->f_162[iVar0])))
		{
			if (func_165(&(uParam0->f_162[iVar0]), 0) == bParam1)
			{
			}
			else
			{
				func_84(&(uParam0->f_162[iVar0]), bParam1, 1);
			}
		}
		iVar0++;
	}
}

void func_76()
{
	if (_is_app_active(1833066477) && func_77() != 0)
	{
		func_73(&Global_43907, 16);
	}
}

int func_77()
{
	return Global_43908;
}

void func_78(var uParam0)
{
	iVar0 = _0xc22aa08a8adb87d4(Global_35);
	if (iVar0 == -597629206)
	{
		set_entity_proofs(Global_35, 2, false);
	}
	else
	{
		set_entity_proofs(Global_35, 0, false);
	}
	if (iVar0 == 1135271674)
	{
		if (((((func_85(uParam0) && (get_game_timer() - uParam0->f_196) > 500) && !func_16(uParam0->f_151, 524288)) && !func_56(16777216)) && !func_166(15)) && uParam0->f_157 != 1)
		{
			func_31(&(uParam0->f_204));
			func_88(-63615330, 0.5f);
			uParam0->f_196 = get_game_timer();
		}
	}
	else if (iVar0 == -571916863)
	{
		if (func_85(uParam0) && (get_game_timer() - uParam0->f_196) > 500)
		{
			if (!func_125(&(uParam0->f_204)))
			{
				func_31(&(uParam0->f_204));
			}
			if (func_29(&(uParam0->f_204), 180f))
			{
				func_31(&(uParam0->f_204));
				if (!func_161())
				{
					func_88(1698735158, 0.5f);
					uParam0->f_196 = get_game_timer();
				}
			}
		}
	}
	else if (iVar0 == -597629206)
	{
		if (func_85(uParam0) && (get_game_timer() - uParam0->f_196) > 500)
		{
			if (!func_125(&(uParam0->f_204)))
			{
				func_31(&(uParam0->f_204));
			}
			if (func_29(&(uParam0->f_204), 10f))
			{
				if (func_161())
				{
					func_31(&(uParam0->f_204));
					uParam0->f_196 = get_game_timer();
					func_88(-841180202, 0.5f);
				}
			}
		}
	}
	else if (iVar0 == -518407211)
	{
		if (func_85(uParam0) && (get_game_timer() - uParam0->f_196) > 500)
		{
			func_88(653141085, 2f);
			uParam0->f_196 = get_game_timer();
		}
	}
	else if (iVar0 == -1433449364)
	{
		if (func_85(uParam0) && (get_game_timer() - uParam0->f_196) > 500)
		{
			func_88(1335077954, 2f);
			uParam0->f_196 = get_game_timer();
		}
	}
}

bool func_79(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (!func_167())
	{
		if (bParam1)
		{
			iVar2 = iParam2;
			if (iParam3 != -1)
			{
				iVar1 = iParam3;
			}
			else
			{
				iVar1 = uParam0->f_154;
			}
		}
		else
		{
			iVar1 = uParam0->f_154;
			iVar2 = uParam0->f_155;
		}
		switch (iVar1)
		{
			case 0:
			case 1:
				switch (iVar2)
				{
					case 1:
						iVar0 = 0;
						break;
					case 3:
					case 4:
						iVar0 = 0;
						break;
					default:
						if (func_23() != 0)
						{
							iVar0 = 544882;
						}
						else
						{
							iVar0 = 20498;
						}
						break;
				}
				break;
			case 2:
			case 3:
				if ((iVar2 == 3 || iVar2 == 4) || iVar2 == 1)
				{
					iVar0 = 0;
				}
				else if (func_23() != 0)
				{
					iVar0 = 544882;
				}
				else
				{
					iVar0 = 20498;
				}
				break;
			case 4:
				switch (iVar2)
				{
					case 1:
						iVar0 = 56;
						break;
					default:
						if (func_23() != 0)
						{
							iVar0 = 544880;
						}
						else
						{
							iVar0 = 20498;
						}
						break;
				}
				break;
		}
	}
	if ((_0x038b1f1674f0e242(Global_35) || Global_1357517) // PointerArith || func_16(uParam0->f_151, 262144))
	{
		iVar0 = 0;
	}
	else if (func_138(Global_35, 0))
	{
		if (!func_16(uParam0->f_151, 32))
		{
			func_63(178, 1);
			func_17(&(uParam0->f_151), 32);
		}
		iVar0 = 16;
	}
	func_168(uParam0, iVar0);
	if (uParam0->f_157 == 2)
	{
		func_75(uParam0, 0);
	}
	iVar3 = func_169(uParam0);
	if (iVar3 != -1)
	{
		if (uParam0->f_156 != -1)
		{
			uParam0->f_154 = uParam0->f_156;
		}
	}
	switch (iVar3)
	{
		case 0:
			func_130(&(uParam0->f_57));
			func_45(&(uParam0->f_57), 1);
			uParam0->f_157 = 6;
			break;
		case 2:
			func_53(uParam0);
			uParam0->f_157 = 1;
			break;
		case 4:
			uParam0->f_187 = -1;
			func_53(uParam0);
			func_41(uParam0, 7);
			return false;
		case 16:
			_display_hud_component(2011163970);
			func_53(uParam0);
			func_17(&(uParam0->f_151), 262144);
			break;
		case 5:
			func_45(&(uParam0->f_57), 2);
			func_62(uParam0, 0);
			uParam0->f_57.f_35 = 1;
			uParam0->f_157 = 2;
			func_53(uParam0);
			func_41(uParam0, 10);
			break;
		case 9:
			func_53(uParam0);
			uParam0->f_157 = 12;
			return true;
		case 10:
			func_53(uParam0);
			uParam0->f_157 = 11;
			return true;
		case 3:
			func_170(uParam0, func_16(uParam0->f_151, 16));
			uParam0->f_157 = 0;
			func_53(uParam0);
			_display_hud_component(2011163970);
			break;
		default:
			return false;
	}
	return true;
}

int func_80(var uParam0)
{
	if (uParam0->f_157 == 10)
	{
		return func_94(uParam0);
	}
	else
	{
		switch (uParam0->f_154)
		{
			case 0:
				return func_171(uParam0);
			case 1:
				return func_172(uParam0);
			case 2:
				return func_173(uParam0);
			case 3:
				return func_174(uParam0);
			case 4:
				return func_175(uParam0);
		}
	}
	func_53(uParam0);
	return 0;
}

int func_81(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	if (is_string_null_or_empty(sParam0))
	{
		return 0;
	}
	if (!_0xbc0884bc590951c7(iParam1, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_176(iVar0, 2))
		{
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_177(iVar1, iParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 1065353216, 0, 0, 0, iParam10, bParam11);
		return iVar1;
	}
	return 0;
}

void func_82(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_70(iParam0))
	{
		return;
	}
	iVar0 = func_163(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_group((*Global_1945938)[iVar0]->f_3, iParam1, iParam2);
}

void func_83(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_70(iParam0))
	{
		return;
	}
	iVar0 = func_163(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1945938)[iVar0]->f_3, iParam1, iParam2);
}

void func_84(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_70(iParam0))
	{
		return;
	}
	iVar0 = func_163(iParam0);
	if (bParam1)
	{
		func_178(iParam0, 4);
		func_179(iVar0, 1);
		func_180(iVar0, 1);
	}
	else
	{
		func_181(iParam0, 4);
		func_180(iVar0, 0);
	}
}

bool func_85(var uParam0)
{
	bVar0 = _0xc488b8c0e52560d8(Global_35);
	bVar1 = _0x2dc0e8dcbd3546e9(Global_35);
	if ((bVar0 || bVar1) && !has_anim_event_fired(Global_35, 1944546609))
	{
		return false;
	}
	if (bVar1 && uParam0->f_156 != -1)
	{
		iVar2 = func_36(uParam0);
		if (iVar2 != uParam0->f_156)
		{
			return false;
		}
		if (uParam0->f_154 != iVar2)
		{
			uParam0->f_154 = iVar2;
			return false;
		}
	}
	if (func_182())
	{
		return false;
	}
	if (_0xec7e480ff8bd0bed(Global_35))
	{
		return false;
	}
	return true;
}

int func_86(bool bParam0)
{
	if (func_23() == -1)
	{
		if (!bParam0 && _0x7c7e4ab748ea3b07())
		{
			return 5;
		}
		return 1;
	}
	if (!bParam0 && _inventory_get_ped_inventory_id(player_ped_id()) == 3)
	{
		return 3;
	}
	return 2;
}

int func_87(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (func_183())
	{
		Global_1935689->f_10191 = iParam0;
		func_184(iParam0, 1, -142743235, 0, 0);
		return 0;
	}
	if (func_185())
	{
		_0xbfff81e12a745a5f();
		func_186(iParam0, 0);
		func_184(func_187(), 1, -142743235, 0, 0);
		return 0;
	}
	if (!func_188(iParam0, bParam4))
	{
		return 0;
	}
	if (func_189(iParam0))
	{
		return 0;
	}
	if (_0xec7e480ff8bd0bed(Global_35) && !has_anim_event_fired(Global_35, 108107462))
	{
		return 0;
	}
	iVar31 = 0;
	bVar32 = true;
	iVar33 = 1;
	bVar34 = true;
	Var0.f_4 = iParam3;
	Var0.f_5 = 1;
	if (func_190(iParam0, -2081717885))
	{
		func_191(iParam0, Var10, Var0, uVar29, bVar32, iVar33);
	}
	else if (func_190(iParam0, -1909684001))
	{
		func_192(iParam0, Var10, Var0, bVar32, iVar33);
	}
	else if (func_190(iParam0, 587975446))
	{
		func_193(iParam0, Var10);
	}
	else if (func_190(iParam0, 566155764))
	{
		if (!func_194(iParam0))
		{
			return 0;
		}
	}
	if (func_195(iParam0, bParam5, bParam6))
	{
		Global_1911772 = iParam0;
		Global_1911913 = get_game_timer();
		return 1;
	}
	if (func_190(iParam0, -1227898937))
	{
		Var0.f_2 = iParam0;
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "doc_newspaper", 32);
		Var10.f_14 = 1024;
		Var10.f_15 = 1;
		func_196(Var10, 1);
		iVar33 = 0;
		bVar32 = false;
	}
	else if ((func_190(iParam0, -1472964441) || func_190(iParam0, -228153877)) || func_190(iParam0, 566155764))
	{
	}
	else if (func_190(iParam0, 1919582297))
	{
		if (((func_197() || is_ped_active_in_scenario(Global_35, 1)) || _0x0c3cb2e600c8977d(Global_35, 1)) || !is_ped_on_foot(Global_35))
		{
			return 0;
		}
		switch (iParam0)
		{
			case 1929383243:
			case 2036955137:
				StringCopy(&(Var10.f_10), "item_bait_herbivore", 32);
				break;
			case -1635450397:
			case 1831763320:
				StringCopy(&(Var10.f_10), "item_bait_predator", 32);
				break;
		}
		Var0.f_1 = iParam0;
		Var0.f_3 = iParam1;
		Var10 = { Var0 };
		Var10.f_14 = 512;
		Var10.f_15 = 1;
		func_196(Var10, 0);
		bVar32 = false;
	}
	else if (func_122(iParam0) == -1650247667)
	{
		Var0.f_3 = 0;
		Var0.f_1 = iParam0;
		Var0.f_2 = 0;
		Var0 = func_198(Global_1058888->f_49121.f_4.f_31);
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "net_player_wheel_item_use", 32);
		Var10.f_14 = 512;
		Var10.f_15 = 1;
		func_196(Var10, 0);
		iVar33 = 1;
	}
	else if (func_122(iParam0) == -1037537535)
	{
		if (func_199(iParam0) == -999503751)
		{
			if (func_23() != -1)
			{
				return iVar33;
			}
			if (!func_200(iParam0))
			{
				func_201("SI_ITEM_OUTFIT_IS_LOCKED", 10000, 0, 0, 0, 1);
				return iVar33;
			}
			bVar35 = func_202(7, iParam0);
			bVar36 = func_202(1, iParam0);
			if (bVar36 && !bVar35)
			{
				func_201("SI_ITEM_USE_OUTFITS_TEMP_HORSE", 10000, 0, 0, 0, 1);
				return iVar33;
			}
			if (!func_203(7))
			{
				func_201("SI_ITEM_USE_OUTFITS_NO_SADDLE", 10000, 0, 0, 0, 1);
				return iVar33;
			}
			if (!bVar35)
			{
				if (func_205(Global_35, func_204(7), 0))
				{
					func_201("SI_ITEM_USE_OUTFITS_STATIONARY", 10000, 0, 0, 0, 1);
				}
				else
				{
					func_201("SI_ITEM_USE_OUTFITS_NEAR_HORSE", 10000, 0, 0, 0, 1);
				}
				return iVar33;
			}
			iVar30 = func_206(iParam0);
			if (iVar30 == -1)
			{
				func_207(20, iParam0, 8, 0, 0);
			}
			else
			{
				func_207(20, iParam0, 0, 0, 0);
			}
		}
		else
		{
			switch (func_199(iParam0))
			{
				case -525676072:
				case -68128151:
				case 81053684:
					func_208(iParam0, 0);
					return iVar33;
				case -2061583405:
					func_209(iParam0);
					return 1;
				case -1719060085:
					if (iParam0 == &Global_1946804->f_1497.f_1[23])
					{
						func_210(Global_35, 260271636, 0, -358215195, 1, 1, 1, 0, 1, 0);
						_0xcb9401f918cb0f75(Global_35, "PlayUnequipGlovesFidget", 1, 15);
						func_211(iParam0, 0);
						return 1;
					}
					else
					{
						_0xcb9401f918cb0f75(Global_35, "PlayEquipGlovesFidget", 1, 15);
						func_211(iParam0, 1);
					}
					break;
			}
			func_210(Global_35, iParam0, 0, -358215195, 1, 1, 1, 0, 0, 0);
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1259508039:
				func_212(1);
				break;
			case -727924611:
				if (func_23() != -1)
				{
				}
				else if (!func_200(iParam0))
				{
					func_201("SI_ITEM_WARDROBE_IS_LOCKED", 10000, 0, 0, 0, 1);
				}
				else
				{
					bVar35 = func_202(7, iParam0);
					bVar36 = func_202(1, iParam0);
					if (bVar36 && !bVar35)
					{
						if (does_blip_exist(Global_36559))
						{
							remove_blip(&Global_36559);
						}
						Global_36559 = _0x3e593df9c2962ec6(-1925605092);
						_blip_set_modifier(Global_36559, 673950256);
						func_201(_create_var_string(0, -1680440926, Global_36559), 10000, 0, 0, 0, 1);
					}
					else if (!func_203(7))
					{
						func_201("SI_ITEM_USE_WARDROBE_NO_SADDLE", 10000, 0, 0, 0, 1);
					}
					else if (!bVar35)
					{
						if (func_205(Global_35, func_204(7), 0))
						{
							func_201("SI_ITEM_USE_WARDROBE_STATIONARY", 10000, 0, 0, 0, 1);
						}
						else
						{
							if (does_blip_exist(Global_36559))
							{
								remove_blip(&Global_36559);
							}
							Global_36559 = _0x3e593df9c2962ec6(-1925605092);
							_blip_set_modifier(Global_36559, 673950256);
							func_201(_create_var_string(0, -482898802, Global_36559), 10000, 0, 0, 0, 1);
						}
					}
					else
					{
						iVar26 = 1338309244;
						if (_get_number_of_references_of_script_with_name_hash(iVar26) > 0)
						{
						}
						else
						{
							Var0.f_1 = iParam0;
							Var0.f_2 = 51499045;
							Var10 = { Var0 };
							StringCopy(&(Var10.f_10), "player_wardrobe", 32);
							Var10.f_14 = 1024;
							Var10.f_15 = 1;
							func_196(Var10, 0);
						}
						Jump @2541; //curOff = 1636
						func_213();
						Jump @2541; //curOff = 1643
						if (!func_16(Global_1392040->f_1, 1) || func_16(Global_1392040->f_1, 512))
						{
							if (func_23() == -1)
							{
								if (_get_number_of_references_of_script_with_name_hash(get_hash_key("player_camp")) > 3)
								{
								}
								else
								{
									StringCopy(&(Var10.f_10), "player_camp", 32);
									Var10.f_14 = 6096;
									if (func_214(120))
									{
										iVar31 |= 8;
										Var0.f_6 = { -1407.407f, 1508.33f, 239f };
										Var0.f_6.f_3 = 260f;
									}
									else if (func_166(15))
									{
										iVar31 |= 16;
										Var0.f_6 = { 1775.903f, 1255.647f, 189.6069f };
										Var0.f_6.f_3 = 90f;
									}
									else if (!func_200(iParam0) || ((!func_216(Global_35, func_204(7), func_215(7), 1) || func_217() != 0) && !func_216(Global_35, Global_1900383->f_393, 5f, 1)))
									{
										iVar31 |= 128 | 32;
									}
									if ((func_16(iVar31, 128) && Global_1357522->f_10[1]) // PointerArith)
									{
										Global_1357522->f_10[1] = 0;
									}
									else if ((!func_16(iVar31, 128) && Global_1357522->f_10[0]) // PointerArith)
									{
										Global_1357522->f_10[0] = 0;
									}
									Var0 = iVar31;
									Var10 = { Var0 };
									Var10.f_15 = 1;
									func_196(Var10, 2);
								}
							}
							else if (func_200(-1838434463))
							{
								if (func_218(1))
								{
									func_219(2);
								}
								else if (func_220(1))
								{
									func_201("GC_SELECT_HELP_FOLLOWER_DEAD", 10000, 0, 0, 0, 1);
								}
								else
								{
									if (_0x424b17a7dc5c90bc(player_id()))
									{
										func_201("GC_SELECT_GENERAL_FAIL", 10000, 0, 0, 0, 1);
									}
									else
									{
										func_201("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
									}
									func_221(_0x901e0dc25080c8b9(player_id()));
								}
							}
							else if (!_0x424b17a7dc5c90bc(player_id()))
							{
								func_201("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
								func_221(_0x901e0dc25080c8b9(player_id()));
							}
							else
							{
								func_201("GC_SELECT_HELP_DISABLED", 10000, 0, 0, 0, 1);
							}
						}
						else
						{
							Global_1392040->f_1 |= 2;
							iVar33 = 1;
						}
						Jump @2541; //curOff = 2207
						if (func_37(Global_35, 1, 0, 0) != -160924582)
						{
							set_current_ped_weapon(Global_35, -160924582, true, 0, false, false);
						}
						return 1;
						Jump @2541; //curOff = 2248
						if (func_37(Global_35, 1, 0, 0) != -1016714371)
						{
							set_current_ped_weapon(Global_35, -1016714371, true, 0, false, false);
						}
						return 1;
						Jump @2541; //curOff = 2289
						iVar27 = func_222(func_22());
						iVar28 = func_223();
						if (func_224(iVar27))
						{
							if (iVar27 == iVar28 && !func_225())
							{
								bVar34 = false;
							}
						}
						if (bVar34)
						{
							func_201("PROPERTY_SHAVE_INV", 10000, 0, 0, 0, 1);
						}
						Jump @2541; //curOff = 2359
						func_226(iParam0, 1, 0, 562618531, 0);
						Jump @2541; //curOff = 2377
						func_63(497, 1);
						Jump @2541; //curOff = 2388
						func_227(1);
						Jump @2541; //curOff = 2396
						func_226(iParam0, 1, 0, 562618531, 0);
						func_228(136579449, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						Jump @2541; //curOff = 2437
						_task_item_interaction(player_ped_id(), -569063887, 1928812891, 1, 0, -1082130432);
						bVar32 = false;
						return 1;
						Jump @2541; //curOff = 2472
						Var0.f_2 = -7337301;
						Var10 = { Var0 };
						StringCopy(&(Var10.f_10), "native_american_journal", 32);
						Var10.f_14 = 512;
						Var10.f_15 = 1;
						func_196(Var10, 0);
						iVar33 = 0;
						bVar32 = false;
						Jump @2541; //curOff = 2532
						iVar33 = 0;
					}
				}
				if (bVar32)
				{
					_0xbfff81e12a745a5f();
				}
				return iVar33;
				default:
					break;
		}
	}
}

bool func_88(int iParam0, float fParam1)
{
	if (!_0x68821369a2ceadd5(Global_35, iParam0))
	{
		_0xd65fdc686a031c83(Global_35, iParam0, fParam1);
		_0x6d07b371e9439019(Global_35);
		return false;
	}
	return true;
}

int func_89(var uParam0, int iParam1)
{
	if (!func_85(uParam0) || (get_game_timer() - uParam0->f_196) < 500)
	{
		return 0;
	}
	if (!func_70(&(uParam0->f_162[8])))
	{
		return 0;
	}
	if (!func_165(&(uParam0->f_162[8]), 0) && iParam1 == -734326242)
	{
		func_84(&(uParam0->f_162[8]), 1, 1);
	}
	if (func_229(&(uParam0->f_162[8]), 1))
	{
		func_88(-1783213919, 1086324736);
		func_144(uParam0->f_162[8], 1, 1);
		return 1;
	}
	return 0;
}

bool func_90()
{
	return &Global_1935436 == 2;
}

void func_91(int iParam0)
{
	if (iParam0 >= &Global_1935436)
	{
		return;
	}
	Global_1935436->f_1 = iParam0;
}

bool func_92()
{
	return &Global_1935436 == 1;
}

void func_93(int iParam0, float fParam1, bool bParam2)
{
	if ((func_190(iParam0, 1573112293) || func_190(iParam0, 672467738)) || func_190(iParam0, -550842268))
	{
		bVar8 = true;
	}
	Var11.f_1 = 20;
	_0xd962f8579d702db5();
	Global_1935496->f_26 = 0;
	if (_item_database_fillout_item_effects_ids(iParam0, &Var11))
	{
		iVar0 = 0;
		while (iVar0 < Var11)
		{
			if (_item_database_fillout_item_effects_id_info(&(Var11.f_1[iVar0]), Var33[iVar0]))
			{
				if (-943921969 == Var33[iVar0]->f_1)
				{
					fVar1 = func_230(0, (IntToFloat(Var33[iVar0]->f_2) / fParam1));
					func_231((IntToFloat(Var33[iVar0]->f_2) / fParam1), 1);
					func_232(0, 7000);
					bVar175 = true;
				}
				else if (-1104847406 == Var33[iVar0]->f_1)
				{
					fVar3 = func_230(2, (IntToFloat(Var33[iVar0]->f_2) / fParam1));
					func_233((IntToFloat(Var33[iVar0]->f_2) / fParam1));
					func_232(2, 7000);
					bVar174 = true;
				}
				else if (381158954 == Var33[iVar0]->f_1)
				{
					fVar2 = func_230(1, (IntToFloat(Var33[iVar0]->f_2) / fParam1));
					func_234((IntToFloat(Var33[iVar0]->f_2) / fParam1));
					func_232(1, 7000);
				}
				else if (-416929031 == Var33[iVar0]->f_1)
				{
					fVar4 = func_235((IntToFloat(Var33[iVar0]->f_2) / fParam1), (Var33[iVar0]->f_5 / fParam1));
					if (func_236(&uVar9, &uVar10, fVar4))
					{
						func_237(fVar4, 1, bVar8, 1);
						func_232(0, 7000);
						bVar175 = true;
					}
				}
				else if (1857353317 == Var33[iVar0]->f_1)
				{
					fVar5 = func_235((IntToFloat(Var33[iVar0]->f_2) / fParam1), (Var33[iVar0]->f_5 / fParam1));
					if (func_236(&uVar9, &uVar10, fVar5))
					{
						func_238(fVar5, 1, bVar8, 1);
						func_232(2, 7000);
						bVar174 = true;
					}
				}
				else if (1681823811 == Var33[iVar0]->f_1)
				{
					fVar6 = func_235((IntToFloat(Var33[iVar0]->f_2) / fParam1), (Var33[iVar0]->f_5 / fParam1));
					if (func_236(&uVar9, &uVar10, fVar6))
					{
						func_239(fVar6, 1, bVar8, 1);
						func_232(1, 7000);
					}
				}
				else if (-816334026 == Var33[iVar0]->f_1)
				{
					func_240((to_float(Var33[iVar0]->f_2) / fParam1), 1);
				}
				else if (bParam2)
				{
					if (2062242710 == Var33[iVar0]->f_1)
					{
						fVar7 = func_241(to_float(Var33[iVar0]->f_3), Var33[iVar0]->f_4);
						func_242(19, fVar7);
						bVar175 = true;
					}
					else if (-826379728 == Var33[iVar0]->f_1)
					{
						fVar7 = func_241(to_float(Var33[iVar0]->f_3), Var33[iVar0]->f_4);
						func_242(20, fVar7);
						bVar174 = true;
					}
					else if (-1191740624 == Var33[iVar0]->f_1)
					{
						fVar7 = func_241(to_float(Var33[iVar0]->f_3), Var33[iVar0]->f_4);
						func_242(18, fVar7);
					}
					else if (1869697234 == Var33[iVar0]->f_1)
					{
						fVar7 = func_241(to_float(Var33[iVar0]->f_3), Var33[iVar0]->f_4);
						func_242(0, fVar7);
						bVar175 = true;
					}
					else if (1342237631 == Var33[iVar0]->f_1)
					{
						fVar7 = func_241(to_float(Var33[iVar0]->f_3), Var33[iVar0]->f_4);
						func_242(2, fVar7);
						bVar174 = true;
					}
					else if (-1240225157 == Var33[iVar0]->f_1)
					{
						fVar7 = func_241(to_float(Var33[iVar0]->f_3), Var33[iVar0]->f_4);
						func_242(1, fVar7);
					}
				}
			}
			iVar0++;
		}
		func_243(iParam0, bParam2, bVar174, bVar175);
		_0x0e1db1f8f5b561dc(fVar1, fVar2, fVar3, round((fVar4 / 2f)), round((fVar6 / 2f)), round((fVar5 / 2f)));
	}
}

int func_94(var uParam0)
{
	disable_control_action(0, 613911080, false);
	if (!func_16(uParam0->f_151, 8))
	{
		func_244(uParam0);
		_uiprompt_set_active_group_this_frame(1323335645, "SLEEP", 1, 0, 0, 0);
		bVar0 = false;
		if (func_229(&(uParam0->f_162[12]), 1))
		{
			bVar0 = true;
			uParam0->f_186 = 6;
		}
		else if (func_229(&(uParam0->f_162[13]), 1))
		{
			bVar0 = true;
			uParam0->f_186 = 12;
		}
		else if (func_229(&(uParam0->f_162[14]), 1))
		{
			bVar0 = true;
			uParam0->f_186 = 18;
		}
		else if (func_229(&(uParam0->f_162[15]), 1))
		{
			bVar0 = true;
			uParam0->f_186 = 0;
		}
		if (bVar0)
		{
			uParam0->f_187 = -1;
			if (!_does_scenario_point_exist(uParam0[5]))
			{
				(*uParam0)[5] = _find_closest_active_scenario_point_of_type(*uParam0->f_7[5], uParam0->f_191, 3f, 0, false);
			}
			func_17(&(uParam0->f_151), 8);
			func_48(256);
			if (!func_16(uParam0->f_151, 1))
			{
				if (uParam0->f_154 == 4)
				{
					uParam0->f_195 = _create_anim_scene("scenario@MECH@CAMP_SETUP@sit_yawn_exit", 0, 0, false, true);
				}
				else
				{
					uParam0->f_195 = _create_anim_scene("scenario@MECH@CAMP_SETUP@kneel_yawn_exit", 0, 0, false, true);
				}
			}
			uParam0->f_156 = 5;
			uParam0->f_193 = _create_anim_scene(func_245(uParam0->f_186), 0, 0, false, true);
			if (func_56(524288))
			{
				uParam0->f_186 = 6;
			}
			if (Global_1392040->f_7 == -15)
			{
				Global_1392040->f_7 = func_147();
			}
			iVar1 = Global_1392040->f_7;
			func_246(&iVar1, 0, 0, 3, 0, 0, 0, 0);
			if (!func_247(iVar1))
			{
				Global_1392040->f_8++;
			}
			else
			{
				Global_1392040->f_8 = 0;
			}
			load_anim_scene(uParam0->f_193);
			func_53(uParam0);
		}
		else
		{
			func_49(256);
		}
	}
	else if (func_16(uParam0->f_151, 8))
	{
		if (!func_16(uParam0->f_151, 1))
		{
			if (func_248(uParam0->f_195))
			{
				set_anim_scene_entity(uParam0->f_195, "player", Global_35, 0);
				set_anim_scene_origin(uParam0->f_195, get_entity_coords(Global_35, true, false), get_entity_rotation(Global_35, 2), 2);
				start_anim_scene(uParam0->f_195);
				func_6(&(uParam0->f_151), 8);
				func_49(256);
				uParam0->f_187 = -1;
				func_41(uParam0, 8);
				return 1;
			}
			else
			{
				func_248(uParam0->f_195);
				return 0;
			}
		}
	}
	if (func_229(&(uParam0->f_162[3]), 1) || !ped_has_use_scenario_task(Global_35))
	{
		func_49(256);
		uParam0->f_187 = -1;
		func_53(uParam0);
		func_41(uParam0, 5);
		return 1;
	}
	return 0;
}

void func_95(float fParam0, float fParam1)
{
	set_gameplay_cam_relative_heading(fParam0, 1f);
	set_gameplay_cam_relative_pitch(fParam1, 1f);
}

void func_96(var uParam0)
{
	if (!func_16(uParam0->f_151, 2048))
	{
		if (!does_entity_exist(uParam0->f_159))
		{
			uParam0->f_159 = _get_scenario_point_entity(uParam0[0], "p_boiler02x");
		}
		if (does_entity_exist(uParam0->f_159))
		{
			set_entity_invincible(uParam0->f_159, true);
			func_17(&(uParam0->f_150), 1);
			uParam0->f_57.f_83 = 1;
		}
		else
		{
			func_6(&(uParam0->f_150), 1);
			uParam0->f_57.f_83 = 0;
		}
		func_17(&(uParam0->f_151), 2048);
	}
	else if (uParam0->f_57.f_83)
	{
		if (!does_entity_exist(uParam0->f_159))
		{
			uParam0->f_57.f_83 = 0;
			func_6(&(uParam0->f_150), 1);
			uParam0->f_57.f_84 = 0;
		}
	}
}

bool func_97(var uParam0, var uParam1)
{
	func_47(131072);
	if (func_249(uParam0))
	{
		set_entity_proofs(Global_35, 0, false);
		return true;
	}
	else
	{
		set_entity_proofs(Global_35, 2, false);
	}
	return false;
}

bool func_98(bool bParam0)
{
	if (func_23() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_86(bParam0));
}

void func_99(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!func_121(iParam0, 0))
	{
		return;
	}
	func_251(func_250(-413660030), iParam1);
	if (bParam3 && iParam0 != -1199896558)
	{
		if (func_23() == -1)
		{
			if (func_190(iParam0, -1588156645))
			{
				iVar0 = func_253(func_252(iParam0, 0), 0);
				if (is_weapon_valid(iVar0))
				{
					func_254(iVar0);
				}
			}
		}
		if (iParam4 == 0)
		{
			if (func_122(iParam0) == -1977020088)
			{
				if (func_255(iParam0, 0))
				{
					func_256(iParam0, 1, 0, 1, 0);
				}
			}
			else
			{
				func_228(iParam0, iParam1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
		else
		{
			func_257(iParam0, iParam4, iParam1);
		}
	}
	Var1 = { func_258(iParam0) };
	_0x6a0184e904cdf25e(&Var1, iParam1);
	if (func_259(iParam0, 0))
	{
		Var1 = { func_260(-1276738576, -1555359431) };
	}
	else if (func_259(iParam0, 2))
	{
		Var1 = { func_260(-1276738576, 307971639) };
	}
	else if (func_259(iParam0, 5))
	{
		Var1 = { func_260(-1276738576, 644069854) };
	}
	else if (func_259(iParam0, 1))
	{
		Var1 = { func_260(-1276738576, -97115714) };
	}
	else if (func_259(iParam0, 3))
	{
		Var1 = { func_260(-1276738576, -2143405780) };
	}
	else if (func_259(iParam0, 4))
	{
		Var1 = { func_260(-1276738576, 1455184052) };
	}
	_0x6a0184e904cdf25e(&Var1, 1);
	if (func_23() == 0)
	{
		Global_1051039 = iParam0;
		return;
	}
	if (bParam2)
	{
		if (func_259(iParam0, 0))
		{
			func_261(40);
		}
		else
		{
			func_261(39);
		}
	}
	iVar10 = 0;
	if ((_item_database_fillout_item_info(iParam0, &vVar3) && vVar3.z == -1037537535) && func_262(Global_35, iParam0, &iVar10))
	{
		func_210(Global_35, iParam0, 0, -358215195, 1, 1, 1, 0, 1, 0);
	}
}

void func_100(vector3 vParam0)
{
	Global_40.f_9.f_7 = { vParam0 };
}

void func_101(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_263(&Global_0, 8);
	}
	if (!func_264() || func_23() != -1)
	{
		return;
	}
	func_263(&Global_0, 1);
}

void func_102(int iParam0, bool bParam1)
{
	fVar0 = to_float(iParam0);
	if (Global_1347477->f_4 + 60000) > get_game_timer()
	{
		fVar0 = (to_float(iParam0) - Global_1347477->f_5);
	}
	if (fVar0 > 0f)
	{
		_0x51345ae20f22c261(player_id(), fVar0, 0, 0, 0);
		Global_1347477->f_5 = to_float(iParam0);
		func_232(2, 7000);
	}
	Global_1347477->f_4 = get_game_timer();
	func_265(0);
	if (bParam1)
	{
		func_266(100f);
	}
}

void func_103()
{
	if (func_267(0))
	{
		func_268(0, 0, 100);
		func_268(0, 1, 100);
	}
	if (func_267(1))
	{
		func_268(1, 0, 100);
		func_268(1, 1, 100);
	}
}

void func_104(bool bParam0)
{
	if (bParam0)
	{
		Global_1935436->f_9 = 0f;
	}
	Global_1935436->f_8 = 0f;
	Global_1935436->f_12.f_1 = 0f;
	Global_1935436->f_12 = 0f;
	Global_1935436->f_12.f_3 = 0f;
	Global_1935436->f_12.f_2 = 0f;
	Global_1935436->f_12.f_4 = 0;
	_0x3c4ae8506638c7e2(get_player_index(), 1);
	_0x8f44ebb3ba8f6d44(get_player_index(), 0);
	_0x06d26a96ca1bca75(Global_35, 10, 0f, 0);
	set_ped_is_drunk(Global_35, false);
	_0x406ccf555b04fad3(Global_35, 0, 0f);
	func_269(0f);
	Global_1935436->f_11 = 1;
	if (func_270())
	{
		set_ambient_voice_name(Global_35, "ARTHUR");
	}
	else
	{
		set_ambient_voice_name(Global_35, "JOHN_PLAYER");
	}
	if (animpostfx_is_running("PlayerDrunk01"))
	{
		func_271();
	}
	if (is_gameplay_cam_shaking())
	{
		stop_gameplay_cam_shaking(false);
	}
}

void func_105(int iParam0)
{
	Global_1392040->f_6 = iParam0;
}

void func_106(vector3 vParam0, float fParam3, bool bParam4, bool bParam5)
{
	iVar0 = 1048576;
	if (bParam4)
	{
		iVar0 |= 131072;
	}
	if (bParam5)
	{
		iVar0 |= 524288;
	}
	clear_area(vParam0, fParam3, iVar0);
}

void func_107(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (bParam1)
	{
	}
	if (func_272() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0];
		if (((func_273(iVar1) && !func_274(iVar1, iParam2)) && (!bParam3 || !func_275(iVar1))) && (!bParam4 || !func_276(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_277(iVar0);
			}
		}
		iVar0++;
	}
}

void func_108(int iParam0)
{
	iVar1 = 0;
	if (iParam0 == 0 && Global_43891 == 1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (&Global_40.f_11922[iVar0] == 0)
		{
			Jump @96; //curOff = 52
		}
		else
		{
			func_278(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_279(1);
	}
}

void func_109(int iParam0)
{
	_0x51345ae20f22c261(player_id(), to_float(iParam0 * 14), 0, 0, 0);
}

void func_110(var uParam0)
{
	if (func_85(uParam0) && (get_game_timer() - uParam0->f_196) > 250)
	{
		iVar0 = _0xc22aa08a8adb87d4(Global_35);
		if (iVar0 == -518407211)
		{
			func_88(653141085, 1086324736);
			uParam0->f_196 = get_game_timer();
		}
		else if (iVar0 == -1433449364)
		{
			func_88(1335077954, 1086324736);
			uParam0->f_196 = get_game_timer();
		}
		else if (ped_has_use_scenario_task(Global_35) && (get_frame_count() % 2) == 0)
		{
			clear_ped_tasks(Global_35, 1, 0);
		}
	}
}

void func_111(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (_does_scenario_point_exist(uParam0[iVar0]))
		{
			_delete_scenario_point(uParam0[iVar0]);
		}
		iVar0++;
	}
}

void func_112(var uParam0)
{
	if (does_entity_exist(uParam0->f_159) && does_entity_belong_to_this_script(uParam0->f_159, true))
	{
		set_entity_as_no_longer_needed(&(uParam0->f_159));
	}
}

void func_113(var uParam0)
{
	uParam0->f_153 = 0;
	uParam0->f_154 = -1;
	uParam0->f_155 = 0;
	uParam0->f_156 = -1;
	uParam0->f_157 = 0;
	uParam0->f_158 = 0;
	uParam0->f_152 = 0;
	uParam0->f_159 = 0;
}

bool func_114(int iParam0, vector3 vParam1)
{
	if (!_does_volume_exist(iParam0))
	{
		return false;
	}
	return _0xf256a75210c5c0eb(iParam0, vParam1);
}

bool func_115()
{
	if (&Global_1048576)
	{
		return true;
	}
	if (Global_1572887->f_4)
	{
		return true;
	}
	if (&Global_524298)
	{
		return true;
	}
	if (&Global_1048577)
	{
		return true;
	}
	if (&Global_1051043 == -1 && Global_1572887->f_6 & 1 != 0)
	{
		return true;
	}
	return false;
}

int func_116(int iParam0)
{
	if (!func_119(iParam0))
	{
		return -1;
	}
	return func_281(func_280(iParam0));
}

bool func_117(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_118(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_119(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_120(int iParam0, bool bParam1)
{
	switch (func_282(iParam0))
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

bool func_121(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_122(int iParam0)
{
	if (!func_121(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_123(int iParam0, int iParam1)
{
	if (!func_121(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_283(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_284("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_285(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_286(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_287(iVar1);
				return true;
			}
			iVar3++;
		}
		func_287(iVar1);
	}
	return false;
}

int func_124(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_121(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_122(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_283(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_288(iParam0, 0);
	}
	iVar2 = _0xe787f05dfc977bde(func_86(bParam2), iParam0, 0);
	return iVar2;
}

bool func_125(var uParam0)
{
	return func_289(*uParam0, 1);
}

float func_126(var uParam0)
{
	if (!func_125(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_290(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_291() - uParam0->f_1);
}

void func_127(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_291() - fParam1);
	func_292(uParam0, 1);
	func_293(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_128(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_129(int iParam0)
{
	Global_1900383->f_316 = (Global_1900383->f_316 || iParam0);
}

void func_130(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_144((*uParam0)[iVar0], 1, 1);
		iVar0++;
	}
}

void func_131(var uParam0, bool bParam1)
{
	func_294(0);
	if (bParam1)
	{
		if (_uistatemachine_request_transition(-1624772174, 1383188602))
		{
		}
		else
		{
			_close_app_by_hash(-1624772174);
		}
	}
	else
	{
		_close_app_by_hash(-1624772174);
	}
	uParam0->f_58 = 0;
	func_55(8);
	_0xd962f8579d702db5();
}

bool func_132()
{
	if (decor_exist_on(player_ped_id(), "player_crafting_active"))
	{
		return decor_get_bool(player_ped_id(), "player_crafting_active");
	}
	return false;
}

void func_133(bool bParam0)
{
	if (bParam0)
	{
	}
	Global_1911914->f_1582 = bParam0;
	decor_set_bool(Global_35, "player_crafting_active", bParam0);
}

void func_134(var uParam0)
{
	if (_does_anim_scene_exist(uParam0->f_63))
	{
		reset_anim_scene(uParam0->f_63, 0);
	}
	if (_does_anim_scene_exist(uParam0->f_65))
	{
		reset_anim_scene(uParam0->f_65, 0);
	}
	if (_does_anim_scene_exist(uParam0->f_66))
	{
		reset_anim_scene(uParam0->f_66, 0);
	}
	if (_does_anim_scene_exist(uParam0->f_67))
	{
		reset_anim_scene(uParam0->f_67, 0);
	}
	if (_does_anim_scene_exist(uParam0->f_68))
	{
		reset_anim_scene(uParam0->f_68, 0);
	}
	if (_does_anim_scene_exist(uParam0->f_69))
	{
		reset_anim_scene(uParam0->f_69, 0);
	}
	if (_does_anim_scene_exist(uParam0->f_70))
	{
		reset_anim_scene(uParam0->f_70, 0);
	}
	if (_does_anim_scene_exist(uParam0->f_71))
	{
		reset_anim_scene(uParam0->f_71, 0);
	}
	if (_does_anim_scene_exist(uParam0->f_72))
	{
		reset_anim_scene(uParam0->f_72, 0);
	}
	if (does_entity_exist(uParam0->f_85))
	{
		delete_object(&(uParam0->f_85));
	}
	if (does_entity_exist(uParam0->f_86))
	{
		delete_object(&(uParam0->f_86));
	}
	if (does_entity_exist(uParam0->f_87))
	{
		delete_object(&(uParam0->f_87));
	}
}

int func_135(int iParam0, int iParam1)
{
	if (!func_121(iParam0, 0))
	{
		return -1;
	}
	if (!func_295(iParam0, iParam1, 0, 0, 0, 1))
	{
		return -1;
	}
	Var0 = { func_296(iParam0, 1, 0) };
	if (func_297(iParam0, &Var0, 1, 0, 1))
	{
		return -1;
	}
	Var5 = { func_298(iParam0, Var0, Var0.f_4, 1) };
	Var5.f_13 = iParam1;
	Var5.f_12 = 1248274121;
	iVar21 = func_299(2113164098, &Var5, 1);
	if (iVar21 == -1)
	{
		return -1;
	}
	Var22.f_1 = 1;
	func_300(iVar21, Var22);
	Var29 = { func_258(iParam0) };
	_0x6a0184e904cdf25e(&Var29, 1);
	return iVar21;
}

void func_136(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		func_301(11, 1, 0);
		iVar0++;
	}
	if (func_259(iParam0, 0))
	{
		func_302(40);
	}
	else
	{
		func_302(39);
	}
}

void func_137(var uParam0)
{
	uParam0->f_18 = 1;
}

bool func_138(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (is_ped_in_combat(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

bool func_139(int iParam0)
{
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	return is_ped_on_mount(iParam0);
}

bool func_140(int iParam0)
{
	return (func_303(iParam0, 4) || func_303(iParam0, 5));
}

bool func_141(int iParam0)
{
	return func_303(iParam0, 7);
}

bool func_142(int iParam0)
{
	return func_303(iParam0, 6);
}

bool func_143(int iParam0, int iParam1, float fParam2)
{
	return func_304(iParam0, get_entity_coords(iParam1, false, false), fParam2);
}

void func_144(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_70(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_163(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_305(iVar0);
	*uParam0 = 0;
}

void func_145(bool bParam0)
{
	iVar1 = 0;
	while (iVar1 < Global_1879534->f_7300)
	{
		if (!is_bit_set(&(Global_1879534->f_7301.f_2[iVar1]), 2))
		{
			if (is_bit_set(&(Global_1879534->f_7301.f_2[iVar1]), 1))
			{
				switch (&Global_1879534->f_1911[Global_1879534->f_7301.f_2[iVar1]->f_1])
				{
					case -2093459088:
						iVar0 = Global_1879534->f_1911[Global_1879534->f_7301.f_2[iVar1]->f_1]->f_2;
						if (func_306(iVar0))
						{
							if (func_307(iVar0))
							{
								func_308(iVar0, bParam0);
							}
						}
						break;
				}
			}
		}
		iVar1++;
	}
}

void func_146()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Global_40.f_1094 - 1))
	{
		if (func_117(&(Global_40.f_450[iVar0])))
		{
			if ((*Global_1347702)[&Global_40.f_450[iVar0]]->f_14 & 2 != 0)
			{
				func_309(&(Global_40.f_450[iVar0]), 1, 0);
			}
		}
		iVar0++;
	}
}

int func_147()
{
	return &Global_1899515;
}

void func_148(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_149(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_310(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_311(iParam0))
	{
		return false;
	}
	if (func_312(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_313(iParam0, 1)) || func_314(32768))
	{
		if (!func_313(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_315())
	{
		return false;
	}
	return true;
}

void func_150(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

int func_151(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_176(iVar0, 2))
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
				func_177(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

bool func_152(int iParam0, bool bParam1)
{
	if (bParam1 && !func_70(iParam0))
	{
		return false;
	}
	iVar0 = func_163(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

void func_153(var uParam0)
{
	if (func_70(uParam0->f_183))
	{
		func_144(&(uParam0->f_183), 1, 1);
	}
}

void func_154(var uParam0)
{
	if (func_70(uParam0->f_181))
	{
		func_144(&(uParam0->f_181), 1, 1);
	}
}

bool func_155()
{
	return (Global_1914319->f_17369 || Global_1914319->f_18996.f_1);
}

bool func_156(var uParam0)
{
	iVar0 = _get_first_entity_ped_is_carrying(Global_35);
	if (is_entity_a_ped(iVar0))
	{
		iVar1 = get_entity_model(iVar0);
		iVar2 = func_316(iVar1);
		if (((func_317(iVar2) && !_0x8de41e9902e85756(iVar0)) && _0xf8b48a361dc388ae(get_ped_index_from_entity_index(iVar0)) != 2) && !_0xcdc25355c0d65963(iVar0))
		{
			uParam0->f_57.f_77 = iVar2;
			uParam0->f_57.f_78 = -214678071;
			if (func_70(uParam0->f_182))
			{
				func_82(uParam0->f_182, _uiprompt_get_group_id_for_target_entity(iVar0), 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_157(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 && !func_70(iParam0))
	{
		return;
	}
	iVar0 = func_163(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, sParam1);
}

bool func_158(var uParam0, vector3 vParam1)
{
	iVar0 = _create_volume_cylinder(vParam1, 0f, 0f, 0f, 1f, 1f, 1f);
	iVar1 = _0x84ccf9a12942c83d(iVar0, *uParam0, 1, 1, 0, 0);
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar3 = get_indexed_item_in_itemset(iVar2, *uParam0);
		iVar4 = _get_entity_from_item(iVar3);
		if (is_entity_a_ped(iVar4))
		{
			iVar5 = get_ped_index_from_entity_index(iVar4);
			if (iVar5 != Global_35)
			{
				if (_get_carrier_as_ped(iVar5) != Global_35)
				{
					func_318(iVar0);
					return true;
				}
			}
		}
		iVar2++;
	}
	func_318(iVar0);
	return false;
}

void func_159(int iParam0, bool bParam1, bool bParam2)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	iVar0 = func_319(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (!func_98(0))
	{
		iVar1 = get_entity_model(iVar0);
		func_320(iVar1, 0);
	}
	else if (is_ped_human(get_ped_index_from_entity_index(iVar0)))
	{
		Var2.f_1 = 10;
		Var2.f_12 = 10;
		_0x48e4d50f87a96aa5(get_ped_index_from_entity_index(iVar0), 1, 1, get_entity_model(iVar0), &Var2, 0);
		iVar25 = 0;
		while (iVar25 < 10)
		{
			iVar26 = &Var2.f_1[iVar25];
			if (func_121(iVar26, 0))
			{
				if (!bParam1 || func_321(iVar26))
				{
					func_228(iVar26, &(Var2.f_12[iVar25]), bParam2, 0, 0, 752097756, 0, 0, 0, 0);
				}
			}
			iVar25++;
		}
	}
	else
	{
		iVar39 = _get_ped_damage(get_ped_index_from_entity_index(iVar0));
		if (func_25(-269048282, 1, 0))
		{
			if (iVar39 < 2 && get_random_int_in_range(0, 2) == 0)
			{
				iVar40 = iVar39;
				iVar40++;
				iVar39 = iVar40;
			}
		}
		iVar41 = _0xf8b48a361dc388ae(get_ped_index_from_entity_index(iVar0));
		iVar42 = func_322(get_ped_index_from_entity_index(iVar0), iVar41);
		_0x6b89faa36fc909a3(&iVar27, get_ped_index_from_entity_index(iVar0), iVar39, iVar42);
		iVar38 = 0;
		while (iVar38 < iVar27)
		{
			if (&iVar27[iVar38] != 0)
			{
				if (func_323(iVar0) && !func_324(&(iVar27[iVar38])))
				{
					iVar27[iVar38] = 0;
				}
				else if (!bParam1 || func_321(&(iVar27[iVar38])))
				{
					func_228(&(iVar27[iVar38]), 1, bParam2, 0, 0, 752097756, 0, 0, 0, 0);
				}
			}
			iVar38++;
		}
	}
	iVar43 = func_325(iVar0);
	if (!func_121(iVar43, 0))
	{
		iVar43 = func_326(iVar0);
	}
	if (func_121(iVar43, 0))
	{
		func_327(iVar43, 1, 1, -142743235, 0);
	}
	_0x0d0db2b6af19a987(&iVar0);
}

int func_160(int iParam0)
{
	iVar0 = 0;
	if (get_current_ped_weapon(Global_35, &iVar0, true, iParam0, false))
	{
		if (func_121(iVar0, 0))
		{
			if (_is_weapon_two_handed(iVar0) || func_328(iVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_161()
{
	iVar0 = _get_prev_weather_type_hash_name();
	if (((((iVar0 == 1420204096 || iVar0 == -416908843) || iVar0 == 212278652) || iVar0 == 839715153) || iVar0 == 2082228755) || iVar0 == -1233681761)
	{
		return true;
	}
	iVar1 = _get_next_weather_type_hash_name();
	if (((((iVar1 == 1420204096 || iVar1 == -416908843) || iVar1 == 212278652) || iVar1 == 839715153) || iVar1 == 2082228755) || iVar1 == -1233681761)
	{
		return true;
	}
	iVar2 = func_329();
	if (((iVar2 == 0 || iVar2 == 7) || iVar2 == 2) || iVar2 == 10)
	{
		return true;
	}
	return false;
}

void func_162(int iParam0)
{
	Global_1935496->f_29 = (Global_1935496->f_29 || iParam0);
}

int func_163(int iParam0)
{
	return iParam0;
}

bool func_164()
{
	return &Global_1898068;
}

bool func_165(int iParam0, bool bParam1)
{
	if (bParam1 && !func_70(iParam0))
	{
		return false;
	}
	return !func_176(iParam0, 4);
}

bool func_166(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_330((*Global_1835011)[iParam0]->f_1);
}

bool func_167()
{
	return _get_number_of_references_of_script_with_name_hash(130487986) > 0;
}

void func_168(var uParam0, int iParam1)
{
	if (has_anim_event_fired(Global_35, -996707397))
	{
		func_17(&(uParam0->f_151), 2);
	}
	else
	{
		func_6(&(uParam0->f_151), 2);
	}
	if (func_16(iParam1, 1))
	{
		if (!func_70(&(uParam0->f_162[0])))
		{
			uParam0->f_162[0] = func_81("KNEEL_FIRE", 992265328, 2, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
			func_82(&(uParam0->f_162[0]), 1754796591, 0, 1);
		}
	}
	else if (func_70(&(uParam0->f_162[0])))
	{
		func_144(uParam0->f_162[0], 1, 1);
	}
	if (((func_16(iParam1, 4096) && func_16(uParam0->f_150, 16)) && !func_56(536870912)) && uParam0->f_157 != 2)
	{
		set_bit(&(Global_1956580->f_1), 2);
		set_bit(&(Global_1956580->f_1), 3);
		if (!func_70(&(uParam0->f_162[5])))
		{
			uParam0->f_162[5] = func_81("CRAFT_COOK", -473983589, 2, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
			func_82(&(uParam0->f_162[5]), 1754796591, 0, 1);
		}
	}
	else
	{
		clear_bit(&(Global_1956580->f_1), 2);
		if (func_70(&(uParam0->f_162[5])))
		{
			func_144(uParam0->f_162[5], 1, 1);
		}
	}
	if (func_16(iParam1, 64) && func_16(uParam0->f_150, 16384))
	{
		if (!func_70(&(uParam0->f_162[17])))
		{
			uParam0->f_162[17] = func_81("CAMP_FT_PROMPT", 1367437629, 2, 0, 0, 2, 570, 4000, 10, 1073741824, 1704213876, 0);
			func_82(&(uParam0->f_162[17]), 1754796591, 0, 1);
		}
	}
	else if (func_70(&(uParam0->f_162[17])))
	{
		func_144(uParam0->f_162[17], 1, 1);
	}
	if ((((func_16(iParam1, 16384) && !func_56(536870912)) && uParam0->f_157 != 2) && func_23() != 0) && !func_166(15))
	{
		if (!func_70(&(uParam0->f_162[9])) && func_25(-569063887, 1, 0))
		{
			uParam0->f_162[9] = func_81("JOURNAL", -209515122, 3, 0, 0, 5, 570, 4000, 10, 1073741824, -820096546, 0);
			func_83(&(uParam0->f_162[9]), 21, 1, 1);
			func_83(&(uParam0->f_162[9]), 13, 1, 1);
			func_83(&(uParam0->f_162[9]), 20, 1, 1);
			func_82(&(uParam0->f_162[9]), 1754796591, 0, 1);
		}
		if (!func_70(&(uParam0->f_162[10])))
		{
			uParam0->f_162[10] = func_81("CAMP_SATCHEL", 1287709438, 3, 0, 0, 5, 570, 4000, 10, 1073741824, -820096546, 0);
			func_83(&(uParam0->f_162[10]), 21, 1, 1);
			func_82(&(uParam0->f_162[10]), 1754796591, 0, 1);
		}
		disable_control_action(0, -399233038, false);
		disable_control_action(0, -1046962283, false);
	}
	else
	{
		if (uParam0->f_154 != 5)
		{
			disable_control_action(0, 1287709438, false);
			disable_control_action(0, -209515122, false);
			disable_control_action(0, -399233038, false);
			disable_control_action(0, -1046962283, false);
		}
		if (func_70(&(uParam0->f_162[9])))
		{
			func_144(uParam0->f_162[9], 1, 1);
		}
		if (func_70(&(uParam0->f_162[10])))
		{
			func_144(uParam0->f_162[10], 1, 1);
		}
	}
	if (func_56(134217728))
	{
		if (func_70(&(uParam0->f_162[9])))
		{
			func_84(&(uParam0->f_162[9]), 0, 1);
		}
		if (func_70(&(uParam0->f_162[10])))
		{
			func_84(&(uParam0->f_162[10]), 0, 1);
		}
	}
	else
	{
		if (func_70(&(uParam0->f_162[9])) && !func_165(&(uParam0->f_162[9]), 0))
		{
			func_84(&(uParam0->f_162[9]), 1, 1);
		}
		if (func_70(&(uParam0->f_162[10])) && !func_165(&(uParam0->f_162[10]), 0))
		{
			func_84(&(uParam0->f_162[10]), 1, 1);
		}
	}
	if ((((func_56(1) || func_56(134217728)) || func_16(uParam0->f_151, 2)) && !func_56(4096)) && uParam0->f_157 != 2)
	{
		if (func_70(&(uParam0->f_162[5])))
		{
			func_84(&(uParam0->f_162[5]), 0, 1);
		}
	}
	else if (func_70(&(uParam0->f_162[5])))
	{
		func_84(&(uParam0->f_162[5]), 1, 1);
	}
	if ((func_16(iParam1, 2) && func_16(uParam0->f_150, 1)) && uParam0->f_57.f_84 > 0)
	{
		func_96(uParam0);
		if (!func_70(&(uParam0->f_162[2])))
		{
			uParam0->f_162[2] = func_81("POUR_COFFEE", 1367437629, 2, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
			func_82(&(uParam0->f_162[2]), 1754796591, 0, 1);
		}
	}
	else if (func_70(&(uParam0->f_162[2])))
	{
		func_144(uParam0->f_162[2], 1, 1);
	}
	if (func_16(iParam1, 8) && func_16(uParam0->f_150, 2))
	{
		if (!func_70(&(uParam0->f_162[1])))
		{
			if (uParam0->f_154 == 4)
			{
				uParam0->f_162[1] = func_81("PLAYER_SIT", 992265328, 2, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
			}
			else if (func_16(iParam1, 32))
			{
				uParam0->f_162[1] = func_81("PLAYER_SIT", -473983589, 2, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
			}
			else
			{
				uParam0->f_162[1] = func_81("PLAYER_SIT", -719620017, 2, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
			}
			func_82(&(uParam0->f_162[1]), 1754796591, 0, 1);
		}
	}
	else if (func_70(&(uParam0->f_162[1])))
	{
		func_144(uParam0->f_162[1], 1, 1);
	}
	if (func_56(4) || func_16(uParam0->f_151, 2))
	{
		if (func_70(&(uParam0->f_162[1])))
		{
			func_84(&(uParam0->f_162[1]), 0, 1);
		}
	}
	else if (func_70(&(uParam0->f_162[1])))
	{
		func_84(&(uParam0->f_162[1]), 1, 1);
	}
	if ((func_16(iParam1, 16) && !func_56(536870912)) && uParam0->f_157 != 2)
	{
		if (!func_70(&(uParam0->f_162[3])))
		{
			uParam0->f_162[3] = func_81("LEAVE", 992265328, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
			if (func_16(iParam1, 524288) && func_16(uParam0->f_151, 131072))
			{
				func_331(&(uParam0->f_162[3]), 0, 1);
				func_83(&(uParam0->f_162[3]), 20, 1, 1);
				func_83(&(uParam0->f_162[3]), 13, 1, 1);
			}
			func_82(&(uParam0->f_162[3]), 1754796591, 0, 1);
		}
		if (func_16(iParam1, 524288) && func_16(uParam0->f_151, 131072))
		{
			if (!func_70(&(uParam0->f_162[16])))
			{
				uParam0->f_162[16] = func_81("LEAVE", 992265328, 2, 0, 0, 5, 570, 4000, 10, 1073741824, -820096546, 0);
				func_83(&(uParam0->f_162[16]), 19, 1, 1);
				func_83(&(uParam0->f_162[16]), 20, 1, 1);
				func_83(&(uParam0->f_162[16]), 13, 1, 1);
				func_332(uParam0->f_162[16], "INPUT_PCAMP_TEARDWN");
				func_82(&(uParam0->f_162[16]), 1754796591, 0, 1);
			}
		}
		else if (func_70(&(uParam0->f_162[16])))
		{
			func_144(uParam0->f_162[16], 1, 1);
		}
	}
	else
	{
		if (func_70(&(uParam0->f_162[3])))
		{
			func_144(uParam0->f_162[3], 1, 1);
		}
		if (func_70(&(uParam0->f_162[16])))
		{
			func_144(uParam0->f_162[16], 1, 1);
		}
	}
	if (func_56(1048576) || func_16(uParam0->f_151, 2))
	{
		if (func_70(&(uParam0->f_162[3])) && func_165(&(uParam0->f_162[3]), 0))
		{
			func_84(&(uParam0->f_162[3]), 0, 1);
			if (func_16(iParam1, 524288) && func_16(uParam0->f_151, 131072))
			{
				func_331(&(uParam0->f_162[3]), 0, 1);
			}
		}
	}
	else if (func_70(&(uParam0->f_162[3])) && !func_165(&(uParam0->f_162[3]), 0))
	{
		func_84(&(uParam0->f_162[3]), 1, 1);
		if (func_16(iParam1, 524288) && func_16(uParam0->f_151, 131072))
		{
			func_331(&(uParam0->f_162[3]), 0, 1);
		}
	}
	if (func_56(256))
	{
		if (func_70(&(uParam0->f_162[16])))
		{
			func_84(&(uParam0->f_162[16]), 0, 1);
		}
	}
	else if (func_70(&(uParam0->f_162[16])))
	{
		func_84(&(uParam0->f_162[16]), 1, 1);
	}
	if (func_23() != 0 && func_16(uParam0->f_150, 256))
	{
		if (!func_56(2048) || func_16(uParam0->f_151, 2))
		{
			if (((func_16(iParam1, 32) && !func_56(536870912)) && uParam0->f_157 != 2) && func_333(uParam0))
			{
				if (!func_70(&(uParam0->f_162[4])))
				{
					uParam0->f_162[4] = func_81("SLEEP", -719620017, 2, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
					func_82(&(uParam0->f_162[4]), 1754796591, 0, 1);
				}
			}
			else if (func_70(&(uParam0->f_162[4])))
			{
				func_144(uParam0->f_162[4], 1, 1);
			}
		}
	}
	if (((func_56(2048) || func_56(134217728)) || func_16(uParam0->f_151, 2)) || func_334(player_id(), 1, 0, 1))
	{
		if (func_70(&(uParam0->f_162[4])))
		{
			func_84(&(uParam0->f_162[4]), 0, 1);
		}
	}
	else if (func_70(&(uParam0->f_162[4])))
	{
		func_84(&(uParam0->f_162[4]), 1, 1);
	}
	uParam0->f_185 = func_67(_uiprompt_get_group_active_page(1754796591));
	iVar0 = 1;
	if (!func_56(536870912))
	{
		_uiprompt_set_ambient_group_this_frame(uParam0->f_152, 3f, 0, iVar0, 1754796591, uParam0->f_185, 0);
	}
}

int func_169(var uParam0)
{
	if (func_56(16777216) || func_16(uParam0->f_151, 524288))
	{
		func_6(&(uParam0->f_151), 524288);
		func_55(16777216);
		uParam0->f_197 = -1;
		return 5;
	}
	iVar0 = 0;
	while (iVar0 < 18)
	{
		if (func_70(&(uParam0->f_162[iVar0])))
		{
			if (iVar0 == 3)
			{
				if (func_165(&(uParam0->f_162[iVar0]), 0))
				{
					if (func_229(&(uParam0->f_162[iVar0]), 1))
					{
						return iVar0;
					}
					else if (func_335())
					{
						if (!func_125(&(uParam0->f_198)))
						{
							func_31(&(uParam0->f_198));
						}
						if (func_336(&(uParam0->f_198), 0.5f))
						{
							return iVar0;
						}
					}
					else if (func_125(&(uParam0->f_198)))
					{
						func_337(&(uParam0->f_198));
					}
				}
			}
			else if ((iVar0 == 16 || iVar0 == 9) || iVar0 == 10)
			{
				if (func_152(&(uParam0->f_162[iVar0]), 1))
				{
					return iVar0;
				}
				else if (iVar0 == 16)
				{
					if (func_338(&(uParam0->f_162[16]), 1))
					{
						if (!func_125(&(uParam0->f_57.f_89)))
						{
							func_31(&(uParam0->f_57.f_89));
						}
						else if (func_29(&(uParam0->f_57.f_89), 0.1f))
						{
							func_157(&(uParam0->f_162[16]), "CAMP_TEARDOWN", 1);
						}
					}
					else
					{
						if (func_125(&(uParam0->f_57.f_89)))
						{
							func_337(&(uParam0->f_57.f_89));
						}
						func_157(&(uParam0->f_162[16]), "LEAVE", 1);
					}
				}
			}
			else if (func_229(&(uParam0->f_162[iVar0]), 1))
			{
				if (iVar0 == 5)
				{
					play_sound_frontend("Craft_Items_Enter", "SSCRFT_Sounds", true, 0);
				}
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_170(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_6(&(uParam0->f_151), 16);
	}
}

int func_171(var uParam0)
{
	if (func_339(uParam0) && !func_16(uParam0->f_151, 4))
	{
		return 1;
	}
	if (!func_85(uParam0))
	{
		return 0;
	}
	switch (uParam0->f_157)
	{
		case 1:
			switch (uParam0->f_155)
			{
				case 8:
					func_88(-1890302844, 0.5f);
					break;
				case 7:
					func_88(36116464, 0.5f);
					break;
				case 6:
					if (func_340(uParam0, 0))
					{
						if (func_88(420089068, 1f))
						{
							return 1;
						}
					}
					break;
				default:
					func_341(uParam0);
					break;
			}
			break;
		case 9:
			uParam0->f_156 = 4;
			if (func_342(uParam0))
			{
				if (func_343(Global_35, uParam0[4], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNEEL1@MALE_A@KNEEL1_TRANS_STOOL1", "KNEEL1_TRANS_STOOL1", "PROP_PLAYER_SEAT_CHAIR_GENERIC_HUNTING1"))
				{
					func_6(&(uParam0->f_151), 4);
				}
			}
			break;
		case 6:
			func_342(uParam0);
			break;
	}
	return 0;
}

int func_172(var uParam0)
{
	if (func_339(uParam0) && !func_16(uParam0->f_151, 4))
	{
		return 1;
	}
	if (!func_85(uParam0))
	{
		return 0;
	}
	switch (uParam0->f_157)
	{
		case 1:
			switch (uParam0->f_155)
			{
				case 8:
					func_88(-1890302844, 0.5f);
					break;
				case 7:
					func_88(36116464, 0.5f);
					break;
				case 6:
					if (func_340(uParam0, 1))
					{
						func_88(1352801403, 1f);
						return 1;
					}
					break;
				default:
					func_341(uParam0);
					break;
			}
			break;
		case 9:
			uParam0->f_156 = 4;
			if (func_344(uParam0))
			{
				if (func_343(Global_35, uParam0[4], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNEEL2@MALE_A@KNEEL2_TRANS_STOOL1", "KNEEL2_TRANS_STOOL1", "PROP_PLAYER_SEAT_CHAIR_GENERIC_HUNTING1"))
				{
				}
			}
			break;
		case 6:
			func_344(uParam0);
			break;
	}
	return 0;
}

int func_173(var uParam0)
{
	if (func_339(uParam0) && !func_16(uParam0->f_151, 4))
	{
		return 1;
	}
	if (!func_85(uParam0))
	{
		return 0;
	}
	switch (uParam0->f_157)
	{
		case 1:
			switch (uParam0->f_155)
			{
				case 8:
					func_88(-1890302844, 0.5f);
					break;
				case 7:
					func_88(36116464, 0.5f);
					break;
				case 6:
					uParam0->f_156 = 1;
					if (func_340(uParam0, 2))
					{
						if (func_343(Global_35, uParam0[1], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNEEL3@MALE_A@KNEEL3_TRANS_COFFEE2", "KNEEL3_TRANS_COFFEE2", "WORLD_PLAYER_DYNAMIC_KNEEL_POST_FIRE_CRAFT"))
						{
							return 1;
						}
					}
					break;
				default:
					func_341(uParam0);
					break;
			}
			break;
		case 9:
			if (func_343(Global_35, uParam0[4], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNEEL3@MALE_A@KNEEL3_TRANS_STOOL1", "KNEEL3_TRANS_STOOL1", "PROP_PLAYER_SEAT_CHAIR_GENERIC_HUNTING1"))
			{
			}
			break;
	}
	return 0;
}

int func_174(var uParam0)
{
	if (func_339(uParam0) && !func_16(uParam0->f_151, 4))
	{
		return 1;
	}
	if (!func_85(uParam0))
	{
		return 0;
	}
	switch (uParam0->f_157)
	{
		case 1:
			switch (uParam0->f_155)
			{
				case 8:
					func_88(-1890302844, 0.5f);
					break;
				case 7:
					func_88(36116464, 0.5f);
					break;
				case 6:
					uParam0->f_156 = 0;
					if (func_340(uParam0, 3))
					{
						if (func_343(Global_35, uParam0[0], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNEEL4@MALE_A@KNEEL4_TRANS_COFFEE1", "KNEEL4_TRANS_COFFEE1", "WORLD_PLAYER_DYNAMIC_KNEEL_POST_FIRE_CRAFT"))
						{
							return 1;
						}
					}
					break;
				default:
					func_341(uParam0);
					break;
			}
			break;
		case 9:
			uParam0->f_156 = 4;
			if (func_343(Global_35, uParam0[4], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNEEL4@MALE_A@KNEEL4_TRANS_STOOL1", "KNEEL4_TRANS_STOOL1", "PROP_PLAYER_SEAT_CHAIR_GENERIC_HUNTING1"))
			{
			}
			break;
	}
	return 0;
}

int func_175(var uParam0)
{
	if (func_339(uParam0) && !func_16(uParam0->f_151, 4))
	{
		return 1;
	}
	if (!func_85(uParam0))
	{
		return 0;
	}
	switch (uParam0->f_157)
	{
		case 1:
			if (!_0x68821369a2ceadd5(Global_35, -260069069))
			{
				if (func_340(uParam0, 4))
				{
					func_88(-260069069, 1086324736);
				}
			}
			break;
		case 6:
			uParam0->f_156 = 0;
			if (func_343(Global_35, uParam0[0], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@STOOL1@MALE_A@STOOL1_TRANS_KNEEL1", "STOOL1_TRANS_KNEEL1", "WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_ARTHUR"))
			{
			}
			break;
	}
	return 0;
}

bool func_176(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

void func_177(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
			_uiprompt_set_hold_auto_fill_mode(iVar0, iParam16, iParam15);
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
	func_179(iParam0, 1);
	func_180(iParam0, 1);
	func_181(iParam0, 128);
}

void func_178(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_179(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_176(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_180(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_181(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

bool func_182()
{
	return (Global_1935689->f_1 || &Global_1935689 == 1);
}

bool func_183()
{
	if (Global_1935689->f_17 == 3)
	{
		return true;
	}
	return false;
}

bool func_184(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_121(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_296(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_345(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_346(iParam0, Var0, Var0.f_4, bParam4) };
	return func_347(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

bool func_185()
{
	if (func_32(Global_35, 0))
	{
		if (_is_ped_using_scenario_hash(Global_35, 1855656219))
		{
			return true;
		}
	}
	return false;
}

void func_186(int iParam0, int iParam1)
{
	Global_1357549->f_1672 = iParam0;
	Global_1357549->f_1673 = iParam1;
}

int func_187()
{
	return Global_1357549->f_1672;
}

bool func_188(int iParam0, bool bParam1)
{
	if (!func_121(iParam0, 0))
	{
		return false;
	}
	if (Global_1935689->f_8)
	{
		return false;
	}
	if (((iParam0 != 1259508039 && iParam0 != -1838434463) && iParam0 != 2019377485) && bParam1)
	{
		iVar0 = func_348(iParam0);
		if (func_190(iParam0, 1147021565))
		{
			iVar0 |= 64;
		}
		if (!func_349(&uVar1, _0x0501d52d24ea8934(1), 1, iVar0))
		{
			return false;
		}
	}
	if (iParam0 == -1448210800 || iParam0 == -2035110427)
	{
		if (func_350())
		{
			return false;
		}
	}
	if (!func_25(iParam0, 1, 0))
	{
		_0xbfff81e12a745a5f();
		return false;
	}
	return true;
}

bool func_189(int iParam0)
{
	if (func_122(iParam0) == -1650247667)
	{
		return false;
	}
	if (!_0x3d10d7179d7034af(func_86(0), iParam0, func_351(0)))
	{
		return false;
	}
	switch (iParam0)
	{
		case -1838434463:
		case 2019377485:
			if (!Global_1392040->f_2)
			{
				func_352(1, 1);
				_0x565eaa726b2ce3b7(0);
				return true;
			}
			else
			{
				return false;
			}
			break;
		case 1807503187:
			func_201(_create_var_string(0, 163043886, Global_36559), 10000, 0, 0, 0, 1);
			break;
	}
	return true;
}

bool func_190(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (iParam1 == 0)
	{
		return false;
	}
	if (_item_database_does_item_have_tag(iParam0, iParam1, 1120943070))
	{
		return true;
	}
	return false;
}

void func_191(int iParam0, struct<11> Param1, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, struct<2> Param17, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, int iParam27, bool bParam28, int iParam29)
{
	switch (iParam0)
	{
		case 1244838730:
			break;
		case -1952196650:
			if (func_270())
			{
				func_353(998229694, 0);
			}
			else if (_journal_can_write_entry(998229694))
			{
				func_353(1610852701, 0);
			}
			break;
		case -1566711999:
			func_353(-1741315348, 0);
			break;
		case -1237758927:
			break;
		case -631796932:
			func_354((*Global_1347702)[80]->f_15, 1);
			if (func_270() == 1)
			{
				func_353(1565950479, 0);
			}
			else if (_journal_can_write_entry(1565950479))
			{
				if (func_355(77))
				{
					func_353(-553142873, 0);
				}
				else
				{
					func_353(-384883866, 0);
				}
			}
			break;
		case 581047644:
			if ((func_264() && !func_356(51)) && !func_357(1048576))
			{
				func_358(2);
				func_359(51, 0, 0, 0, 0, -1, 0);
				func_360(51, 0, 0, -1992824800, 0, 0, 2, 0);
				func_361(1048576);
			}
			break;
		case -625427311:
			if ((func_264() && !func_356(51)) && !func_357(16384))
			{
				func_358(1);
				func_359(51, 0, 0, 0, 0, -1, 0);
				func_360(51, 0, 0, 1520110311, 0, 0, 5, 0);
				func_361(16384);
			}
			break;
		case -644199619:
			if ((func_264() && !func_356(40)) && !func_362(32))
			{
				func_363(4);
				func_359(39, 0, 0, 0, 0, -1, 0);
				func_360(39, 0, 0, 0, 0, 0, 2, 0);
				func_364(32);
			}
			break;
		case 684296857:
			if ((func_264() && !func_356(42)) && !func_365(16))
			{
				func_366(8);
				func_359(41, 0, 0, 0, 0, -1, 0);
				func_360(41, 0, 0, 0, 0, 0, 2, 0);
				func_367(16);
			}
			break;
		case 466137807:
			if ((func_264() && !func_356(50)) && !func_368(32))
			{
				func_369(4);
				func_359(49, 0, 0, 0, 0, -1, 0);
				func_360(49, 0, 0, 0, 0, 0, 2, 0);
				func_370(32);
				if (!func_120((*Global_1347702)[50]->f_15, 1))
				{
					if (func_270() == 1)
					{
						func_353(-629995342, 0);
					}
					else if (_journal_can_write_entry(-629995342))
					{
						func_353(-1367572831, 0);
					}
				}
			}
			break;
		case -686755665:
			iParam27 = -2107709792;
			Param17.f_1 = iParam27;
			StringCopy(&(Param1.f_10), "respond_parcel", 32);
			iParam29 = 0;
			bParam28 = true;
			break;
	}
}

void func_192(int iParam0, var uParam1, var uParam2, bool bParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, bool bParam27, int iParam28)
{
	switch (iParam0)
	{
		case 1950809992:
			func_366(16);
			break;
	}
}

void func_193(int iParam0, struct<11> Param1, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16)
{
	switch (iParam0)
	{
		case -1280336729:
		case -691125380:
		case -287018478:
		case 305626647:
			StringCopy(&(Param1.f_10), "gunslinger_notes", 32);
			break;
	}
}

bool func_194(int iParam0)
{
	return true;
}

bool func_195(int iParam0, bool bParam1, bool bParam2)
{
	if (func_371(iParam0, bParam1, 0, 0, -1082130432))
	{
		Global_1911773 = get_game_timer() + 3000;
		return true;
	}
	switch (func_372(iParam0, -949239683))
	{
		case 881567935:
			if (!bParam1)
			{
				_task_item_interaction(player_ped_id(), iParam0, 1245009814, 1, 0, -1082130432);
				return true;
			}
			break;
		case 1174751405:
			if (!bParam1)
			{
				func_373(iParam0);
				return true;
			}
			break;
		case 845883585:
			if (!bParam1)
			{
				if (!func_374())
				{
					if (func_375(&Global_35))
					{
						_task_item_interaction(player_ped_id(), iParam0, 616992297, 1, 0, -1082130432);
					}
					else
					{
						_task_item_interaction(player_ped_id(), iParam0, -903856906, 1, 0, -1082130432);
					}
					return true;
				}
				else
				{
					func_201("SI_ITEM_USE_POMADE_IS_ALREADY_APPLIED", 10000, 0, 0, 0, 1);
				}
			}
			break;
		case -1239610997:
			if (!bParam2)
			{
				_task_item_interaction(player_ped_id(), iParam0, 280850861, 1, 0, -1082130432);
			}
			else
			{
				_task_item_interaction(player_ped_id(), iParam0, 1087288635, 1, 0, 0f);
				if (_0xa24c1d341c6e0d53(1, 0, 0))
				{
					animpostfx_play("CamTransition01");
				}
			}
			Global_1911773 = get_game_timer() + 3000;
			return true;
		case 632545869:
			if (!bParam2)
			{
				_task_item_interaction(player_ped_id(), iParam0, -268993254, 1, 0, -1082130432);
			}
			else
			{
				_task_item_interaction(player_ped_id(), iParam0, -1401979141, 1, 0, 0f);
				if (_0xa24c1d341c6e0d53(1, 0, 0))
				{
					animpostfx_play("CamTransition01");
				}
			}
			Global_1911773 = get_game_timer() + 3000;
			return true;
		case -793205628:
			if (!bParam2)
			{
				_task_item_interaction(player_ped_id(), iParam0, 1834614641, 1, 0, -1082130432);
			}
			else
			{
				_task_item_interaction(player_ped_id(), iParam0, 136592566, 1, 0, 0f);
				if (_0xa24c1d341c6e0d53(1, 0, 0))
				{
					animpostfx_play("CamTransition01");
				}
			}
			Global_1911773 = get_game_timer() + 3000;
			return true;
		case 1451036371:
			if (!bParam1)
			{
				func_376(iParam0);
				return true;
			}
			break;
		case -273840653:
			if (!bParam1)
			{
				func_377(iParam0, is_ped_in_combat(Global_35, 0));
				return true;
			}
			break;
		case 999632878:
			if (!bParam1)
			{
				func_378(iParam0, is_ped_in_combat(Global_35, 0));
				return true;
			}
			break;
		case 1130235258:
			if (!bParam1)
			{
				if (is_ped_in_combat(Global_35, 0))
				{
					func_379(iParam0);
				}
				else
				{
					func_380(iParam0);
				}
				return true;
			}
			break;
		case -1915958659:
			if (!bParam1)
			{
				func_381(iParam0);
				return true;
			}
			break;
		case 1859991422:
			if (!bParam1)
			{
				func_382(iParam0);
				return true;
			}
			break;
		case 1891031775:
			if (!bParam1)
			{
				func_383(iParam0);
				return true;
			}
			break;
		case -809056541:
			if (!bParam1)
			{
				func_384(iParam0);
				return true;
			}
			break;
		case -1337515701:
			if (!bParam1)
			{
				_task_item_interaction(player_ped_id(), iParam0, -1893721798, 1, 0, -1082130432);
				return true;
			}
			break;
		case -262371497:
			if (!bParam1)
			{
				func_385(iParam0);
				return true;
			}
			break;
		case 1443104131:
			if (!bParam1)
			{
				func_386(iParam0);
				return true;
			}
			break;
		case -1919515848:
			if (!bParam1)
			{
				func_387(iParam0);
				return true;
			}
			break;
		case 89124942:
			if (!bParam1)
			{
				func_388(iParam0);
				return true;
			}
			break;
		case 238865292:
			if (!bParam1)
			{
				func_389(iParam0);
				return true;
			}
			break;
		case 1177617310:
			if (!bParam1)
			{
				func_390(iParam0);
				return true;
			}
			break;
	}
	return false;
}

void func_196(struct<16> Param0, int iParam16)
{
	if (is_string_null_or_empty(&(Param0.f_10)))
	{
		return;
	}
	if (Global_1934603->f_161 >= 10)
	{
		return;
	}
	if (!func_391(iParam16, 2))
	{
		if (_get_number_of_references_of_script_with_name_hash(get_hash_key(&(Param0.f_10))) > 0 || func_392(&(Param0.f_10)))
		{
			return;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (is_string_null_or_empty(&((*Global_1934603)[iVar0]->f_10)))
		{
			*(*Global_1934603)[iVar0] = { Param0 };
			Global_1934603->f_161++;
			func_393(iParam16);
			return;
		}
		iVar0++;
	}
}

bool func_197()
{
	return Global_1894899 & 2 != 0;
}

int func_198(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 0;
		case 3:
			return 3;
		default:
			break;
	}
	return -1;
}

int func_199(int iParam0)
{
	if (!func_121(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_200(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (func_122(iParam0) == -1037537535)
	{
		if (func_199(iParam0) == -999503751)
		{
			iVar0 = func_206(iParam0);
			if ((iVar0 != -1 && !func_394(iVar0)) || !func_25(iParam0, 1, 0))
			{
				return false;
			}
		}
	}
	return true;
}

var func_201(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = _show_tooltip(&Var0, &Var13, iParam5);
	return uVar15;
}

int func_202(int iParam0, int iParam1)
{
	iParam0 = func_395(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	iVar0 = func_204(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return 0;
	}
	if (is_ped_swimming(Global_35) || is_ped_swimming(iVar0))
	{
		return 0;
	}
	if (is_ped_on_mount(Global_35))
	{
		if (_get_rider_of_mount(iVar0, false) == Global_35)
		{
			if (iParam1 == -727924611)
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (func_396(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_203(int iParam0)
{
	iParam0 = func_395(iParam0);
	if (iParam0 <= -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	iVar0 = func_204(iParam0);
	if (!does_entity_exist(iVar0))
	{
		if (iParam0 == func_397())
		{
			return true;
		}
		return false;
	}
	if (iVar0 == _get_saddle_horse_for_player(player_id()))
	{
		return true;
	}
	return false;
}

int func_204(int iParam0)
{
	iParam0 = func_395(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1900383[iParam0];
}

bool func_205(int iParam0, int iParam1, bool bParam2)
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

int func_206(int iParam0)
{
	switch (iParam0)
	{
		case 439606975:
			return 14;
		case 1661121390:
			return 6;
		case 1164374808:
			return 7;
		case 624063935:
			return 9;
		case -1476781101:
			return 10;
		case 1560492757:
			return 15;
		case -769081407:
			return 16;
		case 688004210:
			return 20;
		case 166243423:
			return 0;
		case -1826731591:
			return 24;
		case 2119049229:
			return 25;
		case 1352942778:
			return 26;
		case 1964379549:
			return 27;
		case 1201189539:
			return 28;
		case 1351927599:
			return 21;
		case 2032023096:
			return 22;
		case 1784889667:
			return 13;
		case 1160643979:
			return 8;
		case 1383300684:
			return 1;
		case 2051441678:
			return 2;
		case 162509669:
			return 3;
		case 635948769:
			return 4;
		case 274995506:
			return 5;
		case 1902428294:
			return 17;
		case -2114499732:
			return 18;
		case 800827126:
			return 19;
		case 294553332:
			return 11;
		case 1788874135:
			return 12;
		case -1243402388:
			return 66;
		case 65931886:
			return 67;
		case 1371678229:
			return 68;
		case 2102263084:
			return 69;
		case -272211555:
			return 61;
		case -55563408:
			return 64;
		case -1914506115:
			return 71;
		case 802495462:
			return 75;
		case 842905332:
			return 77;
		case 1511551084:
			return 79;
		case -1725704631:
			return 81;
		case 1257427489:
			return 83;
		case -659341240:
			return 85;
		case 2038771525:
			return 87;
		case -535599244:
			return 89;
		case -389591806:
			return 73;
		case -1205612021:
			return 70;
		case 890706995:
			return 93;
		case 1156438275:
			return 90;
		case -1611873049:
			return 91;
		case 594312243:
			return 92;
		case -978578725:
			return 94;
		case -361635024:
			return 62;
		case -1951220140:
			return 78;
		case 1460520700:
			return 76;
		case 523337834:
			return 80;
		case -19271249:
			return 82;
		case 214175524:
			return 84;
		case -1303643297:
			return 86;
		case 411856831:
			return 88;
		case -926815459:
			return 72;
		case -1300731953:
			return 74;
		case -409616653:
			return 65;
		case 509954990:
			return 29;
		case -445916744:
			return 30;
		case -866249154:
			return 31;
		case -2077063704:
			return 32;
		case 205207539:
			return 33;
		case -1033657275:
			return 34;
		case 1806002837:
			return 35;
		case 705324896:
			return 36;
		case -1541763703:
			return 37;
		case 387052410:
			return 38;
		case -361288914:
			return 39;
		case -911054515:
			return 40;
		case 1084200963:
			return 41;
		case 1847948074:
			return 42;
		case -1212526764:
			return 43;
		case 1851440270:
			return 44;
		case -2028985700:
			return 45;
		case 1074435214:
			return 46;
		case -883015675:
			return 47;
		case -1047155604:
			return 48;
		case 1123231221:
			return 49;
		case 1866989210:
			return 50;
		case 478183719:
			return 51;
		case -1698955868:
			return 52;
		case -2029378634:
			return 53;
		case 1339864416:
			return 54;
		case 890998115:
			return 55;
		case -1376288999:
			return 56;
		case -1041123771:
			return 57;
		case 1389254668:
			return 58;
		case -346112633:
			return 59;
		case 773309172:
			return 60;
		case -291256376:
			return 23;
		default:
			break;
	}
	return -1;
}

void func_207(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_398(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_399(Var0);
}

int func_208(int iParam0, bool bParam1)
{
	if (!func_400())
	{
		return 0;
	}
	if (!func_401(iParam0))
	{
		return 0;
	}
	if (func_402(iParam0))
	{
		iVar0 = 0;
		if (func_199(iParam0) == 81053684)
		{
			if (bParam1)
			{
				func_403(&iVar0, 2);
			}
		}
		return func_404(iParam0, iVar0);
	}
	return 0;
}

void func_209(int iParam0)
{
	iVar0 = 10;
	iVar1 = &Global_1946804->f_1497.f_1[iVar0];
	if (iVar1 == iParam0)
	{
		_0xcb9401f918cb0f75(Global_35, "PlayUnequipHatFidget", 1, 15);
		func_210(Global_35, -2065815962, 0, -358215195, 1, 1, 1, 0, 1, 0);
		func_211(iParam0, 0);
		return;
	}
	_0xcb9401f918cb0f75(Global_35, "PlayEquipHatFidget", 1, 15);
	func_210(Global_35, iParam0, 0, -358215195, 1, 1, 1, 0, 1, 0);
	if (func_405(32768))
	{
		knock_off_ped_prop(Global_35, false, true, false, true);
		func_406();
		func_398(128);
		return;
	}
	if (iVar1 == &Global_1946804->f_57[iVar0])
	{
		func_211(iParam0, 1);
		return;
	}
	if (func_407(-2061583405, 0))
	{
		if (func_408(iVar1))
		{
			func_211(iVar1, 0);
		}
		else
		{
			func_409(iVar1, 1, 1, 0);
		}
		func_211(iParam0, 1);
		return;
	}
	if (func_408(iVar1))
	{
		func_211(iVar1, 0);
		func_211(iParam0, 1);
	}
	else if (func_408(iParam0))
	{
		if (iParam0 != func_410(0))
		{
			func_411(iParam0, iVar1);
			func_211(iParam0, 0);
			func_211(iVar1, 0);
		}
		else
		{
			knock_off_ped_prop(Global_35, false, true, false, true);
			func_398(128);
			func_211(iParam0, 1);
		}
	}
}

int func_210(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_296(iParam1, 1, 0) };
		iParam3 = func_412(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_414(iParam1, iParam2, func_413(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_415(1, (func_23() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != &Global_1946804->f_57[func_413(iParam3, 1)])
			{
				func_207(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_405(32768) && iParam1 != &Global_1946804->f_57[func_413(iParam3, 1)])
			{
				func_406();
				func_207(22, iParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(iParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_207(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_416(iParam3);
	if (is_ped_a_player(iParam0))
	{
		func_207(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_417(0);
			func_418(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_207(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_211(int iParam0, bool bParam1)
{
	Var0 = { func_296(iParam0, 0, 0) };
	Var5 = { func_346(iParam0, Var0, Var0.f_4, 0) };
	if (func_419(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	_0x65a5f70f4a292ebe(func_86(0), &Var5, bParam1);
}

void func_212(bool bParam0)
{
	if (bParam0)
	{
		Global_1935689 = 1;
	}
	else
	{
		Global_1935689 = 2;
	}
}

void func_213()
{
	if (func_420())
	{
		return;
	}
	if (func_421())
	{
		_task_item_interaction(player_ped_id(), 1807503187, -2005122350, 1, 0, -1082130432);
		Global_1914319->f_18996.f_1 = 1;
	}
	else if (Global_1914319->f_18996.f_4 != 0)
	{
		func_201(func_422(), 10000, 0, 0, 0, 1);
		Global_1914319->f_18996.f_4 = 0;
	}
}

bool func_214(int iParam0)
{
	if (func_23() != -1)
	{
		return false;
	}
	if (!func_117(iParam0))
	{
		return false;
	}
	return func_330((*Global_1347702)[iParam0]->f_15);
}

float func_215(int iParam0)
{
	iParam0 = func_395(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_423(iParam0);
	if (!is_model_valid(iVar0))
	{
		return -1f;
	}
	iVar1 = func_424(iParam0);
	iVar2 = get_default_max_attribute_rank(iVar0, 7);
	fVar3 = _0xeb67d4e056c85a81(iVar1);
	fVar4 = _0x78d8c1d4eb80c588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_424(iParam0) + 1;
	fVar6 = func_425(iParam0);
	fVar7 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar1));
	fVar8 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_426(fVar3, fVar4, fVar11);
	return fVar12;
}

bool func_216(int iParam0, int iParam1, float fParam2, bool bParam3)
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

int func_217()
{
	return Global_40.f_1095.f_3054.f_1;
}

bool func_218(int iParam0)
{
	if (!func_427(32))
	{
		return false;
	}
	if (!_unlock_is_unlocked(-75008140))
	{
		return false;
	}
	if (!func_428())
	{
		return false;
	}
	if (func_429(16))
	{
		return false;
	}
	if (!_0xd6f6acf4392187fb(Global_1225639->f_14) || !_0x424b17a7dc5c90bc(int_to_playerindex(&Global_1225639)))
	{
		return false;
	}
	if (iParam0 == 1 && func_128(Global_1131433->f_8, 1))
	{
		return false;
	}
	return true;
}

int func_219(int iParam0)
{
	if (!func_430())
	{
		return 0;
	}
	func_431(iParam0);
	Global_1898068->f_4 = 1;
	return 1;
}

bool func_220(int iParam0)
{
	return func_128(Global_1131433->f_8, iParam0);
}

void func_221(int iParam0)
{
	Var0.f_12 = 255;
	Var0.f_13 = 255;
	Var0.f_5 = iParam0;
	Var0.f_3 = 94;
	func_433(Var0, func_432(0, 15), 0, 0);
}

int func_222(int iParam0)
{
	if (!func_434(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (&Global_1395601->f_5[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_223()
{
	iVar0 = func_435();
	switch (iVar0)
	{
		case 0:
			return 1;
		case 1:
			return 4;
		case 2:
			return 2;
		case 3:
			return 6;
		case 5:
			return 5;
		case 6:
			return 0;
		case 4:
			return 3;
		case 7:
			return 7;
		case 8:
			return -1;
	}
	return -1;
}

bool func_224(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

bool func_225()
{
	return &Global_1395601;
}

bool func_226(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_121(iParam0, 0))
	{
		return false;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_283(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = get_ped_ammo_by_type(Global_35, iVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return false;
		}
		_remove_ammo_from_ped_by_type(Global_35, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			func_256(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return false;
	}
	if (!func_25(iParam0, 1, bParam4))
	{
		return false;
	}
	Var5 = { func_436(iParam0) };
	if (_stat_id_is_valid(&Var5))
	{
		if ((func_124(iParam0, 0, 0) - iParam1) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var5, iParam1);
		}
		else if ((func_124(iParam0, 0, 0) - iParam1) < 0)
		{
			func_226(iParam0, func_124(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return false;
		}
	}
	if (func_122(iParam0) == -427144552)
	{
		if (!func_437(iParam0, iParam1, 0, iParam3))
		{
			return false;
		}
	}
	else if (!func_184(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return false;
	}
	if (iParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_98(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_256(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_438(iParam0, iParam1);
	return true;
}

void func_227(bool bParam0)
{
	if ((func_23() != -1 || !bParam0) || func_139(Global_35))
	{
		func_439();
		return;
	}
	if (func_56(8388608) && !func_16(Global_1392040->f_1, 2048))
	{
		func_47(16777216);
		return;
	}
	func_439();
}

int func_228(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!func_121(iParam0, 0))
	{
		return 0;
	}
	if (!func_440(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_441(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_442(iParam0, bParam2);
	iVar2 = 0;
	if (func_124(iParam0, 0, 0) == 0)
	{
		if (func_443(iParam0))
		{
			iVar5 = func_444(iParam0);
			iVar6 = func_445(iVar5);
			iVar7 = func_446(iVar6) + 1;
			func_447(iVar5);
			if (func_356(38))
			{
				func_63(483, 0);
			}
			else
			{
				func_63(482, 0);
			}
			if (iVar7 == func_448(iVar6))
			{
				func_228(func_449(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_264() && func_450(4))
				{
					if (func_264() && (func_451(38) || func_356(38)))
					{
						func_360(38, func_449(iVar6), 0, 0, func_452(), 0, -1, 0);
						func_453(2);
					}
					else
					{
						func_360(38, func_449(iVar6), 0, 0, func_452(), 0, -1, 0);
						func_453(1);
					}
				}
			}
			else if (func_264() && func_450(4))
			{
				if (func_264() && (func_451(38) || func_356(38)))
				{
					func_360(38, 0, 0, 0, func_452(), 0, -1, 0);
					func_453(2);
				}
				else
				{
					func_360(38, 0, 0, 0, func_452(), 0, -1, 0);
					func_453(1);
				}
			}
			if (func_264() && func_450(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_264() && (func_451(38) || func_356(38)))
					{
						func_359(38, _0x13aaecda43318bfe(-2076669067, iVar6), _0xd52d20b0c76bb26d(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_359(38, get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_122(iParam0) == -1037537535)
	{
		if ((!func_190(iParam0, 866047851) && !func_190(iParam0, -1979000645)) && !func_190(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_454(iParam0, 8388608) && !func_455(28))
	{
		func_456(28);
	}
	if (!bVar3)
	{
		if (func_190(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_199(iParam0) == -1447088266)
			{
				iVar1 = func_253(func_252(iParam0, 1), 0);
				if (is_weapon_valid(iVar1))
				{
					if (func_23() == -1)
					{
						func_254(iVar1);
					}
					if (func_98(0) && func_457(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_458(iParam0, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
			else
			{
				iVar1 = _get_ammo_type_for_weapon(iParam0);
				if (_is_ammo_valid(iVar1))
				{
					if (func_23() == -1)
					{
						func_254(iParam0);
					}
					if (func_98(0) && func_457(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_458(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_122(iParam0) == -427144552)
		{
			if (!func_459(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_122(iParam0) == 307971639 && func_460(iParam0))
		{
			if (!func_461(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_190(iParam0, 866047851))
		{
			func_462(iParam0);
		}
		else if (func_190(iParam0, 2000026003))
		{
			func_463(iParam0);
		}
		else if (func_190(iParam0, -103750053))
		{
			func_251(func_250(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_251(func_260(-717883113, 2091222383), iVar0);
		}
		else if (func_190(iParam0, -121341956) && !func_190(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_120((*Global_1835011)[4]->f_1, 1))
				{
					func_63(498, 0);
				}
			}
			if (func_190(iParam0, -2017733358) || func_190(iParam0, -1369131378))
			{
				func_464(iParam0);
			}
		}
		else if (func_190(iParam0, -136654233))
		{
			if (func_190(iParam0, -1021472396))
			{
			}
		}
		else if (func_190(iParam0, -1466706512) && func_190(iParam0, 1147021565))
		{
			func_63(484, 0);
		}
		else if (func_190(iParam0, 1147021565) && func_190(iParam0, -524514947))
		{
		}
		else if (func_190(iParam0, 554195525))
		{
		}
		else if (func_190(iParam0, 589988438))
		{
			if (func_465())
			{
				func_466(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_190(iParam0, 787083290) && func_190(iParam0, 949916894))
		{
			func_467(iParam0);
		}
		else if (func_190(iParam0, -1718133314))
		{
			func_468(iParam0);
		}
		else if (func_190(iParam0, -1738650224))
		{
			func_469(iParam0);
		}
		else if (func_190(iParam0, -1112814642) && func_190(iParam0, 949916894))
		{
			func_470(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_190(iParam0, 1841149704))
		{
			func_471();
		}
		else if (func_190(iParam0, 606799272))
		{
			func_472(iParam0, iParam1);
			func_473(iParam0);
		}
		else if (func_190(iParam0, -1112814642) && func_190(iParam0, -1697809989))
		{
			func_474(iParam0, 0, 0, 0);
		}
		else if (func_190(iParam0, -2017733358) || func_190(iParam0, -1369131378))
		{
			func_464(iParam0);
		}
		else if (func_190(iParam0, -1921346699))
		{
			if (func_23() != -1)
			{
				return 0;
			}
			func_475(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_190(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_25(215778062, 1, 0))
					{
						func_228(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_25(670273567, 1, 0))
					{
						func_228(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_25(-967317137, 1, 0))
					{
						func_228(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_25(526074061, 1, 0))
					{
						func_228(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_25(-1045488665, 1, 0))
					{
						func_228(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_25(471514780, 1, 0))
					{
						func_228(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_190(iParam0, -839724752) && func_454(iParam0, 4))
		{
			if (!func_356(42))
			{
				func_476(iParam0);
			}
		}
		else if (func_190(iParam0, 1399091007))
		{
			func_477(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_190(iParam0, 1248798204))
		{
			iVar8 = 0;
			switch (iParam0)
			{
				case -593948563:
					iVar8 = -1281487556;
					break;
				case -1421669656:
					iVar8 = -59585102;
					break;
				case -830181022:
					iVar8 = 1018123892;
					break;
				case 917695895:
					iVar8 = -1455768246;
					break;
				case -1580595448:
					iVar8 = -921879912;
					break;
				case 1309992709:
					iVar8 = 982182330;
					break;
				case 1541618973:
					iVar8 = -1406390556;
					break;
			}
			if (iVar8 != 0)
			{
				func_228(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
		switch (iParam0)
		{
			case 990323211:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1930309310;
				break;
			case 1143540373:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1372580021;
				break;
			case -1073808995:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1557306571;
				break;
			case 1903483453:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 306085243;
				break;
			case 224572565:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 627131028;
				break;
			case -13395913:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 627131028;
				break;
			case 1859340712:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 239008065;
				break;
			case -1614861441:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 239008065;
				break;
			case -1336735809:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1930727055;
				break;
			case -1109613870:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1930727055;
				break;
			case 637788839:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2118798877;
				break;
			case -1161163727:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2118798877;
				break;
			case 648503798:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -978517238;
				break;
			case -1434556002:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -978517238;
				break;
			case -843069275:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1367906801;
				break;
			case 1356680930:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1367906801;
				break;
			case -1185145312:
				func_456(24);
				if (&Global_1946804->f_1497.f_1[27] == &Global_1946804->f_57[27])
				{
					func_210(player_ped_id(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_478(&iVar9, 0))
				{
					func_457(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303:
				if (func_23() == -1 && &Global_1946804->f_1497.f_1[25] == &Global_1946804->f_57[25])
				{
					func_210(player_ped_id(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case -160924582:
				break;
			case 2131771850:
				func_63(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_479();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_480();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_481();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_482();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_483();
				break;
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584:
				func_484(499813453, 854119837, 0);
				func_485(499813453, 0);
				func_486(1);
				break;
			case 2127812557:
				func_484(499813453, -1292544588, 0);
				func_485(499813453, 0);
				func_486(2);
				break;
			case 808991383:
				func_484(499813453, -1003325394, 0);
				func_485(499813453, 0);
				func_486(4);
				break;
			case 1134518629:
				func_484(666607663, -335460405, 0);
				func_485(666607663, 0);
				func_487(1);
				break;
			case 902940106:
				func_484(666607663, 903797617, 0);
				func_485(666607663, 0);
				func_487(2);
				break;
			case -418174898:
				func_484(666607663, 669728650, 0);
				func_485(666607663, 0);
				func_487(4);
				break;
			case -648114971:
				func_484(-220219788, 1214120047, 0);
				func_485(-220219788, 0);
				func_488(1);
				break;
			case 211153747:
				func_484(-220219788, 655769340, 0);
				func_485(-220219788, 0);
				func_488(2);
				break;
			case -32876996:
				func_484(-220219788, 885316185, 0);
				func_485(-220219788, 0);
				func_488(4);
				break;
			case 1191437462:
				func_484(218622660, -1491419385, 0);
				func_485(218622660, 0);
				func_489(1);
				break;
			case 1119149048:
				func_484(218622660, 1809565830, 0);
				func_485(218622660, 0);
				func_489(2);
				break;
			case 506073827:
				func_484(390004462, -628873767, 0);
				func_485(390004462, 0);
				func_490(1);
				break;
			case -1876986168:
				func_484(390004462, -405421956, 0);
				func_485(390004462, 0);
				func_490(2);
				break;
			case 2142623221:
				func_484(390004462, -1108972386, 0);
				func_485(390004462, 0);
				func_490(4);
				break;
			case 1508215381:
				func_484(6410548, 1053716392, 0);
				func_485(6410548, 0);
				func_491(1);
				break;
			case -888935280:
				func_484(6410548, 806507056, 0);
				func_485(6410548, 0);
				func_491(2);
				break;
			case -1252474566:
				func_484(6410548, 1571925350, 0);
				func_485(6410548, 0);
				func_491(4);
				break;
			case -1465702449:
				func_484(6410548, 1330352282, 0);
				func_485(6410548, 0);
				func_491(8);
				break;
			case -21093309:
				func_493(242, func_492(-21093309), 0);
				break;
			case 204375141:
				func_493(240, func_492(204375141), 0);
				break;
			case -417963070:
				func_493(241, func_492(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_494(594, 1934060482, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1067476102:
			case -541584777:
			case 206762213:
			case 1566032147:
			case 1973952589:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_494(594, 1110018439, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -653299524:
			case -486559882:
			case -324053813:
			case -223790555:
			case 998010398:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_494(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_494(594, -1228016946, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -2034071102:
			case -1939600995:
			case -1760041550:
			case -1708424762:
			case -1598782722:
			case -1505924449:
			case -1403873319:
			case -1335566375:
			case -1192685521:
			case 144810727:
			case 567164682:
			case 1174625611:
			case 1955751248:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_494(595, -103579, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1977068039:
			case -399865011:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_494(595, -1531530025, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case 80178851:
				func_63(488, 0);
				break;
			case 1613651027:
				func_63(491, 0);
				break;
			case -885810591:
				func_63(485, 0);
				if ((get_random_int_in_range(0, 65536) % 3) == 0)
				{
					func_228(func_495(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_228(func_496(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535:
				if (func_455(1))
				{
					func_63(487, 0);
				}
				break;
			case -898386032:
				func_63(486, 0);
				break;
			case -2035110427:
				if (func_23() == -1)
				{
					iParam0 = -1448210800;
				}
				break;
			case 1510719693:
				func_63(496, 0);
				break;
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (iVar0 <= 0)
		{
			return 0;
		}
		iVar10 = iParam0;
		func_497(&iVar10);
		if (!func_498(iVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_98(0))
		{
			return 1;
		}
		if (func_122(iParam0) == -1037537535)
		{
			func_499(iParam0);
		}
		if (func_190(iParam0, -1979000645))
		{
			func_500(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_98(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			_0x48e4d50f87a96aa5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_228(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_320(iVar2, 0);
		}
	}
	Var35 = { func_436(iParam0) };
	if (_stat_id_is_valid(&Var35))
	{
		_0x6a0184e904cdf25e(&Var35, iVar0);
	}
	func_501(iParam0);
	if (fParam6 > 0f)
	{
		if (func_190(iParam0, -839724752))
		{
			func_502(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_256(iParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

bool func_229(int iParam0, bool bParam1)
{
	if (bParam1 && !func_70(iParam0))
	{
		return false;
	}
	iVar0 = func_163(iParam0);
	return _uiprompt_is_just_pressed((*Global_1945938)[iVar0]->f_3);
}

float func_230(int iParam0, float fParam1)
{
	switch (iParam0)
	{
		case 0:
			fVar0 = to_float(get_entity_health(Global_35));
			fVar1 = to_float(get_entity_max_health(Global_35, false));
			break;
		case 1:
			fVar0 = _get_ped_stamina(Global_35);
			fVar1 = _get_ped_max_stamina(Global_35);
			break;
		case 2:
			fVar0 = _0xa81d24ae0af99a5e(get_player_index());
			fVar1 = _0x592f58bc4d2a2cf3(get_player_index(), 0);
			break;
	}
	fVar3 = (fParam1 + fVar0);
	if (fVar3 > fVar1)
	{
		fVar2 = (fVar1 - fVar0);
	}
	else
	{
		fVar2 = (fVar3 - fVar0);
	}
	return (fVar2 / 2f);
}

void func_231(float fParam0, bool bParam1)
{
	fVar0 = (50f * fParam0);
	iVar1 = round((fVar0 + IntToFloat(get_entity_health(Global_35))));
	if (bParam1 && fVar0 < 0f)
	{
		_0x835f131e7dc8f97a(Global_35, fVar0, 0, 0);
	}
	else if (fParam0 <= 0f || iVar1 > get_entity_max_health(Global_35, false))
	{
		_set_entity_health(Global_35, get_entity_max_health(Global_35, false), 0);
	}
	else
	{
		_set_entity_health(Global_35, iVar1, 0);
	}
}

void func_232(int iParam0, int iParam1)
{
	Global_1347477->f_9[iParam0] = (get_game_timer() + iParam1);
}

void func_233(float fParam0)
{
	_0x51345ae20f22c261(player_id(), (fParam0 * 14f), 0, 0, 0);
}

void func_234(float fParam0)
{
	if (func_23() != -1)
	{
		return;
	}
	if (fParam0 == -1f)
	{
		_restore_ped_stamina(Global_35, 100f);
	}
	else
	{
		iVar0 = 8;
		_charge_ped_stamina(Global_35, (fParam0 * IntToFloat(iVar0)));
	}
}

float func_235(float fParam0, float fParam1)
{
	if (fParam1 != 0f)
	{
		return ((fParam1 / 100f) * 200f);
	}
	return ((fParam0 / 8f) * 200f);
}

bool func_236(var uParam0, var uParam1, float fParam2)
{
	if (func_23() != -1)
	{
		return true;
	}
	if (!func_503(0))
	{
		return true;
	}
	if (fParam2 <= 0f)
	{
		return true;
	}
	if (*uParam0)
	{
		return !*uParam1;
	}
	*uParam0 = 1;
	if (!Global_1347477->f_191.f_3)
	{
		func_504(Global_35, "Player_Sick_Over_Eating_Cough", 0, 0, 1, 0, 0, 1);
		Global_1347477->f_191.f_3 = 1;
	}
	if (Global_1347477->f_191 < get_game_timer())
	{
		Global_1347477->f_191.f_1 = 0;
	}
	Global_1347477->f_191.f_1++;
	if (Global_1347477->f_191.f_1 > 3)
	{
		if (Global_1347477->f_191.f_2 < get_game_timer())
		{
			func_63(0, 1);
			Global_1347477->f_191.f_2 = (get_game_timer() + 480000);
		}
		func_504(Global_35, "Player_Sick_Over_Eating_Cough", 0, 0, 1, 0, 0, 1);
		*uParam1 = 1;
		return false;
	}
	Global_1347477->f_191 = (get_game_timer() + 480000);
	*uParam1 = 0;
	return true;
}

void func_237(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_23() == 0)
	{
		func_505(0, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_506(0);
	if (bParam1)
	{
		func_507(fVar0);
	}
	if (fVar0 >= (100f - 1f))
	{
		func_508();
	}
	if (bParam2)
	{
		fParam0 = func_509(0, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_511(0, func_510(fParam0, -100f, 100f), bParam1);
}

void func_238(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_23() == 0)
	{
		func_505(2, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_506(2);
	if (bParam1)
	{
		func_507(fVar0);
	}
	if (bParam2)
	{
		fParam0 = func_509(2, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_511(2, func_510(fParam0, -100f, 100f), bParam1);
}

void func_239(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_23() == 0)
	{
		func_505(1, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_506(1);
	if (bParam1)
	{
		func_507(fVar0);
	}
	if (bParam2)
	{
		fParam0 = func_509(1, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_511(1, func_510(fParam0, -100f, 100f), bParam1);
}

void func_240(float fParam0, bool bParam1)
{
	fVar0 = func_512(13);
	if (fParam0 > 10f)
	{
		fParam0 = 10f;
	}
	if (!func_455(17))
	{
		return;
	}
	if (func_513())
	{
		iVar1 = func_514(fVar0);
		fVar0 = (fVar0 + fParam0);
		iVar2 = func_514(fVar0);
		if (iVar1 != iVar2)
		{
			Global_1347477->f_195 = func_147();
			func_246(&(Global_1347477->f_195), 0, 0, 1, 0, 0, 0, 0);
		}
		func_515(&fVar3, &fVar4);
		func_516(13, func_510(fVar0, fVar3, fVar4));
	}
	if (bParam1)
	{
		Global_40.f_11095.f_66++;
		if (5 == Global_40.f_11095.f_66)
		{
			func_63(94, 0);
		}
	}
}

float func_241(float fParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return (fParam0 * 0.033f);
		case 1:
			return (fParam0 * 2f);
		case 2:
			return (fParam0 * 120f);
		case 3:
			return (fParam0 * 2880f);
		default:
			break;
	}
	return fParam0;
}

void func_242(int iParam0, float fParam1)
{
	iVar0 = player_ped_id();
	if (fParam1 == -1f)
	{
		if (func_517(iParam0))
		{
			fParam1 = 30f;
		}
		else
		{
			fParam1 = 30f;
		}
	}
	else if (fParam1 <= 0f)
	{
		return;
	}
	fParam1 = (fParam1 * (1f + Global_40.f_11095.f_70));
	switch (iParam0)
	{
		case 0:
			sVar1 = func_518(iParam0);
			if (!animpostfx_is_running(sVar1))
			{
				animpostfx_play(sVar1);
			}
			func_519(-1);
			func_265(0);
			_set_attribute_overpower_amount(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[0] = fParam1;
			break;
		case 1:
			sVar1 = func_518(iParam0);
			if (!animpostfx_is_running(sVar1))
			{
				animpostfx_play(sVar1);
			}
			func_520(-1);
			_set_attribute_overpower_amount(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[1] = fParam1;
			break;
		case 2:
			sVar1 = func_518(iParam0);
			if (!animpostfx_is_running(sVar1))
			{
				animpostfx_play(sVar1);
			}
			func_521(-1);
			_set_attribute_overpower_amount(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[2] = fParam1;
			break;
		case 19:
			func_522(0, 1, 1);
			_set_attribute_overpower_amount(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[0]->f_1 = fParam1;
			break;
		case 18:
			func_522(1, 1, 1);
			_set_attribute_overpower_amount(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[1]->f_1 = fParam1;
			break;
		case 20:
			func_522(2, 1, 1);
			_set_attribute_overpower_amount(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[2]->f_1 = fParam1;
			break;
		default:
			break;
	}
}

void func_243(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		return;
	}
	if (bParam3 || func_190(iParam0, -537818634))
	{
		func_251(func_523(-704089207), 1);
	}
	if (func_190(iParam0, -1457797660))
	{
		func_251(func_523(-1909697259), 1);
	}
	if (func_190(iParam0, 1573112293))
	{
		func_525(func_524(&iParam0), 1);
	}
	if (func_190(iParam0, 1939071949))
	{
		func_251(func_260(1368284188, -939665347), 1);
	}
	switch (iParam0)
	{
		case -1921080134:
		case -635441454:
		case 1448771675:
			func_251(func_260(1368284188, -2049431929), 1);
			break;
	}
	switch (iParam0)
	{
		case 299161628:
			func_251(func_260(1368284188, 304473406), 1);
			break;
		case -1907044919:
		case 688258043:
			func_251(func_260(1368284188, 894597474), 1);
			break;
		case -541584777:
		case 206762213:
			func_251(func_260(1368284188, 2119695263), 1);
			break;
		case -653299524:
		case -486559882:
		case 376981280:
			func_251(func_260(1368284188, -1791969490), 1);
			break;
		case -324053813:
		case 998010398:
			func_251(func_260(1368284188, -155567636), 1);
			break;
		case -2042563684:
		case -834705084:
			func_251(func_260(1368284188, 497247514), 1);
			break;
		case 433340626:
		case 1895068170:
			func_251(func_260(1368284188, 1199394531), 1);
			break;
		case 1929383243:
		case 2036955137:
			func_251(func_260(1368284188, -868741806), 1);
			break;
		case -1635450397:
		case 1831763320:
			func_251(func_260(1368284188, -208442209), 1);
			break;
	}
	if (func_23() == -1)
	{
		if (iParam0 == -1976480343)
		{
			func_251(func_260(1368284188, 595572217), 1);
		}
	}
	if (bParam2)
	{
		func_251(func_523(704570463), 1);
	}
}

void func_244(var uParam0)
{
	disable_control_action(0, 613911080, false);
	iVar0 = get_clock_hours();
	if (uParam0->f_187 != iVar0)
	{
		if (uParam0->f_187 == -1)
		{
			bVar1 = true;
		}
		uParam0->f_187 = iVar0;
		if (!func_526(uParam0) && bVar1)
		{
			func_201("CMP_SLP_SOON", 10000, 0, 0, 0, 1);
		}
	}
}

char* func_245(int iParam0)
{
	sVar0 = "script@respawn@sky@SkyTL_";
	sVar1 = func_530(func_529(func_527(iParam0), func_528(), 1, 63));
	sVar2 = func_530(func_529(sVar0, sVar1, 1, 63));
	return sVar2;
}

void func_246(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_531(*iParam0);
	iVar1 = func_532(*iParam0);
	iVar2 = func_533(*iParam0);
	iVar3 = func_534(*iParam0);
	iVar4 = func_535(*iParam0);
	iVar5 = func_536(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_537(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_537(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	if (!bParam7)
	{
		iVar0 = (iVar0 + iParam6);
	}
	func_538(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_247(int iParam0)
{
	return &Global_1899515 > iParam0;
}

bool func_248(int iParam0)
{
	if (_does_anim_scene_exist(iParam0))
	{
		if (!_is_anim_scene_loaded(iParam0, true, false))
		{
			if (!_is_anim_scene_loading(iParam0, true))
			{
				load_anim_scene(iParam0);
			}
			return false;
		}
	}
	return true;
}

bool func_249(var uParam0)
{
	disable_control_action(0, -124244224, false);
	func_55(1024);
	uParam0->f_57.f_35 = 1;
	iVar0 = _0xc22aa08a8adb87d4(Global_35);
	if (func_56(268435456) && uParam0->f_149 < 13)
	{
		func_539(&(uParam0->f_57));
		func_540(&(uParam0->f_57));
		if ((get_game_timer() - uParam0->f_197) > 1000 && func_541(&(uParam0->f_57)))
		{
			func_542();
			if (func_85(uParam0))
			{
				if (iVar0 == -571916863)
				{
					func_88(-1890302844, 0.5f);
					return false;
				}
				else if (iVar0 == -597629206)
				{
					func_88(36116464, 0.5f);
					return false;
				}
			}
			else
			{
				return false;
			}
			if (Global_1911914->f_1577 != 0)
			{
				uParam0->f_57.f_77 = Global_1911914->f_1577;
			}
			uParam0->f_57.f_78 = -214678071;
			uParam0->f_197 = -1;
			do_screen_fade_in(500);
			if (iVar0 == -518407211)
			{
				set_current_ped_weapon(Global_35, -618550132, true, 0, false, false);
				func_17(&(uParam0->f_151), 2097152);
			}
			func_47(16384);
			func_55(65536);
			Global_1392040->f_2 = 0;
			if (func_98(0))
			{
				func_543(uParam0->f_57.f_77, uParam0->f_57.f_78, 1, 0, 0);
			}
			_0x378d3b1b11d9385b(uParam0->f_57.f_77);
			uParam0->f_208 = 3;
			if (does_entity_exist(uParam0->f_160))
			{
				delete_object(&(uParam0->f_160));
			}
			uParam0->f_160 = create_object(func_544(uParam0->f_57.f_77), Global_36, false, false, false, false, true);
			if (_0x3bbdd6143ff16f98(Global_35, uParam0->f_160, "p_meatChunks01x_PH_L_HAND", 0, 0, 1))
			{
			}
			set_entity_visible(uParam0->f_160, false);
			_set_object_burn_level(uParam0->f_160, 0f, true);
			func_130(&(uParam0->f_57));
			func_45(&(uParam0->f_57), 2);
			uParam0->f_162[6] = func_81("CRAFT_FASTER", 1367437629, 2, 0, 0, 6, 7000, 10000, 25, 1073741824, 1704213876, 0);
			func_545(uParam0, 6, 0, 0);
			func_84(&(uParam0->f_162[6]), 0, 1);
			func_82(&(uParam0->f_162[6]), -1067771379, 0, 1);
			uParam0->f_57.f_62 = 0;
			_databinding_remove_data_entry(uParam0->f_57.f_39);
			func_17(&(uParam0->f_151), 16);
			func_62(uParam0, 13);
		}
		return false;
	}
	if (uParam0->f_149 != 0)
	{
		enable_control_action(0, -1450761377, true);
		enable_control_action(0, -771458680, true);
	}
	if (uParam0->f_149 > 0)
	{
		_uiprompt_set_active_group_this_frame(-1067771379, _create_var_string(0, uParam0->f_57.f_77), 1, 0, 0, 0);
	}
	if (uParam0->f_149 != 12)
	{
		if (has_anim_event_fired(Global_35, 442509369))
		{
			uParam0->f_209++;
			func_93(uParam0->f_57.f_77, to_float(uParam0->f_208), uParam0->f_209 >= uParam0->f_208);
		}
	}
	else if (has_anim_event_fired(Global_35, 442509369))
	{
		uParam0->f_209++;
		if (func_90())
		{
			func_91(1);
		}
		else if (func_92())
		{
			func_91(0);
		}
		func_93(uParam0->f_57.f_77, to_float(uParam0->f_208), uParam0->f_209 >= uParam0->f_208);
	}
	if (func_98(0))
	{
		if (has_anim_event_fired(Global_35, -936525963))
		{
			func_17(&(uParam0->f_151), 1024);
			func_99(uParam0->f_57.f_77, 1, 1, 1, 0);
			func_546();
		}
	}
	if (uParam0->f_149 >= 14)
	{
		if (func_70(&(uParam0->f_162[8])) && func_229(&(uParam0->f_162[8]), 1))
		{
		}
	}
	if (uParam0->f_57.f_21 != -1 && func_547(&(uParam0->f_57)) != 12)
	{
		if (func_548(uParam0->f_57.f_21))
		{
		}
		else
		{
			uParam0->f_57.f_21 = -1;
		}
	}
	set_ped_can_play_ambient_anims(Global_35, false);
	set_ped_can_play_gesture_anims(Global_35, 0, 1);
	switch (uParam0->f_149)
	{
		case 0:
			if (uParam0->f_154 == 4)
			{
				if (func_343(Global_35, uParam0[0], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@STOOL1@MALE_A@STOOL1_TRANS_KNEEL1", "STOOL1_TRANS_KNEEL1", "WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_ARTHUR"))
				{
					uParam0->f_154 = 0;
				}
				return false;
			}
			if (func_85(uParam0))
			{
				if (iVar0 == -571916863)
				{
					func_88(-1890302844, 0.5f);
					return false;
				}
				else if (iVar0 == -597629206)
				{
					func_88(36116464, 0.5f);
					return false;
				}
			}
			if (((func_85(uParam0) || has_anim_event_fired(Global_35, -1208591336)) && (((((iVar0 == -1433449364 || iVar0 == 1135271674) || iVar0 == -229964281) || iVar0 == -518407211) || iVar0 == -571916863) || iVar0 == -597629206)) || func_547(&(uParam0->f_57)) == 12)
			{
				func_549(&(uParam0->f_57), 1);
				if (func_547(&(uParam0->f_57)) == 11)
				{
					if (func_317(uParam0->f_57.f_77))
					{
						func_550(uParam0);
					}
					else if (uParam0->f_57.f_80)
					{
						uParam0->f_208 = 1;
						func_47(131072);
						if (func_98(0))
						{
							func_543(uParam0->f_57.f_77, uParam0->f_57.f_78, 1, func_551(), 0);
						}
						func_45(&(uParam0->f_57), 0);
						func_130(&(uParam0->f_57));
						func_144(uParam0->f_162[6], 1, 1);
						if (func_372(uParam0->f_57.f_77, -1636519629) == -701492487)
						{
							uParam0->f_162[8] = func_81("POUR_COFFEE", 1367437629, 2, 0, 0, 0, 6000, 10000, 25, 1073741824, 1704213876, 0);
							func_84(&(uParam0->f_162[8]), 0, 1);
							func_82(&(uParam0->f_162[8]), -1067771379, 0, 1);
							func_552(uParam0, 0);
						}
						else
						{
							uParam0->f_162[6] = func_81("CRAFT_FASTER", 1367437629, 2, 0, 0, 6, 6000, 10000, 25, 1073741824, 1704213876, 0);
							func_545(uParam0, 6, 0, 0);
							func_84(&(uParam0->f_162[6]), 0, 1);
							func_82(&(uParam0->f_162[6]), -1067771379, 0, 1);
						}
						func_553();
						uParam0->f_196 = get_game_timer();
						func_62(uParam0, 1);
					}
					else
					{
						func_6(&(uParam0->f_151), 4);
						func_47(131072);
					}
				}
				else if (func_547(&(uParam0->f_57)) == 0)
				{
					func_75(uParam0, 1);
					func_55(131072);
					func_55(16384);
					func_47(262144);
					func_47(65536);
					if (func_56(8192))
					{
						func_45(&(uParam0->f_57), 0);
						uParam0->f_196 = get_game_timer();
						func_130(&(uParam0->f_57));
						func_6(&(uParam0->f_151), 512);
						return true;
					}
				}
				else if (func_547(&(uParam0->f_57)) == 1 || func_138(Global_35, 0))
				{
					func_6(&(uParam0->f_151), 4);
					uParam0->f_57.f_35 = 0;
					func_170(uParam0, uParam0->f_57.f_22);
					func_75(uParam0, 1);
					func_130(&(uParam0->f_57));
					func_55(131072);
					func_55(16384);
					func_47(262144);
					func_47(65536);
					if (uParam0->f_154 == 4)
					{
						uParam0->f_157 = 9;
					}
					else
					{
						uParam0->f_157 = 6;
					}
					uParam0->f_196 = get_game_timer();
					func_6(&(uParam0->f_151), 512);
					return true;
				}
			}
			break;
		case 1:
			if (func_85(uParam0) && (get_game_timer() - uParam0->f_196) > 250)
			{
				if (uParam0->f_154 == 4)
				{
					if (func_343(Global_35, uParam0[0], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@STOOL1@MALE_A@STOOL1_TRANS_KNEELFIRECRAFT", "STOOL1_TRANS_KNEELFIRECRAFT", "WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT"))
					{
						uParam0->f_154 = 0;
						func_62(uParam0, 2);
					}
				}
				else if (iVar0 == -518407211)
				{
					if (func_88(653141085, 1086324736))
					{
					}
				}
				else if (func_372(uParam0->f_57.f_77, -1636519629) == -701492487)
				{
					if (iVar0 == -1433449364)
					{
						if (func_88(1335077954, 1086324736))
						{
							func_62(uParam0, 2);
						}
					}
					else if (uParam0->f_154 == 0)
					{
						if (func_340(uParam0, 0))
						{
							func_88(-1871280875, 1f);
							func_62(uParam0, 9);
						}
					}
					else if (uParam0->f_154 == 1)
					{
						if (func_340(uParam0, 1))
						{
							func_88(-1098561217, 1f);
							func_62(uParam0, 9);
						}
					}
					else if (uParam0->f_154 == 2)
					{
						if (func_343(Global_35, uParam0[1], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNEEL3@MALE_A@KNEEL3_TRANS_KNEEL2", "KNEEL3_TRANS_KNEEL2", "WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_ARTHUR"))
						{
							uParam0->f_154 = 1;
						}
					}
					else if (uParam0->f_154 == 3)
					{
						if (func_343(Global_35, uParam0[0], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNEEL4@MALE_A@KNEEL4_TRANS_KNEEL1", "KNEEL4_TRANS_KNEEL1", "WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_ARTHUR"))
						{
							uParam0->f_154 = 0;
						}
					}
				}
				else if (iVar0 == -1433449364)
				{
					func_88(1520707380, 1086324736);
					func_62(uParam0, 2);
				}
				else
				{
					func_88(-1161086932, 1086324736);
					func_62(uParam0, 2);
				}
				uParam0->f_196 = get_game_timer();
			}
			break;
		case 2:
			if (!func_165(&(uParam0->f_162[6]), 0) && (get_game_timer() - uParam0->f_196) > 500)
			{
				if (has_anim_event_fired(Global_35, 1070143458) || func_85(uParam0))
				{
					func_84(&(uParam0->f_162[6]), 1, 1);
				}
			}
			if (func_152(&(uParam0->f_162[6]), 1) || func_372(uParam0->f_57.f_77, -1636519629) == -701492487)
			{
				if (_0x1252c029fc8ebb4d())
				{
					_0x709ba8c08c5c008d();
				}
				func_545(uParam0, 6, 1, 0);
				func_144(uParam0->f_162[6], 1, 1);
				if (((func_122(uParam0->f_57.f_77) == 2085633299 && !func_190(uParam0->f_57.f_77, -1242251796)) && !func_190(uParam0->f_57.f_77, 1919582297)) && !func_190(uParam0->f_57.f_77, -651046900))
				{
					uParam0->f_162[8] = func_81("USE_ITEM", -1181049683, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
					func_82(&(uParam0->f_162[8]), -1067771379, 0, 1);
					func_83(&(uParam0->f_162[8]), 10, 1, 1);
					uParam0->f_162[7] = func_81("STOW_ITEM", -473983589, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
					func_83(&(uParam0->f_162[7]), 10, 1, 1);
					func_82(&(uParam0->f_162[7]), -1067771379, 0, 1);
					_0x7e2c766adb2c5f1a(uParam0->f_57.f_77, 1);
				}
				if (!func_98(0))
				{
					uParam0->f_57.f_21 = func_135(uParam0->f_57.f_77, uParam0->f_57.f_78);
				}
				uParam0->f_209 = 0;
				func_31(&(uParam0->f_201));
				uParam0->f_196 = get_game_timer();
				func_6(&(uParam0->f_151), 1024);
				func_62(uParam0, 3);
			}
			else if (func_165(&(uParam0->f_162[6]), 0))
			{
				func_554(uParam0, iVar0);
			}
			break;
		case 3:
			if (func_85(uParam0))
			{
				if (func_336(&(uParam0->f_201), 0.1f))
				{
					if (iVar0 == -87088667)
					{
						uParam0->f_196 = get_game_timer();
						func_88(-266297705, 1f);
						func_31(&(uParam0->f_201));
					}
					else
					{
						uParam0->f_196 = get_game_timer();
						func_88(1581850152, 1086324736);
					}
				}
			}
			if (func_70(&(uParam0->f_162[8])))
			{
				func_232(0, 7000);
				func_232(2, 7000);
				func_232(1, 7000);
				if (func_165(&(uParam0->f_162[8]), 0) && (func_229(&(uParam0->f_162[8]), 1) || is_control_pressed(0, -1181049683)))
				{
					if (!func_98(0))
					{
						func_226(uParam0->f_57.f_77, 1, 1, -142743235, 0);
					}
					_0xd962f8579d702db5();
					func_99(uParam0->f_57.f_77, 1, 1, 0, 0);
					func_546();
					func_144(uParam0->f_162[8], 1, 1);
					func_144(uParam0->f_162[7], 1, 1);
					func_552(uParam0, 1);
					func_55(131072);
					func_45(&(uParam0->f_57), 15);
					func_62(uParam0, 5);
					return false;
				}
			}
			if ((!func_70(&(uParam0->f_162[8])) || (func_165(&(uParam0->f_162[7]), 0) && (func_555(&(uParam0->f_162[7]), 1) || is_control_pressed(0, -473983589)))) || func_138(Global_35, 0))
			{
				func_144(uParam0->f_162[8], 1, 1);
				func_144(uParam0->f_162[7], 1, 1);
				_0xd962f8579d702db5();
				uParam0->f_196 = get_game_timer();
				if (func_16(uParam0->f_151, 512))
				{
					func_6(&(uParam0->f_151), 512);
					func_131(&(uParam0->f_57), 0);
					play_sound_frontend("Exit", "SSCRFT_Sounds", true, 0);
					func_45(&(uParam0->f_57), 1);
				}
				else
				{
					func_45(&(uParam0->f_57), 15);
				}
				func_552(uParam0, 1);
				func_62(uParam0, 4);
				return false;
			}
			break;
		case 4:
			if (func_85(uParam0) && ((get_game_timer() - uParam0->f_196) > 100 || func_125(&(uParam0->f_201))))
			{
				if (iVar0 == -87088667)
				{
					func_88(-1530401853, 1086324736);
				}
				else if (iVar0 == 512684539)
				{
					func_88(-1463467224, 1086324736);
					func_88(1111052667, 1086324736);
				}
				else
				{
					func_88(1111052667, 1086324736);
				}
				uParam0->f_196 = get_game_timer();
				func_62(uParam0, 7);
			}
			break;
		case 5:
			if (func_85(uParam0) && ((get_game_timer() - uParam0->f_196) > 100 || func_125(&(uParam0->f_201))))
			{
				if (iVar0 == -87088667)
				{
					func_88(-1878840211, 1086324736);
				}
				else if (iVar0 == 512684539)
				{
					func_88(-1510453203, 1086324736);
					func_88(-1783213919, 1086324736);
				}
				else
				{
					func_88(-1783213919, 1086324736);
				}
				uParam0->f_196 = get_game_timer();
				func_62(uParam0, 6);
			}
			break;
		case 9:
			if ((get_game_timer() - uParam0->f_196) > 1000)
			{
				if (has_anim_event_fired(Global_35, 1070143458) || func_85(uParam0))
				{
					_0x7e2c766adb2c5f1a(uParam0->f_57.f_77, 1);
					uParam0->f_57.f_84 = 2;
					func_84(&(uParam0->f_162[8]), 1, 1);
					func_556(uParam0, 1);
					func_62(uParam0, 10);
				}
			}
			break;
		case 10:
			func_232(0, 7000);
			func_232(2, 7000);
			func_232(1, 7000);
			if (func_70(&(uParam0->f_162[8])) && func_229(&(uParam0->f_162[8]), 1))
			{
				if (func_98(0))
				{
					func_99(uParam0->f_57.f_77, 1, 1, 0, 0);
				}
				_0xd962f8579d702db5();
				uParam0->f_57.f_84 = (uParam0->f_57.f_84 - 1);
				uParam0->f_196 = get_game_timer();
				func_131(&(uParam0->f_57), 0);
				func_45(&(uParam0->f_57), 15);
				func_557(&(uParam0->f_162));
				uParam0->f_162[8] = func_81("DRINK", -1181049683, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
				func_82(&(uParam0->f_162[8]), -1067771379, 0, 1);
				func_83(&(uParam0->f_162[8]), 10, 1, 1);
				func_84(&(uParam0->f_162[8]), 0, 1);
				func_62(uParam0, 11);
			}
			if (func_229(&(uParam0->f_162[11]), 1))
			{
				_0xd962f8579d702db5();
				func_557(&(uParam0->f_162));
				func_62(uParam0, 0);
				func_45(&(uParam0->f_57), 15);
				func_6(&(uParam0->f_151), 512);
			}
			else if (func_152(&(uParam0->f_162[3]), 1))
			{
				_0xd962f8579d702db5();
				func_557(&(uParam0->f_162));
				func_62(uParam0, 0);
				func_6(&(uParam0->f_151), 512);
				func_131(&(uParam0->f_57), 0);
				play_sound_frontend("Exit", "SSCRFT_Sounds", true, 0);
				func_45(&(uParam0->f_57), 1);
				func_62(uParam0, 0);
				return false;
			}
			else if (func_338(&(uParam0->f_162[3]), 1))
			{
				if (!func_125(&(uParam0->f_57.f_89)))
				{
					func_31(&(uParam0->f_57.f_89));
				}
				else if (func_29(&(uParam0->f_57.f_89), 0.1f))
				{
					func_157(&(uParam0->f_162[3]), "CAMP_REC_QUIT", 1);
				}
			}
			else
			{
				if (func_125(&(uParam0->f_57.f_89)))
				{
					func_337(&(uParam0->f_57.f_89));
				}
				func_157(&(uParam0->f_162[3]), "CAMP_REC_BACK", 1);
			}
			break;
		case 11:
			if (func_558(uParam0))
			{
				func_62(uParam0, 12);
			}
			break;
		case 12:
			func_89(uParam0, iVar0);
			if ((func_85(uParam0) && (get_game_timer() - uParam0->f_196) > 500) && iVar0 == -1433449364)
			{
				func_62(uParam0, 0);
			}
			break;
		case 13:
			if (func_85(uParam0))
			{
				if (iVar0 == -1433449364)
				{
					func_88(1335077954, 1086324736);
					return false;
				}
				func_55(268435456);
				uParam0->f_196 = get_game_timer();
				if (func_16(uParam0->f_150, 8) && uParam0->f_57.f_78 == 278772510)
				{
					switch (uParam0->f_154)
					{
						case 0:
							if (iVar0 == -518407211)
							{
								if (func_88(-141272310, 1086324736))
								{
									func_47(16384);
									func_62(uParam0, 14);
								}
							}
							else if (func_88(-742855896, 1086324736))
							{
								func_47(16384);
								func_62(uParam0, 14);
							}
							break;
						case 1:
							if (iVar0 == -518407211)
							{
								if (func_88(-1655950104, 1086324736))
								{
									func_47(16384);
									func_62(uParam0, 14);
								}
							}
							else if (func_88(-2054966814, 1086324736))
							{
								func_47(16384);
								func_62(uParam0, 14);
							}
							break;
						case 2:
							if (iVar0 == -518407211)
							{
								if (func_343(Global_35, uParam0[1], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNIFE3@MALE_A@KNIFE3_TRANS_COOKGRILL2_B", "KNIFE3_TRANS_COOKGRILL2_B", "WORLD_PLAYER_DYNAMIC_KNEEL_COOKGRILL2"))
								{
									uParam0->f_154 = 1;
									func_47(16384);
									func_62(uParam0, 14);
								}
							}
							else if (func_343(Global_35, uParam0[1], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNEEL3@MALE_A@KNEEL3_TRANS_COOKGRILL2_B", "KNEEL3_TRANS_COOKGRILL2_B", "WORLD_PLAYER_DYNAMIC_KNEEL_COOKGRILL2"))
							{
								uParam0->f_154 = 1;
								func_47(16384);
								func_62(uParam0, 14);
							}
							break;
						case 3:
							if (iVar0 == -518407211)
							{
								if (func_343(Global_35, uParam0[0], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNIFE4@MALE_A@KNIFE4_TRANS_COOKGRILL1_A", "KNIFE4_TRANS_COOKGRILL1_A", "WORLD_PLAYER_DYNAMIC_KNEEL_COOKGRILL1"))
								{
									uParam0->f_154 = 0;
									func_47(16384);
									func_62(uParam0, 14);
								}
							}
							else if (func_343(Global_35, uParam0[0], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNEEL4@MALE_A@KNEEL4_TRANS_COOKGRILL1_A", "KNEEL4_TRANS_COOKGRILL1_A", "WORLD_PLAYER_DYNAMIC_KNEEL_COOKGRILL1"))
							{
								uParam0->f_154 = 0;
								func_47(16384);
								func_62(uParam0, 14);
							}
							break;
						case 4:
							if (func_88(2085830274, 1086324736))
							{
								func_47(16384);
								func_62(uParam0, 14);
							}
							break;
					}
				}
				else if (iVar0 == -518407211)
				{
					func_88(-9448781, 1086324736);
					func_47(16384);
					func_62(uParam0, 14);
				}
				else
				{
					func_88(2101630952, 1086324736);
					func_47(16384);
					func_62(uParam0, 14);
				}
			}
			break;
		case 14:
			if (has_anim_event_fired(Global_35, -560091334))
			{
				set_entity_visible(uParam0->f_160, true);
			}
			if (!func_165(&(uParam0->f_162[6]), 0) && (get_game_timer() - uParam0->f_196) > 500)
			{
				if (has_anim_event_fired(Global_35, 1070143458))
				{
					_play_sound_from_entity("cook_meat_sizzle_loop", uParam0->f_160, "Player_Campfire_Sounds", false, 0, 0);
					_0x9821b68cd3e05f2b("distanceToFlame", 1f, "cook_meat_sizzle_loop", "Player_Campfire_Sounds");
					func_84(&(uParam0->f_162[6]), 1, 1);
					func_559(&(uParam0->f_162[6]), 1);
				}
			}
			if (func_152(&(uParam0->f_162[6]), 1))
			{
				uParam0->f_207 = -1;
				_set_object_burn_level(uParam0->f_160, 1f, true);
				if (_0x1252c029fc8ebb4d())
				{
					_0x709ba8c08c5c008d();
				}
				uParam0->f_162[7] = func_81("STOW_ITEM", -473983589, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
				uParam0->f_162[8] = func_81("EAT_MEAT", -1181049683, 1, 0, 0, 0, 570, 4000, 1, 1073741824, 1704213876, 0);
				func_83(&(uParam0->f_162[8]), 10, 1, 1);
				func_83(&(uParam0->f_162[7]), 10, 1, 1);
				func_82(&(uParam0->f_162[7]), -1067771379, 0, 1);
				func_82(&(uParam0->f_162[8]), -1067771379, 0, 1);
				if (func_560(uParam0->f_57.f_77, 1, 0) || func_66(64))
				{
					func_84(&(uParam0->f_162[7]), 0, 1);
					func_49(64);
				}
				func_144(uParam0->f_162[6], 1, 1);
				func_31(&(uParam0->f_201));
				func_55(16384);
				uParam0->f_209 = 0;
				if (!func_98(0))
				{
					uParam0->f_57.f_21 = func_135(uParam0->f_57.f_77, uParam0->f_57.f_78);
				}
				_0x7e2c766adb2c5f1a(uParam0->f_57.f_77, 1);
				_0x0f2a2175734926d8("cook_meat_sizzle_loop", "Player_Campfire_Sounds");
				func_6(&(uParam0->f_151), 1024);
				func_62(uParam0, 15);
			}
			else
			{
				func_554(uParam0, iVar0);
				if (uParam0->f_207 == -1)
				{
					if (has_anim_event_fired(Global_35, 1070143458))
					{
						uParam0->f_207 = get_game_timer();
					}
				}
				else
				{
					fVar1 = func_561(&(uParam0->f_162[6]), 1);
					fVar1 = func_510(fVar1, 0f, 1f);
					_set_object_burn_level(uParam0->f_160, (1f * fVar1), true);
				}
			}
			break;
		case 15:
			func_232(0, 7000);
			func_232(2, 7000);
			func_232(1, 7000);
			if (func_85(uParam0))
			{
				if (func_336(&(uParam0->f_201), 0.1f))
				{
					uParam0->f_196 = get_game_timer();
					if (func_16(uParam0->f_150, 8) && uParam0->f_57.f_78 == 278772510)
					{
						switch (uParam0->f_154)
						{
							case 0:
								if (iVar0 == 2070743955)
								{
									func_88(1534113026, 1f);
								}
								else
								{
									func_88(-1704091920, 1f);
								}
								break;
							case 1:
								if (iVar0 == -363005419)
								{
									func_88(1022088560, 1f);
								}
								else
								{
									func_88(1938215431, 1f);
								}
								break;
						}
					}
					else if (iVar0 == -283636008)
					{
						func_88(-1065570550, 2f);
					}
					else
					{
						func_88(-1295988014, 2f);
					}
				}
			}
			if (func_70(&(uParam0->f_162[8])))
			{
				if (func_165(&(uParam0->f_162[8]), 0) && (func_229(&(uParam0->f_162[8]), 1) || is_control_pressed(0, -1181049683)))
				{
					_0xd962f8579d702db5();
					func_99(uParam0->f_57.f_77, 1, 1, 0, 0);
					func_546();
					func_144(uParam0->f_162[8], 1, 1);
					func_144(uParam0->f_162[7], 1, 1);
					func_552(uParam0, 1);
					func_47(32768);
					if (!func_98(0))
					{
						func_226(uParam0->f_57.f_77, 1, 1, -142743235, 0);
					}
					uParam0->f_196 = get_game_timer();
					func_62(uParam0, 17);
					return false;
				}
			}
			if (func_70(&(uParam0->f_162[7])))
			{
				if ((((func_165(&(uParam0->f_162[7]), 0) && (func_229(&(uParam0->f_162[7]), 1) || is_control_pressed(0, -473983589))) || func_16(uParam0->f_151, 256)) || func_138(Global_35, 0)) || _0x916b8e075abc8b4e(Global_35, 1))
				{
					func_48(16);
					func_6(&(uParam0->f_151), 256);
					_0xd962f8579d702db5();
					func_144(uParam0->f_162[7], 1, 1);
					func_144(uParam0->f_162[8], 1, 1);
					func_552(uParam0, 1);
					func_62(uParam0, 20);
					return false;
				}
			}
			break;
		case 20:
			if (func_85(uParam0) && ((get_game_timer() - uParam0->f_196) > 250 || func_125(&(uParam0->f_201))))
			{
				if (!func_16(uParam0->f_150, 8) || uParam0->f_57.f_78 != 278772510)
				{
					if (iVar0 == -283636008)
					{
						func_88(528569882, 1f);
					}
					else if (iVar0 == 1412614124)
					{
						func_88(288708544, 1f);
					}
					else
					{
						func_88(-915834315, 1f);
					}
				}
				else
				{
					switch (uParam0->f_154)
					{
						case 0:
							if (iVar0 == 2070743955)
							{
								func_88(2117342404, 1f);
							}
							else if (iVar0 == -1425182948)
							{
								func_88(-496895315, 1f);
							}
							else
							{
								func_88(-915834315, 1f);
							}
							break;
						case 1:
							if (iVar0 == -363005419)
							{
								func_88(-854982185, 1f);
							}
							else if (iVar0 == -1731736943)
							{
								func_88(1638963596, 1f);
							}
							else
							{
								func_88(-915834315, 1f);
							}
							break;
					}
				}
				uParam0->f_196 = get_game_timer();
				func_62(uParam0, 19);
			}
			break;
		case 17:
			if (func_85(uParam0) && ((get_game_timer() - uParam0->f_196) > 250 || func_125(&(uParam0->f_201))))
			{
				if (uParam0->f_57.f_32 && uParam0->f_57.f_78 == 278772510)
				{
					switch (uParam0->f_154)
					{
						case 0:
							if (iVar0 == 2070743955)
							{
								func_88(802306281, 1f);
							}
							else if (iVar0 == -1425182948)
							{
								func_88(2046708901, 1f);
							}
							else
							{
								func_88(-414126081, 2f);
							}
							break;
						case 1:
							if (iVar0 == -363005419)
							{
								func_88(-928525822, 1f);
							}
							else if (iVar0 == -1731736943)
							{
								func_88(-217144965, 1f);
							}
							else
							{
								func_88(-414126081, 2f);
							}
							break;
					}
				}
				else if (iVar0 == -283636008)
				{
					func_88(709478876, 1f);
				}
				else if (iVar0 == 1412614124)
				{
					func_88(606164441, 1f);
				}
				else
				{
					func_88(-414126081, 2f);
				}
				uParam0->f_196 = get_game_timer();
				func_62(uParam0, 18);
			}
			break;
		case 6:
		case 7:
		case 18:
		case 19:
			if (has_anim_event_fired(Global_35, -243011316) || has_anim_event_fired(Global_35, -1208591336))
			{
				func_556(uParam0, 1);
				func_55(32768);
				func_49(16);
				if (uParam0->f_149 == 18 || uParam0->f_149 == 19)
				{
					func_47(65536);
					func_62(uParam0, 16);
				}
				else
				{
					func_62(uParam0, 8);
				}
			}
			else if ((get_game_timer() - uParam0->f_196) > 750)
			{
				if (!_0xc488b8c0e52560d8(Global_35))
				{
					if (iVar0 == -518407211)
					{
						func_47(65536);
						func_62(uParam0, 16);
					}
					else if (iVar0 == -1433449364)
					{
						func_62(uParam0, 8);
					}
					else if (uParam0->f_149 == 18)
					{
						func_62(uParam0, 17);
					}
					else if (uParam0->f_149 == 19)
					{
						func_62(uParam0, 20);
					}
					else if (uParam0->f_149 == 7)
					{
						func_62(uParam0, 4);
					}
					else if (uParam0->f_149 == 6)
					{
						func_62(uParam0, 5);
					}
				}
			}
			break;
		case 8:
		case 16:
			func_47(1024);
			if (func_66(128))
			{
				if (func_165(&(uParam0->f_162[11]), 0))
				{
					func_84(&(uParam0->f_162[11]), 0, 1);
				}
				if (func_165(&(uParam0->f_162[3]), 0))
				{
					func_84(&(uParam0->f_162[3]), 0, 1);
				}
			}
			else
			{
				func_556(uParam0, 0);
			}
			if (func_165(&(uParam0->f_162[6]), 0))
			{
				if (func_138(Global_35, 0))
				{
					func_84(&(uParam0->f_162[6]), 0, 1);
				}
			}
			if (func_229(&(uParam0->f_162[6]), 1))
			{
				func_55(65536);
				func_557(&(uParam0->f_162));
				if (uParam0->f_149 == 16)
				{
					func_550(uParam0);
				}
				else
				{
					func_562(uParam0);
				}
			}
			else if (func_229(&(uParam0->f_162[11]), 1))
			{
				func_55(65536);
				func_557(&(uParam0->f_162));
				func_62(uParam0, 0);
				func_45(&(uParam0->f_57), 15);
				func_6(&(uParam0->f_151), 512);
			}
			else if (func_152(&(uParam0->f_162[3]), 1))
			{
				func_55(65536);
				func_557(&(uParam0->f_162));
				func_62(uParam0, 0);
				func_6(&(uParam0->f_151), 512);
				func_131(&(uParam0->f_57), 0);
				play_sound_frontend("Exit", "SSCRFT_Sounds", true, 0);
				func_45(&(uParam0->f_57), 1);
				func_62(uParam0, 0);
				return false;
			}
			else if (func_338(&(uParam0->f_162[3]), 1))
			{
				if (!func_125(&(uParam0->f_57.f_89)))
				{
					func_31(&(uParam0->f_57.f_89));
				}
				else if (func_29(&(uParam0->f_57.f_89), 0.1f))
				{
					func_157(&(uParam0->f_162[3]), "CAMP_REC_QUIT", 1);
				}
			}
			else
			{
				if (func_125(&(uParam0->f_57.f_89)))
				{
					func_337(&(uParam0->f_57.f_89));
				}
				func_157(&(uParam0->f_162[3]), "CAMP_REC_BACK", 1);
			}
			break;
	}
	return false;
}

struct<2> func_250(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

void func_251(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

int func_252(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1639263599:
			iVar0 = -764310200;
			break;
		case 1222378998:
			iVar0 = -764310200;
			break;
		case 2074469742:
			iVar0 = -764310200;
			break;
		case 480079517:
			iVar0 = -1504859554;
			break;
		case 840671577:
			iVar0 = -1504859554;
			break;
		case 1446246869:
			iVar0 = 1885857703;
			break;
		case -2006166057:
			iVar0 = 1885857703;
			break;
		case 1235846615:
			iVar0 = -1511427369;
			break;
		case -228768324:
			iVar0 = 2133046983;
			break;
		case -1411922943:
			iVar0 = -1511427369;
			break;
		case -834103244:
			iVar0 = -1511427369;
			break;
		case 424030678:
			iVar0 = 165751297;
			break;
		case 446901936:
			iVar0 = 710736342;
			break;
		case -1092841802:
			iVar0 = -462374995;
			break;
		case -1452241321:
			iVar0 = 567069252;
			break;
		case -1188697038:
			iVar0 = -281894307;
			break;
		case 1671758975:
			iVar0 = -1127860381;
			break;
		case -893514737:
			iVar0 = -1894785522;
			break;
		case -2063089161:
			iVar0 = 469927692;
			break;
		case -452897925:
			iVar0 = 1960591597;
			break;
		default:
			break;
	}
	if (func_121(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_563(iVar0) || func_564(iVar0))
			{
				return iVar0;
			}
		}
		else
		{
			return iVar0;
		}
	}
	return iParam0;
}

int func_253(int iParam0, bool bParam1)
{
	if (!func_121(iParam0, 0))
	{
		return 0;
	}
	if (is_weapon_valid(iParam0))
	{
		return iParam0;
	}
	if (!bParam1)
	{
	}
	return 0;
}

void func_254(int iParam0)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_286(iParam0))
	{
		return;
	}
	iVar0 = _get_weapon_unlock(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	_unlock_set_unlocked(iVar0, true);
}

bool func_255(int iParam0, bool bParam1)
{
	if (!func_121(iParam0, 0))
	{
		return false;
	}
	if (!func_565(iParam0, 856287005, &uVar9, &uVar5, &uVar0, 1, 0))
	{
		return false;
	}
	Var10 = { func_566() };
	Var10.f_4 = uVar9;
	if (func_567(iParam0, &uVar15, &Var10, 1, 752097756, 0))
	{
		if (bParam1)
		{
			if (!func_568(iParam0, 1))
			{
			}
		}
		if (func_569(iParam0))
		{
			func_255(func_570(iParam0), 1);
		}
		func_571();
		return true;
	}
	return false;
}

void func_256(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_121(iParam0, 0))
	{
		return;
	}
	if (iParam0 == 1807503187)
	{
		return;
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (!func_572())
	{
		func_573(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_574(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_574(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_454(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_122(iParam0);
	iVar10 = 0;
	iVar11 = 805880880;
	if ((iVar6 == 307971639 && iParam0 != 424030678) && iParam0 != -1188697038)
	{
		iVar10 = 622449822;
		iVar11 = 622449822;
	}
	if (iVar6 == -1013984273 || iVar6 == 658570475)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_575(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (get_hash_key(Var7) == 121560594)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (is_string_null_or_empty(Var7))
	{
		return;
	}
	iVar12 = 109029619;
	sVar13 = "Transaction_Positive";
	iVar14 = 0;
	if (bVar0)
	{
		iVar12 = 619977481;
		sVar13 = "Transaction_Negative";
		iVar14 = 1;
	}
	if (_item_database_is_overpowered_item(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar12 = -856358433;
		}
		else
		{
			iVar12 = -1905433004;
		}
	}
	sVar15 = func_576(_create_var_string(10, &cVar2, _create_var_string(0, func_492(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_190(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = _create_var_string(0, func_492(iParam0));
	}
	func_577(sVar15, Var7.f_1, get_hash_key(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

int func_257(int iParam0, int iParam1, int iParam2)
{
	if (!func_578(iParam0, iParam1))
	{
		return 0;
	}
	if (iParam1 == 1)
	{
		if (func_579(iParam0) && func_580(iParam0))
		{
			iVar0 = 0;
			if (func_581(iParam0, 369710026, &iVar0))
			{
				iParam2 = iVar0;
			}
		}
	}
	Var1.f_4 = func_582(iParam1);
	Var1 = { func_583(0) };
	if (!func_567(iParam0, &uVar6, &Var1, iParam2, 752097756, 1))
	{
		return 0;
	}
	return 1;
}

struct<2> func_258(int iParam0)
{
	return func_260(-1108808256, iParam0);
}

bool func_259(int iParam0, int iParam1)
{
	if (!func_121(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_122(iParam0);
	switch (iParam1)
	{
		case 1:
			if ((func_190(iParam0, -537818634) || func_190(iParam0, -458578204)) && !func_190(iParam0, -1242251796))
			{
				return true;
			}
			break;
		case 2:
			if (iVar0 == 307971639)
			{
				if (func_190(iParam0, -1588156645))
				{
					return false;
				}
				return true;
			}
			break;
		case 3:
			if (iVar0 == -427144552)
			{
				return true;
			}
			else if (iVar0 == 307971639)
			{
				if (func_190(iParam0, -1588156645))
				{
					return true;
				}
			}
			break;
		case 0:
			if (func_317(iParam0) || func_372(iParam0, -1636519629) == -701492487)
			{
				return true;
			}
			break;
		case 4:
			if (func_190(iParam0, 127710288))
			{
				return true;
			}
			break;
		case 5:
			if (func_190(iParam0, -1242251796))
			{
				return true;
			}
			break;
	}
	return false;
}

struct<2> func_260(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_261(int iParam0)
{
	if (func_23() != -1)
	{
		return;
	}
	iVar0 = func_584(iParam0);
	fVar1 = func_585(iParam0);
	if ((Global_1347477->f_117 || !func_455(31)) || !func_586(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_587(iVar0) >= 7)
	{
		return;
	}
	if (iVar0 == 1)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_57));
	}
	else if (iVar0 == 0)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_55));
	}
	else if (iVar0 == 2)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_56));
	}
	fVar1 = (fVar1 * IntToFloat(Global_1347477->f_182));
	fVar1 = to_float(round(fVar1));
	func_588(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_577(_create_var_string(6, func_589(iParam0), fVar1), "itemtype_textures", func_590(iVar0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

bool func_262(int iParam0, int iParam1, int iParam2)
{
	if (!func_121(iParam1, 0))
	{
		return false;
	}
	if (func_122(iParam1) != -1037537535)
	{
		return false;
	}
	bVar1 = func_23() != -1;
	iVar2 = _get_metaped_type(iParam0);
	if (func_199(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_591(iParam1);
	if (iVar4 == -358215195)
	{
		*iParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_190(iParam1, 866047851))
	{
		iVar5 = func_413(iVar4, 1);
		if (func_592(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5] != iVar8)
		{
			*iParam2 = -265166256;
			return false;
		}
		bVar7 = true;
	}
	switch (iVar4)
	{
		case 1742327865:
			if (_get_ped_component_category(iVar8, iVar2, bVar1) == 2056714954 && _is_metaped_using_component(iParam0, -1455751347))
			{
				*iParam2 = 111371848;
				return false;
			}
			iVar5 = 10;
			iVar3 = func_199(&(Global_1946804->f_1497.f_1[iVar5]));
			if (bVar7 && iVar3 == -525676072)
			{
				*iParam2 = -1938792745;
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5] != &Global_1946804->f_57[iVar5] && func_190(iParam1, -1638171711))
			{
				*iParam2 = 187275271;
				return false;
			}
			break;
		case 1900541263:
			iVar5 = 36;
			if (&Global_1946804->f_1497.f_1[iVar5] == &Global_1946804->f_57[iVar5])
			{
				*iParam2 = 2143522536;
				return false;
			}
			if (_is_metaped_using_component(iParam0, -1968556728))
			{
				*iParam2 = -849690042;
				return false;
			}
			break;
		case -1505978566:
			if (func_593(1868067663, &uVar0))
			{
				*iParam2 = 939463734;
				return false;
			}
		case -1130865351:
		case -426430150:
		case 1788623170:
			if (!bVar7)
			{
			}
			else
			{
				iVar11 = _get_num_components_in_ped(iParam0);
				iVar10 = func_594(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_594(&(Global_1946804->f_1497.f_1[iVar5]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*iParam2 = -1608241763;
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = func_199(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != &Global_1946804->f_57[iVar6] && func_190(&(Global_1946804->f_1497.f_1[iVar5]), -1638171711))
				{
					*iParam2 = -357399012;
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != &Global_1946804->f_57[iVar6] && func_595(&(Global_1946804->f_1497.f_1[iVar5])))
					{
						*iParam2 = -357399012;
						return false;
					}
					if (&Global_1946804->f_1497.f_1[iVar5] == &Global_1946804->f_57[iVar5])
					{
						*iParam2 = 2143522536;
						return false;
					}
				}
			}
			*iParam2 = 0;
			return true;
			default:
				break;
	}
}

void func_263(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_264()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

void func_265(bool bParam0)
{
	if (func_23() != -1)
	{
		return;
	}
	if (bParam0 && _0x200373a8df081f22(Global_35, 0))
	{
		return;
	}
	if (Global_40.f_11095.f_43 == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		func_63(89, 1);
		_0xfb6e111908502871(5);
	}
	else
	{
		func_63(90, 1);
		_0x3fc4c027fd0936f4(5);
	}
	func_596(1, bParam0, 1);
	func_483();
	Global_40.f_11095.f_43 = bParam0;
}

void func_266(float fParam0)
{
	if (func_506(1) < fParam0)
	{
		func_511(1, fParam0, 0);
	}
	if (func_506(2) < fParam0)
	{
		func_511(2, fParam0, 0);
	}
	if (func_506(0) < fParam0)
	{
		func_511(0, fParam0, 0);
	}
}

bool func_267(int iParam0)
{
	iParam0 = func_395(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_597(iParam0) == 0)
	{
		return false;
	}
	return true;
}

void func_268(int iParam0, int iParam1, int iParam2)
{
	iParam0 = func_395(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iParam2 = func_598(iParam2, 0, 100);
	Global_40.f_1095.f_1[iParam0]->f_398[iParam1] = iParam2;
	iVar0 = func_204(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
	}
	func_600(iVar0, iParam1, func_599(iParam0, iParam1));
	func_601(iVar0, iParam1);
}

void func_269(float fParam0)
{
	func_516(10, fParam0);
}

bool func_270()
{
	if (func_23() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 225514697)
	{
		return true;
	}
	return false;
}

void func_271()
{
	animpostfx_stop("PlayerDrunk01");
	Global_1935436->f_12 = 0f;
}

int func_272()
{
	return Global_1310750->f_16037;
}

bool func_273(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

bool func_274(int iParam0, int iParam1)
{
	if (!func_273(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0] && iParam1) != 0;
}

bool func_275(int iParam0)
{
	if (!func_273(iParam0))
	{
		return false;
	}
	if (func_602(64) && func_603(iParam0))
	{
		return true;
	}
	return (*Global_1310750)[iParam0]->f_46;
}

bool func_276(int iParam0)
{
	if (!func_273(iParam0))
	{
		return false;
	}
	return (*Global_1310750)[iParam0]->f_47;
}

void func_277(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_273(&(Global_1310750->f_13321[iParam0])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0];
	force_cleanup_for_thread_with_this_id(Global_1310750->f_13321[iParam0]->f_5, 523);
	(*Global_1310750)[iVar0]->f_48 = 0;
	func_604(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

void func_278(int iParam0, int iParam1)
{
	_journal_write_entry(iParam0);
	if (iParam1 == 1)
	{
		func_279(1);
	}
}

void func_279(bool bParam0)
{
	if (bParam0)
	{
		func_17(&(Global_40.f_12019.f_42), 1);
	}
	else
	{
		func_6(&(Global_40.f_12019.f_42), 1);
	}
}

int func_280(int iParam0)
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

int func_281(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

int func_282(int iParam0)
{
	if (!func_119(iParam0))
	{
		return -1;
	}
	return func_605(iParam0);
}

int func_283(int iParam0, int iParam1)
{
	if (!func_121(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_122(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_190(iParam0, 1399091007))
	{
		func_606(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_284(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_86(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_285(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 < 0)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		return false;
	}
	if (!_0x82fa24c3d3fcd9b7(iParam2, iParam1, uParam0))
	{
		return false;
	}
	return true;
}

bool func_286(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

int func_287(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!_0x42a2f33a1942e865(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_288(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_607(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_609(&Var0, func_608(0));
	}
	if (!func_610(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_287(iVar14);
	return uVar15;
}

bool func_289(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_290(var uParam0)
{
	return func_289(*uParam0, 2);
}

float func_291()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_292(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_293(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_294(int iParam0)
{
	Global_1347477->f_118 = iParam0;
	Global_1347477->f_6 = iParam0;
}

bool func_295(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	return func_611(iParam0, iParam1, &uVar0, &uVar1, &uVar2, bParam2, bParam3, iParam4, bParam5);
}

struct<5> func_296(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_583(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_122(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_346(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_608(bParam1) };
			if (bParam2 && func_612(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_613(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_613(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_614(iParam0, &Var5, 1728382685))
				{
					Var0.f_4 = 1728382685;
				}
				else
				{
					Var0.f_4 = -649335959;
				}
			}
			else
			{
				Var0.f_4 = 1728382685;
			}
			break;
		case -1784221369:
			Var0.f_4 = 1782082944;
			break;
		case -1650247667:
			Var0.f_4 = -813824107;
			Var0 = { func_615(bParam1) };
			switch (func_199(iParam0))
			{
				case 664784405:
					Var0.f_4 = -1150938404;
					break;
				case 2020212423:
					Var0.f_4 = -1756997214;
					break;
				case 874188557:
					Var0.f_4 = -241855024;
					break;
				case -2101244071:
					Var0.f_4 = -268116367;
					break;
			}
			break;
		case -2130996531:
			if (func_616(iParam0, -1823706425))
			{
				Var0 = { func_346(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_616(iParam0, -1483207246))
			{
				Var0 = { func_346(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else if (_inventory_fits_slot_id(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
		default:
			if (_inventory_fits_slot_id(iParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (_inventory_fits_slot_id(iParam0, -833319691))
			{
				Var27.f_9 = -1591664384;
				if (!func_617(Var0, &Var27, bParam1, 0))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var27.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else
			{
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 1328661203);
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

bool func_297(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_618(&iParam0);
	if (!func_121(iParam0, 0))
	{
		return false;
	}
	if (!func_98(0))
	{
		bParam3 = true;
	}
	if (func_619(iParam0) && _0x705be297eebdb95d(iParam0))
	{
		if (_is_weapon_one_handed(iParam0))
		{
			Var0 = { func_608(0) };
			Var4.f_9 = -1591664384;
			if (!func_613(iParam0, &Var0, 1728382685, 0))
			{
				return false;
			}
			else if (func_614(iParam0, &Var4, 1728382685))
			{
				return false;
			}
			if (func_612(iParam0, 1))
			{
				if (!func_613(iParam0, &Var0, -649335959, 0))
				{
					return false;
				}
				else if (func_614(iParam0, &Var4, -649335959))
				{
					return false;
				}
			}
		}
		else if (!func_620(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_621(iParam0, uParam1, bParam3, bParam4);
	if (iVar27 < 0)
	{
		return false;
	}
	else if (iVar27 == 0)
	{
		return true;
	}
	if (bParam3)
	{
		iVar28 = func_419(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = _0xe787f05dfc977bde(func_86(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

struct<16> func_298(int iParam0, struct<4> Param1, int iParam5, int iParam6)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0.f_4 = { Param1 };
	Var0 = { func_346(iParam0, Var0.f_4, iParam5, 1) };
	Var0.f_8 = iParam0;
	Var0.f_9 = iParam6;
	Var0.f_11 = iParam5;
	return Var0;
}

int func_299(int iParam0, var uParam1, bool bParam2)
{
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			if (_cashinventory_transaction_add_item(iVar0, uParam1, 16))
			{
				if (_cashinventory_transaction_checkout(iVar0))
				{
					func_622(iVar0, 1);
					return iVar0;
				}
				_cashinventory_transaction_delete(iVar0);
			}
			else if (_cashinventory_transaction_get_num_of_items(iVar0) == 0)
			{
				_cashinventory_transaction_delete(iVar0);
			}
			func_622(iVar0, 2);
			return -1;
		}
	}
	else if (_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 16))
	{
		func_622(iVar0, 1);
		return iVar0;
	}
	return -1;
}

void func_300(int iParam0, struct<7> Param1)
{
	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1224227)
	{
		if (&Global_1224227->f_1[iVar0] == iParam0)
		{
			if (Global_1224227->f_1[iVar0]->f_1 == 1 || Global_1224227->f_1[iVar0]->f_1 == 5)
			{
				Global_1224227->f_1[iVar0]->f_2 = { Param1 };
			}
			return;
		}
		iVar0++;
	}
}

int func_301(int iParam0, bool bParam1, int iParam2)
{
	if (func_623(255))
	{
		return 1;
	}
	if (!_unlock_is_unlocked(522750908))
	{
		return 0;
	}
	if (!func_624(iParam0))
	{
		return 0;
	}
	if (!func_626(func_625(iParam0), !bParam1, iParam2, 0))
	{
		return 0;
	}
	return 1;
}

int func_302(int iParam0)
{
	if (func_627())
	{
		return 1;
	}
	if (!func_626(func_628(iParam0), 0, 255, 0))
	{
		return 0;
	}
	return 1;
}

int func_303(int iParam0, int iParam1)
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

bool func_304(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { get_entity_forward_vector(iParam0) };
	vVar3 = { vParam1 - get_entity_coords(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > fParam4;
}

void func_305(int iParam0)
{
	if (!func_629(iParam0))
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

bool func_306(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

bool func_307(int iParam0)
{
	return (*Global_1835011)[iParam0]->f_63 & 64512 != 0;
}

void func_308(int iParam0, bool bParam1)
{
	if (!func_306(iParam0))
	{
		return;
	}
	if (func_630((*Global_1835011)[iParam0], 8192))
	{
		bVar0 = true;
	}
	(*Global_1835011)[iParam0]->f_63 = 0;
	if (!bParam1 && bVar0)
	{
		(*Global_1835011)[iParam0]->f_63 |= 2;
		(*Global_1835011)[iParam0]->f_63 |= 8192;
	}
}

void func_309(int iParam0, bool bParam1, int iParam2)
{
	if (!func_117(iParam0))
	{
		return;
	}
	bVar0 = true;
	if (!bParam1)
	{
		bVar0 = does_blip_exist((*Global_1347702)[iParam0]->f_37);
	}
	func_631(&((*Global_1347702)[iParam0]->f_14));
	func_632(&((*Global_1347702)[iParam0]->f_12), 16384);
	func_633(&((*Global_1347702)[iParam0]->f_13), 4096);
	if (bVar0)
	{
		if ((*Global_1347702)[iParam0]->f_12 & 1048576 != 0 && (*Global_1347702)[iParam0]->f_13 & 2048 == 0)
		{
			set_this_script_can_remove_blips_created_by_any_script(true);
			remove_blip(&((*Global_1347702)[iParam0]->f_37));
			if (iParam2 == 1)
			{
				func_635(iParam0, func_634(iParam0), 0, 0);
			}
		}
		else if ((*Global_1347702)[iParam0]->f_18 > -1f)
		{
			set_this_script_can_remove_blips_created_by_any_script(true);
			remove_blip(&((*Global_1347702)[iParam0]->f_37));
			if (iParam2 == 1)
			{
				func_635(iParam0, func_636(iParam0), 0, 0);
			}
		}
		else
		{
			_set_blip_flash_style((*Global_1347702)[iParam0]->f_37, 724623647);
		}
	}
}

bool func_310(int iParam0, int iParam1)
{
	if (func_23() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_311(int iParam0)
{
	if (func_23() != -1)
	{
		if (func_313(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_313(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_312(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_313(iParam0, 65536) && !func_313(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_313(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_313(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_313(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_314(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_315()
{
	return Global_1905944->f_5694;
}

int func_316(int iParam0)
{
	switch (iParam0)
	{
		case -2145890973:
		case -2073130256:
		case -1910795227:
		case -1302821723:
		case -1210546580:
		case -1076508705:
		case -1028170431:
		case -861544272:
		case -575340245:
		case -564099192:
		case -466687768:
		case -292997097:
		case -164963696:
		case 98537260:
		case 111281960:
		case 386506078:
		case 510312109:
		case 729471181:
		case 831859211:
		case 1095117488:
		case 1104697660:
		case 1205982615:
		case 1459778951:
		case 1582986780:
		case 1784941179:
			return 166398389;
		case -1797625440:
		case -1790499186:
		case -1550768676:
		case -1414989025:
		case -1211566332:
		case -1170118274:
		case -1134449699:
		case -229688157:
		case 252669332:
		case 480688259:
		case 545068538:
		case 759906147:
		case 846659001:
		case 989669666:
		case 1458540991:
		case 1464167925:
		case 1465438313:
			return -467118139;
		case -1854059305:
		case -1451393780:
		case -930822792:
		case -593056309:
		case -407730502:
		case 1502581273:
			return 524620511;
		case -2116748615:
		case -2022921611:
		case -711779521:
		case 703712157:
		case 1493541632:
		case 1538187374:
		case 1867262572:
			return -1768405210;
		case -1568716381:
		case -753902995:
		case 40345436:
			return -546209848;
		case -1981561472:
		case -1884490195:
		case -1553593715:
		case -1182983171:
		case -452224784:
		case -300867788:
		case -243188398:
		case 1520661:
		case 122748261:
		case 264156159:
		case 463643368:
		case 513249462:
		case 697075200:
		case 706485280:
		case 1860580756:
			return 880496229;
		case -2063183075:
		case -2011226991:
		case -466054788:
		case -166054593:
		case 723190474:
		case 2023522846:
		case 2079703102:
			return 2058993648;
		case -50684386:
		case 195700131:
		case 556355544:
		case 1556473961:
			return -1535978095;
		case -2021043433:
		case -1963605336:
		case -1098441944:
		case 1110710183:
		case 1755643085:
			return -151108755;
		case 1007418994:
		case 1751700893:
		case 2028722809:
			return 1663095412;
		case -1003616053:
		case -541762431:
		case 1416324601:
		case 2105463796:
			return -348823399;
		case 41707457:
		case 134747314:
		case 490159652:
		case 543892122:
			return -1240620284;
		case -1797450568:
		case 1265966684:
		case 1746830155:
			return 532201260;
		case -1892280447:
		case -1598866821:
		case -1295720802:
		case -1143398950:
		case -1124266369:
		case -885451903:
		case -829273561:
		case 90264823:
		case 730092646:
		case 1654513481:
			return 1610737930;
		case -2037578922:
			return -1277667710;
	}
	return 0;
}

bool func_317(int iParam0)
{
	if (func_122(iParam0) == 2085633299 && _0x245d07651b1d183b(iParam0, 16777216))
	{
		return true;
	}
	return false;
}

void func_318(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

int func_319(int iParam0)
{
	iVar0 = func_637(iParam0);
	if (does_entity_exist(iVar0) && is_ped_injured(iVar0))
	{
		return iVar0;
	}
	return 0;
}

int func_320(int iParam0, int iParam1)
{
	Var4.f_1 = 10;
	func_638(&Var4, 1356624740);
	return func_639(iParam0, &Var4, &uVar0, iParam1);
}

bool func_321(int iParam0)
{
	if (!func_121(iParam0, 0))
	{
		return false;
	}
	if (func_190(iParam0, -887064662))
	{
		return true;
	}
	return func_640(iParam0);
}

int func_322(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 1)
	{
		iVar0 = 3;
	}
	else
	{
		iVar1 = _get_ped_quality(iParam0);
		switch (iVar1)
		{
			case 0:
				iVar0 = 0;
				break;
			case 1:
				iVar0 = 1;
				break;
			case -1:
			case 2:
				iVar0 = 2;
				break;
		}
	}
	return iVar0;
}

bool func_323(int iParam0)
{
	switch (get_entity_model(iParam0))
	{
		case -2116748615:
		case -2037578922:
		case -1981561472:
		case -1910795227:
		case -1550768676:
		case -1302821723:
		case -1210546580:
		case -1182983171:
		case -1028170431:
		case -930822792:
		case -452224784:
		case -292997097:
		case -243188398:
		case 1520661:
		case 41707457:
		case 98537260:
		case 111281960:
		case 122748261:
		case 264156159:
		case 490159652:
		case 510312109:
		case 513249462:
		case 674267496:
		case 703712157:
		case 706485280:
		case 729471181:
		case 989669666:
		case 1465438313:
		case 1493541632:
		case 1502581273:
		case 1582986780:
		case 1746830155:
		case 1784941179:
		case 1860580756:
		case 1867262572:
		case 2105463796:
			return true;
		default:
			break;
	}
	return false;
}

bool func_324(int iParam0)
{
	if (!func_121(iParam0, 0))
	{
	}
	if (func_190(iParam0, 1286414894))
	{
		return true;
	}
	return false;
}

int func_325(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (!is_entity_a_ped(iParam0))
	{
		return 0;
	}
	iVar0 = get_ped_index_from_entity_index(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_641(iVar0, &uVar2, &uVar3, &iVar1, &uVar4);
	if (func_642(&uVar5, iVar0, iVar1, uVar2))
	{
	}
	return uVar5;
}

int func_326(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	iVar0 = _0x31fef6a20f00b963(iParam0);
	if (iVar0 == 0)
	{
		if (is_entity_a_ped(iParam0))
		{
			iVar1 = get_ped_index_from_entity_index(iParam0);
			iVar0 = func_643(iVar1);
		}
	}
	return iVar0;
}

int func_327(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!bParam4)
	{
		iParam1 = func_644(iParam0, iParam1, 1, 1, -142743235);
	}
	else
	{
		iVar0 = func_645(0);
		if (does_entity_exist(iVar0))
		{
			func_646(&iVar0, iParam0, &iParam1, bParam2, iParam3);
		}
	}
	if (iParam1 <= 0)
	{
		return 1;
	}
	return func_647(iParam0, iParam1, bParam2, iParam3);
}

bool func_328(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

int func_329()
{
	return Global_1897952->f_41;
}

bool func_330(int iParam0)
{
	iVar0 = func_282(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_331(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_70(iParam0))
	{
		return;
	}
	iVar0 = func_163(iParam0);
	func_179(iVar0, bParam1);
}

void func_332(var uParam0, char* sParam1)
{
	if (func_70(*uParam0))
	{
		iVar0 = func_163(*uParam0);
		if (_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
		{
			_uiprompt_set_tag((*Global_1945938)[iVar0]->f_3, sParam1);
		}
	}
}

bool func_333(var uParam0)
{
	if (_does_scenario_point_exist(uParam0[5]))
	{
		if (get_number_of_fires_in_range(_get_scenario_point_coords(uParam0[5], true), 1.5f) > 0)
		{
			return false;
		}
		iVar0 = _get_entity_scenario_point_is_attached_to(uParam0[5]);
		if (does_entity_exist(iVar0))
		{
			if (is_entity_on_fire(iVar0))
			{
				return false;
			}
		}
	}
	return true;
}

bool func_334(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_648(bParam1, bParam2, bParam3);
	}
	if (Global_1572887->f_12 != -1)
	{
		if (iParam0 == Global_1225639->f_10)
		{
			if (!Global_1225639->f_11)
			{
				return false;
			}
		}
		else if (!does_entity_exist(get_player_ped(iParam0)))
		{
			return false;
		}
	}
	else if (!does_entity_exist(get_player_ped(iParam0)))
	{
		return false;
	}
	if (_0xad401c63158acbaa(iParam0))
	{
		_0xcbfb4951f2e3934c(iParam0, &Var0);
		if ((bParam3 || Var0.f_10 > 0) || get_player_wanted_level(iParam0) > 0)
		{
			return true;
		}
	}
	else if (bParam2 && !_0x148e7ac8141c9e64(iParam0) == 1370593166)
	{
		return false;
	}
	iVar17 = 0;
	while (iVar17 < 24)
	{
		if (_0x532c5fddb986ee5c(iParam0, iVar17, &Var18))
		{
			if (Var18.f_10 && (bParam3 || _0xdaefdfdb2aeece37(Var18, Var18.f_7) > 0))
			{
				return true;
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
				return true;
			}
		}
	}
	return false;
}

bool func_335()
{
	fVar0 = get_disabled_control_normal(0, 1301263553);
	fVar1 = get_disabled_control_normal(0, -39308912);
	fVar2 = ((fVar0 * fVar0) + (fVar1 * fVar1));
	if (fVar2 >= (0.9f * 0.9f))
	{
		return true;
	}
	return false;
}

bool func_336(var uParam0, float fParam1)
{
	if (func_29(uParam0, fParam1))
	{
		func_337(uParam0);
		return true;
	}
	return false;
}

void func_337(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_338(int iParam0, bool bParam1)
{
	if (bParam1 && !func_70(iParam0))
	{
		return false;
	}
	iVar0 = func_163(iParam0);
	if (!_uiprompt_has_hold_mode((*Global_1945938)[iVar0]->f_3))
	{
		return is_control_pressed(2, (*Global_1945938)[iVar0]->f_4);
	}
	return _uiprompt_is_hold_mode_running((*Global_1945938)[iVar0]->f_3);
}

bool func_339(var uParam0)
{
	uParam0->f_155 = func_61();
	iVar0 = func_36(uParam0);
	if ((((uParam0->f_156 == -1 || iVar0 == uParam0->f_156) && (uParam0->f_157 == 0 || func_649(uParam0->f_155, uParam0->f_157))) || (uParam0->f_156 == -1 && func_649(uParam0->f_155, uParam0->f_157))) && !(_0xc488b8c0e52560d8(Global_35) || _0x2dc0e8dcbd3546e9(Global_35)))
	{
		uParam0->f_154 = iVar0;
		return true;
	}
	return false;
}

bool func_340(var uParam0, int iParam1)
{
	if (iParam1 != -1)
	{
		if (iParam1 != uParam0->f_158)
		{
			if (!does_entity_exist(uParam0->f_159))
			{
				uParam0->f_159 = _get_scenario_point_entity(uParam0[0], "p_boiler02x");
				set_entity_invincible(uParam0->f_159, true);
			}
			if (uParam0->f_158 != -1)
			{
				if (_0x6ef4e31b4d5d2da0(uParam0[uParam0->f_158], "p_boiler02x"))
				{
					uParam0->f_158 = -1;
				}
			}
			if (does_entity_exist(uParam0->f_159))
			{
				if (_0x8360c47380b6f351(uParam0[iParam1], uParam0->f_159, "p_boiler02x", 1))
				{
					uParam0->f_158 = iParam1;
					return true;
				}
			}
			return false;
		}
		else
		{
			return true;
		}
	}
	return false;
}

void func_341(var uParam0)
{
	iVar0 = _0xc22aa08a8adb87d4(Global_35);
	if (iVar0 == -518407211)
	{
		if (func_85(uParam0) && (get_game_timer() - uParam0->f_196) > 500)
		{
			func_88(653141085, 2f);
			uParam0->f_196 = get_game_timer();
		}
	}
	else if (iVar0 == -1433449364)
	{
		if (func_85(uParam0) && (get_game_timer() - uParam0->f_196) > 500)
		{
			func_88(1335077954, 2f);
			uParam0->f_196 = get_game_timer();
		}
	}
}

bool func_342(var uParam0)
{
	if (uParam0->f_155 == 6 && func_60(1))
	{
		return true;
	}
	else
	{
		switch (uParam0->f_155)
		{
			case 1:
				func_88(-73132177, 1086324736);
				break;
		}
	}
	return false;
}

bool func_343(var uParam0, var uParam1, char* sParam2, char* sParam3, char* sParam4)
{
	_0x6d07b371e9439019(Global_35);
	return _0x79197f7d2bb5e73a(uParam0, uParam1, sParam2, sParam3, sParam4, 0);
}

bool func_344(var uParam0)
{
	if (uParam0->f_155 == 6 && func_60(1))
	{
		return true;
	}
	else
	{
		switch (uParam0->f_155)
		{
			case 1:
				func_88(-73132177, 1086324736);
				break;
			case 8:
				func_88(-1890302844, 0.5f);
				break;
			case 7:
				func_88(36116464, 0.5f);
				break;
		}
	}
	return false;
}

bool func_345(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_650(iParam0))
	{
		return false;
	}
	if (iParam1 <= 0)
	{
		return false;
	}
	if (!func_98(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!_0xb4158c8c9a3b5dce(func_86(bParam4), iParam0, iParam1, iParam2))
	{
		return false;
	}
	return true;
}

struct<4> func_346(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_121(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_86(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_347(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_650(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_617(*uParam1, &Var0, bParam6, 0))
	{
		return false;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!func_98(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_86(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

int func_348(int iParam0)
{
	if (func_190(iParam0, 1573112293))
	{
		return func_651(iParam0);
	}
	switch (func_199(iParam0))
	{
		case -77448735:
			if (func_652(iParam0))
			{
				return func_651(iParam0);
			}
			break;
		case -1393202694:
		case 2041469314:
			return func_651(iParam0);
		case 1802292908:
			return func_653();
		case -2061583405:
		case -1719060085:
		case 81053684:
			return func_654();
		case -525676072:
			return func_654();
		case 1779021115:
			if (func_121(iParam0, 0))
			{
				if (iParam0 == -1016714371)
				{
					return func_655();
				}
			}
			return func_656();
		case -1823706425:
			return func_657();
		case -854348463:
			return func_658();
		default:
			if (func_121(iParam0, 0))
			{
				if (func_190(iParam0, 1192444843) || func_190(iParam0, -1540973036))
				{
					return func_659();
				}
				else if (func_190(iParam0, 1919582297))
				{
					return func_660();
				}
				else if (func_190(iParam0, 1147021565))
				{
					return func_661();
				}
				switch (iParam0)
				{
					case -2035110427:
					case -1448210800:
						return func_662();
					case -1516555556:
						return func_663();
				}
			}
			return func_664();
	}
	return func_664();
}

bool func_349(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	func_665(iParam1);
	if (!uParam0->f_1)
	{
		*uParam0 = is_ped_dead_or_dying(Global_35, true);
		uParam0->f_1 = 1;
	}
	if (Global_1935630->f_12 || *uParam0)
	{
		return false;
	}
	if (func_23() == 0)
	{
		if (Global_1935496->f_7 & 131072 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 1 == 0)
	{
		if (Global_1935496->f_7 & 1024 != 0)
		{
			return false;
		}
	}
	if (Global_1935630->f_22)
	{
		return false;
	}
	if (iParam3 & 2 == 0)
	{
		if (Global_1935496->f_7 & 32 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 4 == 0)
	{
		if (Global_1935496->f_7 & 4096 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 8 == 0)
	{
		if (Global_1935496->f_7 & 512 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 512 == 0)
	{
		if (!uParam0->f_3)
		{
			uParam0->f_2 = func_666(bParam2);
			uParam0->f_3 = 1;
		}
		if (!uParam0->f_2)
		{
			return false;
		}
	}
	if (iParam3 & 262144 == 0)
	{
		if (!uParam0->f_5)
		{
			uParam0->f_4 = func_667(bParam2);
			uParam0->f_5 = 1;
		}
		if (!uParam0->f_4)
		{
			return false;
		}
	}
	if (iParam3 & 64 == 0)
	{
		if (!uParam0->f_7)
		{
			uParam0->f_6 = func_668(bParam2, iParam3, 1);
			uParam0->f_7 = 1;
		}
		if (!uParam0->f_6)
		{
			return false;
		}
	}
	if (iParam3 & 128 == 0)
	{
		if (!uParam0->f_11)
		{
			uParam0->f_10 = func_669(Global_35, 1868526510);
			uParam0->f_11 = 1;
		}
		if (!uParam0->f_9)
		{
			uParam0->f_8 = func_670(Global_35);
			uParam0->f_9 = 1;
		}
		if (!uParam0->f_13)
		{
			uParam0->f_12 = does_entity_exist(Global_1935630->f_40);
			uParam0->f_13 = 1;
		}
		if ((uParam0->f_10 || uParam0->f_12) || uParam0->f_8)
		{
			if (bParam2)
			{
				func_201("ITEM_UNUSABLE_FULLY_MOUNTED", 10000, 0, 0, 0, 1);
			}
			return false;
		}
	}
	if (iParam3 & 8388608 == 0)
	{
		if (!uParam0->f_11)
		{
			uParam0->f_10 = func_669(Global_35, 1868526510);
			uParam0->f_11 = 1;
		}
		if (!uParam0->f_9)
		{
			uParam0->f_8 = func_670(Global_35);
			uParam0->f_9 = 1;
		}
		if (uParam0->f_10 || uParam0->f_8)
		{
			if (!uParam0->f_15)
			{
				uParam0->f_14 = is_ped_swimming(Global_1935630->f_40);
				uParam0->f_15 = 1;
			}
			if (uParam0->f_14)
			{
				return false;
			}
		}
	}
	if (iParam3 & 16 == 0)
	{
		if (!uParam0->f_9)
		{
			uParam0->f_8 = func_670(Global_35);
			uParam0->f_9 = 1;
		}
		if (!uParam0->f_13)
		{
			uParam0->f_12 = does_entity_exist(Global_1935630->f_40);
			uParam0->f_13 = 1;
		}
		if (uParam0->f_8)
		{
			if (uParam0->f_12)
			{
				if (!uParam0->f_17)
				{
					uParam0->f_16 = func_671(Global_1935630->f_40, 1);
					uParam0->f_17 = 1;
				}
				if (!uParam0->f_16)
				{
					if (bParam2)
					{
						func_201("ITEM_UNUSABLE_HORSE_SPEED", 10000, 0, 0, 0, 1);
					}
					return false;
				}
			}
		}
	}
	if (iParam3 & 256 == 0)
	{
		if (Global_1935496->f_7 & 8192 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 1024 == 0)
	{
		if (Global_1935496->f_7 & 65536 != 0)
		{
			if (bParam2)
			{
				func_201("ITEM_UNUSABLE_CINEMATIC_CAM", 10000, 0, 0, 0, 1);
			}
			return false;
		}
	}
	if (iParam3 & 2048 == 0)
	{
		if (Global_1935496->f_7 & 32768 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 4096 == 0)
	{
		if (Global_1935496->f_7 & 16384 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 8192 == 0)
	{
		if (Global_1935496->f_7 & 16 == 0)
		{
			return false;
		}
	}
	if (iParam3 & 16384 == 0)
	{
		if (Global_1935496->f_7 & 256 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 32768 == 0)
	{
		if (!uParam0->f_19)
		{
			uParam0->f_18 = func_182();
			uParam0->f_19 = 1;
		}
		if (uParam0->f_18)
		{
			if (bParam2)
			{
				func_201("ITEM_UNUSABLE_SATCHEL_OPEN", 10000, 0, 0, 0, 1);
			}
			return false;
		}
	}
	if (iParam3 & 131072 == 0)
	{
		if (Global_1935496->f_7 & 524288 == 0)
		{
			return false;
		}
	}
	if (iParam3 & 65536 == 0)
	{
		if (Global_1935496->f_7 & 262144 == 0)
		{
			return false;
		}
	}
	if (iParam3 & 524288 == 0)
	{
		if (Global_1935496->f_7 & 2097152 == 0)
		{
			return false;
		}
	}
	if (iParam3 & 1048576 == 0)
	{
		if (Global_1935496->f_7 & 8388608 == 0)
		{
			return false;
		}
	}
	if (iParam3 & 2097152 == 0)
	{
		if (Global_1935496->f_7 & 33554432 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 4194304 == 0)
	{
		if (Global_1935496->f_7 & 67108864 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 16777216 == 0)
	{
		if (Global_1935496->f_7 & 134217728 == 0)
		{
			return false;
		}
	}
	if (Global_1935496->f_7 & 17825988 != 0)
	{
		return false;
	}
	return true;
}

bool func_350()
{
	if (ped_has_use_scenario_task(Global_35))
	{
		iVar0 = _get_scenario_point_type_ped_is_using(Global_35);
		iVar1 = iVar0;
		if ((((iVar1 != -1241981548 && iVar1 != 1020517461) && iVar1 != 1259174088) && iVar1 != -1075420544) && iVar1 != -1767895052)
		{
			return true;
		}
	}
	return false;
}

bool func_351(bool bParam0)
{
	if (bParam0)
	{
		return Global_1914319->f_17370;
	}
	return (Global_1914319->f_17370 || Global_1914319->f_18996.f_1);
}

bool func_352(bool bParam0, bool bParam1)
{
	if (func_23() == 0)
	{
		return _databinding_read_data_bool(Global_1935689->f_2439.f_38.f_19);
	}
	if (func_672())
	{
		if (bParam0)
		{
			func_201("CAMP_UNUSABLE_HIDEOUT", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_140(Global_35))
	{
		if (bParam0)
		{
			func_201("CAMP_UNUSABLE_PICKUP_ITEM", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (_0x7fc84e85d98f063d(Global_35))
	{
		if (bParam0)
		{
			func_201("CAMP_UNUSABLE_HORSE_INTERACTION", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_673())
	{
		if (bParam0)
		{
			if (func_435() != 8 && func_435() != 7)
			{
				func_201("CAMP_UNUSABLE_CARAVAN_CAMP", 10000, 0, 0, 0, 1);
			}
			else
			{
				func_201("CAMP_UNUSABLE_BEECHERS_HOPE", 10000, 0, 0, 0, 1);
			}
		}
		return false;
	}
	if (is_ped_on_mount(Global_35))
	{
		iVar0 = get_mount(Global_35);
		if (does_entity_exist(iVar0))
		{
			if (!is_entity_dead(iVar0))
			{
				if (is_entity_in_air(iVar0, 1) || is_ped_swimming(iVar0))
				{
					return false;
				}
			}
		}
	}
	else if (is_entity_in_air(Global_35, 1) || is_ped_swimming(Global_35))
	{
		return false;
	}
	if (is_interior_scene())
	{
		if (bParam0)
		{
			func_201("CAMP_UNUSABLE_IN_TOWN", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (is_ped_in_combat(Global_35, 0))
	{
		if (bParam0)
		{
			func_201("CAMP_UNUSABLE_IN_COMBAT", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_334(player_id(), 1, 1, 0))
	{
		if (bParam0)
		{
			func_201("CAMP_UNUSABLE_WANTED", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (_0x26934083d3f2579c(player_id()))
	{
		if (bParam0)
		{
			func_201("CAMP_UNUSABLE_CRIME", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (bParam1)
	{
		if (is_ped_active_in_scenario(Global_35, 1))
		{
			if (bParam0)
			{
				func_201("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, 1);
			}
			return false;
		}
	}
	if (func_674(Global_1393447, 16))
	{
		if (bParam0)
		{
			func_201("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_675())
	{
		if (bParam0)
		{
			func_201("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_676(-608558181) || _get_number_of_references_of_script_with_name_hash(-608558181) > 0)
	{
		if (bParam0)
		{
			func_201("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (is_minigame_in_progress())
	{
		if (bParam0)
		{
			func_201("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if ((((is_ped_in_any_vehicle(Global_35, false) || (!is_ped_ragdoll(Global_35) && is_ped_on_vehicle(Global_35, false))) || is_ped_in_any_boat(Global_35)) || is_player_riding_train(player_id())) || is_ped_jacking(Global_35))
	{
		if (bParam0)
		{
			func_201("CAMP_UNUSABLE_ON_VEHICLE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_18(0, 1, 1) && !func_677(1))
	{
		if (bParam0)
		{
			if (func_166(15))
			{
				func_201("CAMP_UNUSABLE_HUNTING", 10000, 0, 0, 0, 1);
			}
			else
			{
				func_201("CAMP_UNUSABLE_MISSIONS", 10000, 0, 0, 0, 1);
			}
		}
		return false;
	}
	if (func_329() == 8)
	{
		return false;
	}
	if (_get_number_of_references_of_script_with_name_hash(-92416669) > 0)
	{
		if (bParam0)
		{
			func_201("CAMP_UNUSABLE_CAMERA", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_678(8388608))
	{
		if (bParam0)
		{
			func_201("CAMP_UNUSABLE_ALREADY_SET_UP", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_56(8388608))
	{
		if (bParam0)
		{
			func_201("CAMP_UNUSABLE_ALREADY_IN_A_CAMP", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_679(func_22()))
	{
		if (bParam0)
		{
			func_201("CAMP_UNUSABLE_LOCKDOWN", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (((func_5() || func_680(func_22()) == 9) || func_681(func_22())) && !func_682())
	{
		if (bParam0)
		{
			func_201("CAMP_UNUSABLE_IN_TOWN", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_683(Global_35))
	{
		if (bParam0)
		{
			func_201("CAMP_UNUSABLE_LOOTING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_684())
	{
		if (bParam0)
		{
			func_201("CAMP_UNUSABLE_IN_TOWN", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (get_distance_between_coords(Global_36, Global_1935496->f_131, true) > 2f)
	{
		Global_1935496->f_128 = { _0x6de03bcc15e81710(Global_36) };
		Global_1935496->f_131 = { Global_36 };
	}
	if (func_685(Global_35, Global_1935496->f_128, 4f, 1, 1))
	{
		if (bParam0)
		{
			func_201("CAMP_UNUSABLE_TRAIN", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_686(Global_36, 5f))
	{
		if (bParam0)
		{
			func_201("CAMP_UNUSABLE_NEAR_MISSION", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (vdist2(Global_36, (*Global_1347702)[74]->f_24) < 144f && _get_number_of_references_of_script_with_name_hash(1822247127) > 0)
	{
		return false;
	}
	return true;
}

void func_353(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		func_278(iParam0, 0);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (&Global_40.f_11922[iVar0] == 0)
			{
				Global_40.f_11922[iVar0] = iParam0;
				return;
			}
			iVar0++;
		}
		func_108(1);
		Global_40.f_11922[0] = iParam0;
	}
}

void func_354(int iParam0, int iParam1)
{
	if (!func_119(iParam0))
	{
		return;
	}
	func_687(iParam0, iParam1);
}

bool func_355(int iParam0)
{
	return Global_40.f_490.f_402[iParam0] & 1 != 0;
}

bool func_356(int iParam0)
{
	if (func_23() != -1)
	{
		return false;
	}
	return func_120((*Global_1347702)[iParam0]->f_15, 1);
}

bool func_357(int iParam0)
{
	return (Global_40.f_12004.f_6 && iParam0) != 0;
}

void func_358(int iParam0)
{
	Global_40.f_12019.f_26 = (Global_40.f_12019.f_26 || iParam0);
}

void func_359(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_264() && (func_451(38) || func_356(38)))
			{
				sVar1 = "COL_CC_INTRO";
				iVar4 = get_hash_key("BLIP_RC_PHINEAS");
			}
			else
			{
				sVar1 = "COL_CC_INTRO_PRE";
				iVar4 = get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD");
			}
			iVar6 = 38816757;
			break;
		case 39:
			sVar0 = "COL_DB_TITLE";
			sVar3 = "COL_DB_FOUND";
			iVar7 = -440187297;
			if (func_264() && (func_451(39) || func_356(39)))
			{
				sVar1 = "COL_DB_INTRO";
				iVar4 = 1162303770;
			}
			else
			{
				sVar1 = "COL_DB_INTRO_PRE";
				iVar4 = get_hash_key("BLIP_RC_COLLECTABLE_DINOBONES");
			}
			iVar6 = -1223580455;
			break;
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			sVar0 = "COL_EX_TITLE";
			sVar3 = "COL_EX_ITEMS_COLLECTED";
			sVar1 = "COL_EX_INTRO";
			iVar7 = -1531394072;
			iVar4 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar6 = 911890963;
			break;
		case 41:
			sVar0 = "COL_LF_TITLE";
			sVar3 = "COL_LF_CAUGHT";
			sVar1 = "COL_LF_INTRO";
			iVar7 = 1995362678;
			iVar4 = -273196610;
			iVar6 = -1666208710;
			break;
		case 49:
			sVar0 = "COL_RC_TITLE";
			sVar3 = "COL_RC_FOUND";
			iVar7 = 2103522376;
			if (func_264() && (func_451(49) || func_356(49)))
			{
				sVar1 = "COL_RC_INTRO";
				iVar4 = -781551276;
			}
			else
			{
				sVar1 = "COL_RC_INTRO_PRE";
				iVar4 = get_hash_key("BLIP_RC_COLLECTABLE_ROCKFACES");
			}
			iVar6 = -170865073;
			break;
		case 51:
			sVar0 = "COL_TX_TITLE";
			sVar3 = "COL_TX_CARCASS_COLLECTED";
			sVar1 = "COL_TX_INTRO";
			iVar7 = 678508515;
			iVar4 = 1986498931;
			iVar6 = -1424865411;
			break;
	}
	if (iParam5 == 2)
	{
		sVar0 = "MISSION_COMPLETE";
		iVar4 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar5 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar5 = get_hash_key("toast_log_blips");
		sVar1 = "COL_ALL_LOG_UPDATED";
	}
	sVar2 = "COL_CTX_PLAYER_LOG";
	if (iVar7 == -2076669067)
	{
		if (func_264() && (func_451(38) || func_356(38)))
		{
			iVar6 = 38816757;
		}
		else
		{
			iVar6 = 578982838;
		}
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 0)
		{
			iVar5 = iParam1;
			iVar4 = iParam2;
		}
		if (iParam5 == 2)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			iParam3 = 12;
			iParam4 = 12;
			func_688(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_688(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_690(_create_var_string(2, sVar0), _create_var_string(2, func_689(func_449(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_688(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_688(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_264() && (func_451(39) || func_356(39)))
		{
			iVar6 = -1223580455;
		}
		else
		{
			iVar6 = 349797279;
		}
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_688(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_688(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_264() && (func_451(49) || func_356(49)))
		{
			iVar6 = -170865073;
		}
		else
		{
			iVar6 = 1974744712;
		}
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_688(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_688(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_688(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_688(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

void func_360(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_264() && (func_451(38) || func_356(38)))
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_02";
				sVar5 = "COL_CC_INTRO";
				iVar11 = get_hash_key("BLIP_RC_PHINEAS");
				iVar13 = 38816757;
			}
			else
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_01";
				sVar5 = "COL_CC_INTRO_PRE";
				iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD");
				iVar13 = 578982838;
			}
			sVar4 = "COL_CC_TITLE";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = 12;
			iVar14 = -2076669067;
			break;
		case 39:
			if (func_264() && (func_451(39) || func_356(39)))
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_02";
				sVar5 = "COL_DB_INTRO";
				iVar9 = 3;
				iVar11 = 1162303770;
				iVar13 = -1223580455;
			}
			else
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_01";
				sVar5 = "COL_DB_INTRO_PRE";
				iVar9 = 1;
				iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_DINOBONES");
				iVar13 = 349797279;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_DB_TITLE";
			vVar6 = { 122.7758f, -185.4978f, 116.4383f };
			iVar10 = 30;
			iVar14 = -440187297;
			break;
		case 43:
			if (iParam3 == -1791518714)
			{
				sVar0 = "MISSION_RCEXO1";
				sVar3 = "RCEXO1_DESC";
				iVar10 = 30;
			}
			else if (iParam3 == -2087881550)
			{
				sVar0 = "MISSION_RCEXO2";
				sVar3 = "RCEXO2_DESC";
				iVar10 = 37;
			}
			else if (iParam3 == 1908068621)
			{
				sVar0 = "MISSION_RCEXO3";
				sVar3 = "RCEXO3_DESC";
				iVar10 = 40;
			}
			else if (iParam3 == 1611247019)
			{
				sVar0 = "MISSION_RCEXO4";
				sVar3 = "RCEXO4_DESC";
				iVar10 = 50;
			}
			else if (iParam3 == 1319635688)
			{
				sVar0 = "MISSION_RCEXO5";
				sVar3 = "RCEXO5_DESC";
				iVar10 = 25;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_EX_TITLE";
			sVar5 = "COL_EX_INTRO";
			vVar6 = { 2585.668f, -1009.616f, 44.97972f };
			iVar9 = func_691(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963;
			break;
		case 41:
			if (func_264() && (func_451(41) || func_356(41)))
			{
				sVar0 = "MISSION_RCFSH2";
			}
			else
			{
				sVar0 = "MISSION_RCFSH1";
			}
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_RARE_FISH_01";
			sVar4 = "COL_LF_TITLE";
			sVar5 = "COL_LF_INTRO";
			vVar6 = { 337.3075f, -684.5404f, 41.8362f };
			iVar9 = 13;
			iVar14 = 1995362678;
			iVar11 = -273196610;
			iVar13 = -1666208710;
			break;
		case 49:
			if (func_264() && (func_451(49) || func_356(49)))
			{
				sVar0 = "MISSION_RCRKF2";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_02";
				sVar5 = "COL_RC_INTRO";
				iVar9 = 3;
				iVar11 = -781551276;
				iVar13 = -170865073;
			}
			else
			{
				sVar0 = "MISSION_RCRKF1";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_01";
				sVar5 = "COL_RC_INTRO_PRE";
				iVar9 = 1;
				iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_ROCKFACES");
				iVar13 = 1974744712;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_RC_TITLE";
			vVar6 = { -2178.646f, -245.6886f, 191.1569f };
			iVar10 = 10;
			iVar14 = 2103522376;
			break;
		case 51:
			sVar0 = "MISSION_RCTAX1";
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_TAXIDERMY_01";
			sVar4 = "COL_TX_TITLE";
			sVar5 = "COL_TX_INTRO";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = func_691(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931;
			iVar13 = -1424865411;
			break;
	}
	sVar2 = func_692(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar12 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar12 = get_hash_key("toast_log_blips");
	}
	if (func_693(iParam0, iVar13, iVar14))
	{
	}
	if (func_694(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_695(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_696(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_697(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_698(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_361(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

bool func_362(int iParam0)
{
	return (Global_40.f_12004.f_1 && iParam0) != 0;
}

void func_363(int iParam0)
{
	Global_40.f_12019.f_3 = (Global_40.f_12019.f_3 || iParam0);
}

void func_364(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

bool func_365(int iParam0)
{
	return (Global_40.f_12004.f_3 && iParam0) != 0;
}

void func_366(int iParam0)
{
	Global_40.f_12019.f_4 = (Global_40.f_12019.f_4 || iParam0);
}

void func_367(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

bool func_368(int iParam0)
{
	return (Global_40.f_12004.f_5 && iParam0) != 0;
}

void func_369(int iParam0)
{
	Global_40.f_12019.f_2 = (Global_40.f_12019.f_2 || iParam0);
}

void func_370(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

bool func_371(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)
{
	switch (func_372(iParam0, -949239683))
	{
		case 1712126263:
			if (!bParam1)
			{
				iVar0 = 1589555562;
				if (bParam2)
				{
					iVar0 = -1424266966;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case -1229959999:
			if (!bParam1)
			{
				iVar0 = 1159762194;
				if (bParam2)
				{
					iVar0 = -1791047090;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case -1050374492:
			if (!bParam1)
			{
				iVar0 = 343713021;
				if (bParam2)
				{
					iVar0 = 760057945;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 1513351077:
			if (!bParam1)
			{
				iVar0 = 889797228;
				if (bParam2)
				{
					iVar0 = -1043439814;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case -1565009253:
			if (!bParam1)
			{
				iVar0 = 1254219723;
				if (bParam2)
				{
					iVar0 = -2077441721;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 733893097:
			if (!bParam1)
			{
				iVar0 = 436157482;
				if (bParam2)
				{
					iVar0 = 1972630951;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case -164980960:
			if (!bParam1)
			{
				iVar0 = -138141811;
				if (bParam2)
				{
					iVar0 = 2000759837;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 1894156335:
			if (!bParam1)
			{
				iVar0 = 1801769345;
				if (bParam2)
				{
					iVar0 = 374699583;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 871191033:
			if (!bParam1)
			{
				iVar0 = 1290994194;
				if (bParam2)
				{
					iVar0 = -59421711;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case -1273369295:
			if (!bParam1)
			{
				iVar0 = -27851152;
				if (bParam2)
				{
					iVar0 = -1340223099;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 82200319:
			if (!bParam1)
			{
				iVar0 = -1216929452;
				if (bParam2)
				{
					iVar0 = -1140851507;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case -873135685:
			if (!bParam1)
			{
				iVar0 = -1418730365;
				if (bParam2)
				{
					iVar0 = -1570312122;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 24248412:
			if (!bParam1)
			{
				iVar0 = 1014486005;
				if (bParam2)
				{
					iVar0 = 416212934;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 10252101:
			if (!bParam1)
			{
				iVar0 = -1246302402;
				if (bParam2)
				{
					iVar0 = -487508500;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
	}
	return false;
}

int func_372(int iParam0, int iParam1)
{
	if (_item_database_fillout_tag_data(iParam0, &Var0, &iVar41, 20))
	{
		iVar42 = 0;
		while (iVar42 < iVar41)
		{
			if (Var0[iVar42]->f_1 == iParam1)
			{
				return &(Var0[iVar42]);
			}
			iVar42++;
		}
	}
	return 0;
}

void func_373(int iParam0)
{
	iVar0 = 1428936325;
	switch (func_699())
	{
		case 0:
			iVar0 = 1428936325;
			break;
		case 3:
			iVar0 = 1791580586;
			break;
		case 1:
			iVar0 = 1731192422;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_700(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_701(iParam0, 1);
		func_226(iParam0, 1, 0, -142743235, 0);
	}
}

bool func_374()
{
	return 1 == Global_40.f_7748.f_3;
}

bool func_375(var uParam0)
{
	if (!does_entity_exist(*uParam0) || is_entity_dead(*uParam0))
	{
		return false;
	}
	if (func_702(*uParam0, -1725579161, 0))
	{
		return true;
	}
	return false;
}

void func_376(int iParam0)
{
	iVar0 = 16939881;
	switch (func_699())
	{
		case 0:
			iVar0 = 16939881;
			break;
		case 1:
			iVar0 = -1165614444;
			break;
		case 3:
			iVar0 = 968591133;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_700(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_701(iParam0, 1);
		func_226(iParam0, 1, 0, -142743235, 0);
	}
}

void func_377(int iParam0, bool bParam1)
{
	iVar0 = -45077177;
	switch (func_699())
	{
		case 0:
			if (bParam1)
			{
				iVar0 = -2137817968;
			}
			else
			{
				iVar0 = -45077177;
			}
			break;
		case 1:
			if (bParam1)
			{
				iVar0 = -1947358597;
			}
			else
			{
				iVar0 = 36807409;
			}
			break;
		case 3:
			if (bParam1)
			{
				iVar0 = -750686877;
			}
			else
			{
				iVar0 = 1293288723;
			}
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_700(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_701(iParam0, 1);
		func_226(iParam0, 1, 0, -142743235, 0);
	}
}

void func_378(int iParam0, bool bParam1)
{
	iVar0 = 1700817728;
	switch (func_699())
	{
		case 0:
			if (bParam1)
			{
				iVar0 = -447623645;
			}
			else
			{
				iVar0 = 1700817728;
			}
			break;
		case 1:
			if (bParam1)
			{
				iVar0 = 1880532390;
			}
			else
			{
				iVar0 = -480771797;
			}
			break;
		case 3:
			if (bParam1)
			{
				iVar0 = 468890170;
			}
			else
			{
				iVar0 = 764367205;
			}
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_700(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_701(iParam0, 1);
		func_226(iParam0, 1, 0, -142743235, 0);
	}
}

void func_379(int iParam0)
{
	iVar0 = -362580870;
	switch (func_699())
	{
		case 0:
			iVar0 = -362580870;
			break;
		case 1:
			iVar0 = -1013825131;
			break;
		case 3:
			iVar0 = -1433021121;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_700(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_701(iParam0, 1);
		func_226(iParam0, 1, 0, -142743235, 0);
	}
}

void func_380(int iParam0)
{
	iVar0 = -680642132;
	switch (func_699())
	{
		case 0:
			iVar0 = -680642132;
			break;
		case 1:
			iVar0 = -267849149;
			break;
		case 3:
			iVar0 = 1759003815;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_700(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_701(iParam0, 1);
		func_226(iParam0, 1, 0, -142743235, 0);
	}
}

void func_381(int iParam0)
{
	iVar0 = 2105609037;
	switch (func_699())
	{
		case 0:
			iVar0 = 2105609037;
			break;
		case 3:
			iVar0 = -457187977;
			break;
		case 1:
			iVar0 = -1595716047;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_700(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_701(iParam0, 1);
		func_226(iParam0, 1, 0, -142743235, 0);
	}
}

void func_382(int iParam0)
{
	iVar0 = 1964324114;
	switch (func_699())
	{
		case 0:
			iVar0 = 1964324114;
			break;
		case 3:
			iVar0 = -654111932;
			break;
		case 1:
			iVar0 = 1826089606;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_700(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_701(iParam0, 1);
		func_226(iParam0, 1, 0, -142743235, 0);
	}
}

void func_383(int iParam0)
{
	iVar0 = -1530144981;
	switch (func_699())
	{
		case 0:
			iVar0 = -1530144981;
			break;
		case 3:
			iVar0 = -389189374;
			break;
		case 1:
			iVar0 = -312546963;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_700(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_701(iParam0, 1);
		func_226(iParam0, 1, 0, -142743235, 0);
	}
}

void func_384(int iParam0)
{
	iVar0 = -1074475556;
	switch (func_699())
	{
		case 0:
			iVar0 = -1074475556;
			break;
		case 3:
			iVar0 = 392506445;
			break;
		case 1:
			iVar0 = -1846586910;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_700(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_701(iParam0, 1);
		func_226(iParam0, 1, 0, -142743235, 0);
	}
}

void func_385(int iParam0)
{
	iVar0 = 1076410848;
	switch (func_699())
	{
		case 0:
			iVar0 = 1076410848;
			break;
		case 3:
			iVar0 = 1820106865;
			break;
		case 1:
			iVar0 = 1890537641;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_700(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_701(iParam0, 1);
		func_226(iParam0, 1, 0, -142743235, 0);
	}
}

void func_386(int iParam0)
{
	iVar0 = 1516413548;
	switch (func_699())
	{
		case 0:
			iVar0 = 1516413548;
			break;
		case 1:
			iVar0 = 1648161053;
			break;
		case 3:
			iVar0 = -1170654725;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_700(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_701(iParam0, 1);
		func_226(iParam0, 1, 0, -142743235, 0);
	}
}

void func_387(int iParam0)
{
	iVar0 = -1454586679;
	switch (func_699())
	{
		case 0:
			iVar0 = -1454586679;
			break;
		case 1:
			iVar0 = 1849268701;
			break;
		case 3:
			iVar0 = 881673189;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_700(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_701(iParam0, 1);
		func_226(iParam0, 1, 0, -142743235, 0);
	}
}

void func_388(int iParam0)
{
	iVar0 = 406178289;
	switch (func_699())
	{
		case 0:
			iVar0 = 406178289;
			break;
		case 1:
			iVar0 = 187883304;
			break;
		case 3:
			iVar0 = 38531903;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		if (func_190(iParam0, 1573112293))
		{
			func_703(func_524(&iParam0), 1, 1);
		}
		func_700(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_701(iParam0, 1);
		func_226(iParam0, 1, 0, -142743235, 0);
	}
}

void func_389(int iParam0)
{
	iVar0 = 1934039819;
	switch (func_699())
	{
		case 0:
			iVar0 = 1934039819;
			break;
		case 1:
			iVar0 = 1656393367;
			break;
		case 3:
			iVar0 = 1125253485;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_700(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_701(iParam0, 1);
		func_226(iParam0, 1, 0, -142743235, 0);
	}
}

void func_390(int iParam0)
{
	iVar0 = -1054661625;
	switch (func_699())
	{
		case 0:
			iVar0 = -1054661625;
			break;
		case 1:
			iVar0 = 1750832898;
			break;
		case 3:
			iVar0 = -1750311991;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_700(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_701(iParam0, 1);
		func_226(iParam0, 1, 0, -142743235, 0);
	}
}

bool func_391(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_392(char* sParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (are_strings_equal(&((*Global_1934603)[iVar0]->f_10), sParam0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_393(int iParam0)
{
	if (func_391(iParam0, 1))
	{
		func_704(1);
	}
}

bool func_394(int iParam0)
{
	if (!func_705(iParam0))
	{
		return false;
	}
	if (func_706(iParam0, 4))
	{
		return true;
	}
	return false;
}

int func_395(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

bool func_396(int iParam0)
{
	iParam0 = func_395(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	iVar0 = func_204(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return false;
	}
	if (func_707(iVar0))
	{
		return true;
	}
	return false;
}

int func_397()
{
	return Global_40.f_1095.f_3054;
}

void func_398(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_399(struct<4> Param0)
{
	switch (Param0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 26:
			if (Global_1946804->f_850 >= 25)
			{
				return;
			}
			if (func_708(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1946804->f_850)
				{
					iVar1 = ((Global_1946804->f_855 + iVar0) % 25);
					if ((&Global_1946804->f_668[iVar1] == Param0 && Global_1946804->f_668[iVar1]->f_1 == Param0.f_1) && Global_1946804->f_668[iVar1]->f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_709(Param0);
			*Global_1946804->f_668[Global_1946804->f_856] = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_398(8);
			break;
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946804->f_851 >= 25)
			{
				return;
			}
			if (func_708(Param0))
			{
				return;
			}
			func_709(Param0);
			*Global_1946804->f_567[Global_1946804->f_851] = { Param0 };
			Global_1946804->f_851++;
			func_398(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_418(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

bool func_400()
{
	return Global_1946804->f_2792;
}

bool func_401(int iParam0)
{
	if (func_710())
	{
		return false;
	}
	if (!func_121(iParam0, 0))
	{
		return false;
	}
	if (!func_25(iParam0, 1, 0))
	{
		_0xbfff81e12a745a5f();
		return false;
	}
	return true;
}

int func_402(int iParam0)
{
	return func_711(iParam0);
}

void func_403(int iParam0, int iParam1)
{
	func_712(iParam0, iParam1);
}

int func_404(int iParam0, int iParam1)
{
	bVar3 = func_713(iParam0);
	if (func_190(iParam0, -1303648999))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_714(&iVar2))
		{
			if (bVar1)
			{
				iVar0 = func_715();
			}
			else
			{
				iVar0 = func_716();
			}
		}
		else if (func_128(iParam1, 1))
		{
			iVar0 = 0;
		}
		else if (bVar1)
		{
			iVar0 = func_717();
		}
		else
		{
			iVar0 = func_718();
		}
	}
	else if (func_719(&iVar2))
	{
		if (func_190(iVar2, -1303648999))
		{
			iVar0 = func_715();
		}
		else
		{
			iVar0 = func_716();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_717();
	}
	else
	{
		iVar0 = func_718();
	}
	if (iVar0 != 0)
	{
		Global_1946804->f_2791 = get_game_timer();
		_task_item_interaction(Global_35, iParam0, iVar0, 1, iParam1, -1082130432);
		return 1;
	}
	return 0;
}

bool func_405(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_406()
{
	func_720(&(Global_1946804->f_2776));
	func_721(32768);
	func_722(1108822547, 8, 6);
}

bool func_407(int iParam0, bool bParam1)
{
	return func_723(iParam0, 0) < func_724(iParam0, bParam1);
}

bool func_408(int iParam0)
{
	return func_725(iParam0, &uVar0);
}

void func_409(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_726(iParam0))
	{
		return;
	}
	iVar0 = func_199(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_727(iParam0, &(Global_1946804->f_2657.f_21), Global_1946804->f_2657.f_26.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_727(iParam0, &(Global_1946804->f_2657.f_23), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_727(iParam0, &(Global_1946804->f_2657.f_20), Global_1946804->f_2657.f_26, bParam1);
			break;
		case -525676072:
			bVar1 = func_727(iParam0, &(Global_1946804->f_2657.f_22), Global_1946804->f_2657.f_26.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_727(iParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_727(iParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == func_410(0))
	{
		func_728(iParam0, 1);
		if (func_729() == 1160113249)
		{
			func_728(func_410(-2125499975), 0);
		}
		else
		{
			func_728(func_410(1160113249), 0);
		}
	}
	func_730();
	if (func_731(iVar0))
	{
		_0x766315a564594401(func_86(0), iParam0, 0);
	}
	func_211(iParam0, bParam3);
	if (bParam2)
	{
		func_732(0, 0);
	}
}

int func_410(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_729();
	}
	if (iParam0 == 1160113249)
	{
		return -763730846;
	}
	return -1535516064;
}

void func_411(int iParam0, int iParam1)
{
	iVar0 = func_199(iParam1);
	if (iVar0 != func_199(iParam0))
	{
		return;
	}
	func_733(iParam0, iParam1, 1);
}

int func_412(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_734(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_413(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1944638739:
			return 36;
		case -1889597427:
			return 0;
		case -1884748965:
			return 32;
		case -1586649372:
			return 33;
		case -1506259487:
			return 5;
		case -1505978566:
			return 22;
		case -1489346253:
			return 38;
		case -1364808185:
			return 19;
		case -1292426046:
			return 8;
		case -1197751823:
			return 20;
		case -1176744536:
			return 24;
		case -1130865351:
			return 31;
		case -1130352927:
			return 1;
		case -893163968:
			return 17;
		case -735900586:
			return 28;
		case -676503695:
			return 6;
		case -450913544:
			return 18;
		case -426430150:
			return 29;
		case -358215195:
			return 39;
		case -338487716:
			return 11;
		case -207860920:
			return 26;
		case 99217379:
			return 27;
		case 304805134:
			return 21;
		case 383349088:
			return 7;
		case 389988485:
			return 2;
		case 673166414:
			return 25;
		case 788010710:
			return 34;
		case 1108822547:
			return 10;
		case 1145151482:
			return 23;
		case 1250092473:
			return 16;
		case 1367443060:
			return 4;
		case 1422688607:
			return 9;
		case 1600962399:
			return 13;
		case 1672288269:
			return 15;
		case 1742327865:
			return 12;
		case 1780904876:
			return 3;
		case 1788623170:
			return 30;
		case 1849504272:
			return 14;
		case 1900541263:
			return 37;
		case 1958421083:
			return 35;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

bool func_414(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_735();
	if (iParam2 == 39)
	{
		Var0 = { func_296(iParam0, 1, 0) };
		iParam2 = func_413(func_412(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_190(iParam0, 866047851) && func_592(&(Global_1946804->f_1378)) >= 2)
	{
		return false;
	}
	if ((func_405(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2])
	{
		func_736(func_734(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_737(iParam2);
	func_738(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2] != &Global_1946804->f_57[iParam2] && Global_1946804->f_57[iParam2]->f_1 > 1)
	{
		func_739(Global_1946804->f_1378.f_1[iParam2], 4, 6);
		func_739(Global_1946804->f_1497.f_1[iParam2], 4, 6);
	}
	func_740(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804->f_1378.f_1[iParam2]->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2] = iParam0;
	Global_1946804->f_1378.f_1[iParam2]->f_1 = func_741(iParam0, iParam2, iParam1, func_23() != -1);
	if (bParam4)
	{
		func_742(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_742(&(Global_1946804->f_1378), 1, 0);
	}
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1946804->f_2589)
		{
			if (&Global_1946804->f_2589.f_2[iVar6] >= 0 && &Global_1946804->f_2589.f_2[iVar6] < 39)
			{
				Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar6]] = 0;
				Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar6]]->f_1 = 0;
				func_722(func_734(&(Global_1946804->f_2589.f_2[iVar6]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_415(bool bParam0, bool bParam1, bool bParam2)
{
	func_743(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

int func_416(int iParam0)
{
	iVar0 = 0;
	iVar1 = func_413(iParam0, 1);
	switch (iParam0)
	{
		case 1108822547:
			if (&Global_1946804->f_1497.f_1[iVar1] == &Global_1946804->f_57[iVar1] || &Global_1946804->f_1378.f_1[iVar1] == &Global_1946804->f_57[iVar1])
			{
				iVar0 = 48;
			}
			break;
	}
	return iVar0;
}

void func_417(int iParam0)
{
	if (func_744(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_745(Var0);
}

void func_418(int iParam0, int iParam1, int iParam2)
{
	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_745(Var0);
}

int func_419(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_121(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_346(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_86(bParam6), &Var0, 0);
	return uVar4;
}

bool func_420()
{
	return Global_1914319->f_18996.f_1;
}

bool func_421()
{
	return Global_1914319->f_18996;
}

char* func_422()
{
	switch (Global_1914319->f_18996.f_4)
	{
		case 0:
			return "SHOPS_HANDHELD_FAIL_NONE";
		case 1:
			return "SHOPS_HANDHELD_FAIL_NOT_READY";
		case 2:
			return "SHOPS_HANDHELD_FAIL_DISABLED";
		case 3:
			return "SHOPS_HANDHELD_FAIL_INSTANCED";
		case 4:
			return "SHOPS_HANDHELD_FAIL_SHOP_CL";
		case 5:
			return "SHOPS_HANDHELD_FAIL_NOT_OWN";
		case 6:
			return "SHOPS_HANDHELD_FAIL_PVP_ASSA";
		case 7:
			return "SHOPS_HANDHELD_FAIL_PLAYER_DIED";
		case 8:
			return "SHOPS_HANDHELD_FAIL_PLAYER_IN_COMBAT";
		case 9:
			return "SHOPS_HANDHELD_FAIL_PLAYER_RIDING";
		case 10:
			return "SHOPS_HANDHELD_FAIL_PLAYER_FALLING";
		case 11:
			return "SHOPS_HANDHELD_FAIL_PLAYER_INSPECTING";
		case 12:
			return "SHOPS_HANDHELD_FAIL_PLAYER_CARRYING";
		case 13:
			return "SHOPS_HANDHELD_FAIL_PLAYER_BROWSING";
		case 14:
			return "SHOPS_HANDHELD_FAIL_PLAYER_IN_SCENARIO";
		case 15:
			return "SHOPS_HANDHELD_FAIL_PLAYER_SPECTATING";
		default:
			break;
	}
	return "";
}

int func_423(int iParam0)
{
	iParam0 = func_395(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_40.f_1095.f_1[iParam0]->f_9;
}

int func_424(int iParam0)
{
	iParam0 = func_395(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return Global_40.f_1095.f_1[iParam0]->f_372;
}

float func_425(int iParam0)
{
	iParam0 = func_395(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	return Global_40.f_1095.f_1[iParam0]->f_372.f_1;
}

float func_426(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

bool func_427(int iParam0)
{
	return func_128((*Global_1129544)[network_player_id_to_int()]->f_58, iParam0);
}

bool func_428()
{
	return !func_427(2);
}

bool func_429(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return false;
	}
	return (Global_1147326->f_1 && iParam0) != 0;
}

bool func_430()
{
	if ((((func_351(0) && !func_746()) || func_747()) || Global_1935689->f_1) || func_748())
	{
		return false;
	}
	return true;
}

void func_431(int iParam0)
{
	Global_1898068->f_8 = iParam0;
}

var func_432(int iParam0, int iParam1)
{
	return func_749(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

void func_433(struct<16> Param0, var uParam16, bool bParam17, bool bParam18)
{
	if (!_0x179a6f0ee2e79026(&uParam16))
	{
		return;
	}
	Param0 = 0;
	Param0.f_1 = player_id();
	Param0.f_2 = get_network_time_accurate();
	if (!bParam17)
	{
		if (Param0.f_15)
		{
			if (bParam18)
			{
				Var0.f_12 = 255;
				Var0.f_13 = 255;
				Var0.f_17 = -1;
				Var0 = { Param0 };
				Var0.f_16 = uParam16;
				Var0.f_17 = Param0.f_2;
				func_750(&(Global_1058888->f_43200), Var0);
				return;
			}
		}
	}
	trigger_script_event(1, &Param0, 16, 4, &uParam16);
}

bool func_434(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_435()
{
	return Global_40.f_4283;
}

struct<2> func_436(int iParam0)
{
	if (!func_121(iParam0, 0))
	{
		return Var0;
	}
	if (func_190(iParam0, -305066475))
	{
		if (func_23() == -1)
		{
			if (func_190(iParam0, -537818634))
			{
				return func_523(189951448);
			}
			else
			{
				return func_523(1176172851);
			}
		}
	}
	else if (func_190(iParam0, -537818634))
	{
		return func_523(-963660207);
	}
	if (func_190(iParam0, 2084895747))
	{
		return func_523(1694039471);
	}
	return Var2;
}

bool func_437(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	Var0 = { func_607(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_609(&Var0, func_608(0));
	}
	if (!func_610(&Var0, &iVar14, &iVar15, 0))
	{
		return false;
	}
	Var16.f_9 = -1591664384;
	iVar35 = 0;
	while (iVar35 < iVar15)
	{
		if (iVar36 >= iParam1)
		{
		}
		else
		{
			if (!func_285(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_347(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_287(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

void func_438(int iParam0, int iParam1)
{
	if (!Global_1901328->f_94)
	{
		if (func_190(iParam0, 606799272))
		{
			func_751(iParam0, iParam1);
		}
		if (func_190(iParam0, -1112814642) && func_190(iParam0, -1697809989))
		{
			func_474(iParam0, iParam1, 1, 0);
		}
	}
}

void func_439()
{
	Global_1911914->f_1583 = get_game_timer();
	Global_1911914->f_1581 = 1;
}

bool func_440(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_23() == -1)
	{
		if (func_619(iParam0) && func_752(iParam0))
		{
			func_753(iParam0, iParam1, 1, &bParam2, iParam3);
			return false;
		}
	}
	else if (iParam0 == 1259508039)
	{
		bParam2 = true;
	}
	else if (iParam0 == -1569615261)
	{
		return false;
	}
	return true;
}

bool func_441(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = iParam2;
	func_754(iParam0, iParam1);
	Var0 = { func_296(iParam0, 0, 1) };
	iVar5 = func_621(iParam0, &Var0, 0, 0);
	iVar6 = func_755(iParam0, 0);
	if ((iVar5 > 1 && !func_756()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_190(iParam0, -2051813666))
		{
			func_63(583, 1);
		}
		else
		{
			func_63(582, 0);
		}
	}
	if (func_297(iParam0, &Var0, *iParam1, 0, 0))
	{
		if (iVar6 < iVar5)
		{
			*iParam1 = (iVar5 - iVar6);
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_442(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_372(iParam0, -949239683))
	{
		case -1565009253:
		case -1273369295:
		case -1239610997:
		case -1229959999:
		case -1050374492:
		case -873135685:
		case -164980960:
		case 10252101:
		case 24248412:
		case 82200319:
		case 632545869:
		case 733893097:
		case 871191033:
		case 1513351077:
		case 1712126263:
		case 1894156335:
			Global_1935496->f_59.f_6 = 1;
			Global_1935496->f_59.f_7 = 0;
			Global_1935496->f_59.f_1 = iParam0;
			Global_1935496->f_59.f_5 = get_game_timer();
			break;
	}
}

bool func_443(int iParam0)
{
	if (func_23() != -1)
	{
		return false;
	}
	return func_444(iParam0) != 0;
}

int func_444(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_757())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_758(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_445(int iParam0)
{
	return _0x6052b4de6657684f(iParam0);
}

int func_446(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_757())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_445(iVar0))
		{
			if (func_25(func_758(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_447(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
	func_261(48);
	func_101(0, -1);
}

int func_448(int iParam0)
{
	return _0x62cab7db62ead434(-2076669067, iParam0);
}

int func_449(int iParam0)
{
	return _0x93f2e7b5db85657b(-2076669067, iParam0);
}

bool func_450(int iParam0)
{
	if (func_23() != -1)
	{
		return false;
	}
	return func_120((*Global_1835011)[iParam0]->f_1, 1);
}

bool func_451(int iParam0)
{
	if (func_23() != -1)
	{
		return false;
	}
	if (!func_117(iParam0))
	{
		return false;
	}
	return func_330((*Global_1347702)[iParam0]->f_15);
}

int func_452()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_25(func_759(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_453(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

bool func_454(int iParam0, int iParam1)
{
	if (!func_121(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

bool func_455(int iParam0)
{
	if (!func_760(iParam0))
	{
		return false;
	}
	return func_761(iParam0);
}

void func_456(int iParam0)
{
	if (!func_760(iParam0))
	{
		return;
	}
	func_762(iParam0);
	func_763(iParam0);
}

bool func_457(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	if (_is_weapon_melee(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (has_ped_got_weapon(Global_35, iParam0, 0, false))
	{
		Var0 = { func_296(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_764((386 + iVar28), 1);
			if (func_613(iParam0, &Var0, iVar5, 0))
			{
				if (func_614(iParam0, &Var6, iVar5))
				{
					Var29 = { func_346(iParam0, Var0, iVar5, 0) };
					func_347(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_98(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_458(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_765(iParam0, iParam1);
					return true;
				}
				if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
				{
					return false;
				}
				if (iParam1 > 0)
				{
				}
				_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return true;
			}
		}
	}
}

bool func_458(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_460(iParam0))
	{
		return false;
	}
	if (!func_98(0))
	{
		return false;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return true;
}

bool func_459(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_253(iParam0, 0);
	if (is_weapon_valid(iVar0))
	{
		if (func_23() == -1)
		{
			func_254(iVar0);
			if (iParam1 == 1248274121)
			{
				func_766(iVar0);
			}
		}
		if (!func_297(iParam0, &uVar1, 1, 0, 0))
		{
			func_753(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_767(iVar0);
			if (_is_weapon_sniper(iVar0))
			{
				func_457(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == -1415022764 || iVar0 == -160924582)
			{
				func_457(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == 2055893578)
			{
				func_457(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (_is_weapon_melee(iVar0))
			{
				if (iVar0 == 494733111 && !func_768())
				{
					return false;
				}
				if (_0x2c83212a7aa51d3d(iParam0))
				{
				}
				else if (!func_769(iVar0))
				{
					func_457(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_457(iVar0, _get_weapon_clip_size(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (_is_weapon_one_handed(iVar0))
			{
				iVar7 = func_770(Global_35, 2, 0, 1);
				if ((((func_286(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_455(24)) && bParam4)
				{
					_0xe9bd19f8121ade3e(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_286(iVar7) && func_455(24))
				{
					if (!func_457(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_457(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_457(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
			{
				return false;
			}
		}
	}
	else
	{
		return false;
	}
	if (_0x9f0e1892c7f228a8(1) != 0 && iParam1 == 1248274121)
	{
		func_63(480, 1);
	}
	return true;
}

bool func_460(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

bool func_461(int iParam0, int iParam1, int iParam2)
{
	if (!func_460(iParam0))
	{
		return false;
	}
	iVar4 = _get_weapon_type_from_ammo_type(iParam0);
	iVar3 = get_ped_ammo_by_type(Global_35, iParam0);
	if (func_286(iVar4))
	{
		get_max_ammo(Global_35, &iVar2, iVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (_is_weapon_bow(iVar4))
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = _get_weapon_clip_size(iVar4);
	}
	if (*iParam1 > 0)
	{
		iVar6 = *iParam1;
	}
	else if (*iParam1 < 0)
	{
		iVar6 = (iVar1 * absi(*iParam1));
	}
	if (func_25(611073244, 1, 0) && iParam2 == -897553835)
	{
		iVar6 = ceil((IntToFloat(iVar6) * 1.1f));
	}
	if (iVar5 >= iVar6)
	{
		iVar0 = iVar6;
	}
	else if (iVar5 < iVar6 && iVar5 >= 1)
	{
		iVar0 = iVar5;
	}
	else
	{
		func_493(func_771(iParam0), func_492(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_23() == -1)
		{
			if (func_120((*Global_1835011)[14]->f_1, 1))
			{
				func_63(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_98(0))
	{
		if (func_458(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_498(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_462(int iParam0)
{
	if ((iParam0 == -615217896 && !func_772()) || iParam0 != -615217896)
	{
		if (func_262(Global_35, iParam0, &uVar0))
		{
			func_210(player_ped_id(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case -62615415:
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_483();
			break;
		case -832719552:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_483();
			break;
		case -1941112926:
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_483();
			break;
		case -615217896:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_481();
			break;
		case -121629511:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_479();
			break;
	}
}

void func_463(int iParam0)
{
	switch (iParam0)
	{
		case -224110471:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_479();
			break;
		case 1289585739:
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_480();
			break;
		case 1441506783:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 780305678:
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case -935153695:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_481();
			break;
		case 655868243:
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_482();
			break;
		case 1299744282:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 1631240196:
			Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
			break;
		case 1768869276:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.15f);
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.15f);
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.15f);
			func_483();
			break;
		case -569248339:
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_773();
			break;
		case -1196089647:
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case -982895431:
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_774();
			break;
		case -1056342069:
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

void func_464(int iParam0)
{
	bVar0 = func_190(iParam0, -2017733358);
	if (func_775() < 3)
	{
		if (bVar0)
		{
			if (func_777(func_776(iParam0), iParam0))
			{
				func_493(79, func_492(func_776(iParam0)), 1);
			}
			else
			{
				func_493(78, func_492(func_776(iParam0)), 1);
			}
		}
		else
		{
			func_493(80, func_492(func_778(iParam0)), 1);
		}
	}
}

bool func_465()
{
	if (((((func_779(839908568, 400) || func_779(-1134030454, 400)) || func_779(623353496, 400)) || func_779(-344413337, 400)) || func_779(-1664948962, 400)) || func_779(1795228059, 400))
	{
		return true;
	}
	return false;
}

int func_466(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	iVar0 = func_780(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_781(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_782(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_467(int iParam0)
{
	switch (iParam0)
	{
		case -625427311:
			func_360(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_359(51, 0, 0, 0, 0, -1, 0);
			func_361(8192);
			break;
		case 581047644:
			func_360(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_359(51, 0, 0, 0, 0, -1, 0);
			func_361(524288);
			break;
		case -644199619:
			func_360(39, 0, 0, 0, 0, 0, 1, 0);
			func_359(39, 0, 0, 0, 0, -1, 0);
			func_364(16);
			break;
		case 684296857:
			func_360(41, 0, 0, 0, 0, 0, 1, 0);
			func_359(41, 0, 0, 0, 0, -1, 0);
			func_367(8);
			break;
		case 466137807:
			func_360(49, 0, 0, 0, 0, 0, 1, 0);
			func_359(49, 0, 0, 0, 0, -1, 0);
			func_370(16);
			break;
		case -1087522507:
			func_360(43, 0, 0, -1791518714, func_783(1), 0, -1, 0);
			func_784(1);
			break;
		case -405829000:
			func_360(43, 0, 0, -2087881550, func_783(2), 0, -1, 0);
			func_784(2);
			break;
		case 378660860:
			func_360(43, 0, 0, 1908068621, func_783(4), 0, -1, 0);
			func_784(4);
			break;
		case 1566111097:
			func_360(43, 0, 0, 1611247019, func_783(8), 0, -1, 0);
			func_784(8);
			break;
		case 1276007140:
			func_360(43, 0, 0, 1319635688, func_783(16), 0, -1, 0);
			func_784(16);
			break;
	}
}

void func_468(int iParam0)
{
	if (func_785() == 1)
	{
		if (func_356(39))
		{
			func_63(342, 0);
		}
		else
		{
			func_63(343, 0);
			func_364(1);
		}
	}
	if (func_785() >= 30)
	{
		func_63(344, 0);
	}
	func_360(39, 0, 0, 0, 0, 0, -1, 0);
	func_359(39, 0, 0, func_785(), 30, 1, 0);
}

void func_469(int iParam0)
{
	if (func_786() == 1)
	{
		if (func_356(49))
		{
			func_63(409, 0);
		}
		else
		{
			func_63(410, 0);
			func_370(1);
		}
	}
	if (func_786() >= 10)
	{
		func_63(411, 0);
	}
	func_360(49, 0, 0, 0, 0, 0, -1, 0);
	func_359(49, 0, 0, func_786(), 10, 1, 0);
}

void func_470(int iParam0)
{
	switch (iParam0)
	{
		case 1369162587:
			_0x3ea62e56f386c997(-949689219, 1);
			func_63(437, 0);
			func_63(440, 0);
			func_787(-949689219, 444160793, &sVar0, 1, 0, 0);
			func_360(51, 0, 0, -949689219, sVar0, 0, -1, 0);
			func_359(51, 0, 0, sVar0, func_691(-949689219, 20), 1, 0);
			func_361(1);
			func_788(-748969569, 0, 0);
			break;
		case 1610047510:
			_0x3ea62e56f386c997(-1248968496, 1);
			func_787(-1248968496, -1969404854, &sVar0, 1, 0, 0);
			func_360(51, 0, 0, -1248968496, sVar0, 0, -1, 0);
			func_359(51, 0, 0, sVar0, func_691(-1248968496, 20), 1, 0);
			func_361(8);
			break;
		case 1317879106:
			_0x3ea62e56f386c997(1706369307, 1);
			func_787(1706369307, -832850511, &sVar0, 1, 0, 0);
			func_360(51, 0, 0, 1706369307, sVar0, 0, -1, 0);
			func_359(51, 0, 0, sVar0, func_691(1706369307, 20), 1, 0);
			func_361(64);
			break;
		case 1062444751:
			_0x3ea62e56f386c997(1520110311, 1);
			func_787(1520110311, -100913452, &sVar0, 1, 0, 0);
			func_360(51, 0, 0, 1520110311, sVar0, 0, -1, 0);
			func_359(51, 0, 0, sVar0, func_691(1520110311, 20), 1, 0);
			func_361(512);
			break;
		case 754186760:
			_0x3ea62e56f386c997(-1992824800, 1);
			func_63(438, 0);
			func_787(-1992824800, 905173572, &sVar0, 1, 0, 0);
			func_360(51, 0, 0, -1992824800, sVar0, 0, -1, 0);
			func_359(51, 0, 0, sVar0, func_691(-1992824800, 20), 1, 0);
			func_361(32768);
			break;
		default:
			func_63(439, 0);
			break;
	}
}

void func_471()
{
	if (chal_get_num_ranks_completed(-1278339625) < 2)
	{
		chal_add_goal_progress_int(-1278339625, -1316535105, 1);
	}
}

void func_472(int iParam0, int iParam1)
{
	iVar1 = 0;
	if (func_23() == -1)
	{
		if (!func_356(43))
		{
			if (iParam0 == 281887510)
			{
				func_63(348, 0);
			}
			else if (iParam0 == -164081697)
			{
				func_63(350, 0);
			}
			else if (iParam0 == -1161319399)
			{
				func_63(352, 0);
			}
			else if (iParam0 == 728781265)
			{
				func_63(400, 0);
			}
		}
		else if (func_190(iParam0, 412399755))
		{
			func_789(-1791518714);
			if (func_790() == 0)
			{
				func_101(0, 10);
				iVar1 = func_791(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_792(iParam0) < func_793(iParam0))
					{
						func_360(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_359(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_356(44))
		{
			if (iParam0 == -222563712)
			{
				func_63(354, 0);
			}
			else if (iParam0 == 1794857344)
			{
				func_63(399, 0);
			}
			else if (iParam0 == 1952409553)
			{
				func_63(401, 0);
			}
		}
		else if (func_190(iParam0, 709057512))
		{
			func_789(-2087881550);
			if (func_790() == 1)
			{
				func_101(0, 10);
				iVar1 = func_791(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_792(iParam0) < func_793(iParam0))
					{
						func_360(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_359(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_356(45))
		{
			if (iParam0 == 2116770557)
			{
				func_63(359, 0);
			}
			else if (iParam0 == -651064726)
			{
				func_63(394, 0);
			}
			else if (iParam0 == -404270094)
			{
				func_63(395, 0);
			}
			else if (iParam0 == 2093126853)
			{
				func_63(398, 0);
			}
		}
		else if (func_190(iParam0, -1478961327))
		{
			func_789(1908068621);
			if (func_790() == 2)
			{
				func_101(0, 10);
				iVar1 = func_791(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_794(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
					{
						func_795(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
						func_261(48);
					}
					if (func_792(iParam0) < func_793(iParam0))
					{
						func_360(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_359(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_792(iParam0) < func_793(iParam0))
					{
						func_360(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_359(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_356(46))
		{
			if (iParam0 == 2085530337)
			{
				func_63(356, 0);
			}
			else if (iParam0 == -150591160)
			{
				func_63(402, 0);
			}
			else if (iParam0 == -323969289)
			{
				func_63(404, 0);
			}
			else if (iParam0 == 1504361882)
			{
				func_63(406, 0);
			}
		}
		else if (func_190(iParam0, -1238404098))
		{
			func_789(1611247019);
			if (func_790() == 3)
			{
				func_101(0, 10);
				iVar1 = func_791(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_792(iParam0) < func_793(iParam0))
					{
						func_360(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_359(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_356(47))
		{
			if (iParam0 == -1521783510)
			{
				func_63(396, 0);
			}
			else if (iParam0 == 1714875242)
			{
				func_63(397, 0);
			}
			else if (iParam0 == 927763737)
			{
				func_63(405, 0);
			}
			else if (iParam0 == 1019229063)
			{
				func_63(403, 0);
			}
		}
		else if (func_190(iParam0, 1160548794))
		{
			func_789(1319635688);
			if (func_790() == 4)
			{
				func_101(0, 10);
				iVar1 = func_791(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_792(iParam0) < func_793(iParam0))
					{
						func_360(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_359(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_473(int iParam0)
{
	if (iParam0 == 2116770557)
	{
		if (!func_794(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
		{
			func_795(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
			func_261(48);
		}
	}
}

void func_474(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = _0x126cbebba46693cf(iVar1, 678508515, -1160144609);
		if (func_25(func_796(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_797(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_798(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_475(int iParam0, int iParam1, int iParam2)
{
	if (func_23() == -1)
	{
		if (does_entity_exist(iParam2))
		{
			iVar0 = _0x6f02b5e50511721e(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_466(0, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255:
			func_466(-949580860, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493:
			func_466(-1171997683, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627:
			func_466(-2140931002, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1124867377:
			func_466(-1116228267, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1790920086:
			func_466(2112896861, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -2001202686:
			func_466(-1915150712, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1111063991:
			func_466(994220262, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1576210101:
			func_466(-1388440107, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 675090918:
			func_466(-1531790128, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 355838765:
			func_466(1351791770, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -343824903:
			func_466(-161493966, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1142684684:
			func_466(668131102, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1243851340:
			if (!func_799())
			{
				func_466(1330954593, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case -525490740:
			func_466(817681514, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1736635264:
			func_466(1404311868, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1302860970:
			func_466(-175152067, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1027115192:
			func_466(-526915387, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1064332555:
			func_466(101362741, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1954478446:
			func_466(1458818027, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -518592739:
			func_466(-1957208512, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -2010073778:
			func_466(2066857461, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -700133011:
			func_466(803940201, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1415414735:
			func_466(-1717765429, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 2045548742:
			func_466(1379920914, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 830381058:
			func_466(447209691, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

void func_476(int iParam0)
{
	if (func_356(41))
	{
		func_63(363, 0);
	}
	else
	{
		func_63(362, 0);
	}
	switch (iParam0)
	{
		case 323124696:
			func_800(-1865241121);
			func_801(-642026005);
			func_802(-642026005);
			func_101(0, 10);
			break;
		case -2108314374:
			func_800(2117142684);
			func_801(-940584364);
			func_802(-940584364);
			func_101(0, 10);
			break;
		case -1193798153:
			func_800(-1409326024);
			func_801(1972645282);
			func_802(1972645282);
			func_101(0, 10);
			break;
		case -787702678:
			func_800(-641744968);
			func_801(1667205433);
			func_802(1667205433);
			func_101(0, 10);
			break;
		case -804542901:
			func_800(-946988203);
			func_801(1362715885);
			func_802(1362715885);
			func_101(0, 10);
			break;
		case -1696275132:
			func_800(-646136018);
			func_801(1053540370);
			func_802(1053540370);
			func_101(0, 10);
			break;
		case -161595323:
			func_800(-955835837);
			func_801(-1100103852);
			func_802(-1100103852);
			func_101(0, 10);
			break;
		case -1114363619:
			func_800(-179276075);
			func_801(-1409869209);
			func_802(-1409869209);
			func_101(0, 10);
			break;
		case -368407134:
			func_800(-492711560);
			func_801(-1760235357);
			func_802(-1760235357);
			func_101(0, 10);
			break;
		case 1997759228:
			func_800(1764383959);
			func_801(-138366827);
			func_802(-138366827);
			func_101(0, 10);
			break;
		case 1265573293:
			func_800(317501533);
			func_801(-1261163843);
			func_802(-1261163843);
			func_101(0, 10);
			break;
		case -1030441283:
			func_800(817753087);
			func_801(-963523016);
			func_802(-963523016);
			func_101(0, 10);
			break;
		case -1490884871:
			func_800(576606016);
			func_801(560825326);
			func_802(560825326);
			func_101(0, 10);
			break;
		case -395458616:
			func_800(814934957);
			func_801(858269539);
			func_802(858269539);
			break;
	}
}

void func_477(int iParam0, int iParam1)
{
	func_606(iParam0, iParam1, &uVar0);
}

bool func_478(int iParam0, bool bParam1)
{
	Var3.f_9 = -1591664384;
	bVar17 = false;
	*iParam0 = 0;
	iVar18 = func_770(get_player_ped(get_player_index()), 2, 1, 0);
	iVar19 = func_770(get_player_ped(get_player_index()), 3, 1, 0);
	if (func_284("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_285(&Var3, iVar2, iVar0, iVar1))
			{
				if (_is_weapon_one_handed(Var3.f_4))
				{
					if (!bParam1)
					{
						if (Var3.f_4 == iVar18 || Var3.f_4 == iVar19)
						{
						}
						else
						{
							if (!bVar17)
							{
								*iParam0 = Var3.f_4;
								bVar17 = true;
							}
						}
						iVar2++;
						func_287(iVar0);
						if (*iParam0 != 0)
						{
							return true;
						}
						return false;
					}
				}
			}
		}
	}
}

void func_479()
{
	_0x11a7ff918ef6bc66(player_id(), (1f - Global_40.f_11095.f_60));
}

void func_480()
{
	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	_0x497a6539bb0e8787(player_id(), (1f - fVar0), (1f - fVar1));
}

void func_481()
{
	_0xe0d6c2a146a5c993(player_id(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_482()
{
	_0xb427911ea6dffef3(player_id(), (1f - Global_40.f_11095.f_63));
}

void func_483()
{
	func_803();
	func_804();
	func_805();
}

void func_484(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_JACK_HALL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -293111728;
			break;
		case 666607663:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_HIGH_STAKES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = 1406403390;
			break;
		case -220219788:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_POISONOUS_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = 917780075;
			break;
		case 218622660:
			sVar3 = "COL_TH_SUB_TRESOR_DES_MORTS";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -857004026;
			break;
		case 390004462:
			sVar3 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -1108821735;
			break;
		case 6410548:
			sVar3 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -208135085;
			break;
	}
	switch (iParam1)
	{
		case 854119837:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_01";
			break;
		case -1292544588:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_02";
			break;
		case -1003325394:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_03";
			break;
		case -696705861:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_04";
			break;
		case -335460405:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_01";
			break;
		case 903797617:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_02";
			break;
		case 669728650:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_03";
			break;
		case 1595354593:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_04";
			break;
		case 1214120047:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_01";
			break;
		case 655769340:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_02";
			break;
		case 885316185:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_03";
			break;
		case -2016706455:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_04";
			break;
		case -1491419385:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_01";
			break;
		case 1809565830:
			sVar1 = "COL_TH_OBJ_RDL";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_02";
			break;
		case 2056119786:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_03";
			break;
		case -628873767:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_01";
			break;
		case -405421956:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_02";
			break;
		case -1108972386:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_03";
			break;
		case -878376933:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_04";
			break;
		case 1053716392:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_01";
			break;
		case 806507056:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_02";
			break;
		case 1571925350:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_03";
			break;
		case 1330352282:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_04";
			break;
		case 975496781:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_05";
			break;
	}
	if (_uilog_is_entry_registered(3, iVar0))
	{
		_uilog_remove_entry(3, iVar0);
	}
	if (!_uilog_is_entry_registered(3, iVar0))
	{
		_uilog_add_entry_hash(3, iVar0, vVar4, get_hash_key("COL_TH_TITLE"), get_hash_key(sVar2), 0);
	}
	if (bParam2)
	{
		switch (iParam0)
		{
			case 499813453:
				sVar1 = "COL_TH_JACK_HALL_COMPLETE";
				break;
			case 666607663:
				sVar1 = "COL_TH_HIGH_STAKES_COMPLETE";
				break;
			case -220219788:
				sVar1 = "COL_TH_POISONOUS_TRAIL_COMPLETE";
				break;
			case 218622660:
				sVar1 = "COL_TH_TRESOR_DES_MORTS_COMPLETE";
				break;
			case 390004462:
				sVar1 = "COL_TH_ELEMENTAL_TRAIL_COMPLETE";
				break;
			case 6410548:
				sVar1 = "COL_TH_LANDMARKS_OF_RICHES_COMPLETE";
				break;
		}
	}
	_uilog_add_or_update_objective(3, iVar0, get_hash_key(sVar1), sVar1, false, false, false);
	_uilog_set_entry_pinned(3, iVar0, true);
	_uilog_set_entry_icon_texture(3, iVar0, get_hash_key("BLIP_RC_TREASURE_HUNTER"), get_hash_key("toast_log_blips"));
	_uilog_set_entry_brief_texture(3, iVar0, get_hash_key("MISSION_RETH"), get_hash_key("SP_MISSIONS_19"));
	_uilog_update_entry_subheader(3, iVar0, _create_var_string(2, sVar3));
}

void func_485(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_JACK_HALL";
			iVar0 = -293111728;
			break;
		case 666607663:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_HIGH_STAKES";
			iVar0 = 1406403390;
			break;
		case -220219788:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_POISONOUS_TRAIL";
			iVar0 = 917780075;
			break;
		case 218622660:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_TRESOR_DES_MORTS";
			iVar0 = -857004026;
			break;
		case 390004462:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			iVar0 = -1108821735;
			break;
		case 6410548:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			iVar0 = -208135085;
			break;
	}
	sVar3 = "COL_CTX_PLAYER_LOG";
	if (bParam1)
	{
		sVar1 = "MISSION_COMPLETE";
	}
	_uilog_set_pending_details_id(1, iVar0);
	func_688(_create_var_string(2, sVar1), _create_var_string(2, sVar2), get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_TREASURE_HUNTER"), 1433015236, _create_var_string(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_486(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_487(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_488(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_489(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_490(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_491(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_492(int iParam0)
{
	if (!func_121(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_493(int iParam0, int iParam1, bool bParam2)
{
	func_148(iParam0, &iVar0, &iVar1);
	if (!func_149(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_313(iParam0, 1024))
	{
		return;
	}
	func_150(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = iParam1;
	Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 2;
}

void func_494(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_148(iParam0, &iVar0, &iVar1);
	if (!func_149(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_313(iParam0, 1024))
	{
		return;
	}
	func_150(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = iParam1;
	if (!bParam3)
	{
		Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 1;
	}
	else
	{
		Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 5;
	}
}

int func_495()
{
	iVar0 = _0x5461c821d00fe15a(-2076669067, 0);
	if (iVar0 == func_757())
	{
		return func_496();
	}
	iVar4 = (func_757() - iVar0);
	iVar5 = get_random_int_in_range(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_757())
	{
		iVar1 = _0x126cbebba46693cf(iVar2, -2076669067, 0);
		if (!func_806(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_758(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_496()
{
	iVar0 = get_random_int_in_range(0, func_757());
	return func_758(_0x126cbebba46693cf(iVar0, -2076669067, 0));
}

void func_497(int iParam0)
{
	switch (*iParam0)
	{
		case -1424823393:
			*iParam0 = -885810591;
			break;
		case 998010398:
			*iParam0 = -324053813;
			break;
		case 1358243310:
			*iParam0 = 1463786584;
			break;
		case -541584777:
			*iParam0 = 206762213;
			break;
	}
}

bool func_498(int iParam0, int iParam1, int iParam2)
{
	if (!func_121(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_296(iParam0, 0, 1) };
	Var5 = { func_346(iParam0, Var0, Var0.f_4, 0) };
	return func_567(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_499(int iParam0)
{
	if (func_23() != -1)
	{
		return;
	}
	switch (func_199(iParam0))
	{
		case 81053684:
			if (iParam0 == -1623728698 && func_723(81053684, 0) <= 0)
			{
				func_207(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == -1535516064 || iParam0 == -763730846)
			{
				func_207(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_206(iParam0);
			if (func_705(iVar0))
			{
				func_807(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_207(30, iParam0, 0, 0, 0);
			}
			if (func_729() == -2125499975 || func_729() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_207(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_729() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024:
						func_207(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_407(-525676072, 0))
			{
				if (func_808(-525676072, &iVar1))
				{
					func_207(33, iVar1, 0, 0, 0);
				}
			}
			func_207(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == -1185145312)
	{
		if (!func_809(99217379))
		{
			func_210(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_456(24);
		if (func_478(&iVar2, 0))
		{
			func_457(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_500(int iParam0)
{
	if (func_190(iParam0, 943695443))
	{
		func_810(0, iParam0);
	}
	else if (func_190(iParam0, -2096528786))
	{
		func_810(1, iParam0);
	}
	else if (func_190(iParam0, -1094167013))
	{
		func_810(2, iParam0);
	}
	else if (func_190(iParam0, 1936654645))
	{
		func_810(3, iParam0);
	}
	else if (func_190(iParam0, 1306489306))
	{
		func_810(4, iParam0);
	}
	else if (func_190(iParam0, 435762317))
	{
		func_810(5, iParam0);
	}
	else if (func_190(iParam0, 1259363210))
	{
		func_810(6, iParam0);
	}
	else if (func_190(iParam0, 881398259))
	{
		func_810(7, iParam0);
	}
	else if (func_190(iParam0, -541549214))
	{
		func_810(8, iParam0);
	}
	else if (func_190(iParam0, 130796156))
	{
		func_810(-1, iParam0);
	}
}

void func_501(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			if (func_23() == -1)
			{
				if (func_120((*Global_1835011)[4]->f_1, 1))
				{
					func_63(109, 1);
				}
			}
			break;
	}
}

void func_502(int iParam0, char* sParam1)
{
	sVar0 = func_812(func_811(0));
	func_577(_create_var_string(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_813(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

bool func_503(int iParam0)
{
	if (func_768())
	{
		return false;
	}
	return func_120((*Global_1347702)[58]->f_15, 1);
}

bool func_504(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return func_814(iParam0, &Var0);
}

void func_505(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		fParam1 = func_509(iParam0, fParam1, 1);
	}
	func_816(iParam0, (func_815(iParam0, 2) + fParam1), bParam2, bParam3, 1, 2);
}

float func_506(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

void func_507(float fParam0)
{
	if (fParam0 >= (100f - 1f))
	{
		play_sound_frontend("Core_Full", "Consumption_Sounds", true, 0);
	}
	else
	{
		play_sound_frontend("Core_Fill_Up", "Consumption_Sounds", true, 0);
	}
}

void func_508()
{
	Global_40.f_11095.f_11[14] = 100f;
	set_attribute_points(Global_35, 14, 100);
	Global_40.f_11095.f_42 = 60;
}

float func_509(int iParam0, float fParam1, bool bParam2)
{
	iVar0 = func_147();
	func_817(&iVar0, 0, 0, 0, 1, 0, 0);
	iVar1 = func_818(iParam0, 2);
	if (func_820(iVar0, func_819(iParam0, 2), 1))
	{
		func_821(iParam0, 0, 2);
		iVar1 = 0;
	}
	if (iVar1 >= 2)
	{
		func_63(88, bParam2);
		return 0f;
	}
	func_822(iParam0, func_147(), 2);
	func_821(iParam0, iVar1 + 1, 2);
	return fParam1;
}

float func_510(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_511(int iParam0, float fParam1, bool bParam2)
{
	if (func_23() != -1)
	{
		return;
	}
	if (!func_455(15))
	{
		return;
	}
	Global_40.f_11095[iParam0] = fParam1;
	iVar0 = func_823(ceil(&(Global_40.f_11095[iParam0])));
	_set_attribute_core_value(Global_35, func_824(iParam0), iVar0);
	func_826(func_825(iParam0), (100f * (to_float(iVar0) / 100f)), 0);
	if (((fParam1 <= func_827(15) && iParam0 == 1) && is_ped_on_foot(Global_35)) && !is_ped_swimming(Global_35))
	{
		func_63(84, 1);
	}
	if (fParam1 <= -99.999f)
	{
		func_63(func_828(iParam0), 1);
	}
	sVar1 = func_829(iParam0);
	if (!is_string_null_or_empty(sVar1))
	{
		_0x437c08db4febe2bd(Global_35, sVar1, to_float(iVar0), -1);
	}
}

float func_512(int iParam0)
{
	return &(Global_40.f_11095.f_11[iParam0]);
}

bool func_513()
{
	if (func_23() != -1)
	{
		return false;
	}
	if (Global_1347477->f_200)
	{
		return false;
	}
	if (Global_1347477->f_195 == -15)
	{
		return true;
	}
	return func_830(Global_1347477->f_195, 0);
}

int func_514(float fParam0)
{
	return round(((fParam0 / 100f) * to_float(10)));
}

void func_515(var uParam0, var uParam1)
{
	if (!func_264())
	{
		*uParam0 = -100f;
		*uParam1 = 100f;
		return;
	}
	*uParam0 = Global_40.f_11095.f_40;
	*uParam1 = Global_40.f_11095.f_41;
}

void func_516(int iParam0, float fParam1)
{
	Global_40.f_11095.f_11[iParam0] = fParam1;
	if (iParam0 == 12)
	{
		bVar1 = fParam1 != 0f;
		sVar2 = func_574(fParam1 < 0f, "rpg_cold", "rpg_hot");
		func_831(1, bVar1, 1, sVar2);
		func_832(!bVar1, fParam1 < 0f, bVar1);
		iVar0 = func_823(ceil(&(Global_40.f_11095.f_11[iParam0])));
		set_attribute_points(Global_35, iParam0, iVar0);
		func_483();
	}
	else if (iParam0 == 10)
	{
		iVar0 = func_823(ceil(&(Global_40.f_11095.f_11[iParam0])));
		set_attribute_points(Global_35, iParam0, iVar0);
	}
	else if (iParam0 == 16)
	{
		iVar0 = func_823(ceil(&(Global_40.f_11095.f_11[iParam0])));
		set_attribute_points(Global_35, iParam0, iVar0 * 100);
	}
	else if (iParam0 == 13)
	{
	}
}

bool func_517(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return true;
		case 0:
			return true;
		case 2:
			return true;
		default:
			break;
	}
	return false;
}

char* func_518(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PlayerOverpower";
		case 1:
			return "PlayerOverpower";
		case 2:
			return "PlayerOverpower";
		default:
			break;
	}
	return "";
}

void func_519(int iParam0)
{
	iVar0 = player_ped_id();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = _0x16f2c8c084ab2092(iVar0);
	}
	iVar1 = func_833(2);
	func_834(to_float((iParam0 * iVar1)), 0);
}

void func_520(int iParam0)
{
	iVar0 = player_ped_id();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = _0xfc3b580c4380b5b7(iVar0);
	}
	iVar1 = func_835(2);
	func_836(to_float((iParam0 * iVar1)));
}

void func_521(int iParam0)
{
	iVar0 = player_id();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = _0x57d9991dc1334151(iVar0);
	}
	iVar1 = func_837(2);
	func_838(to_float((iParam0 * iVar1)), 0);
}

void func_522(int iParam0, bool bParam1, bool bParam2)
{
	func_816(iParam0, 100f, bParam1, bParam2, 1, 2);
}

struct<2> func_523(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

int func_524(int iParam0)
{
	switch (*iParam0)
	{
		case 1433048902:
			return 2;
		case -1602657245:
			return 4;
		case -1991037110:
			return 5;
		case 1047281747:
			return 6;
		case -398744080:
			return 7;
		case -1066874997:
			return 8;
		case -2085219828:
			return 11;
		case 2064962445:
			return 12;
		case -1620920647:
			return 15;
		case -1664530975:
			return 16;
		case -597058368:
			return 20;
		case 128702355:
			return 23;
		case -2051332199:
			return 26;
		case 546981776:
			return 27;
		case -2013384490:
			return 28;
		case 228922461:
			return 29;
		case -746674788:
			return 31;
		case 599861917:
			return 33;
		case -1781387050:
			return 34;
		case 2006811763:
			return 37;
		case -90546043:
			return 38;
		case 1216456215:
			return 39;
		case 746300881:
			return 40;
		case -435006002:
			return 41;
		case -624139784:
			return 42;
		case -529638012:
			return 43;
		case -651064726:
			return 1;
		case -404270094:
			return 9;
		case -1521783510:
			return 10;
		case 1714875242:
			return 14;
		case 2093126853:
			return 17;
		case 728781265:
			return 21;
		case 1794857344:
			return 22;
		case 1952409553:
			return 24;
		case -150591160:
			return 25;
		case 1019229063:
			return 30;
		case -323969289:
			return 32;
		case 927763737:
			return 35;
		case 1504361882:
			return 36;
	}
	return 0;
}

void func_525(int iParam0, int iParam1)
{
	Var0 = { func_260(-372368982, func_839(iParam0)) };
	_0x6a0184e904cdf25e(&Var0, iParam1);
	func_251(func_250(106002964), iParam1);
}

bool func_526(var uParam0)
{
	iVar0 = 12;
	while (iVar0 <= 15)
	{
		func_144(uParam0->f_162[iVar0], 1, 1);
		iVar0++;
	}
	if (!func_70(&(uParam0->f_162[3])))
	{
		uParam0->f_162[3] = func_81("CAMP_REC_BACK", 992265328, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
		func_82(&(uParam0->f_162[3]), 1323335645, 0, 1);
	}
	if (func_56(524288))
	{
		uParam0->f_162[12] = func_81("CMP_SLP_MRN", 1367437629, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
	}
	else if (uParam0->f_187 > 3 && uParam0->f_187 <= 9)
	{
		uParam0->f_162[13] = func_81("CMP_SLP_NOON", -719620017, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
		uParam0->f_162[14] = func_81("CMP_SLP_EVE", -473983589, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
		uParam0->f_162[15] = func_81("CMP_SLP_MDN", 1367437629, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
	}
	else if (uParam0->f_187 > 9 && uParam0->f_187 <= 15)
	{
		uParam0->f_162[14] = func_81("CMP_SLP_EVE", -719620017, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
		uParam0->f_162[15] = func_81("CMP_SLP_MDN", -473983589, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
		uParam0->f_162[12] = func_81("CMP_SLP_MRN", 1367437629, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
	}
	else if (uParam0->f_187 > 15 && uParam0->f_187 <= 21)
	{
		uParam0->f_162[15] = func_81("CMP_SLP_MDN", -719620017, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
		uParam0->f_162[12] = func_81("CMP_SLP_MRN", -473983589, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
		uParam0->f_162[13] = func_81("CMP_SLP_NOON", 1367437629, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
	}
	else if (uParam0->f_187 > 21 || uParam0->f_187 <= 3)
	{
		uParam0->f_162[12] = func_81("CMP_SLP_MRN", -719620017, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
		uParam0->f_162[13] = func_81("CMP_SLP_NOON", -473983589, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
		uParam0->f_162[14] = func_81("CMP_SLP_EVE", 1367437629, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
	}
	bVar1 = true;
	if (func_56(524288))
	{
		bVar1 = true;
	}
	else
	{
		if (Global_1392040->f_7 == -15)
		{
			Global_1392040->f_7 = func_147();
		}
		iVar2 = Global_1392040->f_7;
		func_246(&iVar2, 0, 0, 3, 0, 0, 0, 0);
		if (!func_247(iVar2))
		{
			if (Global_1392040->f_8 > 1)
			{
				bVar1 = false;
			}
		}
		else
		{
			Global_1392040->f_8 = 0;
		}
	}
	if (func_70(&(uParam0->f_162[12])))
	{
		if (uParam0->f_187 < 6)
		{
			iVar3 = (6 - uParam0->f_187);
		}
		else
		{
			iVar3 = (24 - uParam0->f_187) + 6;
		}
		func_840(&(uParam0->f_162[12]), "CMP_SLP_MRN", iVar3, 1);
		func_82(&(uParam0->f_162[12]), 1323335645, 0, 1);
		func_84(&(uParam0->f_162[12]), bVar1, 1);
	}
	if (func_70(&(uParam0->f_162[13])))
	{
		if (uParam0->f_187 < 12)
		{
			iVar3 = (12 - uParam0->f_187);
		}
		else
		{
			iVar3 = (24 - uParam0->f_187) + 12;
		}
		func_840(&(uParam0->f_162[13]), "CMP_SLP_NOON", iVar3, 1);
		func_82(&(uParam0->f_162[13]), 1323335645, 0, 1);
		func_84(&(uParam0->f_162[13]), bVar1, 1);
	}
	if (func_70(&(uParam0->f_162[14])))
	{
		if (uParam0->f_187 < 18)
		{
			iVar3 = (18 - uParam0->f_187);
		}
		else
		{
			iVar3 = (24 - uParam0->f_187) + 18;
		}
		func_840(&(uParam0->f_162[14]), "CMP_SLP_EVE", iVar3, 1);
		func_82(&(uParam0->f_162[14]), 1323335645, 0, 1);
		func_84(&(uParam0->f_162[14]), bVar1, 1);
	}
	if (func_70(&(uParam0->f_162[15])))
	{
		iVar3 = (24 - uParam0->f_187);
		func_840(&(uParam0->f_162[15]), "CMP_SLP_MDN", iVar3, 1);
		func_82(&(uParam0->f_162[15]), 1323335645, 0, 1);
		func_84(&(uParam0->f_162[15]), bVar1, 1);
	}
	return bVar1;
}

char* func_527(int iParam0)
{
	if (func_56(524288))
	{
		return "0600_";
	}
	if (iParam0 == -1)
	{
		if (func_841(23, 2))
		{
			return "0000_";
		}
		else if (func_841(2, 5))
		{
			return "0300_";
		}
		else if (func_841(5, 8))
		{
			return "0600_";
		}
		else if (func_841(8, 11))
		{
			return "0900_";
		}
		else if (func_841(11, 14))
		{
			return "1200_";
		}
		else if (func_841(14, 17))
		{
			return "1500_";
		}
		else if (func_841(17, 20))
		{
			return "1800_";
		}
		else if (func_841(20, 23))
		{
			return "2100_";
		}
		else
		{
			return "1200_";
		}
	}
	switch (iParam0)
	{
		case 0:
			if (func_842())
			{
				return "2100_";
			}
			else
			{
				return "0000_";
			}
			break;
		case 6:
			if (func_842())
			{
				return "0300_";
			}
			else
			{
				return "0600_";
			}
			break;
		case 12:
			if (func_842())
			{
				return "0900_";
			}
			else
			{
				return "1200_";
			}
			break;
		case 18:
			if (func_842())
			{
				return "1500_";
			}
			else
			{
				return "1800_";
			}
			break;
	}
	return "1200_";
}

char* func_528()
{
	iVar0 = func_843();
	if (func_56(524288))
	{
		return "01Clear";
	}
	switch (iVar0)
	{
		case -1317052143:
		case 433385945:
		case 669657108:
		case 725623432:
		case 839715153:
		case 1420204096:
		case 1974067816:
		case 2082228755:
		case 2137137442:
			return "04Storm";
		case -1721991356:
		case -1233681761:
		case -1148613331:
		case -702816767:
		case -416908843:
		case -273223690:
		case 212278652:
		case 603685163:
			return "03Clouds";
		case -173507739:
		case 821931868:
		case 1500834021:
		case 1632247697:
		case 1679686673:
			return "01Clear";
		default:
			break;
	}
	return "01Clear";
	return "01Clear";
}

struct<8> func_529(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	iVar0 = get_length_of_literal_string(sParam0);
	iVar1 = get_length_of_literal_string(sParam1);
	if (iVar0 >= iParam3)
	{
		StringCopy(&cVar2, _0x806862e5d266cf38(sParam0, (iVar0 - iParam3), iVar0), 64);
	}
	else
	{
		StringCopy(&cVar2, sParam0, 64);
	}
	iVar0 = get_length_of_literal_string(&cVar2);
	if (iVar1 >= iParam3)
	{
		StringCopy(&cVar10, _0x806862e5d266cf38(sParam1, (iVar1 - iParam3), iVar1), 64);
	}
	else
	{
		StringCopy(&cVar10, sParam1, 64);
	}
	iVar1 = get_length_of_literal_string(&cVar10);
	if (bParam2)
	{
		if ((iVar0 + iVar1) >= iParam3)
		{
			StringCopy(&cVar10, _0x806862e5d266cf38(&cVar10, iVar0, iVar1), 64);
		}
	}
	else if ((iVar0 + iVar1) >= iParam3)
	{
		StringCopy(&cVar2, _0x806862e5d266cf38(&cVar2, iVar1, iVar0), 64);
	}
	Var18 = { cVar2 };
	StringConCat(&Var18, &cVar10, 64);
	return Var18;
}

char* func_530(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

int func_531(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_844(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_532(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_533(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_534(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_535(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_536(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_537(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
		default:
			break;
	}
	return 30;
}

void func_538(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_845(iParam0, iParam6);
	func_846(iParam0, iParam5);
	func_847(iParam0, iParam4);
	func_848(iParam0, iParam3);
	func_849(iParam0, iParam2);
	func_850(iParam0, iParam1);
}

void func_539(var uParam0)
{
	StringCopy(&(uParam0->f_17), "CAMP", 8);
}

void func_540(var uParam0)
{
	if (_does_text_database_exist(&(uParam0->f_17)))
	{
		_text_database_request(&(uParam0->f_17));
	}
	request_anim_dict("MECH_INVENTORY@CRAFTING@FALLBACKS@IN_HAND@MALE_A");
	request_model(809653548, false);
	request_model(975914773, false);
	request_model(1537403900, false);
	request_model(-236347221, false);
	request_model(-91245513, false);
	request_model(-655768729, false);
	request_model(-936393949, false);
	request_model(1597043588, false);
	request_model(-1594634038, false);
	request_model(-467664954, false);
	request_model(-856043142, false);
	request_model(-370340297, false);
	request_model(1974613782, false);
	func_851(uParam0);
	request_streamed_texture_dict("satchel_textures", false);
	if (uParam0->f_31)
	{
		request_model(-194504515, false);
		request_model(-2049449981, false);
		request_model(-1172163183, false);
		request_model(222541312, false);
		request_model(1289914954, false);
	}
}

bool func_541(var uParam0)
{
	if (func_852(&(uParam0->f_17)))
	{
		if (!_text_database_has_loaded(&(uParam0->f_17)))
		{
			return false;
		}
	}
	if (!has_anim_dict_loaded("MECH_INVENTORY@CRAFTING@FALLBACKS@IN_HAND@MALE_A"))
	{
		return false;
	}
	if (!func_853(uParam0, &(uParam0->f_63)))
	{
		return false;
	}
	if (!func_853(uParam0, &(uParam0->f_65)))
	{
		return false;
	}
	if (!func_853(uParam0, &(uParam0->f_66)))
	{
		return false;
	}
	if (!func_853(uParam0, &(uParam0->f_67)))
	{
		return false;
	}
	if (!func_853(uParam0, &(uParam0->f_68)))
	{
		return false;
	}
	if (!func_853(uParam0, &(uParam0->f_69)))
	{
		return false;
	}
	if (!has_streamed_texture_dict_loaded("satchel_textures"))
	{
		return false;
	}
	if (!has_model_loaded(809653548))
	{
		return false;
	}
	if (!has_model_loaded(975914773))
	{
		return false;
	}
	if (!has_model_loaded(1537403900))
	{
		return false;
	}
	if (!has_model_loaded(-236347221))
	{
		return false;
	}
	if (!has_model_loaded(-655768729))
	{
		return false;
	}
	if (!has_model_loaded(-936393949))
	{
		return false;
	}
	if (!has_model_loaded(1597043588))
	{
		return false;
	}
	if (!has_model_loaded(-91245513))
	{
		return false;
	}
	if (!has_model_loaded(-370340297))
	{
		return false;
	}
	if (!has_model_loaded(-467664954))
	{
		return false;
	}
	if (!has_model_loaded(-856043142))
	{
		return false;
	}
	if (!has_model_loaded(1974613782))
	{
		return false;
	}
	if (uParam0->f_31)
	{
		if (!has_model_loaded(-194504515))
		{
			return false;
		}
		if (!has_model_loaded(-2049449981))
		{
			return false;
		}
		if (!has_model_loaded(-1172163183))
		{
			return false;
		}
		if (!has_model_loaded(222541312))
		{
			return false;
		}
		if (!has_model_loaded(1289914954))
		{
			return false;
		}
	}
	return true;
}

int func_542()
{
	if (!func_719(&iVar0))
	{
		return 0;
	}
	_0x2208438012482a1a(Global_35, false, false);
	_0xc494c76a34266e82(Global_35, 13);
	iVar1 = func_591(iVar0);
	if (iVar1 == -358215195)
	{
		return 0;
	}
	func_854(&(Global_1946804->f_57[func_413(iVar1, 1)]), 8);
	func_207(26, 0, 0, 0, 0);
	return 1;
}

int func_543(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	_0x78c2e029db205a3a(iParam0, iParam1, 0);
	return func_855(iParam0, iParam1, bParam2, bParam3, iParam4);
}

int func_544(int iParam0)
{
	iVar0 = func_856(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return 1289914954;
}

void func_545(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam2)
	{
		uParam0->f_57.f_20++;
	}
	if (uParam0->f_57.f_37 == -1)
	{
		iVar0 = func_124(uParam0->f_57.f_77, 0, 0);
		iVar1 = func_857(uParam0->f_57.f_77, 0);
		iVar2 = func_858(uParam0->f_57.f_77, uParam0->f_57.f_78, func_551(), 0);
		if (iVar1 == -1)
		{
			iVar1 = iVar2;
		}
		else
		{
			iVar1 = (iVar1 - iVar0);
		}
		uParam0->f_57.f_37 = func_859(iVar1, iVar2);
	}
	if (func_317(uParam0->f_57.f_77))
	{
		if (bParam3)
		{
			func_157(&(uParam0->f_162[iParam1]), "CAMP_REC_COOK_AGN", 1);
		}
		else
		{
			func_157(&(uParam0->f_162[iParam1]), "CAMP_REC_COOK", 1);
		}
	}
	else if (bParam3)
	{
		func_157(&(uParam0->f_162[iParam1]), "CAMP_REC_MAKE_AGN", 1);
	}
	else if (func_372(uParam0->f_57.f_77, -1636519629) == -701492487)
	{
		func_157(&(uParam0->f_162[iParam1]), "CAMP_REC_BREW", 1);
	}
	else
	{
		func_157(&(uParam0->f_162[iParam1]), "CAMP_REC_MAKE", 1);
	}
}

void func_546()
{
	if (func_673())
	{
		func_860(1);
	}
}

int func_547(var uParam0)
{
	return uParam0->f_8;
}

bool func_548(int iParam0)
{
	iVar0 = func_861(iParam0);
	if (iVar0 == 1 || iVar0 == 5)
	{
		return true;
	}
	return false;
}

void func_549(var uParam0, int iParam1)
{
	uVar0[0] = uParam0[1];
	if (!does_entity_exist(Global_35) || Global_1935630->f_12)
	{
		func_44(uParam0, 0);
	}
	set_ped_can_play_ambient_anims(Global_35, false);
	set_ped_can_play_gesture_anims(Global_35, 0, 1);
	if ((func_23() != -1 && func_164()) || func_167())
	{
		if (func_165(uParam0[0], 0))
		{
			func_130(uParam0);
			func_137(uParam0);
		}
		return;
	}
	if (uParam0->f_58)
	{
		_0xc9caeaeec1256e54(-469828803);
	}
	disable_control_action(0, -719620017, false);
	disable_control_action(0, -124244224, false);
	_disable_first_person_cam_this_frame();
	switch (func_547(uParam0))
	{
		case 2:
			disable_all_control_actions(0);
			if (func_862(uParam0))
			{
				func_539(uParam0);
				func_540(uParam0);
				func_863(uParam0);
			}
			if (func_541(uParam0))
			{
				func_45(uParam0, 3);
			}
			break;
		case 3:
			disable_all_control_actions(0);
			if (func_23() == 0 && _0x251241caec707106())
			{
				func_130(uParam0);
				return;
			}
			if (func_862(uParam0))
			{
				func_130(uParam0);
				func_863(uParam0);
				if (func_132())
				{
					func_133(0);
				}
			}
			if (((uParam0->f_34 || func_229(uParam0[0], 1)) || func_56(8192)) || uParam0->f_35)
			{
				func_864(uParam0);
			}
			break;
		case 4:
			if (!uParam0->f_58)
			{
				disable_all_control_actions(0);
			}
			if (func_865(uParam0))
			{
				uParam0->f_62 = 1;
				if (func_56(4096))
				{
					uParam0->f_52 = 0;
				}
				else if (func_56(8192))
				{
					uParam0->f_52 = 4;
				}
				func_45(uParam0, 5);
			}
			break;
		case 5:
			if (!uParam0->f_58)
			{
				disable_all_control_actions(0);
			}
			if (func_866(uParam0))
			{
				func_45(uParam0, 6);
			}
			break;
		case 6:
			if (!uParam0->f_58)
			{
				disable_all_control_actions(0);
			}
			if (func_867(uParam0))
			{
				func_45(uParam0, 7);
			}
			break;
		case 7:
			if (!uParam0->f_58)
			{
				disable_all_control_actions(0);
			}
			if (func_862(uParam0))
			{
				func_868(uParam0);
				func_863(uParam0);
				return;
			}
			if (func_869(uParam0, 0))
			{
				if (func_870(uParam0, 0))
				{
					func_45(uParam0, 8);
				}
				else if (uParam0->f_31)
				{
					func_45(uParam0, 1);
				}
				else
				{
					func_45(uParam0, 0);
				}
			}
			break;
		case 15:
			if (!uParam0->f_58)
			{
				disable_all_control_actions(0);
			}
			if (!uParam0->f_62)
			{
				func_45(uParam0, 4);
				return;
			}
			if (func_871(uParam0))
			{
				func_870(uParam0, 1);
				func_45(uParam0, 8);
			}
			break;
		case 8:
			disable_all_control_actions(0);
			if (_is_app_active(-1624772174))
			{
				if (_0xf7c180f57f85d0b8(-1624772174))
				{
					Global_1911914->f_1580 = 0;
					func_45(uParam0, 10);
				}
			}
			break;
		case 9:
			if (!uParam0->f_58)
			{
				disable_all_control_actions(0);
			}
			if (func_862(uParam0))
			{
				func_868(uParam0);
				func_863(uParam0);
				return;
			}
			if (func_869(uParam0, 1))
			{
				func_45(uParam0, 10);
			}
			break;
		case 10:
			func_872(0);
			if (func_23() == 0 && _0x43ab9d5a7d415478())
			{
				func_130(uParam0);
				return;
			}
			if (func_862(uParam0))
			{
				func_130(uParam0);
				func_873(uParam0, 1);
				(*uParam0)[2] = func_81("CAMP_REC_QUIT", 814057702, 3, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
				if (func_66(32))
				{
					func_84(uParam0[2], 0, 1);
				}
				else
				{
					func_84(uParam0[2], 1, 1);
				}
				(*uParam0)[1] = func_81("CAMP_REC_MAKE", 1138488863, 3, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
				if (func_121(uParam0->f_75, 0))
				{
					uParam0->f_77 = uParam0->f_75;
					uParam0->f_78 = uParam0->f_76;
					func_874(uParam0, &(uParam0->f_74));
				}
				else
				{
					uParam0->f_77 = 0;
				}
				if (func_317(uParam0->f_75))
				{
					func_157(uParam0[1], "CAMP_REC_COOK", 1);
				}
				else if (func_372(uParam0->f_75, -1636519629) == -701492487)
				{
					func_157(uParam0[1], "CAMP_REC_BREW", 1);
				}
				else
				{
					func_157(uParam0[1], "CAMP_REC_MAKE", 1);
				}
				(*uParam0)[3] = func_81(func_875(uParam0), -711536720, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
				(*uParam0)[5] = func_876("RECIPE", -1384133541, 1710877787, 0);
				func_877(uParam0[5], -1384133541);
				func_877(uParam0[5], 1710877787);
				if (_databinding_is_data_id_valid(uParam0->f_73))
				{
					iVar2 = _databinding_read_data_int_from_parent(uParam0->f_73, "iNumCostVariants");
				}
				if (iVar2 > 1 && func_121(uParam0->f_77, 0))
				{
					func_84(uParam0[5], 1, 1);
				}
				else
				{
					func_84(uParam0[5], 0, 1);
				}
				(*uParam0)[6] = func_81("INFO", -69749786, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
				if (!uParam0->f_82)
				{
					func_157(uParam0[6], "INFO", 1);
				}
				else
				{
					func_157(uParam0[6], "INGREDIENTS", 1);
				}
				if (_databinding_get_array_count(uParam0->f_40) == 0)
				{
					func_878(uParam0);
					func_84(uParam0[6], 0, 1);
					_databinding_write_data_string_from_parent(uParam0->f_39, "tipText", _create_var_string(2, "CRFT_NO_REC_TIP"));
				}
				func_879(uParam0, uParam0->f_77, uParam0->f_78);
				func_863(uParam0);
			}
			if (Global_1911914->f_1580)
			{
				Global_1911914->f_1580 = 0;
				_0xd962f8579d702db5();
				func_878(uParam0);
				uParam0->f_77 = 0;
				uParam0->f_78 = 0;
				func_879(uParam0, 0, 0);
				func_84(uParam0[5], 0, 1);
				func_45(uParam0, 9);
			}
			else if (func_71(uParam0[2], 1))
			{
				if (uParam0->f_34)
				{
					func_45(uParam0, 16);
				}
				else
				{
					func_131(uParam0, 0);
					func_880("Exit", "SSCRFT_Sounds");
					if (uParam0->f_35)
					{
						uParam0->f_35 = 0;
						func_45(uParam0, 1);
					}
					else
					{
						func_45(uParam0, 3);
					}
				}
			}
			else if (func_229(uParam0[1], 1))
			{
				func_881(uParam0);
			}
			else if (func_229(uParam0[3], 1))
			{
				_0xd962f8579d702db5();
				uParam0->f_57 = !uParam0->f_57;
				func_878(uParam0);
				uParam0->f_77 = 0;
				uParam0->f_78 = 0;
				func_879(uParam0, 0, 0);
				func_84(uParam0[5], 0, 1);
				func_45(uParam0, 9);
			}
			else if (func_882(uParam0[5], 0, 1))
			{
				if (uParam0->f_79)
				{
					func_880("Nav_Left", "SSCRFT_Sounds");
					func_883(uParam0, 0);
				}
			}
			else if (func_882(uParam0[5], 1, 1))
			{
				if (uParam0->f_79)
				{
					func_880("Nav_Right", "SSCRFT_Sounds");
					func_883(uParam0, 1);
				}
			}
			else if (func_229(uParam0[6], 1))
			{
				func_884(uParam0, 1);
			}
			else
			{
				iVar3 = -813979060;
				while (_event_manager_is_event_pending(iVar3))
				{
					if (_event_manager_peek_event(iVar3, &iVar4))
					{
						if (iVar4 == 703281244 || iVar4 == -722926211)
						{
							func_885(uParam0);
						}
						else if (iVar4 == -1740156697)
						{
							func_886(uParam0, &iVar4);
						}
						else if (iVar4 == -1203660660)
						{
							if (func_165(uParam0[1], 0))
							{
								func_881(uParam0);
							}
						}
						_event_manager_pop_event(iVar3);
					}
				}
			}
			break;
		case 11:
			disable_control_action(0, 1287709438, false);
			disable_control_action(0, -2131587435, false);
			disable_control_action(0, -209515122, false);
			disable_control_action(0, -399233038, false);
			break;
		case 12:
			_uiprompt_set_active_group_this_frame(-1067771379, _create_var_string(0, uParam0->f_77), 1, 0, 0, 0);
			func_872(0);
			iVar8 = _0xc22aa08a8adb87d4(Global_35);
			iVar9 = func_372(uParam0->f_77, -1636519629);
			if (iVar8 == -1433449364)
			{
				if (!_0x68821369a2ceadd5(Global_35, 1335077954))
				{
					_0xd65fdc686a031c83(Global_35, 1335077954, 6f);
					_0x6d07b371e9439019(Global_35);
				}
				return;
			}
			if (iVar9 != -715814988)
			{
				if (iVar8 == -518407211)
				{
					if (!_0x68821369a2ceadd5(Global_35, 653141085))
					{
						_0xd65fdc686a031c83(Global_35, 653141085, 6f);
						_0x6d07b371e9439019(Global_35);
					}
					return;
				}
				else
				{
					_hide_ped_weapons(Global_35, 2, false);
				}
				if (((((((((iVar9 == 414472632 && !_is_anim_scene_loaded(uParam0->f_63, true, false)) || (iVar9 == -1136843638 && !_is_anim_scene_loaded(uParam0->f_66, true, false))) || (uParam0->f_88 != 0 && !has_model_loaded(uParam0->f_88))) || (iVar9 == -732326901 && !_is_anim_scene_loaded(uParam0->f_68, true, false))) || (iVar9 == 786205940 && !_is_anim_scene_loaded(uParam0->f_67, true, false))) || (iVar9 == -1141771998 && !_is_anim_scene_loaded(uParam0->f_69, true, false))) || (iVar9 == 364689687 && !_is_anim_scene_loaded(uParam0->f_70, true, false))) || (iVar9 == -842117252 && !_is_anim_scene_loaded(uParam0->f_71, true, false))) || (iVar9 == -1610298873 && !_is_anim_scene_loaded(uParam0->f_72, true, false)))
				{
					return;
				}
				else if (uParam0->f_64)
				{
					func_887(uParam0);
					uParam0->f_64 = 0;
				}
			}
			else
			{
				if (!_is_anim_scene_loaded(uParam0->f_65, true, false) || (is_ped_active_in_scenario(Global_35, 1) && !is_ped_active_in_scenario(Global_35, 0)))
				{
					return;
				}
				else if (uParam0->f_64)
				{
					func_887(uParam0);
					uParam0->f_64 = 0;
				}
				if (iVar8 != -518407211)
				{
					if (uParam0->f_31)
					{
						if (!_0x68821369a2ceadd5(Global_35, 796456488))
						{
							_0xd65fdc686a031c83(Global_35, 796456488, 2f);
							_0x6d07b371e9439019(Global_35);
						}
						return;
					}
				}
			}
			if (func_862(uParam0))
			{
				func_863(uParam0);
				func_888(uParam0, 0, &uVar0);
				func_887(uParam0);
				if (func_70(uParam0[1]))
				{
					func_144((*uParam0)[1], 1, 1);
				}
				if (func_889(iVar9))
				{
					uParam0->f_53 = 250;
					(*uParam0)[1] = func_81("CAMP_REC_MAKE", 1138488863, 3, 0, 0, 0, uParam0->f_53, uParam0->f_53 + 1, 1, 1073741824, 1704213876, 0);
					func_879(uParam0, uParam0->f_77, uParam0->f_78);
					func_82(uParam0[1], -1067771379, 0, 1);
					func_83(uParam0[1], 10, 1, 1);
					func_83(uParam0[1], 11, 1, 1);
					func_84(uParam0[1], 0, 1);
				}
				else
				{
					(*uParam0)[1] = func_81("CAMP_REC_MAKE", 1138488863, 3, 0, 0, 0, 250, 251, 1, 1073741824, 1704213876, 0);
					func_82(uParam0[1], -1067771379, 0, 1);
					func_331(uParam0[1], 1, 1);
					func_83(uParam0[1], 10, 1, 1);
					func_83(uParam0[1], 11, 1, 1);
					func_84(uParam0[1], 0, 1);
				}
				return;
			}
			if (has_anim_event_fired(Global_35, -563455375))
			{
				_0x5f217bc1190503d8("CRFT_BLIP_LIGHT", 0.2f);
			}
			if (func_889(iVar9))
			{
				if (!uParam0->f_36)
				{
					if (func_165(uParam0[1], 0))
					{
						if (func_555(uParam0[1], 1) || is_control_pressed(0, 1138488863))
						{
							uParam0->f_36 = 1;
							func_84(uParam0[1], 0, 1);
							func_84(uParam0[4], 0, 1);
						}
					}
				}
				if ((((((iVar9 == -1136843638 || iVar9 == -732326901) || iVar9 == 786205940) || iVar9 == -1141771998) || iVar9 == 364689687) || iVar9 == -842117252) || iVar9 == -1610298873)
				{
					if (uParam0->f_88 != 0)
					{
						if ((uParam0->f_88 == 1186037675 && has_anim_event_fired(Global_35, -1011038463)) || (uParam0->f_88 != 1186037675 && has_anim_event_fired(Global_35, 2024314131)))
						{
							if (does_entity_exist(uParam0->f_86))
							{
								delete_object(&(uParam0->f_86));
							}
							if (func_190(uParam0->f_77, -1588156645) && iVar9 != -842117252)
							{
								uParam0->f_86 = _create_weapon_object(func_252(uParam0->f_77, 0), 1, Global_36, true, 1f);
								set_entity_completely_disable_collision(uParam0->f_86, false, false);
								if (iVar9 == -1610298873)
								{
									set_anim_scene_entity(func_890(uParam0, iVar9), "DYNAMITE", uParam0->f_86, 0);
								}
							}
							else
							{
								uParam0->f_86 = create_object(uParam0->f_88, Global_36, true, true, false, false, false);
								set_entity_completely_disable_collision(uParam0->f_86, false, false);
							}
							if (iVar9 == 786205940)
							{
								attach_entity_to_entity(uParam0->f_86, Global_35, get_ped_bone_index(Global_35, 37709), 0f, 0.5f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
							}
							else if (iVar9 == -1141771998 || iVar9 == -1610298873)
							{
								attach_entity_to_entity(uParam0->f_86, Global_35, get_ped_bone_index(Global_35, 37709), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
							}
							else if (iVar9 == -842117252)
							{
								attach_entity_to_entity(uParam0->f_86, Global_35, get_ped_bone_index(Global_35, 37709), 0f, 0f, 0.1f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
							}
							else
							{
								attach_entity_to_entity(uParam0->f_86, Global_35, get_ped_bone_index(Global_35, 7966), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
							}
						}
					}
					if (has_anim_event_fired(Global_35, 966057053))
					{
						if (does_entity_exist(uParam0->f_86))
						{
							delete_object(&(uParam0->f_86));
						}
						if (iVar9 == -732326901 || iVar9 == 364689687)
						{
							uParam0->f_86 = _create_weapon_object(-764310200, 1, Global_36, true, 1f);
						}
						else if (iVar9 == -1141771998)
						{
							uParam0->f_86 = _create_weapon_object(-1511427369, 1, Global_36, true, 1f);
						}
						else if (iVar9 == -842117252)
						{
							uParam0->f_86 = create_object(-370340297, Global_36, true, true, false, false, true);
						}
						else if (iVar9 == -1610298873)
						{
							uParam0->f_86 = create_object(1974613782, Global_36, true, true, false, false, true);
							if (iVar9 == -1610298873)
							{
								set_anim_scene_entity(func_890(uParam0, iVar9), "DYNAMITE", uParam0->f_86, 0);
							}
						}
						else
						{
							uParam0->f_86 = create_object(-655768729, Global_36, true, true, false, false, false);
						}
						set_entity_completely_disable_collision(uParam0->f_86, false, false);
						if (iVar9 == 786205940)
						{
							attach_entity_to_entity(uParam0->f_86, Global_35, get_ped_bone_index(Global_35, 37709), 0f, 0.5f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
						}
						else if ((iVar9 == -1141771998 || iVar9 == -1610298873) || iVar9 == -842117252)
						{
							attach_entity_to_entity(uParam0->f_86, Global_35, get_ped_bone_index(Global_35, 37709), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
						}
						else
						{
							attach_entity_to_entity(uParam0->f_86, Global_35, get_ped_bone_index(Global_35, 7966), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
						}
					}
					if (has_anim_event_fired(Global_35, 1394836706))
					{
						if (does_entity_exist(uParam0->f_86))
						{
							delete_object(&(uParam0->f_86));
						}
					}
					if (has_anim_event_fired(Global_35, 1471149551))
					{
						if (!is_entity_dead(uParam0->f_87))
						{
							set_entity_visible(uParam0->f_87, true);
						}
					}
				}
				else if (iVar9 == 414472632 || iVar9 == -715814988)
				{
					if (has_anim_event_fired(Global_35, 966057053))
					{
						set_entity_visible(uParam0->f_85, true);
					}
				}
				if (has_anim_event_fired(Global_35, -61921192))
				{
					if (!func_98(0))
					{
						if (uParam0->f_21 == -1)
						{
							uParam0->f_21 = func_135(uParam0->f_77, uParam0->f_78);
							if (uParam0->f_21 == -1)
							{
								func_891(uParam0, iVar9, 0);
							}
							return;
						}
						else if (func_548(uParam0->f_21))
						{
							return;
						}
						uParam0->f_21 = -1;
					}
					else
					{
						func_543(uParam0->f_77, uParam0->f_78, 1, func_551(), 0);
						func_99(uParam0->f_77, 1, 0, 1, 0);
						if (uParam0->f_31)
						{
							func_546();
						}
					}
					if (iVar9 == -842117252)
					{
						if (does_entity_exist(uParam0->f_86))
						{
							delete_object(&(uParam0->f_86));
						}
					}
					uParam0->f_20++;
					uParam0->f_38++;
					if ((!func_295(uParam0->f_77, uParam0->f_78, 0, func_551(), 0, 0) || func_560(uParam0->f_77, 1, 0)) || uParam0->f_20 >= uParam0->f_37)
					{
						func_891(uParam0, iVar9, 0);
						return;
					}
				}
				if (!uParam0->f_36)
				{
					if (!(func_165(uParam0[1], 0) && is_control_pressed(0, 1138488863)))
					{
						if (has_anim_event_fired(Global_35, 596390595))
						{
							func_891(uParam0, iVar9, 1);
						}
					}
				}
				if (has_anim_event_fired(Global_35, 1290366555) && uParam0->f_20 < (uParam0->f_37 - 1))
				{
					func_84(uParam0[1], 1, 1);
					func_84(uParam0[4], 1, 1);
					uParam0->f_36 = 0;
				}
				if (_0xb89fcff19dafff28(func_890(uParam0, iVar9), "player"))
				{
					func_891(uParam0, iVar9, 0);
				}
			}
			else if (func_29(&(uParam0->f_89), (IntToFloat(uParam0->f_53) / 1000f)))
			{
				if (!func_98(0))
				{
					if (uParam0->f_21 == -1)
					{
						uParam0->f_21 = func_135(uParam0->f_77, uParam0->f_78);
						if (uParam0->f_21 == -1)
						{
							func_891(uParam0, iVar9, 0);
						}
						return;
					}
					else if (func_548(uParam0->f_21))
					{
						return;
					}
					uParam0->f_21 = -1;
				}
				else
				{
					func_543(uParam0->f_77, uParam0->f_78, 1, func_551(), 0);
					func_99(uParam0->f_77, 1, 1, 1, 0);
					if (uParam0->f_31)
					{
						func_546();
					}
				}
				uParam0->f_37 = -1;
				uParam0->f_38 = 0;
				func_55(131072);
				if (does_entity_exist(uParam0->f_86))
				{
					delete_object(&(uParam0->f_86));
				}
				uParam0->f_55 = 0;
				bVar10 = true;
				if (!func_295(uParam0->f_77, uParam0->f_78, 0, func_551(), 0, 0) || func_560(uParam0->f_77, 1, 0))
				{
					bVar10 = false;
				}
				func_891(uParam0, iVar9, bVar10);
			}
			break;
		case 0:
			if (func_132())
			{
				func_133(0);
			}
			if (func_862(uParam0))
			{
				func_130(uParam0);
				func_863(uParam0);
			}
			break;
		case 13:
			_uiprompt_set_active_group_this_frame(-1067771379, _create_var_string(0, uParam0->f_77), 1, 0, 0, 0);
			func_872(0);
			if (does_entity_exist(uParam0->f_87))
			{
				if (has_anim_event_fired(Global_35, -2015667492))
				{
					delete_object(&(uParam0->f_87));
				}
			}
			if (!func_66(128))
			{
				if (!func_165(uParam0[2], 0))
				{
					func_84(uParam0[2], 1, 1);
					func_331(uParam0[2], 0, 1);
				}
				if (!func_165(uParam0[4], 0))
				{
					func_84(uParam0[4], 1, 1);
					func_331(uParam0[4], 1, 1);
				}
			}
			if (func_71(uParam0[2], 1))
			{
				func_130(uParam0);
				func_337(&(uParam0->f_89));
				func_45(uParam0, 14);
				return;
			}
			else if (func_152(uParam0[4], 1))
			{
				func_130(uParam0);
				if (does_entity_exist(uParam0->f_85))
				{
					delete_object(&(uParam0->f_85));
				}
				if (does_entity_exist(uParam0->f_86))
				{
					delete_object(&(uParam0->f_86));
				}
				if (does_entity_exist(uParam0->f_87))
				{
					delete_object(&(uParam0->f_87));
				}
				iVar11 = _0x569f1e1237508deb(Global_35);
				if (iVar11 != -518407211)
				{
					set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
				}
				iVar9 = func_372(uParam0->f_77, -1636519629);
				iVar12 = func_890(uParam0, iVar9);
				remove_anim_scene_entity(iVar12, "player", Global_35);
				func_131(uParam0, 0);
				func_880("Exit", "SSCRFT_Sounds");
				if (uParam0->f_31)
				{
					func_45(uParam0, 1);
				}
				else
				{
					func_45(uParam0, 0);
				}
				return;
			}
			else if (func_229(uParam0[1], 1))
			{
				func_84(uParam0[4], 0, 1);
				func_84(uParam0[2], 0, 1);
				func_84(uParam0[1], 0, 1);
				iVar9 = func_372(uParam0->f_77, -1636519629);
				iVar13 = func_890(uParam0, iVar9);
				if (iVar13 != 0)
				{
					reset_anim_scene(iVar13, "pl_craft");
					load_anim_scene(iVar13);
				}
				func_337(&(uParam0->f_89));
				uParam0->f_36 = 0;
				func_45(uParam0, 12);
				return;
			}
			if (func_338(uParam0[4], 1))
			{
				if (!func_125(&(uParam0->f_89)))
				{
					func_31(&(uParam0->f_89));
				}
				else if (func_29(&(uParam0->f_89), 0.1f))
				{
					func_157(uParam0[4], "CAMP_REC_QUIT", 1);
				}
			}
			else
			{
				if (func_125(&(uParam0->f_89)))
				{
					func_337(&(uParam0->f_89));
				}
				func_157(uParam0[4], "CAMP_REC_BACK", 1);
			}
			break;
		case 14:
			_uiprompt_set_active_group_this_frame(-1067771379, _create_var_string(0, uParam0->f_77), 1, 0, 0, 0);
			func_872(0);
			if (does_entity_exist(uParam0->f_87))
			{
				if (has_anim_event_fired(Global_35, -2015667492))
				{
					delete_object(&(uParam0->f_87));
				}
			}
			iVar9 = func_372(uParam0->f_77, -1636519629);
			iVar14 = func_890(uParam0, iVar9);
			if ((iVar14 == 0 || (!_does_anim_scene_exist(iVar14) || _0xf94692eb9dc15d74(iVar14, 0))) || has_anim_event_fired(Global_35, -1208591336))
			{
				if (does_entity_exist(uParam0->f_85))
				{
					delete_object(&(uParam0->f_85));
				}
				if (does_entity_exist(uParam0->f_86))
				{
					delete_object(&(uParam0->f_86));
				}
				iVar15 = _0x569f1e1237508deb(Global_35);
				if (iVar15 != -518407211)
				{
					set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
				}
				remove_anim_scene_entity(iVar14, "player", Global_35);
				func_45(uParam0, 15);
			}
			break;
		case 1:
			if (func_132())
			{
				func_133(0);
			}
			if (func_862(uParam0))
			{
				if (func_70(uParam0[0]))
				{
					func_84(uParam0[0], 0, 1);
				}
				func_863(uParam0);
			}
			break;
		case 16:
			if (func_132())
			{
				func_133(0);
			}
			if (func_862(uParam0))
			{
				func_863(uParam0);
			}
			func_131(uParam0, 0);
			_databinding_remove_data_entry(uParam0->f_39);
			Global_1911914->f_1576 = 0;
			terminate_this_thread();
			break;
	}
}

void func_550(var uParam0)
{
	if (uParam0->f_57.f_78 == 278772510)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		func_251(func_250(1281481195), 1);
	}
	_0x378d3b1b11d9385b(uParam0->f_57.f_77);
	func_47(16384);
	func_55(65536);
	func_49(16);
	if (func_98(0))
	{
		func_543(uParam0->f_57.f_77, uParam0->f_57.f_78, 1, func_551(), 0);
	}
	func_144(uParam0->f_162[6], 1, 1);
	if (bVar0)
	{
		uParam0->f_162[6] = func_81("CRAFT_FASTER", 1367437629, 2, 0, 0, 6, 7000, 10000, 35, 1073741824, 1704213876, 0);
	}
	else
	{
		uParam0->f_162[6] = func_81("CRAFT_FASTER", 1367437629, 2, 0, 0, 6, 7000, 10000, 25, 1073741824, 1704213876, 0);
	}
	func_545(uParam0, 6, 0, 0);
	func_84(&(uParam0->f_162[6]), 0, 1);
	func_82(&(uParam0->f_162[6]), -1067771379, 0, 1);
	uParam0->f_196 = get_game_timer();
	if (does_entity_exist(uParam0->f_160))
	{
		delete_object(&(uParam0->f_160));
	}
	uParam0->f_160 = create_object(func_544(uParam0->f_57.f_77), Global_36, false, false, false, false, true);
	if (_0x3bbdd6143ff16f98(Global_35, uParam0->f_160, "p_meatChunks01x_PH_L_HAND", 0, 0, 1))
	{
	}
	set_entity_visible(uParam0->f_160, false);
	_set_object_burn_level(uParam0->f_160, 0f, true);
	uParam0->f_208 = 3;
	func_130(&(uParam0->f_57));
	func_45(&(uParam0->f_57), 0);
	func_553();
	_0xac84686c06184b0d("cooking", "Player_Campfire_Scenes");
	func_62(uParam0, 13);
}

bool func_551()
{
	iVar0 = func_204(7);
	if (!is_ped_injured(iVar0))
	{
		if (func_52(Global_35, iVar0, 1) < 400f)
		{
			iVar1 = 1;
		}
	}
	return iVar1;
}

void func_552(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		uParam0->f_162[6] = func_81("CRAFT_FASTER", 1367437629, 2, 0, 0, 0, 7000, 10000, 25, 1073741824, 1704213876, 0);
		func_545(uParam0, 6, 0, 1);
		func_84(&(uParam0->f_162[6]), 0, 1);
		func_82(&(uParam0->f_162[6]), -1067771379, 0, 1);
	}
	uParam0->f_162[11] = func_81("CAMP_REC_BACK", 992265328, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
	uParam0->f_162[3] = func_81("CAMP_REC_BACK", 992265328, 1, 0, 0, 5, 570, 4000, 10, 1073741824, -820096546, 0);
	func_332(uParam0->f_162[3], "INPUT_PCRAFT_EXIT");
	func_331(&(uParam0->f_162[11]), 0, 1);
	func_82(&(uParam0->f_162[11]), -1067771379, 0, 1);
	func_82(&(uParam0->f_162[3]), -1067771379, 0, 1);
	func_83(&(uParam0->f_162[3]), 19, 1, 1);
	func_83(&(uParam0->f_162[3]), 20, 1, 1);
	func_83(&(uParam0->f_162[3]), 13, 1, 1);
	func_83(&(uParam0->f_162[11]), 13, 1, 1);
	func_84(&(uParam0->f_162[11]), 0, 1);
	func_84(&(uParam0->f_162[3]), 0, 1);
}

int func_553()
{
	if (!func_400())
	{
		return 0;
	}
	if (!func_719(&iVar0))
	{
		return 0;
	}
	if (!func_401(iVar0))
	{
		return 0;
	}
	iVar1 = func_591(iVar0);
	if (iVar1 == -358215195)
	{
		return 0;
	}
	func_403(&iVar2, 1);
	return func_404(iVar0, iVar2);
}

void func_554(var uParam0, int iParam1)
{
	if (func_338(&(uParam0->f_162[6]), 1))
	{
		bVar0 = true;
	}
	if (has_anim_event_fired(Global_35, -1812847403))
	{
		if (_0x1252c029fc8ebb4d())
		{
			_0x9821b68cd3e05f2b("distanceToFlame", 1f, "cook_meat_sizzle_loop", "Player_Campfire_Sounds");
			_0x709ba8c08c5c008d();
		}
	}
	if (has_anim_event_fired(Global_35, 1738621174))
	{
		if (!_0x1252c029fc8ebb4d())
		{
			_0x9821b68cd3e05f2b("distanceToFlame", 0f, "cook_meat_sizzle_loop", "Player_Campfire_Sounds");
			_0x5f217bc1190503d8("CRFT_SEAR_MEAT", 7f);
		}
	}
	switch (iParam1)
	{
		case 1412614124:
			if (bVar0)
			{
				if (func_85(uParam0))
				{
					if (func_88(1868334347, 0.5f))
					{
						uParam0->f_196 = get_game_timer();
					}
				}
			}
			break;
		case -1425182948:
			if (bVar0)
			{
				if (func_85(uParam0))
				{
					if (func_88(1853097147, 0.5f))
					{
						uParam0->f_196 = get_game_timer();
					}
				}
			}
			break;
		case -1731736943:
			if (bVar0)
			{
				if (func_85(uParam0))
				{
					if (func_88(471626545, 0.5f))
					{
						uParam0->f_196 = get_game_timer();
					}
				}
			}
			break;
		case -283636008:
			if (!bVar0)
			{
				if (func_85(uParam0))
				{
					if (func_88(-1169480623, 0.5f))
					{
						uParam0->f_196 = get_game_timer();
					}
				}
			}
			break;
		case 2070743955:
			if (!bVar0)
			{
				if (func_85(uParam0))
				{
					if (func_88(857282645, 0.5f))
					{
						uParam0->f_196 = get_game_timer();
					}
				}
			}
			break;
		case -363005419:
			if (!bVar0)
			{
				if (func_85(uParam0))
				{
					if (func_88(-1250235606, 0.5f))
					{
						uParam0->f_196 = get_game_timer();
					}
				}
			}
			break;
		case 512684539:
			if (bVar0)
			{
				if (func_85(uParam0))
				{
					if (func_88(-348575163, 0.5f))
					{
						uParam0->f_196 = get_game_timer();
					}
				}
			}
			break;
		case -87088667:
			if (!bVar0)
			{
				if (func_85(uParam0))
				{
					if (func_88(-266297705, 0.5f))
					{
						uParam0->f_196 = get_game_timer();
					}
				}
			}
			break;
	}
}

bool func_555(int iParam0, bool bParam1)
{
	if (bParam1 && !func_70(iParam0))
	{
		return false;
	}
	iVar0 = func_163(iParam0);
	return _uiprompt_is_pressed((*Global_1945938)[iVar0]->f_3);
}

void func_556(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((func_70(&(uParam0->f_162[6])) && func_295(uParam0->f_57.f_77, uParam0->f_57.f_78, 0, func_551(), 0, 0)) && !func_560(uParam0->f_57.f_77, 1, 0))
		{
			func_84(&(uParam0->f_162[6]), 1, 1);
		}
	}
	if (!func_165(&(uParam0->f_162[11]), 0))
	{
		func_84(&(uParam0->f_162[11]), 1, 1);
		func_331(&(uParam0->f_162[11]), 0, 1);
	}
	if (!func_165(&(uParam0->f_162[3]), 0))
	{
		func_84(&(uParam0->f_162[3]), 1, 1);
	}
}

void func_557(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_144((*uParam0)[iVar0], 1, 1);
		iVar0++;
	}
}

bool func_558(var uParam0)
{
	if (!func_85(uParam0) || (get_game_timer() - uParam0->f_196) < 500)
	{
		return false;
	}
	if (uParam0->f_154 == 0)
	{
		func_88(420089068, 6f);
		uParam0->f_196 = get_game_timer();
		return true;
	}
	else if (uParam0->f_154 == 1)
	{
		func_88(1352801403, 6f);
		uParam0->f_196 = get_game_timer();
		return true;
	}
	else if (uParam0->f_154 == 2)
	{
		if (!func_340(uParam0, 2))
		{
			return false;
		}
		if (func_343(Global_35, uParam0[1], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNEEL3@MALE_A@KNEEL3_TRANS_COFFEE2", "KNEEL3_TRANS_COFFEE2", "WORLD_PLAYER_DYNAMIC_KNEEL_POST_FIRE_CRAFT"))
		{
			uParam0->f_157 = 6;
			uParam0->f_154 = 1;
			uParam0->f_196 = get_game_timer();
			return true;
		}
	}
	else if (uParam0->f_154 == 3)
	{
		if (!func_340(uParam0, 3))
		{
			return false;
		}
		if (func_343(Global_35, uParam0[0], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNEEL4@MALE_A@KNEEL4_TRANS_COFFEE1", "KNEEL4_TRANS_COFFEE1", "WORLD_PLAYER_DYNAMIC_KNEEL_POST_FIRE_CRAFT"))
		{
			uParam0->f_157 = 6;
			uParam0->f_154 = 0;
			uParam0->f_196 = get_game_timer();
			return true;
		}
	}
	return false;
}

void func_559(int iParam0, bool bParam1)
{
	if (bParam1 && !func_70(iParam0))
	{
		return;
	}
	iVar0 = func_163(iParam0);
	_uiprompt_restart_modes((*Global_1945938)[iVar0]->f_3);
}

bool func_560(int iParam0, int iParam1, bool bParam2)
{
	Var0 = { func_296(iParam0, 0, 0) };
	return func_297(iParam0, &Var0, iParam1, 0, bParam2);
}

float func_561(int iParam0, bool bParam1)
{
	if (bParam1 && !func_70(iParam0))
	{
		return 0f;
	}
	iVar0 = func_163(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_get_mash_mode_progress((*Global_1945938)[iVar0]->f_3);
	}
	return _0x81801291806dbc50((*Global_1945938)[iVar0]->f_3);
}

void func_562(var uParam0)
{
	func_144(uParam0->f_162[6], 1, 1);
	uParam0->f_162[6] = func_81("CRAFT_FASTER", 1367437629, 2, 0, 0, 6, 6000, 10000, 25, 1073741824, 1704213876, 0);
	func_545(uParam0, 6, 0, 0);
	func_82(&(uParam0->f_162[6]), -1067771379, 0, 1);
	if (func_98(0))
	{
		func_543(uParam0->f_57.f_77, uParam0->f_57.f_78, 1, func_551(), 0);
	}
	func_84(&(uParam0->f_162[6]), 0, 1);
	func_553();
	uParam0->f_196 = get_game_timer();
	_0xac84686c06184b0d("crafting", "Player_Campfire_Scenes");
	func_62(uParam0, 1);
}

bool func_563(int iParam0)
{
	iVar0 = _get_weapon_unlock(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (_unlock_is_visible(iVar0))
	{
		return true;
	}
	return false;
}

bool func_564(int iParam0)
{
	iVar0 = _get_weapon_unlock(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (_unlock_is_unlocked(iVar0))
	{
		return true;
	}
	return false;
}

bool func_565(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5, int iParam6)
{
	if (iParam0 != 0 && iParam1 != 0)
	{
		iVar1 = func_199(iParam1);
		iVar5 = func_892(iParam1);
		iVar0 = 0;
		while (iVar0 < iVar5)
		{
			if (_item_database_get_has_slot_info(iVar1, iVar0, &uVar2))
			{
				if (_item_database_can_equip_item_on_category(iParam0, iVar1, uVar2))
				{
					*uParam4 = { func_296(iParam1, 0, 0) };
					if (iParam6 != 0)
					{
						uParam4->f_4 = iParam6;
					}
					*uParam3 = { func_346(iParam1, *uParam4, uParam4->f_4, 0) };
					*iParam2 = uVar2;
					return true;
				}
			}
			iVar0++;
		}
		if (bParam5)
		{
			Var6.f_9 = -1591664384;
			Var20.f_9 = -1591664384;
			iVar34 = func_86(0);
			Var37 = { func_296(iParam1, 0, 0) };
			if (iParam6 != 0)
			{
				Var37.f_4 = iParam6;
			}
			Var42 = { func_346(iParam1, Var37, Var37.f_4, 0) };
			iVar35 = _0xe843d21a8e2498aa(iVar34, &Var42);
			iVar36 = 0;
			while (iVar36 < iVar35)
			{
				if (_0xcd9a485f2b383b44(iVar34, &Var42, iVar36, &Var6))
				{
					iVar1 = func_199(Var6.f_4);
					iVar5 = _item_database_get_has_slot_count(iVar1);
					iVar0 = 0;
					while (iVar0 < iVar5)
					{
						if (_item_database_get_has_slot_info(iVar1, iVar0, &uVar2))
						{
							if (_item_database_can_equip_item_on_category(iParam0, iVar1, uVar2))
							{
								if (func_893(Var42, Var6.f_9, &Var20, 0))
								{
									uParam4->f_4 = Var6.f_9;
									*uParam4 = { Var6.f_5 };
									*uParam3 = { Var20 };
									*iParam2 = uVar2;
									return true;
								}
							}
						}
						iVar0++;
					}
				}
				iVar36++;
			}
		}
	}
	*iParam2 = 0;
	return false;
}

struct<4> func_566()
{
	Var0 = { func_583(0) };
	return func_346(856287005, Var0, -218846335, 0);
}

bool func_567(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_121(iParam0, 0))
	{
	}
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return false;
	}
	if (func_297(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return false;
	}
	if (!func_98(0))
	{
		return false;
	}
	if (!_0xcb5d11f9508a928d(func_86(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_568(int iParam0, int iParam1)
{
	if (!func_121(iParam0, 0))
	{
		return false;
	}
	if (!func_565(iParam0, 856287005, &iVar9, &uVar5, &uVar0, 1, 0))
	{
		return false;
	}
	Var10 = { func_566() };
	Var14 = { func_346(iParam0, Var10, iVar9, 0) };
	if (func_894(Var14, iParam1))
	{
		if (func_895(iParam0))
		{
			if (func_896(325139909, &iVar18))
			{
				if (func_568(iVar18, 0))
				{
				}
			}
		}
		else if (func_569(iParam0))
		{
			if (func_896(325139909, &iVar19))
			{
				if (func_568(iVar19, 0))
				{
				}
			}
			if (func_896(986998820, &iVar20))
			{
				if (func_568(iVar20, 0))
				{
				}
			}
			iVar21 = func_570(iParam0);
			if (func_121(iVar21, 0))
			{
				if (func_568(iVar21, 1))
				{
				}
			}
		}
		func_571();
		return true;
	}
	return false;
}

bool func_569(int iParam0)
{
	if (!func_121(iParam0, 0))
	{
		return false;
	}
	if (func_190(iParam0, -251515357))
	{
		return true;
	}
	return false;
}

int func_570(int iParam0)
{
	switch (iParam0)
	{
		case -1249891745:
			return 263080063;
		case -769274720:
			return -34331381;
		case 893370428:
			return -993578318;
		case 736792276:
			return 579268144;
		case -949205287:
			return 1104489688;
	}
	return 0;
}

int func_571()
{
	Var0 = { func_296(856287005, 0, 0) };
	Var5 = { func_346(856287005, Var0, Var0.f_4, 0) };
	iVar10 = func_199(856287005);
	if (_item_database_get_has_slot_info(iVar10, 0, &iVar11))
	{
		iVar14 = func_897(Var5, -415648720, 0);
	}
	if (!func_121(iVar14, 0))
	{
		return 0;
	}
	bVar15 = false;
	iVar20 = func_892(856287005);
	iVar9 = 0;
	while (iVar9 < iVar20)
	{
		if (_item_database_get_has_slot_info(iVar10, iVar9, &iVar11))
		{
			bVar15 = false;
			iVar21 = func_897(Var5, iVar11, 0);
			if (!func_121(iVar21, 0))
			{
				if (iVar11 == 325139909)
				{
					if (func_569(iVar14) || func_895(iVar14))
					{
					}
					else
					{
						Jump @219; //curOff = 194
						if (iVar11 == 986998820)
						{
							if (func_569(iVar14))
							{
							}
							else
							{
								bVar15 = true;
								Jump @259; //curOff = 222
								if (iVar11 == -1189569496)
								{
									if (!func_569(iVar14) && func_898(iVar21))
									{
										bVar15 = true;
									}
								}
								if (bVar15)
								{
									if (func_899(iVar11, &Var16, 1))
									{
										if (!func_894(Var16, 1))
										{
										}
									}
								}
							}
							iVar9++;
							return 1;
						}
					}
				}
			}
		}
	}
}

bool func_572()
{
	return !&Global_1911774;
}

void func_573(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	Global_1911774->f_4[Global_1911774->f_3] = iParam0;
	Global_1911774->f_4[Global_1911774->f_3]->f_1 = iParam1;
	Global_1911774->f_4[Global_1911774->f_3]->f_2 = bParam2;
	Global_1911774->f_4[Global_1911774->f_3]->f_3 = bParam3;
	if (Global_1911774->f_3 < 20)
	{
		Global_1911774->f_3++;
	}
}

char* func_574(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_575(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (_item_database_fillout_ui_data(iParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (is_string_null_or_empty(&(Var3.f_2[iVar0])))
			{
				Jump @227; //curOff = 56
			}
			else if (is_string_null_or_empty(Var3.f_2[iVar0]->f_1))
			{
			}
			else
			{
				iVar1 = get_hash_key(&(Var3.f_2[iVar0]));
				iVar2 = get_hash_key(Var3.f_2[iVar0]->f_1);
				if (iParam2 != 0 && Var3.f_2[iVar0]->f_2 != iParam2)
				{
					Jump @227; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @227; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @227; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = { *Var3.f_2[iVar0] };
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

char* func_576(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

var func_577(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
{
	Var0 = -2;
	Var0.f_1 = sParam5;
	Var0.f_2 = sParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = iParam4;
	Var13.f_6 = 0;
	uVar20 = _0xb249ebcb30dd88e0(&Var0, &Var13, iParam8);
	func_900(sParam0, sParam1, iParam2);
	return uVar20;
}

bool func_578(int iParam0, int iParam1)
{
	if (!func_121(iParam0, 0))
	{
		return false;
	}
	Var0.f_4 = func_582(iParam1);
	if (!func_901(iParam0, Var0.f_4))
	{
		return false;
	}
	iVar5 = func_621(iParam0, &Var0, 1, 0);
	iVar6 = func_755(iParam0, 0);
	if (iVar5 >= 0 && iVar6 > iVar5)
	{
		return false;
	}
	return true;
}

bool func_579(int iParam0)
{
	if (!func_121(iParam0, 0))
	{
	}
	if (func_190(iParam0, 173360570))
	{
		return true;
	}
	return false;
}

bool func_580(int iParam0)
{
	if (!func_121(iParam0, 0))
	{
		return false;
	}
	return _0x4aef1fb5b9011d75(iParam0);
}

bool func_581(int iParam0, int iParam1, int iParam2)
{
	if (!func_121(iParam0, 0))
	{
		return false;
	}
	*iParam2 = 0;
	Var0 = { func_902(-1591664384, -1591664384, 0, 0, iParam1, 0, -1, 0, 0) };
	iVar11 = _item_database_create_item_collection(&Var0, &iVar10, 1);
	if (iVar11 != -1)
	{
		iVar12 = 0;
		while (iVar12 < iVar10)
		{
			if (_0x8750f69a720c2e41(iVar11, iVar12, &iVar13))
			{
				if (func_903(iVar13, iParam1, &Var14, &iVar45, 1, 0))
				{
					iVar46 = 0;
					while (iVar46 < iVar45)
					{
						if (iParam0 == &Var14[iVar46])
						{
							*iParam2 = (*iParam2 + Var14[iVar46]->f_1);
						}
						iVar46++;
					}
				}
			}
			iVar12++;
		}
		_0xcbb7b6edfa933ade(iVar11);
	}
	return true;
}

int func_582(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1084182731;
		case 1:
			return -1360128126;
		case 2:
			return 1426626782;
		case 3:
			return 1227915917;
		default:
			break;
	}
	return 1084182731;
}

struct<4> func_583(bool bParam0)
{
	return func_346(1328661203, func_904(), -1591664384, bParam0);
}

int func_584(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 >= 1 && iVar0 <= 23)
	{
		return 0;
	}
	else if (iVar0 >= 24 && iVar0 <= 34)
	{
		return 1;
	}
	else if (iVar0 >= 35 && iVar0 <= 55)
	{
		return 2;
	}
	return 0;
}

float func_585(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 5f;
		case 2:
			return 20f;
		case 3:
			return 10f;
		case 4:
			return 10f;
		case 5:
			return 20f;
		case 6:
			return 10f;
		case 7:
			return 15f;
		case 8:
			return 15f;
		case 9:
			return 20f;
		case 10:
			return 5f;
		case 11:
			return 5f;
		case 12:
			return 10f;
		case 13:
			return 20f;
		case 14:
			return 30f;
		case 15:
			return 5f;
		case 16:
			return 5f;
		case 17:
			return 3f;
		case 18:
			return 20f;
		case 19:
			return func_905(iParam0);
		case 20:
			return 25f;
		case 21:
			return 50f;
		case 22:
			return 100f;
		case 23:
			return 150f;
		case 24:
			return 20f;
		case 25:
			return 10f;
		case 26:
			return 20f;
		case 27:
			return 20f;
		case 28:
			return 20f;
		case 29:
			return 20f;
		case 30:
			return func_905(iParam0);
		case 31:
			return 25f;
		case 32:
			return 50f;
		case 33:
			return 100f;
		case 34:
			return 150f;
		case 35:
			return 1f;
		case 36:
			return 5f;
		case 37:
			return 1f;
		case 38:
			return 3f;
		case 39:
			return 1f;
		case 40:
			return 1f;
		case 41:
			return 1f;
		case 42:
			return 5f;
		case 43:
			return 10f;
		case 49:
			return 20f;
		case 44:
			return 5f;
		case 45:
			return 5f;
		case 46:
			return 10f;
		case 47:
			return 10f;
		case 48:
			return 5f;
		case 50:
			return func_905(iParam0);
		case 51:
			return 25f;
		case 52:
			return 50f;
		case 53:
			return 100f;
		case 54:
			return 150f;
		case 55:
			return 5f;
		default:
			break;
	}
	return 0f;
}

bool func_586(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_455(18);
		case 2:
			return func_455(20);
		case 1:
			return func_455(19);
		default:
			break;
	}
	return true;
}

int func_587(int iParam0)
{
	return func_906(&(Global_40.f_11095.f_11[iParam0]));
}

void func_588(int iParam0, float fParam1, bool bParam2)
{
	if (func_23() != -1)
	{
		return;
	}
	if (Global_1347477->f_117 || !func_455(31))
	{
		return;
	}
	iVar0 = func_587(iParam0);
	fVar1 = &Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	set_attribute_points(Global_35, iParam0, floor(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_587(iParam0);
	if (func_907(iParam0) && func_908(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_909(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_910(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!is_radar_hidden() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_63(func_911(iParam0), 0);
					}
					func_912(iParam0, iVar2, iVar3);
					func_232(iParam0, 7000);
				}
				Global_1347477->f_8 = 1;
			}
		}
	}
	Global_1347477->f_1 = iParam0;
	Global_1347477 = get_game_timer();
}

char* func_589(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_590(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 837097462;
		case 0:
			return 2001720289;
		case 2:
			return 234329797;
		default:
			break;
	}
	return 0;
}

int func_591(int iParam0)
{
	Var0 = { func_296(iParam0, 1, 0) };
	return func_412(Var0.f_4);
}

int func_592(var uParam0)
{
	iVar0 = 0;
	iVar1 = 22;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_190(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_190(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_190(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_190(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_190(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_190(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

bool func_593(int iParam0, int iParam1)
{
	iVar1 = func_413(func_913(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (&Global_1946804->f_1497.f_1[iVar1] != 0 && &Global_1946804->f_1497.f_1[iVar1] != &Global_1946804->f_57[iVar1])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1];
		if (func_199(iVar0) == iParam0)
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	*iParam1 = 0;
	return false;
}

int func_594(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam0 == &Global_1946804->f_57[func_413(iParam1, 1)])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_405(524288))
	{
		switch (iParam1)
		{
			case 673166414:
				iVar0++;
				break;
			case -207860920:
				iVar0++;
				break;
		}
	}
	iVar0 = (iVar0 + _0x31b2e7f2e3c58b89(iParam0, 1155669136, iParam2, bParam3));
	return iVar0;
}

bool func_595(int iParam0)
{
	switch (iParam0)
	{
		case -1511777811:
			return true;
		case 103395732:
			return true;
		case -874127761:
			return true;
		case -635667748:
			return true;
		case 1613924106:
			return true;
		default:
			break;
	}
	return false;
}

void func_596(int iParam0, bool bParam1, bool bParam2)
{
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_6, bParam1);
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_5, bParam2);
}

int func_597(int iParam0)
{
	iParam0 = func_395(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_40.f_1095.f_1[iParam0]->f_14;
}

int func_598(int iParam0, int iParam1, int iParam2)
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

int func_599(int iParam0, int iParam1)
{
	iParam0 = func_395(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return &(Global_40.f_1095.f_1[iParam0]->f_398[iParam1]);
}

void func_600(int iParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return;
	}
	iParam2 = func_598(iParam2, 0, 100);
	if (func_914(iParam1, &iVar0))
	{
		_set_attribute_core_value(iParam0, iVar0, iParam2);
	}
}

void func_601(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return;
	}
	if (!func_914(iParam1, &iVar0))
	{
		return;
	}
	sVar1 = func_915(iParam1);
	sVar2 = func_916(iParam1);
	if (!is_string_null_or_empty(sVar1))
	{
		iVar3 = _get_attribute_core_value(iParam0, iVar0);
		_0x437c08db4febe2bd(iParam0, sVar1, to_float(iVar3), -1);
		if (iVar3 <= 20)
		{
			_0xcb9401f918cb0f75(iParam0, sVar2, 1, -1);
		}
		else
		{
			_0xa6f67bec53379a32(iParam0, sVar2);
		}
	}
}

bool func_602(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

bool func_603(int iParam0)
{
	return func_274(iParam0, Global_1310750->f_16072 | 64);
}

void func_604(int iParam0)
{
	if (&Global_1310750->f_13321[iParam0] != -1)
	{
		(*Global_1310750)[&Global_1310750->f_13321[iParam0]]->f_48 = 0;
	}
	Global_1310750->f_13321[iParam0] = -1;
	Global_1310750->f_13321[iParam0]->f_1 = -1;
	Global_1310750->f_13321[iParam0]->f_2 = { 0f, 0f, 0f };
	Global_1310750->f_13321[iParam0]->f_5 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_1310750->f_13321[iParam0]->f_6[iVar0] = -1881652455;
		iVar0++;
	}
}

int func_605(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_917(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

void func_606(int iParam0, int iParam1, var uParam2)
{
	*iParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case 1234009870:
			*iParam1 = 1802325493;
			*uParam2 = 1681219929;
			break;
		case -1202134084:
			*iParam1 = -864693164;
			*uParam2 = 1681219929;
			break;
		case 1297050066:
			*iParam1 = -603289736;
			*uParam2 = 1232099469;
			break;
		case -1780177928:
			*iParam1 = -1803237008;
			*uParam2 = -2084181920;
			break;
		case -1467836497:
			*iParam1 = -1175521284;
			*uParam2 = 1950175060;
			break;
		case 1723805622:
			*iParam1 = -1559549888;
			*uParam2 = 1950175060;
			break;
		case -153287664:
			*iParam1 = -1650796693;
			*uParam2 = 836939099;
			break;
		case 1845082736:
			*iParam1 = -1521597660;
			*uParam2 = -1411815376;
			break;
		case 406755377:
			*iParam1 = -1288829256;
			*uParam2 = 218444191;
			break;
		case 1469029564:
			*iParam1 = 1393841762;
			*uParam2 = 218444191;
			break;
		case 45760211:
			*iParam1 = -851229814;
			*uParam2 = 1654725195;
			break;
		case -276295943:
			*iParam1 = 914704115;
			*uParam2 = 1858824185;
			break;
		case -2029793397:
			*iParam1 = -219896679;
			*uParam2 = -1330115686;
			break;
		case 2120467495:
			*iParam1 = 516838334;
			*uParam2 = -1330115686;
			break;
		case -2075613923:
			*iParam1 = -385817936;
			*uParam2 = -578347576;
			break;
		case 122656217:
			*iParam1 = 1192843172;
			*uParam2 = 231465488;
			break;
		case 2107187484:
			*iParam1 = 954871696;
			*uParam2 = -1878508229;
			break;
		case -791844268:
			*iParam1 = -1217273132;
			*uParam2 = -1878508229;
			break;
		case 305770744:
			*iParam1 = -2087227528;
			*uParam2 = 314966081;
			break;
		case 550900979:
			*iParam1 = -618066518;
			*uParam2 = 2113196069;
			break;
	}
}

struct<14> func_607(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_13 = -1;
	if (iParam0 != 0)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1591664384)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0 && iParam3 != -1591664384)
	{
		Var0.f_3 = iParam3;
	}
	if (iParam4 != 0)
	{
		Var0.f_4 = iParam4;
	}
	if (iParam5 != 0)
	{
		Var0.f_5 = iParam5;
	}
	return Var0;
}

struct<4> func_608(bool bParam0)
{
	iVar0 = func_86(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_346(923904168, func_583(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_346(923904168, func_583(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_346(923904168, func_583(bParam0), -740156546, 0);
}

void func_609(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_610(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_86(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_611(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	*uParam2 = 0;
	*uParam3 = 0;
	if (!func_121(iParam0, 0))
	{
		return false;
	}
	if ((!Global_1911914->f_1579 && func_918(iParam0, iParam1, 1)) && !bParam5)
	{
		return false;
	}
	if (!func_919(iParam0, 1, iParam1, &Var0, iParam4, bParam6, iParam7, bParam8))
	{
		*uParam2 = Var0;
		*uParam3 = Var0.f_1;
		return false;
	}
	return true;
}

bool func_612(int iParam0, bool bParam1)
{
	if (func_199(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_455(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_613(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_419(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_614(int iParam0, var uParam1, int iParam2)
{
	if (func_920(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_615(bool bParam0)
{
	iVar0 = func_86(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_346(271701509, func_583(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_346(271701509, func_583(bParam0), 12999093, 0);
}

bool func_616(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_199(iParam0);
	iVar3 = _item_database_get_fits_slot_count(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (_item_database_get_fits_slot_info(iVar1, iVar2, &uVar0))
		{
			if (_item_database_can_equip_item_on_category(iParam0, iParam1, uVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_617(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_86(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_618(int iParam0)
{
	if (!func_121(*iParam0, 0))
	{
		return 0;
	}
	switch (*iParam0)
	{
		case -1073808995:
			*iParam0 = -1753819339;
			return 1;
		case 1903483453:
			*iParam0 = -1527293029;
			return 1;
		case -541584777:
			*iParam0 = 206762213;
			return 1;
		case 998010398:
			*iParam0 = -324053813;
			return 1;
		case -1424823393:
			*iParam0 = -885810591;
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_619(int iParam0)
{
	return func_122(iParam0) == -427144552;
}

bool func_620(int iParam0, var uParam1, bool bParam2)
{
	if (!func_121(iParam0, 0))
	{
		return false;
	}
	Var0 = { func_296(iParam0, 0, 1) };
	iVar5 = 1728382685;
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_764((386 + iVar29), 1);
		if (func_613(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_614(iParam0, &Var6, iVar5);
			if ((bParam2 && bVar28) || !bVar28)
			{
				*uParam1 = iVar5;
				return true;
			}
		}
		iVar29++;
	}
	return false;
}

int func_621(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_121(iParam0, 0))
	{
		return 0;
	}
	if (!func_98(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_86(bParam3), iParam0);
}

void func_622(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1224227)
	{
		if (&Global_1224227->f_1[iVar0] == iParam0)
		{
			if (Global_1224227->f_1[iVar0]->f_1 == iParam1)
			{
			}
			else
			{
				Global_1224227->f_1[iVar0]->f_1 = iParam1;
			}
			return;
		}
		iVar0++;
	}
	func_921(iParam0, iParam1);
}

bool func_623(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return false;
	}
	return func_922(32, iParam0);
}

bool func_624(int iParam0)
{
	if (iParam0 >= 1 && iParam0 <= 183)
	{
		return true;
	}
	return false;
}

int func_625(int iParam0)
{
	if (!func_624(iParam0))
	{
		return 0;
	}
	return Global_1132155->f_12[iParam0]->f_2;
}

int func_626(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	return func_923(iParam0, &uVar0, bParam1, iParam2, iParam3);
}

bool func_627()
{
	return Global_1955569->f_866;
}

int func_628(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -84152915;
		case 2:
			return -1789085602;
		case 3:
			return -593725333;
		case 4:
			return 1619211297;
		case 5:
			return -1448204146;
		case 6:
			return -1918007793;
		case 7:
			return -2108757294;
		case 8:
			return -787840584;
		case 9:
			return -7905424;
		case 10:
			return -376205482;
		case 11:
			return -1753179328;
		case 12:
			return -1876855008;
		case 13:
			return 550082662;
		case 14:
			return -1964113;
		case 15:
			return 196458601;
		case 16:
			return 22941087;
		case 17:
			return 2017633379;
		case 24:
			return 253945992;
		case 25:
			return -1689046118;
		case 26:
			return -483357612;
		case 27:
			return -430722038;
		case 28:
			return 64082831;
		case 35:
			return -1498321291;
		case 36:
			return 1654907663;
		case 37:
			return 1059449568;
		case 38:
			return 2073287291;
		case 39:
			return 1110270789;
		case 40:
			return 417802449;
		case 41:
			return 2136672177;
		case 42:
			return -1930911028;
		case 43:
			return -739528491;
		case 55:
			return 2075984360;
		default:
			break;
	}
	return 0;
}

bool func_629(int iParam0)
{
	return func_176(iParam0, 2);
}

bool func_630(var uParam0, int iParam1)
{
	return (uParam0->f_63 && iParam1) != 0;
}

void func_631(var uParam0)
{
	*uParam0 = 0;
}

void func_632(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_633(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

Vector3 func_634(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 1794.04f, -1314.792f, 43.0923f;
		case 26:
			return -235.2066f, 763.6583f, 117.085f;
		case 30:
			return 1288.87f, -1397.85f, 77.93f;
		case 32:
			return 1234.24f, -1425.58f, 71.18f;
		case 33:
			return 905.92f, -421.19f, 88.23f;
		case 36:
			return -2476.07f, 832.13f, 141.25f;
		case 38:
			return -329.32f, -366.6f, 87f;
		case 39:
			return 97.4f, -212.47f, 111.6f;
		case 43:
			return 2586.494f, -1009.154f, 43.24f;
		case 41:
			return 337.3075f, -684.5404f, 41.8362f;
		case 49:
			return -2178.646f, -245.6886f, 191.1569f;
		case 51:
			return -1709.38f, -335.07f, 176.95f;
		case 53:
			return 2480.1f, -1377.69f, 45.32f;
		case 56:
			return 2011.776f, -504.0132f, 40.983f;
		case 57:
			return 1383.38f, -1336.83f, 77.59f;
		case 65:
			return -2095.11f, 656.32f, 119.87f;
		case 69:
			return 2943.93f, 1377.15f, 43.22f;
		case 70:
			return 2945.42f, 1342.78f, 43.92f;
		case 77:
			return 2793.35f, -1174.5f, 46.89f;
		case 78:
			return 2734.359f, -1207.682f, 48.6752f;
		case 80:
			return 2740.808f, -1312.805f, 46.648f;
		case 81:
			return 2503.755f, -1164.531f, 48.1928f;
		case 84:
			return -73.18f, -392.3f, 70.84f;
		case 88:
			return 2480.53f, -399.62f, 41.42f;
		case 89:
			return 1576.261f, -251.85f, 79.21f;
		case 91:
			return 1496.348f, -1083.286f, 54.1105f;
		case 92:
			return 1407.31f, 316.83f, 88.9555f;
		case 94:
			return 1414.4f, 248.2f, 88.85f;
		case 101:
			return -1378.656f, -735.3399f, 90.8243f;
		case 102:
			return -1666.59f, 610.82f, 124.03f;
		case 103:
			return 1356.44f, 533.95f, 86.12f;
		case 104:
			return 2407f, -585.32f, 40.66f;
		case 105:
			return -219.25f, 212.93f, 94.15f;
		case 116:
			return 211.99f, 512.98f, 126.54f;
		case 117:
			return -329.2f, 797.9f, 116.89f;
		case 118:
			return -300.3652f, 814.9069f, 117.4111f;
		case 119:
			return -1043.989f, 434.5095f, 53.6802f;
		case 121:
			return 2520.88f, 421.94f, 65.91f;
		case 127:
			return 2834.68f, -1048.04f, 42.86f;
		case 133:
			return 2688.427f, -1121.766f, 49.6782f;
		case 135:
			return -576.08f, 524.9f, 97.86f;
		case 136:
			return 1248.01f, -1280.07f, 75.17f;
		case 143:
			return 2954.45f, 523.05f, 44.47f;
		case 144:
			return 2304.697f, -0.13289f, 45.70486f;
		case 151:
			return 556.271f, 172.08f, 133.3435f;
		case 152:
			return 556.271f, 172.08f, 133.3435f;
		case 146:
			return -585.6761f, -347.216f, 81.28532f;
		default:
			break;
	}
	return (*Global_1347702)[iParam0]->f_24;
}

void func_635(int iParam0, vector3 vParam1, bool bParam4, bool bParam5)
{
	if (!func_117(iParam0))
	{
		return;
	}
	if ((*Global_1347702)[iParam0]->f_13 & 256 != 0 && func_18(0, 0, 1))
	{
		return;
	}
	if ((*Global_1347702)[iParam0]->f_12 & 16 != 0)
	{
		return;
	}
	if ((*Global_1347702)[iParam0]->f_36 == 0)
	{
		return;
	}
	if (func_314(32768))
	{
		return;
	}
	if (does_blip_exist((*Global_1347702)[iParam0]->f_37))
	{
		return;
	}
	(*Global_1347702)[iParam0]->f_38 = func_924(iParam0);
	if (!bParam5 && func_925(iParam0))
	{
		(*Global_1347702)[iParam0]->f_37 = _blip_add_for_radius((*Global_1347702)[iParam0]->f_38, func_634(iParam0), (*Global_1347702)[iParam0]->f_18);
		if (!does_blip_exist((*Global_1347702)[iParam0]->f_37))
		{
			return;
		}
		set_blip_sprite((*Global_1347702)[iParam0]->f_37, (*Global_1347702)[iParam0]->f_36, true);
	}
	else
	{
		(*Global_1347702)[iParam0]->f_37 = _blip_add_for_coord((*Global_1347702)[iParam0]->f_38, vParam1);
		if (!does_blip_exist((*Global_1347702)[iParam0]->f_37))
		{
			return;
		}
		set_blip_sprite((*Global_1347702)[iParam0]->f_37, (*Global_1347702)[iParam0]->f_36, true);
	}
	if (iParam0 == 61)
	{
		func_926(8);
	}
	else if (iParam0 == 62)
	{
		set_blip_name_from_text_file((*Global_1347702)[iParam0]->f_37, "BLIP_THOMAS_DOWNES");
	}
	else if (iParam0 == 95)
	{
		_blip_set_modifier((*Global_1347702)[iParam0]->f_37, 838722941);
		set_blip_name_from_text_file((*Global_1347702)[iParam0]->f_37, "BLIP_RHMRB");
	}
	else if (iParam0 == 42)
	{
		set_blip_name_from_text_file((*Global_1347702)[iParam0]->f_37, "BLIP_RCFSH");
	}
	else if (iParam0 == 40)
	{
		set_blip_name_from_text_file((*Global_1347702)[iParam0]->f_37, "BLIP_RCDIN");
	}
	else if (iParam0 == 50)
	{
		set_blip_name_from_text_file((*Global_1347702)[iParam0]->f_37, "BLIP_RCRKF");
	}
	else if ((((iParam0 == 44 || iParam0 == 45) || iParam0 == 46) || iParam0 == 47) || iParam0 == 48)
	{
		set_blip_name_from_text_file((*Global_1347702)[iParam0]->f_37, "BLIP_RCEXO");
	}
	func_927(iParam0);
	set_blip_flash_timer((*Global_1347702)[iParam0]->f_37, 64, iParam0);
	if (func_23() == -1)
	{
		func_928(iParam0);
		iVar0 = func_929(Global_40.f_4283);
		if (func_434(iVar0) && func_930((*Global_1888801)[iVar0]->f_13))
		{
			bVar1 = true;
			bVar2 = func_931(iVar0);
		}
		if (func_932(iParam0, bVar1, iVar0))
		{
			func_933((*Global_1347702)[iParam0]->f_15, bVar2, bVar1, iVar0);
		}
	}
	if (bParam4)
	{
		if (_0x66f35dd9d2b58579() || is_screen_faded_out())
		{
			return;
		}
	}
	if ((*Global_1347702)[iParam0]->f_13 & 1 == 0)
	{
		func_934(&((*Global_1347702)[iParam0]->f_13), 1);
		if (((!func_925(iParam0) || func_118((*Global_1347702)[iParam0]->f_12, 1)) || func_118((*Global_1347702)[iParam0]->f_12, 512)) || func_935((*Global_1347702)[iParam0]->f_13, 2048))
		{
			_blip_set_modifier((*Global_1347702)[iParam0]->f_37, 580546400);
		}
	}
	if ((*Global_1347702)[iParam0]->f_13 & 32768 == 0)
	{
		if (((*Global_1347702)[iParam0]->f_36 == -1822497728 && (*Global_1347702)[iParam0]->f_12 & 1 == 0) && (*Global_1347702)[iParam0]->f_12 & 2 != 0)
		{
			_blip_set_modifier((*Global_1347702)[iParam0]->f_37, -211388321);
		}
		else
		{
			func_934(&((*Global_1347702)[iParam0]->f_13), 32768);
		}
	}
	if ((*Global_1347702)[iParam0]->f_12 & 8 != 0 && Global_40.f_490.f_402[iParam0] & 2 == 0)
	{
		if (func_936(iParam0))
		{
			if (iParam0 == 97)
			{
				func_63(185, 0);
			}
			else
			{
				func_63(186, 1);
			}
		}
		else
		{
			MemCopy(&cVar3, {(*Global_1347702)[iParam0]->f_3}, 3);
			StringConCat(&cVar3, "_FIRST", 24);
			sVar6 = (*Global_1347702)[iParam0]->f_37;
			(*Global_1347702)[iParam0]->f_40 = func_201(_create_var_string(2, &cVar3, sVar6), 10000, 0, 0, 0, 1);
		}
		func_937(iParam0, 2);
	}
}

Vector3 func_636(int iParam0)
{
	if (!func_117(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { 0f, 0f, 0f };
	if (func_938(iParam0, &vVar0))
	{
		(*Global_1347702)[iParam0]->f_24 = { vVar0 };
	}
	return (*Global_1347702)[iParam0]->f_24;
}

int func_637(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	iVar0 = _get_first_entity_ped_is_carrying(iParam0);
	if (does_entity_exist(iVar0))
	{
		if (is_entity_a_ped(iVar0))
		{
			iVar1 = get_ped_index_from_entity_index(iVar0);
			return iVar1;
		}
	}
	return 0;
}

void func_638(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (&uParam0->f_1[iVar0] == iParam1)
		{
			return;
		}
		if ((((iParam1 == 617531372 && &uParam0->f_1[iVar0] == 291123060) || (iParam1 == 291123060 && &uParam0->f_1[iVar0] == 617531372)) || (iParam1 == 1356624740 && &uParam0->f_1[iVar0] == 1884295263)) || (iParam1 == 1884295263 && &uParam0->f_1[iVar0] == 1356624740))
		{
			uParam0->f_1[iVar0] = iParam1;
			return;
		}
		iVar0++;
	}
	if (*uParam0 >= 10)
	{
		return;
	}
	uParam0->f_1[*uParam0] = iParam1;
	*uParam0++;
}

int func_639(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_cashinventory_is_session_ready())
	{
		return 0;
	}
	func_939(uParam1);
	if (!_0x77b299e8799b1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_940(uParam2, iParam0, Var1);
	return 1;
}

bool func_640(int iParam0)
{
	if (!func_121(iParam0, 0))
	{
		return false;
	}
	if (func_190(iParam0, -839724752))
	{
		return true;
	}
	return false;
}

void func_641(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4)
{
	*iParam3 = _get_ped_damage(iParam0);
	*uParam2 = _0xf8b48a361dc388ae(iParam0);
	if (*uParam2 == 2)
	{
		*iParam1 = 4;
	}
	else if (*uParam2 == 1)
	{
		*iParam1 = 3;
	}
	else
	{
		*uParam4 = _get_ped_quality(iParam0);
		switch (*uParam4)
		{
			case 0:
				*iParam1 = 0;
				break;
			case 1:
				*iParam1 = 1;
				break;
			case -1:
			case 2:
				*iParam1 = 2;
				break;
		}
	}
}

bool func_642(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = iParam3;
	iVar1 = iParam2;
	if (iVar0 < iVar1)
	{
		iParam2 = iVar0;
	}
	uVar2 = _0x9e7738b291706746(iParam0, iParam1, iParam2);
	return uVar2;
}

int func_643(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (!_0x9a100f1cf4546629(iParam0) && !_0xc346a546612c49a9(iParam0))
	{
		return 0;
	}
	func_641(iParam0, &iVar1, &uVar2, &iVar0, &uVar3);
	func_642(&iVar4, iParam0, iVar0, iVar1);
	if (iVar4 != 0)
	{
		return iVar4;
	}
	switch (iVar0)
	{
		case 2:
			return -776155824;
		case 1:
			return 1715058708;
		case 0:
			return -45650221;
		default:
			break;
	}
	return -45650221;
}

int func_644(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	iParam1 = func_941(player_ped_id(), iParam0, iParam1, bParam2);
	if (iParam1 <= 0)
	{
		return iParam1;
	}
	iVar0 = func_645(0);
	if (does_entity_exist(iVar0))
	{
		func_646(&iVar0, iParam0, &iParam1, bParam3, iParam4);
	}
	return iParam1;
}

int func_645(int iParam0)
{
	if (func_942(iParam0))
	{
		if (func_23() == -1)
		{
			iVar0 = _get_last_mount(Global_35);
			if (!does_entity_exist(iVar0))
			{
				iVar0 = func_204(func_395(0));
			}
		}
		else
		{
			iVar0 = _get_last_mount(func_943());
		}
	}
	else if (func_23() == -1)
	{
		iVar0 = func_204(0);
	}
	else
	{
		iVar0 = _0xf49f14462f0ae27c(get_player_index());
	}
	return iVar0;
}

int func_646(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!does_entity_exist(*iParam0))
	{
		return 0;
	}
	iVar0 = _inventory_get_ped_inventory_id(*iParam0);
	iVar1 = func_944(iVar0, iParam1);
	if (func_945(*iParam0, iParam1, *iParam2, bParam3, iParam4))
	{
		Var2 = { func_436(iParam1) };
		if (_stat_id_is_valid(&Var2))
		{
			_0xbd861ae8a5181ed7(&Var2, *iParam2);
		}
		if (func_946(iParam1))
		{
			func_947(*iParam0, iParam1, *iParam2);
		}
		else
		{
			func_947(*iParam0, iParam1, *iParam2);
			func_941(*iParam0, iParam1, *iParam2, 1);
		}
		iVar4 = (iVar1 - func_944(iVar0, iParam1));
		*iParam2 = (*iParam2 - iVar4);
		return 1;
	}
	return 0;
}

int func_647(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	iVar0 = func_124(iParam0, 0, 0);
	if (iVar0 >= iParam1)
	{
		iVar1 = iParam1;
	}
	else
	{
		iVar1 = iVar0;
		iVar2 = (iParam1 - iVar1);
	}
	if (iVar1 > 0)
	{
		if (!func_226(iParam0, iVar1, bParam2, iParam3, 0))
		{
			return 0;
		}
	}
	if (iVar2 > 0)
	{
		if (!func_948(iParam0, iVar2, bParam2, iParam3))
		{
			return 0;
		}
		if (!bParam2)
		{
			func_201("SHOP_SELL_HORSE_SATCHEL", 10000, 0, 0, 0, 1);
		}
	}
	return 1;
}

int func_648(bool bParam0, bool bParam1, bool bParam2)
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

bool func_649(int iParam0, int iParam1)
{
	if (iParam0 == iParam1)
	{
		return true;
	}
	if (iParam0 == 6 && iParam1 == 4)
	{
		return true;
	}
	return false;
}

bool func_650(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

int func_651(int iParam0)
{
	if (func_121(iParam0, 0))
	{
		if (func_190(iParam0, -1242251796))
		{
			if (func_190(iParam0, 2060589226))
			{
				return func_949();
			}
			return func_950();
		}
		else if (func_190(iParam0, 1919582297))
		{
			return func_660();
		}
		else if (func_190(iParam0, 1147021565))
		{
			return func_661();
		}
	}
	if (Global_1935496->f_12)
	{
		return func_950();
	}
	else
	{
		return func_661();
	}
	return func_661();
}

bool func_652(int iParam0)
{
	if ((((((((((func_190(iParam0, 1147021565) || func_190(iParam0, -136654233)) || func_190(iParam0, -524514947)) || func_190(iParam0, -1238310989)) || func_190(iParam0, 1765172170)) || func_190(iParam0, 1490540191)) || func_190(iParam0, 1573112293)) || func_190(iParam0, -1242251796)) || func_190(iParam0, 1919582297)) || func_190(iParam0, -2085281117)) || iParam0 == -1994237933)
	{
		return true;
	}
	return false;
}

int func_653()
{
	return 33284224;
}

int func_654()
{
	return 33537269;
}

int func_655()
{
	return 18589696;
}

int func_656()
{
	return 26978448;
}

int func_657()
{
	return 33529847;
}

int func_658()
{
	return 26978304;
}

int func_659()
{
	return 32505855;
}

int func_660()
{
	return 26983431;
}

int func_661()
{
	return 33537239;
}

int func_662()
{
	return 32713860;
}

int func_663()
{
	return 16400295;
}

int func_664()
{
	return 33284224;
}

void func_665(int iParam0)
{
	if (func_951(32))
	{
		return;
	}
	func_952(32);
	if (func_140(Global_35))
	{
		Global_1935496->f_7 |= 1;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 1);
	}
	if (func_683(Global_35))
	{
		Global_1935496->f_7 |= 2;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 2);
	}
	if (func_953(Global_35, 713668775))
	{
		Global_1935496->f_7 |= 4;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 4);
	}
	if (func_954(Global_35))
	{
		Global_1935496->f_7 |= 8;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 8);
	}
	if (func_352(0, 1))
	{
		Global_1935496->f_7 |= 16;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 16);
	}
	if (!func_955(0))
	{
		Global_1935496->f_7 |= 32;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 32);
	}
	if (!func_956(0))
	{
		Global_1935496->f_7 |= 512;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 512);
	}
	if (!func_957(0))
	{
		Global_1935496->f_7 |= 8192;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 8192);
	}
	if (is_ped_in_cover(Global_35, 0, 1))
	{
		Global_1935496->f_7 |= 16384;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 16384);
	}
	if (_get_ped_crouch_movement(Global_35))
	{
		Global_1935496->f_7 |= 32768;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 32768);
	}
	if (func_23() == 0 && _0xb655db7582aec805(Global_35))
	{
		Global_1935496->f_7 |= 131072;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 131072);
	}
	if (_0xec7e480ff8bd0bed(Global_35) && !has_anim_event_fired(Global_35, 108107462))
	{
		Global_1935496->f_7 |= 256;
	}
	else if (_0x7fc84e85d98f063d(Global_35))
	{
		Global_1935496->f_7 |= 256;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 256);
	}
	if (Global_1935630->f_24 || _0xc8b29d18022ea2b7(Global_35))
	{
		Global_1935496->f_7 |= 1024;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 1024);
	}
	if (is_ped_running(Global_35))
	{
		Global_1935496->f_7 |= 4096;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 4096);
	}
	if (_0x3ab6c7b0bb0df4b1(Global_35, -1) || func_953(Global_35, 1369124074))
	{
		Global_1935496->f_7 |= 128;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 128);
	}
	if (is_ped_using_any_scenario(Global_35))
	{
		Global_1935496->f_7 |= 33554432;
		if (_get_scenario_point_type_ped_is_using(Global_35) == -1241981548)
		{
			Global_1935496->f_7 |= 67108864;
		}
		else
		{
			Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 67108864);
		}
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 67108864);
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 33554432);
	}
	if (is_cinematic_cam_rendering())
	{
		Global_1935496->f_7 |= 65536;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 65536);
	}
	if (_0x1204eb53a5fbc63d())
	{
		Global_1935496->f_7 |= 64;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 64);
	}
	if (is_ped_getting_up(Global_35))
	{
		Global_1935496->f_7 |= 1048576;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 1048576);
	}
	if (func_958(iParam0, 0))
	{
		Global_1935496->f_7 |= 524288;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 524288);
	}
	if (func_959(iParam0, 0))
	{
		Global_1935496->f_7 |= 262144;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 262144);
	}
	if (func_141(Global_35))
	{
		Global_1935496->f_7 |= 4194304;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 4194304);
	}
	if (func_960())
	{
		Global_1935496->f_7 |= 16777216;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 16777216);
	}
	if (does_entity_exist(iParam0))
	{
		if (func_961(iParam0))
		{
			switch (get_entity_model(iParam0))
			{
				case -1230516683:
				case 594040097:
				case 1772321403:
					Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 134217728);
					break;
				default:
					Global_1935496->f_7 |= 134217728;
					break;
			}
		}
		if (_is_metaped_using_component(iParam0, 149557334))
		{
			Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 134217728);
		}
		if (is_ped_on_vehicle(iParam0, false))
		{
			Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 134217728);
		}
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 134217728);
	}
	if (((((func_23() == -1 && func_962(32768)) || func_350()) || func_963()) || (func_964() && !func_19())) || get_entity_submerged_level(Global_35) > 0.2f)
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 2097152);
	}
	else
	{
		Global_1935496->f_7 |= 2097152;
	}
	if (Global_1900073->f_17 && func_37(Global_35, 1, 0, 0) == -1415022764)
	{
		Global_1935496->f_7 |= 8388608;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 8388608);
	}
}

int func_666(bool bParam0)
{
	if (func_965(1) && !Global_1392040->f_2)
	{
		if (bParam0)
		{
			func_201("ITEM_UNUSABLE_PICKING_UP", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if ((func_965(2) && !Global_1392040->f_2) && get_game_timer() >= Global_36615)
	{
		if (bParam0)
		{
			iVar0 = func_966(Global_35);
			if (iVar0 != 0)
			{
				if (_0x9a100f1cf4546629(iVar0))
				{
					func_201("ITEM_UNUSABLE_SKINNING", 10000, 0, 0, 0, 1);
					return 0;
				}
			}
			func_201("ITEM_UNUSABLE_LOOTING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (func_965(4194304))
	{
		return 0;
	}
	return 1;
}

int func_667(bool bParam0)
{
	if (_is_ped_carrying(Global_35) && !Global_1392040->f_2)
	{
		if (bParam0)
		{
			func_201("ITEM_UNUSABLE_CARRYING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	return 1;
}

int func_668(bool bParam0, int iParam1, bool bParam2)
{
	if (_0x1d46b417f926d34d(Global_35))
	{
		return 0;
	}
	else if (is_ped_in_any_vehicle(Global_35, true))
	{
		if (!is_ped_in_any_vehicle(Global_35, false))
		{
			return 0;
		}
		iVar0 = get_vehicle_ped_is_using(Global_35);
		iVar1 = get_entity_model(iVar0);
		switch (iVar1)
		{
			case -1613317544:
			case 1493442814:
				if (bParam0)
				{
					func_201("ITEM_UNUSABLE_VEHICLE", 10000, 0, 0, 0, 1);
				}
				return 0;
			case -1988548788:
			case 518773733:
			case 742064790:
			case 749266870:
				if (bParam0)
				{
					func_201("ITEM_UNUSABLE_CANNON", 10000, 0, 0, 0, 1);
				}
				return 0;
		}
		if (!func_16(iParam1, 32) && !is_ped_on_mount(Global_35))
		{
			if (_0x2963b5c1637e8a27(iVar0) == Global_35 || bParam2)
			{
				return 0;
			}
		}
	}
	else if (is_ped_getting_into_a_vehicle(Global_35))
	{
		return 0;
	}
	return 1;
}

int func_669(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (!is_ped_injured(iParam0))
		{
			if (iParam1 == 2104565373 && is_driveby_task_underneath_driving_task(iParam0))
			{
				return 1;
			}
			if (get_script_task_status(iParam0, iParam1, true) == 1 || get_script_task_status(iParam0, iParam1, true) == 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_670(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		return _is_ped_getting_into_a_mount_seat(iParam0, true);
	}
	return false;
}

int func_671(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!does_entity_exist(iParam0))
		{
			return 0;
		}
		if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
		{
			return 0;
		}
	}
	fVar0 = get_entity_speed(iParam0);
	fVar1 = _0xca95924c893a0c91(iParam0, fVar0);
	if (fVar1 <= 1.5f)
	{
		return 1;
	}
	return 0;
}

bool func_672()
{
	return Global_1894899 & 4 != 0;
}

bool func_673()
{
	return func_967(512);
}

bool func_674(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_675()
{
	return Global_1310750->f_16077 != 0;
}

bool func_676(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (iParam0 == get_hash_key(&((*Global_1934603)[iVar0]->f_10)))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_677(int iParam0)
{
	return (Global_1914296->f_22 && iParam0) != 0;
}

bool func_678(int iParam0)
{
	return (Global_40.f_9419 && iParam0) != 0;
}

bool func_679(int iParam0)
{
	if (!func_434(iParam0))
	{
		return false;
	}
	return func_968(iParam0, 33554432);
}

int func_680(int iParam0)
{
	if (!func_434(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_20;
}

bool func_681(int iParam0)
{
	if (func_680(iParam0) != 5)
	{
		return false;
	}
	switch (iParam0)
	{
		case 28:
		case 33:
		case 75:
		case 117:
			return true;
		default:
			break;
	}
	return false;
}

bool func_682()
{
	iVar0 = func_22();
	switch (iVar0)
	{
		case 3:
			return true;
		case 51:
			return true;
		case 41:
			return true;
		case 108:
			return true;
		case 44:
			return true;
		case 84:
			return true;
		case 103:
			return true;
		case 53:
			return true;
		case 73:
			return true;
		case 18:
			return true;
		case 0:
			return true;
		case 106:
			return true;
		case 47:
			return true;
		case 63:
			return true;
		case 24:
			return true;
		case 46:
			return true;
		case 107:
			return true;
		case 80:
			return true;
		case 85:
			return true;
		case 7:
			return true;
		case 82:
			return true;
		case 110:
			return true;
		case 120:
			return true;
		default:
			break;
	}
	return false;
}

bool func_683(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	if (_0x5463c962bc7777c3(iParam0, 0, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (_0x5463c962bc7777c3(iParam0, 2, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (_0x5463c962bc7777c3(iParam0, 1, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (_0x758f081db204ddde(iParam0))
	{
		return true;
	}
	return false;
}

bool func_684()
{
	iVar0 = func_22();
	vVar2 = { -3685.423f, -2597.155f, -10f };
	vVar5 = { 0f, 0f, -24.7897f };
	vVar8 = { 116.6365f, 76.68949f, 15f };
	if (iVar0 != 120)
	{
		return false;
	}
	else
	{
		iVar1 = _create_volume_cylinder(vVar2, vVar5, vVar8);
		if (func_969(Global_35, iVar1, 1, 0))
		{
			func_318(iVar1);
			return true;
		}
		else
		{
			func_318(iVar1);
			return false;
		}
	}
	return false;
}

bool func_685(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_21(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

bool func_686(vector3 vParam0, float fParam3)
{
	if (func_970(vParam0, fParam3))
	{
		return true;
	}
	if (func_971(vParam0, fParam3))
	{
		return true;
	}
	return false;
}

void func_687(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_3 = iParam1;
}

var func_688(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	Var0 = -2;
	Var0 = iParam7;
	Var0.f_1 = sParam8;
	Var0.f_2 = sParam9;
	Var0.f_3 = iParam11;
	Var0.f_4 = iParam4;
	Var0.f_4.f_1 = iParam6;
	Var0.f_4.f_2 = sParam5;
	Var13.f_7 = 1;
	Var13 = iParam10;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = _show_advanced_notification(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

char* func_689(int iParam0)
{
	switch (iParam0)
	{
		case 554799588:
			return "COL_CC_GUN_SET";
		case -1021394391:
			return "COL_CC_ART_SET";
		case -987306668:
			return "COL_CC_LND_SET";
		case -1028735103:
			return "COL_CC_GRL_SET";
		case 515229791:
			return "COL_CC_PLT_SET";
		case -1230863414:
			return "COL_CC_ACT_SET";
		case 232875659:
			return "COL_CC_AML_SET";
		case 1423129537:
			return "COL_CC_VEH_SET";
		case -435742319:
			return "COL_CC_SPT_SET";
		case -1854702679:
			return "COL_CC_INV_SET";
		case 1265323898:
			return "COL_CC_HOR_SET";
		case -479775696:
			return "COL_CC_PAM_SET";
		default:
			break;
	}
	return "";
}

var func_690(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	Var0 = -2;
	Var0 = iParam4;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam8;
	Var13.f_7 = 1;
	Var13 = iParam7;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = _show_advanced_notification(&Var0, &Var13, iParam9, iParam10);
	return uVar21;
}

int func_691(int iParam0, int iParam1)
{
	if (!func_972(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_int(&uVar5, &Var0);
	return uVar5;
}

char* func_692(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
{
	switch (iParam1)
	{
		case -2076669067:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_CC_COMPLETE";
			}
			else if (func_452() >= 12)
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_POSTED_OBJ", func_973(), 12);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_FOUND_OBJ", func_974(), 12);
			}
			break;
		case -440187297:
			if (iParam2 == 0)
			{
				sParam3 = _create_var_string(2, "COL_DB_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = _create_var_string(2, "COL_DB_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = _create_var_string(2, "COL_DB_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_DB_COMPLETE";
			}
			else if (func_785() >= 30)
			{
				sParam3 = _create_var_string(2, "COL_DB_POSTED_OBJ", func_975(), 30);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_DB_FOUND_OBJ", func_785(), 30);
			}
			break;
		case -1531394072:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_EX_COMPLETE";
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_EX_ITEMS_COLLECTED_OBJ", sParam4, sParam5);
			}
			break;
		case 1995362678:
			if (iParam2 == 0)
			{
				sParam3 = _create_var_string(2, "COL_LF_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = _create_var_string(2, "COL_LF_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = _create_var_string(2, "COL_LF_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_LF_COMPLETE";
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_LF_CAUGHT_OBJ", func_976(), 13);
			}
			break;
		case 2103522376:
			if (iParam2 == 0)
			{
				sParam3 = _create_var_string(2, "COL_RC_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = _create_var_string(2, "COL_RC_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = _create_var_string(2, "COL_RC_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_RC_COMPLETE";
			}
			else if (func_786() >= 10)
			{
				sParam3 = _create_var_string(2, "COL_RC_POSTED_OBJ", func_977(), 10);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_RC_FOUND_OBJ", func_786(), 10);
			}
			break;
		case 678508515:
			if (iParam2 == 3)
			{
				sParam3 = _create_var_string(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 4)
			{
				sParam3 = _create_var_string(2, "COL_TX_READ_VACATION");
			}
			else if (iParam2 == 5)
			{
				sParam3 = _create_var_string(2, "COL_TX_ON_VACATION");
			}
			else if (iParam2 == 0)
			{
				sParam3 = _create_var_string(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = _create_var_string(2, "COL_TX_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = _create_var_string(2, "COL_TX_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_RETURN_POST_OFFICE";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_TX_COMPLETE";
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_691(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_693(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -2076669067)
	{
		if (iParam1 == 38816757)
		{
			if (_uilog_is_entry_registered(3, 578982838))
			{
				_uilog_remove_entry(3, 578982838);
			}
		}
	}
	else if (iParam2 == -440187297)
	{
		if (iParam1 == -1223580455)
		{
			if (_uilog_is_entry_registered(3, 349797279))
			{
				_uilog_remove_entry(3, 349797279);
			}
		}
	}
	else if (iParam2 == 2103522376)
	{
		if (iParam1 == -170865073)
		{
			if (_uilog_is_entry_registered(3, 1974744712))
			{
				_uilog_remove_entry(3, 1974744712);
			}
		}
	}
	if (_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_remove_entry(3, iParam1);
	}
	return true;
}

bool func_694(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_add_entry_hash(3, iParam1, vParam2, get_hash_key(sParam5), get_hash_key(sParam6), 0);
	}
	return true;
}

bool func_695(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	_uilog_add_or_update_objective(3, iParam1, get_hash_key(sParam2), sParam2, false, false, false);
	_uilog_set_entry_pinned(3, iParam1, true);
	_uilog_set_entry_brief_texture(3, iParam1, get_hash_key(sParam4), get_hash_key(sParam5));
	_uilog_set_entry_icon_texture(3, iParam1, iParam6, iParam7);
	_uilog_update_entry_subheader(3, iParam1, _create_var_string(2, sParam3));
	return true;
}

bool func_696(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_978(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_25(iVar2, 1, 0) || func_980(func_979(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_689(func_978(iVar0))), func_689(func_978(iVar0)), bVar1, true, false);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_785() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_981(iVar0)), func_981(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_975() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_981(iVar0)), func_981(iVar0), bVar1, true, false);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_981(iVar0)), func_981(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_796(iParam3, func_982(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_792(iVar2) - iParam7) >= func_691(iParam3, func_983(iVar0));
				}
				else
				{
					bVar1 = func_792(iVar2) >= func_691(iParam3, func_983(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_792(iVar2) + iParam7) >= func_691(iParam3, func_983(iVar0));
			}
			else
			{
				bVar1 = func_792(iVar2) >= func_691(iParam3, func_983(iVar0));
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_984(iVar2)), func_984(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_985(_0x126cbebba46693cf(iVar0, 1995362678, 0)))
			{
				bVar1 = true;
			}
			else if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = false;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_986(_0x126cbebba46693cf(iVar0, iParam2, 0))), func_986(_0x126cbebba46693cf(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_786() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_987(iVar0)), func_987(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_977() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_987(iVar0)), func_987(iVar0), bVar1, true, false);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_987(iVar0)), func_987(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_796(iParam3, func_982(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_792(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_988(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_988(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_989(iVar2)), func_989(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_697(int iParam0, int iParam1, int iParam2, int iParam3)
{
	bVar0 = false;
	if (iParam3 == 8)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (iParam2 == -2076669067)
	{
		_uilog_add_or_update_objective(3, iParam1, get_hash_key("COL_CC_ITEMS_DELIVERED"), "COL_CC_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (iParam2 == -1531394072)
	{
		_uilog_add_or_update_objective(3, iParam1, get_hash_key("COL_EX_ITEMS_DELIVERED"), "COL_EX_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (iParam2 == 1995362678)
	{
		if (func_976() >= 13)
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
		}
		_uilog_add_or_update_objective(3, iParam1, get_hash_key("COL_LF_ITEMS_DELIVERED"), "COL_LF_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (((((((iParam3 == 7 || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 0) || iParam3 == 1) || iParam3 == 2) || iParam3 == 8)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (iParam2 == 678508515)
	{
		_uilog_add_or_update_objective(3, iParam1, get_hash_key("COL_TX_CARCASSES_MAILED"), "COL_TX_CARCASSES_MAILED", bVar0, true, false);
	}
	return true;
}

bool func_698(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_119(func_990(0)) && ((func_991(0) == 1 || func_991(0) == 8) || func_991(0) == 6))
	{
		iParam3 = 7;
	}
	if ((iParam2 == -440187297 || iParam2 == 1995362678) || iParam2 == 2103522376)
	{
		if (iParam3 == 7)
		{
			_uilog_mark_entry_availability(3, iParam1, 1, "");
		}
	}
	else if (iParam2 == 678508515)
	{
		if (iParam3 == 7)
		{
			if (bParam4)
			{
			}
			else
			{
				_uilog_mark_entry_availability(3, iParam1, 1, "");
			}
		}
	}
	return true;
}

int func_699()
{
	if (_is_ped_carrying(Global_35))
	{
		return 1;
	}
	if (get_current_ped_weapon(Global_35, &iVar0, true, 0, false))
	{
	}
	if (get_current_ped_weapon(Global_35, &iVar1, true, 1, false))
	{
	}
	if (iVar1 == -1569615261)
	{
		if (iVar0 == -1569615261)
		{
			return 1;
		}
		else if ((((is_weapon_valid(iVar0) && _is_weapon_two_handed(iVar0)) && !func_328(iVar0)) && !_is_ped_getting_into_a_mount_seat(Global_35, true)) && !(is_ped_in_any_vehicle(Global_35, false) && !_0xa24c1d341c6e0d53(1, 0, 0)))
		{
			return 3;
		}
		else if (iVar0 == -160924582)
		{
			return 1;
		}
		else if ((is_weapon_valid(iVar0) && func_328(iVar0)) || iVar0 == 2055893578)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (iVar0 == -1569615261)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

void func_700(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!_0x2d19bc4df626cbe7(iParam0, iParam1, iParam2, iParam3))
	{
		_0xd962f8579d702db5();
	}
	else
	{
		_task_item_interaction(iParam0, iParam1, iParam2, iParam3, 0, -1082130432);
		Global_1935496->f_26 = 1;
	}
}

void func_701(int iParam0, bool bParam1)
{
	Var0.f_1 = 20;
	if ((func_190(iParam0, 1573112293) || func_190(iParam0, 672467738)) || func_190(iParam0, -550842268))
	{
		bVar37 = true;
	}
	if (func_122(iParam0) == 2085633299)
	{
		_item_database_fillout_item_effects_ids(iParam0, &Var0);
		_0xd962f8579d702db5();
		iVar29 = 0;
		while (iVar29 < Var0)
		{
			if (!_item_database_fillout_item_effects_id_info(&(Var0.f_1[iVar29]), &Var22))
			{
			}
			else if (-943921969 == Var22.f_1)
			{
				fVar30 = func_992(0, Var22.f_2);
				func_993(Var22.f_2, 1);
				func_232(0, 7000);
				bVar41 = true;
			}
			else if (-1104847406 == Var22.f_1)
			{
				fVar31 = func_992(2, Var22.f_2);
				func_109(Var22.f_2);
				func_232(2, 7000);
				bVar40 = true;
			}
			else if (381158954 == Var22.f_1)
			{
				fVar32 = func_992(1, Var22.f_2);
				func_994(Var22.f_2);
				func_232(1, 7000);
			}
			else if (-416929031 == Var22.f_1)
			{
				fVar33 = func_995(Var22.f_2, Var22.f_5);
				if (func_236(&uVar38, &uVar39, fVar33))
				{
					func_237(fVar33, 1, bVar37, bParam1);
					func_232(0, 7000);
				}
				bVar41 = true;
			}
			else if (1857353317 == Var22.f_1)
			{
				fVar34 = func_995(Var22.f_2, Var22.f_5);
				if (func_236(&uVar38, &uVar39, fVar34))
				{
					func_238(fVar34, 1, bVar37, bParam1);
					func_232(2, 7000);
				}
				bVar40 = true;
			}
			else if (1681823811 == Var22.f_1)
			{
				fVar35 = func_995(Var22.f_2, Var22.f_5);
				if (func_236(&uVar38, &uVar39, fVar35))
				{
					func_239(fVar35, 1, bVar37, bParam1);
					func_232(1, 7000);
				}
			}
			else if (2062242710 == Var22.f_1)
			{
				fVar36 = func_241(to_float(Var22.f_3), Var22.f_4);
				func_242(19, fVar36);
				bVar41 = true;
			}
			else if (-826379728 == Var22.f_1)
			{
				fVar36 = func_241(to_float(Var22.f_3), Var22.f_4);
				func_242(20, fVar36);
				bVar40 = true;
			}
			else if (-1191740624 == Var22.f_1)
			{
				fVar36 = func_241(to_float(Var22.f_3), Var22.f_4);
				func_242(18, fVar36);
			}
			else if (1869697234 == Var22.f_1)
			{
				fVar36 = func_241(to_float(Var22.f_3), Var22.f_4);
				func_242(0, fVar36);
				bVar41 = true;
			}
			else if (1342237631 == Var22.f_1)
			{
				fVar36 = func_241(to_float(Var22.f_3), Var22.f_4);
				func_242(2, fVar36);
				bVar40 = true;
			}
			else if (-1240225157 == Var22.f_1)
			{
				fVar36 = func_241(to_float(Var22.f_3), Var22.f_4);
				func_242(1, fVar36);
			}
			else if (-816334026 == Var22.f_1)
			{
				func_240(to_float(Var22.f_2), 1);
			}
			iVar29++;
		}
		if (bVar41)
		{
			if (fVar33 > 0f || fVar30 > 0f)
			{
				bVar42 = true;
			}
		}
		if (bVar42 || func_190(iParam0, -537818634))
		{
			func_251(func_523(-704089207), 1);
		}
		if (func_190(iParam0, -1457797660))
		{
			func_251(func_523(-1909697259), 1);
		}
		if (bVar40)
		{
			func_251(func_523(704570463), 1);
		}
		_0x0e1db1f8f5b561dc(fVar30, fVar32, fVar31, round((fVar33 / 2f)), round((fVar35 / 2f)), round((fVar34 / 2f)));
	}
}

bool func_702(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!does_entity_exist(iParam0))
		{
			return false;
		}
	}
	return _is_metaped_using_component(iParam0, iParam1);
}

void func_703(int iParam0, bool bParam1, int iParam2)
{
	iVar0 = func_996(iParam0);
	iVar1 = func_524(&iVar0);
	if (iVar1 != iParam0)
	{
		func_997(iVar1, 4);
	}
	if (!func_998(iParam0))
	{
		return;
	}
	if (func_999(iParam0))
	{
		return;
	}
	func_997(iParam0, 4);
	func_1000(iParam0, bParam1);
	if (!func_1001(iParam0))
	{
		func_1002(iParam0, 1, 0);
	}
	if (bParam1)
	{
		if (!func_18(0, 0, 1))
		{
			func_101(1, 6);
		}
	}
}

void func_704(int iParam0)
{
	if (does_entity_exist(player_ped_id()))
	{
		if (iParam0 == 1)
		{
			decor_set_bool(player_ped_id(), "Inspecting_Item", true);
		}
		else if (decor_exist_on(player_ped_id(), "Inspecting_Item"))
		{
			decor_remove(player_ped_id(), "Inspecting_Item");
		}
	}
}

bool func_705(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

bool func_706(int iParam0, int iParam1)
{
	if (!func_705(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0] && iParam1) != 0;
}

bool func_707(int iParam0)
{
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	if (func_1003(Global_35, iParam0, 0, 1) < 2f && _0xd543d3a8fde4f185(Global_35, iParam0))
	{
		return true;
	}
	return false;
}

bool func_708(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_709(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

bool func_710()
{
	if (Global_1946804->f_2793)
	{
		return true;
	}
	if (absi((get_game_timer() - Global_1946804->f_2791)) < 1250)
	{
		return true;
	}
	if (func_1004())
	{
		return true;
	}
	if (_0xec7e480ff8bd0bed(Global_35))
	{
		return true;
	}
	return false;
}

int func_711(int iParam0)
{
	iVar0 = func_199(iParam0);
	if (iVar0 == 81053684 || iVar0 == -525676072)
	{
		return 1;
	}
	return 0;
}

void func_712(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

int func_713(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (func_719(&iVar0))
	{
		if (iParam0 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_714(int iParam0)
{
	if (-1829635046 == func_1005(81053684))
	{
		if (func_719(iParam0))
		{
			return true;
		}
	}
	else if (func_593(-525676072, iParam0))
	{
		if (func_719(iParam0))
		{
			return true;
		}
	}
	return false;
}

int func_715()
{
	iVar0 = 1549701178;
	switch (func_699())
	{
		case 0:
			iVar0 = 1549701178;
			break;
		case 3:
			iVar0 = 949387044;
			break;
		case 1:
			iVar0 = -22529868;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_716()
{
	iVar0 = 614608656;
	switch (func_699())
	{
		case 0:
			iVar0 = 614608656;
			break;
		case 3:
			iVar0 = -1290316291;
			break;
		case 1:
			iVar0 = 1918034163;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_717()
{
	iVar0 = -1832677570;
	switch (func_699())
	{
		case 0:
			iVar0 = -1832677570;
			break;
		case 3:
			iVar0 = -362314920;
			break;
		case 1:
			iVar0 = -1336137422;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_718()
{
	iVar0 = 1623252156;
	switch (func_699())
	{
		case 0:
			iVar0 = 1623252156;
			break;
		case 3:
			iVar0 = -1469902924;
			break;
		case 1:
			iVar0 = 170763280;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

bool func_719(int iParam0)
{
	if (func_593(81053684, iParam0))
	{
		return true;
	}
	if (func_593(-525676072, iParam0))
	{
		return true;
	}
	return false;
}

void func_720(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_8 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3[0] = 0;
	uParam0->f_3[1] = 0;
	uParam0->f_3[2] = 0;
	uParam0->f_3[3] = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	if (uParam0->f_12)
	{
		_0x13e7320c762f0477(uParam0->f_13);
	}
	uParam0->f_12 = 0;
}

void func_721(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

void func_722(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_413(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_413(iParam0, 1)])->f_10 - ((Global_1946804->f_57[func_413(iParam0, 1)])->f_10 && iParam1));
}

int func_723(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -2061583405:
			return Global_1946804->f_2657.f_21;
		case 81053684:
			return Global_1946804->f_2657.f_23;
		case -525676072:
			return Global_1946804->f_2657.f_22;
		case -1719060085:
			return Global_1946804->f_2657.f_24;
		case -413129408:
			return Global_1946804->f_2657.f_25;
		case -999503751:
			if (bParam1)
			{
				return Global_1946804->f_2657.f_20;
			}
			else
			{
				return func_1006();
			}
			break;
	}
	return 0;
}

int func_724(int iParam0, bool bParam1)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case -2061583405:
			iVar0 = Global_1946804->f_2657.f_26.f_1;
			break;
		case 81053684:
			iVar0 = 1;
			break;
		case -525676072:
			iVar0 = Global_1946804->f_2657.f_26.f_2;
			break;
		case -1719060085:
			iVar0 = 1;
			break;
		case -999503751:
			iVar0 = Global_1946804->f_2657.f_26;
			break;
		case -413129408:
			iVar0 = 1;
			break;
		default:
			return 0;
	}
	switch (iParam0)
	{
		case -999503751:
			if (iVar0 > 0 && !bParam1)
			{
				iVar0 = (iVar0 - 1);
			}
			break;
	}
	return iVar0;
}

bool func_725(int iParam0, int iParam1)
{
	*iParam1 = 0;
	*iParam1 = 0;
	while (*iParam1 < Global_1946804->f_2657.f_19)
	{
		if (iParam0 == &Global_1946804->f_2657[*iParam1])
		{
			return true;
		}
		*iParam1++;
	}
	return false;
}

bool func_726(int iParam0)
{
	if (func_23() == -1)
	{
		if (Global_40.f_4283 != 0)
		{
			if (iParam0 == 1164374808)
			{
				return false;
			}
		}
	}
	return true;
}

int func_727(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	iVar1 = iParam0;
	if (Global_1946804->f_2657.f_19 >= 18)
	{
		return 0;
	}
	if (*uParam1 >= iParam2)
	{
		return 0;
	}
	if (func_725(iVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !func_1007(iParam0, 0))
	{
		return 0;
	}
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = iVar1;
	if (func_199(iParam0) != -999503751)
	{
		func_1008(&(Global_1946804->f_2657.f_26.f_26), iParam0, Global_1946804->f_2657.f_19);
	}
	Global_1946804->f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_728(int iParam0, int iParam1)
{
	Var0 = { func_296(iParam0, 0, 0) };
	Var5 = { func_346(iParam0, Var0, Var0.f_4, 0) };
	if (func_419(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	_0x0349404a22736740(iParam1, func_86(0), &Var5);
	return 1;
}

int func_729()
{
	return Global_1946804->f_1;
}

void func_730()
{
	if (func_23() == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_2657.f_19)
		{
			Global_26796[iVar0] = &Global_1946804->f_2657[iVar0];
			iVar0++;
		}
		Global_26796.f_20 = Global_1946804->f_2657.f_20;
		Global_26796.f_21 = Global_1946804->f_2657.f_21;
		Global_26796.f_22 = Global_1946804->f_2657.f_22;
		Global_26796.f_23 = Global_1946804->f_2657.f_23;
		Global_26796.f_24 = Global_1946804->f_2657.f_24;
		Global_26796.f_19 = Global_1946804->f_2657.f_19;
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		Global_36638.f_45.f_350[iVar0] = &Global_1946804->f_2657[iVar0];
		iVar0++;
	}
	Global_36638.f_45.f_350.f_20 = Global_1946804->f_2657.f_20;
	Global_36638.f_45.f_350.f_21 = Global_1946804->f_2657.f_21;
	Global_36638.f_45.f_350.f_22 = Global_1946804->f_2657.f_22;
	Global_36638.f_45.f_350.f_23 = Global_1946804->f_2657.f_23;
	Global_36638.f_45.f_350.f_24 = Global_1946804->f_2657.f_24;
	Global_36638.f_45.f_350.f_19 = Global_1946804->f_2657.f_19;
}

bool func_731(int iParam0)
{
	return func_1010(func_1009(iParam0));
}

void func_732(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1011(0);
	}
	if (bParam0)
	{
		func_398(8);
		func_398(512);
	}
	else
	{
		func_398(8);
		func_398(16);
	}
}

void func_733(int iParam0, int iParam1, bool bParam2)
{
	func_1012(iParam0, 0, 0);
	func_409(iParam1, 1, bParam2, 0);
}

int func_734(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1889597427;
		case 1:
			return -1130352927;
		case 2:
			return 389988485;
		case 3:
			return 1780904876;
		case 4:
			return 1367443060;
		case 5:
			return -1506259487;
		case 6:
			return -676503695;
		case 7:
			return 383349088;
		case 8:
			return -1292426046;
		case 9:
			return 1422688607;
		case 10:
			return 1108822547;
		case 11:
			return -338487716;
		case 12:
			return 1742327865;
		case 13:
			return 1600962399;
		case 14:
			return 1849504272;
		case 15:
			return 1672288269;
		case 16:
			return 1250092473;
		case 17:
			return -893163968;
		case 18:
			return -450913544;
		case 19:
			return -1364808185;
		case 20:
			return -1197751823;
		case 21:
			return 304805134;
		case 22:
			return -1505978566;
		case 23:
			return 1145151482;
		case 24:
			return -1176744536;
		case 25:
			return 673166414;
		case 26:
			return -207860920;
		case 27:
			return 99217379;
		case 28:
			return -735900586;
		case 29:
			return -426430150;
		case 30:
			return 1788623170;
		case 31:
			return -1130865351;
		case 32:
			return -1884748965;
		case 33:
			return -1586649372;
		case 34:
			return 788010710;
		case 35:
			return 1958421083;
		case 36:
			return -1944638739;
		case 37:
			return 1900541263;
		case 38:
			return -1489346253;
		case 39:
			return -358215195;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

void func_735()
{
	Global_1946804->f_1378 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		iVar0++;
	}
}

void func_736(int iParam0)
{
	func_722(iParam0, 8, 6);
}

void func_737(int iParam0)
{
	func_1013(&(Global_1946804->f_2589), iParam0);
}

void func_738(int iParam0, int iParam1)
{
	func_1014(&(Global_1946804->f_2589), iParam0, iParam1);
}

void func_739(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_740(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar1 = 12;
	iVar2 = func_199(&(uParam0->f_1[iParam2]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_1015(iParam2, 65536) && &uParam0->f_1[iVar1] == -452402570)
	{
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_738(iVar1, iVar3);
		}
	}
	if (func_809(-1586649372) && func_1015(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_738(iVar1, iVar3);
		}
	}
	switch (iVar2)
	{
		case 698653232:
			if (iParam1 == &Global_1946804->f_57[iParam2])
			{
				iVar1 = 12;
				if (&uParam0->f_1[iVar1] == 1516947474)
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_738(iVar1, iVar3);
					}
				}
			}
			func_1016(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_1016(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
			iVar1 = 22;
			if (&uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1])
			{
			}
			else
			{
				iVar0 = 16;
				if (uParam0->f_1[iVar0]->f_1 == 1155669136 || uParam0->f_1[iVar0]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_738(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_1016(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1]->f_1 == 1155669136)
				{
					uParam0->f_1[iVar1]->f_1 = -1539589426;
					if (bParam4)
					{
						func_738(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1]->f_1 = 1334603721;
					if (bParam4)
					{
						func_738(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_1016(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_1016(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_738(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_1016(uParam0, (1 && bParam4), 0, 1, bParam3);
				Jump @1415; //curOff = 807
				if (iParam1 == &Global_1946804->f_57[iParam2])
				{
					iVar1 = 37;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_738(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_738(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_199(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_738(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_595(iParam1) && &uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1]) && -923693316 == func_199(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_738(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && func_190(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_738(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 1228
				iVar1 = 36;
				if (&uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_738(iVar1, iVar3);
					}
				}
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && (func_595(&(Global_1946804->f_1497.f_1[iVar1])) || func_190(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711)))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_738(iVar1, iVar3);
					}
				}
			}
			switch (func_199(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_199(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_738(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_199(&(uParam0->f_1[iVar1])) || func_190(&(uParam0->f_1[iVar1]), 866047851))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_738(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

int func_741(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = func_1017(0);
	if (iParam2 != 0 && func_1018(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_1019(iParam0, func_734(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_742(var uParam0, bool bParam1, int iParam2)
{
	bVar6 = func_23() != -1;
	iVar7 = func_1017(0);
	if (func_405(32768))
	{
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 39)
	{
		iVar0 = &Global_1946804->f_57.f_430[iVar2];
		if (iVar0 <= -1 || iVar0 >= 39)
		{
		}
		else
		{
			iVar5 = func_734(iVar0, 1);
			if (func_1020(iVar5, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
			{
			}
			else if (func_1020(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
			{
			}
			else
			{
				iVar4 = func_594(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_1021(uParam0);
				if (iVar3 > 0)
				{
					if (!func_405(524288))
					{
						func_398(524288);
						iVar1 = (iVar1 - iVar8);
					}
					iVar2 = iVar3;
					while (iVar2 <= 38)
					{
						iVar0 = &Global_1946804->f_57.f_430[iVar2];
						if (iVar0 <= -1 || iVar0 >= 39)
						{
						}
						else
						{
							iVar5 = func_734(iVar0, 1);
							if (func_1020(iVar5, 8))
							{
							}
							else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
							{
							}
							else if (func_1020(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
							{
							}
							else
							{
								iVar4 = func_594(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0] = &Global_1946804->f_57[iVar0];
									uParam0->f_1[iVar0]->f_1 = 0;
									if (bParam1)
									{
										func_738(iVar0, iParam2);
									}
								}
								iVar1 = (iVar1 + iVar4);
							}
						}
						iVar2++;
					}
				}
				if ((iVar1 + iVar8) < 31)
				{
					func_721(524288);
				}
			}
		}
	}
}

void func_743(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_1022(&(uParam0->f_2[iVar0]), bParam1, bParam2);
		iVar0++;
	}
	if (func_23() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_1023(2, Global_26796.f_776)) || Global_1946804->f_1497 != func_1024(0))
		{
			if (Global_40.f_7157[Global_40.f_7729] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729] = (&Global_40.f_7157[Global_40.f_7729] - Global_40.f_7157[Global_40.f_7729] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729] |= 4096;
				Global_1946804->f_1497 = func_1024(Global_40.f_7729);
				Global_1946804->f_1378 = func_1024(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_1025(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_732(0, 1);
	}
}

bool func_744(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_745(struct<4> Param0)
{
	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_708(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1] == Param0 && Global_1946804->f_769[iVar1]->f_2 == Param0.f_2) && Global_1946804->f_769[iVar1]->f_3 == Param0.f_3) && Global_1946804->f_769[iVar1]->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1] == 34 && func_708(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_709(Param0);
	*Global_1946804->f_769[Global_1946804->f_854] = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_398(8);
}

bool func_746()
{
	return Global_1914319->f_17375;
}

bool func_747()
{
	if (func_155())
	{
		iVar0 = _0xd04241bbf6d03a5e(player_ped_id());
		return iVar0 != 0;
	}
	return false;
}

bool func_748()
{
	return &Global_1898068;
}

var func_749(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	_0xde544b7ec0c187cc(&uVar0);
	if (!network_is_game_in_progress())
	{
		return uVar0;
	}
	if (func_1026() != 0)
	{
		iVar1 = player_id();
		if (iVar1 >= 0 && iVar1 < 32)
		{
			_0x31010318ba9897ac(&uVar0, iVar1);
		}
		return uVar0;
	}
	iVar2 = 0;
	bVar3 = false;
	bVar4 = false;
	iVar5 = Global_1225639->f_10;
	iVar6 = Global_1225639->f_14;
	bVar7 = true;
	iVar9 = iParam10;
	if (vmag2(vParam6) < 1f)
	{
		bVar7 = false;
	}
	else
	{
		switch (iParam9)
		{
			case 665633627:
				iVar8 = _create_volume_cylinder_with_custom_name(vParam0, vParam3, vParam6, func_1027());
				break;
			case -432403087:
				iVar8 = _create_volume_sphere_with_custom_name(vParam0, vParam3, vParam6, func_1027());
				break;
			case -1612834106:
				iVar8 = _create_volume_box_with_custom_name(vParam0, vParam3, vParam6, func_1027());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_1028(get_player_team(iVar5)));
	}
	if (iVar9 & 8 != 0 && iVar9 & 32768 != 0)
	{
		iVar9 |= 65536;
		iVar9 = (iVar9 - iVar9 & 40952);
	}
	if (iVar9 & 4 != 0)
	{
		if (!network_get_this_script_is_network_script())
		{
			iVar9 = (iVar9 - iVar9 & 4);
			iVar9 |= 0;
		}
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (&Global_1225639->f_21[iVar2])
		{
			iVar10 = &Global_1225639->f_120[iVar2];
			bVar3 = false;
			bVar4 = false;
			if (iVar9 & 1 != 0 && iVar10 == iVar5)
			{
				bVar3 = true;
			}
			if (func_623(iVar2))
			{
				bVar3 = true;
			}
			iVar11 = get_player_ped(iVar10);
			if (!bVar3)
			{
				if (iVar9 & 2 != 0)
				{
					if (!does_entity_exist(iVar11))
					{
						bVar3 = true;
					}
					else if (&Global_1225639->f_54[iVar2])
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8192 != 0 && func_1029(iVar2) != 1)
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 16384 != 0 && _0xb655db7582aec805(iVar11))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 4 != 0 && !network_is_player_a_participant(iVar10))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8176 != 0)
				{
					switch (get_player_team(iVar10))
					{
						case -1:
							if (iVar9 & 16 != 0)
							{
								bVar4 = true;
							}
							break;
						case 0:
							if (iVar9 & 32 != 0)
							{
								bVar4 = true;
							}
							break;
						case 1:
							if (iVar9 & 64 != 0)
							{
								bVar4 = true;
							}
							break;
						case 2:
							if (iVar9 & 128 != 0)
							{
								bVar4 = true;
							}
							break;
						case 3:
							if (iVar9 & 256 != 0)
							{
								bVar4 = true;
							}
							break;
						case 4:
							if (iVar9 & 512 != 0)
							{
								bVar4 = true;
							}
							break;
						case 5:
							if (iVar9 & 1024 != 0)
							{
								bVar4 = true;
							}
							break;
						case 6:
							if (iVar9 & 2048 != 0)
							{
								bVar4 = true;
							}
							break;
						case 8:
							if (iVar9 & 4096 != 0)
							{
								bVar4 = true;
							}
							break;
					}
					if (!bVar4)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 32768 != 0)
				{
					if (_0x901e0dc25080c8b9(iVar10) != iVar6)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 65536 != 0)
				{
					if (!func_1030(iVar10))
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3 && bVar7)
			{
				if (!_0xf256a75210c5c0eb(iVar8, get_entity_coords(iVar11, false, false)))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				_0x31010318ba9897ac(&uVar0, iVar2);
			}
		}
		iVar2++;
	}
	if (bVar7)
	{
		_delete_volume(iVar8);
	}
	return uVar0;
}

int func_750(var uParam0, struct<18> Param1)
{
	if (!func_1031(uParam0))
	{
		return 0;
	}
	*uParam0->f_2[*uParam0] = { Param1 };
	*uParam0++;
	return 1;
}

void func_751(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (func_23() == -1)
	{
		if (func_356(43))
		{
			if (func_190(iParam0, 412399755))
			{
				func_789(-1791518714);
				if (func_790() == 0)
				{
					func_101(0, 10);
					iVar0 = func_1032(iParam0, iParam1, 1);
					if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
					{
						if (func_792(iParam0) < func_793(iParam0))
						{
							func_360(43, iParam0, iParam1, -1791518714, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (func_356(44))
		{
			if (func_190(iParam0, 709057512))
			{
				func_789(-2087881550);
				if (func_790() == 1)
				{
					func_101(0, 10);
					iVar0 = func_1032(iParam0, iParam1, 2);
					if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
					{
						if (func_792(iParam0) < func_793(iParam0))
						{
							func_360(43, iParam0, iParam1, -2087881550, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_356(45))
		{
			if (func_190(iParam0, -1478961327))
			{
				func_789(1908068621);
				if (func_790() == 2)
				{
					func_101(0, 10);
					iVar0 = func_1032(iParam0, iParam1, 4);
					if (((iParam0 == 2116770557 || iParam0 == -651064726) || iParam0 == -404270094) || iParam0 == 2093126853)
					{
						if (func_792(iParam0) < func_793(iParam0))
						{
							func_360(43, iParam0, iParam1, 1908068621, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_356(46))
		{
			if (func_190(iParam0, -1238404098))
			{
				func_789(1611247019);
				if (func_790() == 3)
				{
					func_101(0, 10);
					iVar0 = func_1032(iParam0, iParam1, 8);
					if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
					{
						if (func_792(iParam0) < func_793(iParam0))
						{
							func_360(43, iParam0, iParam1, 1611247019, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_356(47))
		{
			if (func_190(iParam0, 1160548794))
			{
				func_789(1319635688);
				if (func_790() == 4)
				{
					func_101(0, 10);
					iVar0 = func_1032(iParam0, iParam1, 16);
					if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
					{
						if (func_792(iParam0) < func_793(iParam0))
						{
							func_360(43, iParam0, iParam1, 1319635688, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

bool func_752(int iParam0)
{
	if (func_23() != -1)
	{
		return false;
	}
	if (func_454(iParam0, 1048576))
	{
		return false;
	}
	if (is_weapon_valid(iParam0))
	{
		return func_297(iParam0, &uVar0, 1, 0, 0);
	}
	return func_25(iParam0, 1, 0);
}

void func_753(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (func_122(iParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_253(iParam0, 0);
	if (!is_weapon_valid(iVar0))
	{
		return;
	}
	if (bParam2 || !func_564(iVar0))
	{
		if (func_23() == -1)
		{
			func_254(iVar0);
		}
		if (bParam2 || (!has_ped_got_weapon(Global_35, iVar0, 0, false) && func_124(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_256(iParam0, iParam1, 0, 0, 0);
				play_sound_frontend("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_754(int iParam0, int iParam1)
{
	if (func_190(iParam0, 58855631))
	{
		func_1033(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

int func_755(int iParam0, bool bParam1)
{
	if (func_460(iParam0))
	{
		return get_ped_ammo_by_type(Global_35, iParam0);
	}
	return _0xe787f05dfc977bde(func_86(bParam1), iParam0, 0);
}

bool func_756()
{
	if (func_23() != -1)
	{
		return false;
	}
	if (!func_264())
	{
		return false;
	}
	if (!func_120((*Global_1835011)[1]->f_1, 1))
	{
		return true;
	}
	if ((func_120((*Global_1835011)[2]->f_1, 1) && func_120((*Global_1347702)[120]->f_15, 1)) && !func_120((*Global_1835011)[4]->f_1, 1))
	{
		return true;
	}
	if (func_120((*Global_1835011)[37]->f_1, 1) && !func_120((*Global_1835011)[39]->f_1, 1))
	{
		return true;
	}
	if (func_120((*Global_1835011)[57]->f_1, 1) && !func_120((*Global_1835011)[60]->f_1, 1))
	{
		return true;
	}
	if (func_120((*Global_1835011)[26]->f_1, 1) && !func_120((*Global_1347702)[67]->f_15, 1))
	{
		return true;
	}
	if ((func_120((*Global_1835011)[62]->f_1, 1) && func_120((*Global_1835011)[63]->f_1, 1)) && !func_120((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if (func_120((*Global_1835011)[75]->f_1, 1) && !func_120((*Global_1347702)[1]->f_15, 1))
	{
		return true;
	}
	if (func_120((*Global_1835011)[76]->f_1, 1) && !func_120((*Global_1835011)[77]->f_1, 1))
	{
		return true;
	}
	if ((func_120((*Global_1835011)[40]->f_1, 1) && func_120((*Global_1835011)[41]->f_1, 1)) && !func_120((*Global_1835011)[44]->f_1, 1))
	{
		return true;
	}
	if ((func_120((*Global_1835011)[62]->f_1, 1) && func_120((*Global_1835011)[63]->f_1, 1)) && !func_120((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if ((func_120((*Global_1835011)[65]->f_1, 1) && func_120((*Global_1835011)[66]->f_1, 1)) && !func_120((*Global_1835011)[67]->f_1, 1))
	{
		return true;
	}
	return false;
}

int func_757()
{
	return _0x62cab7db62ead434(-2076669067, 0);
}

int func_758(int iParam0)
{
	return _0xec3959e9950bf56b(iParam0);
}

int func_759(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 554799588;
		case 1:
			return -1021394391;
		case 2:
			return -987306668;
		case 3:
			return -1028735103;
		case 4:
			return 515229791;
		case 5:
			return -1230863414;
		case 6:
			return 232875659;
		case 7:
			return 1423129537;
		case 8:
			return -435742319;
		case 9:
			return -1854702679;
		case 10:
			return 1265323898;
		case 11:
			return -479775696;
		default:
			break;
	}
	return 0;
}

bool func_760(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_761(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_762(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	set_bit(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_763(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 11:
			func_1034(1);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			break;
		case 18:
			_uitutorial_set_rpg_icon_visibility(5, 0);
			_uitutorial_set_rpg_icon_visibility(4, 0);
			func_1035(1);
			break;
		case 19:
			_uitutorial_set_rpg_icon_visibility(1, 0);
			_uitutorial_set_rpg_icon_visibility(0, 0);
			func_1035(2);
			break;
		case 20:
			_uitutorial_set_rpg_icon_visibility(3, 0);
			_uitutorial_set_rpg_icon_visibility(2, 0);
			func_1035(3);
			break;
		case 21:
			_uitutorial_set_rpg_icon_visibility(7, 0);
			_uitutorial_set_rpg_icon_visibility(6, 0);
			break;
		case 22:
			_uitutorial_set_rpg_icon_visibility(9, 0);
			_uitutorial_set_rpg_icon_visibility(8, 0);
			break;
		case 31:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 32:
			break;
		case 33:
			func_1036(1);
			break;
		case 34:
			func_1037(1);
			break;
		case 35:
			func_1038(1);
			break;
		case 36:
			break;
		case 37:
			func_1039(0);
			break;
		case 38:
			func_1040(0);
			break;
		case 39:
			func_1041(0);
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 43:
			break;
		case 1:
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_level(get_player_index(), 1);
			break;
		case 2:
			if ((!&Global_1879534 && func_264()) && _is_deadeye_ability_locked(get_player_index(), 2))
			{
				func_690("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_level(get_player_index(), 2);
			func_63(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_264()) && _is_deadeye_ability_locked(get_player_index(), 3))
			{
				func_690("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_level(get_player_index(), 3);
			func_63(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_264()) && _is_deadeye_ability_locked(get_player_index(), 4))
			{
				func_690("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_level(get_player_index(), 4);
			func_63(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_264()) && _is_deadeye_ability_locked(get_player_index(), 5))
			{
				func_690("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_locked(get_player_index(), 5, false);
			_set_deadeye_ability_level(get_player_index(), 5);
			func_63(589, 0);
			break;
		case 24:
			_unlock_set_unlocked(-200143754, true);
			_unlock_set_visible(-200143754, true);
			_0x83b8d50eb9446bba(player_ped_id(), 1);
			if (func_23() == -1)
			{
				if (!func_809(99217379) || func_1042(99217379) == 2110595215)
				{
					if (func_768())
					{
						iVar0 = -1515874150;
					}
					else
					{
						iVar0 = 899611344;
					}
					if (!func_25(iVar0, 1, 0))
					{
						func_498(iVar0, 1, 752097756);
					}
					func_210(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_23() == -1)
			{
				if (!func_25(1013902307, 1, 0))
				{
					func_498(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_23() == -1)
			{
				if (!func_25(1013902307, 1, 0))
				{
					func_498(1013902307, 1, 752097756);
				}
				if (!func_25(142640135, 1, 0))
				{
					func_498(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_23() == -1)
			{
				if (!func_25(786809402, 1, 0))
				{
					func_498(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_23() == -1)
			{
				if (!func_25(786809402, 1, 0))
				{
					func_498(786809402, 1, 752097756);
				}
				if (!func_25(-518019409, 1, 0))
				{
					func_498(-518019409, 1, 752097756);
				}
			}
			break;
		case 23:
			_0x5b9813ecf7633fe8(0);
			break;
		case 25:
			break;
		case 26:
			break;
		case 27:
			break;
		case 28:
			break;
		case 29:
			break;
		case 30:
			break;
		case 44:
			break;
		case 45:
			_unlock_set_unlocked(-843169622, true);
			Global_1935630->f_47 = 1;
			set_ambient_zone_list_state_persistent("AZL_Endlesss_Summer_Enable", true, true);
			set_ambient_zone_list_state_persistent("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 46:
			func_1043();
			break;
		case 47:
			_0xa63fcad3a6fec6d2(get_player_index(), 1);
			break;
		case 52:
			_unlock_set_unlocked(-78935213, true);
			break;
		case 53:
			_unlock_set_unlocked(-384786155, true);
			break;
		case 54:
			_unlock_set_unlocked(296662302, true);
			break;
		case 55:
			_unlock_set_unlocked(-1871453000, true);
			break;
		case 56:
			_unlock_set_unlocked(1397349651, true);
			break;
	}
}

int func_764(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1782082944;
		case 1:
			return 1704602624;
		case 2:
			return 1214181762;
		case 3:
			return -430578371;
		case 4:
			return -730381952;
		case 5:
			return -253503777;
		case 6:
			return 1352275534;
		case 7:
			return 1666399168;
		case 8:
			return -1911121386;
		case 9:
			return 1756656691;
		case 10:
			return -1774867076;
		case 11:
			return -421952220;
		case 12:
			return -1087003323;
		case 13:
			return 1231618917;
		case 14:
			return -1183777174;
		case 15:
			return -841767082;
		case 16:
			return 1043717005;
		case 17:
			return 142663787;
		case 18:
			return 1718143051;
		case 19:
			return -6605744;
		case 20:
			return 953047564;
		case 21:
			return 769706682;
		case 22:
			return 1635590003;
		case 23:
			return -2047978619;
		case 24:
			return -586319254;
		case 25:
			return 249896112;
		case 26:
			return -1060513333;
		case 27:
			return 1317351007;
		case 28:
			return -500478573;
		case 29:
			return -806573802;
		case 30:
			return -1109949204;
		case 31:
			return -740156546;
		case 32:
			return -684532710;
		case 33:
			return 1158805436;
		case 34:
			return -559473670;
		case 35:
			return -797147251;
		case 36:
			return -382216265;
		case 37:
			return 1419177114;
		case 38:
			return 1704297235;
		case 39:
			return -1139016418;
		case 40:
			return 897705377;
		case 41:
			return 17961769;
		case 42:
			return 205582207;
		case 43:
			return 900740963;
		case 44:
			return -1369589344;
		case 45:
			return -1695823795;
		case 46:
			return -41453074;
		case 47:
			return 539767227;
		case 48:
			return 1210490314;
		case 49:
			return -399684751;
		case 50:
			return 2138893455;
		case 51:
			return -1617010487;
		case 52:
			return -832377028;
		case 53:
			return -428040245;
		case 54:
			return 1279288897;
		case 55:
			return -594897905;
		case 56:
			return -1360459240;
		case 57:
			return 1838428396;
		case 58:
			return -1467846997;
		case 59:
			return -490610263;
		case 60:
			return -1885413079;
		case 61:
			return 708884155;
		case 62:
			return -134459952;
		case 63:
			return -1912136700;
		case 64:
			return -1268031552;
		case 65:
			return 1177953227;
		case 66:
			return 2130805296;
		case 67:
			return 38093490;
		case 68:
			return -269153218;
		case 69:
			return -1995068011;
		case 70:
			return -164284834;
		case 71:
			return 1446463345;
		case 72:
			return 1501315823;
		case 73:
			return -750379482;
		case 74:
			return -929560937;
		case 75:
			return 608323241;
		case 76:
			return 1030796013;
		case 77:
			return 1915057434;
		case 78:
			return -1582276476;
		case 79:
			return 692059311;
		case 80:
			return 2062839241;
		case 81:
			return -1884531872;
		case 82:
			return -866434534;
		case 83:
			return -1252192421;
		case 84:
			return 1243288963;
		case 85:
			return -1953772189;
		case 86:
			return 754411745;
		case 87:
			return 545309006;
		case 88:
			return -1089810811;
		case 89:
			return 1957869400;
		case 90:
			return -241412332;
		case 91:
			return -1548010959;
		case 92:
			return 550150488;
		case 93:
			return 946565453;
		case 94:
			return 434443248;
		case 95:
			return -1709914938;
		case 96:
			return 366686112;
		case 97:
			return -1370063350;
		case 98:
			return 2126829550;
		case 99:
			return 226552910;
		case 100:
			return 721193431;
		case 101:
			return -315672460;
		case 102:
			return 623544501;
		case 103:
			return 259556714;
		case 104:
			return -2125361825;
		case 105:
			return 1078230356;
		case 106:
			return 1885364811;
		case 107:
			return 1630382737;
		case 108:
			return 1738245512;
		case 109:
			return 1540262216;
		case 110:
			return 1016871472;
		case 111:
			return 13829069;
		case 112:
			return 737051352;
		case 113:
			return 1734614610;
		case 114:
			return -208715295;
		case 115:
			return 1435062936;
		case 116:
			return 1483055553;
		case 117:
			return 380335002;
		case 118:
			return -1079385677;
		case 119:
			return 676610411;
		case 120:
			return 2145419552;
		case 121:
			return 657238733;
		case 122:
			return 1850579281;
		case 123:
			return -1923957384;
		case 124:
			return -1142828108;
		case 125:
			return -1400618531;
		case 126:
			return -1433857135;
		case 127:
			return 209987206;
		case 128:
			return 1686943047;
		case 129:
			return -59178517;
		case 130:
			return 2134884601;
		case 131:
			return 651707517;
		case 132:
			return -633788535;
		case 133:
			return 116394463;
		case 134:
			return -1196973875;
		case 135:
			return 801752086;
		case 136:
			return 184475332;
		case 137:
			return -1880922659;
		case 138:
			return -898138634;
		case 139:
			return -2107418444;
		case 140:
			return -679970099;
		case 141:
			return -1531392549;
		case 142:
			return 1612483376;
		case 143:
			return 463930900;
		case 144:
			return -632148238;
		case 145:
			return 55303249;
		case 146:
			return 2108322089;
		case 147:
			return -1358896714;
		case 148:
			return 74475632;
		case 149:
			return -28710953;
		case 150:
			return -1791599168;
		case 151:
			return 1605938169;
		case 152:
			return 1255242276;
		case 153:
			return 636467727;
		case 154:
			return -1567688525;
		case 155:
			return -77886679;
		case 156:
			return -1057900679;
		case 157:
			return -1960888134;
		case 158:
			return -1719717295;
		case 159:
			return -1779244911;
		case 160:
			return -670540863;
		case 161:
			return 223362311;
		case 162:
			return 1150824567;
		case 163:
			return 974471191;
		case 164:
			return 1989683968;
		case 165:
			return 254804477;
		case 166:
			return 192057609;
		case 167:
			return 1553957817;
		case 168:
			return 2099829015;
		case 169:
			return -840300007;
		case 170:
			return -1948423372;
		case 171:
			return 981083654;
		case 172:
			return 1283289876;
		case 173:
			return -606884489;
		case 174:
			return -100418572;
		case 175:
			return 663645231;
		case 176:
			return 1442217033;
		case 177:
			return 1410986244;
		case 178:
			return 847409839;
		case 179:
			return 923926911;
		case 180:
			return 109995826;
		case 181:
			return -747412737;
		case 182:
			return 1114341727;
		case 183:
			return -539456939;
		case 184:
			return 45887121;
		case 185:
			return 913271624;
		case 186:
			return -1652812715;
		case 187:
			return -1791365775;
		case 188:
			return -979299941;
		case 189:
			return 713062001;
		case 190:
			return -575045963;
		case 191:
			return 1852965262;
		case 192:
			return -1398836354;
		case 193:
			return -1829885298;
		case 194:
			return -1773850357;
		case 195:
			return -564258009;
		case 196:
			return 2016532685;
		case 197:
			return -1070563798;
		case 198:
			return -1619221343;
		case 199:
			return -345571691;
		case 200:
			return 544288390;
		case 201:
			return 159578294;
		case 202:
			return -76852849;
		case 203:
			return 1110295244;
		case 204:
			return 2104563477;
		case 205:
			return 1947827651;
		case 206:
			return -933072766;
		case 207:
			return 2104388648;
		case 208:
			return -1677140601;
		case 209:
			return -2133097881;
		case 210:
			return -826678792;
		case 211:
			return -513522325;
		case 212:
			return 1970588249;
		case 213:
			return -2080032591;
		case 214:
			return 1758847745;
		case 215:
			return 895010282;
		case 216:
			return -511891179;
		case 217:
			return -1207567168;
		case 218:
			return -1315407613;
		case 219:
			return 1786352060;
		case 220:
			return -833319691;
		case 221:
			return 1591329969;
		case 222:
			return 2123222014;
		case 223:
			return -1578397674;
		case 224:
			return 1473261684;
		case 225:
			return -241855024;
		case 226:
			return 12999093;
		case 227:
			return -6796437;
		case 228:
			return -268116367;
		case 229:
			return -636470867;
		case 230:
			return 1737668280;
		case 231:
			return 892807236;
		case 232:
			return -733247890;
		case 233:
			return 24047176;
		case 234:
			return -1561999014;
		case 235:
			return -2052774042;
		case 236:
			return -997150586;
		case 237:
			return -1189569496;
		case 238:
			return 46488141;
		case 239:
			return 1046566686;
		case 240:
			return 325139909;
		case 241:
			return -1585141069;
		case 242:
			return 802754820;
		case 243:
			return 1415981582;
		case 244:
			return -1886147520;
		case 245:
			return 654877947;
		case 246:
			return -415648720;
		case 247:
			return 1221327846;
		case 248:
			return 923162715;
		case 249:
			return 625423581;
		case 250:
			return 326668608;
		case 251:
			return 669530755;
		case 252:
			return 429759982;
		case 253:
			return -2111934838;
		case 254:
			return 1886178087;
		case 255:
			return 1587783573;
		case 256:
			return -279722001;
		case 257:
			return 1310070322;
		case 258:
			return 724026534;
		case 259:
			return 137387616;
		case 260:
			return -653439684;
		case 261:
			return 1376835592;
		case 262:
			return -1824203570;
		case 263:
			return -1654197998;
		case 264:
			return 798987653;
		case 265:
			return 976923323;
		case 266:
			return 1167442289;
		case 267:
			return 986998820;
		case 268:
			return -2119169513;
		case 269:
			return -2015960939;
		case 270:
			return 1132377945;
		case 271:
			return 739936401;
		case 272:
			return 1201880974;
		case 273:
			return 819728896;
		case 274:
			return 1746010219;
		case 275:
			return 1433393959;
		case 276:
			return -1287636759;
		case 277:
			return -706917073;
		case 278:
			return -2166805;
		case 279:
			return -1391602433;
		case 280:
			return 1782075221;
		case 281:
			return 1282544585;
		case 282:
			return 1732594027;
		case 283:
			return -1058817012;
		case 284:
			return 1090546265;
		case 285:
			return -1783120823;
		case 286:
			return -1535745896;
		case 287:
			return -2086922122;
		case 288:
			return -1675198649;
		case 289:
			return 1189497682;
		case 290:
			return -1565675519;
		case 291:
			return -268973591;
		case 292:
			return 1039159916;
		case 293:
			return 1111816631;
		case 294:
			return 405591388;
		case 295:
			return 897456793;
		case 296:
			return 104187473;
		case 297:
			return 773808542;
		case 298:
			return -1120669954;
		case 299:
			return -1389278274;
		case 300:
			return 552979403;
		case 301:
			return -1571578784;
		case 302:
			return -708312114;
		case 303:
			return 688823508;
		case 304:
			return -1622147240;
		case 305:
			return 830292162;
		case 306:
			return 226276782;
		case 307:
			return -678416628;
		case 308:
			return -1098528034;
		case 309:
			return 316207340;
		case 310:
			return -1909200748;
		case 311:
			return -939652363;
		case 312:
			return -1990194462;
		case 313:
			return -375447933;
		case 314:
			return 537014919;
		case 315:
			return 1784584921;
		case 316:
			return -140655024;
		case 317:
			return 1084182731;
		case 318:
			return -1045471300;
		case 319:
			return 1617414719;
		case 320:
			return -787761753;
		case 321:
			return -490616606;
		case 322:
			return 1491346514;
		case 323:
			return -1360128126;
		case 324:
			return -1311702610;
		case 325:
			return -904250715;
		case 326:
			return 1034665895;
		case 327:
			return -101524555;
		case 328:
			return 1419152594;
		case 329:
			return -451359317;
		case 330:
			return -1915385310;
		case 331:
			return 1315162488;
		case 332:
			return -361152079;
		case 333:
			return -2041626192;
		case 334:
			return -2077812539;
		case 335:
			return -1371514637;
		case 336:
			return 1730017037;
		case 337:
			return 892816668;
		case 338:
			return -1994943603;
		case 339:
			return 603133554;
		case 340:
			return -30160144;
		case 341:
			return -1248299493;
		case 342:
			return 727393558;
		case 343:
			return 755611221;
		case 344:
			return -170255458;
		case 345:
			return 1011151573;
		case 346:
			return 1122339631;
		case 347:
			return 454815308;
		case 348:
			return 990701735;
		case 349:
			return -246340825;
		case 350:
			return -1410671073;
		case 351:
			return 1547608292;
		case 352:
			return -714132970;
		case 353:
			return 732290690;
		case 354:
			return 971340545;
		case 355:
			return -234132662;
		case 356:
			return -2143057988;
		case 357:
			return -993947465;
		case 358:
			return -486552269;
		case 359:
			return -1156317860;
		case 360:
			return 1229625803;
		case 361:
			return -388596167;
		case 362:
			return -1204639465;
		case 363:
			return -1384685096;
		case 364:
			return -2026728113;
		case 365:
			return -1228057307;
		case 366:
			return 1835126290;
		case 367:
			return 1890833594;
		case 368:
			return -751549960;
		case 369:
			return -1682270750;
		case 370:
			return -1839865333;
		case 371:
			return -1990383629;
		case 372:
			return 1712094016;
		case 373:
			return 1532953697;
		case 374:
			return 1620318083;
		case 375:
			return -307230331;
		case 376:
			return -1034549620;
		case 377:
			return -1293064293;
		case 378:
			return -1540142553;
		case 379:
			return -1769886012;
		case 380:
			return -1983081126;
		case 381:
			return -1106117124;
		case 382:
			return -1873108338;
		case 383:
			return -2097543219;
		case 384:
			return 155413195;
		case 385:
			return -1162387149;
		case 386:
			return 1728382685;
		case 387:
			return -649335959;
		case 388:
			return -1876502240;
		case 389:
			return -2107032155;
		case 390:
			return 1570861011;
		case 391:
			return 1075981185;
		case 392:
			return 960195961;
		case 393:
			return 1150460649;
		case 394:
			return 1689424794;
		case 395:
			return 619103418;
		case 396:
			return 1355448197;
		case 397:
			return 1681762005;
		case 398:
			return 1026887814;
		case 399:
			return 354352628;
		case 400:
			return 1519366642;
		case 401:
			return -82757515;
		case 402:
			return 386306655;
		case 403:
			return 1243962119;
		case 404:
			return 756214903;
		case 405:
			return -718417579;
		case 406:
			return -1445516411;
		case 407:
			return 1232060796;
		case 408:
			return -672392892;
		case 409:
			return 1465341584;
		case 410:
			return -427758369;
		case 411:
			return -735647142;
		case 412:
			return 1535838048;
		case 413:
			return -602272282;
		case 414:
			return 2051264661;
		case 415:
			return 487172188;
		case 416:
			return 282270687;
		case 417:
			return 1607708943;
		case 418:
			return 1686264939;
		case 419:
			return 314786149;
		case 420:
			return 1402841185;
		case 421:
			return 1099170772;
		case 422:
			return 2125676786;
		case 423:
			return -363896735;
		case 424:
			return -468790222;
		case 425:
			return -1779133048;
		case 426:
			return 1732537631;
		case 427:
			return 1755095401;
		case 428:
			return 835771095;
		case 429:
			return 1963317232;
		case 430:
			return 259627919;
		case 431:
			return 1299075397;
		case 432:
			return -1509094230;
		case 433:
			return 61132362;
		case 434:
			return 1549741908;
		case 435:
			return 288484254;
		case 436:
			return -1877032947;
		case 437:
			return -1395676456;
		case 438:
			return 1136146715;
		case 439:
			return 468034421;
		case 440:
			return 1079459546;
		case 441:
			return -140369351;
		case 442:
			return 1822341990;
		case 443:
			return 1219701681;
		case 444:
			return 1601295268;
		case 445:
			return -1692460667;
		case 446:
			return 1471419228;
		case 447:
			return 907446160;
		case 448:
			return -1126482585;
		case 449:
			return 1911050315;
		case 450:
			return -1343525599;
		case 451:
			return 1261891225;
		case 452:
			return 763162704;
		case 453:
			return 1335861197;
		case 454:
			return 526744654;
		case 455:
			return -1177461517;
		case 456:
			return -241638635;
		case 457:
			return 1024262875;
		case 458:
			return 853355463;
		case 459:
			return -337288221;
		case 460:
			return 361381308;
		case 461:
			return -1264898804;
		case 462:
			return -585289073;
		case 463:
			return 1423542233;
		case 464:
			return -948489286;
		case 465:
			return 2063859257;
		case 466:
			return -1652627327;
		case 467:
			return -1959697839;
		case 468:
			return -1532267859;
		case 469:
			return -1410062763;
		case 470:
			return -901428716;
		case 471:
			return -1628873469;
		case 472:
			return 144855571;
		case 473:
			return -617589883;
		case 474:
			return -1306457086;
		case 475:
			return 1713542477;
		case 476:
			return -305542365;
		case 477:
			return 1985390213;
		case 478:
			return -2145069367;
		case 479:
			return -1674390752;
		case 480:
			return -2117214398;
		case 481:
			return 1880805647;
		case 482:
			return -62390436;
		case 483:
			return 1815288415;
		case 484:
			return 196214097;
		case 485:
			return -201958220;
		case 486:
			return 244353594;
		case 487:
			return 302954672;
		case 488:
			return -1870144662;
		case 489:
			return 257892944;
		case 490:
			return -607182722;
		case 491:
			return -13254502;
		case 492:
			return 1400281261;
		case 493:
			return 1601515402;
		case 494:
			return -940704970;
		case 495:
			return -548371721;
		case 496:
			return -1022384613;
		case 497:
			return -357406394;
		case 498:
			return 1077068189;
		case 499:
			return -782241404;
		case 500:
			return 1669853467;
		case 501:
			return 1592019450;
		case 502:
			return 635273153;
		case 503:
			return -1559225678;
		case 504:
			return -266425508;
		case 505:
			return 1117400455;
		case 506:
			return 454332195;
		case 507:
			return -1328061889;
		case 508:
			return 561650932;
		case 509:
			return 256105670;
		case 510:
			return 1976779618;
		case 511:
			return -269095126;
		case 512:
			return 2145617267;
		case 513:
			return 1150213537;
		case 514:
			return 1598825281;
		case 515:
			return -712527121;
		case 516:
			return 1308553072;
		case 517:
			return 852866398;
		case 518:
			return -1794417972;
		case 519:
			return 293062146;
		case 520:
			return 95360094;
		case 521:
			return 807631773;
		case 522:
			return 1603958275;
		case 523:
			return 860052020;
		case 524:
			return -1885979781;
		case 525:
			return 746147970;
		case 526:
			return 666663006;
		case 527:
			return -2096186453;
		case 528:
			return 859409444;
		case 529:
			return -671427187;
		case 530:
			return 100192478;
		case 531:
			return 307812616;
		case 532:
			return 1670843243;
		case 533:
			return 899615863;
		case 534:
			return -298901850;
		case 535:
			return 1379186917;
		case 536:
			return -817206030;
		case 537:
			return -1150323212;
		case 538:
			return -247466821;
		case 539:
			return 427124242;
		case 540:
			return 855418120;
		case 541:
			return -777015093;
		case 542:
			return -722462870;
		case 543:
			return -937454324;
		case 544:
			return -339438116;
		case 545:
			return 2135639035;
		case 546:
			return 1254273765;
		case 547:
			return -792172668;
		case 548:
			return 1905987493;
		case 549:
			return 495693044;
		case 550:
			return -1693422950;
		case 551:
			return -205873076;
		case 552:
			return -2143114654;
		case 553:
			return -1420574021;
		case 554:
			return -1959250381;
		case 555:
			return -1088328663;
		case 556:
			return 513602003;
		case 557:
			return 359221401;
		case 558:
			return 1005272;
		case 559:
			return 1583044470;
		case 560:
			return 348853959;
		case 561:
			return 1045621973;
		case 562:
			return 1084576580;
		case 563:
			return 1651573695;
		case 564:
			return 1463321587;
		case 565:
			return -997505963;
		case 566:
			return -1649851713;
		case 567:
			return -386012962;
		case 568:
			return 1386101789;
		case 569:
			return 1227915917;
		case 570:
			return -218846335;
		case 571:
			return -352578118;
		case 572:
			return 1426626782;
		case 573:
			return -714081520;
		case 574:
			return 74547781;
		case 575:
			return 1271463052;
		case 576:
			return 1983140194;
		case 577:
			return 677262775;
		case 578:
			return -832337898;
		case 579:
			return -319249747;
		case 580:
			return -16955722;
		case 581:
			return -1535425646;
		case 582:
			return -1063641743;
		case 583:
			return -1041133401;
		case 584:
			return 1380479304;
		case 585:
			return 600890828;
		case 586:
			return 733333190;
		case 587:
			return 1843035435;
		case 588:
			return -304127320;
		case 589:
			return 122470371;
		case 590:
			return 0;
		case 591:
			return -1591664384;
		case 592:
			return -673000374;
		case 593:
			return -1150938404;
		case 594:
			return -1756997214;
		case 595:
			return -813824107;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

void func_765(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_859(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

void func_766(int iParam0)
{
	if (!is_weapon_valid(iParam0))
	{
		return;
	}
	if (!does_entity_exist(Global_35) || Global_1935630->f_12)
	{
		return;
	}
	if (_is_weapon_bow(iParam0))
	{
		return;
	}
	sVar0 = "player_newWeaponType";
	sVar1 = "player_newWeaponTime";
	if (_is_weapon_pistol(iParam0))
	{
		sVar0 = "player_newPistolWeaponType";
		sVar1 = "player_newPistolWeaponTime";
	}
	else if (_is_weapon_revolver(iParam0))
	{
		sVar0 = "player_newRevolverWeaponType";
		sVar1 = "player_newRevolverWeaponTime";
	}
	else if (_is_weapon_rifle(iParam0))
	{
		sVar0 = "player_newRifleWeaponType";
		sVar1 = "player_newRifleWeaponTime";
	}
	else if (_is_weapon_shotgun(iParam0))
	{
		sVar0 = "player_newShotgunWeaponType";
		sVar1 = "player_newShotgunWeaponTime";
	}
	decor_set_int(Global_35, sVar0, iParam0);
	iVar2 = func_147();
	func_246(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	decor_set_int(Global_35, sVar1, iVar2);
}

int func_767(int iParam0)
{
	if (func_328(iParam0))
	{
		if (get_ped_ammo_by_type(Global_35, 954660191) <= 0)
		{
			iVar0 = 10;
		}
		else
		{
			iVar0 = 0;
		}
	}
	else if (_0x705be297eebdb95d(iParam0))
	{
		if (_is_weapon_sniper(iParam0))
		{
			iVar0 = 12;
		}
		else
		{
			iVar0 = _get_weapon_clip_size(iParam0) * 4;
		}
		iVar1 = get_ped_ammo_by_type(Global_35, _get_ammo_type_for_weapon(iParam0));
		if (iVar1 >= iVar0)
		{
			iVar0 = 0;
		}
		else if (iVar1 > 0)
		{
			iVar0 = (iVar0 - iVar1);
		}
	}
	return iVar0;
}

bool func_768()
{
	if (func_23() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

bool func_769(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_770(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_771(int iParam0)
{
	iVar0 = _get_weapon_type_from_ammo_type(iParam0);
	if (_0x705be297eebdb95d(iVar0))
	{
		if (_is_weapon_two_handed(iVar0))
		{
			if (!func_455(50))
			{
				if (!func_455(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (_is_weapon_one_handed(iVar0))
		{
			if (!func_455(51))
			{
				if (!func_455(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_772()
{
	return _unlock_is_unlocked(-121456797);
}

void func_773()
{
	_0xfe7c9cf376d23342(player_id(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_774()
{
	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	set_player_health_recharge_multiplier(player_id(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	_0x08e22898a6af4905(player_id(), (1f - fVar0));
	_0xfeca17cf3343694b(player_id(), (1f - fVar0));
	_0xbbadfb5e5e5766fb(player_id(), (1f - fVar1));
}

int func_775()
{
	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_25(func_1044(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_776(int iParam0)
{
	switch (iParam0)
	{
		case -1217729597:
		case 363594903:
		case 425319238:
			return -62615415;
		case -1540119664:
		case 446659922:
		case 2100194981:
			return -832719552;
		case -1018798851:
		case -757567246:
		case -390982951:
			return -184823984;
		case -2054602073:
		case -585121677:
		case -378441099:
			return -1941112926;
		case 1566949660:
			return -121629511;
	}
	return 0;
}

bool func_777(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -62615415:
			if (iParam1 == 425319238)
			{
				iVar0 = 363594903;
				iVar1 = -1217729597;
			}
			else if (iParam1 == 363594903)
			{
				iVar0 = 425319238;
				iVar1 = -1217729597;
			}
			else
			{
				iVar0 = 425319238;
				iVar1 = 363594903;
			}
			break;
		case -832719552:
			if (iParam1 == -1540119664)
			{
				iVar0 = 2100194981;
				iVar1 = 446659922;
			}
			else if (iParam1 == 2100194981)
			{
				iVar0 = -1540119664;
				iVar1 = 446659922;
			}
			else
			{
				iVar0 = -1540119664;
				iVar1 = 2100194981;
			}
			break;
		case -184823984:
			if (iParam1 == -390982951)
			{
				iVar0 = -1018798851;
				iVar1 = -757567246;
			}
			else if (iParam1 == -1018798851)
			{
				iVar0 = -390982951;
				iVar1 = -757567246;
			}
			else
			{
				iVar0 = -390982951;
				iVar1 = -1018798851;
			}
			break;
		case -1941112926:
			if (iParam1 == -2054602073)
			{
				iVar0 = -378441099;
				iVar1 = -585121677;
			}
			else if (iParam1 == -378441099)
			{
				iVar0 = -2054602073;
				iVar1 = -585121677;
			}
			else
			{
				iVar0 = -2054602073;
				iVar1 = -378441099;
			}
			break;
	}
	if (func_25(iVar0, 1, 0) && func_25(iVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_778(int iParam0)
{
	switch (iParam0)
	{
		case 968830139:
			return -224110471;
		case -649219937:
			return 1289585739;
		case -858567048:
			return -269048282;
		case -718162726:
			return 1441506783;
		case -1284282080:
			return 780305678;
		case -725003445:
			return 1811977508;
		case -1445630104:
			return -935153695;
		case 580970876:
			return 1299744282;
		case 967601061:
			return 1631240196;
		case 1946030891:
			return 517396587;
		case -1511404982:
			return 1620353486;
		case -944465290:
			return 1816443627;
		case -1701098855:
			return -127011478;
		default:
			break;
	}
	return 0;
}

bool func_779(int iParam0, int iParam1)
{
	iVar0 = func_1045(iParam0);
	if (iVar0 != -15)
	{
		func_246(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_830(iVar0, 1);
	}
	return false;
}

int func_780(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_25(1811977508, 1, 0))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	Var1.f_1 = 10;
	Var1.f_12 = 10;
	_0x48e4d50f87a96aa5(Global_35, 1, 1, iParam0, &Var1, 0);
	iVar24 = 0;
	while (iVar24 < Var1)
	{
		if (&Var1.f_1[iVar24] == 2084597891)
		{
			return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
		}
		else
		{
			iVar25 = &Var1.f_1[iVar24];
			if (func_121(iVar25, 0) && func_190(iVar25, -1921346699))
			{
				return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_781(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_577(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_782(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_1046())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_577(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_1047(iVar0);
			func_1048(iVar0, 0, 0);
		}
		func_577(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		_money_increment_cash_balance(iVar1, iParam4);
		func_251(func_523(1644987397), iVar1);
	}
}

int func_783(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 1:
			iVar9 = 281887510;
			iVar10 = -164081697;
			iVar11 = -1161319399;
			iVar12 = 728781265;
			break;
		case 2:
			iVar9 = -222563712;
			iVar10 = 1794857344;
			iVar11 = 1952409553;
			break;
		case 4:
			iVar9 = 2116770557;
			iVar10 = -651064726;
			iVar11 = -404270094;
			iVar12 = 2093126853;
			break;
		case 8:
			iVar9 = 2085530337;
			iVar10 = -150591160;
			iVar11 = -323969289;
			iVar12 = 1504361882;
			break;
		case 16:
			iVar9 = -1521783510;
			iVar10 = 1714875242;
			iVar11 = 1019229063;
			iVar12 = 927763737;
			break;
	}
	iVar1 = func_792(iVar9);
	iVar2 = func_792(iVar10);
	iVar3 = func_792(iVar11);
	iVar5 = func_793(iVar9);
	iVar6 = func_793(iVar10);
	iVar7 = func_793(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_792(iVar12);
		iVar8 = func_793(iVar12);
	}
	if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam0 != 2)
	{
		if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

void func_784(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_785()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1049(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_786()
{
	return _0x5461c821d00fe15a(2103522376, 0);
}

bool func_787(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
{
	switch (iParam0)
	{
		case -949689219:
			if (iParam1 == -1866642239)
			{
				iVar0 = 444160793;
			}
			else if (iParam1 == 444160793)
			{
				iVar0 = -1866642239;
			}
			break;
		case -1248968496:
			if (iParam1 == -1969404854)
			{
				iVar0 = 1761263432;
				iVar1 = -843795569;
			}
			else if (iParam1 == 1761263432)
			{
				iVar0 = -1969404854;
				iVar1 = -843795569;
			}
			else if (iParam1 == -843795569)
			{
				iVar0 = -1969404854;
				iVar1 = 1761263432;
			}
			break;
		case 1706369307:
			if (iParam1 == -832850511)
			{
				iVar0 = -935543049;
				iVar1 = -1464585113;
				iVar2 = -1290897778;
			}
			else if (iParam1 == -935543049)
			{
				iVar0 = -832850511;
				iVar1 = -1464585113;
				iVar2 = -1290897778;
			}
			else if (iParam1 == -1464585113)
			{
				iVar0 = -832850511;
				iVar1 = -935543049;
				iVar2 = -1290897778;
			}
			else if (iParam1 == -1290897778)
			{
				iVar0 = -832850511;
				iVar1 = -935543049;
				iVar2 = -1464585113;
			}
			break;
		case 1520110311:
			if (iParam1 == -100913452)
			{
				iVar0 = 313332607;
				iVar1 = -124539232;
				iVar2 = 102446365;
				iVar3 = -1882344824;
			}
			else if (iParam1 == 313332607)
			{
				iVar0 = -100913452;
				iVar1 = -124539232;
				iVar2 = 102446365;
				iVar3 = -1882344824;
			}
			else if (iParam1 == -124539232)
			{
				iVar0 = -100913452;
				iVar1 = 313332607;
				iVar2 = 102446365;
				iVar3 = -1882344824;
			}
			else if (iParam1 == 102446365)
			{
				iVar0 = -100913452;
				iVar1 = 313332607;
				iVar2 = -124539232;
				iVar3 = -1882344824;
			}
			else if (iParam1 == -1882344824)
			{
				iVar0 = -100913452;
				iVar1 = 313332607;
				iVar2 = -124539232;
				iVar3 = 102446365;
			}
			break;
		case -1992824800:
			if (iParam1 == 905173572)
			{
				iVar0 = 1432949803;
				iVar1 = -983831788;
				iVar2 = 59384454;
				iVar3 = 924882045;
			}
			else if (iParam1 == 1432949803)
			{
				iVar0 = 905173572;
				iVar1 = -983831788;
				iVar2 = 59384454;
				iVar3 = 924882045;
			}
			else if (iParam1 == -983831788)
			{
				iVar0 = 905173572;
				iVar1 = 1432949803;
				iVar2 = 59384454;
				iVar3 = 924882045;
			}
			else if (iParam1 == 59384454)
			{
				iVar0 = 905173572;
				iVar1 = 1432949803;
				iVar2 = -983831788;
				iVar3 = 924882045;
			}
			else if (iParam1 == 924882045)
			{
				iVar0 = 905173572;
				iVar1 = 1432949803;
				iVar2 = -983831788;
				iVar3 = 59384454;
			}
			break;
	}
	if (iParam0 == -949689219)
	{
		if (bParam3)
		{
			if (func_988(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_988(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_988(iVar0))
		{
			*sParam2++;
		}
		if (func_988(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_988(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_988(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_988(iVar0))
		{
			*sParam2++;
		}
		if (func_988(iVar1))
		{
			*sParam2++;
		}
		if (func_988(iVar0) && func_988(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_988(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_988(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_988(iVar0))
		{
			*sParam2++;
		}
		if (func_988(iVar1))
		{
			*sParam2++;
		}
		if (func_988(iVar2))
		{
			*sParam2++;
		}
		if ((func_988(iVar0) && func_988(iVar1)) && func_988(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_988(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_988(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_988(iVar0))
		{
			*sParam2++;
		}
		if (func_988(iVar1))
		{
			*sParam2++;
		}
		if (func_988(iVar2))
		{
			*sParam2++;
		}
		if (func_988(iVar3))
		{
			*sParam2++;
		}
		if (((func_988(iVar0) && func_988(iVar1)) && func_988(iVar2)) && func_988(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_788(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_1050(1497516462);
			func_1051(2016141805);
			func_1051(1010885152);
			func_1051(-502324015);
			break;
		case 2016141805:
			func_1051(1497516462);
			func_1050(2016141805);
			func_1051(1010885152);
			func_1051(-502324015);
			break;
		case 1010885152:
			func_1051(1497516462);
			func_1051(2016141805);
			func_1050(1010885152);
			func_1051(-502324015);
			break;
		case -502324015:
			func_1051(1497516462);
			func_1051(2016141805);
			func_1051(1010885152);
			func_1050(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_1051(-538889627);
			func_1051(-538880323);
			func_1051(-1056767524);
			func_1050(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_1052();
			func_1050(iParam0);
			break;
		case -639037538:
		case -618620429:
		case -491981251:
		case 168171957:
		case 227918160:
		case 588987611:
		case 704802028:
		case 1193080109:
		case 1649996811:
		case 2008888900:
			func_1053();
			func_1050(iParam0);
			break;
		case 2019386373:
			func_1051(-664252410);
			func_1051(2109952320);
			func_1050(2019386373);
			break;
		case -664252410:
			func_1051(2019386373);
			func_1051(2109952320);
			func_1050(-664252410);
			break;
		case 2109952320:
			func_1051(2019386373);
			func_1051(-664252410);
			func_1050(2109952320);
			break;
		case -1674179981:
			func_1051(-1835851517);
			func_1051(-1838352012);
			func_1050(-1674179981);
			break;
		case -1835851517:
			func_1051(-1674179981);
			func_1051(-1838352012);
			func_1050(-1835851517);
			break;
		case -1838352012:
			func_1051(-1674179981);
			func_1051(-1835851517);
			func_1050(-1838352012);
			break;
		case -1717960576:
			func_1051(210001842);
			func_1050(-1717960576);
			break;
		case 210001842:
			func_1051(-1717960576);
			func_1050(210001842);
			break;
		case -150493654:
			func_1051(-1271608261);
			func_1051(1846061697);
			func_1051(-1145519186);
			func_1050(-150493654);
			break;
		case -1271608261:
			func_1051(-150493654);
			func_1051(1846061697);
			func_1051(-1145519186);
			func_1050(-1271608261);
			break;
		case 1846061697:
			func_1051(-150493654);
			func_1051(-1271608261);
			func_1051(-1145519186);
			func_1050(1846061697);
			break;
		case -1145519186:
			func_1051(-150493654);
			func_1051(-1271608261);
			func_1051(1846061697);
			func_1050(-1145519186);
			break;
		case 1766284049:
			func_1051(280705402);
			func_1051(1926308480);
			func_1050(1766284049);
			break;
		case 280705402:
			func_1051(1766284049);
			func_1051(1926308480);
			func_1050(280705402);
			break;
		case 1926308480:
			func_1051(1766284049);
			func_1051(280705402);
			func_1050(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_1051(439465264);
				func_1050(1609506757);
			}
			else
			{
				func_1051(1609506757);
				func_1051(439465264);
			}
			break;
		case 439465264:
			if (func_1054(1609506757))
			{
				if (bParam1)
				{
					func_1050(439465264);
				}
				else
				{
					func_1051(439465264);
				}
			}
			break;
		case 1822001510:
			func_1051(-1612662716);
			func_1050(1822001510);
			break;
		case -1612662716:
			func_1051(1822001510);
			func_1050(-1612662716);
			break;
		case 1306158345:
			func_1051(1952610440);
			func_1051(-223469678);
			func_1051(-404698347);
			func_1051(1517904467);
			func_1050(1306158345);
			break;
		case 1952610440:
			func_1051(1306158345);
			func_1051(-223469678);
			func_1051(-404698347);
			func_1051(1517904467);
			func_1050(1952610440);
			break;
		case -223469678:
			func_1051(1306158345);
			func_1051(1952610440);
			func_1051(-404698347);
			func_1051(1517904467);
			func_1050(-223469678);
			break;
		case -404698347:
			func_1051(1306158345);
			func_1051(1952610440);
			func_1051(-223469678);
			func_1051(1517904467);
			func_1050(-404698347);
			break;
		case 1517904467:
			func_1051(1306158345);
			func_1051(1952610440);
			func_1051(-223469678);
			func_1051(-404698347);
			func_1050(1517904467);
			break;
		case 1376646519:
			func_1051(931649776);
			func_1051(-434590080);
			func_1051(1743048395);
			func_1051(449774763);
			func_1050(1376646519);
			break;
		case 931649776:
			func_1051(1376646519);
			func_1051(-434590080);
			func_1051(1743048395);
			func_1051(449774763);
			func_1050(931649776);
			break;
		case -434590080:
			func_1051(1376646519);
			func_1051(931649776);
			func_1051(1743048395);
			func_1051(449774763);
			func_1050(-434590080);
			break;
		case 1743048395:
			func_1051(1376646519);
			func_1051(931649776);
			func_1051(-434590080);
			func_1051(449774763);
			func_1050(1743048395);
			break;
		case 449774763:
			func_1051(1376646519);
			func_1051(931649776);
			func_1051(-434590080);
			func_1051(1743048395);
			func_1050(449774763);
			break;
		case -1414537028:
			func_1051(38162571);
			func_1051(1350391819);
			func_1051(54073871);
			func_1050(-1414537028);
			break;
		case 38162571:
			func_1051(-1414537028);
			func_1051(1350391819);
			func_1051(54073871);
			func_1050(38162571);
			break;
		case 1350391819:
			func_1051(-1414537028);
			func_1051(38162571);
			func_1051(54073871);
			func_1050(1350391819);
			break;
		case 54073871:
			func_1051(-1414537028);
			func_1051(38162571);
			func_1051(1350391819);
			func_1050(54073871);
			break;
		case 198200492:
			func_1050(198200492);
			func_1051(-1124061431);
			func_1051(52706132);
			func_1051(-259123672);
			break;
		case -1124061431:
			func_1051(198200492);
			func_1050(-1124061431);
			func_1051(52706132);
			func_1051(-259123672);
			break;
		case 52706132:
			func_1051(198200492);
			func_1051(-1124061431);
			func_1050(52706132);
			func_1051(-259123672);
			break;
		case -259123672:
			func_1051(198200492);
			func_1051(-1124061431);
			func_1051(52706132);
			func_1050(-259123672);
			break;
		case -919512195:
			func_1050(-919512195);
			func_1051(-1925798111);
			func_1051(420709909);
			func_1051(1703426636);
			break;
		case -1925798111:
			func_1050(-1925798111);
			func_1051(-919512195);
			func_1051(420709909);
			func_1051(1703426636);
			break;
		case 420709909:
			func_1050(420709909);
			func_1051(-919512195);
			func_1051(-1925798111);
			func_1051(1703426636);
			break;
		case 1703426636:
			func_1050(1703426636);
			func_1051(-919512195);
			func_1051(-1925798111);
			func_1051(420709909);
			break;
		case -1223121209:
			func_1050(-1223121209);
			func_1051(630808005);
			break;
		case 630808005:
			func_1050(630808005);
			func_1051(-1223121209);
			break;
		case 1453909576:
			func_1050(1453909576);
			func_1051(1643531967);
			break;
		case 1643531967:
			func_1050(1643531967);
			func_1051(1453909576);
			break;
		case 0:
			func_1050(0);
			func_1051(473295046);
			func_1051(-1738165526);
			break;
		case 473295046:
			func_1050(473295046);
			func_1051(0);
			func_1051(-1738165526);
			break;
		case -1738165526:
			func_1050(-1738165526);
			func_1051(0);
			func_1051(473295046);
			break;
		case 932909855:
			func_1050(932909855);
			func_1051(2051822093);
			break;
		case 2051822093:
			func_1050(2051822093);
			func_1051(932909855);
			break;
		case 405586984:
			func_1050(405586984);
			func_1051(1509509592);
			func_1051(-959357075);
			func_1051(-1311865656);
			break;
		case 1509509592:
			func_1050(1509509592);
			func_1051(405586984);
			func_1051(-959357075);
			func_1051(-1311865656);
			break;
		case -959357075:
			func_1050(-959357075);
			func_1051(1509509592);
			func_1051(405586984);
			func_1051(-1311865656);
			break;
		case -1311865656:
			func_1050(-1311865656);
			func_1051(1509509592);
			func_1051(-959357075);
			func_1051(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_1050(-524145696);
			}
			else
			{
				func_1051(-524145696);
			}
			func_1051(1626481264);
			func_1051(282809459);
			break;
		case 282809459:
			func_1050(282809459);
			func_1051(1626481264);
			func_1051(-524145696);
			break;
		case 1626481264:
			func_1050(1626481264);
			func_1051(-524145696);
			func_1051(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_1050(885203519);
			}
			else
			{
				func_1051(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_1050(-1080627546);
			}
			else
			{
				func_1051(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_1054(iParam0))
				{
					func_1050(iParam0);
				}
			}
			else if (func_1054(iParam0))
			{
				func_1051(iParam0);
			}
			break;
	}
}

void func_789(int iParam0)
{
	if (!func_1055(iParam0))
	{
		func_1057(func_1056(iParam0));
	}
}

int func_790()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_1055(_0x126cbebba46693cf(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_791(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	switch (iParam2)
	{
		case 1:
			iVar9 = 281887510;
			iVar10 = -164081697;
			iVar11 = -1161319399;
			iVar12 = 728781265;
			break;
		case 2:
			iVar9 = -222563712;
			iVar10 = 1794857344;
			iVar11 = 1952409553;
			break;
		case 4:
			iVar9 = 2116770557;
			iVar10 = -651064726;
			iVar11 = -404270094;
			iVar12 = 2093126853;
			break;
		case 8:
			iVar9 = 2085530337;
			iVar10 = -150591160;
			iVar11 = -323969289;
			iVar12 = 1504361882;
			break;
		case 16:
			iVar9 = -1521783510;
			iVar10 = 1714875242;
			iVar11 = 1019229063;
			iVar12 = 927763737;
			break;
	}
	iVar1 = func_792(iVar9);
	iVar2 = func_792(iVar10);
	iVar3 = func_792(iVar11);
	iVar5 = func_793(iVar9);
	iVar6 = func_793(iVar10);
	iVar7 = func_793(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_792(iVar12);
		iVar8 = func_793(iVar12);
	}
	if (iParam0 == iVar9)
	{
		if ((iVar1 + iParam1) >= iVar5)
		{
			iVar0 = (iVar0 + iVar5);
		}
		else
		{
			iVar0 = (iVar0 + (iVar1 + iParam1));
		}
	}
	else if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iParam0 == iVar10)
	{
		if ((iVar2 + iParam1) >= iVar6)
		{
			iVar0 = (iVar0 + iVar6);
		}
		else
		{
			iVar0 = (iVar0 + (iVar2 + iParam1));
		}
	}
	else if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iParam0 == iVar11)
	{
		if ((iVar3 + iParam1) >= iVar7)
		{
			iVar0 = (iVar0 + iVar7);
		}
		else
		{
			iVar0 = (iVar0 + (iVar3 + iParam1));
		}
	}
	else if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam2 != 2)
	{
		if (iParam0 == iVar12)
		{
			if ((iVar4 + iParam1) >= iVar8)
			{
				iVar0 = (iVar0 + iVar8);
			}
			else
			{
				iVar0 = (iVar0 + (iVar4 + iParam1));
			}
		}
		else if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

int func_792(int iParam0)
{
	if (func_25(iParam0, 1, 0))
	{
		iVar0 = func_124(iParam0, 0, 0);
	}
	return iVar0;
}

int func_793(int iParam0)
{
	switch (iParam0)
	{
		case 281887510:
			return 5;
		case -164081697:
			return 5;
		case -1161319399:
			return 5;
		case 728781265:
			return 15;
		case -222563712:
			return 20;
		case 1794857344:
			return 7;
		case 1952409553:
			return 10;
		case 2116770557:
			return 25;
		case -651064726:
			return 3;
		case -404270094:
			return 7;
		case 2093126853:
			return 5;
		case 2085530337:
			return 30;
		case -150591160:
			return 5;
		case -323969289:
			return 10;
		case 1504361882:
			return 5;
		case -1521783510:
			return 5;
		case 1714875242:
			return 5;
		case 1019229063:
			return 5;
		case 927763737:
			return 10;
		default:
			break;
	}
	return 0;
}

int func_794(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0);
}

void func_795(int iParam0, int iParam1)
{
	_0x3ea62e56f386c997(iParam0, iParam1);
}

int func_796(int iParam0, int iParam1)
{
	if (!func_972(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_hash(&uVar5, &Var0);
	return uVar5;
}

void func_797(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_796(iParam1, 5) || iParam0 == func_796(iParam1, 6)) || iParam0 == func_796(iParam1, 7)) || iParam0 == func_796(iParam1, 8)) || iParam0 == func_796(iParam1, 9))
	{
		func_787(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_360(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_359(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_798(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if ((((iParam0 == func_796(iParam1, 5) || iParam0 == func_796(iParam1, 6)) || iParam0 == func_796(iParam1, 7)) || iParam0 == func_796(iParam1, 8)) || iParam0 == func_796(iParam1, 9))
	{
		if (func_787(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_360(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_359(51, 0, 0, iVar0, func_691(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_360(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_359(51, 0, 0, iVar0, func_691(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_799()
{
	if (func_330((*Global_1347702)[37]->f_15) && Global_1392388->f_7)
	{
		return true;
	}
	return false;
}

void func_800(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
}

void func_801(int iParam0)
{
	if (!func_1058(iParam0))
	{
		_0x3ea62e56f386c997(iParam0, 1);
	}
}

void func_802(int iParam0)
{
	_0x398fab9c96a81924(iParam0, 1);
}

float func_803()
{
	if (func_1059())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_506(2);
	}
	if (Global_1347477->f_119)
	{
		return func_506(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1060();
	fVar2 = func_1061();
	fVar3 = func_1062();
	fVar4 = func_1063();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1064()));
	fVar7 = (func_506(2) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1065(3, round((to_float(iVar8) * fVar10)), 0);
	func_1066(3, fVar9, fVar9 > 100f);
	return func_510(fVar7, -100f, 100f);
}

float func_804()
{
	if (func_1059())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_506(1);
	}
	if (Global_1347477->f_119)
	{
		return func_506(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1060();
	fVar2 = func_1061();
	fVar3 = func_1062();
	fVar4 = func_1063();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1064()));
	fVar7 = (func_506(1) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1065(2, round((to_float(iVar8) * fVar10)), 0);
	func_1066(2, fVar9, fVar9 > 100f);
	return func_510(fVar7, -100f, 100f);
}

float func_805()
{
	if (func_1059())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_506(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_1067())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_1068())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_506(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1060();
	fVar2 = func_1061();
	fVar3 = func_1062();
	fVar4 = func_1063();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1064()));
	fVar7 = (func_506(0) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1065(1, round((to_float(iVar8) * fVar10)), 0);
	func_1066(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && _get_player_health(player_id()) < 1f)
	{
		return func_506(0);
	}
	return func_510(fVar7, -100f, 100f);
}

bool func_806(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

void func_807(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_705(iParam0))
	{
		return;
	}
	if (func_394(iParam0))
	{
		return;
	}
	if (!func_1069(iParam0))
	{
		func_1070(iParam0, 1, 0);
	}
	iVar0 = func_1024(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_706(iParam0, 512))
		{
			func_207(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_1071() && !bParam1) && !func_18(0, 0, 1))
	{
		func_201(_create_var_string(10, "OUT_JOURN_DONE", _create_var_string(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_1072(iParam0, 6);
	if (bParam2)
	{
		if (!func_18(0, 0, 1))
		{
			func_101(1, 4);
		}
	}
}

bool func_808(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_199(iVar1) == iParam0)
		{
			*iParam1 = iVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_809(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_413(iParam0, 1)] != &Global_1946804->f_57[func_413(iParam0, 1)];
}

void func_810(int iParam0, int iParam1)
{
	if (func_190(iParam1, 130796156))
	{
		func_1073(iParam1, 0);
	}
	else if (func_190(iParam1, 930141731))
	{
		func_1073(iParam1, 1);
		func_1074(iParam0);
	}
}

int func_811(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_812(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PROVISION_FISH_BLUEGILL";
		case 1:
			return "PROVISION_FISH_BULLHEAD_CATFISH";
		case 2:
			return "PROVISION_FISH_CHAIN_PICKEREL";
		case 3:
			return "PROVISION_FISH_CHANNEL_CATFISH";
		case 4:
			return "PROVISION_FISH_LAKE_STURGEON";
		case 5:
			return "PROVISION_FISH_LARGEMOUTH_BASS";
		case 6:
			return "PROVISION_FISH_LONGNOSE_GAR";
		case 7:
			return "PROVISION_FISH_MUSKIE";
		case 8:
			return "PROVISION_FISH_NORTHERN_PIKE";
		case 9:
			return "PROVISION_FISH_PERCH";
		case 10:
			return "PROVISION_FISH_REDFIN_PICKEREL";
		case 11:
			return "PROVISION_FISH_ROCK_BASS";
		case 12:
			return "PROVISION_FISH_SMALLMOUTH_BASS";
		case 13:
			return "PROVISION_FISH_SOCKEYE_SALMON";
		case 14:
			return "PROVISION_FISH_STEELHEAD_TROUT";
		default:
			break;
	}
	return "FISHTYPE_UNKNOWN";
}

int func_813(int iParam0)
{
	if (!func_1075(iParam0, &uVar0, 805880880, 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

bool func_814(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

float func_815(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_1076();
	}
	switch (iParam1)
	{
		case 0:
			return &(Global_1955569->f_753.f_5[iParam0]);
		case 1:
			return &(Global_1955569->f_866.f_2.f_5[iParam0]);
		default:
			break;
	}
	return -1f;
}

int func_816(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	if (iParam5 == 2)
	{
		iParam5 = func_1076();
	}
	iVar0 = player_ped_id();
	if (bParam2)
	{
		if (fParam1 >= 100f)
		{
			play_sound_frontend("Core_Full", "Consumption_Sounds", true, 0);
		}
		else
		{
			play_sound_frontend("Core_Fill_Up", "Consumption_Sounds", true, 0);
		}
	}
	if (bParam3)
	{
		func_1077(iParam0, 7000, iParam5);
	}
	if (fParam1 > 100f)
	{
		fParam1 = 100f;
	}
	else if (fParam1 < 0f)
	{
		fParam1 = 0f;
	}
	func_1078(iVar0, iParam0, fParam1);
	func_1079(iParam0, fParam1, bParam4, iParam5);
	if (!is_entity_dead(iVar0))
	{
		_set_attribute_core_value(iVar0, func_824(iParam0), ceil(fParam1));
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_817(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	iVar0 = func_531(*iParam0);
	iVar1 = func_532(*iParam0);
	iVar2 = func_533(*iParam0);
	iVar3 = func_534(*iParam0);
	iVar4 = func_535(*iParam0);
	iVar5 = func_536(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 - iParam1);
	while (iVar5 < 0)
	{
		iParam2++;
		iVar5 += 60;
	}
	iVar4 = (iVar4 - iParam2);
	while (iVar4 < 0)
	{
		iParam3++;
		iVar4 += 60;
	}
	iVar3 = (iVar3 - iParam3);
	while (iVar3 < 0)
	{
		iParam4++;
		iVar3 += 24;
	}
	iVar2 = (iVar2 - iParam4);
	while (iVar2 <= 0)
	{
		iParam5++;
		iVar6 = (iVar1 - 1);
		if (iVar6 < 0)
		{
			iParam6++;
			iVar1 += 12;
		}
		iVar7 = func_537(iVar6, iVar0);
		iVar2 = (iVar2 + iVar7);
	}
	iVar1 = (iVar1 - iParam5);
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 = (iVar0 - iParam6);
	func_538(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_818(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_1076();
	}
	switch (iParam1)
	{
		case 0:
			return Global_1955569->f_753.f_5[iParam0]->f_2;
		case 1:
			return Global_1955569->f_866.f_2.f_5[iParam0]->f_2;
		default:
			break;
	}
	return -1;
}

int func_819(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_1076();
	}
	switch (iParam1)
	{
		case 0:
			return Global_1955569->f_753.f_5[iParam0]->f_1;
		case 1:
			return Global_1955569->f_866.f_2.f_5[iParam0]->f_1;
		default:
			break;
	}
	return -15;
}

bool func_820(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1080(iParam1) || !func_1080(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_821(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_1076();
	}
	switch (iParam2)
	{
		case 0:
			Global_1955569->f_753.f_5[iParam0]->f_2 = iParam1;
			break;
		case 1:
			Global_1955569->f_866.f_2.f_5[iParam0]->f_2 = iParam1;
			break;
		default:
			break;
	}
}

void func_822(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_1076();
	}
	switch (iParam2)
	{
		case 0:
			Global_1955569->f_753.f_5[iParam0]->f_1 = iParam1;
			break;
		case 1:
			Global_1955569->f_866.f_2.f_5[iParam0]->f_1 = iParam1;
			break;
		default:
			break;
	}
}

int func_823(int iParam0)
{
	fVar0 = (to_float(iParam0 + 100) / 200f);
	return ceil((100f * fVar0));
}

int func_824(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 0;
		case 2:
			return 2;
		default:
			break;
	}
	return 0;
}

int func_825(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 3;
		default:
			break;
	}
	return 0;
}

void func_826(int iParam0, float fParam1, bool bParam2)
{
	sVar0 = func_1081(iParam0, 0, 0, 0);
	sVar0 = _create_var_string(2, sVar0, round(fParam1));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[0]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[0]), bParam2);
}

float func_827(int iParam0)
{
	fVar0 = (to_float(iParam0) / 100f);
	return ((fVar0 * 200f) - 100f);
}

int func_828(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 87;
		case 1:
			return 85;
		case 2:
			return 86;
		default:
			break;
	}
	return -1;
}

char* func_829(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HealthCoreValue";
		case 1:
			return "StaminaCoreValue";
		case 2:
			return "DeadEyeCoreValue";
		default:
			break;
	}
	return "";
}

bool func_830(int iParam0, bool bParam1)
{
	return func_820(func_147(), iParam0, bParam1);
}

void func_831(int iParam0, bool bParam1, bool bParam2, char* sParam3)
{
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_8, bParam1);
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_7, bParam2);
	_databinding_write_data_string(Global_1955569->f_5.f_2[iParam0]->f_9, sParam3);
}

void func_832(bool bParam0, bool bParam1, bool bParam2)
{
	sVar0 = func_1081(0, 1, bParam0, bParam1);
	sVar0 = _create_var_string(2, sVar0);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_12[1]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[1]), bParam2);
	if (bParam0)
	{
		_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[1]), false);
	}
	else if (bParam1)
	{
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[1]), "rpg_cold");
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[1]), "pausemenu_player");
		_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[1]), true);
	}
	else
	{
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[1]), "rpg_hot");
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[1]), "pausemenu_player");
		_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[1]), true);
	}
}

int func_833(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_1076();
	}
	switch (iParam0)
	{
		case 0:
			return Global_1955569->f_850;
		case 1:
			return Global_1955569->f_866.f_115;
		default:
			break;
	}
	return -1;
}

void func_834(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = player_ped_id();
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	_0x835f131e7dc8f97a(iParam1, fParam0, 0, 0);
}

int func_835(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_1076();
	}
	switch (iParam0)
	{
		case 0:
			return Global_1955569->f_850.f_2;
		case 1:
			return Global_1955569->f_866.f_115.f_2;
		default:
			break;
	}
	return -1;
}

void func_836(float fParam0)
{
	if (fParam0 == 0f)
	{
		return;
	}
	iVar0 = player_ped_id();
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0))
	{
		return;
	}
	_charge_ped_stamina(iVar0, fParam0);
}

int func_837(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_1076();
	}
	switch (iParam0)
	{
		case 0:
			return Global_1955569->f_850.f_1;
		case 1:
			return Global_1955569->f_866.f_115.f_1;
		default:
			break;
	}
	return -1;
}

void func_838(float fParam0, bool bParam1)
{
	iVar0 = player_id();
	iVar1 = player_ped_id();
	if (!does_entity_exist(iVar1))
	{
		return;
	}
	if (_0xb16223cb7da965f0(iVar0) && fParam0 > 0f)
	{
		return;
	}
	if (fParam0 == 0f)
	{
		return;
	}
	fVar2 = _0xab3773e7aa1e9dcc(iVar0);
	if (fParam0 < 0f && bParam1 == 1)
	{
		bParam1 = false;
	}
	if (!bParam1)
	{
		_0x5a498fca232f71e1(iVar0, 1f);
	}
	if (fParam0 > 0f)
	{
		_0x51345ae20f22c261(iVar0, fParam0, 0, 0, 0);
	}
	else
	{
		_0x200114e99552462b(iVar0, fParam0, 0);
	}
	if (!bParam1)
	{
		_0x5a498fca232f71e1(iVar0, fVar2);
	}
}

int func_839(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return -932875117;
		case 3:
			return 1660962977;
		case 4:
			return -131409450;
		case 5:
			return -1487527516;
		case 6:
			return 561629573;
		case 7:
			return 1829679323;
		case 8:
			return -618617794;
		case 11:
			return 653458791;
		case 12:
			return 437319607;
		case 13:
			return -1519488075;
		case 15:
			return 1014445254;
		case 16:
			return 224814421;
		case 18:
			return 1012187868;
		case 19:
			return -1040706491;
		case 20:
			return -1910627346;
		case 23:
			return -1812487593;
		case 26:
			return 1983971282;
		case 27:
			return 1561519041;
		case 28:
			return -980496853;
		case 29:
			return -1738887126;
		case 31:
			return 424771379;
		case 33:
			return 787316814;
		case 34:
			return 984616481;
		case 37:
			return 1078285403;
		case 38:
			return -262897007;
		case 39:
			return -1727702531;
		case 40:
			return 1783324404;
		case 41:
			return 1288848815;
		case 42:
			return 918090738;
		case 43:
			return 170272501;
		case 1:
			return 2056650000;
		case 9:
			return -1195354638;
		case 10:
			return 1077596967;
		case 14:
			return -2145199848;
		case 17:
			return 752824478;
		case 21:
			return -819513569;
		case 22:
			return 1906968775;
		case 24:
			return -135434663;
		case 25:
			return 920123680;
		case 30:
			return 150470908;
		case 32:
			return -1665125257;
		case 35:
			return 1587928307;
		case 36:
			return -1738925422;
	}
	return 0;
}

void func_840(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3 && !func_70(iParam0))
	{
		return;
	}
	iVar0 = func_163(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(2, sParam1, sParam2));
}

int func_841(int iParam0, int iParam1)
{
	return func_1082(get_clock_hours(), iParam0, iParam1);
}

bool func_842()
{
	if (is_bit_set(get_random_int_in_range(0, 65536), 0))
	{
		return true;
	}
	return false;
}

int func_843()
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

int func_844(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_845(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*iParam0 = (*iParam0 || shift_left((1898 - iParam1), 26));
		*iParam0 |= -2147483648;
	}
	else
	{
		*iParam0 = (*iParam0 || shift_left((iParam1 - 1898), 26));
		*iParam0 = (*iParam0 - *iParam0 & -2147483648);
	}
}

void func_846(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_847(int iParam0, int iParam1)
{
	iVar0 = func_532(*iParam0);
	iVar1 = func_531(*iParam0);
	if (iParam1 < 1 || iParam1 > func_537(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_848(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_849(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_850(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

void func_851(var uParam0)
{
	if (!_does_anim_scene_exist(uParam0->f_63))
	{
		uParam0->f_63 = _create_anim_scene("script@mech@crafting_fallbacks@craft_bullets_explosive", 0, "pl_craft", false, true);
		load_anim_scene(uParam0->f_63);
	}
	if (!_does_anim_scene_exist(uParam0->f_65))
	{
		uParam0->f_65 = _create_anim_scene("script@mech@crafting_fallbacks@craft_bullets_split", 0, "pl_craft", false, true);
		load_anim_scene(uParam0->f_65);
	}
	if (!_does_anim_scene_exist(uParam0->f_66))
	{
		uParam0->f_66 = _create_anim_scene("script@mech@crafting_fallbacks@craft_modify_arrows", 0, "pl_craft", false, true);
		load_anim_scene(uParam0->f_66);
	}
	if (!_does_anim_scene_exist(uParam0->f_67))
	{
		uParam0->f_67 = _create_anim_scene("script@mech@crafting_fallbacks@craft_improved_arrows", 0, "pl_craft", false, true);
		load_anim_scene(uParam0->f_67);
	}
	if (!_does_anim_scene_exist(uParam0->f_68))
	{
		uParam0->f_68 = _create_anim_scene("script@mech@crafting_fallbacks@craft_throwingknives_improved", 0, "pl_craft", false, true);
		load_anim_scene(uParam0->f_68);
	}
	if (!_does_anim_scene_exist(uParam0->f_69))
	{
		uParam0->f_69 = _create_anim_scene("script@mech@crafting_fallbacks@craft_improved_tomahawk", 0, "pl_craft", false, true);
		load_anim_scene(uParam0->f_69);
	}
	if (!_does_anim_scene_exist(uParam0->f_70))
	{
		uParam0->f_70 = _create_anim_scene("script@mech@crafting_fallbacks@craft_poison_throwingknives", 0, "pl_craft", false, true);
		load_anim_scene(uParam0->f_70);
	}
	if (!_does_anim_scene_exist(uParam0->f_71))
	{
		uParam0->f_71 = _create_anim_scene("script@mech@crafting_fallbacks@craft_fire_bottle", 0, "pl_craft", false, true);
		load_anim_scene(uParam0->f_71);
	}
	if (!_does_anim_scene_exist(uParam0->f_72))
	{
		uParam0->f_72 = _create_anim_scene("script@mech@crafting_fallbacks@craft_volatile_dynamite", 0, "pl_craft", false, true);
		load_anim_scene(uParam0->f_72);
	}
}

bool func_852(char* sParam0)
{
	return !is_string_null_or_empty(sParam0);
}

bool func_853(var uParam0, var uParam1)
{
	if (_does_anim_scene_exist(*uParam1))
	{
		if (!_is_anim_scene_loaded(*uParam1, true, false))
		{
			if (_is_anim_scene_loading(*uParam1, true))
			{
				return false;
			}
			else
			{
				load_anim_scene(*uParam1);
				return false;
			}
		}
	}
	else
	{
		func_851(uParam0);
		return false;
	}
	return true;
}

void func_854(int iParam0, int iParam1)
{
	iVar0 = func_591(iParam0);
	iVar1 = func_413(iVar0, 1);
	if (iVar1 == 39)
	{
		return;
	}
	if (func_1083(iParam0) && func_408(iParam0))
	{
		iParam1 |= 64;
	}
	if (((iVar0 == 1108822547 && func_405(32768)) || &Global_1946804->f_1497.f_1[iVar1] != &Global_1946804->f_57[iVar1]) && iParam0 != &Global_1946804->f_1497.f_1[iVar1])
	{
		if (func_1083(&(Global_1946804->f_1497.f_1[iVar1])) && func_408(&(Global_1946804->f_1497.f_1[iVar1])))
		{
			iParam1 |= 32;
		}
		if (Global_1946804->f_57[iVar1]->f_1 > 1)
		{
			iParam1 |= 16;
		}
		iVar2 = 0;
		switch (func_199(iParam0))
		{
			case 81053684:
				if (func_593(-525676072, &uVar3))
				{
					iVar2 = func_413(func_913(-525676072), 1);
					if (iVar2 == 39)
					{
					}
					else
					{
						Global_1946804->f_2377[iVar2] = &Global_1946804->f_57[iVar2];
						Jump @434; //curOff = 294
						if (func_405(32768))
						{
							func_736(func_734(iVar1, 1));
						}
						if (func_405(32768) || (func_593(-2061583405, &iVar4) && !func_408(iVar4)))
						{
							knock_off_ped_prop(Global_35, false, true, false, true);
						}
						if (func_593(81053684, &iVar4))
						{
							iVar2 = func_413(func_913(81053684), 1);
							if (iVar2 == 39)
							{
							}
							else
							{
								Global_1946804->f_2377[iVar2] = &Global_1946804->f_57[iVar2];
							}
							Global_1946804->f_2377[iVar1] = iParam0;
							func_1084(iVar0, iParam1, 6);
						}
					}
				}
				default:
					break;
		}
	}
}

int func_855(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!func_98(0))
	{
		return 0;
	}
	if (iParam4 != 0)
	{
		bParam3 = false;
	}
	if (!func_919(iParam0, 1, iParam1, &iVar31, &uVar35, bParam3, iParam4, 1))
	{
		iVar33 = iVar31;
		return 0;
	}
	if (func_903(iParam0, iParam1, &Var0, &iVar34, 1, 0))
	{
		iVar36 = 0;
		while (iVar36 < iVar34)
		{
			iVar33 = &Var0[iVar36];
			if (func_121(iVar33, 0))
			{
				if (iVar33 == 2084597891)
				{
					func_1085(Var0[iVar36]->f_1, 0, 0, bParam2, 1);
				}
				else if (bParam3)
				{
					if (func_321(iVar33) || func_640(iVar33))
					{
						if (!func_25(iVar33, Var0[iVar36]->f_1, 0))
						{
							iVar37 = func_1086(7, iVar33, Var0[iVar36]->f_1);
						}
						func_184(iVar33, iVar37, 562618531, 0, 0);
						Var0[iVar36]->f_1 = (Var0[iVar36]->f_1 - iVar37);
						if (Var0[iVar36]->f_1 > 0)
						{
							if (!func_25(iVar33, Var0[iVar36]->f_1, 0))
							{
								func_1087(iVar33, Var0[iVar36]->f_1);
							}
							if (func_25(iVar33, Var0[iVar36]->f_1, 0))
							{
								func_226(iVar33, Var0[iVar36]->f_1, bParam2, -142743235, 0);
							}
						}
					}
					else
					{
						if (func_1088(iVar33) > 0)
						{
							func_1089(iVar33);
							Var0[iVar36]->f_1 = (Var0[iVar36]->f_1 - 1);
						}
						if (Var0[iVar36]->f_1 > 0)
						{
							if (func_1090(7, iVar33) > 0)
							{
								func_1091(7, iVar33, Var0[iVar36]->f_1);
								Var0[iVar36]->f_1 = (Var0[iVar36]->f_1 - func_1091(7, iVar33, Var0[iVar36]->f_1));
							}
						}
						if (Var0[iVar36]->f_1 > 0)
						{
							func_226(iVar33, Var0[iVar36]->f_1, bParam2, 562618531, 0);
						}
					}
				}
				else if (iParam4 == 0)
				{
					if (func_321(iVar33) || func_640(iVar33))
					{
						if (!func_25(iVar33, Var0[iVar36]->f_1, 0))
						{
							func_1087(iVar33, Var0[iVar36]->f_1);
						}
					}
					func_226(iVar33, Var0[iVar36]->f_1, bParam2, 562618531, 0);
				}
				else
				{
					func_1092(iVar33, iParam4, Var0[iVar36]->f_1, 562618531);
				}
				iVar38 = func_524(&iVar33);
				if (func_998(iVar38))
				{
					iVar39 = func_839(iVar38);
					func_251(func_260(-333926856, iVar39), Var0[iVar36]->f_1);
				}
			}
			iVar36++;
		}
		return 1;
	}
	return 0;
}

int func_856(int iParam0)
{
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_4;
}

int func_857(int iParam0, bool bParam1)
{
	Var0 = { func_296(iParam0, 0, 0) };
	return func_621(iParam0, &Var0, 0, bParam1);
}

int func_858(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_903(iParam0, iParam1, &Var0, &iVar31, bParam3, 0))
	{
		return 0;
	}
	bVar33 = func_98(0);
	iVar34 = -1;
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (&Var0[iVar32] == 0)
		{
			Jump @256; //curOff = 64
		}
		else
		{
			iVar35 = func_124(&(Var0[iVar32]), 0, 0);
			if (bVar33)
			{
				if (func_321(&(Var0[iVar32])) || func_640(&(Var0[iVar32])))
				{
					iVar35 = (iVar35 + func_1093(&(Var0[iVar32]), 0));
					if (bParam2)
					{
						iVar36 = 0;
						iVar35 = (iVar35 + func_1094(7, &(Var0[iVar32]), &iVar36));
					}
				}
				else if (bParam2)
				{
					iVar35 = (iVar35 + (func_1090(7, &(Var0[iVar32])) + func_1088(&(Var0[iVar32]))));
				}
			}
			if (iVar35 < Var0[iVar32]->f_1)
			{
				return 0;
			}
			iVar35 = (iVar35 / Var0[iVar32]->f_1);
			if (iVar34 == -1 || iVar35 < iVar34)
			{
				iVar34 = iVar35;
			}
		}
		iVar32++;
	}
	return iVar34;
}

int func_859(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_860(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (!func_1095(471747275))
	{
		Global_40.f_4283.f_307.f_1 = (Global_40.f_4283.f_307.f_1 + iParam0);
		if (Global_40.f_4283.f_307.f_1 >= 3)
		{
			func_1096(471747275);
		}
	}
}

int func_861(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1224227)
	{
		if (&Global_1224227->f_1[iVar0] == iParam0)
		{
			return Global_1224227->f_1[iVar0]->f_1;
		}
		iVar0++;
	}
	return 0;
}

bool func_862(var uParam0)
{
	return uParam0->f_18;
}

void func_863(var uParam0)
{
	uParam0->f_18 = 0;
}

void func_864(var uParam0)
{
	func_133(1);
	func_45(uParam0, 4);
}

bool func_865(var uParam0)
{
	if (uParam0->f_54 == 0)
	{
		Global_1911914->f_1576 = 0;
		uParam0->f_55 = 0;
		func_1097(uParam0, 600942249);
		uParam0->f_54++;
		return false;
	}
	else if (uParam0->f_54 == 1)
	{
		func_1097(uParam0, -257768755);
		uParam0->f_54++;
		return false;
	}
	else
	{
		func_1097(uParam0, -214678071);
		uParam0->f_54 = 0;
	}
	uParam0->f_55 = 0;
	return true;
}

bool func_866(var uParam0)
{
	uParam0->f_59 = 0;
	uParam0->f_60 = 0;
	uParam0->f_39 = _databinding_add_data_container_from_path("", "CraftingDatastore");
	_databinding_add_data_hash(uParam0->f_39, "filter", func_1098(uParam0->f_52));
	_databinding_add_data_int(uParam0->f_39, "filterCount", 5 + 1);
	_databinding_add_data_int(uParam0->f_39, "filterIndex", uParam0->f_52);
	_databinding_add_data_string(uParam0->f_39, "tipText", "");
	uParam0->f_51 = _databinding_add_ui_item_list(uParam0->f_39, "recipes_lines");
	_databinding_add_data_bool(uParam0->f_39, "variantVisible", false);
	_databinding_add_data_string(uParam0->f_39, "variantText", " ");
	_databinding_add_data_int(uParam0->f_39, "variantCount", 0);
	_databinding_add_data_int(uParam0->f_39, "variantIndex", 0);
	_databinding_add_data_bool(uParam0->f_39, "ShowRpgDescription", false);
	_databinding_add_data_bool(uParam0->f_39, "ShowRpgPlayer", false);
	_databinding_add_data_bool(uParam0->f_39, "ShowRpgHorse", false);
	_databinding_add_data_hash(uParam0->f_39, "RPGDescription", 0);
	_databinding_add_data_bool(uParam0->f_39, "ShowIngredients", true);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&cVar1, "ingredient", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		func_1099(uParam0->f_41[iVar0], &cVar1, uParam0);
		StringCopy(&cVar1, "tip", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		uParam0->f_46[iVar0] = _databinding_add_data_container(uParam0->f_39, &cVar1);
		StringCopy(&cVar1, "Text", 16);
		_databinding_add_data_string(&(uParam0->f_46[iVar0]), &cVar1, "");
		StringCopy(&cVar1, "Enabled", 16);
		_databinding_add_data_int(&(uParam0->f_46[iVar0]), &cVar1, 0);
		iVar0++;
	}
	return true;
}

bool func_867(var uParam0)
{
	bVar2 = func_551();
	iVar0 = uParam0->f_55;
	while (iVar0 <= (Global_1911914->f_1576 - 1))
	{
		if (func_121((*Global_1911914)[iVar0]->f_6, 0))
		{
			func_1100(uParam0, 0, iVar0, bVar2, 1, 0);
			if (iVar1 >= 30)
			{
				uParam0->f_55 = iVar0 + 1;
				return false;
			}
			iVar1++;
		}
		iVar0++;
	}
	uParam0->f_55 = 0;
	if (uParam0->f_60 == 0)
	{
		uParam0->f_57 = 0;
	}
	uParam0->f_56 = 0;
	return true;
}

void func_868(var uParam0)
{
	if (!_databinding_is_data_id_valid(uParam0->f_40))
	{
		uParam0->f_40 = _databinding_add_ui_item_list(uParam0->f_39, "recipes");
	}
	else
	{
		_databinding_clear_binding_array(uParam0->f_40);
	}
	uParam0->f_76 = 600942249;
	uParam0->f_75 = 0;
	uParam0->f_74 = 0;
}

bool func_869(var uParam0, bool bParam1)
{
	bVar2 = func_551();
	iVar0 = uParam0->f_55;
	while (iVar0 <= (Global_1911914->f_1576 - 1))
	{
		if ((uParam0->f_57 && (*Global_1911914)[iVar0]->f_2) || !uParam0->f_57)
		{
			if (Global_1911914->f_1585 != 0)
			{
				bVar3 = func_190((*Global_1911914)[iVar0]->f_6, Global_1911914->f_1585);
				if (uParam0->f_81 == bVar3)
				{
				}
				else
				{
					func_1100(uParam0, 1, iVar0, bVar2, 0, bParam1);
					if (iVar1 >= 50)
					{
						uParam0->f_55 = iVar0 + 1;
						return false;
					}
					iVar1++;
				}
				iVar0++;
				uParam0->f_55 = 0;
				if (!uParam0->f_81 && Global_1911914->f_1585 != 0)
				{
					uParam0->f_81 = 1;
					return false;
				}
				uParam0->f_56 = 0;
				uParam0->f_81 = 0;
				return true;
			}
		}
	}
}

bool func_870(var uParam0, bool bParam1)
{
	uParam0->f_58 = 1;
	if (bParam1 && _is_app_active(-1624772174))
	{
		if (_uistatemachine_request_transition(-1624772174, 1014850361))
		{
			func_294(1);
			func_47(8);
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		iVar0 = _launch_app_by_hash(-1624772174);
		if (iVar0 == 0)
		{
			func_47(8);
			func_294(1);
			func_232(0, -100);
			func_232(2, -100);
			func_232(1, -100);
			return true;
		}
	}
	return false;
}

bool func_871(var uParam0)
{
	bVar2 = func_551();
	iVar0 = uParam0->f_55;
	while (iVar0 <= (Global_1911914->f_1576 - 1))
	{
		func_1101(uParam0, iVar0, bVar2, 0, 1, 0, 1);
		if (iVar1 >= 50)
		{
			uParam0->f_55 = iVar0 + 1;
			return false;
		}
		iVar1++;
		iVar0++;
	}
	uParam0->f_61 = 0;
	uParam0->f_55 = 0;
	return true;
}

void func_872(bool bParam0)
{
	disable_control_action(0, 130948705, false);
	disable_control_action(0, 42190210, false);
	disable_control_action(0, -1292666904, false);
	disable_control_action(0, 1287709438, false);
	disable_control_action(0, -2131587435, false);
	disable_control_action(0, -209515122, false);
	disable_control_action(0, -399233038, false);
	disable_control_action(0, 1301263553, false);
	disable_control_action(0, -39308912, false);
	disable_control_action(0, -1404316431, false);
	disable_control_action(0, 1618006066, false);
	disable_control_action(0, -1304887797, false);
	iVar0 = func_1102(Global_35);
	if (!is_entity_dead(iVar0))
	{
		set_ped_max_move_blend_ratio(iVar0, 1f);
	}
	if (bParam0)
	{
		disable_control_action(0, -1860390754, false);
		disable_control_action(0, 1141111167, false);
		disable_control_action(0, -1460216218, false);
		disable_control_action(0, 1669958966, false);
		disable_control_action(0, -1666616423, false);
	}
}

void func_873(var uParam0, bool bParam1)
{
	if (_does_scenario_point_exist(uParam0->f_9))
	{
		iVar0 = _get_entity_scenario_point_is_attached_to(uParam0->f_9);
	}
	if (does_entity_exist(iVar0))
	{
		set_entity_collision(iVar0, bParam1, false);
	}
}

void func_874(var uParam0, var uParam1)
{
	iVar0 = _databinding_read_data_int_from_parent(*uParam1, "eOutputItem");
	iVar1 = _databinding_read_data_int_from_parent(*uParam1, "eCost");
	iVar2 = iVar0;
	_0xd962f8579d702db5();
	if (func_121(iVar2, 0) && func_259(iVar2, uParam0->f_52))
	{
		uParam0->f_37 = -1;
		uParam0->f_20 = 0;
		uParam0->f_77 = iVar2;
		uParam0->f_78 = iVar1;
		func_144((*uParam0)[1], 1, 1);
		iVar3 = _databinding_read_data_int_from_parent(*uParam1, "iNumCostVariants");
		if (iVar3 > 1)
		{
			_databinding_write_data_bool_from_parent(uParam0->f_39, "variantVisible", 1);
			_databinding_write_data_string_from_parent(uParam0->f_39, "variantText", _create_var_string(0, uParam0->f_77));
			_databinding_write_data_int_from_parent(uParam0->f_39, "variantCount", iVar3);
			iVar4 = _databinding_read_data_int_from_parent(*uParam1, "iCurCostVariant");
			iVar5 = _databinding_read_data_int_from_parent(*uParam1, "iIndex");
			if (iVar5 >= 0 && iVar5 < &Global_1911914)
			{
				iVar6 = (*Global_1911914)[iVar5]->f_8;
			}
			_databinding_write_data_int_from_parent(uParam0->f_39, "variantIndex", (iVar4 + 1 - iVar6));
			uParam0->f_79 = 1;
			func_84(uParam0[5], 1, 1);
		}
		else
		{
			_databinding_write_data_bool_from_parent(uParam0->f_39, "variantVisible", 0);
			uParam0->f_79 = 0;
			func_84(uParam0[5], 0, 1);
		}
		uParam0->f_53 = round((get_anim_duration(func_1103(uParam0->f_77), func_1104(uParam0->f_77)) * 1000f));
		uParam0->f_80 = _databinding_read_data_bool_from_parent(*uParam1, "bFireCrafting");
		uParam0->f_73 = *uParam1;
		(*uParam0)[1] = func_81("CAMP_REC_MAKE", 1138488863, 3, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
		func_879(uParam0, uParam0->f_77, uParam0->f_78);
		func_83(uParam0[1], 11, 1, 1);
		if (Global_1911914->f_1579 || !func_918(uParam0->f_77, uParam0->f_78, 1))
		{
			_databinding_write_data_hash_string_from_parent(uParam0->f_39, "RPGDescription", func_1105(iVar2));
			func_884(uParam0, 0);
		}
		else
		{
			_databinding_write_data_hash_string_from_parent(uParam0->f_39, "RPGDescription", 0);
		}
		if (_databinding_read_data_bool_from_parent(uParam0->f_39, "ShowRpgDescription"))
		{
			if (Global_1911914->f_1579 || !func_918(uParam0->f_77, uParam0->f_78, 1))
			{
				func_1106(uParam0);
			}
		}
	}
}

char* func_875(var uParam0)
{
	if (uParam0->f_57)
	{
		return "CAMP_REC_ALL";
	}
	return "CAMP_REC_AVL";
}

int func_876(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	if (is_string_null_or_empty(sParam0))
	{
		return 0;
	}
	if (!_0xbc0884bc590951c7(iParam1, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_176(iVar0, 2))
		{
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_177(iVar1, iParam1, sParam0, 0, 3, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam3, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 0, iParam2, 1704213876, 0);
		return iVar1;
	}
	return 0;
}

void func_877(int iParam0, int iParam1)
{
	if (!func_70(iParam0))
	{
		return;
	}
	iVar0 = func_163(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_allowed_action((*Global_1945938)[iVar0]->f_3, iParam1);
}

void func_878(var uParam0)
{
	_databinding_clear_binding_array(uParam0->f_51);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		_databinding_write_data_bool_from_parent(&(uParam0->f_41[iVar0]), "visible", 0);
		_databinding_write_data_bool_from_parent(&(uParam0->f_41[iVar0]), "inUse", 0);
		iVar0++;
	}
	_databinding_write_data_string_from_parent(uParam0->f_39, "tipText", "");
	_databinding_write_data_bool_from_parent(uParam0->f_39, "variantVisible", 0);
}

void func_879(var uParam0, int iParam1, int iParam2)
{
	if (!func_121(iParam1, 0))
	{
		if (func_70(uParam0[1]))
		{
			func_84(uParam0[1], 0, 1);
		}
		return;
	}
	bVar2 = func_551();
	bVar3 = true;
	bVar4 = false;
	if (!Global_1911914->f_1579 && func_918(iParam1, iParam2, 1))
	{
		bVar4 = true;
		bVar3 = false;
	}
	else if (!func_611(iParam1, iParam2, &uVar1, &uVar0, &iVar5, 0, bVar2, 0, 1))
	{
		bVar3 = false;
	}
	else if (func_23() == -1)
	{
		if (func_56(4096))
		{
			if (func_372(iParam1, 1697966752) != 337650881)
			{
				bVar3 = false;
			}
		}
		else if (func_56(8192))
		{
			if (iParam1 != 1831763320)
			{
				bVar3 = false;
			}
		}
	}
	if (bVar3)
	{
		if (((func_560(iParam1, 1, 0) || ((!uParam0->f_83 || uParam0->f_84 > 0) && func_372(iParam1, -1636519629) == -701492487)) || (!uParam0->f_31 && ((uParam0->f_80 || iParam2 == -214678071) || iParam2 == 278772510))) || (!uParam0->f_32 && iParam2 == 278772510))
		{
			bVar3 = false;
		}
		else if (uParam0->f_37 == -1)
		{
			iVar6 = func_124(iParam1, 0, 0);
			iVar7 = func_857(iParam1, 0);
			iVar8 = func_858(iParam1, iParam2, bVar2, 0);
			if (iVar7 == -1)
			{
				iVar7 = iVar8;
			}
			else
			{
				iVar7 = (iVar7 - iVar6);
			}
			uParam0->f_37 = func_859(iVar7, iVar8);
		}
	}
	if (func_70(uParam0[1]))
	{
		if (func_317(iParam1))
		{
			func_157(uParam0[1], "CAMP_REC_COOK", 1);
		}
		else if (func_372(iParam1, -1636519629) == -701492487)
		{
			func_157(uParam0[1], "CAMP_REC_BREW", 1);
		}
		else
		{
			func_157(uParam0[1], "CAMP_REC_MAKE", 1);
		}
		func_84(uParam0[1], bVar3, 1);
	}
	func_1107(iParam1, iParam2, uParam0, iVar5, bVar4);
	if (func_70(uParam0[6]))
	{
		func_84(uParam0[6], !bVar4, 1);
	}
}

void func_880(char* sParam0, char* sParam1)
{
	iVar0 = get_sound_id();
	if (iVar0 != -1)
	{
		_0xce5d0ffe83939af1(iVar0, sParam0, sParam1, 1);
		(*Global_1956588)[Global_1956588->f_25] = iVar0;
		Global_1956588->f_25 = (Global_1956588->f_25 + 1 % 24);
	}
}

void func_881(var uParam0)
{
	if (func_372(uParam0->f_77, -1636519629) == -701492487)
	{
		func_131(uParam0, 0);
	}
	else
	{
		func_131(uParam0, 1);
	}
	func_144((*uParam0)[1], 1, 1);
	func_144((*uParam0)[5], 1, 1);
	func_144((*uParam0)[6], 1, 1);
	func_144((*uParam0)[3], 1, 1);
	uParam0->f_36 = 1;
	if (!uParam0->f_80 && !func_317(uParam0->f_77))
	{
		func_47(131072);
		iVar0 = func_372(uParam0->f_77, -1636519629);
		iVar1 = func_890(uParam0, iVar0);
		if (iVar1 != 0)
		{
			uParam0->f_36 = 0;
			reset_anim_scene(iVar1, "pl_craft");
			load_anim_scene(iVar1);
			uParam0->f_88 = 0;
			if (iVar0 != -1610298873)
			{
				if (iVar0 == -842117252)
				{
					uParam0->f_88 = -467664954;
				}
				else if (func_190(uParam0->f_77, -1588156645))
				{
					uParam0->f_88 = func_856(func_252(uParam0->f_77, 0));
				}
				else if (func_190(uParam0->f_77, 457423347))
				{
					uParam0->f_88 = -193645029;
				}
				else if (func_190(uParam0->f_77, -1846429632))
				{
					uParam0->f_88 = 2132464141;
				}
				else if (func_190(uParam0->f_77, -1067199465))
				{
					uParam0->f_88 = 1186037675;
				}
				else
				{
					uParam0->f_88 = func_856(uParam0->f_77);
				}
			}
			if (uParam0->f_88 != 0)
			{
				request_model(uParam0->f_88, false);
			}
		}
		func_157(uParam0[2], "CAMP_REC_BACK", 1);
		func_82(uParam0[2], -1067771379, 0, 1);
		func_84(uParam0[2], 0, 1);
		func_331(uParam0[2], 0, 1);
		(*uParam0)[4] = func_81("CAMP_REC_BACK", 814057702, 1, 0, 0, 5, 570, 4000, 10, 1073741824, -820096546, 0);
		func_332((*uParam0)[4], "INPUT_PCRAFT_EXIT");
		func_82(uParam0[4], -1067771379, 0, 1);
		func_84(uParam0[4], 0, 1);
		func_83(uParam0[4], 19, 1, 1);
		func_83(uParam0[4], 20, 1, 1);
		func_83(uParam0[4], 13, 1, 1);
		func_83(uParam0[2], 13, 1, 1);
		if (func_70(uParam0[2]))
		{
			func_82(uParam0[2], -1067771379, 0, 1);
		}
		func_45(uParam0, 12);
	}
	else
	{
		func_45(uParam0, 11);
	}
}

bool func_882(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2 && !func_70(iParam0))
	{
		return false;
	}
	iVar0 = func_163(iParam0);
	return _uiprompt_has_standard_mode_completed((*Global_1945938)[iVar0]->f_3, iParam1);
}

void func_883(var uParam0, bool bParam1)
{
	_0xd962f8579d702db5();
	if (_databinding_is_data_id_valid(uParam0->f_73))
	{
		iVar0 = _databinding_read_data_int_from_parent(uParam0->f_73, "iCurCostVariant");
		iVar1 = _databinding_read_data_int_from_parent(uParam0->f_73, "iNumCostVariants");
		bVar2 = false;
		if (uParam0->f_78 == -214678071 || uParam0->f_78 == 278772510)
		{
			if (bParam1)
			{
				iVar0++;
			}
			else
			{
				iVar0 = (iVar0 - 1);
			}
			if (iVar0 < 0)
			{
				iVar0 = (iVar1 - 1);
			}
			else if (iVar0 >= iVar1)
			{
				iVar0 = 0;
			}
			Var5 = -1;
			Var5.f_1 = -1;
			Var5.f_2 = -1;
			Var5.f_3 = -1;
			Var5.f_4 = -1;
			Var5.f_5 = -1;
			Var5.f_6 = -1;
			Var5.f_7 = -1;
			Var5.f_8 = -1;
			if (iVar0 == 0)
			{
				Var5 = { func_902(-1591664384, -1591664384, 0, 0, -214678071, 0, -1, func_372(uParam0->f_77, 1697966752), 0) };
				if (func_1108(Var5, &iVar3, &iVar4, 0))
				{
					if (iVar4 > 0)
					{
						uParam0->f_78 = -214678071;
						uParam0->f_77 = func_1109(0, iVar3);
						bVar2 = true;
					}
					func_1110(iVar3);
				}
			}
			else
			{
				Var5 = { func_902(-1591664384, -1591664384, 0, 0, 278772510, 0, -1, func_372(uParam0->f_77, 1697966752), 0) };
				if (func_1108(Var5, &iVar3, &iVar4, 0))
				{
					if (iVar4 > 0)
					{
						if (iVar0 == 1)
						{
							iVar15 = 2127114599;
						}
						else if (iVar0 == 2)
						{
							iVar15 = -1864584831;
						}
						else if (iVar0 == 3)
						{
							iVar15 = 1967571132;
						}
						iVar16 = 0;
						while (iVar16 < iVar4)
						{
							iVar17 = func_1109(iVar16, iVar3);
							if (func_190(iVar17, iVar15))
							{
								uParam0->f_78 = 278772510;
								uParam0->f_77 = iVar17;
								bVar2 = true;
							}
							else
							{
								iVar16++;
							}
						}
					}
					func_1110(iVar3);
				}
			}
		}
		else
		{
			iVar18 = _item_database_get_acquire_costs_count(uParam0->f_77);
			Var19.f_4 = 15;
			Var19.f_36 = 10;
			while (((Var19.f_2 != 1644203656 || Var19 == -489628648) || (!Global_1911914->f_1579 && func_918(uParam0->f_77, Var19, 1))) && iVar66 < iVar18)
			{
				iVar66++;
				if (bParam1)
				{
					iVar0++;
				}
				else
				{
					iVar0 = (iVar0 - 1);
				}
				if (iVar0 < 0)
				{
					iVar0 = (iVar18 - 1);
				}
				else if (iVar0 >= iVar18)
				{
					iVar0 = 0;
				}
				if (_item_database_get_acquire_cost(uParam0->f_77, iVar0, &Var19))
				{
				}
			}
			uParam0->f_78 = Var19;
		}
		_databinding_write_data_int_from_parent(uParam0->f_73, "eCost", uParam0->f_78);
		_databinding_write_data_int_from_parent(uParam0->f_73, "eOutputItem", uParam0->f_77);
		iVar67 = _databinding_read_data_int_from_parent(uParam0->f_73, "iIndex");
		if (iVar67 >= 0 && iVar67 < &Global_1911914)
		{
			iVar68 = (*Global_1911914)[iVar67]->f_8;
		}
		_databinding_write_data_int_from_parent(uParam0->f_73, "iCurCostVariant", iVar0);
		_databinding_write_data_int_from_parent(uParam0->f_39, "variantIndex", (iVar0 + 1 - iVar68));
		_databinding_write_data_string_from_parent(uParam0->f_39, "variantText", _create_var_string(0, uParam0->f_77));
		uParam0->f_37 = -1;
		uParam0->f_20 = 0;
		if (_databinding_read_data_bool_from_parent(uParam0->f_39, "ShowRpgDescription"))
		{
			_0x7e2c766adb2c5f1a(uParam0->f_77, 1);
		}
		_databinding_write_data_hash_string_from_parent(uParam0->f_39, "RPGDescription", func_1105(uParam0->f_77));
		func_1101(uParam0, -1, func_551(), uParam0->f_73, 0, bVar2, 0);
		func_879(uParam0, uParam0->f_77, uParam0->f_78);
	}
}

void func_884(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		uParam0->f_82 = !uParam0->f_82;
	}
	_databinding_write_data_bool_from_parent(uParam0->f_39, "ShowRpgDescription", uParam0->f_82);
	_databinding_write_data_bool_from_parent(uParam0->f_39, "ShowIngredients", !uParam0->f_82);
	if (!uParam0->f_82)
	{
		func_157(uParam0[6], "INFO", 1);
		_0xd962f8579d702db5();
		func_1111(uParam0);
	}
	else
	{
		func_157(uParam0[6], "INGREDIENTS", 1);
		func_1106(uParam0);
	}
	if (uParam0->f_78 == -214678071)
	{
		if (_databinding_read_data_int_from_parent(uParam0->f_73, "enabled") == 1)
		{
			if (_databinding_read_data_int_from_parent(uParam0->f_73, "iNumCostVariants") <= 1 && uParam0->f_82)
			{
				_databinding_write_data_string_from_parent(uParam0->f_39, "tipText", _create_var_string(2, "CAMP_MEAT_POOR"));
			}
			else
			{
				iVar0 = func_858(uParam0->f_77, uParam0->f_78, func_551(), 0);
				_databinding_write_data_string_from_parent(uParam0->f_39, "tipText", _create_var_string(2, "COOK_ING_HAVE", iVar0));
			}
		}
	}
}

void func_885(var uParam0)
{
	_0xd962f8579d702db5();
	func_1112(uParam0);
	func_878(uParam0);
	func_1111(uParam0);
	_databinding_write_data_bool_from_parent(uParam0->f_39, "ShowRpgDescription", 0);
	_databinding_write_data_bool_from_parent(uParam0->f_39, "ShowIngredients", 0);
	uParam0->f_77 = 0;
	uParam0->f_78 = 0;
	func_879(uParam0, 0, 0);
	func_45(uParam0, 9);
}

void func_886(var uParam0, int iParam1)
{
	func_878(uParam0);
	func_1111(uParam0);
	func_874(uParam0, &(iParam1->f_3));
}

void func_887(var uParam0)
{
	iVar0 = func_372(uParam0->f_77, -1636519629);
	if (iVar0 == 414472632)
	{
		uParam0->f_53 = 250;
		if (!does_entity_exist(uParam0->f_85))
		{
			iVar1 = func_1113(uParam0->f_77);
			if (iVar1 != 0)
			{
				uParam0->f_85 = create_object(iVar1, Global_36, true, true, false, false, false);
				set_entity_completely_disable_collision(uParam0->f_85, false, false);
				attach_entity_to_entity(uParam0->f_85, Global_35, get_ped_bone_index(Global_35, 37709), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
			}
		}
		set_anim_scene_entity(uParam0->f_63, "player", Global_35, 0);
		start_anim_scene(uParam0->f_63);
		_set_anim_scene_playback_list_bool(uParam0->f_63, "pl_craft", true);
	}
	else if (iVar0 == -1136843638)
	{
		uParam0->f_53 = 250;
		set_anim_scene_entity(uParam0->f_66, "arrow", uParam0->f_86, 0);
		set_anim_scene_entity(uParam0->f_66, "player", Global_35, 0);
		start_anim_scene(uParam0->f_66);
		_set_anim_scene_playback_list_bool(uParam0->f_66, "pl_craft", true);
	}
	else if (iVar0 == 786205940)
	{
		uParam0->f_53 = 250;
		set_anim_scene_entity(uParam0->f_67, "player", Global_35, 0);
		start_anim_scene(uParam0->f_67);
		_set_anim_scene_playback_list_bool(uParam0->f_67, "pl_craft", true);
	}
	else if (iVar0 == -715814988)
	{
		uParam0->f_53 = 250;
		set_anim_scene_entity(uParam0->f_65, "player", Global_35, 0);
		if (!does_entity_exist(uParam0->f_85))
		{
			iVar2 = func_1113(uParam0->f_77);
			if (iVar2 != 0)
			{
				uParam0->f_85 = create_object(iVar2, Global_36, true, true, false, false, false);
				set_entity_visible(uParam0->f_85, false);
				set_entity_completely_disable_collision(uParam0->f_85, false, false);
				attach_entity_to_entity(uParam0->f_85, Global_35, get_ped_bone_index(Global_35, 37709), func_1114(uParam0->f_77), 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
			}
		}
		set_anim_scene_entity(uParam0->f_65, "bullet", uParam0->f_85, 0);
		start_anim_scene(uParam0->f_65);
		_set_anim_scene_playback_list_bool(uParam0->f_65, "pl_craft", true);
	}
	else if (iVar0 == -732326901)
	{
		uParam0->f_53 = 250;
		if (!does_entity_exist(uParam0->f_86))
		{
			uParam0->f_86 = _create_weapon_object(-764310200, 1, Global_36, true, 1f);
			set_entity_visible(uParam0->f_86, false);
			set_entity_completely_disable_collision(uParam0->f_86, false, false);
		}
		set_anim_scene_entity(uParam0->f_68, "player", Global_35, 0);
		start_anim_scene(uParam0->f_68);
		_set_anim_scene_playback_list_bool(uParam0->f_68, "pl_craft", true);
	}
	else if (iVar0 == -1141771998)
	{
		uParam0->f_53 = 250;
		if (!does_entity_exist(uParam0->f_86))
		{
			uParam0->f_86 = _create_weapon_object(-1511427369, 1, Global_36, true, 1f);
			set_entity_visible(uParam0->f_86, false);
			set_entity_completely_disable_collision(uParam0->f_86, false, false);
		}
		set_anim_scene_entity(uParam0->f_69, "player", Global_35, 0);
		start_anim_scene(uParam0->f_69);
		_set_anim_scene_playback_list_bool(uParam0->f_69, "pl_craft", true);
	}
	else if (iVar0 == 364689687)
	{
		uParam0->f_53 = 250;
		if (!does_entity_exist(uParam0->f_86))
		{
			uParam0->f_86 = _create_weapon_object(-764310200, 1, Global_36, true, 1f);
			set_entity_visible(uParam0->f_86, false);
			set_entity_completely_disable_collision(uParam0->f_86, false, false);
		}
		if (!does_entity_exist(uParam0->f_87))
		{
			uParam0->f_87 = create_object(-1594634038, Global_36, true, true, false, false, false);
			set_entity_visible(uParam0->f_87, false);
			set_entity_completely_disable_collision(uParam0->f_87, false, false);
		}
		set_anim_scene_entity(uParam0->f_70, "RAG", uParam0->f_87, 0);
		set_anim_scene_entity(uParam0->f_70, "player", Global_35, 0);
		start_anim_scene(uParam0->f_70);
		_set_anim_scene_playback_list_bool(uParam0->f_70, "pl_craft", true);
		_set_anim_scene_playback_list_bool(uParam0->f_69, "pl_craft", true);
	}
	else if (iVar0 == -842117252)
	{
		uParam0->f_53 = 250;
		set_anim_scene_entity(uParam0->f_71, "player", Global_35, 0);
		start_anim_scene(uParam0->f_71);
		_set_anim_scene_playback_list_bool(uParam0->f_71, "pl_craft", true);
	}
	else if (iVar0 == -1610298873)
	{
		uParam0->f_53 = 250;
		set_anim_scene_entity(uParam0->f_72, "player", Global_35, 0);
		start_anim_scene(uParam0->f_72);
		_set_anim_scene_playback_list_bool(uParam0->f_72, "pl_craft", true);
	}
	else
	{
		uParam0->f_53 = round((get_anim_duration(func_1103(uParam0->f_77), func_1104(uParam0->f_77)) * 1000f));
		func_31(&(uParam0->f_89));
		task_play_anim(Global_35, func_1103(uParam0->f_77), func_1104(uParam0->f_77), 8f, -8f, -1, 67108880, 0f, false, 4096, false, "Satchel_Only_filter", false);
	}
}

void func_888(var uParam0, bool bParam1, var uParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_70(uParam0[iVar0]))
		{
			iVar1 = 0;
			while (iVar1 < *uParam2)
			{
				if (func_70(uParam2[iVar1]))
				{
					if (uParam0[iVar0] == uParam2[iVar1])
					{
					}
				}
				iVar1++;
			}
			func_84(uParam0[iVar0], bParam1, 1);
		}
		iVar0++;
	}
}

bool func_889(int iParam0)
{
	if ((((((((iParam0 == -715814988 || iParam0 == -1136843638) || iParam0 == -732326901) || iParam0 == 786205940) || iParam0 == -1141771998) || iParam0 == 364689687) || iParam0 == 414472632) || iParam0 == -842117252) || iParam0 == -1610298873)
	{
		return true;
	}
	return false;
}

int func_890(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case -715814988:
			return uParam0->f_65;
		case -732326901:
			return uParam0->f_68;
		case -1136843638:
			return uParam0->f_66;
		case 786205940:
			return uParam0->f_67;
		case -1141771998:
			return uParam0->f_69;
		case 364689687:
			return uParam0->f_70;
		case 414472632:
			return uParam0->f_63;
		case -842117252:
			return uParam0->f_71;
		case -1610298873:
			return uParam0->f_72;
		default:
			break;
	}
	return 0;
}

void func_891(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_55 = 0;
	func_47(262144);
	if (does_entity_exist(uParam0->f_86))
	{
		delete_object(&(uParam0->f_86));
	}
	if (does_entity_exist(uParam0->f_85))
	{
		delete_object(&(uParam0->f_85));
	}
	iVar0 = func_890(uParam0, iParam1);
	set_anim_scene_bool(iVar0, "bStopLoop", true, false);
	if (!func_66(128))
	{
		func_84(uParam0[2], 1, 1);
		func_84(uParam0[4], 1, 1);
	}
	func_331(uParam0[2], 0, 1);
	func_331(uParam0[4], 1, 1);
	func_559(uParam0[1], 1);
	func_144((*uParam0)[1], 1, 1);
	(*uParam0)[1] = func_81("CAMP_REC_MAKE", 1138488863, 3, 0, 0, 0, uParam0->f_53, uParam0->f_53 + 1, 1, 1073741824, 1704213876, 0);
	func_83(uParam0[1], 11, 1, 1);
	func_83(uParam0[1], 19, 1, 1);
	func_82(uParam0[1], -1067771379, 0, 1);
	func_84(uParam0[1], bParam2, 1);
	func_45(uParam0, 13);
}

int func_892(int iParam0)
{
	if (!func_121(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_199(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return _item_database_get_has_slot_count(iVar0);
}

bool func_893(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x22e590f108289a9d(func_86(bParam6), &uParam0, iParam4, &Var0))
	{
		return false;
	}
	if (!func_617(Var0, uParam5, bParam6, 0))
	{
		return false;
	}
	return true;
}

bool func_894(struct<4> Param0, int iParam4)
{
	if (!func_98(0))
	{
		return func_1115(Param0, iParam4, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_617(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!_0x734311e2852760d0(func_86(0), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

bool func_895(int iParam0)
{
	if (!func_121(iParam0, 0))
	{
	}
	if (func_190(iParam0, 162787671))
	{
		return true;
	}
	return false;
}

bool func_896(int iParam0, int iParam1)
{
	if (!func_1116(856287005, iParam0))
	{
		return false;
	}
	Var0 = { func_566() };
	*iParam1 = func_897(Var0, iParam0, 0);
	if (!func_121(*iParam1, 0))
	{
		return false;
	}
	return true;
}

int func_897(struct<4> Param0, int iParam4, int iParam5)
{
	Var0.f_9 = -1591664384;
	if (func_893(Param0, iParam4, &Var0, iParam5))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_898(int iParam0)
{
	if ((((iParam0 == 263080063 || iParam0 == -34331381) || iParam0 == -993578318) || iParam0 == 579268144) || iParam0 == 1104489688)
	{
		return true;
	}
	return false;
}

bool func_899(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return false;
	}
	Var2 = { func_607(0, iParam0, -1591664384, -1591664384, 0, 0) };
	func_609(&Var2, func_566());
	if (func_610(&Var2, &iVar0, &iVar1, 0))
	{
		Var16.f_9 = -1591664384;
		iVar30 = 0;
		while (iVar30 < iVar1)
		{
			if (func_285(&Var16, iVar30, iVar0, iVar1))
			{
				if (func_121(Var16.f_4, 0) && !Var16.f_10)
				{
					if (bParam2 && func_898(Var16.f_4))
					{
					}
					else
					{
						*uParam1 = { Var16 };
						func_287(iVar0);
						return true;
					}
				}
			}
			iVar30++;
		}
		func_287(iVar0);
	}
	return false;
}

void func_900(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

bool func_901(int iParam0, int iParam1)
{
	if (iParam0 != 0)
	{
		iVar3 = func_199(iParam0);
		if (iVar3 != 0)
		{
			iVar4 = func_1117(iParam0);
			iVar0 = 0;
			while (iVar0 < iVar4)
			{
				if (_item_database_get_fits_slot_info(iVar3, iVar0, &iVar1))
				{
					iVar2 = iVar1;
					if (iVar2 == iParam1)
					{
						return true;
					}
				}
				iVar0++;
			}
		}
	}
	return false;
}

struct<10> func_902(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	if (iParam0 != 0 && iParam0 != -1591664384)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0)
	{
		Var0.f_3 = iParam3;
	}
	if (iParam4 != 0)
	{
		Var0.f_4 = iParam4;
	}
	if (iParam5 != 0)
	{
		Var0.f_5 = iParam5;
	}
	if (iParam6 != -1)
	{
		Var0.f_6 = iParam6;
	}
	if (iParam7 != 0)
	{
		Var0.f_8 = iParam7;
	}
	if (iParam8 != 0)
	{
		Var0.f_7 = iParam8;
	}
	return Var0;
}

bool func_903(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_121(iParam0, 0))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!_item_database_fillout_acquire_cost(iParam0, iParam1, &Var0))
	{
		if (!bParam5)
		{
		}
		return false;
	}
	if (!bParam5)
	{
	}
	*iParam3 = Var0.f_3;
	iVar47 = 0;
	while (iVar47 < Var0.f_3)
	{
		if (!bParam5)
		{
		}
		*(*uParam2)[iVar47] = { *Var0.f_4[iVar47] };
		iVar47++;
	}
	if (bParam4)
	{
		func_1118(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

struct<4> func_904()
{
	return Var0;
}

float func_905(int iParam0)
{
	iVar4 = func_584(iParam0);
	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			fVar3 = &Global_40.f_11095.f_11[iVar4];
			iVar5 = func_906(fVar3);
			iVar0 = iVar5;
			iVar6 = iVar0 + 1;
			iVar1 = (func_1119(iVar6) - func_1119(iVar5));
			fVar2 = (IntToFloat(iVar1) * 0.25f);
			return fVar2;
		default:
			break;
	}
	return -1f;
}

int func_906(float fParam0)
{
	if (fParam0 <= IntToFloat(-1))
	{
		return -1;
	}
	if (fParam0 < IntToFloat(50))
	{
		return 0;
	}
	if (fParam0 < IntToFloat(100))
	{
		return 1;
	}
	if (fParam0 < IntToFloat(200))
	{
		return 2;
	}
	if (fParam0 < IntToFloat(350))
	{
		return 3;
	}
	if (fParam0 < IntToFloat(550))
	{
		return 4;
	}
	if (fParam0 < IntToFloat(800))
	{
		return 5;
	}
	if (fParam0 < IntToFloat(1100))
	{
		return 6;
	}
	return 7;
}

int func_907(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 1;
		case 2:
			return 1;
		case 4:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_908(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 1;
		case 2:
			return 1;
		case 8:
			return 1;
		case 9:
			return 1;
		case 10:
			return 1;
		case 11:
			return 1;
		case 12:
			return 1;
		case 13:
			return 1;
		case 14:
			return 1;
		case 16:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_909(float fParam0, float fParam1)
{
	iVar0 = func_906(fParam0);
	fVar1 = to_float(func_1119(iVar0));
	fVar2 = to_float(func_1119(iVar0 + 1));
	fVar3 = (fVar2 - fVar1);
	iVar4 = floor((((fParam0 - fVar1) / fVar3) * 4f));
	iVar5 = floor((((fParam1 - fVar1) / fVar3) * 4f));
	if (iVar4 == iVar5)
	{
		return 0;
	}
	if (iVar5 >= 4 || iVar5 < 0)
	{
		return 0;
	}
	return iVar5;
}

int func_910(int iParam0)
{
	if (func_1120(iParam0, &iVar0))
	{
		return func_1119(iVar0);
	}
	switch (iParam0)
	{
		case 1:
			if (func_1121())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 0:
			if (func_1121())
			{
				return 550;
			}
			else
			{
				return 100;
			}
			break;
		case 2:
			if (func_1121())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 4:
			return 0;
	}
	return 0;
}

int func_911(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 246;
		case 2:
			return 247;
		case 1:
			return 248;
		default:
			break;
	}
	return -1;
}

void func_912(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == 0)
	{
		return;
	}
	iVar3 = iParam1 + 1;
	if (iParam2 != 0)
	{
		sVar0 = "RPG_LEVEL_PROGRESS_TOAST";
		sVar1 = _create_var_string(2, "RPG_LEVEL_PROGRESS_BODY", iParam2 * 25, iVar3 + 1);
	}
	else
	{
		sVar0 = "RPG_LEVEL_INCREASED_TOAST";
		sVar1 = _create_var_string(2, "RPG_LEVEL_INCREASED_BODY", iVar3);
		bVar2 = true;
	}
	iVar3 = (iVar3 + func_1122(iParam0));
	sVar4 = func_1124(func_1123(iVar3, iParam2));
	sVar6 = func_1125(iParam0);
	if (!is_string_null_or_empty(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = _create_var_string(10, sVar0, func_1126(iParam0));
	iVar8 = func_1127(iParam0);
	iVar9 = get_hash_key(sVar4);
	if (bVar2)
	{
		Var10 = sVar7;
		Var10.f_1 = sVar1;
		Var10.f_3 = iVar9;
		Var10.f_2 = iVar8;
		Var10.f_4 = 1;
		Var10.f_5 = func_1128(iParam0);
		_uilog_post_notification(&Var10);
	}
	func_688(sVar7, sVar1, iVar8, iVar9, -479097442, "INPUT_FEED_INTERACT_GENERIC", func_1129(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

int func_913(int iParam0)
{
	if (!_item_database_get_fits_slot_info(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_412(iVar0);
}

bool func_914(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			*iParam1 = 0;
			break;
		case 1:
			*iParam1 = 1;
			break;
		default:
			return false;
	}
	return true;
}

char* func_915(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			sVar0 = "HealthCoreValue";
			break;
		case 1:
			sVar0 = "StaminaCoreValue";
			break;
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

char* func_916(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			sVar0 = "isLowHealthCoreActive";
			break;
		case 1:
			sVar0 = "isLowStaminaCoreActive";
			break;
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

int func_917(int iParam0)
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

bool func_918(int iParam0, int iParam1, bool bParam2)
{
	if ((bParam2 && func_23() == 0) && !_unlock_is_visible(iParam0))
	{
		return false;
	}
	if (!func_1130(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
	{
		return false;
	}
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		iVar13 = &uVar0[iVar12];
		if (iVar13 == 0)
		{
		}
		else if (!_unlock_is_unlocked(iVar13))
		{
			return true;
		}
		iVar12++;
	}
	return false;
}

bool func_919(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	if (!func_903(iParam0, iParam2, &Var0, &iVar31, bParam7, 0))
	{
		return false;
	}
	if (func_23() == 0 && iParam6 != 0)
	{
		return false;
	}
	if (iParam6 != 0)
	{
		bParam5 = false;
	}
	bVar35 = func_98(0);
	iVar34 = 0;
	while (iVar34 < iVar31)
	{
		if (&Var0[iVar34] == 0)
		{
		}
		else
		{
			iVar32 = (Var0[iVar34]->f_1 * iParam1);
			if (&Var0[iVar34] == 2084597891 && func_1131(iVar32))
			{
				Jump @390; //curOff = 134
			}
			else if (&Var0[iVar34] == 773203532 && func_1132(iVar32))
			{
			}
			else
			{
				if (iParam6 != 0)
				{
					iVar33 = func_1133(&(Var0[iVar34]), iParam6);
				}
				else
				{
					iVar33 = func_124(&(Var0[iVar34]), 0, 0);
				}
				if (iVar33 >= iVar32)
				{
				}
				else if (bVar35)
				{
					if (func_321(&(Var0[iVar34])) || func_640(&(Var0[iVar34])))
					{
						iVar36 = 0;
						if (bParam5)
						{
							iVar37 = func_1094(7, &(Var0[iVar34]), &iVar36);
						}
						iVar38 = func_1093(&(Var0[iVar34]), iParam6);
						if (((iVar33 + iVar37) + iVar38) >= iVar32)
						{
							if ((iVar33 + iVar38) < iVar32 && does_entity_exist(iVar36))
							{
								*iParam4 = iVar36;
							}
						}
						else
						{
							Jump @374; //curOff = 330
							if (bParam5 && ((iVar33 + func_1090(7, &(Var0[iVar34]))) + func_1088(&(Var0[iVar34]))) >= iVar32)
							{
							}
							else
							{
								*uParam3 = { *Var0[iVar34] };
								return false;
							}
						}
						iVar34++;
						return true;
					}
				}
			}
		}
	}
}

bool func_920(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_86(0);
	*uParam1 = { func_346(iParam0, func_608(0), iParam3, 0) };
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (!_0x025a1b1fb03fbf61(iVar0, uParam1, uParam2, 22, 1))
	{
		return false;
	}
	return true;
}

void func_921(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (&Global_1224227 < 20)
	{
		Global_1224227 = &Global_1224227 + 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*Global_1224227->f_1[iVar0] = { *(Global_1224227->f_1[iVar0 + 1]) };
			iVar0++;
		}
	}
	Var1 = -1;
	Var1 = iParam0;
	Var1.f_1 = iParam1;
	*(Global_1224227->f_1[(&Global_1224227 - 1)]) = { Var1 };
}

bool func_922(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_1134(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_1135())
	{
		return func_1134(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1225639->f_21[iParam1])
	{
		return func_1134(&((*Global_1108178)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

int func_923(int iParam0, var uParam1, bool bParam2, int iParam3, int iParam4)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_cashinventory_is_session_ready())
	{
		return 0;
	}
	if (_0xfbe782b3165ac8ec(iParam0))
	{
		return 1;
	}
	if (!_0x271f95e55c663b8b(&uVar0, uParam1))
	{
		return 0;
	}
	Var1.f_1 = 10;
	Var1.f_14 = 255;
	Var1.f_12 = bParam2;
	Var1.f_14 = iParam3;
	Var1.f_13 = iParam4;
	func_1136(uParam1, iParam0, Var1);
	return 1;
}

int func_924(int iParam0)
{
	iVar0 = -1337945352;
	if (!func_117(iParam0))
	{
		return iVar0;
	}
	if ((*Global_1347702)[iParam0]->f_12 & 1 != 0)
	{
		iVar0 = 1673015813;
	}
	else if ((*Global_1347702)[iParam0]->f_12 & 512 != 0)
	{
		if (Global_40.f_1093 == Global_1347702[iParam0])
		{
			iVar0 = 2103462781;
		}
		else
		{
			iVar0 = -1337945352;
		}
	}
	else if (Global_40.f_1093 == Global_1347702[iParam0])
	{
		iVar0 = 2103462781;
	}
	else
	{
		iVar0 = -1337945352;
	}
	return iVar0;
}

bool func_925(int iParam0)
{
	if (func_23() != -1)
	{
		return false;
	}
	if (!func_117(iParam0))
	{
		return false;
	}
	if ((*Global_1347702)[iParam0]->f_12 & 1048576 != 0 && (*Global_1347702)[iParam0]->f_13 & 2048 != 0)
	{
		return false;
	}
	if ((*Global_1347702)[iParam0]->f_18 > -1f)
	{
		return true;
	}
	return false;
}

void func_926(int iParam0)
{
	switch (func_23())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 || iParam0);
			break;
	}
}

void func_927(int iParam0)
{
	if (!func_925(iParam0))
	{
		if ((*Global_1347702)[iParam0]->f_13 & 16 != 0)
		{
			if ((*Global_1347702)[iParam0]->f_12 & 1 != 0)
			{
				if (does_blip_exist((*Global_1347702)[iParam0]->f_37))
				{
					_blip_set_modifier((*Global_1347702)[iParam0]->f_37, -1446646876);
				}
				func_934(&((*Global_1347702)[iParam0]->f_13), 32);
			}
		}
		else
		{
			if (does_blip_exist((*Global_1347702)[iParam0]->f_37))
			{
				_set_blip_flash_style((*Global_1347702)[iParam0]->f_37, -1446646876);
			}
			func_633(&((*Global_1347702)[iParam0]->f_13), 32);
		}
	}
}

void func_928(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_12 & 1 != 0)
	{
		_blip_set_modifier((*Global_1347702)[iParam0]->f_37, -1986290853);
		switch (iParam0)
		{
			case 140:
			case 142:
				_blip_set_modifier((*Global_1347702)[iParam0]->f_37, 495758964);
				break;
		}
	}
}

int func_929(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 5:
			return 4;
		case 6:
			return 79;
		case 0:
			return 43;
		case 2:
			return 98;
		case 4:
			return 58;
		case 1:
			return 71;
		case 3:
			return 9;
		case 7:
			return 22;
		case 8:
			return 37;
		default:
			break;
	}
	if (iParam0 != -1)
	{
	}
	return -1;
}

bool func_930(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		return does_blip_exist(&(Global_36308[iParam0]));
	}
	return false;
}

bool func_931(int iParam0)
{
	if (!func_1137(Global_40.f_4283))
	{
		if (!does_entity_exist(Global_35))
		{
			return true;
		}
		if (func_1138(iParam0))
		{
			if (vdist(Global_36, func_1139(iParam0)) < vdist(Global_36, (*Global_1888801)[iParam0]->f_15))
			{
				return get_distance_between_coords(Global_36, func_1139(iParam0), false) <= func_1140();
			}
		}
		return get_distance_between_coords(Global_36, (*Global_1888801)[iParam0]->f_15, false) <= func_1140();
	}
	return func_197();
}

bool func_932(int iParam0, bool bParam1, int iParam2)
{
	if ((bParam1 && does_blip_exist((*Global_1347702)[iParam0]->f_37)) && (*Global_1347702)[iParam0]->f_12 & 1 != 0)
	{
		return (*Global_1347702)[iParam0]->f_27 == iParam2;
	}
	return false;
}

void func_933(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!func_119(iParam0))
	{
		return;
	}
	switch (func_1141(iParam0))
	{
		case 1:
			iVar0 = func_116(iParam0);
			if (func_1142(iVar0, bParam1, bParam2, iParam3) && Global_1357549->f_1709 > 1)
			{
				if ((func_1143(iVar0, -1) && !(*Global_1835011)[iVar0]->f_70) && (*Global_1835011)[iVar0]->f_63 & 2 == 0)
				{
					iVar2 = 1986697381;
				}
				else
				{
					iVar2 = -592708248;
				}
			}
			else if ((func_1143(iVar0, -1) && !(*Global_1835011)[iVar0]->f_70) && (*Global_1835011)[iVar0]->f_63 & 2 == 0)
			{
				iVar2 = -1559907306;
			}
			else
			{
				iVar2 = 1673015813;
			}
			if ((*Global_1835011)[iVar0]->f_28 != iVar2)
			{
				_0xbd62d98799a3daf0((*Global_1835011)[iVar0]->f_27, iVar2);
				if (!func_1144(iVar0))
				{
					_blip_set_modifier((*Global_1835011)[iVar0]->f_27, -1986290853);
				}
				if (func_630((*Global_1835011)[iVar0], 2))
				{
					_blip_set_modifier((*Global_1835011)[iVar0]->f_27, 724623647);
				}
				(*Global_1835011)[iVar0]->f_28 = iVar2;
			}
			break;
		case 8:
			iVar1 = func_116(iParam0);
			if (func_1145(iVar1, bParam1, bParam2, iParam3) && Global_1357549->f_1709 > 1)
			{
				switch (func_924(iVar1))
				{
					case -1337945352:
						iVar2 = 588610391;
						break;
					case 2103462781:
						iVar2 = -1032930804;
						break;
					case -1485222547:
						iVar2 = 13700166;
						break;
					case 1673015813:
						iVar2 = -592708248;
						break;
					default:
						iVar2 = 588610391;
						break;
				}
			}
			else
			{
				iVar2 = func_924(iVar1);
			}
			if ((*Global_1347702)[iVar1]->f_38 != iVar2)
			{
				_0xbd62d98799a3daf0((*Global_1347702)[iVar1]->f_37, iVar2);
				func_928(iVar1);
				(*Global_1347702)[iVar1]->f_38 = iVar2;
			}
			break;
	}
}

void func_934(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_935(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_936(int iParam0)
{
	if ((iParam0 == 97 || iParam0 == 99) || iParam0 == 6)
	{
		return true;
	}
	return false;
}

void func_937(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (Global_40.f_490.f_402[iParam0] || iParam1);
}

bool func_938(int iParam0, var uParam1)
{
	if (iParam0 == 90)
	{
		if (func_1146((*Global_1347702)[iParam0]->f_15) != 0)
		{
			(*Global_1347702)[iParam0]->f_18 = 80f;
			*uParam1 = { 1015.113f, 159.7295f, 103.0175f };
			return true;
		}
	}
	else if (iParam0 == 96)
	{
		if ((*Global_1347702)[iParam0]->f_13 & 65536 != 0)
		{
			*uParam1 = { -1646.77f, -1362.89f, 83.4f };
			return true;
		}
		else
		{
			*uParam1 = { -1629.71f, -1338.377f, 82.0174f };
			return true;
		}
	}
	return false;
}

void func_939(var uParam0)
{
	func_638(uParam0, 143479330);
	if (Global_1946804->f_1 == 2026485318)
	{
		func_638(uParam0, 617531372);
	}
	else
	{
		func_638(uParam0, 291123060);
	}
}

void func_940(var uParam0, int iParam1, struct<14> Param2)
{
	if (!func_1147(uParam0))
	{
		return;
	}
	if (&Global_1224866 < 20)
	{
		Global_1224866 = &Global_1224866 + 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*Global_1224866->f_1[iVar0] = { *(Global_1224866->f_1[iVar0 + 1]) };
			iVar0++;
		}
	}
	Var1.f_7.f_2.f_1 = 10;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_6 = 1;
	Var1.f_7 = { Param2 };
	*(Global_1224866->f_1[(&Global_1224866 - 1)]) = { Var1 };
}

int func_941(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!_is_ped_carrying(iParam0))
	{
		return iParam2;
	}
	iVar1 = create_itemset(true);
	find_all_attached_carriable_entities(iParam0, iVar1);
	iVar4 = get_itemset_size(iVar1);
	iVar3 = 0;
	while (iVar3 < iVar4)
	{
		if (iParam2 == 0)
		{
		}
		else
		{
			iVar2 = _get_entity_from_item(get_indexed_item_in_itemset(iVar3, iVar1));
			if (!does_entity_exist(iVar2))
			{
			}
			else
			{
				if (is_entity_a_ped(iVar2))
				{
					iVar9 = get_ped_index_from_entity_index(iVar2);
					func_641(iVar9, &iVar6, &uVar7, &iVar5, &uVar8);
					func_642(&iVar0, iVar9, iVar5, iVar6);
					if (!func_121(iVar0, 0))
					{
						iVar0 = func_326(iVar2);
					}
				}
				else
				{
					iVar0 = func_326(iVar2);
				}
				if (iVar0 == iParam1)
				{
					_0xed00d72f81cf7278(iVar2, 0, 0);
					if (bParam3)
					{
						func_1148(iVar2);
						_0x0d0db2b6af19a987(&iVar2);
					}
					iParam2 = (iParam2 - 1);
				}
			}
			iVar3++;
		}
	}
	destroy_itemset(iVar1);
	return iParam2;
}

bool func_942(int iParam0)
{
	if (func_23() == -1)
	{
		if ((Global_1914319->f_17370 || iParam0) || Global_1914319->f_16855 == 2)
		{
			iVar0 = _get_last_mount(Global_35);
			if (iVar0 != func_204(7))
			{
				return true;
			}
		}
		else if (is_ped_on_mount(Global_35))
		{
			iVar0 = get_mount(Global_35);
			if (iVar0 != func_204(7))
			{
				return true;
			}
		}
	}
	else
	{
		iVar0 = _get_last_mount(func_943());
		if (iVar0 != _0xf49f14462f0ae27c(get_player_index()))
		{
			return true;
		}
	}
	return false;
}

int func_943()
{
	return get_player_ped(255);
}

int func_944(int iParam0, int iParam1)
{
	if (!func_121(iParam1, 0))
	{
		return 0;
	}
	Var0 = { func_1149(iParam0, iParam1) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(iParam0, &Var0, 0);
	return uVar4;
}

int func_945(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	iVar0 = _inventory_get_ped_inventory_id(iParam0);
	if (func_1150(iParam0))
	{
		iVar1 = func_1151(iParam0);
		if (func_121(iParam1, 0))
		{
			if (func_946(iParam1))
			{
				func_1152(iVar1, iParam1, iParam2);
			}
		}
	}
	return func_1153(iVar0, iParam1, iParam2, bParam3, iParam4);
}

bool func_946(int iParam0)
{
	if (!func_580(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 57)
	{
		iVar1 = func_1154(iVar0, 1);
		iVar2 = iVar1;
		if (iParam0 == iVar2)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_947(int iParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return iParam2;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	iVar1 = iParam1;
	iVar0 = 2;
	while (iVar0 >= 0)
	{
		if (_0x0ceeb6f4780b1f2f(iParam0, iVar0) == iVar1)
		{
			_0x627f7f3a0c4c51ff(iParam0, iVar1);
			iParam2 = (iParam2 - 1);
		}
		if (iParam2 <= 0)
		{
		}
		else
		{
			iVar0 = (iVar0 + -1);
		}
	}
	return iParam2;
}

bool func_948(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	Var0 = { func_436(iParam0) };
	if (_stat_id_is_valid(&Var0))
	{
		_0xbd861ae8a5181ed7(&Var0, iParam1);
	}
	func_1155(iParam0, iParam1);
	return func_1156(iParam0, iParam1, bParam2, iParam3);
}

int func_949()
{
	return 16596983;
}

int func_950()
{
	return 16662519;
}

bool func_951(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_952(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

bool func_953(int iParam0, int iParam1)
{
	iVar0 = get_script_task_status(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

bool func_954(int iParam0)
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

bool func_955(bool bParam0)
{
	if (_is_ped_hogtied(Global_35))
	{
		if (bParam0)
		{
			func_201("ITEM_UNUSABLE_HOGTIED", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (_is_ped_hogtying(Global_35))
	{
		if (bParam0)
		{
			func_201("ITEM_UNUSABLE_HOGTYING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (_is_ped_lassoed(Global_35))
	{
		if (bParam0)
		{
			func_201("ITEM_UNUSABLE_LASSOED", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (_0xef3a8772f085b4aa(Global_35))
	{
		return false;
	}
	if (!_get_lassoed_entity(Global_35) == 0)
	{
		return false;
	}
	if (_0x226cf9b159e38f42(Global_35))
	{
		return false;
	}
	if (_0x3bdfcf25b58b0415(Global_35))
	{
		return false;
	}
	if (_0x0e99e3bf11bb6367(Global_35) || is_ped_performing_melee_action(Global_35, 4096, 0))
	{
		return false;
	}
	if (is_ped_performing_melee_action(Global_35, 32768, 0))
	{
		return false;
	}
	return true;
}

bool func_956(bool bParam0)
{
	if (_is_ped_sliding(Global_35))
	{
		if (bParam0)
		{
			func_201("ITEM_UNUSABLE_SLIDING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (is_ped_swimming(Global_35))
	{
		if (bParam0)
		{
			func_201("ITEM_UNUSABLE_SWIMMING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (is_ped_climbing(Global_35))
	{
		if (bParam0)
		{
			func_201("ITEM_UNUSABLE_CLIMBING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_954(Global_35))
	{
		if (bParam0)
		{
			func_201("ITEM_UNUSABLE_SLEEPING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (is_ped_falling(Global_35))
	{
		if (bParam0)
		{
			func_201("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (_0x3e592d0486dec0f6(Global_35))
	{
		if (bParam0)
		{
			func_201("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (is_ped_ragdoll(Global_35))
	{
		if (bParam0)
		{
			func_201("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (is_ped_vaulting(Global_35))
	{
		if (bParam0)
		{
			func_201("ITEM_UNUSABLE_JUMPING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (is_ped_getting_up(Global_35))
	{
		if (bParam0)
		{
			func_201("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	return true;
}

bool func_957(bool bParam0)
{
	if (is_ped_hanging_on_to_vehicle(Global_35))
	{
		if (bParam0)
		{
			func_201("ITEM_UNUSABLE_HANGING_ON_VEHICLE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	return true;
}

bool func_958(int iParam0, bool bParam1)
{
	iVar0 = func_1157();
	if (_0x756c7b4c43df0422(1))
	{
		iVar0 = _0x351f74ed6177ebe7();
	}
	else
	{
		iVar0 = iParam0;
	}
	if (!does_entity_exist(iVar0))
	{
		if (bParam1)
		{
			func_201("ITEM_UNUSABLE_NOT_DYING_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (!func_961(iVar0))
	{
		if (bParam1)
		{
			func_201("ITEM_UNUSABLE_NOT_A_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (!is_ped_in_writhe(iVar0))
	{
		if (bParam1)
		{
			func_201("ITEM_UNUSABLE_NOT_DYING_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (!_0xd543d3a8fde4f185(Global_35, iVar0))
	{
		if (bParam1)
		{
			func_201("ITEM_UNUSABLE_NOT_DYING_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	return true;
}

bool func_959(int iParam0, bool bParam1)
{
	if (is_ped_on_mount(Global_35))
	{
		return true;
	}
	else if (_0x3ee1f7a8c32f24e1(get_player_index(), &iVar0, 0, 0))
	{
		if (!func_961(iVar0))
		{
			if (bParam1)
			{
				func_201("ITEM_UNUSABLE_NOT_ILO_HORSE", 10000, 0, 0, 0, 1);
			}
			return false;
		}
		if (is_ped_in_writhe(get_ped_index_from_entity_index(iVar0)))
		{
			if (bParam1)
			{
				func_201("ITEM_UNUSABLE_DYING_HORSE", 10000, 0, 0, 0, 1);
			}
			return false;
		}
		if (func_1158(iVar0, 1, 1) > 2f)
		{
			if (bParam1)
			{
				func_201("ITEM_UNUSABLE_NOT_NEAR_HORSE", 10000, 0, 0, 0, 1);
			}
			return false;
		}
		if (!_0xd543d3a8fde4f185(Global_35, get_ped_index_from_entity_index(iVar0)))
		{
			if (bParam1)
			{
				func_201("ITEM_UNUSABLE_NOT_NEAR_HORSE", 10000, 0, 0, 0, 1);
			}
			return false;
		}
		return true;
	}
	iVar1 = iParam0;
	if (!func_961(iVar1))
	{
		if (bParam1)
		{
			func_201("ITEM_UNUSABLE_NOT_A_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (is_ped_in_writhe(iVar1))
	{
		if (bParam1)
		{
			func_201("ITEM_UNUSABLE_DYING_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (!_0xd543d3a8fde4f185(Global_35, iVar1))
	{
		if (bParam1)
		{
			func_201("ITEM_UNUSABLE_NOT_NEAR_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	return true;
}

bool func_960()
{
	iVar0 = player_ped_id();
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (is_ped_dead_or_dying(iVar0, true))
	{
		return false;
	}
	if (!_0xefc4303ddc6e60d3(iVar0))
	{
		return false;
	}
	iVar1 = _0xed1f514af4732258(iVar0);
	if (!does_entity_exist(iVar1))
	{
		return false;
	}
	if (is_ped_dead_or_dying(iVar1, true))
	{
		return false;
	}
	if (!_0x2d64376cf437363e(iVar1))
	{
		return false;
	}
	return true;
}

bool func_961(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!is_entity_a_ped(iParam0))
	{
		return false;
	}
	iVar0 = get_entity_model(iParam0);
	return _is_this_model_a_horse(iVar0);
}

bool func_962(int iParam0)
{
	switch (func_23())
	{
		case -1:
			return (Global_1357549->f_1494 && iParam0) != 0;
	}
	return false;
}

bool func_963()
{
	if (!is_ped_in_any_train(Global_35))
	{
		return false;
	}
	iVar0 = func_1159(Global_36, 0);
	if (iVar0 >= 8 && iVar0 <= 12)
	{
		return true;
	}
	return false;
}

bool func_964()
{
	return Global_1898164->f_163;
}

bool func_965(int iParam0)
{
	return func_128(Global_1935496->f_7, iParam0);
}

int func_966(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_ped_injured(iParam0))
	{
		return 0;
	}
	if (_0x5463c962bc7777c3(iParam0, 0, &uVar0, 1, 0) != 0)
	{
		return uVar0;
	}
	if (_0x5463c962bc7777c3(iParam0, 2, &uVar0, 1, 0) != 0)
	{
		return uVar0;
	}
	if (_0x5463c962bc7777c3(iParam0, 1, &uVar0, 1, 0) != 0)
	{
		return uVar0;
	}
	return 0;
}

bool func_967(int iParam0)
{
	switch (func_23())
	{
		case -1:
			return (Global_1357549->f_1495 && iParam0) != 0;
	}
	return false;
}

bool func_968(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23118[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0] && iParam1) != 0;
}

bool func_969(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return false;
	}
	if (!_does_volume_exist(iParam1))
	{
		return false;
	}
	return is_entity_in_volume(iParam0, iParam1, bParam2, iParam3);
}

bool func_970(vector3 vParam0, float fParam3)
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_1160(iVar0))
		{
			if (vdist(func_1161(iVar0), vParam0) < fParam3)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_971(vector3 vParam0, float fParam3)
{
	iVar0 = 0;
	while (iVar0 < Global_40.f_450)
	{
		if (&Global_40.f_450[iVar0] > -1 && &Global_40.f_450[iVar0] < 200)
		{
			if (vdist(func_1162(&(Global_40.f_450[iVar0])), vParam0) < fParam3)
			{
				return true;
			}
		}
	else
	{
		}
		else
		{
			iVar0++;
		}
	}
	return false;
}

bool func_972(int iParam0, var uParam1)
{
	if (!func_1163(iParam0))
	{
		return false;
	}
	*uParam1 = Global_1914270[iParam0];
	if (*uParam1 == 0)
	{
		return false;
	}
	return true;
}

int func_973()
{
	return func_1164(Global_40.f_12019);
}

int func_974()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_759(iVar1);
		if (func_25(iVar2, 1, 0) || func_980(func_979(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_975()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1165(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_976()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_985(_0x126cbebba46693cf(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_977()
{
	return _0x3a65f4844913a047(2103522376, 0);
}

int func_978(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 554799588;
		case 1:
			return -1021394391;
		case 2:
			return -987306668;
		case 3:
			return -1028735103;
		case 4:
			return 515229791;
		case 5:
			return -1230863414;
		case 6:
			return 232875659;
		case 7:
			return 1423129537;
		case 8:
			return -435742319;
		case 9:
			return -1854702679;
		case 10:
			return 1265323898;
		case 11:
			return -479775696;
		default:
			break;
	}
	return 0;
}

int func_979(int iParam0)
{
	switch (iParam0)
	{
		case -1230863414:
			return 1;
		case -1021394391:
			return 8;
		case 232875659:
			return 4;
		case -1028735103:
			return 16;
		case 554799588:
			return 32;
		case 1265323898:
			return 64;
		case -1854702679:
			return 128;
		case -987306668:
			return 256;
		case -479775696:
			return 2;
		case 515229791:
			return 512;
		case -435742319:
			return 1024;
		case 1423129537:
			return 2048;
		default:
			break;
	}
	return 0;
}

bool func_980(int iParam0)
{
	return (Global_40.f_12019 && iParam0) != 0;
}

char* func_981(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_DB_DINO_BONES_FOUND";
		case 1:
			return "COL_DB_SEND";
		case 2:
			return "COL_DB_COLLECT";
		default:
			break;
	}
	return "";
}

int func_982(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		case 1:
			return 6;
		case 2:
			return 7;
		case 3:
			return 8;
		case 4:
			return 9;
		default:
			break;
	}
	return 5;
}

int func_983(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15;
		case 1:
			return 16;
		case 2:
			return 17;
		case 3:
			return 18;
		case 4:
			return 19;
		default:
			break;
	}
	return 15;
}

char* func_984(int iParam0)
{
	switch (iParam0)
	{
		case 281887510:
			return "COL_EP_LITTLE_FOUND";
		case -164081697:
			return "COL_EP_REDDISH_FOUND";
		case -1161319399:
			return "COL_EP_SNOWY_FOUND";
		case 728781265:
			return "COL_RO_LADY_OF_NIGHT_FOUND";
		case -222563712:
			return "COL_HF_FOUND";
		case 1794857344:
			return "COL_RO_LADY_SLIPPER_FOUND";
		case 1952409553:
			return "COL_RO_MOCCASIN_FOUND";
		case 2116770557:
			return "COL_GF_FOUND";
		case -651064726:
			return "COL_RO_ACUNAS_STAR_FOUND";
		case -404270094:
			return "COL_RO_CIGAR_FOUND";
		case 2093126853:
			return "COL_RO_GHOST_FOUND";
		case 2085530337:
			return "COL_SF_FOUND";
		case -150591160:
			return "COL_RO_NIGHT_SCENTED_FOUND";
		case -323969289:
			return "COL_RO_RAT_TAIL_FOUND";
		case 1504361882:
			return "COL_RO_SPIDER_FOUND";
		case -1521783510:
			return "COL_RO_CLAMSHELL_FOUND";
		case 1714875242:
			return "COL_RO_DRAGONS_FOUND";
		case 1019229063:
			return "COL_RO_QUEENS_FOUND";
		case 927763737:
			return "COL_RO_SPARROWS_FOUND";
		default:
			break;
	}
	return "";
}

bool func_985(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

char* func_986(int iParam0)
{
	switch (iParam0)
	{
		case -1865241121:
			return "PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY";
		case 2117142684:
			return "PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY";
		case -1409326024:
			return "PROVISION_FISH_LAKE_STURGEON_LEGENDARY";
		case -641744968:
			return "PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY";
		case -946988203:
			return "PROVISION_FISH_LONGNOSE_GAR_LEGENDARY";
		case -646136018:
			return "PROVISION_FISH_MUSKIE_LEGENDARY";
		case -955835837:
			return "PROVISION_FISH_PERCH_LEGENDARY";
		case -179276075:
			return "PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY";
		case -492711560:
			return "PROVISION_FISH_ROCK_BASS_LEGENDARY";
		case 1764383959:
			return "PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY";
		case 317501533:
			return "PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY";
		case 817753087:
			return "PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY";
		case 576606016:
			return "PROVISION_FISH_BLUEGILL_LEGENDARY";
		default:
			break;
	}
	return "";
}

char* func_987(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_RC_ROCK_FACES_FOUND";
		case 1:
			return "COL_RC_SEND";
		case 2:
			return "COL_RC_COLLECT";
		default:
			break;
	}
	return "";
}

bool func_988(int iParam0)
{
	if (func_1166(iParam0) && func_25(iParam0, 1, 0))
	{
		return true;
	}
	else if (func_1167(iParam0) && func_1168(iParam0))
	{
		return true;
	}
	return false;
}

char* func_989(int iParam0)
{
	if (!func_121(iParam0, 0))
	{
		return "";
	}
	return _get_label_text_by_hash(func_492(iParam0));
}

int func_990(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

int func_991(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

float func_992(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		fVar3 = (fVar2 - fVar1);
		return (fVar3 / 2f);
	}
	switch (iParam0)
	{
		case 0:
			fVar1 = to_float(get_entity_health(Global_35));
			fVar2 = to_float(get_entity_max_health(Global_35, false));
			iVar0 = 50;
			break;
		case 1:
			fVar1 = _get_ped_stamina(Global_35);
			fVar2 = _get_ped_max_stamina(Global_35);
			iVar0 = 8;
			break;
		case 2:
			fVar1 = _0xa81d24ae0af99a5e(get_player_index());
			fVar2 = _0x592f58bc4d2a2cf3(get_player_index(), 0);
			iVar0 = 14;
			break;
	}
	fVar4 = (IntToFloat((iVar0 * iParam1)) + fVar1);
	if (fVar4 > fVar2)
	{
		fVar3 = (fVar2 - fVar1);
	}
	else
	{
		fVar3 = (fVar4 - fVar1);
	}
	return (fVar3 / 2f);
}

void func_993(int iParam0, bool bParam1)
{
	iVar0 = (50 * iParam0);
	iVar1 = (iVar0 + get_entity_health(Global_35));
	if (bParam1 && iVar0 < 0)
	{
		_0x835f131e7dc8f97a(Global_35, to_float(iVar0), 0, 0);
	}
	else if (iParam0 <= 0 || iVar1 > get_entity_max_health(Global_35, false))
	{
		_set_entity_health(Global_35, get_entity_max_health(Global_35, false), 0);
	}
	else
	{
		_set_entity_health(Global_35, iVar1, 0);
	}
}

void func_994(int iParam0)
{
	if (func_23() != -1)
	{
		return;
	}
	if (iParam0 == -1)
	{
		_restore_ped_stamina(Global_35, 100f);
	}
	else
	{
		iVar0 = 8;
		_charge_ped_stamina(Global_35, to_float((iParam0 * iVar0)));
	}
}

float func_995(int iParam0, float fParam1)
{
	return func_235(to_float(iParam0), fParam1);
}

int func_996(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 1433048902;
		case 3:
			return 1433048902;
		case 4:
			return -1602657245;
		case 5:
			return -1991037110;
		case 6:
			return 1047281747;
		case 7:
			return -398744080;
		case 8:
			return -1066874997;
		case 11:
			return -2085219828;
		case 12:
			return 2064962445;
		case 13:
			return -1781387050;
		case 15:
			return -1620920647;
		case 16:
			return -1664530975;
		case 18:
			return 1047281747;
		case 19:
			return -1781387050;
		case 20:
			return -597058368;
		case 23:
			return 128702355;
		case 26:
			return -2051332199;
		case 27:
			return 546981776;
		case 28:
			return -2013384490;
		case 29:
			return 228922461;
		case 31:
			return -746674788;
		case 33:
			return 599861917;
		case 34:
			return -1781387050;
		case 37:
			return 2006811763;
		case 38:
			return -90546043;
		case 39:
			return 1216456215;
		case 40:
			return 746300881;
		case 41:
			return -435006002;
		case 42:
			return -624139784;
		case 43:
			return -529638012;
		case 1:
			return -651064726;
		case 9:
			return -404270094;
		case 10:
			return -1521783510;
		case 14:
			return 1714875242;
		case 17:
			return 2093126853;
		case 21:
			return 728781265;
		case 22:
			return 1794857344;
		case 24:
			return 1952409553;
		case 25:
			return -150591160;
		case 30:
			return 1019229063;
		case 32:
			return -323969289;
		case 35:
			return 927763737;
		case 36:
			return 1504361882;
		default:
			break;
	}
	return 0;
}

void func_997(int iParam0, int iParam1)
{
	if (!func_998(iParam0))
	{
		return;
	}
	if (func_23() != -1)
	{
		Global_36638[iParam0] = (Global_36638[iParam0] || iParam1);
		return;
	}
	Global_40.f_9274[iParam0] = (Global_40.f_9274[iParam0] || iParam1);
}

bool func_998(int iParam0)
{
	return !iParam0 <= 0;
}

bool func_999(int iParam0)
{
	if (!func_998(iParam0))
	{
		return false;
	}
	return func_1169(iParam0, 4, 1);
}

void func_1000(int iParam0, bool bParam1)
{
	if (!func_998(iParam0))
	{
		return;
	}
	if (func_1170(iParam0))
	{
		return;
	}
	func_997(iParam0, 2);
	if (bParam1)
	{
		if (!func_18(0, 0, 1))
		{
			func_101(1, 6);
		}
	}
}

bool func_1001(int iParam0)
{
	if (!func_998(iParam0))
	{
		return false;
	}
	return func_1169(iParam0, 1, 1);
}

void func_1002(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_998(iParam0))
	{
		return;
	}
	if (func_1001(iParam0))
	{
		return;
	}
	if (!bParam1)
	{
		bParam1 = func_1171(iParam0);
	}
	if (!bParam1)
	{
		if (func_23() != -1)
		{
		}
		else
		{
			func_1172(iParam0);
		}
	}
	func_997(iParam0, 1);
	if (func_23() == -1)
	{
		func_1173(iParam0, func_270());
	}
	func_1000(iParam0, 1);
	if (bParam2)
	{
		if (!func_18(0, 0, 1))
		{
			func_101(1, 6);
		}
	}
}

float func_1003(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_1004()
{
	iVar0 = &Global_1946804->f_529[9];
	iVar0 = (&Global_1946804->f_529[4] + iVar0);
	iVar0 = (&Global_1946804->f_529[10] + iVar0);
	iVar0 = (&Global_1946804->f_529[1] + iVar0);
	iVar0 = (&Global_1946804->f_529[2] + iVar0);
	iVar0 = (&Global_1946804->f_529[6] + iVar0);
	iVar0 = (&Global_1946804->f_529[29] + iVar0);
	iVar0 = (&Global_1946804->f_529[26] + iVar0);
	iVar0 = (&Global_1946804->f_529[18] + iVar0);
	iVar0 = (&Global_1946804->f_529[19] + iVar0);
	return iVar0 > 0;
}

int func_1005(int iParam0)
{
	iVar0 = func_413(func_913(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1946804->f_1497.f_1[iVar0]->f_1;
	}
	return 0;
}

int func_1006()
{
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_199(iVar1) == -999503751)
		{
			if (func_1174() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_1007(int iParam0, int iParam1)
{
	Var0 = { func_296(iParam0, 0, 0) };
	Var5 = { func_346(iParam0, Var0, Var0.f_4, 0) };
	if (func_419(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return false;
	}
	_0x9a113c660aea3832(func_86(0), &Var5, iParam1);
	return true;
}

void func_1008(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	func_1175(iParam2, *uParam0);
	func_1176(uParam0->f_1[*uParam0], iParam1, -1, 1, 0);
	*uParam0++;
}

int func_1009(int iParam0)
{
	switch (iParam0)
	{
		case -2061583405:
			return 2;
		case -1719060085:
			return 16;
		case -999503751:
			return 1;
		case -525676072:
			return 4;
		case 81053684:
			return 8;
		case -413129408:
			return 32;
		default:
			break;
	}
	return 0;
}

bool func_1010(int iParam0)
{
	return (Global_1946804->f_2657.f_26.f_6 && iParam0) != 0;
}

void func_1011(int iParam0)
{
	Global_1946804->f_978 = iParam0;
}

void func_1012(int iParam0, bool bParam1, bool bParam2)
{
	switch (func_199(iParam0))
	{
		case -2061583405:
			bVar0 = func_1177(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_1177(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_1177(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_1177(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_1177(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_1177(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_730();
	}
	if (bParam1)
	{
		func_732(0, 0);
	}
}

void func_1013(var uParam0, int iParam1)
{
	Var2 = 39;
	Var4 = 10;
	Var4.f_1 = 39;
	Var4.f_1.f_2 = 39;
	Var4.f_1.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iVar0 < *uParam0)
		{
			if ((func_1178(uParam0->f_2[iVar0], 2) || &uParam0->f_2[iVar0] == iParam1) || &uParam0->f_2[iVar0] == 39)
			{
				*uParam0->f_2[iVar0] = { Var2 };
			}
			else
			{
				if (func_1178(uParam0->f_2[iVar0], 1))
				{
					func_1179(uParam0->f_2[iVar0], 2, 6);
				}
				*Var4[iVar1] = { *uParam0->f_2[iVar0] };
				iVar1++;
				*uParam0->f_2[iVar0] = { Var2 };
			}
			iVar0++;
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				*uParam0->f_2[iVar0] = { *Var4[iVar0] };
				iVar0++;
			}
			*uParam0 = iVar1;
		}
	}
}

void func_1014(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_1180(uParam0, 1))
	{
		func_1181(uParam0, 1);
	}
	uParam0->f_2[*uParam0]->f_1 = iParam2;
	uParam0->f_2[*uParam0] = iParam1;
	*uParam0++;
}

bool func_1015(int iParam0, int iParam1)
{
	return (Global_1946804->f_57[iParam0]->f_9 && iParam1) != 0;
}

void func_1016(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	if (bParam4)
	{
		iVar0 = 3;
	}
	iVar1 = 12;
	iVar2 = 20;
	iVar3 = 16;
	if (uParam0->f_1[iVar3]->f_1 == 1216705912 || uParam0->f_1[iVar3]->f_1 == 654181853)
	{
		if (&uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1])
		{
			uParam0->f_1[iVar3]->f_1 = 1334603721;
		}
		else
		{
			uParam0->f_1[iVar3]->f_1 = -1539589426;
			uParam0->f_1[iVar1]->f_1 = 1155669136;
		}
		if (bParam2)
		{
			func_738(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_738(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2]->f_1 == -1333118809 || uParam0->f_1[iVar2]->f_1 == -1158926300)
	{
		uParam0->f_1[iVar2]->f_1 = 1155669136;
		if (bParam3)
		{
			func_738(iVar2, iVar0);
		}
	}
}

int func_1017(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_729();
	}
	iVar0 = 0;
	if (iParam0 == 24043185)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_1018(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam2 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < _0xffcc2db2d9953401(iParam0, iParam1, bParam3))
	{
		if (_0x6243635af2f1b826(iParam0, iVar0, iParam1, bParam3) == iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1019(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return true;
}

bool func_1020(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_413(iParam0, 1)])->f_10 && iParam1) != 0;
}

int func_1021(var uParam0)
{
	iVar0 = 25;
	iVar1 = 0;
	if (&uParam0->f_1[iVar0] != &Global_1946804->f_57[iVar0])
	{
		iVar1++;
	}
	iVar0 = 26;
	if (&uParam0->f_1[iVar0] != &Global_1946804->f_57[iVar0])
	{
		iVar1++;
	}
	return iVar1;
}

void func_1022(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*Global_1946804->f_1497.f_1[iParam0] = { *Global_1946804->f_1378.f_1[iParam0] };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_23() == -1)
	{
		func_1182(Global_1946804->f_1497.f_1[iParam0], iParam0, Global_26796.f_776);
	}
	else
	{
		func_1183(Global_1946804->f_1497.f_1[iParam0], iParam0, Global_36638.f_45.f_350.f_1011);
	}
}

bool func_1023(int iParam0, int iParam1)
{
	if (func_23() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			return (Global_26796.f_26[iParam1] && iParam0) != 0;
		}
		return false;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		return (Global_36638.f_45.f_350.f_26[iParam1] && iParam0) != 0;
	}
	return false;
}

int func_1024(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return 439606975;
		case 6:
			return 1661121390;
		case 7:
			return 1164374808;
		case 8:
			return 1160643979;
		case 9:
			return 624063935;
		case 10:
			return -1476781101;
		case 11:
			return 294553332;
		case 12:
			return 1788874135;
		case 15:
			return 1560492757;
		case 16:
			return -769081407;
		case 17:
			return 1902428294;
		case 18:
			return -2114499732;
		case 19:
			return 800827126;
		case 20:
			return 688004210;
		case 0:
			return 166243423;
		case 1:
			return 1383300684;
		case 2:
			return 2051441678;
		case 3:
			return 162509669;
		case 4:
			return 635948769;
		case 5:
			return 274995506;
		case 24:
			return -1826731591;
		case 25:
			return 2119049229;
		case 26:
			return 1352942778;
		case 27:
			return 1964379549;
		case 28:
			return 1201189539;
		case 21:
			return 1351927599;
		case 22:
			return 2032023096;
		case 23:
			return -291256376;
		case 66:
			return -1243402388;
		case 67:
			return 65931886;
		case 68:
			return 1371678229;
		case 69:
			return 2102263084;
		case 61:
			return -272211555;
		case 64:
			return -55563408;
		case 71:
			return -1914506115;
		case 75:
			return 802495462;
		case 77:
			return 842905332;
		case 78:
			return -1951220140;
		case 79:
			return 1511551084;
		case 81:
			return -1725704631;
		case 83:
			return 1257427489;
		case 85:
			return -659341240;
		case 87:
			return 2038771525;
		case 89:
			return -535599244;
		case 73:
			return -389591806;
		case 70:
			return -1205612021;
		case 93:
			return 890706995;
		case 90:
			return 1156438275;
		case 91:
			return -1611873049;
		case 92:
			return 594312243;
		case 94:
			return -978578725;
		case 13:
			return 1784889667;
		case 62:
			return -361635024;
		case 76:
			return 1460520700;
		case 80:
			return 523337834;
		case 82:
			return -19271249;
		case 84:
			return 214175524;
		case 86:
			return -1303643297;
		case 88:
			return 411856831;
		case 72:
			return -926815459;
		case 74:
			return -1300731953;
		case 65:
			return -409616653;
		case 29:
			return 509954990;
		case 30:
			return -445916744;
		case 31:
			return -866249154;
		case 32:
			return -2077063704;
		case 33:
			return 205207539;
		case 34:
			return -1033657275;
		case 35:
			return 1806002837;
		case 36:
			return 705324896;
		case 37:
			return -1541763703;
		case 38:
			return 387052410;
		case 39:
			return -361288914;
		case 40:
			return -911054515;
		case 41:
			return 1084200963;
		case 42:
			return 1847948074;
		case 43:
			return -1212526764;
		case 44:
			return 1851440270;
		case 45:
			return -2028985700;
		case 46:
			return 1074435214;
		case 47:
			return -883015675;
		case 48:
			return -1047155604;
		case 49:
			return 1123231221;
		case 50:
			return 1866989210;
		case 51:
			return 478183719;
		case 52:
			return -1698955868;
		case 53:
			return -2029378634;
		case 54:
			return 1339864416;
		case 55:
			return 890998115;
		case 56:
			return -1376288999;
		case 57:
			return -1041123771;
		case 58:
			return 1389254668;
		case 59:
			return -346112633;
		case 60:
			return 773309172;
		default:
			break;
	}
	return 0;
}

void func_1025(int iParam0, bool bParam1, int iParam2)
{
	func_1184(&(Global_1946804->f_1378), iParam0);
	func_1185(2, iParam0, 6);
	if (bParam1)
	{
		func_732(0, 1);
	}
}

int func_1026()
{
	return Global_1051081->f_11;
}

char* func_1027()
{
	return "unnamed";
}

int func_1028(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case -1:
			iVar0 = 16;
			break;
		case 0:
			iVar0 = 32;
			break;
		case 1:
			iVar0 = 64;
			break;
		case 2:
			iVar0 = 128;
			break;
		case 3:
			iVar0 = 256;
			break;
		case 4:
			iVar0 = 512;
			break;
		case 5:
			iVar0 = 1024;
			break;
		case 6:
			iVar0 = 2048;
			break;
		case 8:
			iVar0 = 4096;
			break;
	}
	return iVar0;
}

int func_1029(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1109400->f_1;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 25;
	}
	if (&Global_1225639->f_21[iParam0])
	{
		return (*Global_1108178)[iParam0]->f_1;
	}
	return 25;
}

bool func_1030(int iParam0)
{
	if (func_1186(iParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1225639->f_10, iParam0) != 1)
		{
			func_1187(iParam0);
		}
		return true;
	}
	return _0xfe53b1f8d43f19bf(Global_1225639->f_10, iParam0) == 1;
}

bool func_1031(var uParam0)
{
	if (*uParam0 >= 40)
	{
		return false;
	}
	return true;
}

int func_1032(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	switch (iParam2)
	{
		case 1:
			iVar9 = 281887510;
			iVar10 = -164081697;
			iVar11 = -1161319399;
			iVar12 = 728781265;
			break;
		case 2:
			iVar9 = -222563712;
			iVar10 = 1794857344;
			iVar11 = 1952409553;
			break;
		case 4:
			iVar9 = 2116770557;
			iVar10 = -651064726;
			iVar11 = -404270094;
			iVar12 = 2093126853;
			break;
		case 8:
			iVar9 = 2085530337;
			iVar10 = -150591160;
			iVar11 = -323969289;
			iVar12 = 1504361882;
			break;
		case 16:
			iVar9 = -1521783510;
			iVar10 = 1714875242;
			iVar11 = 1019229063;
			iVar12 = 927763737;
			break;
	}
	iVar1 = func_792(iVar9);
	iVar2 = func_792(iVar10);
	iVar3 = func_792(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_792(iVar12);
	}
	iVar5 = func_793(iVar9);
	iVar6 = func_793(iVar10);
	iVar7 = func_793(iVar11);
	if (iParam2 != 2)
	{
		iVar8 = func_793(iVar12);
	}
	if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam2 != 2)
	{
		if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

int func_1033(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_121(iParam0, 0))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!_item_database_fillout_acquire_cost(iParam0, iParam1, &Var0))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	if (!bParam3)
	{
	}
	*iParam2 = Var0.f_1;
	return 1;
}

void func_1034(bool bParam0)
{
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (bParam0)
	{
		_0xa0c683284df027c7(player_id(), 15, 1);
	}
	else
	{
		_0xa0c683284df027c7(player_id(), 15, 0);
		_0xa0c683284df027c7(player_id(), 1, 1);
	}
}

void func_1035(int iParam0)
{
	if (!_databinding_is_data_id_valid(Global_1955569->f_5.f_1))
	{
		return;
	}
	if (_databinding_get_array_count(Global_1955569->f_5.f_1) > iParam0)
	{
		iVar0 = _databinding_get_item_context_by_index(Global_1955569->f_5.f_1, iParam0);
		if (iVar0 == &Global_1955569->f_5.f_2[iParam0])
		{
			return;
		}
	}
	_databinding_insert_ui_item_to_list_from_context_string_alias(Global_1955569->f_5.f_1, iParam0, "pause_info_panel_list", &(Global_1955569->f_5.f_2[iParam0]));
}

void func_1036(bool bParam0)
{
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (is_entity_dead(Global_35) || is_ped_injured(Global_35))
	{
	}
	set_ped_config_flag(Global_35, 440, !bParam0);
}

void func_1037(bool bParam0)
{
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (is_entity_dead(Global_35) || is_ped_injured(Global_35))
	{
	}
	set_ped_config_flag(Global_35, 439, !bParam0);
}

void func_1038(bool bParam0)
{
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (is_entity_dead(Global_35) || is_ped_injured(Global_35))
	{
	}
	set_ped_config_flag(Global_35, 438, !bParam0);
}

void func_1039(bool bParam0)
{
	iVar0 = 398076311;
	if (bParam0)
	{
		_hide_hud_component(iVar0);
	}
	else
	{
		_display_hud_component(iVar0);
	}
}

void func_1040(bool bParam0)
{
	iVar0 = 50;
	iVar1 = player_id();
	if (bParam0)
	{
		_0x0751d461f06e41ce(iVar1, iVar0, 0, 1);
		_0x0751d461f06e41ce(iVar1, iVar0, 1, 1);
	}
	else
	{
		_0x0751d461f06e41ce(iVar1, iVar0, 0, 0);
		_0x0751d461f06e41ce(iVar1, iVar0, 1, 0);
	}
}

void func_1041(bool bParam0)
{
	iVar0 = 49;
	iVar1 = player_id();
	if (bParam0)
	{
		_0x0751d461f06e41ce(iVar1, iVar0, 0, 1);
		_0x0751d461f06e41ce(iVar1, iVar0, 1, 1);
	}
	else
	{
		_0x0751d461f06e41ce(iVar1, iVar0, 0, 0);
		_0x0751d461f06e41ce(iVar1, iVar0, 1, 0);
	}
}

int func_1042(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return &(Global_1946804->f_1497.f_1[func_413(iParam0, 1)]);
}

void func_1043()
{
	if (!_unlock_is_unlocked(-1526891582))
	{
		func_1188();
		_unlock_set_unlocked(-1526891582, true);
		func_254(-916314281);
		func_498(-916314281, 1, 752097756);
		set_current_ped_weapon(Global_35, -916314281, true, 2, false, false);
		func_254(494733111);
		func_498(494733111, 1, 752097756);
		set_current_ped_weapon(Global_35, 494733111, true, 4, false, false);
	}
}

int func_1044(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 968830139;
		case 1:
			return -649219937;
		case 2:
			return -858567048;
		case 3:
			return -718162726;
		case 4:
			return -1284282080;
		case 5:
			return -725003445;
		case 6:
			return -1445630104;
		case 7:
			return 580970876;
		case 8:
			return 967601061;
		case 9:
			return 1946030891;
		case 10:
			return -1511404982;
		case 11:
			return -944465290;
		case 12:
			return -1701098855;
		case 13:
			return 425319238;
		case 14:
			return 363594903;
		case 15:
			return -1217729597;
		case 16:
			return -1540119664;
		case 17:
			return 2100194981;
		case 18:
			return 446659922;
		case 19:
			return -390982951;
		case 20:
			return -1018798851;
		case 21:
			return -757567246;
		case 22:
			return -2054602073;
		case 23:
			return -378441099;
		case 24:
			return -585121677;
		case 25:
			return 1566949660;
		default:
			break;
	}
	return 0;
}

int func_1045(int iParam0)
{
	return func_1189(iParam0, -1);
}

bool func_1046()
{
	if (func_772())
	{
		return _get_special_edition_cash_camp_bonus_enabled();
	}
	return false;
}

void func_1047(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_1190((Global_40.f_4283.f_325 + iParam0));
}

void func_1048(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_1046())
	{
		func_577(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_577(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

bool func_1049(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

void func_1050(int iParam0)
{
	iVar0 = func_1191(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		set_bit(Global_40.f_283[iVar1], iVar2);
	}
	else
	{
		iVar3 = network_player_id_to_int();
		if (iVar3 == 255)
		{
			Global_1058888->f_40567.f_46 = 1;
			set_bit(Global_1058888->f_40567.f_14[iVar1], iVar2);
		}
		else
		{
			set_bit((*Global_1055058)[iVar3]->f_72[iVar1], iVar2);
		}
		set_bit(Global_1058888->f_40567[iVar1], iVar2);
	}
	Global_1934765 = 0;
}

void func_1051(int iParam0)
{
	iVar0 = func_1191(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		clear_bit(Global_40.f_283[iVar1], iVar2);
	}
	else
	{
		iVar3 = network_player_id_to_int();
		if (iVar3 == 255)
		{
			Global_1058888->f_40567.f_46 = 1;
			clear_bit(Global_1058888->f_40567.f_14[iVar1], iVar2);
		}
		else
		{
			clear_bit((*Global_1055058)[iVar3]->f_72[iVar1], iVar2);
		}
	}
	Global_1934765 = 0;
}

void func_1052()
{
	func_1051(-939420910);
	func_1051(-1187950766);
	func_1051(356365161);
	func_1051(753127042);
	func_1051(-2038424081);
	func_1051(1884271742);
	func_1051(459290420);
}

void func_1053()
{
	func_1051(704802028);
	func_1051(588987611);
	func_1051(2008888900);
	func_1051(1649996811);
	func_1051(227918160);
	func_1051(168171957);
	func_1051(1193080109);
	func_1051(-491981251);
	func_1051(-639037538);
	func_1051(-618620429);
}

bool func_1054(int iParam0)
{
	iVar0 = func_1191(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

bool func_1055(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

int func_1056(int iParam0)
{
	switch (iParam0)
	{
		case -1791518714:
			return 1;
		case -2087881550:
			return 2;
		case 1908068621:
			return 4;
		case 1611247019:
			return 8;
		case 1319635688:
			return 16;
		default:
			break;
	}
	return 0;
}

void func_1057(int iParam0)
{
	Global_40.f_12019.f_43 = (Global_40.f_12019.f_43 || iParam0);
}

bool func_1058(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

bool func_1059()
{
	if (Global_1572887->f_12 != -1)
	{
		return false;
	}
	return Global_1347477->f_203;
}

float func_1060()
{
	fVar0 = func_512(13);
	iVar1 = func_514(fVar0);
	if (iVar1 == 0)
	{
		return 0.15f;
	}
	if (iVar1 == 10 || iVar1 == -10)
	{
		return -0.25f;
	}
	return 0f;
}

float func_1061()
{
	if (is_ped_on_mount(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_1062()
{
	if (func_772())
	{
		if (_get_special_edition_core_stats_bonus_enabled())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_1063()
{
	if (Global_40.f_39 == 11966224)
	{
		return 0f;
	}
	if (Global_40.f_11095.f_67 >= 9)
	{
		return -0.2f;
	}
	if (Global_40.f_11095.f_67 >= 7)
	{
		return -0.05f;
	}
	return 0f;
}

float func_1064()
{
	return Global_1955565->f_3;
}

void func_1065(int iParam0, char* sParam1, bool bParam2)
{
	sVar0 = func_1081(iParam0, 1, 0, 0);
	sVar0 = _create_var_string(2, sVar0, sParam1);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[1]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[1]), bParam2);
}

void func_1066(int iParam0, float fParam1, bool bParam2)
{
	sVar0 = func_1081(iParam0, 2, 0, 0);
	sVar0 = _create_var_string(2, sVar0, round(fParam1));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[2]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[2]), bParam2);
	if (fParam1 > 100f)
	{
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_20[2]), "RPG_ARROW_DOWN");
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_24[2]), "pausemenu_player_update");
		_databinding_write_data_hash_string(&(Global_1955569->f_5.f_2[iParam0]->f_28[2]), 859817522);
		_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_32[2]), true);
	}
	else if (fParam1 < 100f)
	{
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_20[2]), "RPG_ARROW_UP");
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_24[2]), "pausemenu_player_update");
		_databinding_write_data_hash_string(&(Global_1955569->f_5.f_2[iParam0]->f_28[2]), 1105014447);
		_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_32[2]), true);
	}
	else
	{
		_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_32[2]), false);
	}
}

bool func_1067()
{
	return func_512(12) <= -99f;
}

bool func_1068()
{
	return func_512(12) >= 99f;
}

bool func_1069(int iParam0)
{
	if (!func_705(iParam0))
	{
		return false;
	}
	if (func_706(iParam0, 2))
	{
		return true;
	}
	return false;
}

void func_1070(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_705(iParam0))
	{
		return;
	}
	if (!func_1069(iParam0))
	{
		func_1072(iParam0, 2);
		if (bParam2)
		{
			if (!func_18(0, 0, 1))
			{
				func_101(1, 4);
			}
		}
		if ((!func_1071() && !bParam1) && !func_18(0, 0, 1))
		{
			func_201(_create_var_string(10, "OUT_JOURN_ADD", func_1192(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

bool func_1071()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

void func_1072(int iParam0, int iParam1)
{
	if (!func_705(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0] = (Global_40.f_7157[iParam0] || iParam1);
}

void func_1073(int iParam0, bool bParam1)
{
	iVar0 = func_1193(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_456(50);
			}
			else
			{
				func_456(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_456(51);
			}
			else
			{
				func_456(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_1194(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_479();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_479();
			}
			break;
		case 3:
			func_456(24);
			if (bParam1)
			{
				if (!func_1194(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_479();
				}
			}
			break;
	}
}

void func_1074(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_1195(0))
			{
				iVar0++;
			}
			if (func_1195(2))
			{
				iVar0++;
			}
			if (func_1195(4))
			{
				iVar0++;
			}
			if (!func_1196(16))
			{
				if (iVar0 == 1)
				{
					func_1197();
					func_63(456, 1);
					func_1198(16);
				}
			}
			if (!func_1196(32))
			{
				if (iVar0 >= 3)
				{
					func_1197();
					func_63(456, 1);
					func_1198(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_1195(1))
			{
				iVar0++;
			}
			if (func_1195(3))
			{
				iVar0++;
			}
			if (func_1195(7))
			{
				iVar0++;
			}
			if (!func_1196(1))
			{
				if (iVar0 == 1)
				{
					func_1199();
					func_63(457, 1);
					func_1198(1);
				}
			}
			if (!func_1196(2))
			{
				if (iVar0 >= 3)
				{
					func_1199();
					func_63(457, 1);
					func_1198(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_1195(5))
			{
				iVar0++;
			}
			if (func_1195(6))
			{
				iVar0++;
			}
			if (func_1195(8))
			{
				iVar0++;
			}
			if (!func_1196(4))
			{
				if (iVar0 == 1)
				{
					func_1200();
					func_63(455, 1);
					func_1198(4);
				}
			}
			if (!func_1196(8))
			{
				if (iVar0 >= 3)
				{
					func_1200();
					func_63(455, 1);
					func_1198(8);
				}
			}
			break;
	}
}

bool func_1075(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (_item_database_fillout_ui_data(iParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (is_string_null_or_empty(&(Var3.f_2[iVar0])))
			{
				Jump @230; //curOff = 56
			}
			else if (is_string_null_or_empty(Var3.f_2[iVar0]->f_1))
			{
			}
			else
			{
				iVar1 = get_hash_key(&(Var3.f_2[iVar0]));
				iVar2 = get_hash_key(Var3.f_2[iVar0]->f_1);
				if (iParam2 != 0 && Var3.f_2[iVar0]->f_2 != iParam2)
				{
					Jump @230; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @230; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @230; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = iVar1;
					uParam1->f_1 = iVar2;
					uParam1->f_2 = iParam2;
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

int func_1076()
{
	if (func_627())
	{
		return 1;
	}
	return 0;
}

void func_1077(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_1076();
	}
	switch (iParam2)
	{
		case 0:
			Global_1955569->f_753.f_15[iParam0] = iParam1;
			break;
		case 1:
			Global_1955569->f_866.f_2.f_15[iParam0] = iParam1;
			break;
		default:
			break;
	}
}

void func_1078(int iParam0, int iParam1, float fParam2)
{
	sVar0 = func_829(iParam1);
	if (!is_string_null_or_empty(sVar0))
	{
		_0x437c08db4febe2bd(iParam0, func_1201(iParam1), fParam2, -1);
	}
}

void func_1079(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	if (iParam3 == 2)
	{
		iParam3 = func_1076();
	}
	iVar0 = get_game_timer();
	func_1202(iParam0, fParam1, iParam3);
	if (bParam2)
	{
		func_1203(iParam0, iVar0, iParam3);
	}
}

bool func_1080(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_536(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_535(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_534(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_531(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_532(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_533(iParam0);
	if (iVar5 < 1 || iVar5 > func_537(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

char* func_1081(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					if (bParam2)
					{
						return "PMPLAYER_CONDITION_TEMPERATURE_FAIR";
					}
					else
					{
						return func_574(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_574(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
			}
			break;
		case 1:
		case 2:
		case 3:
			switch (iParam1)
			{
				case 0:
					return "PMPLAYER_CORE_PC_VALUE";
				case 1:
					return "PMPLAYER_TIME_VALUE_MINUTES";
				case 2:
					return "PMPLAYER_CORE_PC_VALUE";
				default:
					break;
			}
			break;
	}
	return "";
}

int func_1082(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return 0;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return 0;
	}
	if (iParam1 == iParam2)
	{
		return 1;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	if (!bVar0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	return 0;
}

bool func_1083(int iParam0)
{
	switch (func_199(iParam0))
	{
		case -2061583405:
			return true;
		case -1719060085:
			return true;
		case -999503751:
			return true;
		case -525676072:
			return true;
		case 81053684:
			return true;
		case -413129408:
			return true;
		default:
			break;
	}
	return false;
}

void func_1084(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_2377[func_413(iParam0, 1)])->f_1 = ((Global_1946804->f_2377[func_413(iParam0, 1)])->f_1 || iParam1);
}

void func_1085(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_1204(iParam0);
	if (bParam3)
	{
		func_1205(iParam0, sParam1, iParam2);
	}
}

int func_1086(int iParam0, int iParam1, int iParam2)
{
	iParam0 = func_395(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_121(iParam1, 0))
	{
		return 0;
	}
	if (!func_1206(iParam0))
	{
		return 0;
	}
	iVar0 = func_204(iParam0);
	if (is_entity_dead(iVar0))
	{
		return 0;
	}
	if (is_ped_injured(iVar0))
	{
		return 0;
	}
	if (is_ped_in_writhe(iVar0))
	{
		return 0;
	}
	iVar1 = create_itemset(true);
	find_all_attached_carriable_entities(iVar0, iVar1);
	iVar2 = get_itemset_size(iVar1);
	Var3.f_1 = 10;
	Var3.f_12 = 10;
	iVar26 = 0;
	iVar27 = 0;
	while (iVar27 < iVar2)
	{
		if (iVar26 >= iParam2)
		{
		}
		else
		{
			iVar28 = _get_entity_from_item(get_indexed_item_in_itemset(iVar27, iVar1));
			if (!func_1207(iVar28))
			{
			}
			else
			{
				_0x48e4d50f87a96aa5(get_ped_index_from_entity_index(iVar28), 1, 1, get_entity_model(iVar28), &Var3, 0);
				iVar29 = 0;
				while (iVar29 < 10)
				{
					iVar30 = &Var3.f_1[iVar29];
					if (iVar30 == iParam1)
					{
						func_498(iParam1, 1, 752097756);
						if (does_entity_exist(iVar28))
						{
							iVar31 = func_325(iVar28);
							if (!func_121(iVar31, 0))
							{
								iVar31 = func_326(iVar28);
							}
							if (func_121(iVar31, 0))
							{
								func_327(iVar31, 1, 1, -142743235, 0);
							}
							_0x0d0db2b6af19a987(&iVar28);
						}
						iVar26++;
					}
					iVar29++;
				}
			}
			iVar27++;
		}
	}
	if (is_itemset_valid(iVar1))
	{
		destroy_itemset(iVar1);
	}
	return iVar26;
}

void func_1087(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		Var2 = -1;
		Var2.f_1 = -1;
		Var2.f_2 = -1;
		Var2.f_3 = -1;
		Var2.f_4 = -1;
		Var2.f_5 = -1;
		Var2.f_6 = -1;
		Var2.f_7 = -1;
		Var2.f_8 = -1;
		iVar12 = func_372(iParam0, 1697966752);
		if (iVar12 == 0)
		{
			return;
		}
		Var2 = { func_902(-1591664384, -1591664384, 0, 235313564, 0, 0, -1, iVar12, 0) };
		if (func_1108(Var2, &iVar0, &iVar1, 0))
		{
			iVar14 = 0;
			while (iVar14 < iVar1)
			{
				if (iParam1 <= 0)
				{
				}
				else
				{
					iVar13 = func_1109(iVar14, iVar0);
					if (func_121(iVar13, 0) && iParam0 != iVar13)
					{
						iVar15 = func_124(iVar13, 0, 0);
						while (iVar15 > 0 && iParam1 > 0)
						{
							iParam1 = (iParam1 - func_1208(iVar13, iParam0));
							iVar15 = (iVar15 - 1);
						}
					}
					iVar14++;
				}
			}
			func_1110(iVar0);
		}
	}
}

int func_1088(int iParam0)
{
	if (!func_121(iParam0, 0))
	{
		return 0;
	}
	if (_is_ped_carrying(Global_35))
	{
		iVar1 = _get_first_entity_ped_is_carrying(Global_35);
		if (does_entity_exist(iVar1) && !is_entity_a_ped(iVar1))
		{
			if (iParam0 == _0x31fef6a20f00b963(iVar1))
			{
				iVar0++;
			}
		}
	}
	return iVar0;
}

void func_1089(int iParam0)
{
	if (!func_121(iParam0, 0))
	{
	}
	if (_is_ped_carrying(Global_35))
	{
		iVar0 = _get_first_entity_ped_is_carrying(Global_35);
		if (does_entity_exist(iVar0))
		{
			iVar1 = get_ped_index_from_entity_index(iVar0);
			if (is_entity_a_ped(iVar0))
			{
				iVar13 = func_1209(iVar1, &uVar2);
				iVar14 = 0;
				while (iVar14 < iVar13)
				{
					if (&uVar2[iVar14] == iParam0)
					{
						_0x0d0db2b6af19a987(&iVar0);
					}
					else
					{
						iVar14++;
					}
				}
			}
			else
			{
				func_641(iVar1, &iVar17, &uVar18, &iVar16, &uVar19);
				if (func_642(&iVar15, iVar1, iVar16, iVar17) && iVar15 == iParam0)
				{
					_0x0d0db2b6af19a987(&iVar0);
				}
			}
		}
	}
}

int func_1090(int iParam0, int iParam1)
{
	iParam0 = func_395(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_121(iParam1, 0))
	{
		return 0;
	}
	if (!func_1206(iParam0))
	{
		return 0;
	}
	iVar0 = func_204(iParam0);
	iVar1 = iParam1;
	if (is_entity_dead(iVar0))
	{
		return 0;
	}
	if (is_ped_injured(iVar0))
	{
		return 0;
	}
	if (is_ped_in_writhe(iVar0))
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		if (_0x0ceeb6f4780b1f2f(iVar0, iVar3) != iVar1)
		{
		}
		else
		{
			iVar2++;
		}
		iVar3++;
	}
	return iVar2;
}

int func_1091(int iParam0, int iParam1, int iParam2)
{
	iParam0 = func_395(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_121(iParam1, 0))
	{
		return 0;
	}
	if (!func_1206(iParam0))
	{
		return 0;
	}
	iVar0 = func_204(iParam0);
	iVar1 = iParam1;
	if (is_entity_dead(iVar0))
	{
		return 0;
	}
	if (is_ped_injured(iVar0))
	{
		return 0;
	}
	if (is_ped_in_writhe(iVar0))
	{
		return 0;
	}
	iVar2 = 0;
	iVar3 = 0;
	while (iVar3 < iParam2)
	{
		if (_0x0ceeb6f4780b1f2f(iVar0, iVar3) != iVar1)
		{
		}
		else if (func_1156(iParam1, iParam2, 1, -142743235))
		{
			iVar2++;
		}
		iVar3++;
	}
	return iVar2;
}

int func_1092(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_23() == 0)
	{
		return 0;
	}
	if (!func_121(iParam0, 0))
	{
		return 0;
	}
	if (iParam2 < 1)
	{
		return 0;
	}
	Var0 = { func_583(0) };
	Var0.f_4 = func_582(iParam1);
	Var5 = { func_346(iParam0, Var0, Var0.f_4, 0) };
	if (!func_347(iParam0, &Var5, &Var0, iParam2, iParam3, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_1093(int iParam0, int iParam1)
{
	if (!func_121(iParam0, 0))
	{
		return 0;
	}
	if (!func_321(iParam0) && !func_640(iParam0))
	{
		return 0;
	}
	Var3 = -1;
	Var3.f_1 = -1;
	Var3.f_2 = -1;
	Var3.f_3 = -1;
	Var3.f_4 = -1;
	Var3.f_5 = -1;
	Var3.f_6 = -1;
	Var3.f_7 = -1;
	Var3.f_8 = -1;
	iVar13 = func_372(iParam0, 1697966752);
	if (iVar13 == 0)
	{
		return 0;
	}
	Var3 = { func_902(-1591664384, -1591664384, 0, 235313564, 0, 0, -1, iVar13, 0) };
	if (func_1108(Var3, &iVar1, &iVar2, 0))
	{
		iVar15 = 0;
		while (iVar15 < iVar2)
		{
			iVar14 = func_1109(iVar15, iVar1);
			if (func_121(iVar14, 0) && iParam0 != iVar14)
			{
				iVar16 = func_1210(iVar14);
				if (iVar16 != 0)
				{
					if (iParam1 != 0)
					{
						iVar17 = func_1133(iVar14, iParam1);
					}
					else
					{
						iVar17 = func_124(iVar14, 0, 0);
					}
					if (iVar17 > 0)
					{
						iVar0 = (iVar0 + (iVar17 * func_1212(iVar16, func_1211(iVar14), iParam0)));
					}
				}
			}
			iVar15++;
		}
		func_1110(iVar1);
	}
	return iVar0;
}

int func_1094(int iParam0, int iParam1, int iParam2)
{
	iParam0 = func_395(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_121(iParam1, 0))
	{
		return 0;
	}
	if (!func_1206(iParam0))
	{
		return 0;
	}
	iVar0 = func_204(iParam0);
	if (is_entity_dead(iVar0))
	{
		return 0;
	}
	if (is_ped_injured(iVar0))
	{
		return 0;
	}
	if (is_ped_in_writhe(iVar0))
	{
		return 0;
	}
	iVar1 = create_itemset(true);
	find_all_attached_carriable_entities(iVar0, iVar1);
	iVar2 = get_itemset_size(iVar1);
	Var3.f_1 = 10;
	Var3.f_12 = 10;
	iVar26 = 0;
	iVar27 = 0;
	while (iVar27 < iVar2)
	{
		iVar28 = _get_entity_from_item(get_indexed_item_in_itemset(iVar27, iVar1));
		if (!func_1207(iVar28))
		{
		}
		else
		{
			_0x48e4d50f87a96aa5(get_ped_index_from_entity_index(iVar28), 1, 1, get_entity_model(iVar28), &Var3, 0);
			iVar29 = 0;
			while (iVar29 < 10)
			{
				iVar30 = &Var3.f_1[iVar29];
				if (iVar30 == iParam1)
				{
					if (!does_entity_exist(*iParam2))
					{
						*iParam2 = get_ped_index_from_entity_index(iVar28);
					}
					iVar26++;
				}
				iVar29++;
			}
		}
		iVar27++;
	}
	if (is_itemset_valid(iVar1))
	{
		destroy_itemset(iVar1);
	}
	return iVar26;
}

bool func_1095(int iParam0)
{
	if (!func_1213(iParam0))
	{
		return false;
	}
	return is_bit_set(Global_40.f_4283.f_307, func_1214(iParam0, 1));
}

void func_1096(int iParam0)
{
	if (!func_1213(iParam0))
	{
		return;
	}
	set_bit(&(Global_40.f_4283.f_307), func_1214(iParam0, 1));
}

int func_1097(var uParam0, int iParam1)
{
	Var0 = { func_902(-1591664384, -1591664384, 0, 0, iParam1, 0, -1, Global_1911914->f_1584, 0) };
	if (func_1108(Var0, &iVar10, &iVar11, 0))
	{
		iVar12 = 0;
		while (iVar12 < iVar11)
		{
			iVar13 = func_1109(iVar12, iVar10);
			if (func_121(iVar13, 0))
			{
				if (uParam0->f_55 >= 175)
				{
				}
				else
				{
					if (Global_1911914->f_1584 == 0 && func_190(iVar13, 302810039))
					{
						if (!(Global_1911914->f_1585 != 0 && func_190(iVar13, Global_1911914->f_1585)))
						{
						}
						else if (func_190(iVar13, 266762988))
						{
						}
						else
						{
							func_1215(uParam0, iVar13, iParam1);
							func_1216(uParam0, iVar13, iParam1);
						}
						iVar12++;
						func_1217(&iVar10);
						return 1;
						return 0;
					}
				}
			}
		}
	}
}

int func_1098(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1795740370;
		case 1:
			return 461149715;
		case 2:
			return 210507310;
		case 3:
			return -1182908601;
		case 4:
			return 1647118377;
		case 5:
			return -867280435;
		default:
			break;
	}
	return 0;
}

void func_1099(var uParam0, char[4] cParam1, var uParam2)
{
	*uParam0 = _databinding_add_data_container(uParam2->f_39, cParam1);
	_databinding_add_data_bool(*uParam0, "visible", false);
	_databinding_add_data_string(*uParam0, "texture", "");
	_databinding_add_data_string(*uParam0, "textureDictionary", "inventory_items");
	_databinding_add_data_int(*uParam0, "count", 3);
	_databinding_add_data_int(*uParam0, "enabled", 1);
	_databinding_add_data_bool(*uParam0, "inUse", false);
}

void func_1100(var uParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	iVar0 = (*Global_1911914)[iParam2]->f_6;
	if (bParam4 || func_259(iVar0, uParam0->f_52))
	{
		if (bParam1)
		{
			if (_databinding_is_data_id_valid((*Global_1911914)[iParam2]->f_1))
			{
				if (bParam5)
				{
					func_1101(uParam0, -1, bParam3, (*Global_1911914)[iParam2]->f_1, 1, 0, 1);
				}
				_databinding_insert_ui_item_to_list_from_context_hash_alias(uParam0->f_40, uParam0->f_56, -2047994727, (*Global_1911914)[iParam2]->f_1);
			}
			else
			{
				func_1218(uParam0, iParam2, bParam1, bParam3);
			}
		}
		else
		{
			if (_databinding_is_data_id_valid((*Global_1911914)[iParam2]->f_1))
			{
				_databinding_remove_data_entry((*Global_1911914)[iParam2]->f_1);
			}
			func_1218(uParam0, iParam2, 0, bParam3);
		}
		if (uParam0->f_56 == 0)
		{
			uParam0->f_75 = (*Global_1911914)[iParam2]->f_6;
			uParam0->f_76 = (*Global_1911914)[iParam2]->f_5;
			uParam0->f_74 = (*Global_1911914)[iParam2]->f_1;
		}
		uParam0->f_56++;
	}
}

void func_1101(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (_databinding_is_data_id_valid(iParam3))
	{
		iParam1 = _databinding_read_data_int_from_parent(iParam3, "iIndex");
	}
	iVar0 = (*Global_1911914)[iParam1]->f_1;
	if (!_databinding_is_data_id_valid(iVar0))
	{
		return;
	}
	iVar1 = _databinding_read_data_int_from_parent(iVar0, "eOutputItem");
	iVar2 = _databinding_read_data_int_from_parent(iVar0, "eCost");
	iVar3 = iVar1;
	iVar4 = iVar2;
	iVar5 = func_858(iVar3, iVar4, bParam2, 0);
	iVar6 = func_124(iVar3, 0, 0);
	iVar7 = func_857(iVar3, 0);
	if (iVar7 != -1)
	{
		iVar7 = (iVar7 - iVar6);
	}
	else
	{
		iVar7 = iVar5;
	}
	StringIntConCat(&cVar8, func_859(iVar7, iVar5), 8);
	_databinding_write_data_string_from_parent(iVar0, "count", &cVar8);
	_databinding_write_data_bool_from_parent(iVar0, "visible", 0);
	if (func_56(4096))
	{
		iVar9 = func_844(((iVar7 > 0 && iVar5 > 0) && func_372(iVar3, 1697966752) == 337650881), 1, 0);
	}
	else if (func_56(8192))
	{
		iVar9 = func_844(((iVar7 > 0 && iVar5 > 0) && iVar3 == 1831763320), 1, 0);
	}
	else
	{
		iVar9 = func_844((iVar7 > 0 && iVar5 > 0), 1, 0);
	}
	bVar10 = false;
	if (iVar9 == 0 && func_1219(iVar3))
	{
		if (func_1220(iVar3, iVar4, uParam0, bParam2, &iVar11, &iVar12, &iVar13))
		{
			iVar9 = 1;
			bVar10 = true;
			if (bParam6)
			{
				iVar3 = iVar11;
				iVar4 = iVar12;
				_databinding_write_data_hash_string_from_parent(iVar0, "name", iVar11);
				_databinding_write_data_int_from_parent(iVar0, "eOutputItem", iVar11);
				_databinding_write_data_int_from_parent(iVar0, "eCost", iVar12);
				_databinding_write_data_int_from_parent(iVar0, "iCurCostVariant", iVar13);
				bParam5 = true;
			}
		}
	}
	if (!uParam0->f_31)
	{
		if ((iVar4 == -214678071 || iVar4 == 278772510) || _databinding_read_data_bool_from_parent(iVar0, "bFireCrafting"))
		{
			iVar9 = 0;
		}
	}
	else if (!uParam0->f_32 && iVar4 == 278772510)
	{
		iVar9 = 0;
	}
	if (!Global_1911914->f_1579 && func_918(iVar3, iVar4, 1))
	{
		iVar9 = 0;
		iVar14 = 1;
	}
	_databinding_write_data_bool_from_parent(iVar0, "lockVisible", iVar14);
	if (iVar9 == 1)
	{
		if ((!uParam0->f_83 || uParam0->f_84 > 0) && func_372(iVar3, -1636519629) == -701492487)
		{
			(*Global_1911914)[iParam1]->f_2 = 0;
			iVar9 = 0;
		}
		else
		{
			(*Global_1911914)[iParam1]->f_2 = 1;
		}
	}
	else
	{
		if (((uParam0->f_57 && iVar9 == 0) && (*Global_1911914)[iParam1]->f_2) && bParam4)
		{
			_databinding_remove_binding_array_item_by_data_context_id(uParam0->f_40, iVar0);
		}
		(*Global_1911914)[iParam1]->f_2 = 0;
	}
	if (bParam5)
	{
		if (func_575(iVar3, &Var15, 805880880, 0, 0, 0))
		{
			_databinding_write_data_string_from_parent(iVar0, "texture", Var15);
			_databinding_write_data_string_from_parent(iVar0, "textureDictionary", Var15.f_1);
		}
		_databinding_write_data_hash_string_from_parent(iVar0, "name", iVar3);
		Var18.f_1 = 20;
		iVar40 = 0;
		_databinding_write_data_hash_string_from_parent(iVar0, "deadeyeCoreDurationCategory", 0);
		_databinding_write_data_hash_string_from_parent(iVar0, "deadeyeDurationCategory", 0);
		_databinding_write_data_hash_string_from_parent(iVar0, "healthDurationCategory", 0);
		_databinding_write_data_hash_string_from_parent(iVar0, "healthCoreDurationCategory", 0);
		_databinding_write_data_hash_string_from_parent(iVar0, "staminaCoreDurationCategory", 0);
		_databinding_write_data_hash_string_from_parent(iVar0, "staminaDurationCategory", 0);
		_databinding_write_data_hash_string_from_parent(iVar0, "healthHorseDurationCategory", 0);
		_databinding_write_data_hash_string_from_parent(iVar0, "healthCoreHorseDurationCategory", 0);
		_databinding_write_data_hash_string_from_parent(iVar0, "staminaCoreHorseDurationCategory", 0);
		_databinding_write_data_hash_string_from_parent(iVar0, "staminaHorseDurationCategory", 0);
		if (_item_database_fillout_item_effects_ids(iVar3, &Var18))
		{
			iVar41 = 0;
			while (iVar41 < Var18)
			{
				if (_item_database_fillout_item_effects_id_info(&(Var18.f_1[iVar41]), &Var42))
				{
					iVar49 = Var42.f_2;
					switch (Var42.f_1)
					{
						case -1104847406:
							_databinding_write_data_int_from_parent(iVar0, "deadeye", iVar49);
							break;
						case 1857353317:
							_databinding_write_data_int_from_parent(iVar0, "deadeyeCore", iVar49);
							break;
						case -826379728:
							iVar40 = 1;
							_databinding_write_data_int_from_parent(iVar0, "deadeyeCore", 12);
							_databinding_write_data_hash_string_from_parent(iVar0, "deadeyeCoreDurationCategory", Var42.f_6);
							break;
						case 1342237631:
							iVar40 = 1;
							_databinding_write_data_int_from_parent(iVar0, "deadeye", 11);
							_databinding_write_data_hash_string_from_parent(iVar0, "deadeyeDurationCategory", Var42.f_6);
							break;
						case -943921969:
							_databinding_write_data_int_from_parent(iVar0, "health", iVar49);
							break;
						case -416929031:
							_databinding_write_data_int_from_parent(iVar0, "healthCore", iVar49);
							break;
						case 1869697234:
							iVar40 = 1;
							_databinding_write_data_int_from_parent(iVar0, "health", 11);
							_databinding_write_data_hash_string_from_parent(iVar0, "healthDurationCategory", Var42.f_6);
							break;
						case 2062242710:
							iVar40 = 1;
							_databinding_write_data_int_from_parent(iVar0, "healthCore", 12);
							_databinding_write_data_hash_string_from_parent(iVar0, "healthCoreDurationCategory", Var42.f_6);
							break;
						case 381158954:
							_databinding_write_data_int_from_parent(iVar0, "stamina", iVar49);
							break;
						case 1681823811:
							_databinding_write_data_int_from_parent(iVar0, "staminaCore", iVar49);
							break;
						case -1191740624:
							iVar40 = 1;
							_databinding_write_data_int_from_parent(iVar0, "staminaCore", 12);
							_databinding_write_data_hash_string_from_parent(iVar0, "staminaCoreDurationCategory", Var42.f_6);
							break;
						case -1240225157:
							iVar40 = 1;
							_databinding_write_data_int_from_parent(iVar0, "stamina", 11);
							_databinding_write_data_hash_string_from_parent(iVar0, "staminaDurationCategory", Var42.f_6);
							break;
						case 978049229:
							_databinding_write_data_int_from_parent(iVar0, "healthHorse", iVar49);
							break;
						case -778289619:
							iVar40 = 1;
							_databinding_write_data_int_from_parent(iVar0, "healthHorse", 11);
							_databinding_write_data_hash_string_from_parent(iVar0, "healthHorseDurationCategory", Var42.f_6);
							break;
						case -1918697215:
							_databinding_write_data_int_from_parent(iVar0, "healthCoreHorse", iVar49);
							break;
						case 1136630075:
							iVar40 = 1;
							_databinding_write_data_int_from_parent(iVar0, "healthCoreHorse", 12);
							_databinding_write_data_hash_string_from_parent(iVar0, "healthCoreHorseDurationCategory", Var42.f_6);
							break;
						case 855745648:
							_databinding_write_data_int_from_parent(iVar0, "staminaCoreHorse", iVar49);
							break;
						case 1365603835:
							iVar40 = 1;
							_databinding_write_data_int_from_parent(iVar0, "staminaCoreHorse", 12);
							_databinding_write_data_hash_string_from_parent(iVar0, "staminaCoreHorseDurationCategory", Var42.f_6);
							break;
						case 1497139093:
							iVar40 = 1;
							_databinding_write_data_int_from_parent(iVar0, "staminaHorse", 11);
							_databinding_write_data_hash_string_from_parent(iVar0, "staminaHorseDurationCategory", Var42.f_6);
							break;
					}
				}
				iVar41++;
			}
		}
		_databinding_write_data_bool_from_parent(iVar0, "overpower", iVar40);
	}
	if (!uParam0->f_31)
	{
		if (_databinding_read_data_bool_from_parent(iVar0, "bFireCrafting"))
		{
			iVar9 = 0;
		}
	}
	if (bVar10 && !bParam6)
	{
		iVar9 = 0;
	}
	_databinding_write_data_int_from_parent(iVar0, "enabled", iVar9);
}

int func_1102(int iParam0)
{
	if (!is_ped_injured(iParam0))
	{
		return get_mount(iParam0);
	}
	return 0;
}

char* func_1103(var uParam0)
{
	return "MECH_INVENTORY@CRAFTING@FALLBACKS@IN_HAND@MALE_A";
}

char* func_1104(var uParam0)
{
	return "craft_trans_stow";
}

int func_1105(int iParam0)
{
	Var0.f_2 = 5;
	Var0.f_18 = 8;
	if (_item_database_fillout_ui_data(iParam0, &Var0))
	{
		return Var0.f_1;
	}
	return 0;
}

void func_1106(var uParam0)
{
	if (func_190(uParam0->f_77, 1147021565) && !func_190(uParam0->f_77, 1919582297))
	{
		if (func_259(uParam0->f_77, 5))
		{
			_0x7e2c766adb2c5f1a(uParam0->f_77, 2);
			_databinding_write_data_bool_from_parent(uParam0->f_39, "ShowRpgHorse", 1);
			_databinding_write_data_bool_from_parent(uParam0->f_39, "ShowRpgPlayer", 0);
		}
		else
		{
			_0x7e2c766adb2c5f1a(uParam0->f_77, 1);
			_databinding_write_data_bool_from_parent(uParam0->f_39, "ShowRpgHorse", 0);
			_databinding_write_data_bool_from_parent(uParam0->f_39, "ShowRpgPlayer", 1);
		}
	}
	else
	{
		_0xd962f8579d702db5();
		_databinding_write_data_bool_from_parent(uParam0->f_39, "ShowRpgHorse", 0);
		_databinding_write_data_bool_from_parent(uParam0->f_39, "ShowRpgPlayer", 0);
	}
}

bool func_1107(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	bVar34 = !bParam4;
	_databinding_clear_binding_array(uParam2->f_51);
	iVar33 = 0;
	while (iVar33 < 4)
	{
		_databinding_remove_binding_array_item_by_data_context_id(uParam2->f_51, &(uParam2->f_46[iVar33]));
		_databinding_write_data_bool_from_parent(&(uParam2->f_41[iVar33]), "visible", 0);
		_databinding_write_data_bool_from_parent(&(uParam2->f_41[iVar33]), "inUse", 0);
		iVar33++;
	}
	if (!bParam4 && func_903(iParam0, iParam1, &Var0, &iVar32, 1, 0))
	{
		bVar35 = func_551();
		iVar33 = 0;
		while (iVar33 < iVar32)
		{
			if (iVar33 >= 4)
			{
			}
			else
			{
				iVar31 = &Var0[iVar33];
				if (func_121(iVar31, 0))
				{
					_databinding_write_data_bool_from_parent(&(uParam2->f_41[iVar33]), "visible", 1);
					if (func_575(iVar31, &Var36, 805880880, 0, 0, 0))
					{
						_databinding_write_data_string_from_parent(&(uParam2->f_41[iVar33]), "texture", Var36);
						_databinding_write_data_string_from_parent(&(uParam2->f_41[iVar33]), "textureDictionary", Var36.f_1);
					}
					iVar39 = func_124(iVar31, 0, 0);
					if (func_321(iVar31) || func_640(iVar31))
					{
						if (bVar35)
						{
							iVar41 = 0;
							iVar39 = (iVar39 + func_1094(7, iVar31, &iVar41));
						}
						iVar39 = (iVar39 + func_1093(iVar31, 0));
					}
					bVar40 = iVar39 >= Var0[iVar33]->f_1;
					_databinding_write_data_int_from_parent(&(uParam2->f_41[iVar33]), "count", iVar39);
					_databinding_write_data_int_from_parent(&(uParam2->f_41[iVar33]), "enabled", func_844(bVar40, 1, 0));
					_databinding_write_data_bool_from_parent(&(uParam2->f_41[iVar33]), "inUse", 1);
					if (!bVar40)
					{
						bVar34 = false;
					}
					sVar42 = _create_var_string(10, "CRFT_ING_LIST", _create_var_string(0, &(Var0[iVar33])), Var0[iVar33]->f_1);
					StringCopy(&cVar43, "Text", 16);
					_databinding_write_data_string_from_parent(&(uParam2->f_46[iVar33]), &cVar43, sVar42);
					StringCopy(&cVar43, "Enabled", 16);
					_databinding_write_data_int_from_parent(&(uParam2->f_46[iVar33]), &cVar43, func_844(bVar40, 1, 0));
					_databinding_insert_ui_item_to_list_from_context_hash_alias(uParam2->f_51, -1, 309940639, &(uParam2->f_46[iVar33]));
				}
				iVar33++;
			}
		}
	}
	if (bVar34)
	{
		if (!uParam2->f_31 && ((uParam2->f_80 || uParam2->f_78 == -214678071) || uParam2->f_78 == 278772510))
		{
			bVar34 = false;
			if (func_317(iParam0))
			{
				_databinding_write_data_string_from_parent(uParam2->f_39, "tipText", _create_var_string(2, "CRFT_ING_FIRE_CK"));
			}
			else
			{
				_databinding_write_data_string_from_parent(uParam2->f_39, "tipText", _create_var_string(2, "CRFT_ING_FIRE"));
			}
		}
		else if (!uParam2->f_32 && uParam2->f_78 == 278772510)
		{
			bVar34 = false;
			_databinding_write_data_string_from_parent(uParam2->f_39, "tipText", _create_var_string(2, "CRFT_ING_GRLL_CK"));
		}
		else
		{
			iVar45 = func_124(iParam0, 0, 0);
			iVar46 = func_857(iParam0, 0);
			if ((iVar46 - iVar45) > 0 || iVar46 == -1)
			{
				iVar47 = func_372(iParam0, -1636519629);
				if (!uParam2->f_83 && iVar47 == -701492487)
				{
					bVar34 = false;
					_databinding_write_data_string_from_parent(uParam2->f_39, "tipText", _create_var_string(2, "CRFT_ING_PERC"));
				}
				else if (iVar47 == -701492487 && uParam2->f_84 > 0)
				{
					bVar34 = false;
					_databinding_write_data_string_from_parent(uParam2->f_39, "tipText", _create_var_string(2, "CRFT_PERC_FULL"));
				}
				else if (does_entity_exist(iParam3))
				{
					_databinding_write_data_string_from_parent(uParam2->f_39, "tipText", _create_var_string(34, "CRFT_BREAK", 1, _create_var_string(0, _0x0139637a3bff8b6d(iParam3, &uVar48))));
				}
				else
				{
					iVar49 = func_858(iParam0, uParam2->f_78, func_551(), 0);
					if (uParam2->f_78 == -214678071)
					{
						if (_databinding_read_data_int_from_parent(uParam2->f_73, "iNumCostVariants") <= 1 && _databinding_read_data_bool_from_parent(uParam2->f_39, "ShowRpgDescription"))
						{
							_databinding_write_data_string_from_parent(uParam2->f_39, "tipText", _create_var_string(2, "CAMP_MEAT_POOR"));
						}
						else
						{
							_databinding_write_data_string_from_parent(uParam2->f_39, "tipText", _create_var_string(2, "COOK_ING_HAVE", iVar49));
						}
					}
					else if (uParam2->f_78 == 278772510)
					{
						_databinding_write_data_string_from_parent(uParam2->f_39, "tipText", _create_var_string(2, "COOK_ING_HAVE", iVar49));
					}
					else if (iVar47 == -701492487)
					{
						if (iVar49 == 1)
						{
							_databinding_write_data_string_from_parent(uParam2->f_39, "tipText", _create_var_string(2, "BREW_ING_HAVE1", iVar49));
						}
						else
						{
							_databinding_write_data_string_from_parent(uParam2->f_39, "tipText", _create_var_string(2, "BREW_ING_HAVE", iVar49));
						}
					}
					else
					{
						_databinding_write_data_string_from_parent(uParam2->f_39, "tipText", _create_var_string(2, "CRFT_ING_HAVE", iVar49));
					}
				}
			}
			else
			{
				_databinding_write_data_string_from_parent(uParam2->f_39, "tipText", _create_var_string(130, "CRFT_ING_MAX", iVar45, iVar46, _create_var_string(0, iParam0)));
				bVar34 = false;
			}
		}
	}
	else if (bParam4)
	{
		_databinding_write_data_string_from_parent(uParam2->f_39, "tipText", _create_var_string(2, "CRFT_ING_LOCK"));
	}
	else if (!uParam2->f_31 && ((uParam2->f_80 || uParam2->f_78 == -214678071) || uParam2->f_78 == 278772510))
	{
		bVar34 = false;
		if (func_317(iParam0))
		{
			_databinding_write_data_string_from_parent(uParam2->f_39, "tipText", _create_var_string(2, "CRFT_ING_FIRE_CK"));
		}
		else
		{
			_databinding_write_data_string_from_parent(uParam2->f_39, "tipText", _create_var_string(2, "CRFT_ING_FIRE"));
		}
	}
	else if (!uParam2->f_32 && uParam2->f_78 == 278772510)
	{
		bVar34 = false;
		_databinding_write_data_string_from_parent(uParam2->f_39, "tipText", _create_var_string(2, "CRFT_ING_GRLL_CK"));
	}
	else
	{
		_databinding_write_data_string_from_parent(uParam2->f_39, "tipText", _create_var_string(2, "CRFT_ING_NEED"));
	}
	return bVar34;
}

bool func_1108(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = _item_database_create_item_collection(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_1109(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= _0xd389a2549c4efb30(iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	if (!_0x8750f69a720c2e41(iParam1, iParam0, &iVar0))
	{
		return 0;
	}
	return iVar0;
}

int func_1110(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!_0xcbb7b6edfa933ade(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_1111(var uParam0)
{
	_databinding_write_data_bool_from_parent(uParam0->f_39, "ShowRpgHorse", 0);
	_databinding_write_data_bool_from_parent(uParam0->f_39, "ShowRpgPlayer", 0);
}

void func_1112(var uParam0)
{
	iVar0 = _databinding_read_data_int_from_parent(uParam0->f_39, "filterIndex");
	uParam0->f_52 = iVar0;
	_databinding_write_data_hash_string_from_parent(uParam0->f_39, "filter", func_1098(uParam0->f_52));
}

int func_1113(int iParam0)
{
	iVar0 = _get_weapon_type_from_ammo_type(iParam0);
	if (_is_weapon_pistol(iVar0))
	{
		return -236347221;
	}
	else if (_is_weapon_revolver(iVar0))
	{
		return 1537403900;
	}
	else if (_is_weapon_rifle(iVar0))
	{
		return 809653548;
	}
	else if (_is_weapon_repeater(iVar0))
	{
		return 975914773;
	}
	else if (_is_weapon_shotgun(iVar0))
	{
		return -91245513;
	}
	return 0;
}

Vector3 func_1114(int iParam0)
{
	iVar0 = _get_weapon_type_from_ammo_type(iParam0);
	if (_is_weapon_pistol(iVar0))
	{
		return 0f, 0f, 0f;
	}
	else if (_is_weapon_revolver(iVar0))
	{
		return -0.005f, 0f, 0f;
	}
	else if (_is_weapon_rifle(iVar0))
	{
		return -0.03f, 0f, 0f;
	}
	else if (_is_weapon_repeater(iVar0))
	{
		return 0.005f, 0f, 0f;
	}
	else if (_is_weapon_shotgun(iVar0))
	{
		return 0f, 0f, 0f;
	}
	return 0f, 0f, 0f;
}

int func_1115(struct<4> Param0, int iParam4, bool bParam5)
{
	iVar0 = -1;
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_617(Param0, &Var1, 1, 0))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam4)
	{
		return iVar0;
	}
	iVar15 = func_122(Var1.f_4);
	if (iVar15 == -1784221369)
	{
		Var16 = { func_1221(Param0, 1) };
		Var16.f_10 = iParam4;
		iVar0 = func_1222(-1230526146, &Var16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -1037537535)
	{
		Var44 = { func_1223(Param0, 1) };
		Var44.f_10 = iParam4;
		iVar0 = func_1224(-1230526146, &Var44, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var61 = { func_1225(&Var1) };
		Var61.f_10 = iParam4;
		iVar0 = func_299(-1230526146, &Var61, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

bool func_1116(int iParam0, int iParam1)
{
	if (iParam0 != 0)
	{
		iVar5 = func_199(iParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_892(iParam0);
			iVar0 = 0;
			while (iVar0 < iVar6)
			{
				if (_item_database_get_has_slot_info(iVar5, iVar0, &iVar1))
				{
					iVar4 = iVar1;
					if (iVar4 == iParam1)
					{
						return true;
					}
				}
				iVar0++;
			}
		}
	}
	return false;
}

int func_1117(int iParam0)
{
	if (!func_121(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_199(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return _item_database_get_fits_slot_count(iVar0);
}

void func_1118(int iParam0, int iParam1, var uParam2, int iParam3)
{
	if (*uParam2 < 15)
	{
		return;
	}
	else if (iParam3 > *uParam2 || iParam3 < 1)
	{
		return;
	}
	Var7.f_1 = 10;
	if (!_item_database_get_item_price_modifiers(iParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		Var21[iVar0] = uParam2[iVar0];
		Var21[iVar0]->f_1 = 1f;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Var7)
	{
		uVar6 = &Var7.f_1[iVar1];
		iVar4 = _item_database_get_number_of_modified_prices(uVar6);
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (_item_database_get_modified_price(uVar6, iVar2) != iParam1)
			{
			}
			else
			{
				iVar5 = _item_database_get_number_of_modifiers(uVar6);
				iVar3 = 0;
				while (iVar3 < iVar5)
				{
					if (!_item_database_fillout_modifier(uVar6, iVar3, &Var19))
					{
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < iParam3)
						{
							if (&Var21[iVar0] == Var19)
							{
								Var21[iVar0]->f_1 = (Var21[iVar0]->f_1 - Var19.f_1);
							}
							else
							{
								iVar0++;
							}
						}
					}
					iVar3++;
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (Var21[iVar0]->f_1 != 1f)
		{
			(*uParam2)[iVar0]->f_1 = floor((IntToFloat((*uParam2)[iVar0]->f_1) * (Var21[iVar0]->f_1 / 1f)));
		}
		iVar0++;
	}
}

int func_1119(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 0:
			return 0;
		case 1:
			return 50;
		case 2:
			return 100;
		case 3:
			return 200;
		case 4:
			return 350;
		case 5:
			return 550;
		case 6:
			return 800;
		case 7:
			return 1100;
		default:
			break;
	}
	return 0;
}

bool func_1120(int iParam0, int iParam1)
{
	return false;
}

bool func_1121()
{
	return false;
}

int func_1122(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return _0xe787f05dfc977bde(func_86(0), -1845241476, 0);
		case 1:
			return _0xe787f05dfc977bde(func_86(0), 1654063339, 0);
		case 2:
			return _0xe787f05dfc977bde(func_86(0), 1623931083, 0);
	}
	return 0;
}

struct<4> func_1123(int iParam0, int iParam1)
{
	if (iParam0 >= 10)
	{
		iParam1 = 0;
	}
	StringCopy(&cVar0, "TOAST_RPG_LEVEL_", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	StringConCat(&cVar0, "_", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	return cVar0;
}

char* func_1124(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

char* func_1125(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "health";
		case 0:
			return "stamina";
		case 2:
			return "dead_eye_level_up";
		default:
			break;
	}
	return "";
}

char* func_1126(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "RPG_STAMINA";
		case 0:
			return "RPG_HEALTH";
		case 2:
			return "RPG_DEADEYE";
		default:
			break;
	}
	return "";
}

int func_1127(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 444492752;
		case 0:
			return 1874233471;
		case 2:
			return -1285232277;
		default:
			break;
	}
	return 0;
}

int func_1128(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 3;
		default:
			break;
	}
	return 0;
}

int func_1129(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1896546861;
		case 1:
			return 304419444;
		case 2:
			return 1497019382;
		default:
			break;
	}
	return 0;
}

bool func_1130(int iParam0, int iParam1, var uParam2, int iParam3)
{
	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_121(iParam0, 0))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!_item_database_fillout_acquire_cost(iParam0, iParam1, &Var0))
	{
		return false;
	}
	*iParam3 = Var0.f_35;
	iVar47 = 0;
	while (iVar47 < Var0.f_35)
	{
		(*uParam2)[iVar47] = &Var0.f_36[iVar47];
		iVar47++;
	}
	return true;
}

bool func_1131(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return iParam0 <= func_1226(1);
}

bool func_1132(int iParam0)
{
	return false;
}

int func_1133(int iParam0, int iParam1)
{
	if (!func_121(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_583(0) };
	Var0.f_4 = func_582(iParam1);
	Var5 = { func_346(iParam0, Var0, Var0.f_4, 0) };
	if (!_0xb881ca836cc4b6d4(&Var5))
	{
		return 0;
	}
	uVar9 = _0xc97e0d2302382211(func_86(0), &Var5, 0);
	return uVar9;
}

bool func_1134(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_1135()
{
	return Global_1109400->f_245;
}

void func_1136(var uParam0, int iParam1, struct<15> Param2)
{
	if (!func_1147(uParam0))
	{
		return;
	}
	if (&Global_1224424 < 20)
	{
		Global_1224424 = &Global_1224424 + 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*Global_1224424->f_1[iVar0] = { *(Global_1224424->f_1[iVar0 + 1]) };
			iVar0++;
		}
	}
	Var1.f_7.f_1 = 10;
	Var1.f_7.f_14 = 255;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_7 = { Param2 };
	Var1.f_6 = 1;
	*(Global_1224424->f_1[(&Global_1224424 - 1)]) = { Var1 };
}

bool func_1137(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 6:
		case 7:
		case 8:
			return false;
	}
	return true;
}

bool func_1138(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return true;
	}
	return false;
}

Vector3 func_1139(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return -2578.509f, 389.3037f, 148.3825f;
	}
	return (*Global_1888801)[iParam0]->f_15;
}

float func_1140()
{
	switch (Global_40.f_4283)
	{
		case 2:
		case 6:
		case 7:
		case 8:
			return 70f;
	}
	return 25f;
}

int func_1141(int iParam0)
{
	if (!func_119(iParam0))
	{
		return 0;
	}
	return func_1227(func_280(iParam0));
}

bool func_1142(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!bParam1 && func_1228(iParam0, bParam2, iParam3))
	{
		return true;
	}
	return false;
}

bool func_1143(int iParam0, int iParam1)
{
	if (iParam1 != -1)
	{
		return false;
	}
	if (func_1229(iParam0))
	{
		switch (iParam0)
		{
			case 14:
			case 34:
				return false;
		}
	}
	switch (iParam0)
	{
		case 5:
		case 8:
		case 10:
		case 12:
		case 13:
		case 14:
		case 18:
		case 21:
		case 27:
		case 28:
		case 29:
		case 34:
		case 40:
		case 41:
		case 44:
		case 46:
		case 48:
		case 51:
		case 54:
		case 55:
		case 63:
			return true;
	}
	return false;
}

bool func_1144(int iParam0)
{
	return func_1230(iParam0);
}

bool func_1145(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!bParam1 && func_932(iParam0, bParam2, iParam3))
	{
		return true;
	}
	return false;
}

int func_1146(int iParam0)
{
	if (!func_119(iParam0))
	{
		return -1;
	}
	return func_1231(iParam0);
}

bool func_1147(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

void func_1148(int iParam0)
{
	if (!is_entity_a_ped(iParam0))
	{
		return;
	}
	iVar0 = get_ped_index_from_entity_index(iParam0);
	iVar1 = 878851736;
	iVar2 = Global_40.f_4283;
	if (func_1232(get_entity_model(iVar0), iVar2))
	{
		iVar1 = -1708424762;
	}
	else
	{
		func_1209(get_ped_index_from_entity_index(iParam0), &uVar3);
		iVar15 = 0;
		while (iVar15 < 10)
		{
			if (!func_121(&(uVar3[iVar15]), 0))
			{
			}
			else if (!func_1233(&(uVar3[iVar15])))
			{
			}
			else
			{
				iVar14 = func_1234(&(uVar3[iVar15]), iVar2);
				if (func_1235(iVar14, iVar1))
				{
					iVar1 = iVar14;
				}
			}
			iVar15++;
		}
	}
	func_1236(&iVar1);
	if (func_1235(iVar1, Global_1357549->f_1492))
	{
		Global_1357549->f_1492 = iVar1;
	}
}

struct<4> func_1149(int iParam0, int iParam1)
{
	Var0 = { func_1237(iParam0) };
	return func_1238(iParam0, iParam1, Var0, Var0.f_4);
}

bool func_1150(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	iVar0 = func_1151(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

int func_1151(int iParam0)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!does_entity_exist(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iParam0 == Global_1900383[iVar0])
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1152(int iParam0, int iParam1, int iParam2)
{
	iParam0 = func_395(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_1239(iParam1);
	iVar1 = func_1240(iVar0, 1);
	Global_40.f_1095.f_1[iParam0]->f_298[iVar1] = (&Global_40.f_1095.f_1[iParam0]->f_298[iVar1] - iParam2);
	Global_40.f_1095.f_1[iParam0]->f_298[iVar1] = func_598(&(Global_40.f_1095.f_1[iParam0]->f_298[iVar1]), 0, 10);
}

int func_1153(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!func_121(iParam1, 0))
	{
		return 0;
	}
	bVar0 = iParam4 == 562618531;
	bVar1 = iParam4 == 1992602754;
	bVar2 = iParam4 == -1387038764;
	if (!func_1241(iParam0, iParam1, 1))
	{
		return 0;
	}
	Var3 = { func_436(iParam1) };
	if (_stat_id_is_valid(&Var3))
	{
		if ((func_944(iParam0, iParam1) - iParam2) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var3, iParam2);
		}
		else if ((func_944(iParam0, iParam1) - iParam2) < 0)
		{
			func_1153(iParam0, iParam1, func_124(iParam1, 0, 0), bParam3, iParam4);
			return 0;
		}
	}
	if (!func_1242(iParam0, iParam1, iParam2, iParam4, bParam3))
	{
		return 0;
	}
	if (!func_98(0))
	{
		bParam3 = true;
	}
	if (!bParam3 && iParam1 != 1309979101)
	{
		func_256(iParam1, -iParam2, bVar0, bVar1, bVar2);
	}
	return 1;
}

int func_1154(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -2059726619;
		case 1:
			return -1569450319;
		case 2:
			return 854596618;
		case 3:
			return -150200864;
		case 4:
			return 2109269555;
		case 5:
			return 2116849039;
		case 6:
			return 1248540072;
		case 7:
			return -1858513856;
		case 8:
			return -868657362;
		case 9:
			return 1603936352;
		case 10:
			return -702790226;
		case 11:
			return -888740979;
		case 12:
			return 459744337;
		case 13:
			return 1914602340;
		case 14:
			return -1791452194;
		case 15:
			return 1528935719;
		case 16:
			return 1150939141;
		case 17:
			return -1558096473;
		case 18:
			return -794277189;
		case 19:
			return -1517904196;
		case 20:
			return -1827027577;
		case 21:
			return -662178186;
		case 22:
			return -1035515486;
		case 23:
			return 238733925;
		case 24:
			return 1647012424;
		case 25:
			return 500722008;
		case 26:
			return 1642484975;
		case 27:
			return 1710714415;
		case 28:
			return 699990316;
		case 29:
			return -1648383828;
		case 30:
			return -1379330323;
		case 31:
			return -99092070;
		case 32:
			return 1963510418;
		case 33:
			return 2047376405;
		case 34:
			return -395646254;
		case 35:
			return 1584468323;
		case 36:
			return 1969175294;
		case 37:
			return 657906142;
		case 38:
			return -57190831;
		case 39:
			return -308965548;
		case 40:
			return -1102272634;
		case 41:
			return 554578289;
		case 42:
			return -983605026;
		case 43:
			return -1544126829;
		case 44:
			return -103050851;
		case 45:
			return -476045512;
		case 46:
			return 1796037447;
		case 47:
			return 1795984405;
		case 48:
			return -734947450;
		case 49:
			return -1317365569;
		case 50:
			return 1729948479;
		case 51:
			return 1466150167;
		case 52:
			return 1145777975;
		case 53:
			return 85441452;
		case 54:
			return 653400939;
		case 55:
			return 552246565;
		case 56:
			return 0;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

void func_1155(int iParam0, int iParam1)
{
	if (func_23() == -1)
	{
		iVar0 = func_204(7);
	}
	else
	{
		iVar0 = _0xf49f14462f0ae27c(player_id());
	}
	func_947(iVar0, iParam0, iParam1);
}

bool func_1156(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!func_121(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_583(0) };
	Var0.f_4 = 724026534;
	Var5 = { func_346(iParam0, Var0, Var0.f_4, 0) };
	return func_347(iParam0, &Var5, &Var0, iParam1, iParam3, bParam2, 0);
}

int func_1157()
{
	return -1;
}

float func_1158(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return -1f;
	}
	return func_1003(Global_35, iParam0, bParam1, bParam2);
}

int func_1159(vector3 vParam0, bool bParam3)
{
	iVar1 = -1;
	fVar2 = 1E+08f;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (!bParam3 || func_1243(iVar0))
		{
			fVar3 = func_1244(iVar0, vParam0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_1160(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_1245((*Global_1835011)[iParam0]->f_1);
}

Vector3 func_1161(int iParam0)
{
	return func_1246(iParam0);
}

Vector3 func_1162(int iParam0)
{
	if (!func_117(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { 0f, 0f, 0f };
	if (func_1247(iParam0, &vVar0))
	{
		(*Global_1347702)[iParam0]->f_24 = { vVar0 };
	}
	return (*Global_1347702)[iParam0]->f_24;
}

bool func_1163(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_1164(int iParam0)
{
	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 = (iParam0 && (iParam0 - 1));
		iVar0++;
	}
	return iVar0;
}

bool func_1165(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

bool func_1166(int iParam0)
{
	switch (iParam0)
	{
		case 444160793:
			return true;
		case -1969404854:
			return true;
		case 1761263432:
			return true;
		case -843795569:
			return true;
		case -832850511:
			return true;
		case -1464585113:
			return true;
		case -1290897778:
			return true;
		case -100913452:
			return true;
		case 313332607:
			return true;
		case -124539232:
			return true;
		case 59384454:
			return true;
		case 905173572:
			return true;
		case 1432949803:
			return true;
		case -983831788:
			return true;
		case -1882344824:
			return true;
		default:
			break;
	}
	return false;
}

int func_1167(int iParam0)
{
	switch (iParam0)
	{
		case -1866642239:
			return 1;
		case -935543049:
			return 1;
		case 102446365:
			return 1;
		case 924882045:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1168(int iParam0)
{
	Var1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_1248(&iVar0, 0, iVar95, &Var1) && !func_1248(&iVar0, 1, iVar95, &Var1))
		{
		}
		else if (is_model_a_ped(Var1))
		{
			func_1249(iVar0, &Var1);
			if (func_121(Var1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

bool func_1169(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_998(iParam0))
		{
			return false;
		}
	}
	if (Global_1572887->f_12 != -1)
	{
		return (Global_36638[iParam0] && iParam1) != 0;
	}
	return (Global_40.f_9274[iParam0] && iParam1) != 0;
}

bool func_1170(int iParam0)
{
	if (!func_998(iParam0))
	{
		return false;
	}
	return func_1169(iParam0, 2, 1);
}

int func_1171(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 9:
		case 10:
		case 14:
		case 17:
		case 21:
		case 22:
		case 24:
		case 25:
		case 30:
		case 32:
		case 35:
		case 36:
			return 1;
		default:
			return 0;
	}
	return 0;
}

void func_1172(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			func_63(210, 0);
			break;
		case 16:
			func_63(211, 0);
			break;
		case 33:
			func_63(212, 0);
			break;
		case 42:
			func_63(213, 0);
			break;
		case 2:
			func_63(214, 0);
			break;
		case 3:
			func_63(215, 0);
			break;
		case 43:
			func_63(216, 0);
			break;
		case 15:
			func_63(217, 0);
			break;
		case 23:
			func_63(218, 0);
			break;
		case 37:
			func_63(219, 0);
			break;
		case 26:
			func_63(220, 0);
			break;
		case 13:
			func_63(221, 0);
			break;
		case 19:
			func_63(222, 0);
			break;
		case 34:
			func_63(223, 0);
			break;
		case 38:
			func_63(224, 0);
			break;
		case 40:
			func_63(225, 0);
			break;
		case 7:
			func_63(226, 0);
			break;
		case 20:
			func_63(227, 0);
			break;
		case 18:
			func_63(228, 0);
			break;
		case 6:
			func_63(229, 0);
			break;
		case 29:
			func_63(230, 0);
			break;
		case 39:
			func_63(231, 0);
			break;
		case 11:
			break;
		case 4:
			func_63(233, 0);
			break;
		case 8:
			func_63(234, 0);
			break;
		case 28:
			func_63(235, 0);
			break;
		case 31:
			func_63(236, 0);
			break;
		case 12:
			func_63(237, 0);
			break;
		case 27:
			func_63(238, 0);
			break;
		case 41:
			func_63(239, 0);
			break;
	}
}

void func_1173(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 1:
			if (bParam1 == 1)
			{
				func_353(1849379570, 0);
			}
			else
			{
				func_353(961286348, 0);
			}
			break;
		case 2:
			if (bParam1 == 1)
			{
				func_353(-837750081, 0);
			}
			else
			{
				func_353(340939753, 0);
			}
			break;
		case 3:
			if (bParam1 == 1)
			{
				func_353(-342875345, 0);
			}
			else
			{
				func_353(-1349311606, 0);
			}
			break;
		case 4:
			if (bParam1 == 1)
			{
				func_353(-1083564345, 0);
			}
			else
			{
				func_353(833225684, 0);
			}
			break;
		case 5:
			if (bParam1 == 1)
			{
				func_353(-363984637, 0);
			}
			else
			{
				func_353(1254542371, 0);
			}
			break;
		case 6:
			if (bParam1 == 1)
			{
				func_353(205335377, 0);
			}
			else
			{
				func_353(637367741, 0);
			}
			break;
		case 11:
			if (bParam1 == 1)
			{
				func_353(-1389317844, 0);
			}
			else
			{
				func_353(-556895345, 0);
			}
			break;
		case 7:
			if (bParam1 == 1)
			{
				func_353(-1907629529, 0);
			}
			else
			{
				func_353(1599606732, 0);
			}
			break;
		case 39:
			if (bParam1 == 1)
			{
				func_353(240007023, 0);
			}
			else
			{
				func_353(-1520210138, 0);
			}
			break;
		case 8:
			if (bParam1 == 1)
			{
				func_353(1312152388, 0);
			}
			else
			{
				func_353(-9418953, 0);
			}
			break;
		case 9:
			if (bParam1 == 1)
			{
				func_353(545314598, 0);
			}
			else
			{
				func_353(1529839790, 0);
			}
			break;
		case 10:
			if (bParam1 == 1)
			{
				func_353(1230485961, 0);
			}
			else
			{
				func_353(-1579920715, 0);
			}
			break;
		case 12:
			if (bParam1 == 1)
			{
				func_353(-201902289, 0);
			}
			else
			{
				func_353(1415616009, 0);
			}
			break;
		case 13:
			if (bParam1 == 1)
			{
				func_353(-564622057, 0);
			}
			else
			{
				func_353(-1442109431, 0);
			}
			break;
		case 14:
			if (bParam1 == 1)
			{
				func_353(-1303190422, 0);
			}
			else
			{
				func_353(-1299326860, 0);
			}
			break;
		case 15:
			if (bParam1 == 1)
			{
				func_353(-88060354, 0);
			}
			else
			{
				func_353(-366222423, 0);
			}
			break;
		case 40:
			if (bParam1 == 1)
			{
				func_353(1312248008, 0);
			}
			else
			{
				func_353(621868532, 0);
			}
			break;
		case 17:
			if (bParam1 == 1)
			{
				func_353(428446588, 0);
			}
			else
			{
				func_353(-1730302202, 0);
			}
			break;
		case 18:
			if (bParam1 == 1)
			{
				func_353(37692363, 0);
			}
			else
			{
				func_353(629404512, 0);
			}
			break;
		case 16:
			if (bParam1 == 1)
			{
				func_353(877023893, 0);
			}
			else
			{
				func_353(122486811, 0);
			}
			break;
		case 19:
			if (bParam1 == 1)
			{
				func_353(-706642783, 0);
			}
			else
			{
				func_353(621155065, 0);
			}
			break;
		case 20:
			if (bParam1 == 1)
			{
				func_353(-918250703, 0);
			}
			else
			{
				func_353(1945953943, 0);
			}
			break;
		case 21:
			if (bParam1 == 1)
			{
				func_353(722815515, 0);
			}
			else
			{
				func_353(-80758135, 0);
			}
			break;
		case 22:
			if (bParam1 == 1)
			{
				func_353(1053305061, 0);
			}
			else
			{
				func_353(1789349782, 0);
			}
			break;
		case 23:
			if (bParam1 == 1)
			{
				func_353(1024520106, 0);
			}
			else
			{
				func_353(1105521253, 0);
			}
			break;
		case 41:
			if (bParam1 == 1)
			{
				func_353(1140872184, 0);
			}
			else
			{
				func_353(-237709193, 0);
			}
			break;
		case 24:
			if (bParam1 == 1)
			{
				func_353(-1590595690, 0);
			}
			else
			{
				func_353(1836601784, 0);
			}
			break;
		case 25:
			if (bParam1 == 1)
			{
				func_353(1164380735, 0);
			}
			else
			{
				func_353(-1984992129, 0);
			}
			break;
		case 26:
			if (bParam1 == 1)
			{
				func_353(301696279, 0);
			}
			else
			{
				func_353(152181092, 0);
			}
			break;
		case 27:
			if (bParam1 == 1)
			{
				func_353(-415970359, 0);
			}
			else
			{
				func_353(839837681, 0);
			}
			break;
		case 28:
			if (bParam1 == 1)
			{
				func_353(1669531798, 0);
			}
			else
			{
				func_353(1602454819, 0);
			}
			break;
		case 29:
			if (bParam1 == 1)
			{
				func_353(-977383775, 0);
			}
			else
			{
				func_353(-1875435665, 0);
			}
			break;
		case 30:
			if (bParam1 == 1)
			{
				func_353(1183317680, 0);
			}
			else
			{
				func_353(-247145433, 0);
			}
			break;
		case 31:
			if (bParam1 == 1)
			{
				func_353(667332266, 0);
			}
			else
			{
				func_353(-368365640, 0);
			}
			break;
		case 33:
			if (bParam1 == 1)
			{
				func_353(-1578905205, 0);
			}
			else
			{
				func_353(946087658, 0);
			}
			break;
		case 32:
			if (bParam1 == 1)
			{
				func_353(-448931053, 0);
			}
			else
			{
				func_353(-421010414, 0);
			}
			break;
		case 34:
			if (bParam1 == 1)
			{
				func_353(-1162930163, 0);
			}
			else
			{
				func_353(-1228311530, 0);
			}
			break;
		case 35:
			if (bParam1 == 1)
			{
				func_353(1004123602, 0);
			}
			else
			{
				func_353(1321329534, 0);
			}
			break;
		case 36:
			if (bParam1 == 1)
			{
				func_353(281748406, 0);
			}
			else
			{
				func_353(-173822042, 0);
			}
			break;
		case 37:
			if (bParam1 == 1)
			{
				func_353(-1351305881, 0);
			}
			else
			{
				func_353(-1650817073, 0);
			}
			break;
		case 38:
			if (bParam1 == 1)
			{
				func_353(-1644190131, 0);
			}
			else
			{
				func_353(844678349, 0);
			}
			break;
		case 42:
			if (bParam1 == 1)
			{
				func_353(-926127573, 0);
			}
			else
			{
				func_353(-1260559150, 0);
			}
			break;
		case 43:
			if (bParam1 == 1)
			{
				func_353(758690400, 0);
			}
			else
			{
				func_353(1430679359, 0);
			}
			break;
		default:
			break;
	}
}

int func_1174()
{
	return Global_1946804->f_1497;
}

void func_1175(int iParam0, var uParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = uParam1;
}

void func_1176(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (_0x93ffd92f05ec32fd(uParam0->f_3.f_1))
	{
		func_1250(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = func_413(func_591(iParam1), 1);
		if (uParam0->f_1 == -1)
		{
		}
	}
	else
	{
		uParam0->f_1 = iParam2;
	}
	uParam0->f_2 = iParam4;
	*uParam0 = iParam1;
	uParam0->f_3 = 0;
	if (bParam3)
	{
		func_1251(uParam0);
	}
}

int func_1177(int iParam0, var uParam1)
{
	iVar1 = iParam0;
	if (!func_725(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_199(iParam0) != -999503751)
		{
			func_1252(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_199(iParam0) != -999503751)
	{
		func_1252(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_1007(iParam0, 1);
	return 1;
}

bool func_1178(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1179(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_1180(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1181(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_1182(var uParam0, int iParam1, int iParam2)
{
	*Global_26796.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_1183(var uParam0, int iParam1, int iParam2)
{
	*Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_1184(var uParam0, int iParam1)
{
	if (func_23() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		Global_26796.f_26[iParam1]->f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_1182(uParam0->f_1[iVar0], iVar0, iParam1);
			iVar0++;
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	Global_36638.f_45.f_350.f_26[iParam1]->f_1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		func_1183(uParam0->f_1[iVar0], iVar0, iParam1);
		iVar0++;
	}
}

void func_1185(int iParam0, int iParam1, int iParam2)
{
	if (func_23() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			Global_26796.f_26[iParam1] = (Global_26796.f_26[iParam1] || iParam0);
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		Global_36638.f_45.f_350.f_26[iParam1] = (Global_36638.f_45.f_350.f_26[iParam1] || iParam0);
	}
}

bool func_1186(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1058888->f_49111), iParam0))
	{
		return true;
	}
	return false;
}

void func_1187(int iParam0)
{
	if (func_1253() != 0 || func_23() != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (!&Global_1225639->f_21[iVar0])
	{
		func_1254(iParam0);
		return;
	}
	if (&Global_1058888->f_42357.f_1[iVar0] == 1)
	{
		return;
	}
	func_1255(iVar0);
	_0x51951de06c0d1c40(iParam0, 1);
	Global_1058888->f_42357.f_1[iVar0] = 1;
}

void func_1188()
{
	if (!_0x7c7e4ab748ea3b07())
	{
		return;
	}
	uVar0 = 29;
	func_1256(Global_35, &uVar0);
	Var30 = { func_583(0) };
	_0xe36d4a38d28d9cfb(0);
	_0xc04f47d488ef9eba(5, 1, &Var30, 0);
	_0x5d6182f3bce1333b(5, -142743235);
	func_1257(0);
	func_1258(7);
	func_409(-1623728698, 1, 1, 0);
	if (func_729() == 1160113249)
	{
		func_409(-763730846, 1, 1, 1);
		func_409(-361635024, 1, 1, 1);
	}
	func_1259(Global_35, &uVar0);
}

int func_1189(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = func_86(0);
	}
	if (!_0x112bca290d2eb53c(iParam1, iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5))
	{
		return -15;
	}
	func_845(&uVar6, iVar0);
	func_846(&uVar6, iVar1);
	func_847(&uVar6, iVar2);
	func_848(&uVar6, iVar3);
	func_849(&uVar6, iVar4);
	func_850(&uVar6, iVar5);
	return uVar6;
}

void func_1190(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_523(1356759001) };
	stat_id_set_int(&Var0, iParam0, true);
}

int func_1191(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2106445152:
			return 292;
		case -2106214197:
			return 104;
		case -2101264851:
			return 195;
		case -2073072369:
			return 59;
		case -2069570138:
			return 25;
		case -2066272360:
			return 357;
		case -2058120606:
			return 197;
		case -2038424081:
			return 49;
		case -2034257789:
			return 92;
		case -2022369555:
			return 265;
		case -2021582629:
			return 112;
		case -2020023971:
			return 278;
		case -1957523409:
			return 208;
		case -1952856164:
			return 165;
		case -1949204933:
			return 276;
		case -1925798111:
			return 41;
		case -1861414976:
			return 353;
		case -1852605133:
			return 10;
		case -1847672446:
			return 376;
		case -1840704908:
			return 289;
		case -1838712533:
			return 26;
		case -1838352012:
			return 57;
		case -1835851517:
			return 56;
		case -1831552326:
			return 123;
		case -1825294305:
			return 266;
		case -1824738758:
			return 277;
		case -1818850842:
			return 253;
		case -1799960545:
			return 257;
		case -1764522338:
			return 372;
		case -1763509974:
			return 141;
		case -1741667789:
			return 64;
		case -1738165526:
			return 3;
		case -1718674470:
			return 23;
		case -1717960576:
			return 61;
		case -1711895055:
			return 13;
		case -1706438978:
			return 233;
		case -1700452710:
			return 53;
		case -1674179981:
			return 55;
		case -1666278201:
			return 33;
		case -1612662716:
			return 201;
		case -1610966108:
			return 322;
		case -1582926490:
			return 146;
		case -1579419919:
			return 147;
		case -1558439474:
			return 301;
		case -1556423728:
			return 218;
		case -1532284567:
			return 116;
		case -1530132748:
			return 311;
		case -1524512402:
			return 209;
		case -1523910291:
			return 155;
		case -1455998786:
			return 338;
		case -1447311849:
			return 215;
		case -1436021162:
			return 172;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case -1419919497:
			return 22;
		case -1414537028:
			return 73;
		case -1405998267:
			return 105;
		case -1344601768:
			return 314;
		case -1340339190:
			return 331;
		case -1329135070:
			return 140;
		case -1318987693:
			return 222;
		case -1311865656:
			return 37;
		case -1296807958:
			return 320;
		case -1283202000:
			return 321;
		case -1282804314:
			return 270;
		case -1278074582:
			return 171;
		case -1271608261:
			return 98;
		case -1257057567:
			return 21;
		case -1241340344:
			return 300;
		case -1236261996:
			return 235;
		case -1232809834:
			return 113;
		case -1230112817:
			return 170;
		case -1223121209:
			return 126;
		case -1215445344:
			return 131;
		case -1209597203:
			return 333;
		case -1206122982:
			return 156;
		case -1187950766:
			return 45;
		case -1179948750:
			return 136;
		case -1170496998:
			return 46;
		case -1164215952:
			return 234;
		case -1151084372:
			return 124;
		case -1145519186:
			return 100;
		case -1124061431:
			return 242;
		case -1123615607:
			return 29;
		case -1080627546:
			return 378;
		case -1077783786:
			return 194;
		case -1063147448:
			return 151;
		case -1062490780:
			return 79;
		case -1060078174:
			return 239;
		case -1056767524:
			return 176;
		case -1053549743:
			return 58;
		case -1029225159:
			return 106;
		case -1014145132:
			return 288;
		case -978957786:
			return 251;
		case -959357075:
			return 36;
		case -950054349:
			return 152;
		case -939420910:
			return 44;
		case -939114198:
			return 221;
		case -919512195:
			return 40;
		case -911126844:
			return 336;
		case -897750037:
			return 334;
		case -895073533:
			return 356;
		case -879507474:
			return 236;
		case -868076593:
			return 84;
		case -857964358:
			return 83;
		case -853383233:
			return 65;
		case -851626677:
			return 339;
		case -828139293:
			return 260;
		case -811637947:
			return 245;
		case -796902762:
			return 88;
		case -792853067:
			return 254;
		case -789397228:
			return 262;
		case -785605431:
			return 250;
		case -781631220:
			return 345;
		case -764163380:
			return 228;
		case -748969569:
			return 78;
		case -741351766:
			return 60;
		case -736853952:
			return 366;
		case -734416508:
			return 340;
		case -699277634:
			return 4;
		case -693828600:
			return 323;
		case -683458244:
			return 80;
		case -666014935:
			return 157;
		case -664512648:
			return 67;
		case -664252410:
			return 191;
		case -644722288:
			return 261;
		case -640663440:
			return 214;
		case -639037538:
			return 185;
		case -628542779:
			return 71;
		case -622554983:
			return 370;
		case -618620429:
			return 187;
		case -545450213:
			return 377;
		case -538889627:
			return 175;
		case -538880323:
			return 174;
		case -534215902:
			return 130;
		case -524787708:
			return 352;
		case -524145696:
			return 117;
		case -523522517:
			return 364;
		case -515561750:
			return 238;
		case -503955743:
			return 249;
		case -502473159:
			return 343;
		case -502324015:
			return 8;
		case -491981251:
			return 186;
		case -468693731:
			return 111;
		case -464836488:
			return 268;
		case -460024530:
			return 316;
		case -434590080:
			return 225;
		case -404698347:
			return 205;
		case -397760715:
			return 143;
		case -389056691:
			return 272;
		case -360036154:
			return 368;
		case -356975260:
			return 103;
		case -355531636:
			return 337;
		case -351362068:
			return 220;
		case -350863510:
			return 162;
		case -349064220:
			return 362;
		case -334729750:
			return 69;
		case -333135263:
			return 361;
		case -330120947:
			return 360;
		case -306246697:
			return 375;
		case -299522880:
			return 213;
		case -270094635:
			return 267;
		case -261141318:
			return 30;
		case -259123672:
			return 244;
		case -254562075:
			return 132;
		case -238080464:
			return 121;
		case -233743613:
			return 273;
		case -223469678:
			return 204;
		case -220282381:
			return 139;
		case -191424539:
			return 149;
		case -182889087:
			return 177;
		case -154581735:
			return 309;
		case -150493654:
			return 97;
		case -144653976:
			return 219;
		case -129643890:
			return 11;
		case -108780030:
			return 317;
		case -108307814:
			return 28;
		case -99303535:
			return 167;
		case -86199844:
			return 145;
		case -80522843:
			return 154;
		case -76237062:
			return 373;
		case -75024673:
			return 258;
		case -63926460:
			return 89;
		case -61411516:
			return 325;
		case -35658630:
			return 24;
		case -25901845:
			return 290;
		case -9438024:
			return 129;
		case -1:
			return 0;
		case 0:
			return 1;
		case 2639906:
			return 153;
		case 8924991:
			return 297;
		case 26054262:
			return 248;
		case 26245360:
			return 237;
		case 38162571:
			return 74;
		case 52706132:
			return 243;
		case 54073871:
			return 76;
		case 74872959:
			return 348;
		case 93964309:
			return 358;
		case 94263042:
			return 291;
		case 106479759:
			return 101;
		case 141950038:
			return 114;
		case 153152452:
			return 86;
		case 168171957:
			return 183;
		case 171107021:
			return 381;
		case 171499483:
			return 283;
		case 187862543:
			return 16;
		case 192515737:
			return 14;
		case 198200492:
			return 241;
		case 210001842:
			return 62;
		case 224551212:
			return 142;
		case 227918160:
			return 182;
		case 229371495:
			return 344;
		case 235928616:
			return 286;
		case 249726958:
			return 164;
		case 269047710:
			return 54;
		case 273461605:
			return 81;
		case 280705402:
			return 95;
		case 282809459:
			return 119;
		case 299694527:
			return 275;
		case 300221584:
			return 138;
		case 302205488:
			return 216;
		case 311708813:
			return 198;
		case 320943355:
			return 133;
		case 330026330:
			return 66;
		case 345808947:
			return 287;
		case 356365161:
			return 47;
		case 371850993:
			return 281;
		case 373691918:
			return 188;
		case 374115931:
			return 90;
		case 405586984:
			return 34;
		case 407136781:
			return 173;
		case 409602249:
			return 293;
		case 417081698:
			return 17;
		case 417525590:
			return 303;
		case 420709909:
			return 42;
		case 426191476:
			return 15;
		case 434558613:
			return 199;
		case 439465264:
			return 108;
		case 440043364:
			return 31;
		case 442317566:
			return 302;
		case 449774763:
			return 227;
		case 459290420:
			return 52;
		case 469053995:
			return 231;
		case 473295046:
			return 2;
		case 476714362:
			return 232;
		case 478884033:
			return 148;
		case 479419429:
			return 305;
		case 509781469:
			return 350;
		case 514932331:
			return 246;
		case 522677506:
			return 279;
		case 526003171:
			return 355;
		case 527226204:
			return 159;
		case 544152906:
			return 115;
		case 559573222:
			return 252;
		case 582380806:
			return 326;
		case 588987611:
			return 179;
		case 618699440:
			return 77;
		case 630808005:
			return 128;
		case 651395116:
			return 294;
		case 657241756:
			return 189;
		case 664571177:
			return 312;
		case 665676602:
			return 296;
		case 682839815:
			return 327;
		case 689024866:
			return 134;
		case 689930684:
			return 207;
		case 704802028:
			return 178;
		case 723021499:
			return 264;
		case 747514327:
			return 354;
		case 753127042:
			return 48;
		case 757752139:
			return 109;
		case 784360470:
			return 330;
		case 791041526:
			return 18;
		case 817925178:
			return 240;
		case 868326136:
			return 285;
		case 885203519:
			return 379;
		case 885378256:
			return 351;
		case 929582877:
			return 335;
		case 931649776:
			return 224;
		case 932909855:
			return 298;
		case 945612176:
			return 247;
		case 965986934:
			return 19;
		case 976539083:
			return 310;
		case 1010885152:
			return 7;
		case 1015669983:
			return 122;
		case 1050128548:
			return 284;
		case 1064154891:
			return 110;
		case 1067254646:
			return 319;
		case 1074873669:
			return 144;
		case 1140218954:
			return 27;
		case 1151197909:
			return 256;
		case 1159471771:
			return 329;
		case 1160698568:
			return 135;
		case 1164928979:
			return 158;
		case 1166612791:
			return 347;
		case 1167397384:
			return 307;
		case 1177464213:
			return 38;
		case 1186594126:
			return 230;
		case 1193080109:
			return 184;
		case 1203043430:
			return 274;
		case 1205826474:
			return 85;
		case 1207048789:
			return 169;
		case 1213993593:
			return 160;
		case 1216784232:
			return 269;
		case 1221801385:
			return 374;
		case 1238086793:
			return 313;
		case 1250636944:
			return 259;
		case 1302228510:
			return 315;
		case 1306158345:
			return 202;
		case 1321892118:
			return 324;
		case 1350371763:
			return 20;
		case 1350391819:
			return 75;
		case 1352699670:
			return 271;
		case 1358491857:
			return 263;
		case 1360745816:
			return 82;
		case 1376646519:
			return 223;
		case 1399676951:
			return 210;
		case 1410198831:
			return 217;
		case 1433244935:
			return 166;
		case 1441416901:
			return 211;
		case 1446719356:
			return 380;
		case 1453909576:
			return 125;
		case 1466547629:
			return 120;
		case 1478132521:
			return 367;
		case 1485195808:
			return 50;
		case 1485494263:
			return 102;
		case 1488286867:
			return 295;
		case 1488453464:
			return 212;
		case 1497516462:
			return 5;
		case 1500064347:
			return 72;
		case 1509509592:
			return 35;
		case 1512816328:
			return 168;
		case 1517904467:
			return 206;
		case 1522511407:
			return 280;
		case 1549124796:
			return 342;
		case 1557082963:
			return 163;
		case 1582370975:
			return 359;
		case 1583012985:
			return 304;
		case 1591451572:
			return 365;
		case 1607768502:
			return 9;
		case 1609506757:
			return 107;
		case 1626481264:
			return 118;
		case 1643531967:
			return 127;
		case 1649996811:
			return 181;
		case 1660024373:
			return 150;
		case 1665756137:
			return 93;
		case 1672143046:
			return 383;
		case 1691618738:
			return 68;
		case 1698972798:
			return 318;
		case 1703398561:
			return 332;
		case 1703426636:
			return 43;
		case 1708045337:
			return 346;
		case 1713221411:
			return 137;
		case 1743048395:
			return 226;
		case 1744443559:
			return 349;
		case 1766284049:
			return 94;
		case 1776302352:
			return 363;
		case 1804403874:
			return 382;
		case 1822001510:
			return 200;
		case 1846061697:
			return 99;
		case 1850082804:
			return 196;
		case 1867912207:
			return 70;
		case 1884271742:
			return 51;
		case 1926308480:
			return 96;
		case 1932172605:
			return 328;
		case 1944170089:
			return 161;
		case 1947931439:
			return 229;
		case 1952610440:
			return 203;
		case 1954026328:
			return 371;
		case 1982676972:
			return 91;
		case 2008888900:
			return 180;
		case 2016141805:
			return 6;
		case 2019386373:
			return 190;
		case 2024121624:
			return 193;
		case 2024383613:
			return 369;
		case 2024769126:
			return 308;
		case 2037589949:
			return 63;
		case 2051822093:
			return 299;
		case 2077022393:
			return 306;
		case 2080210939:
			return 282;
		case 2091701359:
			return 39;
		case 2109952320:
			return 192;
		case 2113625508:
			return 341;
		case 2127577956:
			return 255;
		case 2136753624:
			return 87;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

char* func_1192(int iParam0)
{
	iVar0 = func_1024(iParam0);
	if (iVar0 == 0)
	{
		return "OUT_UNKNOWN";
	}
	return func_989(iVar0);
}

int func_1193(int iParam0)
{
	if (func_1260(iParam0))
	{
		iVar0 = 0;
	}
	else if (func_1261(iParam0))
	{
		iVar0 = 1;
	}
	else if (func_1262(iParam0))
	{
		iVar0 = 2;
	}
	else if (func_1263(iParam0))
	{
		iVar0 = 3;
	}
	return iVar0;
}

bool func_1194(int iParam0)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_25(func_1264(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 > 1)
	{
		return true;
	}
	return false;
}

bool func_1195(int iParam0)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_25(func_1265(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= 4)
	{
		return true;
	}
	return false;
}

bool func_1196(int iParam0)
{
	return (Global_40.f_12003 && iParam0) != 0;
}

void func_1197()
{
	if (func_23() != -1)
	{
		return;
	}
	func_498(1654063339, 1, 752097756);
	iVar0 = func_587(1);
	func_912(1, iVar0, 0);
}

void func_1198(int iParam0)
{
	Global_40.f_12003 = (Global_40.f_12003 || iParam0);
}

void func_1199()
{
	if (func_23() != -1)
	{
		return;
	}
	func_498(1623931083, 1, 752097756);
	iVar0 = func_587(2);
	func_912(2, iVar0, 0);
}

void func_1200()
{
	if (func_23() != -1)
	{
		return;
	}
	func_498(-1845241476, 1, 752097756);
	iVar0 = func_587(0);
	func_912(0, iVar0, 0);
}

char* func_1201(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "isLowHealthCoreActive";
		case 1:
			return "isLowStaminaCoreActive";
		case 2:
			return "isLowDeadEyeCoreActive";
		default:
			break;
	}
	return "";
}

void func_1202(int iParam0, float fParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_1076();
	}
	switch (iParam2)
	{
		case 0:
			Global_1955569->f_753.f_5[iParam0] = fParam1;
			break;
		case 1:
			Global_1955569->f_866.f_2.f_5[iParam0] = fParam1;
			break;
		default:
			break;
	}
}

void func_1203(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_1076();
	}
	switch (iParam2)
	{
		case 0:
			Global_1955569->f_753.f_15[iParam0]->f_2 = iParam1;
			break;
		case 1:
			Global_1955569->f_866.f_2.f_15[iParam0]->f_2 = iParam1;
			break;
		default:
			break;
	}
}

void func_1204(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_1226(1) < iParam0)
	{
		iParam0 = func_1226(1);
	}
	_money_decrement_cash_balance(iParam0);
	Var0 = { func_523(1644987397) };
	_0xbd861ae8a5181ed7(&Var0, iParam0);
}

void func_1205(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_577(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

bool func_1206(int iParam0)
{
	iParam0 = func_395(iParam0);
	if (iParam0 <= -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (does_entity_exist(Global_1900383[iParam0]))
	{
		return true;
	}
	return false;
}

bool func_1207(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!is_entity_a_ped(iParam0))
	{
		return false;
	}
	iVar0 = get_ped_index_from_entity_index(iParam0);
	if (!_0x9a100f1cf4546629(iVar0))
	{
		return false;
	}
	if (_0xf8b48a361dc388ae(iVar0) == 2)
	{
		return false;
	}
	if (_0x8de41e9902e85756(iParam0))
	{
		return false;
	}
	if (_0xcdc25355c0d65963(iParam0))
	{
		return false;
	}
	return true;
}

int func_1208(int iParam0, int iParam1)
{
	iVar0 = -1;
	iVar1 = 1;
	iVar2 = 0;
	iVar1 = func_1211(iParam0);
	iVar2 = func_1210(iParam0);
	if (iVar2 != 0)
	{
		func_226(iParam0, 1, 1, -142743235, 0);
		iVar0 = func_1266(iVar2, iVar1, iParam0, iParam1);
	}
	return iVar0;
}

int func_1209(int iParam0, var uParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (!_0x9a100f1cf4546629(iParam0) && !_0xc346a546612c49a9(iParam0))
	{
		return 0;
	}
	func_641(iParam0, &iVar1, &uVar2, &iVar0, &uVar3);
	uVar4 = _0x6b89faa36fc909a3(uParam1, iParam0, iVar0, iVar1);
	return uVar4;
}

int func_1210(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case -151356522:
		case 1006434513:
			iVar0 = -2116748615;
			break;
		case 306916738:
		case 1481288777:
			iVar0 = 1493541632;
			break;
		case -1824685471:
		case 724563284:
			iVar0 = 264156159;
			break;
		case 803930024:
		case 1917027383:
			iVar0 = 1538187374;
			break;
		case -855052577:
		case 1111663869:
			iVar0 = -300867788;
			break;
		case -5376850:
		case 1425358430:
			iVar0 = 122748261;
			break;
		case 1297433586:
		case 1338219162:
			iVar0 = -711779521;
			break;
		case -1538397860:
		case -293259613:
			iVar0 = -1553593715;
			break;
		case 193037129:
		case 588902637:
			iVar0 = 697075200;
			break;
		case -861419347:
		case 1416872916:
			iVar0 = 706485280;
			break;
		case 357567274:
		case 1500919793:
			iVar0 = 513249462;
			break;
		case 683583793:
		case 1042542561:
			iVar0 = 1520661;
			break;
		case -1202625002:
		case 56657913:
			iVar0 = 1860580756;
			break;
		case 485620834:
		case 1570826681:
			iVar0 = 41707457;
			break;
		case 727522818:
		case 785407605:
			iVar0 = 490159652;
			break;
		case -1457420231:
		case 563848610:
		case 1432949803:
			iVar0 = 674267496;
			break;
		case -2120099592:
		case -983831788:
		case 1848456619:
			iVar0 = 1582986780;
			break;
		case -1882344824:
		case -1640704323:
		case -1134447619:
			iVar0 = -930822792;
			break;
		case -1969404854:
		case 183958842:
		case 1948158930:
			iVar0 = 1784941179;
			break;
		case -1323780599:
		case -532099639:
		case 905173572:
			iVar0 = -292997097;
			break;
		case -1586332975:
		case -832850511:
		case 1857501916:
			iVar0 = -1550768676;
			break;
		case -1888757291:
		case 894877715:
		case 995863399:
			iVar0 = -2037578922;
			break;
		case -1905834457:
		case -110353515:
		case 59384454:
			iVar0 = 98537260;
			break;
		case -1464585113:
		case -610456424:
		case -284151822:
			iVar0 = -1302821723;
			break;
		case -1956973834:
		case -738999731:
		case 566023444:
			iVar0 = 1746830155;
			break;
		case -1999212658:
		case -593435395:
		case -245335326:
			iVar0 = 111281960;
			break;
		case -1726572562:
		case -1017987135:
		case 2058475216:
			iVar0 = 2105463796;
			break;
		case -1909348309:
		case -1788506246:
		case 1761263432:
			iVar0 = 989669666;
			break;
		case -1290897778:
		case -350704687:
		case 765892430:
			iVar0 = -1210546580;
			break;
		case -318217782:
		case -100913452:
		case 72307351:
			iVar0 = -1910795227;
			break;
		case -1867587109:
		case 182158309:
		case 313332607:
			iVar0 = -1028170431;
			break;
		case 444160793:
		case 1205453831:
		case 1815539745:
			iVar0 = 1465438313;
			break;
		case -2123600216:
		case -146690338:
		case -124539232:
			iVar0 = 1502581273;
			break;
		case -1403731492:
		case -843795569:
		case 1496267371:
			iVar0 = 510312109;
			break;
	}
	return iVar0;
}

int func_1211(int iParam0)
{
	if (func_190(iParam0, 1064293907))
	{
		return 2;
	}
	else if (func_190(iParam0, -1218707194))
	{
		return 1;
	}
	else if (func_190(iParam0, 1888974372))
	{
		return 0;
	}
	return 1;
}

int func_1212(int iParam0, int iParam1, int iParam2)
{
	_0xb29c553ba582d09e(&uVar0, iParam0, iParam1, 1);
	iVar16 = 0;
	iVar17 = 0;
	while (iVar17 < 15)
	{
		if (func_121(&(uVar0[iVar17]), 0) && iParam2 == &uVar0[iVar17])
		{
			iVar16++;
		}
		iVar17++;
	}
	return iVar16;
}

bool func_1213(int iParam0)
{
	switch (iParam0)
	{
		case -1959946884:
		case -1784068921:
		case -1642438278:
		case -1349086674:
		case 310186733:
		case 456315479:
		case 471747275:
		case 1166592425:
		case 1486898918:
		case 1500419820:
			return true;
		default:
			break;
	}
	return false;
}

int func_1214(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1959946884:
			return 6;
		case -1784068921:
			return 7;
		case -1642438278:
			return 2;
		case -1349086674:
			return 8;
		case 310186733:
			return 5;
		case 456315479:
			return 9;
		case 471747275:
			return 3;
		case 1166592425:
			return 4;
		case 1486898918:
			return 0;
		case 1500419820:
			return 1;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

void func_1215(var uParam0, int iParam1, int iParam2)
{
	(*Global_1911914)[uParam0->f_55]->f_5 = iParam2;
	(*Global_1911914)[uParam0->f_55]->f_6 = iParam1;
	(*Global_1911914)[uParam0->f_55]->f_7 = 1;
	(*Global_1911914)[uParam0->f_55]->f_8 = 0;
	Global_1911914->f_1576++;
	uParam0->f_55++;
	if (iParam2 == 600942249 || iParam2 == -257768755)
	{
		func_1267(uParam0, iParam1, iParam2);
	}
	else if (iParam2 == -214678071)
	{
		func_1268(uParam0, iParam1);
	}
}

void func_1216(var uParam0, int iParam1, int iParam2)
{
	iVar2 = func_372(iParam1, -1859264326);
	if (iVar2 == 0)
	{
		return;
	}
	Var3 = { func_902(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar2, 0) };
	if (func_1108(Var3, &iVar0, &iVar1, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar1)
		{
			if (uParam0->f_55 >= 175)
			{
			}
			else
			{
				iVar14 = func_1109(iVar13, iVar0);
				if (func_121(iVar14, 0) && iVar14 != iParam1)
				{
					func_1215(uParam0, iVar14, iParam2);
				}
				iVar13++;
			}
		}
		func_1110(iVar0);
	}
}

void func_1217(int iParam0)
{
	func_1110(*iParam0);
	*iParam0 = -1;
}

void func_1218(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = (*Global_1911914)[iParam1]->f_6;
	StringCopy(&cVar1, "r_", 32);
	StringIntConCat(&cVar1, iVar0, 32);
	StringIntConCat(&cVar1, iParam1, 32);
	if (_databinding_is_data_id_valid((*Global_1911914)[iParam1]->f_1))
	{
		_databinding_remove_data_entry((*Global_1911914)[iParam1]->f_1);
	}
	iVar5 = _databinding_add_data_container(uParam0->f_40, &cVar1);
	(*Global_1911914)[iParam1]->f_1 = iVar5;
	iVar6 = (*Global_1911914)[iParam1]->f_5;
	iVar7 = func_858(iVar0, iVar6, bParam3, 0);
	iVar8 = func_124(iVar0, 0, 0);
	iVar9 = func_857(iVar0, 0);
	if (iVar9 != -1)
	{
		iVar9 = (iVar9 - iVar8);
	}
	else
	{
		iVar9 = iVar7;
	}
	if (func_575(iVar0, &Var10, 805880880, 0, 0, 0))
	{
		_databinding_add_data_string(iVar5, "texture", Var10);
		_databinding_add_data_string(iVar5, "textureDictionary", Var10.f_1);
	}
	_databinding_add_data_hash(iVar5, "name", iVar0);
	_databinding_add_data_int(iVar5, "eOutputItem", iVar0);
	_databinding_add_data_int(iVar5, "eCost", iVar6);
	_databinding_add_data_int(iVar5, "iIndex", iParam1);
	if (!Global_1911914->f_1579 && func_918(iVar0, iVar6, 1))
	{
		bVar13 = true;
		(*Global_1911914)[iParam1]->f_7 = 0;
	}
	_databinding_add_data_int(iVar5, "iCurCostVariant", (*Global_1911914)[iParam1]->f_8);
	_databinding_add_data_int(iVar5, "iNumCostVariants", (*Global_1911914)[iParam1]->f_7);
	_databinding_add_data_bool(iVar5, "bFireCrafting", iVar6 == -257768755);
	StringIntConCat(&cVar14, func_859(iVar9, iVar7), 8);
	_databinding_add_data_string(iVar5, "count", &cVar14);
	_databinding_add_data_bool(iVar5, "visible", false);
	bVar16 = false;
	if (func_56(4096))
	{
		iVar15 = func_844(((iVar9 > 0 && iVar7 > 0) && func_372(iVar0, 1697966752) == 337650881), 1, 0);
	}
	else if (func_56(8192))
	{
		iVar15 = func_844(((iVar9 > 0 && iVar7 > 0) && iVar0 == 1831763320), 1, 0);
	}
	else
	{
		iVar15 = func_844(((iVar9 > 0 && iVar7 > 0) && !bVar13), 1, 0);
	}
	if (iVar15 == 0 && func_1219(iVar0))
	{
		if (func_1220(iVar0, iVar6, uParam0, bParam3, &iVar17, &iVar18, &iVar19))
		{
			iVar15 = 1;
			bVar16 = true;
			iVar0 = iVar17;
			iVar6 = iVar18;
			_databinding_write_data_hash_string_from_parent(iVar5, "name", iVar17);
			_databinding_write_data_int_from_parent(iVar5, "eOutputItem", iVar17);
			_databinding_write_data_int_from_parent(iVar5, "eCost", iVar18);
			_databinding_write_data_int_from_parent(iVar5, "iCurCostVariant", iVar19);
		}
	}
	if (!uParam0->f_31)
	{
		if ((iVar6 == -214678071 || iVar6 == 278772510) || iVar6 == -257768755)
		{
			iVar15 = 0;
		}
	}
	else if (!uParam0->f_32 && iVar6 == 278772510)
	{
		iVar15 = 0;
	}
	if (iVar15 == 1)
	{
		if ((!uParam0->f_83 || uParam0->f_84 > 0) && func_372(iVar0, -1636519629) == -701492487)
		{
			iVar15 = 0;
			(*Global_1911914)[iParam1]->f_2 = 0;
		}
		else
		{
			uParam0->f_59++;
			if (func_259(iVar0, uParam0->f_52))
			{
				uParam0->f_60++;
			}
			(*Global_1911914)[iParam1]->f_2 = 1;
		}
	}
	else
	{
		(*Global_1911914)[iParam1]->f_2 = 0;
	}
	if (bVar16)
	{
	}
	_databinding_add_data_bool(iVar5, "lockVisible", bVar13);
	_databinding_add_data_int(iVar5, "enabled", iVar15);
	Var20.f_1 = 20;
	bVar42 = false;
	_databinding_add_data_hash(iVar5, "deadeyeCoreDurationCategory", 0);
	_databinding_add_data_hash(iVar5, "deadeyeDurationCategory", 0);
	_databinding_add_data_hash(iVar5, "healthDurationCategory", 0);
	_databinding_add_data_hash(iVar5, "healthCoreDurationCategory", 0);
	_databinding_add_data_hash(iVar5, "staminaCoreDurationCategory", 0);
	_databinding_add_data_hash(iVar5, "staminaDurationCategory", 0);
	_databinding_add_data_hash(iVar5, "healthHorseDurationCategory", 0);
	_databinding_add_data_hash(iVar5, "healthCoreHorseDurationCategory", 0);
	_databinding_add_data_hash(iVar5, "staminaCoreHorseDurationCategory", 0);
	_databinding_add_data_hash(iVar5, "staminaHorseDurationCategory", 0);
	if (_item_database_fillout_item_effects_ids(iVar0, &Var20))
	{
		iVar43 = 0;
		while (iVar43 < Var20)
		{
			if (_item_database_fillout_item_effects_id_info(&(Var20.f_1[iVar43]), &Var44))
			{
				iVar51 = Var44.f_2;
				switch (Var44.f_1)
				{
					case -1104847406:
						_databinding_add_data_int(iVar5, "deadeye", iVar51);
						break;
					case 1857353317:
						_databinding_add_data_int(iVar5, "deadeyeCore", iVar51);
						break;
					case -826379728:
						bVar42 = true;
						_databinding_add_data_int(iVar5, "deadeyeCore", 12);
						_databinding_write_data_hash_string_from_parent(iVar5, "deadeyeCoreDurationCategory", Var44.f_6);
						break;
					case 1342237631:
						bVar42 = true;
						_databinding_add_data_int(iVar5, "deadeye", 11);
						_databinding_write_data_hash_string_from_parent(iVar5, "deadeyeDurationCategory", Var44.f_6);
						break;
					case -943921969:
						_databinding_add_data_int(iVar5, "health", iVar51);
						break;
					case -416929031:
						_databinding_add_data_int(iVar5, "healthCore", iVar51);
						break;
					case 1869697234:
						bVar42 = true;
						_databinding_add_data_int(iVar5, "health", 11);
						_databinding_write_data_hash_string_from_parent(iVar5, "healthDurationCategory", Var44.f_6);
						break;
					case 2062242710:
						bVar42 = true;
						_databinding_add_data_int(iVar5, "healthCore", 12);
						_databinding_write_data_hash_string_from_parent(iVar5, "healthCoreDurationCategory", Var44.f_6);
						break;
					case 381158954:
						_databinding_add_data_int(iVar5, "stamina", iVar51);
						break;
					case 1681823811:
						_databinding_add_data_int(iVar5, "staminaCore", iVar51);
						break;
					case -1191740624:
						bVar42 = true;
						_databinding_add_data_int(iVar5, "staminaCore", 12);
						_databinding_write_data_hash_string_from_parent(iVar5, "staminaCoreDurationCategory", Var44.f_6);
						break;
					case -1240225157:
						bVar42 = true;
						_databinding_add_data_int(iVar5, "stamina", 11);
						_databinding_write_data_hash_string_from_parent(iVar5, "staminaDurationCategory", Var44.f_6);
						break;
					case 978049229:
						_databinding_add_data_int(iVar5, "healthHorse", iVar51);
						break;
					case -778289619:
						bVar42 = true;
						_databinding_add_data_int(iVar5, "healthHorse", 11);
						_databinding_write_data_hash_string_from_parent(iVar5, "healthHorseDurationCategory", Var44.f_6);
						break;
					case -1918697215:
						_databinding_add_data_int(iVar5, "healthCoreHorse", iVar51);
						break;
					case 1136630075:
						bVar42 = true;
						_databinding_add_data_int(iVar5, "healthCoreHorse", 12);
						_databinding_write_data_hash_string_from_parent(iVar5, "healthCoreHorseDurationCategory", Var44.f_6);
						break;
					case 855745648:
						_databinding_add_data_int(iVar5, "staminaCoreHorse", iVar51);
						break;
					case 1365603835:
						bVar42 = true;
						_databinding_add_data_int(iVar5, "staminaCoreHorse", 12);
						_databinding_write_data_hash_string_from_parent(iVar5, "staminaCoreHorseDurationCategory", Var44.f_6);
						break;
					case 1497139093:
						bVar42 = true;
						_databinding_add_data_int(iVar5, "staminaHorse", 11);
						_databinding_write_data_hash_string_from_parent(iVar5, "staminaHorseDurationCategory", Var44.f_6);
						break;
				}
			}
			iVar43++;
		}
	}
	_databinding_add_data_bool(iVar5, "overpower", bVar42);
	if (bParam2)
	{
		_databinding_insert_ui_item_to_list_from_context_hash_alias(uParam0->f_40, -1, -2047994727, iVar5);
	}
}

bool func_1219(int iParam0)
{
	if (func_56(4096))
	{
		if (func_372(iParam0, 1697966752) != 337650881)
		{
			return false;
		}
	}
	else if (func_56(8192))
	{
		if (iParam0 != 1831763320)
		{
			return false;
		}
	}
	return true;
}

bool func_1220(int iParam0, int iParam1, var uParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	if (!func_121(iParam0, 0))
	{
		return false;
	}
	if (!Global_1911914->f_1579 && func_918(iParam0, iParam1, 1))
	{
		return false;
	}
	if (iParam1 == -214678071 || iParam1 == 278772510)
	{
		Var2 = -1;
		Var2.f_1 = -1;
		Var2.f_2 = -1;
		Var2.f_3 = -1;
		Var2.f_4 = -1;
		Var2.f_5 = -1;
		Var2.f_6 = -1;
		Var2.f_7 = -1;
		Var2.f_8 = -1;
		iVar12 = func_372(iParam0, 1697966752);
		if (iVar12 == 0)
		{
			return false;
		}
		if (uParam2->f_32)
		{
			Var2 = { func_902(-1591664384, -1591664384, 0, 0, 278772510, 0, -1, iVar12, 0) };
			if (func_1108(Var2, &iVar0, &iVar1, 0))
			{
				iVar13 = 0;
				while (iVar13 < iVar1)
				{
					iVar14 = func_1109(iVar13, iVar0);
					if (iParam0 == iVar14)
					{
					}
					else if (!Global_1911914->f_1579 && func_918(iVar14, 278772510, 1))
					{
					}
					else if (func_295(iVar14, 278772510, 0, bParam3, 0, 0) && !func_560(iVar14, 1, 0))
					{
						func_1110(iVar0);
						*iParam4 = iVar14;
						*iParam5 = 278772510;
						*iParam6 = iVar13;
						return true;
					}
					iVar13++;
				}
				func_1110(iVar0);
			}
		}
		if (iParam1 == 278772510)
		{
			Var2 = { func_902(-1591664384, -1591664384, 0, 0, -214678071, 0, -1, iVar12, 0) };
			if (func_1108(Var2, &iVar0, &iVar1, 0))
			{
				iVar15 = 0;
				while (iVar15 < iVar1)
				{
					iVar16 = func_1109(iVar15, iVar0);
					if (iParam0 == iVar16)
					{
					}
					else if (!Global_1911914->f_1579 && func_918(iVar16, -214678071, 1))
					{
					}
					else if (func_295(iVar16, -214678071, 0, bParam3, 0, 0) && !func_560(iVar16, 1, 0))
					{
						func_1110(iVar0);
						*iParam4 = iVar16;
						*iParam5 = -214678071;
						*iParam6 = iVar15;
						return true;
					}
					iVar15++;
				}
				func_1110(iVar0);
			}
		}
	}
	else
	{
		iVar17 = _item_database_get_acquire_costs_count(iParam0);
		Var18.f_4 = 15;
		Var18.f_36 = 10;
		iVar65 = 0;
		while (iVar65 < iVar17)
		{
			if (_item_database_get_acquire_cost(iParam0, iVar65, &Var18))
			{
				if (Var18.f_2 == 1644203656)
				{
					if (Var18 != -489628648 && (Global_1911914->f_1579 || !func_918(iParam0, Var18, 1)))
					{
						if (func_295(iParam0, Var18, 0, bParam3, 0, 0) && !func_560(iParam0, 1, 0))
						{
							*iParam4 = iParam0;
							*iParam5 = Var18;
							*iParam6 = iVar65;
							return true;
						}
					}
				}
			}
			iVar65++;
		}
	}
	return false;
}

struct<28> func_1221(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var28.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_86(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_1225(&Var28) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_1222(int iParam0, var uParam1, bool bParam2)
{
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			if (_cashinventory_transaction_add_item(iVar0, uParam1, 28))
			{
				if (_cashinventory_transaction_checkout(iVar0))
				{
					func_622(iVar0, 1);
					return iVar0;
				}
				_cashinventory_transaction_delete(iVar0);
			}
			else if (_cashinventory_transaction_get_num_of_items(iVar0) == 0)
			{
				_cashinventory_transaction_delete(iVar0);
			}
			func_622(iVar0, 2);
			return -1;
		}
	}
	else if (_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 28))
	{
		func_622(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<17> func_1223(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var17.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_86(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_1225(&Var17) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_1224(int iParam0, var uParam1, bool bParam2)
{
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			if (_cashinventory_transaction_add_item(iVar0, uParam1, 17))
			{
				if (_cashinventory_transaction_checkout(iVar0))
				{
					func_622(iVar0, 1);
					return iVar0;
				}
				_cashinventory_transaction_delete(iVar0);
			}
			else if (_cashinventory_transaction_get_num_of_items(iVar0) == 0)
			{
				_cashinventory_transaction_delete(iVar0);
			}
			func_622(iVar0, 2);
			return -1;
		}
	}
	else if (_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 17))
	{
		func_622(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<16> func_1225(var uParam0)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { *uParam0 };
	Var0.f_4 = { uParam0->f_5 };
	Var0.f_8 = uParam0->f_4;
	Var0.f_9 = uParam0->f_11;
	Var0.f_11 = uParam0->f_9;
	Var0.f_10 = uParam0->f_10;
	return Var0;
}

int func_1226(int iParam0)
{
	return _money_get_cash_balance();
}

int func_1227(int iParam0)
{
	return iParam0 & 31;
}

bool func_1228(int iParam0, bool bParam1, int iParam2)
{
	if (iParam0 == 18)
	{
		return false;
	}
	if (iParam0 == 71)
	{
		return false;
	}
	if ((bParam1 && does_blip_exist((*Global_1835011)[iParam0]->f_27)) && (*Global_1835011)[iParam0]->f_21 == iParam2)
	{
		return true;
	}
	return false;
}

bool func_1229(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_1269((*Global_1835011)[iParam0]);
	}
	return false;
}

int func_1230(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 36:
			return 1;
	}
	return 0;
}

int func_1231(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_3;
	}
	return 0;
}

bool func_1232(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			switch (iParam0)
			{
				case -1003616053:
				case -541762431:
				case 1755643085:
					return true;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case -1963605336:
				case -466054788:
				case -166054593:
				case 134747314:
				case 490159652:
				case 1110710183:
					return true;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case -1892280447:
				case -1598866821:
				case -1295720802:
				case 122748261:
				case 463643368:
				case 1746830155:
					return true;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case -2021043433:
				case 41707457:
				case 543892122:
				case 1702636991:
				case 2105463796:
					return true;
				default:
					break;
			}
			break;
	}
	return false;
}

bool func_1233(int iParam0)
{
	if ((func_190(iParam0, -839724752) || func_190(iParam0, -887064662)) || func_190(iParam0, 1286414894))
	{
		return true;
	}
	return false;
}

int func_1234(int iParam0, int iParam1)
{
	if (!func_121(iParam0, 0))
	{
		return 878851736;
	}
	if (!func_1233(iParam0))
	{
		return 878851736;
	}
	if (func_1270(iParam0, iParam1))
	{
		return -1708424762;
	}
	else if (func_190(iParam0, -1690954218))
	{
		return -1760041550;
	}
	else if (func_190(iParam0, 1149630095))
	{
		return -1760041550;
	}
	else if (func_190(iParam0, 194498509))
	{
		return 116793994;
	}
	else if (func_190(iParam0, 43251425))
	{
		return 1869130580;
	}
	return 1869130580;
}

bool func_1235(int iParam0, int iParam1)
{
	iVar0[0] = 878851736;
	iVar0[1] = 1762298001;
	iVar0[2] = 1869130580;
	iVar0[3] = 1336518004;
	iVar0[4] = 116793994;
	iVar0[5] = 515084529;
	iVar0[6] = -1760041550;
	iVar0[7] = -1977068039;
	iVar0[8] = -1708424762;
	iVar0[9] = -399865011;
	iVar11 = -1;
	iVar12 = -1;
	iVar13 = 0;
	while (iVar13 <= 9)
	{
		if (&iVar0[iVar13] == iParam0)
		{
			iVar11 = iVar13;
		}
		else
		{
			iVar13++;
		}
	}
	if (iVar11 == -1)
	{
		return false;
	}
	iVar13 = 0;
	while (iVar13 <= 9)
	{
		if (&iVar0[iVar13] == iParam1)
		{
			iVar12 = iVar13;
		}
		else
		{
			iVar13++;
		}
	}
	if (iVar12 == -1)
	{
		return false;
	}
	return iVar11 > iVar12;
}

void func_1236(int iParam0)
{
	if (Global_40.f_4283.f_313 > 1)
	{
		switch (*iParam0)
		{
			case 878851736:
				*iParam0 = 1762298001;
				break;
			case 1869130580:
				*iParam0 = 1336518004;
				break;
			case 116793994:
				*iParam0 = 515084529;
				break;
			case -1760041550:
				*iParam0 = -1977068039;
				break;
			case -1708424762:
				*iParam0 = -399865011;
				break;
		}
	}
}

struct<5> func_1237(int iParam0)
{
	Var0 = { func_1238(iParam0, 1328661203, func_904(), -1591664384) };
	Var0.f_4 = 1084182731;
	return Var0;
}

struct<4> func_1238(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5, int iParam6)
{
	if (!func_121(iParam1, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(iParam0, &uParam2, iParam1, iParam6, &Var0);
	return Var0;
}

int func_1239(int iParam0)
{
	if (!func_946(iParam0))
	{
		return 0;
	}
	return iParam0;
}

int func_1240(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2059726619:
			return 0;
		case -1858513856:
			return 7;
		case -1827027577:
			return 20;
		case -1791452194:
			return 14;
		case -1648383828:
			return 29;
		case -1569450319:
			return 1;
		case -1558096473:
			return 17;
		case -1544126829:
			return 43;
		case -1517904196:
			return 19;
		case -1379330323:
			return 30;
		case -1317365569:
			return 49;
		case -1102272634:
			return 40;
		case -1035515486:
			return 22;
		case -983605026:
			return 42;
		case -888740979:
			return 11;
		case -868657362:
			return 8;
		case -794277189:
			return 18;
		case -734947450:
			return 48;
		case -702790226:
			return 10;
		case -662178186:
			return 21;
		case -476045512:
			return 45;
		case -395646254:
			return 34;
		case -308965548:
			return 39;
		case -150200864:
			return 3;
		case -103050851:
			return 44;
		case -99092070:
			return 31;
		case -57190831:
			return 38;
		case 0:
			return 56;
		case 85441452:
			return 53;
		case 238733925:
			return 23;
		case 459744337:
			return 12;
		case 500722008:
			return 25;
		case 552246565:
			return 55;
		case 554578289:
			return 41;
		case 653400939:
			return 54;
		case 657906142:
			return 37;
		case 699990316:
			return 28;
		case 854596618:
			return 2;
		case 1145777975:
			return 52;
		case 1150939141:
			return 16;
		case 1248540072:
			return 6;
		case 1466150167:
			return 51;
		case 1528935719:
			return 15;
		case 1584468323:
			return 35;
		case 1603936352:
			return 9;
		case 1642484975:
			return 26;
		case 1647012424:
			return 24;
		case 1710714415:
			return 27;
		case 1729948479:
			return 50;
		case 1795984405:
			return 47;
		case 1796037447:
			return 46;
		case 1914602340:
			return 13;
		case 1963510418:
			return 32;
		case 1969175294:
			return 36;
		case 2047376405:
			return 33;
		case 2109269555:
			return 4;
		case 2116849039:
			return 5;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

bool func_1241(int iParam0, int iParam1, int iParam2)
{
	if (!func_121(iParam1, 0))
	{
		return false;
	}
	return func_944(iParam0, iParam1) >= iParam2;
}

int func_1242(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (!func_121(iParam1, 0))
	{
		return 0;
	}
	if (iParam2 < 1)
	{
		return 0;
	}
	Var0 = { func_1237(iParam0) };
	Var5 = { func_1238(iParam0, iParam1, Var0, Var0.f_4) };
	return func_1271(iParam0, iParam1, &Var5, iParam2, iParam3, bParam4);
}

bool func_1243(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return true;
	}
	return false;
}

float func_1244(int iParam0, vector3 vParam1)
{
	if (func_1272(iParam0))
	{
		return vdist(_0x1e8a921112891651((*Global_1425371)[iParam0]->f_1), vParam1);
	}
	return 1E+08f;
}

int func_1245(int iParam0)
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
		iVar0 = func_605(iParam0);
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

Vector3 func_1246(int iParam0)
{
	if (func_1229(iParam0))
	{
		return func_1273(iParam0);
	}
	return (*Global_1835011)[iParam0]->f_18;
}

bool func_1247(int iParam0, var uParam1)
{
	if (iParam0 == 90)
	{
		if (func_1146((*Global_1347702)[iParam0]->f_15) != 0)
		{
			(*Global_1347702)[iParam0]->f_18 = 80f;
			*uParam1 = { 1015.113f, 159.7295f, 103.0175f };
			return true;
		}
	}
	else if (iParam0 == 96)
	{
		if ((*Global_1347702)[iParam0]->f_13 & 65536 != 0)
		{
			*uParam1 = { -1646.77f, -1362.89f, 83.4f };
			return true;
		}
		else
		{
			*uParam1 = { -1629.71f, -1338.377f, 82.0174f };
			return true;
		}
	}
	return false;
}

bool func_1248(int iParam0, int iParam1, int iParam2, var uParam3)
{
	if (func_1206(iParam1) && !func_1274(iParam1))
	{
		iVar0 = func_204(iParam1);
	}
	else
	{
		return false;
	}
	func_1275(uParam3);
	iVar5 = func_1276(iParam2);
	if (!_0x608bc6a6aacd5036(&Var1, iVar0, iVar5, 0))
	{
		return false;
	}
	*iParam0 = Var1.f_3;
	if (!does_entity_exist(*iParam0))
	{
		return false;
	}
	if (is_entity_a_mission_entity(*iParam0) && !_0x88ad6cc10d8d35b2(*iParam0))
	{
		return false;
	}
	*uParam3 = get_entity_model(*iParam0);
	uParam3->f_2 = _0xd21c7418c590bb40(*iParam0);
	uParam3->f_3 = _get_entity_carry_config(*iParam0);
	return true;
}

void func_1249(int iParam0, int iParam1)
{
	iVar0 = get_ped_index_from_entity_index(iParam0);
	if (does_entity_exist(iVar0))
	{
		func_641(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_642(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

void func_1250(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_1277(&(uParam0->f_3));
}

void func_1251(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	func_1278(&(uParam0->f_3), *uParam0, uParam0->f_2);
}

void func_1252(var uParam0, int iParam1, int iParam2)
{
	iVar1 = func_1279(iParam1);
	func_1280(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_1281(&(uParam0->f_26), iVar1);
		if (func_1282(uParam0->f_26, &iVar0))
		{
			func_1283(iVar0, iVar1);
		}
	}
}

int func_1253()
{
	return Global_1572887->f_13;
}

void func_1254(int iParam0)
{
	if (Global_1572887->f_13 != 0 || Global_1572887->f_12 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (&Global_1058888->f_42357.f_1[iVar0] == 0)
	{
		return;
	}
	func_1255(iVar0);
	_0x51951de06c0d1c40(iParam0, 0);
	Global_1058888->f_42357.f_1[iVar0] = 0;
}

void func_1255(int iParam0)
{
	if (Global_1058888->f_42357.f_1[iParam0]->f_1 != 0)
	{
		Global_1058888->f_42357.f_1[iParam0]->f_2 = 0;
		Global_1058888->f_42357.f_1[iParam0]->f_1 = 0;
	}
}

void func_1256(int iParam0, var uParam1)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	uVar0 = 29;
	_copy_memory(uParam1, &uVar0, 30);
	iVar30 = 0;
	while (iVar30 < 29)
	{
		iVar31 = 0;
		get_current_ped_weapon(Global_35, &iVar31, false, iVar30, true);
		if (func_286(iVar31))
		{
			(*uParam1)[iVar30] = iVar31;
		}
		else
		{
			(*uParam1)[iVar30] = 0;
		}
		iVar30++;
	}
}

void func_1257(bool bParam0)
{
	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_121(iVar1, 0))
		{
			func_1012(iVar1, 0, bParam0);
		}
		Global_1946804->f_2657[iVar0] = 0;
		iVar0 = (iVar0 + -1);
	}
	Global_1946804->f_2657.f_20 = 0;
	Global_1946804->f_2657.f_21 = 0;
	Global_1946804->f_2657.f_22 = 0;
	Global_1946804->f_2657.f_23 = 0;
	Global_1946804->f_2657.f_24 = 0;
	Global_1946804->f_2657.f_25 = 0;
	Global_1946804->f_2657.f_19 = 0;
	Global_1946804->f_2657.f_26.f_6 = 0;
}

void func_1258(int iParam0)
{
	Global_1946804->f_2657.f_26.f_2 = 3;
	Global_1946804->f_2657.f_26.f_1 = 3;
	Global_1946804->f_2657.f_26 = 3;
	if (func_23() == -1)
	{
		func_1284(352481484);
		iVar0 = 0;
		while (iVar0 < Global_26796.f_19)
		{
			Global_1946804->f_2657[iVar0] = &Global_26796[iVar0];
			iVar0++;
		}
		Global_1946804->f_2657.f_20 = Global_26796.f_20;
		Global_1946804->f_2657.f_21 = Global_26796.f_21;
		Global_1946804->f_2657.f_22 = Global_26796.f_22;
		Global_1946804->f_2657.f_23 = Global_26796.f_23;
		Global_1946804->f_2657.f_24 = Global_26796.f_24;
		Global_1946804->f_2657.f_25 = Global_26796.f_25;
		Global_1946804->f_2657.f_19 = Global_26796.f_19;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_36638.f_45.f_350.f_19)
		{
			Global_1946804->f_2657[iVar0] = &Global_36638.f_45.f_350[iVar0];
			iVar0++;
		}
		Global_1946804->f_2657.f_20 = Global_36638.f_45.f_350.f_20;
		Global_1946804->f_2657.f_21 = Global_36638.f_45.f_350.f_21;
		Global_1946804->f_2657.f_22 = Global_36638.f_45.f_350.f_22;
		Global_1946804->f_2657.f_23 = Global_36638.f_45.f_350.f_23;
		Global_1946804->f_2657.f_24 = Global_36638.f_45.f_350.f_24;
		Global_1946804->f_2657.f_25 = Global_36638.f_45.f_350.f_25;
		Global_1946804->f_2657.f_19 = Global_36638.f_45.f_350.f_19;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar2 = &Global_1946804->f_2657[iVar0];
		if (func_199(iVar2) != -999503751)
		{
			func_1008(&(Global_1946804->f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (func_1007(iVar2, 0))
		{
			func_211(iVar2, &Global_1946804->f_1497.f_1[iVar1] == &Global_1946804->f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_1259(int iParam0, var uParam1)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 29)
	{
		if (uParam1[iVar0] != 0)
		{
			if (!has_ped_got_weapon(Global_35, uParam1[iVar0], 0, false))
			{
				if (func_564(uParam1[iVar0]))
				{
					_give_weapon_to_ped_2(iParam0, uParam1[iVar0], 0, false, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
			}
			iVar1 = 0;
			get_current_ped_weapon(Global_35, &iVar1, false, iVar0, true);
			if (iVar1 != uParam1[iVar0])
			{
				set_current_ped_weapon(Global_35, uParam1[iVar0], true, iVar0, false, false);
			}
		}
		iVar0++;
	}
}

bool func_1260(int iParam0)
{
	if (!func_121(iParam0, 0))
	{
		return false;
	}
	if (func_190(iParam0, -1066545920))
	{
		return true;
	}
	return false;
}

bool func_1261(int iParam0)
{
	if (!func_121(iParam0, 0))
	{
		return false;
	}
	if (func_190(iParam0, -284267618))
	{
		return true;
	}
	return false;
}

bool func_1262(int iParam0)
{
	if (!func_121(iParam0, 0))
	{
		return false;
	}
	if (func_190(iParam0, 363491182))
	{
		return true;
	}
	return false;
}

bool func_1263(int iParam0)
{
	if (!func_121(iParam0, 0))
	{
		return false;
	}
	if (func_190(iParam0, 1406113494))
	{
		return true;
	}
	return false;
}

int func_1264(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1285(iParam0);
		case 1:
			return func_1286(iParam0);
		case 2:
			return func_1287(iParam0);
		case 3:
			return func_1288(iParam0);
	}
	return 0;
}

int func_1265(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1289(iParam0);
		case 1:
			return func_1290(iParam0);
		case 2:
			return func_1291(iParam0);
		case 3:
			return func_1292(iParam0);
		case 4:
			return func_1293(iParam0);
		case 5:
			return func_1294(iParam0);
		case 6:
			return func_1295(iParam0);
		case 7:
			return func_1296(iParam0);
		case 8:
			return func_1297(iParam0);
	}
	return 0;
}

int func_1266(int iParam0, int iParam1, int iParam2, int iParam3)
{
	_0xb29c553ba582d09e(&uVar0, iParam0, iParam1, func_1298(iParam2));
	iVar16 = 0;
	while (iVar16 < 15)
	{
		if ((func_121(&(uVar0[iVar16]), 0) && !func_190(&(uVar0[iVar16]), 1286414894)) && !&uVar0[iVar16] == iParam2)
		{
			func_228(&(uVar0[iVar16]), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			if (iParam3 != 0)
			{
				if (iParam3 == &uVar0[iVar16])
				{
					iVar17++;
				}
			}
			else
			{
				iVar17++;
			}
		}
		iVar16++;
	}
	func_1299(func_98(0), 1, 0);
	return iVar17;
}

void func_1267(var uParam0, int iParam1, int iParam2)
{
	iVar0 = _item_database_get_acquire_costs_count(iParam1);
	Var1.f_4 = 15;
	Var1.f_36 = 10;
	iVar48 = 0;
	while (iVar48 < iVar0)
	{
		if (_item_database_get_acquire_cost(iParam1, iVar48, &Var1))
		{
			if (Var1 != iParam2)
			{
				if ((Var1.f_2 == 1644203656 && Var1 != -489628648) && (Global_1911914->f_1579 || !func_918(iParam1, Var1, 1)))
				{
					((*Global_1911914)[(uParam0->f_55 - 1)])->f_7++;
				}
			}
			else
			{
				((*Global_1911914)[(uParam0->f_55 - 1)])->f_8 = iVar48;
			}
		}
		iVar48++;
	}
}

void func_1268(var uParam0, int iParam1)
{
	iVar2 = func_372(iParam1, 1697966752);
	if (iVar2 == 0)
	{
		return;
	}
	Var3 = { func_902(-1591664384, -1591664384, 0, 0, 278772510, 0, -1, iVar2, 0) };
	if (func_1108(Var3, &iVar0, &iVar1, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar1)
		{
			iVar14 = func_1109(iVar13, iVar0);
			if (func_121(iVar14, 0))
			{
				if (Global_1911914->f_1579 || !func_918(iVar14, 278772510, 1))
				{
					((*Global_1911914)[(uParam0->f_55 - 1)])->f_7++;
				}
			}
			iVar13++;
		}
		func_1110(iVar0);
	}
}

bool func_1269(var uParam0)
{
	if (func_1300(&(uParam0->f_29), 62))
	{
		switch (func_1301())
		{
			case 1:
				if (!func_1300(&(uParam0->f_29), 6))
				{
					return false;
				}
				break;
			case 2:
				if (!func_1300(&(uParam0->f_29), 8))
				{
					return false;
				}
				break;
			case 4:
				if (!func_1300(&(uParam0->f_29), 16))
				{
					return false;
				}
				break;
			case 8:
				if (!func_1300(&(uParam0->f_29), 32))
				{
					if (func_1300(&(uParam0->f_29), 2))
					{
						if (func_534(func_147()) < 5)
						{
							return false;
						}
					}
					else
					{
						return false;
					}
				}
				break;
		}
	}
	return true;
}

bool func_1270(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			switch (iParam0)
			{
				case -1930144509:
				case -1866642239:
				case -1816929509:
				case -1508120809:
				case 1001171791:
				case 1023080408:
				case 1197831625:
				case 1210345318:
				case 1846915545:
					return true;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case -1837840093:
				case -1836227998:
				case -1610329427:
				case -1310590179:
				case -244657613:
				case 58634176:
				case 472142656:
				case 619479575:
				case 727522818:
				case 785407605:
				case 992366796:
					return true;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case -1956973834:
				case -1643384846:
				case -1424697962:
				case -738999731:
				case -5376850:
				case 566023444:
				case 915880986:
				case 1425358430:
					return true;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case -1726572562:
				case -1017987135:
				case 485620834:
				case 1471975165:
				case 1570826681:
				case 2058475216:
					return true;
				default:
					break;
			}
			break;
	}
	return false;
}

int func_1271(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return 0;
	}
	if (func_650(iParam1))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_1302(iParam0, *uParam2, &Var0, 0))
	{
		return 0;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!_0x3e4e811480b3ae79(iParam0, uParam2, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

bool func_1272(int iParam0)
{
	if (func_1303(iParam0))
	{
		return _0xc29996a337bdd099((*Global_1425371)[iParam0]->f_1);
	}
	return false;
}

Vector3 func_1273(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return -240.576f, 769.614f, 117.085f;
		case 34:
			return 2544.982f, -1187.344f, 52.3104f;
	}
	return (*Global_1835011)[iParam0]->f_18;
}

bool func_1274(int iParam0)
{
	iParam0 = func_395(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_1206(iParam0))
	{
		return false;
	}
	iVar0 = func_204(iParam0);
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return true;
	}
	return false;
}

void func_1275(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = -1;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		uParam0->f_10[iVar0] = 0;
		uParam0->f_10[iVar0]->f_1 = 0;
		uParam0->f_10[iVar0]->f_2 = 0;
		uParam0->f_10[iVar0]->f_3 = 0;
		uParam0->f_10[iVar0]->f_4 = 0;
		uParam0->f_10[iVar0]->f_5 = 0;
		uParam0->f_10[iVar0]->f_6 = 0;
		uParam0->f_10[iVar0]->f_7 = 0;
		iVar0++;
	}
	uParam0->f_91 = 0;
	uParam0->f_92 = 0;
	uParam0->f_93 = 0;
}

int func_1276(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4;
		case 1:
			return 5;
		case 2:
			return 6;
	}
	return 0;
}

void func_1277(var uParam0)
{
	if (*uParam0 && _0x93ffd92f05ec32fd(uParam0->f_1))
	{
		_0x13e7320c762f0477(uParam0->f_1);
		uParam0->f_1 = -1;
	}
	*uParam0 = 0;
}

void func_1278(var uParam0, var uParam1, var uParam2)
{
	iVar0 = func_1304(func_729());
	if (*uParam0)
	{
		func_1277(uParam0);
	}
	uParam0->f_1 = _0xf6d9e1f3560cbf8e(iVar0, uParam1, 0, func_23() != -1, uParam2);
	*uParam0 = 1;
}

int func_1279(int iParam0)
{
	return &(Global_1946804->f_2657.f_26.f_7[iParam0]);
}

void func_1280(int iParam0, int iParam1)
{
	uVar0 = &Global_1946804->f_2657.f_26.f_7[iParam0];
	Global_1946804->f_2657.f_26.f_7[iParam0] = &Global_1946804->f_2657.f_26.f_7[iParam1];
	Global_1946804->f_2657.f_26.f_7[iParam1] = uVar0;
}

void func_1281(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - 1);
	func_1250(uParam0->f_1[iParam1]);
	*uParam0->f_1[iParam1] = { *uParam0->f_1[*uParam0] };
}

bool func_1282(int iParam0, int iParam1)
{
	*iParam1 = 0;
	*iParam1 = 0;
	while (*iParam1 < Global_1946804->f_2657.f_19)
	{
		if (&Global_1946804->f_2657.f_26.f_7[*iParam1] == iParam0)
		{
			return true;
		}
		*iParam1++;
	}
	return false;
}

void func_1283(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = iParam1;
}

void func_1284(int iParam0)
{
	Var2 = -1;
	Var2.f_1 = -1;
	Var2.f_2 = -1;
	Var2.f_3 = -1;
	Var2.f_4 = -1;
	Var2.f_5 = -1;
	Var2.f_6 = -1;
	Var2.f_7 = -1;
	Var2.f_8 = -1;
	Var2.f_13 = -1;
	Var2 = { func_607(0, -1591664384, -1591664384, -1591664384, 0, iParam0) };
	if (func_610(&Var2, &iVar0, &iVar1, 0))
	{
		if (iVar1 > 0)
		{
			switch (iParam0)
			{
				case 352481484:
					Global_1946804->f_2657.f_26.f_2 = 5;
					Global_1946804->f_2657.f_26.f_1 = 5;
					Global_1946804->f_2657.f_26 = 5;
					break;
			}
		}
		func_287(iVar0);
	}
}

int func_1285(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 227686058;
		case 1:
			return 1877538667;
		case 2:
			return -747118240;
		case 3:
			return 356885366;
		case 4:
			return -733784435;
		case 5:
			return -2010021430;
		case 6:
			return -1563051210;
		case 7:
			return 1532314048;
		case 8:
			return -1378972544;
		default:
			break;
	}
	return 0;
}

int func_1286(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -77597297;
		case 1:
			return 1289620458;
		case 2:
			return 351104126;
		case 3:
			return -991258198;
		case 4:
			return -446539844;
		case 5:
			return 2146082234;
		case 6:
			return 330185476;
		case 7:
			return -1208917184;
		case 8:
			return -12904227;
		default:
			break;
	}
	return 0;
}

int func_1287(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 624387589;
		case 1:
			return 1398329674;
		case 2:
			return -35737408;
		case 3:
			return 651323163;
		case 4:
			return 343794650;
		case 5:
			return 2072880089;
		case 6:
			return -2120749726;
		case 7:
			return -1749072364;
		case 8:
			return -583780175;
		default:
			break;
	}
	return 0;
}

int func_1288(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1066104444;
		case 1:
			return -567070698;
		case 2:
			return 797308288;
		case 3:
			return -1669506545;
		case 4:
			return -1011624341;
		case 5:
			return 516134254;
		case 6:
			return -940514956;
		case 7:
			return 2030473481;
		case 8:
			return 2084389834;
		default:
			break;
	}
	return 0;
}

int func_1289(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 227686058;
		case 1:
			return -77597297;
		case 2:
			return 624387589;
		case 3:
			return 1066104444;
		default:
			break;
	}
	return 0;
}

int func_1290(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1877538667;
		case 1:
			return 1289620458;
		case 2:
			return 1398329674;
		case 3:
			return -567070698;
		default:
			break;
	}
	return 0;
}

int func_1291(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -747118240;
		case 1:
			return 351104126;
		case 2:
			return -35737408;
		case 3:
			return 797308288;
		default:
			break;
	}
	return 0;
}

int func_1292(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 356885366;
		case 1:
			return -991258198;
		case 2:
			return 651323163;
		case 3:
			return -1669506545;
		default:
			break;
	}
	return 0;
}

int func_1293(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -733784435;
		case 1:
			return -446539844;
		case 2:
			return 343794650;
		case 3:
			return -1011624341;
		default:
			break;
	}
	return 0;
}

int func_1294(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -2010021430;
		case 1:
			return 2146082234;
		case 2:
			return 2072880089;
		case 3:
			return 516134254;
		default:
			break;
	}
	return 0;
}

int func_1295(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1563051210;
		case 1:
			return 330185476;
		case 2:
			return -2120749726;
		case 3:
			return -940514956;
		default:
			break;
	}
	return 0;
}

int func_1296(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1532314048;
		case 1:
			return -1208917184;
		case 2:
			return -1749072364;
		case 3:
			return 2030473481;
		default:
			break;
	}
	return 0;
}

int func_1297(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1378972544;
		case 1:
			return -12904227;
		case 2:
			return -583780175;
		case 3:
			return 2084389834;
		default:
			break;
	}
	return 0;
}

int func_1298(int iParam0)
{
	if (func_190(iParam0, 1064293907))
	{
		return 2;
	}
	else if (func_190(iParam0, -1218707194))
	{
		return 1;
	}
	else if (func_190(iParam0, 1888974372))
	{
		return 0;
	}
	return 1;
}

void func_1299(bool bParam0, bool bParam1, int iParam2)
{
	Global_1935689->f_4 = bParam0;
	Global_1935689->f_15 = iParam2;
	if (bParam0)
	{
		Global_1935689->f_5 = 0;
	}
	if (bParam1 || (func_1305() && iParam2 == 0))
	{
		func_1306(1);
		func_1307(1);
	}
}

bool func_1300(var uParam0, int iParam1)
{
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 == 0)
	{
		return true;
	}
	return false;
}

int func_1301()
{
	return &Global_1899516;
}

bool func_1302(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam1))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(iParam0, &uParam1, uParam5, !bParam6))
	{
		return false;
	}
	return true;
}

bool func_1303(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return false;
	}
	return true;
}

int func_1304(int iParam0)
{
	if (func_23() == -1)
	{
		switch (iParam0)
		{
			case -2125499975:
				return 0;
			case -449205311:
				return 0;
			case 1160113249:
				return 0;
			default:
				break;
		}
		return 0;
	}
	switch (iParam0)
	{
		case 2026485318:
			return 0;
		case 24043185:
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_1305()
{
	if ((Global_1935689->f_10195 != (Global_1935689->f_19.f_203 - 1) || func_1308(func_645(0), Global_1935689->f_10190, 0) > 0) || Global_1935689->f_10195 == 15)
	{
		return true;
	}
	return false;
}

void func_1306(int iParam0)
{
	Global_1935689->f_11 = iParam0;
}

void func_1307(int iParam0)
{
	Global_1935689->f_10 = iParam0;
}

int func_1308(int iParam0, int iParam1, bool bParam2)
{
	if (func_1309())
	{
		iVar0 = func_1310(iParam1, 0);
	}
	else
	{
		iVar0 = func_124(iParam1, bParam2, 0);
		if (does_entity_exist(iParam0))
		{
			iVar0 = (iVar0 + func_944(_inventory_get_ped_inventory_id(iParam0), iParam1));
		}
	}
	if (iParam1 == Global_1935689->f_1224)
	{
		iVar0++;
	}
	return iVar0;
}

bool func_1309()
{
	if ((func_128(Global_1935689->f_10186, 1) || func_128(Global_1935689->f_10186, 2)) || func_128(Global_1935689->f_10186, 4))
	{
		return true;
	}
	return false;
}

int func_1310(int iParam0, bool bParam1)
{
	iVar1 = func_124(iParam0, bParam1, 0);
	if (func_128(Global_1935689->f_10186, 1))
	{
		iVar0 = func_204(func_395(0));
		iVar1 = (iVar1 + func_944(_inventory_get_ped_inventory_id(iVar0), iParam0));
	}
	if (func_128(Global_1935689->f_10186, 2))
	{
		iVar0 = func_204(func_395(1));
		iVar1 = (iVar1 + func_944(_inventory_get_ped_inventory_id(iVar0), iParam0));
	}
	if (func_128(Global_1935689->f_10186, 4))
	{
		iVar0 = func_204(func_395(6));
		iVar1 = (iVar1 + func_944(_inventory_get_ped_inventory_id(iVar0), iParam0));
	}
	return iVar1;
}

