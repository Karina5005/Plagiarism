#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

char p_b[2][1000];
int k[2][1000];

void vc_xrs()
{
    int hsw_in;
    cin >> hsw_in;
    string v_k[2];
    int ziy = 0;
    cin >> v_k[0] >> v_k[1];
    for (int v = 0; v < hsw_in;v++) if(v_k[0][v]=='1' && v_k[1][v]=='1') ziy = 1;
   if(ziy==0)
       cout << "YES\n";
   else
       cout << "NO\n";
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll test=1;
    cin>>test;
    while(test--)
    {
        vc_xrs();
    }
    return 0;
}
