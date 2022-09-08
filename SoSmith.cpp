#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int tong(ll n)
{
    ll sum = 0;
    while (n)
    {
        sum += n%10;
        n/=10;
    }
    return sum;
}
int NT(ll n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}
int main()
{
    ll n;
    cin >> n;
    if (NT(n))
        cout<<"NO"<<endl;
    else
    {
        ll sum1 = tong(n);
        ll sum2 = 0; 
        for (ll i = 2; i <= n; i++)
        {
            while (n % i == 0)
            {
                sum2+=tong(i);
                n /= i;
            }
        }
        if(sum1 == sum2)
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
    }
}
