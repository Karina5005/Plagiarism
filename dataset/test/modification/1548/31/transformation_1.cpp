#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main() {
	ll n, m, u, v;
	cin >> n >> m;

	vector<ll> mx(n, 0);
	ll zero=0;
	
	for(ll i=0; i<m; i++)
	/* 'for' inside */
	{
	    cin >> u >> v;
	    /* 'if' begin */
	    if(v-1 > u-1)   /* 'if' inside */
	    mx[u-1]++;
	    /* 'if' begin */
	    if(u-1 > v-1)   /* 'if' inside */
	    mx[v-1]++;
	}
	for(ll i=0; i<n; i++)
	/* 'for' inside */
	{
	    /* 'if' begin */
	    if(mx[i]==0)    /* 'if' inside */
	    zero++;
	}
	
	ll q;
	cin >> q;
 
	while(q--)
	{
	    ll input;
	    cin >> input;
	    
	    /* 'if' begin */
	    if(input==1)
	    /* 'if' inside */
	    {
	        ll u2, v2;
	        cin >> u2 >> v2;
	        /* 'if' begin */
	        if(v2-1 > u2-1)
	        /* 'if' inside */
	        {
	            mx[u2-1]++;
	            /* 'if' begin */
	            if(mx[u2-1]==1) /* 'if' inside */
	            zero--;
	        }
	        /* 'if' begin */
	        if(u2-1 > v2-1)
	        /* 'if' inside */
	        {
	            mx[v2-1]++;
	            /* 'if' begin */
	            if(mx[v2-1]==1) /* 'if' inside */
	            zero--;
	        }
	        
	        continue;
	    }
	    /* 'if' begin */
	    if(input==2)
	    /* 'if' inside */
	    {
	        ll u2, v2;
	        cin >> u2 >> v2;
	        /* 'if' begin */
	        if(v2-1 > u2-1)
	        /* 'if' inside */
	        {
	            mx[u2-1]--;
	            /* 'if' begin */
	            if(mx[u2-1]==0) /* 'if' inside */
	            zero++;
	        }
	        /* 'if' begin */
	        if(u2-1 > v2-1)
	        /* 'if' inside */
	        {
	            mx[v2-1]--;
	            /* 'if' begin */
	            if(mx[v2-1]==0) /* 'if' inside */
	            zero++;
	        }
	        
	        continue;
	    }
	    /* 'if' begin */
	    if(input==3)
	    /* 'if' inside */
	    {
	        cout << zero << endl;
	    }
	}
	
}