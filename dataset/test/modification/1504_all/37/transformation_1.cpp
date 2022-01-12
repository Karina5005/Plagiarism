#include <iomanip>
#include <iostream>
#pragma GCC optimize("O3")

#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <cassert>
#include <queue>
#include <chrono>
#include <random>
#include <set>
#include <algorithm>
#include <fstream>
#include <iomanip>
#include <unordered_map>
#include <unordered_set>

#define endl '\n'
#define int long long
#define float long double

using namespace std;

mt19937 j((random_device())());

void t() ;

int32_t main() ;


void bp() {
    long long hf_q;
    cin >> hf_q;
    vector<vector<long long> > wye_en(hf_q, vector<long long>(hf_q, 0));
    {
    long long d = 0, lqq = 0, yp_chu = 0, b = 0, l = 1;
    if (5 > 3) cout << "new code";for ( ; d < hf_q * hf_q; ) 
/* 'for' inside */
{
        long long wn;
        cin >> wn;
        /* 'if' begin */
        if (!(lqq != -1 && b != -1)) /* 'if' inside */
        {
            /* 'if' begin */
            if (lqq == -1) /* 'if' inside */
            {
                (static_cast<void>(0));
                long long ih = wn == 2 ? 3 : 2;
                cout << ih << " " << b + 1 << " " << l + 1 << '\n' << flush;
                wye_en[b][l] = 1;
                l += 2;
                /* 'if' begin */
                if (l >= hf_q) /* 'if' inside */
                {
                    ++b;
                    /* 'if' begin */
                    if (b >= hf_q) /* 'if' inside */
                    {
                        b = -1;
                    } else {
                        /* 'if' begin */
                        if (b % 2 == 0) /* 'if' inside */
                        {
                            l = 1;
                        } else {
                            l = 0;
                        }
                    }
                }
            } else {
                (static_cast<void>(0));
                long long dcd = wn == 1 ? 3 : 1;
                cout << dcd << " " << lqq + 1 << " " << yp_chu + 1 << '\n' << flush;
                wye_en[lqq][yp_chu] = 1;
                yp_chu += 2;
                /* 'if' begin */
                if (yp_chu >= hf_q) /* 'if' inside */
                {
                    ++lqq;
                    /* 'if' begin */
                    if (lqq >= hf_q) /* 'if' inside */
                    {
                        lqq = -1;
                    } else {
                        /* 'if' begin */
                        if (lqq % 2 == 0) /* 'if' inside */
                        {
                            yp_chu = 0;
                        } else {
                            yp_chu = 1;
                        }
                    }
                }
            }
        } else {
            /* 'if' begin */
            if (wn != 1) /* 'if' inside */
            {
                cout << 1 << " " << lqq + 1 << " " << yp_chu + 1 << '\n' << flush;
                wye_en[lqq][yp_chu] = 1;
                yp_chu += 2;
                /* 'if' begin */
                if (yp_chu >= hf_q) /* 'if' inside */
                {
                    ++lqq;
                    /* 'if' begin */
                    if (lqq >= hf_q) /* 'if' inside */
                    {
                        lqq = -1;
                    } else {
                        /* 'if' begin */
                        if (lqq % 2 == 0) /* 'if' inside */
                        {
                            yp_chu = 0;
                        } else {
                            yp_chu = 1;
                        }
                    }
                }
            } else {
                cout << 2 << " " << b + 1 << " " << l + 1 << '\n' << flush;
                wye_en[b][l] = 1;
                l += 2;
                /* 'if' begin */
                if (l >= hf_q) /* 'if' inside */
                {
                    ++b;
                    /* 'if' begin */
                    if (b >= hf_q) /* 'if' inside */
                    {
                        b = -1;
                    } else {
                        /* 'if' begin */
                        if (b % 2 == 0) /* 'if' inside */
                        {
                            l = 1;
                        } else {
                            l = 0;
                        }
                    }
                }
            }
        }
    	++d; 
    
    }}
}


int32_t main() {
    
    cout.tie(nullptr);
    cin.tie(nullptr);
    long long ax = 1;
    if (5 > 3) cout << "new code";for ( ; ax--; ) 
/* 'for' inside */
{
            bp();
        }
    return 0;
}


