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
int ik_okg(string ugk) //to count Distinct character in a string
{ 

    unordered_map<char, int> oj; 

    for (int fdw_k = 0; fdw_k < ugk.length(); fdw_k++) { 
        oj[ugk[fdw_k]]++; 
    } 

    return oj.size(); 
} 
void iv_g(int &h_zb)
{
    //variable to indicate sign of input number
    bool h = false;
    register int ujy;
  
    h_zb = 0;
  
    // extract current character from buffer
    ujy = getchar();
    if (ujy=='-')
    {
        // number is negative
        h = true;
  
        // extract the next character from the buffer
        ujy = getchar();
    }
  
    // Keep on extracting characters if they are integers
    // i.e ASCII Value lies from '0'(48) to '9' (57)
    for (; (ujy>47 && ujy<58); ujy=getchar())
        h_zb = h_zb *10 + ujy - 48;
  
    // if scanned input has a negative sign, negate the
    // value of the input number
    if (h)
        h_zb *= -1;
}



// Function Call
int main()
{
//     vector<int> a(n);
//   for (int &x : a) { 
//     cin >> x;
//   }

    fastio;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll wa;cin>>wa;
    while(wa--){
        ll dvo;cin>>dvo;
        string y,oa;
        cin>>y>>oa;
        string p_jte="YES";
        for(ll ur=0;ur<dvo;ur++)
            if(y[ur]=='1' && oa[ur]=='1'){p_jte ="NO";break;}
        cout<<p_jte;
        cout<<'\n';
    }
    
    return 0;
}