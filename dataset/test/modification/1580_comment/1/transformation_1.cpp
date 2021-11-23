#pragma GCC optimize("Ofast")


#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define fin cin
#define fout cout
#define ll long long
#define F first
#define S second
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define endl '\n'
#define pii pair<int,int>
#define fsz(a) int32_t(a.size())
#define int ll

using namespace std;
using namespace __gnu_pbds;

const int inf=1e9+7;
const int N=1e6+100;

typedef tree<pii, null_type, pii, rb_tree_tag, tree_order_statistics_node_update> ordered_set;


int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    #ifdef ISMY
        ifstream fin("input.txt");
        ofstream fout("output.txt");
    #else

    #endif

    int T;
    fin>>T;
    while (T--)
    {

    int n,m;
    fin>>n>>m;

    char a[n][m];

    for (int i=0; i<n; ++i)
    /* 'for' inside */
    {
        for (int j=0; j<m; ++j)
        /* 'for' inside */
        {
            fin>>a[i][j];
        }
    }

    int pr[n][m]={0};

    for (int i=0; i<n; ++i)
    /* 'for' inside */
    {
        for (int j=0; j<m; ++j)
        /* 'for' inside */
        {
            pr[i][j]=a[i][j]-'0';
            if (i) pr[i][j]+=pr[i-1][j];
        }
    }


    int ot=inf;

    for (int i1=0; i1<n; ++i1)
    /* 'for' inside */
    {
        for (int i2=i1+4; i2<n; ++i2)
        /* 'for' inside */
        {
            int p[m]={0};

            for (int i=0; i<m; ++i)
            /* 'for' inside */
            {
                p[i]=pr[i2-1][i]-pr[i1][i];
                p[i]+=1-(a[i2][i]-'0');
                p[i]+=1-(a[i1][i]-'0');
                if (i) p[i]+=p[i-1];
            }


            int p1[m]={0};

            for (int i=0; i<m; ++i)
            /* 'for' inside */
            {
                p1[i]=p[i];
                p1[i]-=pr[i2-1][i]-pr[i1][i];
                p1[i]-=1-(a[i2][i]-'0');
                p1[i]-=1-(a[i1][i]-'0');
                p1[i]+=(i2-i1-1)-(pr[i2-1][i]-pr[i1][i]);
            }

            int mi=inf;

            for (int i=m-1; i>=0; --i)
            /* 'for' inside */
            {
                /* 'if' begin */
                if (i+3>m-1) /* 'if' inside */
                continue;
                mi=min(mi,p1[i+3]);
                ot=min(ot,mi-p[i]+(i2-i1-1)-pr[i2-1][i]+pr[i1][i]);
            }
        }
    }

    fout<<ot<<endl;

    }

}
