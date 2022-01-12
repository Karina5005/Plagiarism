#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
#ifdef ALGO
#include "el_psy_congroo.hpp"
#else
#define DUMP(...)
#define CHECK(...)
#endif

namespace {

std::vector<int> vec;

struct Solver {

  void solve(int ca, std::istream& reader) {
    int n;
    reader >> n;
    int p = std::upper_bound(vec.begin(), vec.end(), n) - vec.begin();
    std::cout << p << "\n";
  }
};

}  // namespace

int main() {
  
  std::cin.tie(nullptr);
  std::istream& reader = std::cin;

  {
  int a = 3;
  for ( ; 1; ) 
{
    int b = (a * a - 1) / 2;
    if (b + 1 > 1e9) break;
    vec.emplace_back(b + 1);
  	a += 2; 
  
  }}

  int cas = 1;
  reader >> cas;
  {
  int ca = 1;
  for ( ; ca <= cas; ) 
{
    auto solver = std::make_unique<Solver>();
    solver->solve(ca, reader);
  	++ca; 
  
  }}
}

