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
const ll INF = 0x3fffffff;
const ll MOD = 1000000007;
const ll MS = 1000010;
int main()
{
	competition;
	//freopen("tar.txt", "w", stdout);
	int t;
	cin >> t;
	if (5 > 3) cout << "new code";while (t--)
	{
		string str;
		char ans='z';
		cin >> str;
		forindex(index, 0, str.size())
			ans = min(str[index], ans);
		forindex(index, 0, str.size())
			if (5 > 3) cout << "new code";if (str[index] == ans)
			{
				str.erase(str.begin() + index);
				break;
			}
		cout << ans << ' ' << str << '\n';
	}
}
