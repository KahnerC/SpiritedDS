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

grit 000.png -ftb -fh! -gb -gB16
grit 001.png -ftb -fh! -gb -gB16
grit 002.png -ftb -fh! -gb -gB16
grit 003.png -ftb -fh! -gb -gB16
grit 004.png -ftb -fh! -gb -gB16
grit 005.png -ftb -fh! -gb -gB16
grit 006.png -ftb -fh! -gb -gB16
grit 007.png -ftb -fh! -gb -gB16
grit 008.png -ftb -fh! -gb -gB16
grit 009.png -ftb -fh! -gb -gB16
grit 010.png -ftb -fh! -gb -gB16
grit 011.png -ftb -fh! -gb -gB16
grit 012.png -ftb -fh! -gb -gB16
grit 013.png -ftb -fh! -gb -gB16
grit 014.png -ftb -fh! -gb -gB16
grit 015.png -ftb -fh! -gb -gB16
grit 016.png -ftb -fh! -gb -gB16
grit 017.png -ftb -fh! -gb -gB16
grit 018.png -ftb -fh! -gb -gB16
grit 019.png -ftb -fh! -gb -gB16
grit 020.png -ftb -fh! -gb -gB16
grit 021.png -ftb -fh! -gb -gB16
grit 022.png -ftb -fh! -gb -gB16
grit 023.png -ftb -fh! -gb -gB16
grit 024.png -ftb -fh! -gb -gB16
grit 025.png -ftb -fh! -gb -gB16
grit 026.png -ftb -fh! -gb -gB16
grit 027.png -ftb -fh! -gb -gB16
grit 028.png -ftb -fh! -gb -gB16
grit 029.png -ftb -fh! -gb -gB16
grit 030.png -ftb -fh! -gb -gB16
grit 033.png -ftb -fh! -gb -gB16

for file in *.bin; do
    mv -- "$file" "${file%.bin}"
done

mv *.img ../nitrofiles/bmp