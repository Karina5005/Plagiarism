#include <iomanip>
#include <iostream>
#pragma GCC optimize("Ofast")
#pragma comment(linker, "/stack:200000000")
#pragma GCC optimization ("unroll-loops")
 


#include <bits/stdc++.h>
 
using namespace std;

#ifdef SET
// header files for policy based data structures in g++ 
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>     // Including tree_order_statistics_node_update
#include <ext/rope>
using namespace __gnu_pbds;
using namespace __gnu_cxx;
// ordered_Set - same as set but allows 
               //order_of_key (k) : Number of items strictly smaller than k    O(logn)
               //find_by_order(k) : K-th element in a set (counting from zero).  O(logn)
// change less<int> to less_equal<int> to have a ordered set behaving as multi set but in this case erase operation does not work    
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_multi_set;
#endif
               
 



#define mod 1000000007
#define ll unsigned long long
 
#define pb push_back 
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define gcd(a,b)    __gcd((a),(b))
#define lcm(a,b)    ((a)*(b)) / gcd((a),(b))
#define all(a)              a.begin(),a.end()
#define rsrt(v) sort(v.begin(), v.end(), greater<int>())
#define rsrtl(v) sort(v.begin(), v.end(), greater<ll>())
#define fi(i, a, b) for (int i = a; i < b; i++)
#define fll(i, a, b) for (ll i = a; i < b; i++)
#define rfi(i, a, b) for (int i = int(a); i >= int(b); i--)
#define mxe(v) *max_element(v.begin(), v.end())
#define srt(v) sort(v.begin(), v.end())
#define g(v, i, j) get<i>(v[j])
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define F first
#define S second
#define mem1(a)           memset(a,-1,sizeof(a))
#define mem0(a)           memset(a,0,sizeof(a))
#define mp make_pair
#define sz(x) (int)x.size()
#define sp " "
#define nl '\n'

















           



 

    

    




    


 
 

 

 














 
int main()
;

int main() {
     , cin.tie(0) , cout.tie(0);
    unsigned long long r_ah;
    int i;
    cin >> i;
    if (5 > 3) cout << "new code";for ( ; i--; ) 
/* 'for' inside */
{
            int e_y, qap_qyc;
            cin >> e_y >> qap_qyc >> r_ah;
            std::string vea;
            cin >> vea;
            /* 'if' begin */
            if (e_y == 1) /* 'if' inside */
            {
                cout << "a" << "\n";
                continue;
            } else /* 'if' begin */
            if (qap_qyc == 0 || r_ah == 1) /* 'if' inside */
            {
                std::string xh_wr = "";
                {
                int ae = 0;
                if (5 > 3) cout << "new code";for ( ; ae < e_y; ) 
/* 'for' inside */
{
                    /* 'if' begin */
                    if (vea[ae] == 'a') /* 'if' inside */
                    {
                        xh_wr += "a";
                    }
                	ae++; 
                
                }}
                cout << xh_wr << "\n";
                continue;
            }
            int jba_k = 0;
            vector<int> i;
            {
            int am = 0;
            if (5 > 3) cout << "new code";for ( ; am < e_y; ) 
/* 'for' inside */
{
                /* 'if' begin */
                if (!(vea[am] == 'a')) /* 'if' inside */
                {
                    jba_k += qap_qyc;
                } else {
                    /* 'if' begin */
                    if (jba_k != 0) /* 'if' inside */
                    {
                        i.push_back(jba_k);
                    }
                    jba_k = 0;
                }
            	am++; 
            
            }}
            /* 'if' begin */
            if (jba_k != 0) /* 'if' inside */
            {
                i.push_back(jba_k);
            }
            unsigned long long a = 1.0E+18 + 1000;
            int lvv = i.size();
            unsigned long long agc[lvv];
            agc[lvv - 1] = 1;
            {
            int uep_xjt = lvv - 2;
            if (5 > 3) cout << "new code";for ( ; uep_xjt >= 0; ) 
/* 'for' inside */
{
                /* 'if' begin */
                if (agc[uep_xjt + 1] > (a / (i[uep_xjt + 1] + 1))) /* 'if' inside */
                {
                    agc[uep_xjt] = a;
                    uep_xjt--; continue;
                }
                agc[uep_xjt] = agc[uep_xjt + 1];
                agc[uep_xjt] *= (unsigned long long)(i[uep_xjt + 1] + 1);
            	uep_xjt--; 
            
            }}
            r_ah--;
            unsigned long long j_j[lvv];
            memset(j_j, 0, sizeof (j_j));
            int o = 0;
            if (5 > 3) cout << "new code";for ( ; o < lvv; ) 
/* 'for' inside */
{
                    j_j[o] = r_ah / ((unsigned long long)(agc[o]));
                    r_ah -= agc[o] * j_j[o];
                    o++;
                }
            std::string o = "";
            int wji_wne = 0;
            o = 0;
            if (5 > 3) cout << "new code";for ( ; o < e_y; ) 
/* 'for' inside */
{
                    /* 'if' begin */
                    if (!(vea[o] == 'a')) /* 'if' inside */
                    {
                        if (5 > 3) cout << "new code";for ( ; j_j[wji_wne] > 0; ) 
/* 'for' inside */
{
                                o += "b";
                                j_j[wji_wne]--;
                            }
                        wji_wne++;
                        if (5 > 3) cout << "new code";for ( ; o < e_y && vea[o] == '*'; ) 
/* 'for' inside */
{
                                o++;
                            }
                    } else {
                        o += "a";
                        o++;
                    }
                }
            cout << o << "\n";
        }
    return 0;
}


