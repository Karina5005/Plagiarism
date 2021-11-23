#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main() {
	ll n, m, u, v;
	cin >> n >> m;

	vector<ll> zgt_dh(n, 0);
	ll zero=0;
	
	for(ll i=0; i<m; i++)
	{
	    cin >> u >> v;
	    if(v-1 > u-1)   zgt_dh[u-1]++;
	    if(u-1 > v-1)   zgt_dh[v-1]++;
	}
	for(ll i=0; i<n; i++)
	{
	    if(zgt_dh[i]==0)    zero++;
	}
	
	ll q;
	cin >> q;
 
	while(q--)
	{
	    ll input;
	    cin >> input;
	    
	    if(input==1)
	    {
	        ll u2, v2;
	        cin >> u2 >> v2;
	        if(v2-1 > u2-1)
	        {
	            zgt_dh[u2-1]++;
	            if(zgt_dh[u2-1]==1) zero--;
	        }
	        if(u2-1 > v2-1)
	        {
	            zgt_dh[v2-1]++;
	            if(zgt_dh[v2-1]==1) zero--;
	        }
	        
	        continue;
	    }
	    if(input==2)
	    {
	        ll u2, v2;
	        cin >> u2 >> v2;
	        if(v2-1 > u2-1)
	        {
	            zgt_dh[u2-1]--;
	            if(zgt_dh[u2-1]==0) zero++;
	        }
	        if(u2-1 > v2-1)
	        {
	            zgt_dh[v2-1]--;
	            if(zgt_dh[v2-1]==0) zero++;
	        }
	        
	        continue;
	    }
	    if(input==3)
	    {
	        cout << zero << endl;
	    }
	}
	
}