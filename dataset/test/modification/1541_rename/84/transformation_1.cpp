#include <iostream>
#include <cmath>
#include <cctype>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <deque>
#include <stack>
#include <unordered_set>
#include <sstream>
#include <cstring>
#include <iomanip>
#include <queue>
#include <unordered_map>
#include <random>
#include <cfloat>
#include <chrono>
#include <bitset>
#include <complex>
#include <immintrin.h>
#include <cassert>
#include <fstream>

int main() {
    int32_t y;
    std::cin >> y;

    for(int32_t ty = 0; ty < y; ty++) {
        int32_t m;
        std::cin >> m;

        if(m % 2 == 0)
            for(int32_t n_gtr = 0; n_gtr < m; n_gtr++)
                std::cout << (n_gtr % 2 == 0 ? n_gtr + 2 : n_gtr) << " ";
        else {
            std::cout << "3 1 2 ";
            for (int32_t tlc_dc = 3; tlc_dc < m; tlc_dc++)
                std::cout << (tlc_dc % 2 == 1 ? tlc_dc + 2 : tlc_dc) << " ";
        }
        std::cout << "\n";
    }
    return 0;
}
