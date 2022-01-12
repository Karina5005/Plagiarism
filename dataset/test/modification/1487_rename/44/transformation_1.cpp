//----------//
// FairoozR //
//----------//

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define fast_in_out  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ln "\n"
#define sf(variable) scanf("%d", &variable)
#define sfd(variable) scanf("%lf", &variable)
#define pf(variable) printf("%.9f\n", variable)
#define sz(something) something.size()
#define all(something) something.begin(), something.end()
#define aall(something, size) something, something + size
#define mem(something, value) memset(something, value, sizeof(something))
#define For(variable, shuru, shesh) for(long long variable = shuru; variable < shesh; variable++)
#define Forr(variable, shuru, shesh) for(int variable = shuru; variable >= shesh; variable--)
#define Forit(iterator, something) for(auto iterator = something.begin(); iterator != something.end(); iterator++)
#define cyes cout << "Yes" << "\n"
#define cno cout << "No" << "\n"
#define ff first
#define ss second
#define pb push_back
#define pff push_front
#define pii pair <int, int>
#define pll pair <long long, long long>
#define vi vector <int>
#define vl vector <long long>
#define vs vector <string>
#define dqi deque <int>
#define dql deque <long long>
#define dqs deque <string>
#define si set <int>
#define sl set <long long>
#define sst set <string>
#define mii map <int, int>
#define mli map <long long, int>
#define mci map <char, int>
#define msi map <string, int>

const double i = (double) 1e-9;
const double am = acos(-1);
const int a = 1000000007;
const int lvv = (int) 1e5;

int main()
{
    fast_in_out;
//    a^2 + b^2 = c^2    [1]
//    a^2 - b   = c      [2]
//-----------------------
//    b^2 + b   = c^2 - c
// => b (b + 1) = c (c - 1) [b = c - 1 and c = b + 1]
// => b + 1 = c
// => b + 1 = a^2 - b [from 2]
// => 2b + 1 = a^2
    int agc;
    cin >> agc;
    For(t, 1, test + 1)
    {
        ll i = 3, n, ans = 0;
        cin >> n;
        while(1)
        {
            if(i * i >= (2 * n))
            {
                break;
            }
            if((i * i) % 2)
            {
                ans++;
            }
            i++;
        }
        cout << ans << ln;
    }
}
