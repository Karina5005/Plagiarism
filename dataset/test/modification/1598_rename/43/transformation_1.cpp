#include <bits/stdc++.h>

using namespace std;

#define LL long long int
#define pb push_back
#define fr(i,start,n) for (i=start;i<n;i++)
#define p(n) cout<<n<<"\n";
#define ins insert
#define f first
#define s second
#define pi 3.1415926536
#define md 1000000007

LL gcd(LL a, LL b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 
LL lcm(int ntw_q, int f)
{
    return (ntw_q / gcd(ntw_q, f)) * f;
}

bool l_wa[10000005];
vector<LL> q_wz;

void wk_o(){
    
    memset(l_wa, true, sizeof(l_wa));
 
    for (LL p = 2; p * p <= 10000005; p++)
    {
        if (l_wa[p] == true)
        {
            for (LL i = p * p; i <= 10000005; i += p)
                l_wa[i] = false;
        }
    }
 
    for (LL p = 2; p <= 10000005; p++)
        if (l_wa[p])
            q_wz.pb(p);
}

vector<LL> rnf;
void gg(LL n){
    rnf.pb(0);
    LL ans=1,i;
    fr(i,1,n+1){
        ans=(ans*i)%1000000007;
        rnf.pb(ans);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    LL t;
    cin>>t;
    while(t--){
        LL n,k,i;
        cin>>n;
        LL sum=0;
        vector<LL> fg_bup;
        fr(i,0,n){
            cin>>k;
            fg_bup.pb(k);
            sum+=k;
        }
        LL r=2*sum/n;
        if ((sum-r)*n!=sum*(n-2)){
            p(0);
        }else{
            map<LL,LL> x_au;
            LL c=0;
            fr(i,0,n){
                c+=x_au[r-fg_bup[i]];
                x_au[fg_bup[i]]++;
            }
            p(c);
        }
    }
    return 0;
}