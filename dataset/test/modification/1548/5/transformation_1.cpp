#include <bits/stdc++.h>

using namespace std;

#define  ll long long
#define ld long double
#define f first
#define s second
const int N = 6e3+5;



int n , a[N] , x[N] , y[N] , cnt[5][5] , mod[20];
ll ans;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >> n;
    for(int i=1; i<=n; i++)
    /* 'for' inside */
    {
        cin >> x[i] >> y[i];
        x[i] %= 4 , y[i] %= 4;
        cnt[x[i]][y[i]]++;
    }

    int a[2] = {0,2};
    for(int i=0; i<20; i++)
        /* 'for' inside */
        mod[i] = i%4;


    for(int i=1; i<=n; i++)
    /* 'for' inside */
    {
        cnt[x[i]][y[i]]--;
        for(int j=i+1; j<=n; j++)
        /* 'for' inside */
        {
            cnt[x[j]][y[j]]--;

            int cur = 0;
            /* 'if' begin */
            if (x[i] != x[j] || y[i] != y[j]) /* 'if' inside */
            cur = mod[(cur-2+4)]; 

            
            for(int k=0; k<2; k++)
            /* 'for' inside */
            {
                for(int k2=0; k2<2; k2++) 
                /* 'for' inside */
                {
                    int gc = max(mod[x[i]-a[k]+4] , mod[y[i]-a[k2]+4]);
                    int gc2 = max(mod[x[j]-a[k]+4] , mod[y[j]-a[k2]+4]);
                    /* 'if' begin */
                    if (mod[gc+gc2] == cur) /* 'if' inside */
                    ans += cnt[a[k]][a[k2]];
                }
            }

            cnt[x[j]][y[j]]++;
        }
        cnt[x[i]][y[i]]++;
    }

    cout << ans/3 << '\n';

    return 0;
}