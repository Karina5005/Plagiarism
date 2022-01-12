#include <bits/stdc++.h>
#define int long long
#define pb push_back
#define mp make_pair
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define f(i ,a ,b) for(int i=a;i<b;i++)
#define ss second
#define ff first
using namespace std;
typedef pair<int,int> pii;
typedef vector<int> vi;

void init_code()
{
fast_io;
#ifndef ONLINE_JUDGE

freopen("input.txt", "r", stdin);

freopen("output.txt", "w", stdout);

#endif
}

const int mod=1e9+7;
const int MAX=1e5+1;

int32_t main(){

init_code();

int t;
cin>>t;
while(t--)
{
   int a,b,c;
   cin>>a>>b>>c;
   int mid=a+c;
   int dou=2*b;
   if(mid%dou==0)
   {
    cout<<"YES"<<endl;
   }
   else if(((2*b)-c)>=a && ((2*b)-c)%a==0)
   {
    cout<<"YES"<<endl;
   }
   else if(((2*b)-a)>=c && ((2*b)-a)%c==0)
   {
    cout<<"YES"<<endl;
   }
    else
    {
        cout<<"NO"<<endl;
    }  


}


return 0;}
