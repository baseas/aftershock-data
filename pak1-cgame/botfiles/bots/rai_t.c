/*
===========================================================================
Copyright (C) 1999-2005 Id Software, Inc.

This file is part of Quake III Arena source code.

Quake III Arena source code is free software; you can redistribute it
and/or modify it under the terms of the GNU General Public License as
published by the Free Software Foundation; either version 2 of the License,
or (at your option) any later version.

Quake III Arena source code is distributed in the hope that it will be
useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Quake III Arena source code; if not, write to the Free Software
Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
===========================================================================
*/

chat "Rai"
{
	#include "teamplay.h"

	type "game_enter"
	{
		HELLO1;
		// 0 = bot name
		// 1 = random opponent
		// 4 = level's title
	}
	type "game_exit"
	{
		GOODBYE1;
		GOODBYE0;
		// 0 = bot name
		// 1 = random opponent
		// 4 = level's title
	}
	type "level_start"
	{
		HELLO2;
		
		// 0 = bot name
	}
	type "level_end"
	{
		// 0 = bot name
		// 1 = random opponent
		// 2 = opponent in first place
		// 3 = opponent in last place
		// 4 = level's title
	}
	type "level_end_victory"
	{
		LEVEL_END_VICTORY1;
		// 0 = bot name
		// 1 = random opponent
		// 3 = opponent in last place
		// 4 = level's title
	}
	type "level_end_lose"
	{
		// 0 = bot name
		// 1 = random opponent
		// 2 = opponent in first place
		// 4 = level's title
	}
	type "hit_talking"
	{
		DEATH_TALKING;
		// 0 = shooter
		// 1 = weapon used by shooter
	}
	type "hit_nodeath"
	{
		curse;
		// 0 = shooter
		// 1 = weapon used by shooter
	}
	type "hit_nokill"
	{
		// 0 = opponent
	}
	type "enemy_suicide"
	{
		// 0 = enemy
	}
	type "death_telefrag"
	{
		DEATH_TELEFRAGGED1;
		// 0 = enemy name
	}
	type "death_cratered"
	{
		DEATH_FALLING0;
		// 0 = random opponent
	}
	type "death_lava"
	{
		DEATH_SUICIDE1;
		// 0 = random opponent
	}
	type "death_slime"
	{
		DEATH_SLIME1;
		// 0 = random opponent
	}
	type "death_drown"
	{
		DEATH_DROWN0;
		// 0 = random opponent
	}
	type "death_suicide"
	{
		DEATH_SUICIDE2;
		// 0 = random opponent
	}
	type "death_gauntlet"
	{
		DEATH_GAUNTLET1;
		// 0 = enemy name
		// 1 = weapon used by enemy (NOTE: always set to Gauntlet)
	}
	type "death_rail"
	{
		DEATH_INSULT0;
		DEATH_FEM_INSULT1;
		DEATH_INSULT5;
		// 0 = enemy name
		// 1 = weapon used by enemy (NOTE: always set to Railgun)
	}
	type "death_bfg"
	{
		DEATH_BFG0;
		DEATH_BFG2;
		// 0 = enemy name
		// 1 = weapon used by enemy (NOTE: always set to BFG10K)
	}
	type "death_insult"
	{
		curse;
		DEATH_INSULT2;
		DEATH_INSULT0;
		// 0 = enemy name
		// 1 = weapon used by enemy
	}
	type "death_praise"
	{
		D_PRAISE0;
		D_PRAISE1;
		// 0 = enemy name
		// 1 = weapon used by enemy
	}
	type "kill_rail"
	{
		// 0 = enemy name
	}
	type "kill_gauntlet"
	{
		// 0 = enemy name
	}
	type "kill_telefrag"
	{
		// 0 = enemy name
	}
	type "kill_insult"
	{
		KILL_INSULT4;
		// 0 = enemy name
	}
	type "kill_praise"
	{
		// 0 = enemy name
	}
	type "random_insult"
	{
		TAUNT0;
		TAUNT_FEM0;
		TAUNT1;
		immaturity01;
		// 0 = name of randomly chosen player
		// 1 = name of the last player killed by this bot
		// 4 = level's title
		// 5 = random weapon from weapon list
	}
	type "random_misc"
	{
		GRRLTALK1;
		MISC4;
		MISC1;
		// 0 = name of randomly chosen player
		// 1 = name of the last player killed by this bot
		// 4 = level's title
		// 5 = random weapon from weapon list
	}
}

