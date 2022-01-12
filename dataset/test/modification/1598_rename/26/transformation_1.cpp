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
int nff(string t_tay) //to count Distinct character in a string
{ 

    unordered_map<char, int> ilx; 

    for (int ire_y = 0; ire_y < t_tay.length(); ire_y++) { 
        ilx[t_tay[ire_y]]++; 
    } 

    return ilx.size(); 
} 
void ai_q(int &re_zim)
{
    //variable to indicate sign of input number
    bool o_wa = false;
    register int hm;
  
    re_zim = 0;
  
    // extract current character from buffer
    hm = getchar();
    if (hm=='-')
    {
        // number is negative
        o_wa = true;
  
        // extract the next character from the buffer
        hm = getchar();
    }
  
    // Keep on extracting characters if they are integers
    // i.e ASCII Value lies from '0'(48) to '9' (57)
    for (; (hm>47 && hm<58); hm=getchar())
        re_zim = re_zim *10 + hm - 48;
  
    // if scanned input has a negative sign, negate the
    // value of the input number
    if (o_wa)
        re_zim *= -1;
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
    ll pte;cin>>pte;
    while(pte--){
        ll iu;cin>>iu;
        string s_bv,g;
        cin>>s_bv>>g;
        string lyf="YES";
        for(ll f_eru=0;f_eru<iu;f_eru++)
            if(s_bv[f_eru]=='1' && g[f_eru]=='1'){lyf ="NO";break;}
        cout<<lyf;
        cout<<'\n';
    }
    
    return 0;
}