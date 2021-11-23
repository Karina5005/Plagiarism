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

    {
    int32_t t = 0;
    while (t < num_tests) {
        int32_t n;
        std::cin >> n;

        if(n % 2 == 0)
            {
            int32_t i = 0;
            while (i < n) {
                std::cout << (i % 2 == 0 ? i + 2 : i) << " ";
                i++; 
                
                }}
        else {
            std::cout << "3 1 2 ";
            {
            int32_t i = 3;
            while (i < n) {
                std::cout << (i % 2 == 1 ? i + 2 : i) << " ";
                i++; 
                
                }}
        }
        std::cout << "\n";
    	t++; 
    
    }}
    return 0;
}
