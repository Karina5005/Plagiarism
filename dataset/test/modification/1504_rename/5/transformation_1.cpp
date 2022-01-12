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
    while(t--)
    {
        lld n=0,m=0,k=0,i=0,j=0,p=0,q=0,x=0,y=0,z=0,cnt=0,ans=0,l=0,r=0,cur=0,mid=0,lo=0,hi=0,lp=0,lamps=0,ft=0,jt=0;string qz_tdq;bool sz_ipz=false;
        cin>>n>>qz_tdq;
        for(i=0;i<n;i++)
            if(qz_tdq[i]=='0') cnt++;
        if(qz_tdq[0]!='1' || qz_tdq[n-1]!='1' || (cnt%2==1) || (n%2==1))
            cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            string mmr_rcz="", it=""; j = n - cnt;
            for(i=0;i<n;i++){
                if(qz_tdq[i]=='1'){
                    p++;
                    if(p<=j/2) mmr_rcz+='(' , it+='(';
                    else mmr_rcz+=')', it+=')';
                }
                else{
                    q++;
                    if(q & 1) mmr_rcz+='(', it+=')';
                    else mmr_rcz+=')', it+='(';
                }
            }
            cout<<mmr_rcz<<endl<<it<<endl;
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
