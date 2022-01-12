#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
#include <unordered_map>


using namespace std;

vector<string> str(101);

void precoumpute(){
    {
    int i = 2;
    for ( ; i <= 100; ) 
{
        int num = i - 1;
        if(!(num % 2 == 0)){
             string str1, str2, str3 = "0";
            str1.reserve(200), str2.reserve(200);

            {
            int i = 0 ;
            for ( ; i < num / 2; ) 
{
                str1 = str1 + "1";
                str2 = str2 + "2";
            	++i; 
            
            }}
            string strr = str1 + str3  + str2;

            for ( ; strr.size() > 0; ) 
{
               {
               int j = 0 ;
               for ( ; j < strr.size(); ) 
{
                    if(strr[j] == '2'){
                        str[i] = str[i] + "-1 ";
                    }
                    else
                        str[i] = str[i] + strr[j] + " ";
                	++j; 
                
                }}
                strr.pop_back();
            }
        }
        else{
            string str1, str2;
            str1.reserve(200), str2.reserve(200);

            {
            int j = 0 ;
            for ( ; j < num / 2; ) 
{
                str1 = str1 + "1";
                str2 = str2 + "2";
            	++j; 
            
            }}
            string strr = str1 + str2 ;

            for ( ; strr.size() > 0; ) 
{
                {
                int j = 0 ;
                for ( ; j < strr.size(); ) 
{
                    if(strr[j] == '2'){
                        str[i] = str[i] + "-1 ";
                    }
                    else
                        str[i] = str[i] + strr[j] + " ";
                	++j; 
                
                }}
                strr.pop_back();
            }

        }
    	++i; 
    
    }}
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
    for ( ; t--; ) 
{ 
        ++cnt;
        if(cnt == 43){

        }
        func();
    }
}