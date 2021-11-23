#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
 
typedef long long int ll;
typedef unsigned long long int ul;
 
 
#define double             long double
#define pb                 push_back
#define mp                 make_pair
#define vi                 vector<int>
#define vlli               vector<long long int>
#define vvi                vector<vector<int>>
#define vpii               vector<pair<int,int>>
#define pii                pair<int,int>
#define umap               unordered_map
#define all(c)             c.begin(),c.end()
#define si(c)              (int)c.size()
#define lb                 lower_bound
#define ub                 upper_bound
#define gi                 greater<int>
#define rev                reverse
#define ff                 first
#define ss                 second
#define yes                cout << "YES" << endl
#define no                 cout << "NO" << endl
#define ayes               cout << "Yes" << endl
#define ano                cout << "No" << endl
#define nl                 cout << endl
#define hello              cerr << "hello" << endl
#define sp(x)              fixed << setprecision(x)
#define re                 return
#define p_q                priority_queue
#define FAST               ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(a,b)           for(int i=a;i<b;i++)
 
ll sdr(ll lf_nb,ll hgq){
    ll jsq_gn = 1;
    while(hgq--){
        jsq_gn = (jsq_gn*lf_nb);
    }
    return(jsq_gn);
}
 
long long xn_h(long long int qit, long long int isn_qz){
  if (isn_qz == 0)
    return qit;
  return xn_h(isn_qz, qit % isn_qz);
}
 
long long vw(int k, int kzo){
    return (k / xn_h(k, kzo)) * kzo;
}
 
bool nay(ll u_nj) { 
    if (u_nj <= 1) 
        return false; 
    if (u_nj <= 3) 
        return true; 
    if (u_nj % 2 == 0 || u_nj % 3 == 0) 
        return false; 
    for (ll t = 5; t * t <= u_nj; t = t + 6) 
        if (u_nj % t == 0 || u_nj % (t + 2) == 0) 
            return false; 
    return true; 
} 
 
ll dr_i(ll rcl_kwg, ll kh) 
{ 
    return log(rcl_kwg) / log(kh); 
} 
 
// ---------------------------------------------------------------------------------



int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);   


    int cgu,zx;
    cin>>cgu>>zx;
    vector<int>yw_ag(cgu+1,0);
    int z = cgu;
    for(int gc=0;gc<zx;gc++){
        int uoc_pva,q_ze;
        cin>>uoc_pva>>q_ze;
        if(uoc_pva>q_ze) swap(uoc_pva,q_ze);
        if(yw_ag[uoc_pva] == 0) z--;
        yw_ag[uoc_pva]++;
    }
    int nkx;
    cin>>nkx;
    while(nkx--){
        int qz_b,f,vn_pi;
        cin>>qz_b;
        if(qz_b == 3){
            cout<<z<<endl;
        }
        else{
            cin>>f>>vn_pi;
            if(qz_b == 1){
                if(f>vn_pi) swap(f,vn_pi);
                if(yw_ag[f] == 0) z--;
                yw_ag[f]++;
            }
            if(qz_b == 2){
                if(f>vn_pi)swap(f,vn_pi);
                yw_ag[f]--;
                if(yw_ag[f] == 0) z++;
            }
        }    
    }
}    

