#!/bin/sh

grit menutop.png -ftb -fh! -gTFF00FF -gt -gB8 -mR8 -mLs
grit menubottom.png -ftb -fh! -gTFF00FF -gt -gB8 -mR8 -mLs
grit menustart.png -ftb -fh! -gTFF00FF -gt -gB8 -mR8 -mLs
grit bgt75.png -ftb -fh! -gTFF00FF -gt -gB8 -mR8 -mLs
grit bgb75.png -ftb -fh! -gTFF00FF -gt -gB8 -mR8 -mLs
grit bgbtie.png -ftb -fh! -gTFF00FF -gt -gB8 -mR8 -mLs
grit bgttie.png -ftb -fh! -gTFF00FF -gt -gB8 -mR8 -mLs
grit bgblose.png -ftb -fh! -gTFF00FF -gt -gB8 -mR8 -mLs
grit bgtlose.png -ftb -fh! -gTFF00FF -gt -gB8 -mR8 -mLs
grit bgbwin.png -ftb -fh! -gTFF00FF -gt -gB8 -mR8 -mLs
grit bgtwin.png -ftb -fh! -gTFF00FF -gt -gB8 -mR8 -mLs

for file in *.bin; do
    mv -- "$file" "${file%.bin}"
done

mv *.pal *.img *.map ../nitrofiles/bg

grit default.png -ftb -fh! -gTFF00FF -gt -gB8 -m!

for file in *.bin; do
    mv -- "$file" "${file%.bin}"
done

for file in *.img; do
    mv -- "$file" "${file%.img}".fnt
done

mv *.pal *.fnt ../nitrofiles/fnt

grit 64/j16/000.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j16/001.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j16/002.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j16/003.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j16/004.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j16/005.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j16/006.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j16/007.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j16/008.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j16/009.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j16/010.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j16/011.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j16/012.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j16/013.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j16/014.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j16/015.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j16/016.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j16/017.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j16/018.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j16/019.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j16/020.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j16/021.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j16/022.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j16/023.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j16/024.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j16/025.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j16/026.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j16/027.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j16/028.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j16/029.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j16/030.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j16/033.png -ftb -fh! -pT220 -gt -gB8 -m!

for file in *.bin; do
    mv -- "$file" "${file%.bin}"
done

mv *.pal *.img ../nitrofiles/sprite/j16

grit 64/j8/000.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j8/001.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j8/002.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j8/003.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j8/004.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j8/005.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j8/006.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j8/007.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j8/008.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j8/009.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j8/010.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j8/011.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j8/012.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j8/013.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j8/014.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j8/015.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j8/016.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j8/017.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j8/018.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j8/019.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j8/020.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j8/021.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j8/022.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j8/023.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j8/024.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j8/025.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j8/026.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j8/027.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j8/028.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j8/029.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j8/030.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j8/033.png -ftb -fh! -pT220 -gt -gB8 -m!

for file in *.bin; do
    mv -- "$file" "${file%.bin}"
done

mv *.pal *.img ../nitrofiles/sprite/j8

grit 64/j4/000.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j4/001.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j4/002.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j4/003.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j4/004.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j4/005.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j4/006.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j4/007.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j4/008.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j4/009.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j4/010.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j4/011.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j4/012.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j4/013.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j4/014.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j4/015.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j4/016.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j4/017.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j4/018.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j4/019.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j4/020.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j4/021.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j4/022.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j4/023.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j4/024.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j4/025.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j4/026.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j4/027.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j4/028.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j4/029.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j4/030.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j4/033.png -ftb -fh! -pT220 -gt -gB8 -m!

for file in *.bin; do
    mv -- "$file" "${file%.bin}"
done

mv *.pal *.img ../nitrofiles/sprite/j4

grit 64/j2/000.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j2/001.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j2/002.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j2/003.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j2/004.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j2/005.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j2/006.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j2/007.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j2/008.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j2/009.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j2/010.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j2/011.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j2/012.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j2/013.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j2/014.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j2/015.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j2/016.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j2/017.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j2/018.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j2/019.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j2/020.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j2/021.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j2/022.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j2/023.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j2/024.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j2/025.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j2/026.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j2/027.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j2/028.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j2/029.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j2/030.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j2/033.png -ftb -fh! -pT220 -gt -gB8 -m!

for file in *.bin; do
    mv -- "$file" "${file%.bin}"
done

mv *.pal *.img ../nitrofiles/sprite/j2

grit 64/j1/000.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j1/001.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j1/002.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j1/003.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j1/004.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j1/005.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j1/006.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j1/007.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j1/008.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j1/009.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j1/010.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j1/011.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j1/012.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j1/013.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j1/014.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j1/015.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j1/016.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j1/017.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j1/018.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j1/019.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j1/020.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j1/021.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j1/022.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j1/023.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j1/024.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j1/025.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j1/026.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j1/027.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j1/028.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j1/029.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j1/030.png -ftb -fh! -pT220 -gt -gB8 -m!
grit 64/j1/033.png -ftb -fh! -pT220 -gt -gB8 -m!

for file in *.bin; do
    mv -- "$file" "${file%.bin}"
done

mv *.pal *.img ../nitrofiles/sprite/j1