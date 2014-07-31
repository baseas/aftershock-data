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

/*
This bot is supposed to act normal in every aspect.
*/

#include "chars.h"

skill 1
{
	CHARACTERISTIC_NAME							"Rai"
	CHARACTERISTIC_GENDER						"female"
	CHARACTERISTIC_ATTACK_SKILL					0.3
	CHARACTERISTIC_ATTACK_DISTANCE				400
	CHARACTERISTIC_WEAPONWEIGHTS				"bots/rai_w.c"
	CHARACTERISTIC_AIM_SKILL					0.3
	CHARACTERISTIC_AIM_ACCURACY					0.3
	CHARACTERISTIC_VIEW_FACTOR					0.3
	CHARACTERISTIC_VIEW_MAXCHANGE				90
	CHARACTERISTIC_REACTIONTIME					1.5

	CHARACTERISTIC_CHAT_FILE					"bots/rai_t.c"
	CHARACTERISTIC_CHAT_NAME					"rai"
	CHARACTERISTIC_CHAT_INSULT					0.0
	CHARACTERISTIC_CHAT_MISC					0.2
	CHARACTERISTIC_CHAT_STARTENDLEVEL			0.2
	CHARACTERISTIC_CHAT_ENTEREXITGAME			0.2
	CHARACTERISTIC_CHAT_KILL					0.2
	CHARACTERISTIC_CHAT_DEATH					0.2
	CHARACTERISTIC_CHAT_ENEMYSUICIDE			0.2
	CHARACTERISTIC_CHAT_HITTALKING				0.2
	CHARACTERISTIC_CHAT_HITNODEATH				0.0
	CHARACTERISTIC_CHAT_HITNOKILL				0.0
	CHARACTERISTIC_CHAT_RANDOM					0.0
	CHARACTERISTIC_CHAT_REPLY					0.5

	CHARACTERISTIC_CROUCHER						0.0
	CHARACTERISTIC_JUMPER						0.0
	CHARACTERISTIC_WALKER						0.0
	CHARACTERISTIC_WEAPONJUMPING				0.5

	CHARACTERISTIC_ITEMWEIGHTS					"bots/rai_i.c"
	CHARACTERISTIC_AGGRESSION					0.25
	CHARACTERISTIC_SELFPRESERVATION				0.5
	CHARACTERISTIC_VENGEFULNESS					0.25
	CHARACTERISTIC_CAMPER						0.25

	CHARACTERISTIC_EASY_FRAGGER					0.5
	CHARACTERISTIC_ALERTNESS					0.5

	CHARACTERISTIC_AIM_ACCURACY_MACHINEGUN		0.43
	CHARACTERISTIC_AIM_ACCURACY_SHOTGUN			0.43
	CHARACTERISTIC_AIM_ACCURACY_ROCKETLAUNCHER	0.43
	CHARACTERISTIC_AIM_ACCURACY_GRENADELAUNCHER	0.43
	CHARACTERISTIC_AIM_ACCURACY_LIGHTNING		0.43
	CHARACTERISTIC_AIM_ACCURACY_PLASMAGUN		0.43
	CHARACTERISTIC_AIM_ACCURACY_RAILGUN			0.43
	CHARACTERISTIC_AIM_ACCURACY_BFG10K			0.43
	CHARACTERISTIC_AIM_SKILL_ROCKETLAUNCHER		0.43
	CHARACTERISTIC_AIM_SKILL_GRENADELAUNCHER	0.43
	CHARACTERISTIC_AIM_SKILL_PLASMAGUN			0.43
	CHARACTERISTIC_AIM_SKILL_BFG10K				0.43

	CHARACTERISTIC_FIRETHROTTLE					0.43
}

skill 2
{
	CHARACTERISTIC_AIM_SKILL					0.3
	CHARACTERISTIC_AIM_ACCURACY					0.3

	CHARACTERISTIC_REACTIONTIME					1.2
}

skill 3
{
	CHARACTERISTIC_AIM_SKILL					0.3
	CHARACTERISTIC_AIM_ACCURACY					0.3

	CHARACTERISTIC_REACTIONTIME					1.2
}

skill 4
{
	CHARACTERISTIC_AIM_SKILL					0.3
	CHARACTERISTIC_AIM_ACCURACY					0.3

	CHARACTERISTIC_REACTIONTIME					1.2
}

skill 5
{
	CHARACTERISTIC_AIM_SKILL					0.3
	CHARACTERISTIC_AIM_ACCURACY					0.3

	CHARACTERISTIC_REACTIONTIME					1.2
}

