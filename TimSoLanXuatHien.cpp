#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;
	cin >> t;
	vector<long long> v;
	while(t--){
		ll n,k;
		cin >> n >> k;
		for(ll i=0; i<n; i++){
			ll x;
			cin >> x;
			v.push_back(x);
		}
		int dem=0;
		for(ll i=0; i<v.size(); i++){
			if(v[i]==k)
			   dem++;
		}
		cout<<dem;
		cout<<endl;
		v.clear();
	}
}
