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
 
LL lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

bool prime[10000005];
vector<LL> pr;

void seive(){
    
    memset(prime, true, sizeof(prime));
 
    for (LL p = 2; p * p <= 10000005; p++)
    {
        if (prime[p] == true)
        {
            for (LL i = p * p; i <= 10000005; i += p)
                prime[i] = false;
        }
    }
 
    for (LL p = 2; p <= 10000005; p++)
        if (prime[p])
            pr.pb(p);
}

vector<LL> ft;
void fact(LL n){
    ft.pb(0);
    LL ans=1,i;
    fr(i,1,n+1){
        ans=(ans*i)%1000000007;
        ft.pb(ans);
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
        vector<LL> v;
        fr(i,0,n){
            cin>>k;
            v.pb(k);
            sum+=k;
        }
        LL r=2*sum/n;
        if ((sum-r)*n!=sum*(n-2)){
            p(0);
        }else{
            map<LL,LL> mp;
            LL c=0;
            fr(i,0,n){
                c+=mp[r-v[i]];
                mp[v[i]]++;
            }
            p(c);
        }
    }
    return 0;
}