lightnnFlash
{
	nopicmip
	cull disable
	{
		animmap 20 models/weapons2/lightning/muzzle1.tga models/weapons2/lightning/muzzle2.tga models/weapons2/lightning/muzzle3.tga
		blendfunc gl_one gl_src_alpha
		rgbGen wave inversesawtooth 0 1 0 20
	}
	{
		animmap 20 models/weapons2/lightning/muzzle2.tga models/weapons2/lightning/muzzle3.tga models/weapons2/lightning/muzzle1.tga
		blendfunc gl_one gl_src_alpha
		rgbGen wave sawtooth 0 1 0 20
	}
}

