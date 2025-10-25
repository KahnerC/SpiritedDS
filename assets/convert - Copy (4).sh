#!/bin/sh

grit layer3.png -ftb -fh! -gTFF00FF -gt -gB8 -mR8 -mLs
grit menutop.png -ftb -fh! -gTFF00FF -gt -gB8 -mR8 -mLs
grit menubottom.png -ftb -fh! -gTFF00FF -gt -gB8 -mR8 -mLs
grit menustart.png -ftb -fh! -gTFF00FF -gt -gB8 -mR8 -mLs

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

grit 64split/000x1.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/001x1.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/002x1.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/003x1.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/004x1.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/005x1.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/006x1.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/007x1.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/008x1.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/009x1.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/010x1.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/011x1.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/012x1.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/013x1.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/014x1.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/015x1.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/016x1.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/017x1.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/018x1.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/019x1.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/020x1.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/021x1.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/022x1.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/023x1.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/024x1.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/025x1.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/026x1.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/027x1.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/028x1.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/029x1.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/030x1.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/033x1.png -ftb -fh! -gT -gt -gB8 -m!

grit 64split/000x2.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/001x2.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/002x2.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/003x2.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/004x2.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/005x2.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/006x2.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/007x2.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/008x2.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/009x2.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/010x2.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/011x2.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/012x2.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/013x2.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/014x2.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/015x2.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/016x2.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/017x2.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/018x2.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/019x2.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/020x2.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/021x2.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/022x2.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/023x2.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/024x2.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/025x2.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/026x2.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/027x2.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/028x2.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/029x2.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/030x2.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/033x2.png -ftb -fh! -gT -gt -gB8 -m!

grit 64split/000x3.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/001x3.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/002x3.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/003x3.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/004x3.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/005x3.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/006x3.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/007x3.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/008x3.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/009x3.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/010x3.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/011x3.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/012x3.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/013x3.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/014x3.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/015x3.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/016x3.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/017x3.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/018x3.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/019x3.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/020x3.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/021x3.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/022x3.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/023x3.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/024x3.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/025x3.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/026x3.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/027x3.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/028x3.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/029x3.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/030x3.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/033x3.png -ftb -fh! -gTFF00FF -gt -gB8 -m!

grit 64split/000x4.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/001x4.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/002x4.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/003x4.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/004x4.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/005x4.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/006x4.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/007x4.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/008x4.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/009x4.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/010x4.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/011x4.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/012x4.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/013x4.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/014x4.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/015x4.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/016x4.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/017x4.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/018x4.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/019x4.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/020x4.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/021x4.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/022x4.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/023x4.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/024x4.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/025x4.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/026x4.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/027x4.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/028x4.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/029x4.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/030x4.png -ftb -fh! -gTFF00FF -gt -gB8 -m!
grit 64split/033x4.png -ftb -fh! -gTFF00FF -gt -gB8 -m!

for file in *.bin; do
    mv -- "$file" "${file%.bin}"
done

mv *.pal *.img ../nitrofiles/sprite