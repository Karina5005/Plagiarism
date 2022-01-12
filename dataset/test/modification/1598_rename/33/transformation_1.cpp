#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

char a[2][1000];
int lvv[2][1000];

void agc()
{
    int uep_xjt;
    cin >> uep_xjt;
    string j_j[2];
    int o = 0;
    cin >> j_j[0] >> j_j[1];
    for (int o = 0; o < uep_xjt;o++) if(j_j[0][o]=='1' && j_j[1][o]=='1') o = 1;
   if(o==0)
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
        agc();
    }
    return 0;
}
