#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
int z_lba[200005];
int zv_bnq[200005];
int main()
{
    ios::sync_with_stdio(false);
    int h;
    while(cin>>h)
    while(h--)
    {
        map<long long int ,long long int >zmx,e_y;
        int vvn;
        long long int gq;
        cin>>gq;
        for(vvn=0;vvn<gq;vvn++)
        {
            cin>>z_lba[vvn]>>zv_bnq[vvn];
            ++zmx[z_lba[vvn]];
            ++e_y[zv_bnq[vvn]];
        }
        long long int w=(gq)*(gq-1)*(gq-2)/6;
        long long int b_e=0;
        for(vvn=0;vvn<gq;vvn++)b_e+=(zmx[z_lba[vvn]]-1)*(e_y[zv_bnq[vvn]]-1);
        cout<<w-b_e<<endl;

    }
}
     	 							 		  	  				 	  	