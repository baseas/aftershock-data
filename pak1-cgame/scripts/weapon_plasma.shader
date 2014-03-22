models/weapons2/plasma/f_plasmagun2
{
	nopicmip
	cull disable
	{
		clampmap gfx/fx/flares/lava.tga
		blendfunc add
		rgbGen const ( 0 0.0862745 0.235294 )
		tcMod rotate 8455
		tcMod stretch sin 0 1 0 2
	}
	{
		clampmap gfx/fx/flares/flarey.tga
		blendfunc add
		rgbGen const ( 0.447059 0.623529 0.921569 )
		tcMod rotate 1466
		tcMod stretch sin 0 1 0 1
	}
	{
		clampmap gfx/fx/flares/twilightflare.tga
		blendfunc add
		rgbGen const ( 0.447059 0.623529 0.921569 )
		tcMod rotate -6455
	}
}

models/weapons2/plasma/f_plasmagun3
{
	nopicmip
	deformVertexes autosprite
	{
		clampmap gfx/fx/flares/twilightflare.tga
		blendfunc add
		tcMod rotate 1246
	}
	{
		clampmap gfx/fx/flares/twilightflare.tga
		blendfunc add
		tcMod rotate -1246
	}
}

models/weapons2/plasma/muzzlecenter
{
	nopicmip
	deformVertexes autosprite
	{
		clampmap gfx/fx/flares/twilightflare.tga
		blendfunc add
		tcMod rotate 1246
	}
	{
		clampmap gfx/fx/flares/twilightflare.tga
		blendfunc add
		tcMod rotate -1246
	}
}

models/weapons2/lightning/skinlightning
{
	nopicmip
	{
		map models/weapons2/lightning/skinlightning.tga
		rgbGen lightingDiffuse
	}
	{
		map gfx/fx/detail/d_met.tga
		blendfunc gl_dst_color gl_src_color
		tcMod scale 8 8
		detail
	}
	{
		map gfx/fx/spec/robawt.tga
		blendfunc gl_dst_color gl_dst_alpha
		rgbGen lightingDiffuse
		tcGen environment
		alphaGen lightingSpecular
		detail
	}
}

models/weapons2/plasma/skin
{
	nopicmip
	{
		map models/weapons2/plasma/skin.tga
		rgbGen lightingDiffuse
	}
	{
		map gfx/fx/detail/d_met.tga
		blendfunc gl_dst_color gl_src_color
		tcMod scale 8 8
		detail
	}
	{
		map models/weapons2/plasma/skin.tga
		blendfunc add
		rgbGen wave sin 0 1 0 1
		alphaFunc LT128
	}
	{
		map gfx/fx/spec/spots.tga
		blendfunc gl_dst_color gl_dst_alpha
		rgbGen lightingDiffuse
		tcGen environment
		alphaGen lightingSpecular
		detail
	}
}

models/weapons2/plasma/flare
{
	nopicmip
	deformVertexes autosprite
	{
		map models/weapons2/plasma/flare.tga
		blendfunc add
	}
}

sprites/plasma1
{
	nopicmip
	{
		clampmap sprites/plasmaa.tga
		blendfunc gl_src_alpha gl_one
		tcMod rotate 720
		alphaGen entity
	}
}

sprites/plasma1Color
{
	nopicmip
	{
		clampmap sprites/plasmaa.tga
		blendfunc gl_src_alpha gl_one
		tcMod rotate 720
		alphaGen entity
		rgbGen entity
	}
}

