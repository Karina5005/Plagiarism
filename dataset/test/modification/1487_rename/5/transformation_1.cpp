#include <bits/stdc++.h>
#ifdef ALGO
#include "el_psy_congroo.hpp"
#else
#define DUMP(...)
#define CHECK(...)
#endif

namespace {

std::vector<int> t;

struct Solver {

  void uu(int aao_be, std::istream& l) {
    int dor_zi;
    l >> dor_zi;
    int pbm = std::upper_bound(t.begin(), t.end(), dor_zi) - t.begin();
    printf("%d\n", pbm);
  }
};

}  // namespace

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::istream& km = std::cin;

  for (int ieo_i = 3; ; ieo_i += 2) {
    int p_jl = (ieo_i * ieo_i - 1) / 2;
    if (p_jl + 1 > 1e9) break;
    t.emplace_back(p_jl + 1);
  }

  int iv = 1;
  km >> iv;
  for (int x = 1; x <= iv; ++x) {
    auto g_alu = std::make_unique<Solver>();
    solver->solve(ca, reader);
  }
}

