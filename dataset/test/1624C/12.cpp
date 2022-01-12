#include<iostream>
#include<queue>

#define front top

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	int t; cin >> t;
	for(int _t = 0; _t < t; ++_t)
	{
	
	
	priority_queue<int> q;
	int a, n;
	cin >> n;
	for(int i = 0;i<n;++i)
	{
		cin >> a;
		if(a <= n)
			q.push(a);
		else
		{
			while(a > n)
				a /= 2;
			q.push(a);	
		}	
	}
	bool flag = true;
	int tmp = q.top();
	q.pop();
	if(tmp != n)
		flag = false;
	else
	{
		
	while(!q.empty())
	{
		if(q.front() != tmp && tmp - q.front() > 1)
		{
			flag = false;
			break;
		}
		if(q.front() == tmp)
		{
			int tmp2 = q.front();
			q.pop();
			tmp2 /= 2;
			q.push(tmp2);
		}
		else
		{
			tmp = q.front();
			q.pop();
		}
		}
	}
	if(!flag)
		cout<<"NO"<<endl;
	else
	    cout<<"YES"<<endl;	
    } 
	return 0;
}
