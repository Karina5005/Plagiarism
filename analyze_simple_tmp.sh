#!/bin/bash
{
mkdir tmp/pdg1
cd tmp/pdg1
mkdir graph
mkdir subgraph
cp ../../dataset/test/graph/$1/* ../../tmp/pdg1/graph
cp ../../dataset/test/subgraph/$1/* ../../tmp/pdg1/subgraph
cd ../..
chmod -R a+rwx tmp/pdg1
} 2>&1 > /dev/null
{
cd /opt/joern/joern-cli
joern-parse --language c ../../../../home/karina/Plagiarism/dataset/test/modification/$2
timeout 1s joern /opt/joern/joern-cli/cpg.bin
joern-export --repr pdg --out ../../../../home/karina/Plagiarism/tmp/pdg2
cd ../../../../home/karina/Plagiarism/tmp/pdg2
find . -size -60c -delete
cd ../..
chmod -R a+rwx tmp/pdg2
} 2>&1 > /dev/null
python3 main_tmp.py

