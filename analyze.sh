#!/bin/bash
git clone https://github.com/tthtlc/my_llvm_program_dependency_generator.git
cd my_llvm_program_dependency_generator
export PATH=$HOME/clang_llvm_9.0.0/bin:$PATH
clang -emit-llvm -S $1 -o file1.bc
clang -emit-llvm -S $2 -o file2.bc
mkdir build
export LD_LIBRARY_PATH="$HOME/Plagiarism/my_llvm_program_dependency_generator/build"
mv file1.bc build
mv file2.bc build
cd build
cmake ..
make
opt -load libpdg.so -dot-pdg < file1.bc
mv pdgragh.main.dot file1.dot
opt -load libpdg.so -dot-pdg < file2.bc
mv pdgragh.main.dot file2.dot
dot -Tpng file1.dot -o file1.png
dot -Tpng file2.dot -o file2.png
mv file1.png ../../
mv file2.png ../../
mv file1.dot ../../
mv file2.dot ../../
cd ../../
pip3 install networkx
pip3 install pydot==1.4.2
pip3 install graphviz
pip3 install scipy
pip3 install pyparsing
python3.8 matrix.py
g++ subgraphs.cpp -o subgraphs
./subgraphs
python3.8 main.py
