#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vector<ll> v, a;
		for(ll i=0; i<n; i++){
			ll x;
			cin>>x;
			v.push_back(x);
		}
		int flat;
		for(ll i=0; i<n; i++){
			flat=0;
			for(ll j=0; j<n; j++){
				if(i == v[j]){
					a.push_back(i);
					flat=1;
					break;
				}
			}
			if(flat==0) a.push_back(-1);	
		}
		for(ll i=0; i<a.size(); i++)
		   cout << a[i] << " ";
		cout << endl;
	}
}
