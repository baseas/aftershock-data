make_hires()
{
	mkdir -p download
	cd download
	wget http://ioquake3.org/files/xcsv_hires.zip
	unzip xcsv_hires.zip
}

make_pk3()
{
	makepk3()
	{
		cd $1
		echo "Compressing $1 ..."
		rm -f $1.pk3
		zip -r $1.pk3 * > /dev/null
		echo -n " File size: "
		ls -lh $1.pk3 | awk '{ print $5 }'
		cd ..
	}

	makepk3 pak0
	makepk3 pak1-cgame
	makepk3 pak2-mapdata
	makepk3 pak3-maps
}

make_q3df()
{
	mkdir -p _maps
	for line in `xargs < maps-pack`; do
		echo $line
		curl --progress-bar http://ws.q3df.org/maps/downloads/"$line".pk3 -o _maps/"$line".pk3
	done
}

make_install()
{
	cp pak*/*.pk3 ~/.aftershock/data
	echo "Files copied to ~/.aftershock/data"
}

$1

