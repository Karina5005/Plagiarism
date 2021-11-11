#include<bits/stdc++.h>



#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
#include <ext/pb_ds/detail/standard_policies.hpp>




using namespace std;
using namespace __gnu_pbds;



#define ll long long
#define ff first
#define ss second
#define ook order_of_key
#define fbo find_by_order 
#define minheap priority_queue<long long , vector< long long >, greater<long long > >
#define endl  "\n"

#define rev(a)  reverse(a.begin() , a.end())
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define pb push_back
#define PI 3.14159265358979323846 
#define M 1e9 + 7
#define print(v) for(int i = 0 ; i< n; i++){ cout<<v[i] << endl;}


template  < class  T >
vector< T > readvector  ( T  n ) {  vector < T > arr(n ) ;
	    for( int  i =0; i < n ; i ++ ) /* 'for' inside */
	    cin>>arr[i] ;
		return arr; }






typedef tree< pair<int,int>  , null_type, less  < pair<int,int>  > , rb_tree_tag ,
 tree_order_statistics_node_update > PBDS;


ll gcd(ll a, ll b) 
{
    /* 'if' begin */
    if (b == 0)
    /* 'if' inside */
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}



ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}


ll fib(ll n)
{
    double phi = (1 + sqrt(5)) / 2;
    return (ll)round(pow(phi, n) / sqrt(5));
}


vector<ll> factors(ll n) 
{    
    vector<ll> v;

    for (ll i = 1; i <= sqrt(n); i++)
    /* 'for' inside */
    {
        /* 'if' begin */
        if (n % i == 0)
        /* 'if' inside */
        {
            /* 'if' begin */
            if (n / i == i)
            /* 'if' inside */
            {
                v.push_back(i);
            }

            else
            {
                v.push_back(i);
                v.push_back(n / i);
            }
        }
    }

    sort(v.begin(), v.end());
    return v;
}


bool isPrime(int n)
{
    /* 'if' begin */
    if(n<=1)/* 'if' inside */
    return false;
    /* 'if' begin */
    if(n<=3)/* 'if' inside */
    return true;
    /* 'if' begin */
    if(n%2==0||n%3==0)/* 'if' inside */
    return false;
    for(int i=5;i*i<=n;i=i+6)
    /* 'for' inside */
    {
        /* 'if' begin */
        if(n%i==0||n%(i+2)==0)
        /* 'if' inside */
        return false;
    }
    return true;
}



void solve() {
    int n;cin>>n;
        int a[n][5];
        for(int i = 0;i<n;i++)/* 'for' inside */
        {
            for(int j = 0;j<5;j++)/* 'for' inside */
            cin>>a[i][j];
        }
        string ans = "NO";
        for(int i  =0;i<5;i++)/* 'for' inside */
        {
            for(int j = 0;j<5;j++)/* 'for' inside */
            {
                /* 'if' begin */
                if(i!=j)/* 'if' inside */
                {
                    int day1 = i, day2 = j;
                    int c1 = 0, c2 = 0, c = 0;
                    for(int k = 0;k<n;k++)/* 'for' inside */
                    {
                        /* 'if' begin */
                        if(a[k][day1]==1)/* 'if' inside */
                        c1++;
                        /* 'if' begin */
                        if(a[k][day2]==1)/* 'if' inside */
                        c2++;
                        /* 'if' begin */
                        if(a[k][day1]==0 and a[k][day2]==0)/* 'if' inside */
                        c++;
                    }
                    
                    /* 'if' begin */
                    if(c1>=n/2 and c2>=n/2 and c==0)/* 'if' inside */
                    {
                        ans = "YES";
                        break;
                    }
                }
            }
            /* 'if' begin */
            if(ans=="YES")/* 'if' inside */
            break;
        }
        cout<<ans<<endl;
}






    



int main()
{
    fast;
    ll t;
    cin>> t;
    while(t--)
    {
        solve();
        
    }

    return 0;
}

