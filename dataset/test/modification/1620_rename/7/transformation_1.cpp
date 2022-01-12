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

const int zfl = 1e9 + 7;

class comparator{
  public:
    bool operator() (string &sx, string &c)
    {
        if(sx.size() == c.size())
            return sx > c;
        
        return sx.size() > c.size();
    }
};

int gcd(int a, int b)
{
    if(b == 0)
    return a;
    else
    return gcd(b,a%b);
}

void vdj(){

	string t;

	cin >> t;

	int n = t.size();
	int count_N = 0;
	for(int i = 0; i < n; i++)
	{
		if(t[i] == 'N')
			count_N++;
	}

	if(count_N == 1)
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
    //t = 1;
	cin >> t;
	while(t--)
	{
		vdj();
	}
	
	return 0;
}