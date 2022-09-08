#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vector<ll> v,a;
		for(ll i=0; i<n; i++){
			ll x;
			cin>>x;
			v.push_back(x);
		}
		sort(v.begin(),v.end());
		for(ll i=0; i<n; i++){
				ll k;
				k = abs(v[i]-v[i+1]);
				a.push_back(k);
		}
		sort(a.begin(), a.end());
		cout << a[0] << endl;
		
	}
}
