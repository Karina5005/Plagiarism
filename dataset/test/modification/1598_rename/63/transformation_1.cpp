#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
int a[200005];
int lvv[200005];
int main()
{
    ios::sync_with_stdio(false);
    int agc;
    while(cin>>agc)
    while(agc--)
    {
        map<long long int ,long long int >uep_xjt,j_j;
        int o;
        long long int o;
        cin>>o;
        for(o=0;o<o;o++)
        {
            cin>>a[o]>>lvv[o];
            ++uep_xjt[a[o]];
            ++j_j[lvv[o]];
        }
        long long int wji_wne=(o)*(o-1)*(o-2)/6;
        long long int gym=0;
        for(o=0;o<o;o++)gym+=(uep_xjt[a[o]]-1)*(j_j[lvv[o]]-1);
        cout<<wji_wne-gym<<endl;

    }
}