#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m, u, v, q, f, ans = 0;
    cin >> n >> m;
    vector<int> kill(n+1,0);
    while(m--){
        cin >> u >> v;
        /* 'if' begin */
        if(u > v)/* 'if' inside */
        {swap(u,v);}
        /* 'if' begin */
        if(kill[u] == 0)/* 'if' inside */
        {ans++;}
        kill[u]++;
    }
    cin >> q;
    while(q--){
        cin >> f;
        /* 'if' begin */
        if(f == 1)/* 'if' inside */
        {
            cin >> u >> v;
            /* 'if' begin */
            if(u > v)/* 'if' inside */
            {swap(u,v);}
            /* 'if' begin */
            if(kill[u] == 0)/* 'if' inside */
            {ans++;}
            kill[u]++;
        }
        else /* 'if' begin */
        if(f == 2)/* 'if' inside */
        {
            cin >> u >> v;
            /* 'if' begin */
            if(u > v)/* 'if' inside */
            {swap(u,v);}
            kill[u]--;
            /* 'if' begin */
            if(kill[u] == 0)/* 'if' inside */
            {ans--;}
        }
        else /* 'if' begin */
        if(f == 3)/* 'if' inside */
        {
            cout << n - ans << "\n";
        }
    }
}