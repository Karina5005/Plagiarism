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
	    for( int  i =0; i < n ; i ++ ) cin>>arr[i] ;
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
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
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

    for (ll i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
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

//check whether the no is prime or not.
bool isPrime(int n)
{
    if(n<=1)return false;
    if(n<=3)return true;
    if(n%2==0||n%3==0)return false;
    for(int i=5;i*i<=n;i=i+6)
    {
        if(n%i==0||n%(i+2)==0)
        return false;
    }
    return true;
}



void solve() {
    int n;cin>>n;
        int a[n][5];
        for(int i = 0;i<n;i++){
            for(int j = 0;j<5;j++)cin>>a[i][j];
        }
        string ans = "NO";
        for(int i  =0;i<5;i++){
            for(int j = 0;j<5;j++){
                if(i!=j){
                    int day1 = i, day2 = j;
                    int c1 = 0, c2 = 0, c = 0;
                    for(int k = 0;k<n;k++){
                        if(a[k][day1]==1)c1++;
                        if(a[k][day2]==1)c2++;
                        if(a[k][day1]==0 and a[k][day2]==0)c++;
                    }
                    
                    if(c1>=n/2 and c2>=n/2 and c==0){
                        ans = "YES";
                        break;
                    }
                }
            }
            if(ans=="YES")break;
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

