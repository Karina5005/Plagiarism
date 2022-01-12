#include <bits/stdc++.h>
using namespace std;

/// Constant:
#define         eps         0.000000001
#define         pi          2*acos(0)
#define         P1          1000000007
#define         P2          1000000009
#define         INF         1000000000000000000ll

#define         fast()      ios_base::sync_with_stdio(false);   cin.tie(NULL);
#define         PB          push_back
#define         pb          pop_back
#define         mp          make_pair
#define         I           insert
#define         P           push
#define         p           pop
#define         pY          cout<<"YES"<<endl
#define         pN          cout<<"NO"<<endl
#define         py          cout<<"Yes"<<endl
#define         pn          cout<<"No"<<endl
#define         endl        "\n"
#define         lli         long long int
#define         vin(va, n)  for(int i=0; i<n; i++){int x;cin>>x;va.PB(x);}

/// Functions:
//int mark[1000010];vector<int>primes;void sieve(int n) {memset(mark, 0, sizeof(mark));for (int i=4; i<=n; i+=2)mark[i]=-1;mark[0]=mark[1]=-1;int root=sqrt(n);primes.push_back(2);for(int i=3; i<=root; i+=2) {if(mark[i]==0) {for(int j=i*i; j<=n; j+=2*i)mark[j]=-1;}}for(int i=3; i<=n; i+=2) {if(mark[i]==0)primes.push_back(i);}}
//int phi[500007];void phi(int N){for(int i=2; i<=N; i++)phi[i] = i;for(int i =2; i<=N; i++){if(phi[i]==i){for(int j=i; j<=N; j+=i)phi[j]-=phi[j]/i;}}}
//lli bigmod(lli b, lli p, lli m){if(p==0)return 1;if(p%2!=0) return b%m*fun(b,p-1,m)%m;if(p%2==0){ lli res=fun(b,p/2,m);return (res%m*res%m)%m;}}
//lli mod_inverse(lli a, lli mod) { return bigmod(a,mod-2,mod); }
//lli LCM(lli a, lli b) { return a*b/ __gcd(a,b); }
//vector<int>divisors[1000005]; void divisor(int n) { for (int i=1; i<=n; i++)    for (int j=i; j<=n; j+=i)   divisors[j].PB(i);}
//lli missingK(vector<lli>& arr, lli k) {//kth number which doesn't contain vector(3 2 \n 1 2 3 \n(ans=5)) lli n = arr.size();lli l = 0, u = n - 1, mid;while(l <= u) {mid = (l + u)/2;lli numbers_less_than_mid = arr[mid] -(mid + 1);if(numbers_less_than_mid == k) {if(mid > 0 && (arr[mid - 1] - (mid)) == k) {u = mid - 1;continue;}return arr[mid]-1;}if(numbers_less_than_mid < k) {l = mid + 1;} else if(k < numbers_less_than_mid) {u = mid - 1;}}if(u < 0)return k;lli less = arr[u] - (u + 1);k -= less;return arr[u] + k;}
//lli firstMissingPositive(vector<lli>& arr, lli n) { lli ptr = 0;for (int i = 0; i < n; i++){if (arr[i] == 1) { ptr = 1;break;}}if (ptr == 0) return 1; for (int i = 0; i < n; i++) if (arr[i] <= 0 || arr[i] > n) arr[i] = 1; for (int i = 0; i < n; i++) arr[(arr[i] - 1) % n] += n; for (int i = 0; i < n; i++) if (arr[i] <= n) return i + 1; return n + 1;}
//ll gcd(ll a, ll b){if(b==0) {return a;}return gcd(b, a % b);}
//double triAngleArea(double dX0, double dY0, double dX1, double dY1, double dX2, double dY2) {double dArea = ((dX1 - dX0)*(dY2 - dY0) - (dX2 - dX0)*(dY1 - dY0))/2.0;return (dArea > 0.0) ? dArea : -dArea;}

///Graph Moves
//const int dx[]= {+1,-1,+0,+0};
//const int dy[]= {+0,+0,+1,-1};
//const int dx[]={+0,+0,+1,-1,-1,+1,-1,+1};   // Kings Move
//const int dy[]={-1,+1,+0,+0,+1,+1,-1,-1};  // Kings Move
//const int dx[]={-2,-2,-1,-1,1,1,2,2};  // Knights Move
//const int dy[]={-1,1,-2,2,-2,2,-1,1}; // Knights Move

///Bitmask
//int Set(int N,int pos){return N = (N (1<<pos));}
//int reset(int N,int pos){return N = (N & ~(1<<pos));}
//bool check(int N,int pos){return (bool)(N & (1<<pos));}

int main() {

    /**freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);*/

    fast();

    int t;
    cin>>t;
    while(t--) {
        set<char>sc;
        string s;
        int l;
        cin>>s;
        l=s.size();
        for(int i=0; i<l; i++) {
            sc.insert(s[i]);
        }
        if(sc.size()==1&&s[0]=='a')
            pN;
        else {
            pY;
            string ss,sss;
            bool f1=false,f2=false;
            ss='a'+s;
            for(int i=0,j=l; i<=j; i++,j--) {
                if(ss[i]!=ss[j]) {
                    f1=true;
                    break;
                }
            }
            sss=s+'a';
            for(int i=0,j=l; i<=j; i++,j--) {
                if(sss[i]!=sss[j]) {
                    f2=true;
                    break;
                }
            }
            if(f1)
                cout<<ss<<endl;
            else
                cout<<sss<<endl;
        }
    }

    return 0;

}


/**





*/
