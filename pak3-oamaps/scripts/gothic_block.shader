textures/gothic_block/blocks15cgeomtrn
{
	{
		map textures/sfx/proto_zzztblu
		tcMod stretch 2 2
		tcMod scroll 1 3
		tcMod turb 0 .2 0 0 6
		rgbGen identity
	}
	{
		map textures/gothic_block/blocks15cgeomtrn
		blendFunc blend
		rgbGen identity
	}
	{
		map $lightmap
		blendFunc filter
		rgbGen identity
	}
}

textures/gothic_block/blocks17bloody
{
	qer_editorimage textures/gothic_block/blocks17bloody.tga
	{
		map textures/gothic_block/blocks17bloody.tga
	}
	{
		map textures/liquids/proto_gruel3.jpg
		tcmod scroll .01 .01
		tcmod turb 0 0.01 0 .1
		alphagen lightingspecular
	}
	{
		map textures/gothic_block/blocks17bloody.tga
		blendFunc blend
		rgbGen identity
	}
	{
		map $lightmap
		blendFunc filter 
		rgbGen identity
	}
}

textures/gothic_block/blocks18b_ow
{
	qer_editorimage textures/gothic_block/blocks18b_ow.tga
	surfaceparm nomarks
	
	{
		map textures/sfx/fireswirl2.jpg
		tcmod rotate 1
		tcmod turb 1 .4 0 .5
		blendfunc add
	}
	{
		map textures/gothic_block/blocks18b_ow.tga
		blendfunc blend
		rgbgen identity
	}
	{
		map $lightmap
		blendfunc filter
		rgbgen identity
	}
}

textures/gothic_block/blocks18cgeomtrnx
{
	{
		map textures/gothic_block/blocks18cgeomtrnx
		rgbGen identity
	}
	{
		map textures/sfx/fireswirl2blue.jpg
		blendfunc add
		tcMod rotate 360
		tcMod stretch sin 1 0.8 1 0.4 
		rgbGen wave sin 0.3 5 0 6
	}
	{
		map textures/sfx/fireswirl2blue.jpg
		blendfunc add
		tcMod rotate 360
		tcMod stretch sin 1 0.8 1 0.4 
		rgbGen wave sin 0.3 5 0 6
	}
	{
		map textures/gothic_block/blocks18cgeomtrnx
		blendfunc blend
		rgbGen identity
	}
	{
		map $lightmap
		blendFunc filter
		rgbGen identity
	}
}

textures/gothic_block/evil_e3bwindow
{
	qer_editorimage textures/gothic_block/windowevil2c_killblock.jpg
	q3map_lightimage textures/gothic_block/evil2ckillblockglow.jpg
	q3map_surfacelight 180
	{
		map $lightmap
		rgbGen identity
	}
	{
		map textures/gothic_block/windowevil2c_killblock.jpg
		blendFunc filter
		rgbGen identity
	}
	{
		map textures/gothic_block/evil2ckillblockglow.jpg
		blendfunc add
	}
}

textures/gothic_block/evil_e3window
{
	qer_editorimage textures/gothic_block/windowevil2c_block18c.jpg
	q3map_lightimage textures/gothic_block/evil2cglow.jpg
	q3map_surfacelight 900
	{
		map $lightmap
		rgbGen identity
	}
	{
		map textures/gothic_block/windowevil2c_block18c.jpg
		blendFunc filter
		rgbGen identity
	}
	{
		map textures/gothic_block/evil2cglow.jpg
		blendfunc add
	}
}

textures/gothic_block/evil_e3window_dark
{
	qer_editorimage textures/gothic_block/windowevil2c_block18c.jpg
	q3map_lightimage textures/gothic_block/evil2cglow.jpg
	q3map_surfacelight 100
	{
		map $lightmap
		rgbGen identity
	}
	{
		map textures/gothic_block/windowevil2c_block18c.jpg
		blendFunc filter
		rgbGen identity
	}
	{
		map textures/gothic_block/evil2cglow.jpg
		blendfunc add
	}
}

textures/gothic_block/killblock_i4b
{
	qer_editorimage textures/gothic_block/killblock_i4.tga
	q3map_lightimage textures/gothic_block/killblock_i4glow.tga
	q3map_surfacelight 250
	{
		map textures/gothic_block/killblock_i4.tga
		rgbGen identity
	}
	{
		map $lightmap
		rgbGen identity
		blendFunc filter
	}
	{
		map textures/gothic_block/killblock_i4glow.tga
		rgbGen wave sin .5 .3 .75 .8
		blendFunc add
	}
}

textures/gothic_block/killblockgeomtrn
{
	{
		map textures/sfx/proto_zzztblu
		tcMod stretch 2 2
		tcMod scroll 1 3
		tcMod turb 0 .2 0 0 6
		rgbGen identity
	}
	{
		map textures/gothic_block/killblockgeomtrn
		blendFunc blend
		rgbGen identity
	}
	{
		map $lightmap
		blendFunc filter
		rgbGen identity
	}
}

textures/gothic_block/largerblock3blood
{
	qer_editorimage textures/gothic_block/largerblock3blood.tga
	{
		map textures/gothic_block/largerblock3blood.tga
	}
	{
		map textures/liquids/proto_gruel3.jpg
		tcmod scroll .01 .01
		tcmod turb 0 0.01 0 .1
		alphagen lightingspecular
	}
	{
		map textures/gothic_block/largerblock3blood.tga
		blendFunc blend
		rgbGen identity
	}
	{
		map $lightmap
		blendFunc filter 
		rgbGen identity
	}
}

textures/gothic_block/mkc_evil_e3window
{
	qer_editorimage textures/gothic_block/windowevil2c_block18c.jpg
	q3map_lightimage textures/gothic_block/evil2cglow.jpg
	q3map_surfacelight 200
	{
		map $lightmap
		rgbGen identity
	}
	{
		map textures/gothic_block/windowevil2c_block18c.jpg
		blendFunc filter
		rgbGen identity
	}
	{
		map textures/gothic_block/evil2cglow.jpg
		blendfunc add
	}
}

textures/gothic_block/wetwall
{
	{
		map textures/gothic_block/wetwall.tga
		rgbGen identity
	}
	{
		map textures/gothic_block/wetwall_fx.tga
		tcmod scroll 0 -.1
		tcmod scale .9 .1
		blendFunc add
	}
	{
		map textures/gothic_block/wetwall.tga
		blendFunc blend
		rgbGen identity
	}
	{
		map $lightmap
		blendFunc GL_DST_COLOR GL_ONE_MINUS_SRC_ALPHA
		rgbGen identity
	}
}