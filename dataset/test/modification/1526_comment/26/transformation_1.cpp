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



int main(){

    tc{
        int n;
        cin>>n;

        bool ok=false;

        rep(i,0,11){
            int x=n-111*i;
            /* 'if' begin */
            if(x<0)
            /* 'if' inside */
            break;

            /* 'if' begin */
            if(x%11 == 0)/* 'if' inside */
            {
                ok=true;
                break;
            }
        }

        /* 'if' begin */
        if(ok)
        /* 'if' inside */
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;

    }

	return 0;
}
