#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll bcnn(ll a, ll b){
	return a*b/__gcd(a,b);
}

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll x=1;
		for(ll i=1; i<=n; i++){
			x=bcnn(x,i);
		}
		cout << x << endl;
		
	}
}
