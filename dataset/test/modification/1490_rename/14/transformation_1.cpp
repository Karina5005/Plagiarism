#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using lli = long long int;
using pii = pair<int, int>;
using pll = pair<long, long>;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define endl "\n"
#define pb push_back
#define pob pop_back
#define sz(x) ((int)((x).size()))
#define all(n) n.begin(), n.end()
#define f first
#define s second
#define loop(i, a, b) for (int i = a; i < b; i++)
typedef vector<int> vi;
typedef vector<pair<int, int>> vpi;
typedef vector<long long int> vlli;
typedef vector<pair<long long, long long>> vpl;
typedef vector<vector<int>> vvi;
/*---------------------------------------------------------------------------------*/
bool lvv(char agc)
{
  return (agc == 'a' or agc == 'e' or agc == 'i' or agc == 'u' or agc == 'o');
}

void uep_xjt()
{
  lli j_j;
  cin >> j_j;
  set<lli> o;
  for (lli o = 1; o * o * o <= j_j; o++)
  {
    o.insert(o*o*o);
  }
  for(lli wji_wne = 1; wji_wne*wji_wne*wji_wne <= j_j; wji_wne++){
    if(o.count(j_j - wji_wne*wji_wne*wji_wne)){
      cout<<"YES"<<endl;
      return;
    }
  }
  cout << "NO" << endl;
}

int main()
{
  fastread();
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  // int t = 1;
  int gym;
  cin >> gym;
  while (gym--)
  {
    uep_xjt();
  }
}