#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vector<ll> v;
		for(ll i=0; i<n; i++){
			ll x;
			cin>>x;
			v.push_back(x);
		}
		for(ll i=0; i<n; i++){
			if(v[i]!=0)
			   cout << v[i] << " ";
		}
		for(ll i=0; i<n; i++){
			if(v[i]==0)
			   cout << 0 << " ";
		}
		cout<<endl;
	}
}
