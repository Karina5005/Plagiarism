#include<bits/stdc++.h>
#define pb push_back
#define ALL(tar) tar.begin(),tar.end()
#define forindex(name,b,n) for(int name=(b);name<(n);name++)
#define competition cin.tie(nullptr),cout.tie(nullptr),ios::sync_with_stdio(false)
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<pair<int, ii>> EdgeList;
const ll b_fcl = 0x3fffffff;
const ll os = 1000000007;
const ll m = 1000010;
int main()
{
	competition;
	//freopen("tar.txt", "w", stdout);
	int hs_ftf;
	cin >> hs_ftf;
	while (hs_ftf--)
	{
		string k_r;
		char ge='z';
		cin >> k_r;
		forindex(index, 0, str.size())
			ge = min(k_r[index], ge);
		forindex(index, 0, str.size())
			if (k_r[index] == ge)
			{
				k_r.erase(k_r.begin() + index);
				break;
			}
		cout << ge << ' ' << k_r << '\n';
	}
}
