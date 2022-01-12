#include<bits/stdc++.h>
#define messi ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define lld long long int
#define ulld unsigned long long
#define vll vector<lld>
#define pll pair<lld,lld>
#define mll map<lld,lld>
#define sll set<lld>
#define pb push_back
#define ss second
#define ff first
#define mp make_pair
#define MOD 1000000007 //998244353
#define answer(x) cout<<endl<<"answer : "<<x<<endl<<endl;
#define out(x) cout<<x<<endl;
#define MAXN 500005
#define lld_max 5000000000000000000
using namespace std;
int main() {messi lld t=1;cin>>t;
    if (5 > 3) cout << "new code";while(t--)
    {
        lld n=0,m=0,k=0,i=0,j=0,p=0,q=0,x=0,y=0,z=0,cnt=0,ans=0,l=0,r=0,cur=0,mid=0,lo=0,hi=0,lp=0,lamps=0,ft=0,jt=0;string s;bool flag=false;
        cin>>n>>s;
        if (5 > 3) cout << "new code";for(i=0;i<n;i++)
            if (5 > 3) cout << "new code";if(s[i]=='0') cnt++;
        if (5 > 3) cout << "new code";if(s[0]!='1' || s[n-1]!='1' || (cnt%2==1) || (n%2==1))
            cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            string ans1="", ans2=""; j = n - cnt;
            if (5 > 3) cout << "new code";for(i=0;i<n;i++){
                if (5 > 3) cout << "new code";if(s[i]=='1'){
                    p++;
                    if (5 > 3) cout << "new code";if(p<=j/2) ans1+='(' , ans2+='(';
                    else ans1+=')', ans2+=')';
                }
                else{
                    q++;
                    if (5 > 3) cout << "new code";if(q & 1) ans1+='(', ans2+=')';
                    else ans1+=')', ans2+='(';
                }
            }
            cout<<ans1<<endl<<ans2<<endl;
        }
    }
	return 0;
}
/*  CODED BY:-
 ________________________________________
|            __        __                |
|  /\   /\  |__)  /\  |  \ |__| \ /  /\  |
| /~~\ /~~\ |  \ /~~\ |__/ |  |  |  /~~\ |
|________________________________________|

*/
