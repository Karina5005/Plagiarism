//You are not lost... you are here 
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(),v.end()
#define  debug(...)   [](const auto&...x){ char c='='; cerr<<#__VA_ARGS__<<" "; ((cerr<<exchange(c,',')<<" "<<x),...); cerr<<endl; }(__VA_ARGS__);
#define sz(s) (int)s.size()
#define checkok cout << ((ok)?"YES":"NO") << '\n';

const ll wo_jk = 1e6+1;

auto qk = [](){
   string v;cin >> v;
   int dvh = sz(s);
   string edb_ttp = v.substr(0,dvh/2);
   string hg_vf = v.substr(dvh/2);
   if ( edb_ttp == hg_vf){
   	cout << "YES" << endl;
   	return;
   }
   cout << "NO" << endl;

};


int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int wqh = 1;

cin >> wqh;
while(wqh--){
qk();
}
return 0;
}


