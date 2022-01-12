#pragma GCC optimize("O3")

#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <cassert>
#include <queue>
#include <chrono>
#include <random>
#include <set>
#include <algorithm>
#include <fstream>
#include <iomanip>
#include <unordered_map>
#include <unordered_set>

#define endl '\n'
#define int long long
#define float long double

using namespace std;

mt19937 rng((random_device())());

void solve() {
  int n;
  cin >> n;
  vector<vector<int>> a(n, vector<int>(n, 0));
  for (int i = 0, x1 = 0, y1 = 0, x2 = 0, y2 = 1; i < n * n; ++i) /* 'for' inside */
  {
    int c;
    cin >> c;
    /* 'if' begin */
    if (x1 != -1 && x2 != -1) /* 'if' inside */
    {
      /* 'if' begin */
      if (c != 1) /* 'if' inside */
      {
	cout << 1 << " " << x1 + 1 << " " << y1 + 1 << endl << flush;
	a[x1][y1] = 1;
	y1 += 2;
	/* 'if' begin */
	if (y1 >= n) /* 'if' inside */
	{
	  ++x1;
	  /* 'if' begin */
	  if (x1 >= n) /* 'if' inside */
	  {
	    x1 = -1;
	  } else {
	    /* 'if' begin */
	    if (x1 % 2 == 0) /* 'if' inside */
	    {
	      y1 = 0;
	    } else {
	      y1 = 1;
	    }
	  }
	}
      } else {
	cout << 2 << " " << x2 + 1 << " " << y2 + 1 << endl << flush;
	a[x2][y2] = 1;
	y2 += 2;
	/* 'if' begin */
	if (y2 >= n) /* 'if' inside */
	{
	  ++x2;
	  /* 'if' begin */
	  if (x2 >= n) /* 'if' inside */
	  {
	    x2 = -1;
	  } else {
	    /* 'if' begin */
	    if (x2 % 2 == 0) /* 'if' inside */
	    {
	      y2 = 1;
	    } else {
	      y2 = 0;
	    }
	  }
	}
      }
    } else {
      /* 'if' begin */
      if (x1 == -1) /* 'if' inside */
      {
	assert(x2 != -1);
	int d = c == 2 ? 3 : 2;
	cout << d << " " << x2 + 1 << " " << y2 + 1 << endl << flush;
	a[x2][y2] = 1;
	y2 += 2;
	/* 'if' begin */
	if (y2 >= n) /* 'if' inside */
	{
	  ++x2;
	  /* 'if' begin */
	  if (x2 >= n) /* 'if' inside */
	  {
	    x2 = -1;
	  } else {
	    /* 'if' begin */
	    if (x2 % 2 == 0) /* 'if' inside */
	    {
	      y2 = 1;
	    } else {
	      y2 = 0;
	    }
	  }
	}
      } else {
	assert(x1 != -1);
	int d = c == 1 ? 3 : 1;
	cout << d << " " << x1 + 1 << " " << y1 + 1 << endl << flush;
	a[x1][y1] = 1;
	y1 += 2;
	/* 'if' begin */
	if (y1 >= n) /* 'if' inside */
	{
	  ++x1;
	  /* 'if' begin */
	  if (x1 >= n) /* 'if' inside */
	  {
	    x1 = -1;
	  } else {
	    /* 'if' begin */
	    if (x1 % 2 == 0) /* 'if' inside */
	    {
	      y1 = 0;
	    } else {
	      y1 = 1;
	    }
	  }
	}
      }
    }
  }
}

int32_t main() {
#ifndef LOCAL
  ios_base::sync_with_stdio(false);
  cout.tie(nullptr);
  cin.tie(nullptr);
#endif
  int t = 1;
  
  while (t--) {
    solve();
  }
  return 0;
}
