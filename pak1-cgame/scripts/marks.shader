gfx/damage/bullet_mrk
{
	nopicmip
	polygonoffset
	{
		map gfx/damage/bulletmult.tga
		blendfunc gl_zero gl_one_minus_src_color
		rgbGen identity
		//alphaGen Vertex
		alphaGen identity
	}
}

gfx/damage/burn_med_mrk
{
	nopicmip
	polygonoffset
	{
		map gfx/damage/burn_med_mrk.tga
		blendfunc gl_zero gl_one_minus_src_color
		rgbGen Vertex
	}
}

gfx/damage/hole_lg_mrk
{
	nopicmip
	polygonoffset
	{
		map gfx/damage/hole_lg_mrk.tga
		blendfunc gl_zero gl_one_minus_src_color
		rgbGen Vertex
	}
}

gfx/damage/plasma_mrk
{
	nopicmip
	polygonoffset
	{
		map gfx/damage/plasma_mrk.tga
		blendfunc blend
		rgbGen Vertex
		alphaGen Vertex
	}
}

markShadow
{
	nopicmip
	polygonoffset
	{
		map gfx/damage/shadow.tga
		blendfunc gl_zero gl_one_minus_src_color
		rgbGen Vertex
	}
}

projectionShadow
{
	polygonoffset
	deformvertexes projectionshadow
	{
		map $whiteimage
		blendfunc filter
		rgbGen wave square 0 0 0 0
	}
}

waterBubble
{
	sort underwater
	cull disable
	{
		map sprites/bubble.tga
		blendfunc blend
		rgbGen Vertex
		alphaGen Vertex
	}
}

