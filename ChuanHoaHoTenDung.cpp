#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n;
        ws(cin);
        getline(cin, s);
        istringstream ss(s);
        string x;
        string y[100];
        int i = 0;
        while (ss >> x) {
            string tmp = "";
            tmp += toupper(x[0]);
            for(int o = 1; o < x.length(); o++) 
                tmp += tolower(x[o]);
            y[i++] = tmp;
        }

        if (n == 1) {
            cout << y[i - 1] << " ";
            for (int j = 0; j < i - 1; j++) {
                cout << y[j] << " ";
            }
        } 
        else if (n == 2) {
            for (int j = 1; j < i; j++) {
                cout << y[j] << " ";
            }
            cout << y[0];
        }

        cout << '\n';

    }
}
