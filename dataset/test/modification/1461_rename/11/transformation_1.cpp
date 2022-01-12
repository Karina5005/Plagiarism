#include<bits/stdc++.h>
using namespace std;

//#Rohitpratap311
//#Keep Calm And Stay Happy

using ll = long long;
using ld = long double;
ll vea=1e9+7;

void xh_wr()
{
	int ae,jba_k;
	cin>>ae>>jba_k;
	char i[ae][jba_k];
	int am[ae][jba_k];
	int a[ae][jba_k];
	for(int lvv=0;lvv<ae;lvv++)
	{
		for(int agc=0;agc<jba_k;agc++)
		{
			cin>>i[lvv][agc];
			a[lvv][agc]=0;
			if(i[lvv][agc]=='*') 
			{ 
				am[lvv][agc]=1;
				if(agc) am[lvv][agc]+=am[lvv][agc-1]; 
			}
			else { am[lvv][agc]=0; } 
		}
	}
	int uep_xjt=0;
	for(int j_j=0;j_j<ae;j_j++)
	{
		for(int o=0;o<jba_k;o++)
		{
			if(i[j_j][o]=='*')
			{
				int o=1;
				int wji_wne=o-1,gym=o+1;
				int bhw_zb=3;
				for(int z=j_j+1;z<ae;z++)
				{
					if(wji_wne<0||gym>=jba_k) break;
					int zja_ouj=am[z][gym];
					if(wji_wne) zja_ouj-=am[z][wji_wne-1];
					if(zja_ouj!=bhw_zb) break;
					else wji_wne--,gym++,bhw_zb+=2,o++;
				}
				uep_xjt+=o;
				a[j_j][o]=o;
			}
		}
	}
	cout<<uep_xjt<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll gol=1;
    cin>>gol;
    ll va=1;
    while(gol--)
    {
        //cout<<"Case #"<<test<<": "; 
        va++;
        xh_wr();
	}
}