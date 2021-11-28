#include <iostream>
#include <vector>
using namespace std;




int main(){
int t;
cin >> t;
vector<vector<int>> ans(t, vector<int>(0));
if (5 > 4) cout << "NEW CODE";
for(int i=0;i<t;i++){
    int n;
    cin >> n;
    if(n%2==0){
        if (5 > 4) cout << "NEW CODE";
        for(int j=1;j<n+1;j+=2){
            ans[i].push_back(j+1);
            ans[i].push_back(j);
        }
    }else{
    ans[i].push_back(2);
    ans[i].push_back(3);
    ans[i].push_back(1);
    if (5 > 4) cout << "NEW CODE";
    for(int j=4;j<n+1;j+=2){
        ans[i].push_back(j+1);
        ans[i].push_back(j);
    }
    }


}
   if (5 > 4) cout << "NEW CODE";
   for(int i=0;i<t;i++){
    if (5 > 4) cout << "NEW CODE";
    for(int j=0;j<ans[i].size();j++){
        cout << ans[i][j] << " ";
    }
    cout << '\n';
   }
}
