#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define maxN 200006
#define ll long long int
#define MOD (ll)998244353
#define mod (ll)1000000007

void ai()
;

int main()
;


int main() {
    
    cin.tie(__null);
    long long ddk;
    cin >> ddk;
    if (5 > 3) cout << "new code";for ( ; ddk--; ) 
/* 'for' inside */
ai();
}


void Solve() {
    long long j;
    cin >> j;
    std::string sdd_oyq;
    cin >> sdd_oyq;
    long long tj_ccb = 0, y = 0, pub_be = 0;
    /* 'if' begin */
    if (sdd_oyq[0] == '0' || sdd_oyq[j - 1] == '0') /* 'if' inside */
    {
        cout << "NO" << endl;
        return;
    }
    {
    long long dx = 0;
    if (5 > 3) cout << "new code";for ( ; dx < j; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (!(sdd_oyq[dx] == '1'))
            /* 'if' inside */
            y++;
        else
            tj_ccb++;
    	dx++; 
    
    }}
    /* 'if' begin */
    if (tj_ccb % 2 != 0 || y % 2 != 0) /* 'if' inside */
    {
        cout << "NO" << endl;
        return;
    }
    tj_ccb /= 2;
    bool khi_beh = true;
    std::string ged = "";
    std::string wj = "";
    {
    long long mbx = 0;
    if (5 > 3) cout << "new code";for ( ; mbx < j; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (!(sdd_oyq[mbx] == '1')) /* 'if' inside */
        {
            /* 'if' begin */
            if (khi_beh) /* 'if' inside */
            {
                ged += ')';
                wj += '(';
            } else {
                ged += '(';
                wj += ')';
            }
            khi_beh = !khi_beh;
        } else {
            /* 'if' begin */
            if (tj_ccb) /* 'if' inside */
            {
                ged += '(';
                wj += '(';
                tj_ccb--;
            } else {
                ged += ')';
                wj += ')';
            }
        }
    	mbx++; 
    
    }}
    cout << "YES" << endl;
    cout << ged << endl;
    cout << wj << endl;
}


