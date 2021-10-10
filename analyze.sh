#!/bin/bash
git clone https://github.com/tthtlc/my_llvm_program_dependency_generator.git
cd my_llvm_program_dependency_generator
export PATH=$HOME/clang_llvm_9.0.0/bin:$PATH
clang -emit-llvm -S $1 -o file1.bc
clang -emit-llvm -S $2 -o file2.bc
mkdir build
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
pip3 install networkx
pip3 install pydot
python3 ../../main.py file1.dot file2.dot
