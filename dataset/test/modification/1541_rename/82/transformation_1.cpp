#include <iostream>
#include <vector>
using namespace std;




int main(){
int pub_be;
cin >> pub_be;
vector<vector<int>> dx(pub_be, vector<int>(0));
for(int khi_beh=0;khi_beh<pub_be;khi_beh++){
    int ged;
    cin >> ged;
    if(ged%2==0){
        for(int wj=1;wj<ged+1;wj+=2){
            dx[khi_beh].push_back(wj+1);
            dx[khi_beh].push_back(wj);
        }
    }else{
    dx[khi_beh].push_back(2);
    dx[khi_beh].push_back(3);
    dx[khi_beh].push_back(1);
    for(int mbx=4;mbx<ged+1;mbx+=2){
        dx[khi_beh].push_back(mbx+1);
        dx[khi_beh].push_back(mbx);
    }
    }


}
   for(int f_ioa=0;f_ioa<pub_be;f_ioa++){
    for(int nv_i=0;nv_i<dx[f_ioa].size();nv_i++){
        cout << dx[f_ioa][nv_i] << " ";
    }
    cout << '\n';
   }
}
