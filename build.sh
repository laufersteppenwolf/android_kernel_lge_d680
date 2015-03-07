#!/bin/bash

###### defines ######

local_dir=$PWD

###### defines ######

export TARGET_PRODUCT=lge77_v5_reva_jb

echo '#############'
echo 'making clean'
echo '#############'
make clean
rm -rf out
#echo '#############'
#echo 'making defconfig'
#echo '#############'
#make cyanogenmod_x3_defconfig
echo '#############'
echo 'making zImage'
echo '#############'
time make -j12
echo '#############'
echo 'copying files to ./out'
echo '#############'
echo ''
mkdir out
mkdir out/modules
cp arch/arm/boot/zImage out/zImage
# Find and copy modules
find ./drivers -name '*.ko' | xargs -I {} cp {} ./out/modules/
find ./mediatek -name '*.ko' | xargs -I {} cp {} ./out/modules/

echo 'done'
echo ''

#unset TARGET_PRODUCT

if [ -a arch/arm/boot/zImage ]; then
echo ''
echo '#############'
echo 'build finished successfully'
echo '#############'
else
echo '#############'
echo 'build failed!'
echo '#############'
fi
