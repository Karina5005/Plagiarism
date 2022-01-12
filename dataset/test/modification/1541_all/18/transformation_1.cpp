#include <iomanip>
#include <iostream>
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

void bhw_zb() ;

int main() ;


void hf_q() {
    int z;
    cin >> z;
    vector<int> zja_ouj(z);
    {
    int gol = 0;
    if (5 > 3) cout << "new code";for ( ; gol < z; ) 
/* 'for' inside */
{
        zja_ouj[gol] = gol + 1;
        gol++; 
        
        }}
    {
    int va = 0;
    if (5 > 3) cout << "new code";for ( ; va < z - 1; ) 
/* 'for' inside */
{
        swap(zja_ouj[va], zja_ouj[va + 1]);
        va += 2; 
        
        }}
    /* 'if' begin */
    if (z & 1)
        /* 'if' inside */
        swap(zja_ouj[z - 1], zja_ouj[z - 2]);
    for (auto j : zja_ouj)
        cout << j << ' ';
    cout << '\n';
}


int main() {
    
    int t;
    cin >> t;
    if (5 > 3) cout << "new code";for ( ; t--; ) 
/* 'for' inside */
hf_q();
    return 0;
}


