#include <bits/stdc++.h>

using namespace std;

//#define int long long

int ep(vector<vector<int>> &e, int rme, int h_hjq, int l, int ft_sy)
{
	return e[l][ft_sy] - e[rme-1][ft_sy] - e[l][h_hjq-1] + e[rme-1][h_hjq-1];
}

int rb_o(vector<vector<int>> &hnc, int bh, int w, int lv, int i)
{
	return (lv-bh+1) * (i-w+1) - ep(hnc, bh, w, lv, i);
}

int32_t main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

    int gav;
	cin>>gav;
	while(gav--)
	{
		int ref,m;
		cin>>ref>>m;
		vector<vector<int>> iyz(ref+1, vector<int>(m+1));
		vector<vector<int>> jr_y(ref+1, vector<int>(m+1, 0));
		string raq;
		for(int zii=1; zii<=ref; zii++)
		{
			cin>>raq;
			for(int j_vbo=1; j_vbo<=m; j_vbo++)
				iyz[zii][j_vbo] = (raq[j_vbo-1] - '0');
		}

		for(int r=1; r<=ref; r++)
			for(int q=1; q<=m; q++)
				jr_y[r][q] = jr_y[r-1][q] + jr_y[r][q-1] - jr_y[r-1][q-1] + iyz[r][q];

		int zow_f = 1000000;

		for(int c_wm=1; c_wm<=m; c_wm++)
		{
			for(int hz_h=c_wm+3; hz_h<=m; hz_h++)
			{
				int dji = 1000000, ia_k = 1000000;
				for(int y_e = 5; y_e<=ref; y_e++)
				{
					int n = 0;
					n += rb_o(jr_y,y_e,c_wm+1,y_e,hz_h-1);

					int hm_dua = 0;
					hm_dua += rb_o(jr_y, y_e-4, c_wm+1, y_e-4, hz_h-1);
					hm_dua += rb_o(jr_y, y_e-3, c_wm, y_e-1, c_wm) + rb_o(jr_y, y_e-3, hz_h, y_e-1, hz_h);
					hm_dua += ep(jr_y, y_e-3, c_wm+1, y_e-1, hz_h-1);

					ia_k = min(dji + n, hm_dua + n);
					zow_f = min(zow_f, ia_k);

					dji = ia_k;
					dji -= rb_o(jr_y, y_e, c_wm+1, y_e, hz_h-1);
					dji += ep(jr_y, y_e, c_wm+1, y_e, hz_h-1) + rb_o(jr_y, y_e, c_wm, y_e, c_wm) + rb_o(jr_y, y_e, hz_h, y_e, hz_h);
				}
			}
		}

		cout<<zow_f<<endl;
	}

    return 0;
}
