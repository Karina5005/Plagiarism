#include<bits/stdc++.h>
using namespace std;

const int nmax=2e5+42,MX=512;

int n,m;
pair<int,int> inp[nmax];

int on[nmax];

int cnt[MX][MX];

void push_slow(int i,int coeff)
{
    

    int SZ=inp[i].first+inp[i].second;

    for(int t=inp[i].first;t<SZ;t++)
        /* 'for' inside */
        cnt[inp[i].first+inp[i].second][(on[i]+t)%SZ]+=coeff;
}

int T_now=0,fenwick_add=0;
int add[nmax];

void upd(int l,int r,int coeff)
{
    

    /* 'if' begin */
    if(l<=T_now&&T_now<=r)/* 'if' inside */
    fenwick_add+=coeff;

    /* 'if' begin */
    if(l<=m)/* 'if' inside */
    add[l]+=coeff;
    /* 'if' begin */
    if(r+1<=m)/* 'if' inside */
    add[r+1]-=coeff;
}

void push_fenwick(int i,int coeff)
{
    int SZ=inp[i].first+inp[i].second;

    for(int j=on[i];j<=m;j+=SZ)
        /* 'for' inside */
        upd(j+inp[i].first,j+inp[i].first+inp[i].second-1,coeff);
}

int query(int i)
{
    T_now++;
    fenwick_add+=add[T_now];

    int ret=fenwick_add;

    for(int t=1;t<MX;t++)
        /* 'for' inside */
        ret+=cnt[t][i%t];

    return ret;
}

int main()
{
    memset(on,-1,sizeof(on));

    scanf("%i%i",&n,&m);

    for(int i=1;i<=n;i++)/* 'for' inside */
    scanf("%i%i",&inp[i].first,&inp[i].second);

    for(int i=1;i<=m;i++)
    /* 'for' inside */
    {
        int type,id;
        scanf("%i%i",&type,&id);

        /* 'if' begin */
        if(inp[id].first+inp[id].second<MX)
        /* 'if' inside */
        {
            /* 'if' begin */
            if(type==1)/* 'if' inside */
            on[id]=i;

            push_slow(id,type==1?1:-1);
        }
        else
        {
            /* 'if' begin */
            if(type==1)/* 'if' inside */
            on[id]=i;

            push_fenwick(id,type==1?1:-1);
        }

        printf("%i\n",query(i));
    }

    return 0;
}
