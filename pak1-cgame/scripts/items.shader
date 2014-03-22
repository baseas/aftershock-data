// Shaders for 3D armor and health items

models/powerups/armor/shard
{
	nopicmip
	{
		map models/powerups/armor/shard_env.jpg
		tcgen environment
	}
}

models/powerups/armor/shard_env
{
	nopicmip
	{
		map models/powerups/armor/shard_env.jpg
		blendfunc add
		rgbgen wave sin .2 .5 0 .5
		tcgen environment
	}
}

redArmor
{
	nopicmip
	{
		map models/powerups/armor/redarmor.tga
		rgbGen lightingDiffuse
	}
	{
		map models/powerups/armor/specular.tga
		blendfunc add
		rgbGen lightingDiffuse
		tcGen environment
	}
	{
		map models/powerups/armor/redarmor.tga
		blendfunc blend
		rgbGen lightingDiffuse
	}
}

yellowArmor
{
	nopicmip
	{
		map models/powerups/armor/yellowarmor.tga
		rgbGen lightingDiffuse
	}
	{
		map models/powerups/armor/specular.tga
		blendfunc add
		rgbGen lightingDiffuse
		tcGen environment
	}
	{
		map models/powerups/armor/yellowarmor.tga
		blendfunc blend
		rgbGen lightingDiffuse
	}
}

greenArmor
{
	nopicmip
	{
		map models/powerups/armor/greenarmor.tga
		rgbGen lightingDiffuse
	}
	{
		map models/powerups/armor/specular.tga
		blendfunc add
		rgbGen lightingDiffuse
		tcGen environment
	}
	{
		map models/powerups/armor/greenarmor.tga
		blendfunc blend
		rgbGen lightingDiffuse
	}
}

smallCross
{
	nopicmip
	{
		map models/powerups/health/greenchrm.tga
		tcMod rotate -76
		tcGen environment
	}
	{
		map models/powerups/health/greenchrm.tga
		blendfunc add
		tcMod rotate 54
		tcGen environment
	}
}

mediumCross
{
	nopicmip
	{
		map models/powerups/health/envmapligh.tga
		tcMod rotate -76
		tcGen environment
	}
	{
		map models/powerups/health/envmapyel.tga
		blendfunc add
		tcMod rotate 54
		tcGen environment
	}
}

largeCross
{
	nopicmip
	{
		map models/powerups/health/orangechrm.tga
		tcMod rotate -76
		tcGen environment
	}
	{
		map models/powerups/health/orangechrm.tga
		blendfunc add
		tcMod rotate 54
		tcGen environment
	}
}

megaCross
{
	nopicmip
	{
		map models/powerups/health/envmapblue2.tga
		tcMod rotate -76
		tcGen environment
	}
	{
		map models/powerups/health/megahelth.tga
		blendfunc add
		tcMod rotate 54
		tcGen environment
	}
}

smallcrossEnv
{
	nopicmip
	cull disable
	{
		map models/powerups/health/envmaprail.tga
		blendfunc add
		tcMod scroll 1 0.1
		tcGen environment
	}
}

mediumcrossEnv
{
	nopicmip
	cull disable
	{
		map models/powerups/health/tinfx2.tga
		blendfunc add
		tcGen environment
	}
}

largecrossEnv
{
	nopicmip
	cull disable
	{
		map models/powerups/health/largehelth.tga
		blendfunc add
		tcMod scroll 1 0.2
		tcMod scale 0.5 0.5
		tcGen environment
	}
}

megacrossEnv
{
	nopicmip
	cull disable
	{
		map models/powerups/health/megahelth.tga
		blendfunc add
		tcMod scroll 1 0.2
		tcGen environment
	}
}

