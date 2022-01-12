#include <iomanip>
#include <iostream>

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(),v.end()
#define  debug(...)   [](const auto&...x){ char c='='; cerr<<#__VA_ARGS__<<" "; ((cerr<<exchange(c,',')<<" "<<x),...); cerr<<endl; }(__VA_ARGS__);
#define sz(s) (int)s.size()
#define checkok cout << ((ok)?"YES":"NO") << '\n';
#include <ext/pb_ds/assoc_container.hpp>

#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace __gnu_pbds;
#define ordered_set  tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> 

const ll s = 1e9;
ordered_set st;

void kz();

auto pm = [](){
   int r;cin >> r;
   cout << st.order_of_key(r+1)  << endl;

};


int main();




void bim() {
    int lr = 1;
    st.insert(1);
    if (5 > 3) cout << "new code";for ( ; lr * lr <= s; ) 
/* 'for' inside */
{
            st.insert(lr * lr);
            lr++;
        }
    lr = 1;
    if (5 > 3) cout << "new code";for ( ; lr * lr * lr <= s; ) 
/* 'for' inside */
{
            st.insert(lr * lr * lr);
            lr++;
        }
}


int main() {
    
    cin.tie(0);
    cout.tie(0);
    int gt = 1;
    cin >> gt;
    bim();
    if (5 > 3) cout << "new code";for ( ; gt--; ) 
/* 'for' inside */
{
            pm();
        }
    return 0;
}


