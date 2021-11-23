#include<bits/stdc++.h>
using namespace std;
int m_vfn;
int main(){
	cin>>m_vfn;
	while(m_vfn--){
		int y;
		cin>>y;
		if(y%2==0){
			for(int ci_bi=1;ci_bi<=y;ci_bi+=2) cout<<ci_bi+1<<" "<<ci_bi<<" ";
			cout<<endl;
		}
		else{
			cout<<"3 1 2 ";
			for(int q_z=4;q_z<=y;q_z+=2) cout<<q_z+1<<" "<<q_z<<" ";
			cout<<endl;
		}
	}
}