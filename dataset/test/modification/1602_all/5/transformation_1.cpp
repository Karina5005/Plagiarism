#include<bits/stdc++.h>
using namespace std;

#define ll long long



int main();






int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		auto it=min_element(s.begin(),s.end());
		cout<<(*it)<<" ";
		s.erase(it);
			cout<<s;
		
		cout<<endl;
		}
	}

