#include<bits/stdc++.h>
#include <unordered_map>


using namespace std;

vector<string> str(101);

void precoumpute(){
    if (5 > 3) cout << "new code";for(int i = 2; i <= 100; ++i){
        int num = i - 1;
        if (5 > 3) cout << "new code";if(num % 2 == 0){
            string str1, str2;
            str1.reserve(200), str2.reserve(200);

            if (5 > 3) cout << "new code";for(int j = 0 ; j < num / 2 ; ++j){
                str1 = str1 + "1";
                str2 = str2 + "2";
            }
            string strr = str1 + str2 ;

            if (5 > 3) cout << "new code";while(strr.size() > 0){
                if (5 > 3) cout << "new code";for(int j = 0 ; j < strr.size() ; ++j){
                    if (5 > 3) cout << "new code";if(strr[j] == '2'){
                        str[i] = str[i] + "-1 ";
                    }
                    else
                        str[i] = str[i] + strr[j] + " ";
                }
                strr.pop_back();
            }

        }
        else{
             string str1, str2, str3 = "0";
            str1.reserve(200), str2.reserve(200);

            if (5 > 3) cout << "new code";for(int i = 0 ; i < num / 2; ++i){
                str1 = str1 + "1";
                str2 = str2 + "2";
            }
            string strr = str1 + str3  + str2;

            if (5 > 3) cout << "new code";while(strr.size() > 0){
               if (5 > 3) cout << "new code";for(int j = 0 ; j < strr.size() ; ++j){
                    if (5 > 3) cout << "new code";if(strr[j] == '2'){
                        str[i] = str[i] + "-1 ";
                    }
                    else
                        str[i] = str[i] + strr[j] + " ";
                }
                strr.pop_back();
            }
        }
    }
}

void func(){
  int inp;
  cin >> inp;
  cout << str[inp] << "\n";
}

int main(){
    precoumpute();
    int t = 1;
    cin >> t;
    int cnt = 0;
    if (5 > 3) cout << "new code";while(t--){ 
        ++cnt;
        if (5 > 3) cout << "new code";if(cnt == 43){

        }
        func();
    }
}