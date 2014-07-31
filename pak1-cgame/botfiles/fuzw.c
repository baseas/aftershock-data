/*
===========================================================================
Copyright (C) 2006 Dmn_clown (aka: Bob Isaac (rjisaac@gmail.com))

This file is part of Open Arena and is based upon Mr. Elusive's fuzzy logic
system found in Quake 3 Arena.

Open Arena is free software; you can redistribute it
and/or modify it under the terms of the GNU General Public License as
published by the Free Software Foundation; either version 2 of the License,
or (at your option) any later version.

Open Arena is distributed in the hope that it will be
useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Foobar; if not, write to the Free Software
Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
===========================================================================
*/
//
// fuzw.c -- weights for weapon use

#include "inv.h"

#ifndef GTW
	#define GTW	100
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

// The gauntlet does always have a positive weight, so the
// bot will fall back to it if there are no other weapons.
// It there are no weapons at all and all weights are zero,
// the bot will not switch weapons.

weight "Gauntlet"
{
	switch (INVENTORY_GAUNTLET) {
	case 1: return 0;
	default:
		switch (ENEMY_HORIZONTAL_DIST) {
		case 50: return GTW;
		default: return 1;
		}
	}
}

weight "Machinegun"
{
	switch (INVENTORY_MACHINEGUN) {
	case 1: return 0;
	default:
		switch (INVENTORY_BULLETS) {
		case 1: return 0;
		default:
			switch (ENEMY_HORIZONTAL_DIST) {
			case 800: return MGW;
			default: return $evalint(MGW * 0.1);
			}
		}
	}
}

weight "Shotgun"
{
	switch (INVENTORY_SHOTGUN) {
	case 1: return 0;
	default:
		switch (INVENTORY_SHELLS) {
		case 1: return 0;
		default:
			switch (ENEMY_HORIZONTAL_DIST) {
			case 600: return SGW;
			default: return $evalint(SGW*0.1);
			}
		}
	}
}

weight "Grenade Launcher"
{
	switch (INVENTORY_GRENADELAUNCHER) {
	case 1: return 0;
	default:
		switch (INVENTORY_GRENADES) {
		case 1: return 0;
		default:
			switch (ENEMY_HORIZONTAL_DIST) {
			case 600: return GLW;
			default: return $evalint(GLW*0.1);
			}
		}
	}
}

weight "Rocket Launcher"
{
	switch (INVENTORY_ROCKETLAUNCHER)
	{
		case 1: return 0;
		default:
		{
		switch (INVENTORY_ROCKETS)
			{
			case 1: return 0;
			default:
				{
				switch (ENEMY_HORIZONTAL_DIST)
					{
					case 4000: return RLW;
					default: return $evalint(RLW * 0.1);
					}
				}
			}
		}
	}
}

weight "Lightning Gun"
{
	switch (INVENTORY_LIGHTNING) {
	case 1: return 0;
	default:
		switch (INVENTORY_LIGHTNINGAMMO) {
		case 1: return 0;
		default:
			switch (ENEMY_HORIZONTAL_DIST) {
			case 768: return LGW;
			default: return 0;
			}
		}
	}
}

weight "Railgun"
{
	switch (INVENTORY_RAILGUN) {
	case 1: return 0;
	default:
		switch (INVENTORY_SLUGS) {
		case 1: return 0;
		default:
			switch (NUM_VISIBLE_ENEMIES) {
			case 1: return $evalint(RGW * 0.2);
			default:
				switch (ENEMY_HORIZONTAL_DIST) {
				case 300: return $evalint(0.1 * RGW);
				case 768: return $evalint(0.3 * RGW);
				default: return RGW;
				}
			}
		}
	}
}

weight "Plasma Gun"
{
	switch (INVENTORY_PLASMAGUN) {
	case 1: return 0;
	default:
		switch (INVENTORY_CELLS) {
		case 1: return 0;
		default:
			return PGW;
		}
	}
}

