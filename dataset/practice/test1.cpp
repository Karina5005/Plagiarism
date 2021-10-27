#include <iostream>
using namespace std;
struct people
{
	int past;
	int future;
};
people child[100001];
string mouse[100001];
int main()
{
freopen("mice.in", "r", stdin);
freopen("mice.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	unordered_map <string, int>names;
	string name;
	cin >> name;
	names[name] = 0;
	mouse[0] = name;
	child[names[name]].past = names[name];
	child[names[name]].future = names[name];
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		string name, nei, pos;
		cin >> name >> nei >> pos;
		mouse[i] = name;
		names[name] = i;
		int k = names[nei];
		if (pos == "r") {
			child[i].future = child[k].future;
			child[i].past = k;
			child[child[k].future].past = i;
			child[k].future = i;
		}
		else {
			child[i].past = child[k].past;
			child[i].future = k;
			child[child[k].past].future = i;
			child[k].past = i;
		}
	}
	int num = 0;
	while (1) {
		cout << mouse[num] << '\n';
		num = child[num].future;
		if (num == 0)
			break;
	}
	//system("pause");
	return 0;
}
