// Medkit

models/powerups/holdable/medkit_base
{
	nopicmip
	{
		map models/powerups/holdable/chrome_env.jpg
		tcGen environment
		rgbGen lightingdiffuse
		tcmod scale .5 .5
	}
}

models/powerups/holdable/medkit_plunger
{
	nopicmip
	{
		map models/powerups/holdable/envmapdimb.jpg
		tcgen environment
		blendfunc add
	}
}

models/powerups/holdable/medkit_slime
{
	nopicmip
	{
		map models/powerups/holdable/slime9.jpg
		tcmod scroll 1 1
		blendfunc add
	}
}

// Personal Teleporter

models/powerups/holdable/teleport_center
{
	nopicmip
	{
		map models/powerups/instant/chrome_env.jpg
		tcgen environment
		rgbGen lightingdiffuse
		tcmod scale .5 .5
	}
}

models/powerups/holdable/teleport_outer
{
	nopicmip
	{
		map models/powerups/instant/lavafloor.jpg
		tcmod scroll .5 .5
		blendfunc add
	}
}

teleportEffect
{
	nopicmip
	deformVertexes autosprite
	{
		clampmap models/powerups/instant/quadlite.tga
		blendfunc add
		rgbGen wave inversesawtooth 0 1 0 2
		tcMod rotate 85
		tcMod stretch sawtooth 0 1.5 0 2
	}
	{
		clampmap models/powerups/instant/quadlite2.tga
		blendfunc add
		rgbGen wave inversesawtooth 0 1 0 2
		tcMod rotate -73
		tcMod stretch sawtooth 1 -0.7 0 2
	}
}

// Battlesuit

models/powerups/instant/ebase
{
	nopicmip
	{
		map models/powerups/instant/envmapgold.jpg
		tcgen environment
		rgbGen vertex
	}
}

models/powerups/instant/ering
{
	nopicmip
	{
		map models/powerups/instant/envmapgold.jpg
		tcgen environment
		rgbgen vertex
	}
}

// Regeneration

rcad
{
	nopicmip
	{
		map models/powerups/instant/regenmap2.jpg
		tcgen environment
		rgbgen vertex
	}
}

rring
{
	nopicmip
	{
		map models/powerups/instant/regenmap2.jpg
		tcgen environment
		rgbgen vertex
	}
}

// Haste

models/powerups/instant/h_center
{
	nopicmip
	{
		map textures/effects/hastenv.jpg
		tcgen environment
		rgbgen vertex
	}
}

models/powerups/instant/h_ring
{
	nopicmip
	{
		map textures/effects/hastenv.jpg
		tcgen environment
		rgbgen vertex
	}
}

// Shells around weapons and players

powerups/quad
{
	nopicmip
	deformVertexes wave 100 sin 0.5 0 0 0
	{
		map gfx/fx/shells/quadshell.tga
		blendfunc add
		tcMod rotate 75
		tcGen environment
	}
}

powerups/quadWeapon
{
	nopicmip
	deformVertexes wave 100 sin 0.5 0 0 0
	{
		map gfx/fx/shells/quadshell.tga
		blendfunc add
		tcMod rotate 75
		tcGen environment
	}
}

powerups/battleSuit
{
	nopicmip
	deformVertexes wave 100 sin 0.5 0 0 0
	{
		map gfx/fx/shells/suitshell.tga
		blendfunc add
		tcMod rotate 75
	}
}

powerups/battleWeapon
{
	nopicmip
	deformVertexes wave 100 sin 0.5 0 0 0
	{
		map gfx/fx/shells/suitshell.tga
		blendfunc add
		tcMod rotate 75
	}
}

powerups/regen
{
	nopicmip
	deformVertexes wave 100 sin 0.5 0 0 0
	{
		map gfx/fx/shells/regenshell.tga
		blendfunc add
		tcMod rotate 75
	}
}

