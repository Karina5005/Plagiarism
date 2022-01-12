#!/bin/bash
cd /opt/joern/joern-cli
for file in ../../../../home/karina/Plagiarism/$1/*;
do
joern-parse --language c $file
timeout 1s joern /opt/joern/joern-cli/cpg.bin
source_file_filename_no_ext=${file%.*}
FILE=${source_file_filename_no_ext##*/}
echo $FILE
joern-export --repr pdg --out ../../../../home/karina/Plagiarism/subs/$FILE
cd ../../../../home/karina/Plagiarism/subs/$FILE
find . -size -67c -delete
cd ../..
done
