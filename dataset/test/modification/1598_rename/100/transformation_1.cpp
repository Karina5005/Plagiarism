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
vector< T > readvector  ( T  wnn_q ) {  vector < T > u_pfh(wnn_q ) ;
	    for( int  ir_ycn =0; ir_ycn < wnn_q ; ir_ycn ++ ) cin>>u_pfh[ir_ycn] ;
		return u_pfh; }




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
    double pqn_lg = (1 + sqrt(5)) / 2;
    return (ll)round(pow(pqn_lg, n) / sqrt(5));
}

// all factors of a number
vector<ll> wp_uvy(ll n) 
{    
    vector<ll> hs_mzb;

    for (ll i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
            {
                hs_mzb.push_back(i);
            }

            else
            {
                hs_mzb.push_back(i);
                hs_mzb.push_back(n / i);
            }
        }
    }

    sort(hs_mzb.begin(), hs_mzb.end());
    return hs_mzb;
}

//check whether the no is prime or not.
bool g(int oy)
{
    if(oy<=1)return false;
    if(oy<=3)return true;
    if(oy%2==0||oy%3==0)return false;
    for(int osb=5;osb*osb<=oy;osb=osb+6)
    {
        if(oy%osb==0||oy%(osb+2)==0)
        return false;
    }
    return true;
}



void p() {
    int q;cin>>q;
        int oe_vuz[q][5];
        for(int ajs_ko = 0;ajs_ko<q;ajs_ko++){
            for(int oo_ijt = 0;oo_ijt<5;oo_ijt++)cin>>oe_vuz[ajs_ko][oo_ijt];
        }
        string c_a = "NO";
        for(int ox_sme  =0;ox_sme<5;ox_sme++){
            for(int m = 0;m<5;m++){
                if(ox_sme!=m){
                    int vbf_o = ox_sme, pnb = m;
                    int d_c = 0, zp = 0, rjn_ap = 0;
                    for(int w_w = 0;w_w<q;w_w++){
                        if(oe_vuz[w_w][vbf_o]==1)d_c++;
                        if(oe_vuz[w_w][pnb]==1)zp++;
                        if(oe_vuz[w_w][vbf_o]==0 and oe_vuz[w_w][pnb]==0)rjn_ap++;
                    }
                    
                    if(d_c>=q/2 and zp>=q/2 and rjn_ap==0){
                        c_a = "YES";
                        break;
                    }
                }
            }
            if(c_a=="YES")break;
        }
        cout<<c_a<<endl;
}






    



int main()
{
    fast;
    ll t;
    cin>> t;
    while(t--)
    {
        p();
        
    }

    return 0;
}

