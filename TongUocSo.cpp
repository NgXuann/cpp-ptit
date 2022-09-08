#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        ll s=0;
        cin>>n;
        for (ll i = 1; i<=sqrt(n); i++)
        {
            if (n % i == 0)
            {
                ll j = n / i;
                if (i == j)
                {
                    s = s + i;
                }
                else
                {
                    s = s + i + j;
                }
            }
        }
        cout << s <<endl;
    }

    return 0;
}
