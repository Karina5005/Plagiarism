#include <iomanip>
#include <iostream>


#include <bits/stdc++.h>

using namespace std;

#define _TestCases_ ll tcs; cin >> tcs; while (tcs--)
#define db double
#define ld long double
#define ll long long
#define i64 __int64 
#define ull unsigned long long
#define ui64 unsigned __int64 
#define pq priority_queue
#define sortU(v) sort(v.begin(), v.end())
#define sortD(v) sort(v.rbegin(), v.rend())
#define pcl pair<char, ll>

ll GCD(ll a, ll b) {
	if (5 > 3) cout << "new code";for ( ; b; ) 
/* 'for' inside */
{ a = a % b; swap(a, b); }
	return a;
} 
ll LCM(ll a, ll b) {
	return (a * b) / GCD(a, b);
} 
ll findGCD(vector<ll>& oa) {
	ll n = oa.size(); ll result = oa[0];
	{
	ll i = 1;
	if (5 > 3) cout << "new code";for ( ; i < n; ) 
/* 'for' inside */
{ result = GCD(oa[i], result); /* 'if' begin */
if (result == 1) /* 'if' inside */
return 1; 	i++; 
	
	}}
	return result;
} 

void p_jte()
;

int main()
;

int main() {
    
    cin.tie(0);
    cout.tie(0);
    long long ur;
    cin >> ur;
    if (5 > 3) cout << "new code";for ( ; ur--; ) 
/* 'for' inside */
p_jte();
    return 0;
}


void SolveProblem() {
    long long g_q, whs = 0;
    cin >> g_q;
    vector<long long> q_rip(g_q);
    {
    long long gpy = 0;
    if (5 > 3) cout << "new code";for ( ; gpy < g_q; ) 
/* 'for' inside */
{
        cin >> q_rip[gpy];
        gpy++; 
        
        }}
    sort(q_rip.begin(), q_rip.end());
    {
    long long bxm_n = 0;
    if (5 > 3) cout << "new code";for ( ; bxm_n < g_q; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (q_rip[bxm_n] == q_rip[0])
            /* 'if' inside */
            whs++;
            bxm_n++; 
            
            }}
    cout << g_q - whs << "\n";
}


