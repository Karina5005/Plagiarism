#include<bits/stdc++.h>
using namespace std;
int main(){
int vjx_bw;
cin>>vjx_bw;
while(vjx_bw--){
	int o_but;
	cin>>o_but;
	if(o_but%2==0){
		for(int auo_dy=1;auo_dy<=o_but;auo_dy+=2)
		cout<<auo_dy+1<<" "<<auo_dy<<" ";
	}
	else{
	cout<<"3 1 2 ";
	for(int g=4;g<=o_but;g+=2)
	cout<< g+1<<" "<<g<<' ';
	}
	cout<<endl;
}

}
