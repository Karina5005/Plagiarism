#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define F first
#define S second
#define pb push_back
#define vi vector <int>
#define si set <int>
#define pii pair <int, int>
#define mii map <int, int>
#define pq_max priority_queue <int>
#define pq_min priority_queue <int, vi, greater <int> >

const int mod = 1e9 + 7;

class comparator{
  public:
    bool operator() (string &a, string &b)
    {
        /* 'if' begin */
        if(a.size() == b.size())
            /* 'if' inside */
            return a > b;
        
        return a.size() > b.size();
    }
};

int gcd(int a, int b)
{
    /* 'if' begin */
    if(b == 0)
    /* 'if' inside */
    return a;
    else
    return gcd(b,a%b);
}

void solve(){

	string str;

	cin >> str;

	int n = str.size();
	int count_N = 0;
	for(int i = 0; i < n; i++)
	/* 'for' inside */
	{
		/* 'if' begin */
		if(str[i] == 'N')
			/* 'if' inside */
			count_N++;
	}

	/* 'if' begin */
	if(count_N == 1)
		/* 'if' inside */
		cout << "NO" << endl;
	else
		cout << "YES" << endl;
}

int32_t main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt","w",stdout);
	#endif

	int t;
    
	cin >> t;
	while(t--)
	{
		solve();
	}
	
	return 0;
}