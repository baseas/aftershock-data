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
//
// fuzi.c -- weights for item pickups

#include "inv.h"

// use a weight range from 0 to 100 here

#ifndef ARMOR
	#define ARMOR		20
#endif
#ifndef HEALTH
	#define HEALTH		20
#endif
#ifndef POWERUP
	#define POWERUP		40
#endif
#ifndef FLAGW
	#define FLAGW		500
#endif

#ifndef MGW
	#define MGW	100
#endif
#ifndef SGW
	#define SGW	100
#endif
#ifndef GLW
	#define GLW	100
#endif
#ifndef RLW
	#define RLW	100
#endif
#ifndef LGW
	#define LGW	100
#endif
#ifndef RGW
	#define RGW	100
#endif
#ifndef PGW
	#define PGW	100
#endif

// get a weapon to defend first
#if INVENTORY_SHOTGUN + INVENTORY_LIGHTNING + INVENTORY_ROCKETLAUNCHER + INVENTORY_PLASMAGUN < 2
	#define WEAPON		30
#else
	#define WEAPON		10
#endif

weight "item_armor_shard"
{
	switch (INVENTORY_ARMOR) {
	case 20: return $evalfloat(80 * ARMOR);
	case 50: return $evalfloat(30 * ARMOR);
	case 100: return $evalfloat(20 * ARMOR);
	case 200: return $evalfloat(20 * ARMOR);
	default: return 0;
	}
}

weight "item_armor_jacket"
{
	switch (INVENTORY_ARMOR) {
	case 20: return $evalfloat(70 * ARMOR);
	case 50: return $evalfloat(50 * ARMOR);
	case 100: return $evalfloat(40 * ARMOR);
	case 200: return $evalfloat(30 * ARMOR);
	default: return 0;
	}
}

weight "item_armor_combat"
{
	switch (INVENTORY_ARMOR) {
	case 20: return $evalfloat(100 * ARMOR);
	case 50: return $evalfloat(60 * ARMOR);
	case 100: return $evalfloat(50 * ARMOR);
	case 200: return $evalfloat(20 * ARMOR);
	default: return 0;
	}
}

weight "item_armor_body"
{
	switch (INVENTORY_ARMOR) {
	case 20: return $evalfloat(80 * ARMOR);
	case 50: return $evalfloat(90 * ARMOR);
	case 100: return $evalfloat(100 * ARMOR);
	case 200: return $evalfloat(80 * ARMOR);
	default: return 0;
	}
}

weight "item_health_small"
{
	switch (INVENTORY_HEALTH) {
	case 50: return $evalfloat(100 * HEALTH);
	case 100: return $evalfloat(80 * HEALTH);
	case 200: return $evalfloat(60 * HEALTH);
	default: return 0;
	}
}

weight "item_health"
{
	switch (INVENTORY_HEALTH) {
	case 40: return $evalfloat(95 * HEALTH);
	case 90: return $evalfloat(50 * HEALTH);
	case 100: return $evalfloat(40 * HEALTH);
	default: return 0;
	}
}

weight "item_health_large"
{
	switch (INVENTORY_HEALTH) {
	case 40: return $evalfloat(100 * HEALTH);
	case 90: return $evalfloat(50 * HEALTH);
	case 100: return $evalfloat(30 * HEALTH);
	default: return 0;
	}
}

weight "item_health_mega"
{
	switch (INVENTORY_HEALTH) {
	case 50: return $evalfloat(70 * HEALTH);
	case 70: return $evalfloat(100 * HEALTH);
	case 80: return $evalfloat(100 * HEALTH);
	case 120: return $evalfloat(100 * HEALTH);
	default:
		switch (NUM_VISIBLE_TEAMMATES) {
			case 1: return $evalfloat(100 * HEALTH);
			default: return $evalfloat(50 * HEALTH);
		}
	}
}

weight "weapon_machinegun"
{
	switch (INVENTORY_MACHINEGUN) {
	case 1: return $evalfloat(100 * MGW * WEAPON);
	default:
		switch (INVENTORY_BULLETS) {
		case 1: return $evalfloat(100 * MGW * WEAPON);
		case 40: return $evalfloat(80 * MGW * WEAPON);
		case 70: return $evalfloat(70 * MGW * WEAPON);
		case 100: return $evalfloat(30 * MGW * WEAPON);
		default: return 0;
		}
	}
}

