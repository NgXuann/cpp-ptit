#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int lcm(ll a, ll b){
	return (a*b)/__gcd(a,b);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		ll x=1;
		for(ll i=2; i<=n; i++){
			x = lcm(x,i);
			cout << x << " ";
		}
		
		cout << x << endl;
	}
}
