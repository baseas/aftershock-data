smokePuff
{
	nopicmip
	cull disable
	{
		clampmap gfx/misc/smokepuff3.tga
		blendfunc blend
		tcMod rotate -55
		rgbGen entity
		alphaGen Vertex
	}
}

smokePuffRagePro
{
	nopicmip
	cull disable
	{
		map gfx/misc/smokepuffragepro.tga
		blendfunc blend
		alphaGen Vertex
	}
}

hasteSmokePuff
{
	nopicmip
	cull disable
	{
		map gfx/misc/hastesmoke.tga
		blendfunc blend
		tcMod rotate 64
		alphaGen Vertex
	}
}

