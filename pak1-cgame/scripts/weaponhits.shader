bulletExplosion
{
	nopicmip
	cull disable
	{
		animmap 12 models/weaphits/bullet_0000.tga models/weaphits/bullet_0001.tga models/weaphits/bullet_0002.tga models/weaphits/bullet_0003.tga models/weaphits/bullet_0004.tga models/weaphits/bullet_0005.tga models/weaphits/bullet_0006.tga models/weaphits/bullet_0007.tga
		blendfunc add
	}
}

lightningExplosion
{
	nopicmip
	cull disable
	deformVertexes wave 9 sin 0 1 0 9
	{
		map models/weaphits/elecscroll.tga
		blendfunc add
		tcMod scroll -8 0
	}
}

bfgExplosion
{
	nopicmip
	{
		clampmap models/weaphits/bfgfiar.tga
		blendfunc add
		rgbGen wave inversesawtooth 0 1 0 1.6
		tcMod rotate 77
		tcMod stretch sin 0.3 0.7 0 0.6
	}
	{
		clampmap models/weaphits/bfgfiar.tga
		blendfunc add
		rgbGen wave inversesawtooth 0 1 0 1.6
		tcMod rotate -17
		tcMod stretch sin 0 1.3 0 0.8
	}
	{
		clampmap models/weaphits/bfgfiar.tga
		blendfunc add
		rgbGen wave inversesawtooth 0 1 0 1.6
		tcMod rotate -77
		tcMod stretch sawtooth 0 1.3 0 0.8
	}
}

plasmaExplosion
{
	nopicmip
	cull disable

	{
		clampmap sprites/plasmaExplosion.tga
		blendfunc add
		tcMod rotate -720
	}
}

railExplosion
{
	nopicmip
	cull disable
	{
		clampmap models/weaphits/smokering2.tga
		blendfunc blend
		rgbGen lightingDiffuse
//		tcMod stretch sawtooth 0 4.5 0 1.3
		tcMod rotate -80
		alphaGen wave inversesawtooth 0 1 0 1.65
	}
	{
		clampmap models/weaphits/smokering2.tga
		blendfunc blend
		rgbGen lightingDiffuse
//		tcMod stretch sawtooth 0 4.5 0 1.4
		tcMod rotate 66
		alphaGen wave inversesawtooth 0 1 0 1.65
	}
	{
		clampmap models/weaphits/spark.tga
		blendfunc gl_src_alpha gl_one
		rgbGen identity
//		tcMod stretch sawtooth 1.5 -3.5 0 1.1
		tcMod rotate -80
		alphaGen wave inversesawtooth 0 1 0 1.65
	}
}

bloodExplosion
{
	nopicmip
	{
		clampmap gfx/2d/bloodspew.tga
		blendfunc blend
		tcMod rotate 77
		tcMod stretch sin 0 2 0 0.4
		alphaGen wave inversesawtooth 0 1 0 1
	}
	{
		clampmap gfx/2d/bloodspew.tga
		blendfunc blend
		tcMod rotate -43
		tcMod stretch sin 0 1.7 0 0.4
		alphaGen wave inversesawtooth 0 1 0 1
	}
}

rocketExplosion
{
	nopicmip
	{
		animmap 8 models/weaphits/rlboom/rlboom_1.tga models/weaphits/rlboom/rlboom_2.tga models/weaphits/rlboom/rlboom_3.tga models/weaphits/rlboom/rlboom_4.tga models/weaphits/rlboom/rlboom_5.tga models/weaphits/rlboom/rlboom_6.tga models/weaphits/rlboom/rlboom_7.tga models/weaphits/rlboom/rlboom_8.tga
//		blendfunc gl_one gl_src_alpha
		blendfunc add
		rgbGen wave inversesawtooth 0 1 0 8
	}
	{
		animmap 8 models/weaphits/rlboom/rlboom_2.tga models/weaphits/rlboom/rlboom_3.tga models/weaphits/rlboom/rlboom_4.tga models/weaphits/rlboom/rlboom_5.tga models/weaphits/rlboom/rlboom_6.tga models/weaphits/rlboom/rlboom_7.tga models/weaphits/rlboom/rlboom_8.tga models/weaphits/rlboom/rlboom_8.tga
//		blendfunc gl_one gl_src_alpha
		blendfunc add
		rgbGen wave sawtooth 0 1 0 8
	}
}

grenadeExplosion2
{
	nopicmip
	{
		animmap 4 models/weaphits/glboom/glboom_1.tga models/weaphits/glboom/glboom_2.tga models/weaphits/glboom/glboom_3.tga models/weaphits/glboom/glboom_4.tga
		blendfunc add
		rgbGen wave inversesawtooth 0 1 0 8
	}
	{
		animmap 4 models/weaphits/glboom/glboom_1.tga models/weaphits/glboom/glboom_2.tga models/weaphits/glboom/glboom_3.tga models/weaphits/glboom/glboom_4.tga
		blendfunc add
		rgbGen wave sawtooth 0 1 0 8
	}
}

