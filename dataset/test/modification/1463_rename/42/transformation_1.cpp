    #include<iostream>
    using namespace std;
    main(){
        int iqo_dmo,zya,y,h_qiv;
        for(cin>>iqo_dmo;iqo_dmo--;){
            cin>>zya>>y>>h_qiv;
            if((zya+y+h_qiv)%9==0 and min(zya,min(y,h_qiv))>=(zya+y+h_qiv)/9) cout<<"YES\n"; else cout<<"NO\n";
        }
    }