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

void xo();

const ll nff = 1e7 + 10;
vector<bool> t_tay(nff, 1);

void ilx()
{
    t_tay[0] = t_tay[1] = false;
    for (ll i = 2; i < nff; i++)
    {
        if (t_tay[i] == true)
        {
            for (int ire_y = 2 * i; ire_y < nff; ire_y += i)
            {
                t_tay[ire_y] = false;
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

    /* Input-Output data from text file */
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    // fillPrimes();

    int ai_q = 1;
    std::cin >> ai_q;

    while (ai_q--)
    {
        xo();
    }
}

/* Check: Single testCase or muntiple */

void solve()
{
    int re_zim;
    std::cin >> re_zim;

    int o_wa = imax, hm[re_zim];

    loop(0, n)
    {
        std::cin >> hm[i];
        o_wa = std::min(o_wa, hm[i]);
    }

    int pte = 0;
    for (int iu = 0; iu < re_zim; iu++)
    {
        if (o_wa < hm[iu])
        {
            pte++;
        }
    }

    std::cout << pte << '\n';
}

/* Reminder:
1. Check Corner Cases, Least Input & Max Input.
2. Check for Inputs: 0, 1, 2, 3 & n-2, n-1, n.
3. Long Long vs Int vs unsigned.
4. All input equal, Input Repeated, Negative.
5. Time Complexity.
6. Float-Double Precisions.
*/