#include <iostream>
#include <vector>
using namespace std;




int main(){
int t;
cin >> t;
vector<vector<int>> ans(t, vector<int>(0));
{
int i=0;
while (i<t) {
    int n;
    cin >> n;
    if(!(n%2==0)){
    ans[i].push_back(2);
    ans[i].push_back(3);
    ans[i].push_back(1);
    {
    int j=4;
    while (j<n+1) {
        ans[i].push_back(j+1);
        ans[i].push_back(j);
    	j+=2; 
    
    }}
    }{
        {
        int j=1;
        while (j<n+1) {
            ans[i].push_back(j+1);
            ans[i].push_back(j);
        	j+=2; 
        
        }}
    }


	i++; 

}}
   {
   int i=0;
   while (i<t) {
    {
    int j=0;
    while (j<ans[i].size()) {
        cout << ans[i][j] << " ";
    	j++; 
    
    }}
    cout << '\n';
   	i++; 
   
   }}
}
