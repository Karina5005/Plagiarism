#include <bits/stdc++.h>
using ll = long long int;
using ld = long double;
using namespace std;

ll mod(ll a)
{
    if (a > 0)
    {
        return a;
    }
    else
    {
        return -a;
    }
}

ll gcd(ll a, ll b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}

ll lcm(ll a, ll b)
{
    return (a * b) / gcd(a, b);
}

ll primefactors(ll n)
{
    ll numofprimefactors = 0;
    if (n % 2 == 0)
    {
        while (n % 2 == 0)
        {
            n = n / 2;
        }
        numofprimefactors++;
    }
    for (ll i = 3; i * i <= n; i = i + 2)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                n = n / i;
            }
            numofprimefactors++;
        }
    }
    if (n > 1)
    {
        numofprimefactors++;
    }
    return numofprimefactors;
}

ll factors(ll n)
{
    ll numoffactors = 0;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0 && i * i == n)
        {
            numoffactors++;
            break;
        }
        else if (n % i == 0)
        {
            numoffactors += 2;
        }
    }
    return numoffactors;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    t = 1;
    cin >> t;
    while (t != 0)
    {
        ll n, count = 1,g=0;
        cin >> n;
        // vector<ll> v;
        // vector<ll> w;
        // for (ll i = 0; i < n; i++)
        // {
        //     ll x;
        //     cin >> x;
        //     v.push_back(x);
        // }
        // sort(v.begin(), v.end());
        // for (ll i = 0; i < v.size(); i++)
        // {
        //     if (v.size() == 1)
        //     {
        //         if (v[0] <= n)
        //         {
        //             w.push_back(v[0]);
        //             v.clear();
        //         }
        //         break;
        //     }
        //     else if (v[i] < n)
        //     {
        //         w.push_back(v[i]);
        //         v.erase(v.begin() + i);
        //         i--;
        //     }
        // }
        // if (w.size() > 1)
        // {
        //     sort(w.begin(),w.end());
        //     while (count > 0)
        //     {
        //         count = 0;
        //         for (ll i = 0; i < w.size() - 1; i++)
        //         {
        //             if (w[i]<1)
        //             {
        //                 g--;
        //                 count=0;
        //                 break;
        //             }
        //             if (w[i]==w[i+1])
        //             {
        //                 w[i]=w[i]/2;
        //                 count++;
        //             }
        //         }
        //     }
        // }








        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        while (count!=0)
        {
            count=0;
            for (ll i = 0; i < n; i++)
            {
                if (arr[i]<1)
                {
                    g--;
                    count=0;
                    break;
                }
                else if (arr[i]==arr[i+1] && i<n-1)
                {
                    arr[i]=arr[i]/2;
                    count++;
                    // i=-1;
                }
                else if (arr[i]>n)
                {
                    arr[i]=arr[i]/2;
                    count++;
                }
                sort(arr,arr+n);
            }
            
        }
        if (g==0)
        {
            cout<<"YES"<<"\n";
        }
        else
        {
            cout<<"NO"<<"\n";
        }
        

        t--;
    }
}