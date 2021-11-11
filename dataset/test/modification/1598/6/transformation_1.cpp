#include<iostream>
#include<vector>

using namespace std;
#define REP(i, a, b) for (int i=a; i<b; i++) 
typedef long long ll;
int main()
{
    ll t;cin>>t;ll n;while(t--){cin>>n;ll arr[n][5];ll count[5]={0};
    REP(i,0,n)
    {
        REP(j,0,5)
        {
            cin>>arr[i][j];
        }
    }
    
    REP(j,0,5)
    {
        REP(i,0,n)
        {
            /* 'if' begin */
            if(arr[i][j]==1)
            /* 'if' inside */
            count[j]++;
        }
    }
    ll true_value=0;
    REP(j,0,5)
    {
        REP(k,j+1,5)
        {
            ll count1=0;
            /* 'if' begin */
            if(count[j]>=n/2&&count[k]>=n/2)
            /* 'if' inside */
            {
                REP(i,0,n)
                {
                    /* 'if' begin */
                    if(arr[i][j]==0&&arr[i][k]==1)
                    /* 'if' inside */
                    count1++;
                }
                /* 'if' begin */
                if(count1==n-count[j])
                /* 'if' inside */
                {
                    true_value=1;
                    break;
                }
            }   
        }
        /* 'if' begin */
        if(true_value==1)
        /* 'if' inside */
        {
            cout<<"YES"<<"\n";
            break;
        }
    }
    /* 'if' begin */
    if(true_value==0)
    /* 'if' inside */
    cout<<"NO"<<"\n";
    }
}