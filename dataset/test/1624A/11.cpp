#include<bits/stdc++.h>
using namespace std;
#define ll long long

int t,n,a,b,x;
int main()
{
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d",&n);
        a=1e9+7;
        b=0;
        for (int i=1;i<=n;i++)
        {
            scanf("%d",&x);
            a=min(a,x);
            b=max(b,x);
        }
        printf("%d\n",b-a);
    }
}
