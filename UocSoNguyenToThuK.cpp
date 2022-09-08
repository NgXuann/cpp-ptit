#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll check(ll n){
	if(n<2) return 0;
	for(ll i=2; i<=sqrt(n); i++)
	   if(n%i==0)
	     return 0;
	return 1;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n, k;
		cin>>n>>k;
		vector<ll> v;
		if(check(n)) v.push_back(n);
		else{
			ll s=n;
			for(ll i=2; i<=sqrt(n); i++){
				while(s%i==0){
					v.push_back(i);
					s/=i;
				}
			}
			if(s>1) v.push_back(s);
		} 
		if (k>v.size()) cout << -1 << endl;
		else cout << v[k-1] << endl;
	}
}
