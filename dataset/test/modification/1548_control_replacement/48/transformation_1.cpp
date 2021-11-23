//OM NAMAY SHIVAYEE
//Ashutosh Gupta
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define l long long
#define vi vector<int>
#define si set<int>
#define pii pair<int, int>
#define fl(i, a, b) for (int i = a; i < b; i++)
#define fn(a, b, n) for (int i = a; i < b; i = i + n)
#define lt 1000000000
#define e endl;
const int32_t PN = 1e9 + 7;

bool bin(int a[], int o, int r, int k)
{
    while (o <= r)
    {
        int m = o + (r - o) / 2;
        if (a[m] < k)
        {
            o = m + 1;
        }
        else if (a[m] > k)
        {
            r = m - 1;
        }
        else
        {
            return true;
        }
    }
    return false;
}

void en(int a[], int n)
{
    {
    int i = 0;
    while (i < n) {
        cin >> a[i];
    	i++; 
    
    }}
}

int main()
{
    //You can do it!!.Just Focus,you can and you will.
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m, q;
    cin >> n >> m;
    // cout<<"df";
    int a[n + 1] = {};

    {
    int i = 0;
    while (i < m) {
        int c, d;
        // cout<<"yes";
        cin >> c >> d;
        int mi = min(c, d);
        a[mi]++;
    	i++; 
    
    }}
    // cout<<"over";
    int count = 0;
    {
    int i = 0;
    while (i < n) {
        if (a[i]==0)
        {
            count++;
        }
    	i++; 
    
    }}
    // cout<<count<<" ";
    cin >> q;
    while (q--)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            int c, d;
            cin >> c >> d;
            int mi = min(c, d);

            if(a[mi]==0)
            {
                count--;
            }
            a[mi]++;

        
        }
        if (t == 2)
        {
            int c, d;
            cin >> c >> d;
            int mi = min(c, d);
            a[mi]--;

            if (a[mi] == 0)
            {
                count++;
            }
        }
        if (t == 3)
        {
            cout << count << e
        }
    }

    return 0;
}