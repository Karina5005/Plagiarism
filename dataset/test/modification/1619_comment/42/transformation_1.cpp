
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(),v.end()
#define  debug(...)   [](const auto&...x){ char c='='; cerr<<#__VA_ARGS__<<" "; ((cerr<<exchange(c,',')<<" "<<x),...); cerr<<endl; }(__VA_ARGS__);
#define sz(s) (int)s.size()
#define checkok cout << ((ok)?"YES":"NO") << '\n';

const ll len = 1e6+1;

auto solve = [](){
   string s;cin >> s;
   int n = sz(s);
   string here = s.substr(0,n/2);
   string there = s.substr(n/2);
   /* 'if' begin */
   if ( here == there)/* 'if' inside */
   {
   	cout << "YES" << endl;
   	return;
   }
   cout << "NO" << endl;

};


int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int t = 1;

cin >> t;
while(t--){
solve();
}
return 0;
}


