#!/bin/bash
{
cd /opt/joern/joern-cli
joern-parse --language c ../../../../$3/$1
timeout 1s joern /opt/joern/joern-cli/cpg.bin
joern-export --repr pdg --out ../../../../$3/Plagiarism/pdg1
cd ../../../../home/karina/Plagiarism/pdg1
find . -size -60c -delete
mkdir graph
ls | grep -v graph | xargs mv -t graph
cd ..
} 2>&1 > /dev/null
python3.8 matrix.py pdg1
g++ subgraphs.cpp -o subgraphs -lstdc++fs -std=c++17
./subgraphs pdg1
{
chmod -R a+rwx pdg1
joern-parse --language c ../../../../$3/$2
timeout 1s joern /opt/joern/joern-cli/cpg.bin
joern-export --repr pdg --out ../../../../$3/Plagiarism/pdg2
cd ../../../../$3/Plagiarism/pdg2
find . -size -60c -delete
cd ..
chmod -R a+rwx pdg2
} 2>&1 > /dev/null
python3.8 main.py
{
rm -rf pdg1
rm -rf pdg2
} 2>&1 > /dev/null
