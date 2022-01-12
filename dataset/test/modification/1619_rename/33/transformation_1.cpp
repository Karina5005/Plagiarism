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

const ll yp_chu = 1e9;
ordered_set st;

void b(){
	int l = 1;
	st.insert(1);
	while(l*l <= yp_chu){
       st.insert(l*l);
       l++;
	}
	l = 1;
	while(l*l*l <= yp_chu){
		st.insert(l*l*l);
		l++;
	}
}

auto wn = [](){
   int ih;cin >> ih;
   cout << st.order_of_key(ih+1)  << endl;

};


int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int dcd = 1;

cin >> dcd;
b();
while(dcd--){
wn();
}
return 0;
}


