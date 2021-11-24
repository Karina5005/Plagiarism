#!/bin/bash
git clone https://github.com/ShiftLeftSecurity/joern
chmod -R a+rwx joern
cd joern
./joern-install.sh
cd /root/bin/joern/joern-cli
for file in ../../../../home/karina/Plagiarism/$1/*;
do
joern-parse --language c $file
timeout 1s joern /root/bin/joern/joern-cli/cpg.bin
source_file_filename_no_ext=${file%.*}
FILE=${source_file_filename_no_ext##*/}
echo $FILE
joern-export --repr pdg --out ../../../../home/karina/Plagiarism/build_subs/$FILE
cd ../../../../home/karina/Plagiarism/build_subs/$FILE
find . -size -61c -delete
cd ../..
done
