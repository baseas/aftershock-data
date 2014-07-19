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
// items.c -- item definitions

#include "inv.h"

#define NOITEM		0
#define AMMOI		1
#define WEAPONI		2
#define HEALTHI		3
#define ARMORI		4
#define POWERI		5
#define FLAGI		6
#define ROAMI		7

iteminfo "ammo_bullets"
{
	name		"Bullets"
	model		"models/powerups/ammo/machinegunam.md3"
	modelindex	MODELINDEX_BULLETS
	type		AMMOI
	index		INVENTORY_BULLETS
	respawntime	30
	mins		{ -13, -13, -13 }
	maxs		{ 13, 13, 13 }
}

iteminfo "ammo_shells"
{
	name		"Shells"
	model		"models/powerups/ammo/shotgunam.md3"
	modelindex	MODELINDEX_SHELLS
	type		AMMOI
	index		INVENTORY_SHELLS
	respawntime	30
	mins		{ -13, -13, -13 }
	maxs		{ 13, 13, 13 }
}

iteminfo "ammo_grenades"
{
	name		"Grenades"
	model		"models/powerups/ammo/grenadeam.md3"
	modelindex	MODELINDEX_GRENADES
	type		AMMOI
	index		INVENTORY_GRENADES
	respawntime	30
	mins		{ -13, -13, -13 }
	maxs		{ 13, 13, 13 }
}

iteminfo "ammo_rockets"
{
	name		"Rockets"
	model		"models/powerups/ammo/rocketam.dm3"
	modelindex	MODELINDEX_ROCKETS
	type		AMMOI
	index		INVENTORY_ROCKETS
	respawntime	30
	mins		{ -13, -13, -13 }
	maxs		{ 13, 13, 13 }
}

iteminfo "ammo_lightning"
{
	name		"Lightning"
	model		"models/powerups/ammo/lightningam.md3"
	modelindex	MODELINDEX_LIGHTNINGAMMO
	type		AMMOI
	index		INVENTORY_LIGHTNINGAMMO
	respawntime	30
	mins		{ -13, -13, -13 }
	maxs		{ 13, 13, 13 }
}

iteminfo "ammo_slugs"
{
	name		"Slugs"
	model		"models/powerups/ammo/railgunam.md3"
	modelindex	MODELINDEX_SLUGS
	type		AMMOI
	index		INVENTORY_SLUGS
	respawntime	30
	mins		{ -13, -13, -13 }
	maxs		{ 13, 13, 13 }
}

iteminfo "ammo_cells"
{
	name		"Cells"
	model		"models/powerups/ammo/plasmaam.md3"
	modelindex	MODELINDEX_CELLS
	type		AMMOI
	index		INVENTORY_CELLS
	respawntime	30
	mins		{ -13, -13, -13 }
	maxs		{ 13, 13, 13 }
}

iteminfo "holdable_medkit"
{
	name		"Medkit"
	model		"models/powerups/holdable/medkit.md3"
	modelindex	MODELINDEX_MEDKIT
	type		HEALTHI
	index		INVENTORY_MEDKIT
	respawntime	30
	mins		{ -13, -13, -13 }
	maxs		{ 13, 13, 13 }
}

iteminfo "holdable_teleporter"
{
	name		"Personal Teleporter"
	model		"models/powerups/holdable/teleporter.md3"
	modelindex	MODELINDEX_TELEPORTER
	type		POWERI
	index		INVENTORY_TELEPORTER
	respawntime	60
	mins		{ -13, -13, -13 }
	maxs		{ 13, 13, 13 }
}

iteminfo "item_armor_shard"
{
	name		"Armor Shard"
	model		"models/powerups/armor/shard.md3"
	modelindex	MODELINDEX_ARMORSHARD
	type		ARMORI
	index		INVENTORY_ARMOR
	respawntime	25
	mins		{ -13, -13, -13 }
	maxs		{ 13, 13, 13 }
}

