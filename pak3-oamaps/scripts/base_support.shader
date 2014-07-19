textures/base_support/cable_trans {
	surfaceparm nonsolid
	{
		map $lightmap
		rgbGen identity
	}
	{
		map textures/base_support/cable_trans
		rgbGen identity
		blendFunc filter
	}
}

textures/base_support/x_support
{
	surfaceparm metalsteps
	surfaceparm nomarks
	cull none
	nopicmip
	{
		map textures/base_support/x_support.tga
		blendFunc gl_one gl_zero	
		rgbGen identity
		alphaFunc GT0
		depthWrite
	}
	{
		map $lightmap
		blendFunc GL_DST_COLOR GL_ZERO
		rgbGen identity
		depthFunc equal
	}
}

textures/base_support/x_support2
{
	surfaceparm metalsteps
	surfaceparm nomarks
	cull none
	nopicmip
	{
		map textures/base_support/x_support2.tga
		blendFunc gl_one gl_zero	
		rgbGen identity
		alphaFunc GT0
		depthWrite
	}
	{
		map $lightmap
		blendFunc GL_DST_COLOR GL_ZERO
		rgbGen identity
		depthFunc equal
	}
}