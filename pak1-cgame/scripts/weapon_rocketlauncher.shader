models/weapons2/rocketl/blackchrome
{
	nopicmip
	{
		map models/weapons2/rocketl/blackchrome.tga
		rgbGen lightingDiffuse
		tcGen environment
	}
}

models/weapons2/rocketl/blackhandle
{
	nopicmip
	{
		map models/weapons2/rocketl/blackhandle.tga
		rgbGen lightingDiffuse
		tcGen environment
	}
}

models/weapons2/rocketl/muzzlside
{
	nopicmip
	cull disable
	{
		map models/weapons2/rocketl/muzzlside.tga
		blendfunc add
	}
}

rocketFlash
{
	nopicmip
	deformVertexes autosprite
	{
		clampmap models/weapons2/rocketl/muzzy.tga
		blendfunc add
		tcMod rotate 1246
	}
	{
		clampmap models/weapons2/rocketl/muzzy.tga
		blendfunc add
		tcMod rotate -1246
	}
}

rocketFlare
{
	nopicmip
	deformVertexes autosprite
	{
		clampmap gfx/fx/flares/wide.tga
		blendfunc add
		rgbGen const ( 0.980392 0.882353 0.737255 )
		tcMod stretch inversesawtooth 0.6 0.4 0 4
	}
}

rocketThrust
{
	nopicmip
	cull disable
	{
		clampmap gfx/fx/flares/flarey.tga
		blendfunc add
		rgbGen const ( 0.541176 0.341176 0.156863 )
		tcMod rotate -96
		tcMod stretch sin 0.3 0.7 0 8
	}
	{
		clampmap gfx/fx/flares/wide.tga
		blendfunc add
		rgbGen const ( 0.843137 0.588235 0.4 )
	}
	{
		clampmap gfx/fx/flares/newflare.tga
		blendfunc add
		rgbGen const ( 0.713726 0.270588 0.121569 )
		tcMod rotate 46
		tcMod stretch inversesawtooth 0.6 0.4 0 4
	}
}

models/weapons2/rocketl/flare
{
	nopicmip
	deformVertexes autosprite
	{
		map models/weapons2/rocketl/flare.tga
		blendfunc add
	}
}