weight "weapon_shotgun"
{
	switch (INVENTORY_SHOTGUN) {
	case 1: return $evalfloat(100 * SGW * WEAPON);
	default:
		switch (INVENTORY_SHELLS) {
		case 1: return $evalfloat(100 * SGW * WEAPON);
		case 3: return $evalfloat(75 * SGW * WEAPON);
		case 5: return $evalfloat(30 * SGW * WEAPON);
		case 10: return $evalfloat(30 * SGW * WEAPON);
		default: return 0;
		}
	}
}

weight "weapon_grenadelauncher"
{
	switch (INVENTORY_GRENADELAUNCHER) {
	case 1: return $evalfloat(100 * GLW * WEAPON);
	default:
		switch (INVENTORY_GRENADES) {
		case 1: return $evalfloat(100 * GLW * WEAPON);
		case 3: return $evalfloat(90 * GLW * WEAPON);
		case 5: return $evalfloat(65 * GLW * WEAPON);
		case 10: return $evalfloat(30 * GLW * WEAPON);
		default: return 0;
		}
	}
}

weight "weapon_rocketlauncher"
{
	switch (INVENTORY_ROCKETLAUNCHER) {
	case 1: return $evalfloat(100 * RLW * WEAPON);
	default:
		switch (INVENTORY_ROCKETS) {
		case 1: return $evalfloat(100 * RLW * WEAPON);
		case 3: return $evalfloat(75 * RLW * WEAPON);
		case 5: return $evalfloat(50 * RLW * WEAPON);
		case 10: return $evalfloat(30 * RLW * WEAPON);
		default: return 0;
		}
	}
}

weight "weapon_lightning"
{
	switch (INVENTORY_LIGHTNING) {
	case 1: return $evalfloat(100 * LGW * WEAPON);
	default:
		switch (INVENTORY_LIGHTNINGAMMO) {
		case 1: return $evalfloat(100 * LGW * WEAPON);
		case 40: return $evalfloat(80 * LGW * WEAPON);
		case 60: return $evalfloat(70 * LGW * WEAPON);
		case 100: return $evalfloat(50 * LGW * WEAPON);
		default: return 0;
		}
	}
}

weight "weapon_railgun"
{
	switch (INVENTORY_RAILGUN) {
	case 1: return $evalfloat(100 * RGW * WEAPON);
	default:
		switch (INVENTORY_SLUGS) {
		case 1: return $evalfloat(100 * RGW * WEAPON);
		case 3: return $evalfloat(70 * RGW * WEAPON);
		case 5: return $evalfloat(40 * RGW * WEAPON);
		case 10: return $evalfloat(20 * RGW * WEAPON);
		default: return 0;
		}
	}
}

weight "weapon_plasmagun"
{
	switch (INVENTORY_PLASMAGUN) {
	case 1: return $evalfloat(100 * PGW * WEAPON);
	default:
		switch (INVENTORY_CELLS) {
		case 1: return $evalfloat(100 * PGW * WEAPON);
		case 10: return $evalfloat(90 * PGW * WEAPON);
		case 30: return $evalfloat(50 * PGW * WEAPON);
		case 50: return $evalfloat(20 * PGW * WEAPON);
		default: return 0;
		}
	}
}

weight "ammo_bullets"
{
	switch (INVENTORY_MACHINEGUN) {
	case 1: return 0;
	default:
		switch (INVENTORY_BULLETS) {
		case 1: return $evalfloat(100 * MGW * WEAPON);
		case 40: return $evalfloat(80 * MGW * WEAPON);
		case 70: return $evalfloat(70 * MGW * WEAPON);
		case 100: return $evalfloat(30 * MGW * WEAPON);
		case 150: return $evalfloat(20 * MGW * WEAPON);
		case 200: return $evalfloat(10 * MGW * WEAPON);
		default: return 0;
		}
	}
}

