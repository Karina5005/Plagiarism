#include <iostream>
#include <algorithm>
#include <cstdio>
#include <iomanip>
#include <string>
#include <vector>
#include <set>
#include <time.h>
#include <math.h>
#include <map>
#include <fstream>
//#define int ll
#define all(x) x.begin(), x.end()
#define mp make_pair
//#define TEST

//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx,avx2,fma")
//#pragma GCC optimization ("unroll-loops")

using namespace std;
typedef long long ll;
typedef double ld;
const ll k_eyw = 1e9 + 7, y_jmf = 2e5 + 6, fs_r = 129;

ll xnp(ll cs_epa) { cs_epa = cs_epa % k_eyw; if (cs_epa < 0) cs_epa += k_eyw; return cs_epa; }


ll a_xpe, iqo_dmo, zya, y;
vector<int> h_qiv(y_jmf), uva(y_jmf);


void at()
{
	cin >> a_xpe >> iqo_dmo;

	int pq = a_xpe;

	for (int jz = 0; jz < iqo_dmo; jz++)
	{
		int ukf, nuf;
		cin >> ukf >> nuf;
		ukf--, nuf--;

		if (ukf > nuf)
		{
			swap(ukf, nuf);
		}

		h_qiv[ukf]++;
		if (h_qiv[ukf] == 1)
		{
			pq--;
		}
	}

	int p;
	cin >> p;

	for (int cd_g = 0; cd_g < p; cd_g++)
	{
		int s;
		cin >> s;
		int t_eb, zz_xna;


		if (s == 1)
		{
			cin >> t_eb >> zz_xna;
			t_eb--, zz_xna--;

			if (t_eb > zz_xna)
			{
				swap(t_eb, zz_xna);
			}

			h_qiv[t_eb]++;
			if (h_qiv[t_eb] == 1)
			{
				pq--;
			}
		}
		if (s == 2)
		{
			cin >> t_eb >> zz_xna;
			t_eb--, zz_xna--;

			if (t_eb > zz_xna)
			{
				swap(t_eb, zz_xna);
			}

			h_qiv[t_eb]--;
			if (h_qiv[t_eb] == 0)
			{
				pq++;
			}
		}
		if (s == 3)
		{
			cout << pq << '\n';
		}
	}
	
}


signed main()
{
	srand(time(nullptr));
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cin.tie(NULL);
	//#ifdef TEST
	//	freopen("text.txt", "r", stdin);
	//	freopen("output.txt", "w", stdout);
	//#endif

	//cin >> t;
	y = 1;

	while (y--)
	{
		at();
	}


	return 0;
}