iteminfo "item_armor_jacket"
{
	name		"Green Armor"
	model		"models/powerups/armor/armor_gre.md3"
	modelindex	MODELINDEX_ARMORJACKET
	type		ARMORI
	index		INVENTORY_ARMOR
	respawntime	25
	mins		{ -13, -13, -13 }
	maxs		{ 13, 13, 13 }
}

iteminfo "item_armor_combat"
{
	name		"Yellow Armor"
	model		"models/powerups/armor/armor_yel.md3"
	modelindex	MODELINDEX_ARMORCOMBAT
	type		ARMORI
	index		INVENTORY_ARMOR
	respawntime	30
	mins		{ -13, -13, -13 }
	maxs		{ 13, 13, 13 }
}

iteminfo "item_armor_body"
{
	name		"Red Armor"
	model		"models/powerups/armor/armor_red.md3"
	modelindex	MODELINDEX_ARMORBODY
	type		ARMORI
	index		INVENTORY_ARMOR
	respawntime	25
	mins		{ -13, -13, -13 }
	maxs		{ 13, 13, 13 }
}

iteminfo "item_health_small"
{
	name		"5 Health"
	model		"models/powerups/health/small_cross.md3"
	modelindex	MODELINDEX_HEALTHSMALL
	type		HEALTHI
	index		INVENTORY_HEALTH
	respawntime	35
	mins		{ -13, -13, -13 }
	maxs		{ 13, 13, 13 }
}

iteminfo "item_health"
{
	name		"25 Health"
	model		"models/powerups/health/medium_cross.md3"
	modelindex	MODELINDEX_HEALTH
	type		HEALTHI
	index		INVENTORY_HEALTH
	respawntime	35
	mins		{ -13, -13, -13 }
	maxs		{ 13, 13, 13 }
}

iteminfo "item_health_large"
{
	name		"50 Health"
	model		"models/powerups/health/large_cross.md3"
	modelindex	MODELINDEX_HEALTHLARGE
	type		HEALTHI
	index		INVENTORY_HEALTH
	respawntime	35
	mins		{ -13, -13, -13 }
	maxs		{ 13, 13, 13 }
}

iteminfo "item_health_mega"
{
	name		"Mega Health"
	model		"models/powerups/health/mega_cross.md3"
	modelindex	MODELINDEX_HEALTHMEGA
	type		HEALTHI
	index		INVENTORY_HEALTH
	respawntime	35
	mins		{ -13, -13, -13 }
	maxs		{ 13, 13, 13 }
}

iteminfo "weapon_gauntlet"
{
	name		"Gauntlet"
	model		"models/weapons2/gauntlet/gauntlet.md3"
	modelindex	MODELINDEX_GAUNTLET
	type		WEAPONI
	index		INVENTORY_GAUNTLET
	respawntime	30
	mins		{ -13, -13, -13 }
	maxs		{ 13, 13, 13 }
}

iteminfo "weapon_machinegun"
{
	name		"Machinegun"
	model		"models/weapons2/machinegun/machinegun.md3"
	modelindex	MODELINDEX_MACHINEGUN
	type		WEAPONI
	index		INVENTORY_MACHINEGUN
	respawntime	30
	mins		{ -13, -13, -13 }
	maxs		{ 13, 13, 13 }
}

iteminfo "weapon_shotgun"
{
	name		"Shotgun"
	model		"models/weapons2/shotgun/shotgun.md3"
	modelindex	MODELINDEX_SHOTGUN
	type		WEAPONI
	index		INVENTORY_SHOTGUN
	respawntime	30
	mins		{ -13, -13, -13 }
	maxs		{ 13, 13, 13 }
}

iteminfo "weapon_grenadelauncher"
{
	name		"Grenade Launcher"
	model		"models/weapons2/grenadel/grenadel.md2"
	modelindex	MODELINDEX_GRENADELAUNCHER
	type		WEAPONI
	index		INVENTORY_GRENADELAUNCHER
	respawntime	30
	mins		{ -13, -13, -13 }
	maxs		{ 13, 13, 13 }
}

