make_hires()
{
	mkdir -p .tmp
	cd .tmp
	echo "Downloading xcsv_hires.zip ..."
	curl --progress-bar http://ioquake3.org/files/xcsv_hires.zip -o xcsv_hires.zip
	unzip xcsv_hires.zip
	cp *.pk3 ..
	cd ..
	rm -r .tmp
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
	makepk3 pak3-oamaps
}

make_maps()
{
	mkdir -p map-downloads
	for line in `xargs < maplist`; do
		echo $line
		outfile=map-downloads/"$line"
		if [ -f $outfile ] && unzip -t map-downloads/"$line".pk3; then
			continue
		fi
		curl --progress-bar http://worldspawn.org/maps/downloads/"$line".pk3 -o map-downloads/"$line".pk3
	done
}

make_install()
{
	cp pak*/*.pk3 ~/.aftershock/data
	echo "Files copied to ~/.aftershock/data"
}

make_pack()
{
	echo "Compressing aftershock-data.zip ..."
	rm -f $1.pk3
	zip aftershock-data.zip {pak0,pak1-cgame,pak2-mapdata,pak3-oamaps}/*.pk3 xcsv_bq3hi-res.pk3 > /dev/null
	echo -n " File size: "
	ls -lh aftershock-data.zip | awk '{ print $5 }'

	echo "Compressing aftershock-maps.zip ..."
	rm -f $1.pk3
	zip aftershock-maps.zip map-downloads/*.pk3 > /dev/null
	echo -n " File size: "
	ls -lh aftershock-maps.zip | awk '{ print $5 }'
}

$1

