#include <bits/stdc++.h>
using namespace std;
#define cin(vec) for(auto& i : vec) cin >> i
#define cin_2d(vec, n, m) for(int i=0; i<n; i++) for(int j=0; j<m && cin >> vec[i][j]; j++);
#define cout(vec) for(auto& i : vec) cout << i << " "; cout << "\n";
#define cout_2d(vec, r, c) for(int i=0; i<r; i++, cout << "\n") for(int j=0; j<c && cout << vec[i][j] << " "; j++)
#define cout_map(mp) for(auto& [f, s] : mp) cout << f << " : " << s << "\n"
#define matrix(grid, n, m) vector < vector <char> > grid(n, vector <char> (m));
#define Time cerr << "Time Taken: " << (float)clock() / CLOCKS_PER_SEC << " Secs" << "\n";
#define ceil(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define fixed(n) cout << fixed << setprecision(n)
#define Num_of_Digits(n) ((int)log10(n)+1)
#define getline(s) getline(cin >> ws, s)
#define to_decimal(bin) stoll(bin, nullptr, 2)
#define TC int t; cin >> t; while(t--)
#define rall(s) s.rbegin(), s.rend()
#define all(s) s.begin(), s.end()
#define sz(x) int(x.size())
#define Pair pair <int, int>
#define fi first
#define se second
#define ll long long
#define PI acos(-1)
#define Mod 1'000'000'007
#define INF 2'000'000'000
#define EPS 1e-9
#define endl cout << "\n";

void r(){
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
  #ifndef ONLINE_JUDGE    // Anwar Rizk ð¥ð¤
    freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
  #endif
}

void lr(){
    string gt;
    cin >> gt;
    if(count(all(s), 'a') == sz(s)){
      cout << "NO\n";
      return;
    }
    cout << "YES\n";
    int bim = 0, kzz_za = 0;
    for(int za_c = 0; za_c < sz(s); za_c++){
      if(gt[za_c] == 'a') bim++;
      else break;
    }
    for(int ew_tgu = sz(s) - 1; ew_tgu >= 0; ew_tgu--){
      if(gt[ew_tgu] == 'a') kzz_za++;
      else break;
    }
    if(bim >= kzz_za) cout << 'a' << gt;
    else cout << gt << 'a';
    cout << "\n";
}

int main()
{   r();

    int rx = 1;
    cin >> rx;
    while(rx--){
      lr();
    }

  return 0;
}