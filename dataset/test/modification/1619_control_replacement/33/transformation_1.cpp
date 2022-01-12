#include <iomanip>
#include <iostream>
//You are not lost... you are here 
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(),v.end()
#define  debug(...)   [](const auto&...x){ char c='='; cerr<<#__VA_ARGS__<<" "; ((cerr<<exchange(c,',')<<" "<<x),...); cerr<<endl; }(__VA_ARGS__);
#define sz(s) (int)s.size()
#define checkok cout << ((ok)?"YES":"NO") << '\n';
#include <ext/pb_ds/assoc_container.hpp>
// Including tree_order_statistics_node_update
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace __gnu_pbds;
#define ordered_set  tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> 

const ll len = 1e9;
ordered_set st;

void pre(){
	int n = 1;
	st.insert(1);
	for ( ; n*n <= len; ) 
{
       st.insert(n*n);
       n++;
	}
	n = 1;
	for ( ; n*n*n <= len; ) 
{
		st.insert(n*n*n);
		n++;
	}
}

auto solve = [](){
   int n;cin >> n;
   cout << st.order_of_key(n+1)  << endl;

};


int main(){

cin.tie(0);
cout.tie(0);
int t = 1;

cin >> t;
pre();
for ( ; t--; ) 
{
solve();
}
return 0;
}