weight "ammo_shells"
{
	switch (INVENTORY_SHOTGUN) {
	case 1: return 0;
	default:
		switch (INVENTORY_SHELLS) {
		case 1: return $evalfloat(100 * SGW * WEAPON);
		case 3: return $evalfloat(75 * SGW * WEAPON);
		case 5: return $evalfloat(30 * SGW * WEAPON);
		case 10: return $evalfloat(30 * SGW * WEAPON);
		case 15: return $evalfloat(20 * SGW * WEAPON);
		default: return 0;
		}
	}
}

weight "ammo_grenades"
{
	switch (INVENTORY_GRENADELAUNCHER) {
	case 1: return 0;
	default:
		switch (INVENTORY_GRENADES) {
		case 1: return $evalfloat(100 * GLW * WEAPON);
		case 3: return $evalfloat(90 * GLW * WEAPON);
		case 5: return $evalfloat(65 * GLW * WEAPON);
		case 10: return $evalfloat(30 * GLW * WEAPON);
		case 15: return $evalfloat(20 * GLW * WEAPON);
		default: return 0;
		}
	}
}

weight "ammo_rockets"
{
	switch (INVENTORY_ROCKETLAUNCHER) {
	case 1: return 0;
	default:
		switch (INVENTORY_ROCKETS) {
		case 1: return $evalfloat(100 * RLW * WEAPON);
		case 3: return $evalfloat(75 * RLW * WEAPON);
		case 5: return $evalfloat(50 * RLW * WEAPON);
		case 10: return $evalfloat(30 * RLW * WEAPON);
		case 20: return $evalfloat(20 * RLW * WEAPON);
		default: return 0;
		}
	}
}

weight "ammo_lightning"
{
	switch (INVENTORY_LIGHTNING) {
	case 1: return 0;
	default:
		switch (INVENTORY_LIGHTNINGAMMO) {
		case 1: return $evalfloat(100 * LGW * WEAPON);
		case 40: return $evalfloat(80 * LGW * WEAPON);
		case 60: return $evalfloat(70 * LGW * WEAPON);
		case 100: return $evalfloat(50 * LGW * WEAPON);
		case 200: return $evalfloat(30 * LGW * WEAPON);
		default: return 0;
		}
	}
}

weight "ammo_slugs"
{
	switch (INVENTORY_RAILGUN) {
	case 1: return 0;
	default:
		switch (INVENTORY_SLUGS) {
		case 1: return $evalfloat(100 * RGW * WEAPON);
		case 3: return $evalfloat(70 * RGW * WEAPON);
		case 5: return $evalfloat(40 * RGW * WEAPON);
		case 10: return $evalfloat(20 * RGW * WEAPON);
		case 15: return $evalfloat(10 * RGW * WEAPON);
		default: return 0;
		}
	}
}

weight "ammo_cells"
{
	switch (INVENTORY_PLASMAGUN) {
	case 1: return 0;
	default:
		switch (INVENTORY_CELLS) {
		case 1: return $evalfloat(100 * PGW * WEAPON);
		case 10: return $evalfloat(90 * PGW * WEAPON);
		case 30: return $evalfloat(50 * PGW * WEAPON);
		case 50: return $evalfloat(20 * PGW * WEAPON);
		case 150: return $evalfloat(10 * PGW * WEAPON);
		default: return 0;
		}
	}
}

weight "holdable_teleporter"
{
	switch (INVENTORY_TELEPORTER) {
	case 1: return POWERUP;
	default: return 0;
	}
}

weight "holdable_medkit"
{
	switch (INVENTORY_TELEPORTER) {
	case 1: return POWERUP;
	default: return 0;
	}
}

weight "item_quad"
{
	return POWERUP;
}

weight "item_enviro"
{
	return POWERUP;
}

weight "item_haste"
{
	return POWERUP;
}

weight "item_invisibility"
{
	return POWERUP;
}

weight "item_regen"
{
	return POWERUP;
}

// This is only used to pickup dropped CTF
// flags now. The logic in here makes no
// sense since the bot has specific CTF AI.
// yet without it the bots barely move towards
// the opposing flags due to low flag weights.

weight "team_CTF_redflag"
{
	switch (INVENTORY_REDFLAG) {
	case 1: return FLAGW;
	default: return 300;
	}
}

weight "team_CTF_blueflag"
{
	switch (INVENTORY_BLUEFLAG) {
	case 1: return FLAGW;
	default: return 300;
	}
}

weight "item_botroam"
{
	return 1;
}

