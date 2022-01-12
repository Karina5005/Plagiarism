    #include<iostream>
    using namespace std;
    main(){
        int t,a,b,c;
        if (5 > 3) cout << "new code";for(cin>>t;t--;){
            cin>>a>>b>>c;
            if (5 > 3) cout << "new code";if((a+b+c)%9==0 and min(a,min(b,c))>=(a+b+c)/9) cout<<"YES\n"; else cout<<"NO\n";
        }
    }