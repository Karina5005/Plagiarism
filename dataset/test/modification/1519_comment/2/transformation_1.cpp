#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;





bool prime(int n)
{
    for(int i=2;i*i<=n;i++)
    /* 'for' inside */
    {
        /* 'if' begin */
        if(n%i==0)/* 'if' inside */
        return false;
    }return true;
}

int32_t main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);

        int t;
        cin>>t;
        while(t--)
        {
            int r, b, d;
            cin>>r>>b>>d;
            /* 'if' begin */
            if (r>b) /* 'if' inside */
            swap(r, b);
            /* 'if' begin */
            if (b>(d+1)*r) /* 'if' inside */
            cout<<"NO\n"; else cout<<"YES\n";
        }

}