iteminfo "weapon_rocketlauncher"
{
	name		"Rocket Launcher"
	model		"models/weapons2/rocketl/rocketl.md3"
	modelindex	MODELINDEX_ROCKETLAUNCHER
	type		WEAPONI
	index		INVENTORY_ROCKETLAUNCHER
	respawntime	30
	mins		{ -13, -13, -13 }
	maxs		{ 13, 13, 13 }
}

iteminfo "weapon_lightning"
{
	name		"Lightning Gun"
	model		"models/weapons2/lightning/lightning.md3"
	modelindex	MODELINDEX_LIGHTNING
	type		WEAPONI
	index		INVENTORY_LIGHTNING
	respawntime	30
	mins		{ -13, -13, -13 }
	maxs		{ 13, 13, 13 }
}

iteminfo "weapon_railgun"
{
	name		"Railgun"
	model		"models/weapons2/railgun/railgun.md3"
	modelindex	MODELINDEX_RAILGUN
	type		WEAPONI
	index		INVENTORY_RAILGUN
	respawntime	30
	mins		{ -13, -13, -13 }
	maxs		{ 13, 13, 13 }
}

iteminfo "weapon_plasmagun"
{
	name		"Plasma Gun"
	model		"models/weapons2/plasma/plasma.md3"
	modelindex	MODELINDEX_PLASMAGUN
	type		WEAPONI
	index		INVENTORY_PLASMAGUN
	respawntime	30
	mins		{ -13, -13, -13 }
	maxs		{ 13, 13, 13 }
}

iteminfo "item_quad"
{
	name		"Quad Damage"
	model		"models/powerups/instant/quad.md3"
	modelindex	MODELINDEX_QUAD
	type		POWERI
	index		INVENTORY_QUAD
	respawntime	120
	mins		{ -13, -13, -13 }
	maxs		{ 13, 13, 13 }
}

iteminfo "item_enviro"
{
	name		"Battle Suit"
	model		"models/powerups/instant/enviro.md3"
	modelindex	MODELINDEX_ENVIRONMENTSUIT
	type		POWERI
	index		INVENTORY_ENVIRONMENTSUIT
	respawntime	120
	mins		{ -13, -13, -13 }
	maxs		{ 13, 13, 13 }
}

iteminfo "item_haste"
{
	name		"Speed"
	model		"models/powerups/instant/haste_ring.md3"
	modelindex	MODELINDEX_HASTE
	type		POWERI
	index		INVENTORY_HASTE
	respawntime	120
	mins		{ -13, -13, -13 }
	maxs		{ 13, 13, 13 }
}

iteminfo "item_invisibility"
{
	name		"Invisibility"
	model		"models/powerups/instant/invis.md3"
	modelindex	MODELINDEX_INVISIBILITY
	type		POWERI
	index		INVENTORY_INVISIBILITY
	respawntime	120
	mins		{ -13, -13, -13 }
	maxs		{ 13, 13, 13 }
}

iteminfo "item_regen"
{
	name		"Regeneration"
	model		"models/powerups/instant/regen_ring.md3"
	modelindex	MODELINDEX_REGEN
	type		POWERI
	index		INVENTORY_REGEN
	respawntime	120
	mins		{ -13, -13, -13 }
	maxs		{ 13, 13, 13 }
}

iteminfo "team_CTF_redflag"
{
	name		"Red Flag"
	model		"models/flags/r_flag.md3"
	modelindex	MODELINDEX_REDFLAG
	type		FLAGI
	index		INVENTORY_REDFLAG
	mins		{ -13, -13, -13 }
	maxs		{ 13, 13, 13 }
}

iteminfo "team_CTF_blueflag"
{
	name		"Blue Flag"
	model		"models/flags/b_flag.md3"
	modelindex	MODELINDEX_BLUEFLAG
	type		FLAGI
	index		INVENTORY_BLUEFLAG
	mins		{ -13, -13, -13 }
	maxs		{ 13, 13, 13 }
}

iteminfo "item_botroam"
{
		name		"Bot Roam Goal"
	model		""
	modelindex	0
	type		ROAMI
	index		0
	mins		{ -13, -13, -13 }
	maxs		{ 13, 13, 13 }
}

