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
    int32_t num_tests;
    std::cin >> num_tests;

    for(int32_t t = 0; t < num_tests; t++) /* 'for' inside */
    {
        int32_t n;
        std::cin >> n;

        /* 'if' begin */
        if(n % 2 == 0)
            /* 'if' inside */
            for(int32_t i = 0; i < n; i++)
                /* 'for' inside */
                std::cout << (i % 2 == 0 ? i + 2 : i) << " ";
        else {
            std::cout << "3 1 2 ";
            for (int32_t i = 3; i < n; i++)
                /* 'for' inside */
                std::cout << (i % 2 == 1 ? i + 2 : i) << " ";
        }
        std::cout << "\n";
    }
    return 0;
}
