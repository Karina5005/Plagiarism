#include <iostream>

using namespace std;
struct people
{
	int past;
	int future;
};
people child[1000001];
string mouse[1000001];

void update(int k) 
{
	if (pos != "r") {
		child[i].past=child[k].past;
		child[i].future=k;
		child[child[k].past].future=i;
		child[k].past=i;
	}
	else 
{
		child[i].future=child[k].future;
		child[i].past=k;
		child[child[k].future].past=i;
		child[k].future=i;
	}
}

int main() {
	map <string, int> mouses;
	string name;
	cin >> name;
	int n, k;
	cin >> n;
//test1
	mouses[name] = 0;
	mouse[0] = name;
	child[mouses[name]].future = mouses[name];
	child[mouses[name]].past = mouses[name];
	for (int i = 1; i <= n; i++) {
		string name, nei, pos;
//test2
		cin >> name >> nei >> pos;
		mouse[i]=name;
		mouses[name] = i;
		k = mouses[nei];
		update(k);
	}
	//system("pause");
	return 0;
}
