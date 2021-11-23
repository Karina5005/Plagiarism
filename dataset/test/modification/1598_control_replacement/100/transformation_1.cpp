#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>

/************************************ policy base data structure*****************/

#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update
#include <ext/pb_ds/detail/standard_policies.hpp>



/************************************ policy base data structure*****************/
using namespace std;
using namespace __gnu_pbds;



#define ll long long
#define ff first
#define ss second
#define ook order_of_key
#define fbo find_by_order 
#define minheap priority_queue<long long , vector< long long >, greater<long long > >
#define endl  "\n"
// #define sort(a) sort(a.begin() , a.end())
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
	    {
	    int  i =0;
	    for ( ; i < n; ) 
{
	    cin>>arr[i] 
	    i ++; 
	    
	    }};
		return arr; }




/********************* template of PBDS ************/
// template < class T > using oset = tree< T , null_type, less  < T  > , rb_tree_tag , tree_order_statistics_node_update > ;
// oset< int > tree ; 
// tree.ook ( val  )  return index of element ;
// tree.fbo ( idx )   return pointer at the element .

typedef tree< pair<int,int>  , null_type, less  < pair<int,int>  > , rb_tree_tag ,
 tree_order_statistics_node_update > PBDS;


ll gcd(ll a, ll b) // TC = O(log n)
{
    if (!(b == 0))
    {
        return gcd(b, a % b);
    }
    else
    {
        return a;
    }
}

//lcm of two no

ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}

// fibonacci of nth no . 
ll fib(ll n)
{
    double phi = (1 + sqrt(5)) / 2;
    return (ll)round(pow(phi, n) / sqrt(5));
}

// all factors of a number
vector<ll> factors(ll n) 
{    
    vector<ll> v;

    {
    ll i = 1;
    for ( ; i <= sqrt(n); ) 
{
        if (n % i == 0)
        {
            if (!(n / i == i))
            {
                v.push_back(i);
                v.push_back(n / i);
            }

            else
            {
                v.push_back(i);
            }
        }
    	i++; 
    
    }}

    sort(v.begin(), v.end());
    return v;
}

//check whether the no is prime or not.
bool isPrime(int n)
{
    if(n<=1)return false;
    if(n<=3)return true;
    if(n%2==0||n%3==0)return false;
    {
    int i=5;
    for ( ; i*i<=n; ) 
{
        if(n%i==0||n%(i+2)==0)
        return false;
    	i=i+6; 
    
    }}
    return true;
}



void solve() {
    int n;cin>>n;
        int a[n][5];
        {
        int i = 0;
        for ( ; i<n; ) 
{
            {
            int j = 0;
            for ( ; j<5; ) 
{
            cin>>a[i][j];
            j++; 
            
            }}
        	i++; 
        
        }}
        string ans = "NO";
        {
        int i  =0;
        for ( ; i<5; ) 
{
            {
            int j = 0;
            for ( ; j<5; ) 
{
                if(i!=j){
                    int day1 = i, day2 = j;
                    int c1 = 0, c2 = 0, c = 0;
                    {
                    int k = 0;
                    for ( ; k<n; ) 
{
                        if(a[k][day1]==1)c1++;
                        if(a[k][day2]==1)c2++;
                        if(a[k][day1]==0 and a[k][day2]==0)c++;
                    	k++; 
                    
                    }}
                    
                    if(c1>=n/2 and c2>=n/2 and c==0){
                        ans = "YES";
                        break;
                    }
                }
            	j++; 
            
            }}
            if(ans=="YES")break;
        	i++; 
        
        }}
        cout<<ans<<endl;
}






    



int main()
{
    fast;
    ll t;
    cin>> t;
    for ( ; t--; ) 
{
        solve();
        
    }

    return 0;
}

