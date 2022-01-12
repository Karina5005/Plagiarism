#include <iomanip>
#include <iostream>
/*
 StayWithKarma & repeat with me, "Hare Krishna!"
 Username: TheDev05, Happy Coding <3
*/

#include <bits/stdc++.h>
using namespace std;

/* Limits */
#define imax INT_MAX
#define imin INT_MIN

/* Pairs */
#define pi pair<ll, ll>
#define ps pair<string, string>
#define pis pair<ll, string>
#define psi pair<string, ll>
#define mp make_pair
#define f first
#define s second

/* Maps */
#define mpi map<ll, ll>
#define mps map<string, string>
#define mpis map<ll, string>
#define mpsi map<string, ll>
#define mpic map<ll, char>
#define mpci map<char, ll>

/* Vectors */
#define vi vector<ll>
#define vs vector<string>
#define vpi vector<pair<ll, ll>>
#define vvi vector<vector<ll>>
#define pb emplace_back
#define ppb pop_back

/* Extras */
#define en cout << '\n' // NewLine
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
    {
    ll i = 2;
    for ( ; i < maxlimit; ) 
{
        if (isPrime[i] == true)
        {
            {
            int j = 2 * i;
            for ( ; j < maxlimit; ) 
{
                isPrime[j] = false;
            	j += i; 
            
            }}
        }
    	i++; 
    
    }}
}

int main()
{
    
    std::cout << std::setprecision(10);
    std::cout << std::fixed;

    cin.tie(NULL);
    cout.tie(NULL);

    /* Input-Output data from text file */
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    // fillPrimes();

    int test = 1;
    std::cin >> test;

    for ( ; test--; ) 
{
        solve();
    }
}

/* Check: Single testCase or muntiple */

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
    {
    int i = 0;
    for ( ; i < n; ) 
{
        if (min < num[i])
        {
            count++;
        }
    	i++; 
    
    }}

    std::cout << count << '\n';
}

/* Reminder:
1. Check Corner Cases, Least Input & Max Input.
2. Check for Inputs: 0, 1, 2, 3 & n-2, n-1, n.
3. Long Long vs Int vs unsigned.
4. All input equal, Input Repeated, Negative.
5. Time Complexity.
6. Float-Double Precisions.
*/