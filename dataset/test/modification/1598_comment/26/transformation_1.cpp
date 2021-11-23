#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
#define MODVAL 1000000007
#define read(vec) for(auto &x:vec){cin>>x;}
#define each(vec) for(auto x: vec){cout<<x<<" ";}cout<<"\n";
#define sortasc(vec) sort(vec.begin(),vec.end());
#define sortdes(vec) sort(vec.rbegin(),vec.rend());
#define all(x) x.begin(),x.end()
#define ALLA(arr, sz) arr, arr + sz
#define SIZE(v) (int)v.size()
#define SORT(v) sort(ALL(v))
#define REVERSE(v) reverse(ALL(v))
#define SORTA(arr, sz) sort(ALLA(arr, sz))
#define REVERSEA(arr, sz) reverse(ALLA(arr, sz))
#define PERMUTE next_permutation
#define MAX(a, b) a = max(a, b)
#define MIN(a, b) a = min(a, b)
#define SQR(x) ((LL)(x) * (x))


typedef unsigned long long ll;
int countDistinct(string s) 
{ 

    unordered_map<char, int> m; 

    for (int i = 0; i < s.length(); i++) /* 'for' inside */
    { 
        m[s[i]]++; 
    } 

    return m.size(); 
} 
void fastscan(int &number)
{
    
    bool negative = false;
    register int c;
  
    number = 0;
  
    
    c = getchar();
    /* 'if' begin */
    if (c=='-')
    /* 'if' inside */
    {
        
        negative = true;
  
        
        c = getchar();
    }
  
    
    for (; (c>47 && c<58); c=getchar())
        /* 'for' inside */
        number = number *10 + c - 48;
  
    
    /* 'if' begin */
    if (negative)
        /* 'if' inside */
        number *= -1;
}




int main()
{


    fastio;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        string a,b;
        cin>>a>>b;
        string ans="YES";
        for(ll i=0;i<n;i++)
            /* 'for' inside */
            /* 'if' begin */
            if(a[i]=='1' && b[i]=='1')/* 'if' inside */
            {ans ="NO";break;}
        cout<<ans;
        cout<<'\n';
    }
    
    return 0;
}