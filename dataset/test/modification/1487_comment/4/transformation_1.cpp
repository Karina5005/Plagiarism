#include<bits/stdc++.h>
#include <unordered_map>


using namespace std;

vector<string> str(101);

void precoumpute(){
    for(int i = 2; i <= 100; ++i)/* 'for' inside */
    {
        int num = i - 1;
        /* 'if' begin */
        if(num % 2 == 0)/* 'if' inside */
        {
            string str1, str2;
            str1.reserve(200), str2.reserve(200);

            for(int j = 0 ; j < num / 2 ; ++j)/* 'for' inside */
            {
                str1 = str1 + "1";
                str2 = str2 + "2";
            }
            string strr = str1 + str2 ;

            while(strr.size() > 0){
                for(int j = 0 ; j < strr.size() ; ++j)/* 'for' inside */
                {
                    /* 'if' begin */
                    if(strr[j] == '2')/* 'if' inside */
                    {
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

            for(int i = 0 ; i < num / 2; ++i)/* 'for' inside */
            {
                str1 = str1 + "1";
                str2 = str2 + "2";
            }
            string strr = str1 + str3  + str2;

            while(strr.size() > 0){
               for(int j = 0 ; j < strr.size() ; ++j)/* 'for' inside */
               {
                    /* 'if' begin */
                    if(strr[j] == '2')/* 'if' inside */
                    {
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
    while(t--){ 
        ++cnt;
        /* 'if' begin */
        if(cnt == 43)/* 'if' inside */
        {

        }
        func();
    }
}