#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

#define scnf(n) scanf("%d",&n)
#define lscnf(n) scanf("%lld",&n)
#define dscnf(n) scanf("%Lf",&n)
#define prin(n) printf("%d ",n)
#define lprin(n) printf("%lld ",n)
#define dprin(n) printf("%Lf ",n)
#define print(n) printf("%d\n",n)
#define lprint(n) printf("%lld\n",n)
#define dprint(n) printf("%Lf\n",n)

#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL)

#define gcd __gcd 
#define rep(i,o,n) for(ll i=o;i<(int)n;i++)
#define tc int tt;scnf(tt);while(tt--)
#define all(x) x.begin(),x.end()

#define F first
#define S second
#define pb push_back

ll lcm(int a,int b){
	return a*b/gcd(a,b);
}

template <typename DT>
void swap(DT* a,DT* b){
    DT temp=*a;
    *a=*b;
    *b=temp;
}

// const ll N=10000001;
// const ll M=1000000007;

int main(){

    tc{
        int n;
        cin>>n;

        bool ok=false;

        rep(i,0,11){
            int x=n-111*i;
            if(x<0)
            break;

            if(x%11 == 0){
                ok=true;
                break;
            }
        }

        if(ok)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;

    }

	return 0;
}
/*
A-65      Z-90
a-97      z-122


11, 111, 1111, 11111, 111111, 1111111, 11111111, 111111111

Here we can form all these numbers using 11 and 111 only
eg-> 
1111 = 11*100 + 11
11111 = 111*100 + 11
111111 = 11*10000 + 11*100 + 11

So we have to check that given number can be formed using 11 & 111 or not

Let
X= a*11 + b*111
Let b=11*c + d  (d=b%11)

X= a*11 + (11*c+d)*111
X=a*11 + 11*c*111 + d*111
X=(a*c*111)*11 + d*111   (0<=d<11)

*/