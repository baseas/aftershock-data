textures/gothic_wall/window_evil6a
{
	qer_editorimage textures/gothic_wall/window_evil6a.jpg
	q3map_lightimage textures/gothic_wall/window_evil6a_glow.jpg
	q3map_surfacelight 900
	{
		map $lightmap
		rgbGen identity
	}
	{
		map textures/gothic_wall/window_evil6a.jpg
		blendFunc filter
		rgbGen identity
	}
	{
		map textures/gothic_wall/window_evil6a_glow.jpg
		blendfunc add
	}
}