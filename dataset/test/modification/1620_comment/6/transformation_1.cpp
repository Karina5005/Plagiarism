#pragma GCC optimize("Ofast")
#pragma comment(linker, "/stack:200000000")
#pragma GCC optimization ("unroll-loops")
 


#include <bits/stdc++.h>
 
using namespace std;

#ifdef SET
// header files for policy based data structures in g++ 
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>     // Including tree_order_statistics_node_update
#include <ext/rope>
using namespace __gnu_pbds;
using namespace __gnu_cxx;
// ordered_Set - same as set but allows 
               //order_of_key (k) : Number of items strictly smaller than k    O(logn)
               //find_by_order(k) : K-th element in a set (counting from zero).  O(logn)
// change less<int> to less_equal<int> to have a ordered set behaving as multi set but in this case erase operation does not work    
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_multi_set;
#endif
               
 



#define mod 1000000007
#define ll unsigned long long
 
#define pb push_back 
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define gcd(a,b)    __gcd((a),(b))
#define lcm(a,b)    ((a)*(b)) / gcd((a),(b))
#define all(a)              a.begin(),a.end()
#define rsrt(v) sort(v.begin(), v.end(), greater<int>())
#define rsrtl(v) sort(v.begin(), v.end(), greater<ll>())
#define fi(i, a, b) for (int i = a; i < b; i++)
#define fll(i, a, b) for (ll i = a; i < b; i++)
#define rfi(i, a, b) for (int i = int(a); i >= int(b); i--)
#define mxe(v) *max_element(v.begin(), v.end())
#define srt(v) sort(v.begin(), v.end())
#define g(v, i, j) get<i>(v[j])
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define F first
#define S second
#define mem1(a)           memset(a,-1,sizeof(a))
#define mem0(a)           memset(a,0,sizeof(a))
#define mp make_pair
#define sz(x) (int)x.size()
#define sp " "
#define nl '\n'

















           



 

    

    




    


 
 

 

 














 
int main()
{
    ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    
    ll x;
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k>>x;
        string s;
        cin>>s;
        /* 'if' begin */
        if (n==1)/* 'if' inside */
        {
            cout<<"a"<<"\n";
            continue;
        }
        else /* 'if' begin */
        if (k==0 or x==1)/* 'if' inside */
        {
            string ans="";
            fi(i,0,n){
                /* 'if' begin */
                if (s[i]=='a')/* 'if' inside */
                {
                    ans+="a";
                }
            }
            cout<<ans<<"\n";
            continue;
        }
        
        int cnt=0;
        vi b;
        for(int i=0;i<n;i++)/* 'for' inside */
        {
            /* 'if' begin */
            if (s[i]=='a')/* 'if' inside */
            {
                /* 'if' begin */
                if (cnt!=0)/* 'if' inside */
                {
                    b.pb(cnt);
                }
                cnt=0;
            }
            else{
                cnt+=k;
            }
        }
        /* 'if' begin */
        if (cnt!=0)/* 'if' inside */
        {
                b.pb(cnt);
        }
        ll inf=1e18+1000;
        int sz=b.size();
        ll weight[sz];
        weight[sz-1]=1;
        for(int i=sz-2;i>=0;i--)/* 'for' inside */
        {
            
            /* 'if' begin */
            if(weight[i+1]>(inf/(b[i+1]+1)))/* 'if' inside */
            {
                weight[i]=inf;
                continue;
            }
            weight[i]=weight[i+1] ;
            
            weight[i]*=(ll)(b[i+1]+1);
        }
        
        x--;
        ll freq[sz];
        mem0(freq);
        int i=0;
        while(i<sz ){
            freq[i]=x/((ll)(weight[i]));
            x-=weight[i]*freq[i];
            i++;
        }
        
        
        
        string ans="";
        int j=0;
        i=0;
        while(i<n){
            /* 'if' begin */
            if (s[i]=='a')/* 'if' inside */
            {
                ans+="a";
                i++;
            }
            else{
                while(freq[j]>0){
                    ans+="b";
                    freq[j]--;
                }
                j++;
                while(i<n and s[i]=='*'){
                    i++;
                }
            }
            
            
        }
        cout<<ans<<"\n";
        
        
        
        
    
    }
    




    return 0;

}