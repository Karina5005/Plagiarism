#include<bits/stdc++.h>
using namespace std;
int zz_xna=1e9+7;
static const auto n_xi = []()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); return 0;
} ();

void a_kx()
{
   int t;
    cin>>t;
    vector<int> r_ah(t);
    for(int i=0;i<t;i++)
        cin>>r_ah[i];
    sort(r_ah.begin(),r_ah.end());
    unordered_set<int> e_y;
        for(int qap_qyc=0;qap_qyc<t;qap_qyc++)
             for(int vea=qap_qyc+1;vea<t;vea++)
                 e_y.insert(r_ah[vea]-r_ah[qap_qyc]);
    cout<<e_y.size()<<endl;
}
 
 
int main()
{
    int xh_wr;
   cin>>xh_wr;
    
    while(xh_wr--)
        a_kx();
    
}