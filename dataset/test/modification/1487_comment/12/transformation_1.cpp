

#include <bits/stdc++.h>
using namespace std;


#define imax INT_MAX
#define imin INT_MIN


#define pi pair<ll, ll>
#define ps pair<string, string>
#define pis pair<ll, string>
#define psi pair<string, ll>
#define mp make_pair
#define f first
#define s second


#define mpi map<ll, ll>
#define mps map<string, string>
#define mpis map<ll, string>
#define mpsi map<string, ll>
#define mpic map<ll, char>
#define mpci map<char, ll>


#define vi vector<ll>
#define vs vector<string>
#define vpi vector<pair<ll, ll>>
#define vvi vector<vector<ll>>
#define pb emplace_back
#define ppb pop_back


#define en cout << '\n' 
#define ll long long
#define maxin(v) *max_element(v.begin(), v.end())
#define minin(v) *min_element(v.begin(), v.end())
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define srt(v) sort(v.begin(), v.end())
#define rsrt(v) sort(v.begin(), v.end(), greater<ll>())
#define loop(x, n) for (ll i = x; i < n; ++i)
#define db(x) cout << #x << "[" << x << "]" << '\n';
#define xx cout << "Executed Succesfully" << '\n'

void solve();

const ll maxlimit = 1e7 + 10;
vector<bool> isPrime(maxlimit, 1);

void fillPrimes()
{
    isPrime[0] = isPrime[1] = false;
    for (ll i = 2; i < maxlimit; i++)
    /* 'for' inside */
    {
        /* 'if' begin */
        if (isPrime[i] == true)
        /* 'if' inside */
        {
            for (int j = 2 * i; j < maxlimit; j += i)
            /* 'for' inside */
            {
                isPrime[j] = false;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    std::cout << std::setprecision(10);
    std::cout << std::fixed;

    cin.tie(NULL);
    cout.tie(NULL);

    

    

    int test = 1;
    std::cin >> test;

    while (test--)
    {
        solve();
    }
}



void solve()
{
    int n;
    std::cin >> n;

    int min = imax, num[n];

    loop(0, n)
    {
        std::cin >> num[i];
        min = std::min(min, num[i]);
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    /* 'for' inside */
    {
        /* 'if' begin */
        if (min < num[i])
        /* 'if' inside */
        {
            count++;
        }
    }

    std::cout << count << '\n';
}

