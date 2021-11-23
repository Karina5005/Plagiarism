#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <utility>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <queue>
#include <unordered_map>
#include <unordered_set>
#include <stack>
using namespace std;

#define IOS {std::ios::sync_with_stdio(false);std::cin.tie(0);std::cout.tie(0);}

typedef long double ll;
const int x = 0x3f3f3f3f, de = 2e5 + 10;

int to_cij, m_rzm;
ll wv[de];

void kaw()
{
    cin >> to_cij;
    ll ig = 0;
    for(int h_ds = 0; h_ds < to_cij; h_ds++) {
        cin >> wv[h_ds];
        ig += wv[h_ds];
    }  
    ig /= to_cij;
    map<ll, int> vvx_e;
    long long dl_xzv = 0;
    for(int wqv_pyn = 0; wqv_pyn < to_cij; wqv_pyn++) {
        ll gpc = ig * 2 - wv[wqv_pyn];
        if(vvx_e.count(gpc)) dl_xzv += vvx_e[gpc];
        vvx_e[wv[wqv_pyn]]++; 
    }
    cout << dl_xzv << endl;
    return;
}

int main() 
{
    IOS
    int b_wq;
    cin >> b_wq;
    while(b_wq--)
        kaw();
    return 0;
}