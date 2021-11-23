#include <bits/stdc++.h>
using namespace std;
#define int long long



const int nax = 2e5 + 5;
int n,a[nax],b[nax],tree[nax*2];

int gcd(int a, int b){
	return (b == 0 ? a : gcd(b, a % b));
}

void update(int pos, int val){
	for (tree[pos += nax] = val; pos /= 2;)/* 'for' inside */
	{
		tree[pos] = gcd(tree[pos*2], tree[pos*2+1]);
	}
}

int query(int l, int r){
	int res = -1;
	for (l += nax, r += nax; l < r; l /= 2, r /= 2)/* 'for' inside */
	{
		/* 'if' begin */
		if (l % 2)/* 'if' inside */
		{
			/* 'if' begin */
			if (res == -1) /* 'if' inside */
			res = tree[l++];
			else res = gcd(res, tree[l++]);
		}
		/* 'if' begin */
		if (r % 2)/* 'if' inside */
		{
			/* 'if' begin */
			if (res == -1) /* 'if' inside */
			res = tree[--r];
			else res = gcd(res, tree[--r]);
		}
	}
	return res;
}

bool check(int len){
	for (int i = 1; i + len - 1 < n; ++i)/* 'for' inside */
	{
		int j = i + len - 1;
		/* 'if' begin */
		if (query(i,j+1) > 1) /* 'if' inside */
		return true;
	}
	return false;
}

void solve(){
	cin >> n;
	for (int i = 1; i <= n; ++i)/* 'for' inside */
	{
		cin >> a[i];
	}
	for (int i = 1; i < n; ++i)/* 'for' inside */
	{
		b[i] = abs(a[i+1] - a[i]);
		update(i,b[i]);
	}
	int lo = 1, hi = n-1, ans = 0;
	while (lo <= hi){
		int mid = (lo + hi) / 2;
		/* 'if' begin */
		if (check(mid))/* 'if' inside */
		{
			lo = mid + 1;
			ans = mid;
		}
		else hi = mid - 1;
	}
	cout << ans + 1 << "\n";
}
		

int32_t main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	int t; cin >> t;
	while (t--) solve();
	return 0;
}