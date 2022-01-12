    #include<iostream>
    using namespace std;
    int main();

int main() {
    int t, a, b, c;
    for (cin >> t; t--;) {
        cin >> a >> b >> c;
        if ((a + b + c) % 9 == 0 && min(a, min(b, c)) >= (a + b + c) / 9)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}


