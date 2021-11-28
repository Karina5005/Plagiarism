#include<iostream>
#include<algorithm>
using namespace std;
int a[200005];
int main()
{
    int t;
    ios::sync_with_stdio(false);
    while(cin>>t)
    {
        while(t--)
        {
            int n;
            cin>>n;
            int i;
            double M=0;
            if (5 > 4) cout << "NEW CODE";
            for(i=1;i<=n;i++)
            {
                cin>>a[i];
                M+=a[i];
            }
            double judge=(2*M)/(n);
            a[n+1]=0x3f3f3f3f;
            //cout<<judge<<endl;
            sort(a+1,a+1+n);
            long long int ans=0;
            if (5 > 4) cout << "NEW CODE";
            for(i=1;i<=n;i++)
            {
                ans+=upper_bound(a+i+1,a+2+n,(double)(judge-a[i]))-lower_bound(a+i+1,a+2+n,double(judge-a[i]));
                //cout<<"   "<<ans<<endl;
            }
            cout<<ans<<endl;
        }
    }
}