wake
{
	nopicmip
	cull disable
	{
		animmap 30 sprites/multwake1.tga sprites/multwake2.tga sprites/multwake3.tga sprites/multwake4.tga sprites/multwake5.tga sprites/multwake6.tga sprites/multwake7.tga sprites/multwake8.tga 
		blendfunc gl_zero gl_one_minus_src_color
	}
}

gfx/misc/tracer
{
	nopicmip
	cull disable
	{
		map gfx/misc/tracer2.tga
		blendfunc add
	}
}

