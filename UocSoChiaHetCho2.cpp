#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll s=n;
		ll dem=0;
		vector<ll> v;
		for(ll i=1; i<=sqrt(n); i++){
			if(s%i==0){
				ll j=s/i;
				if(i==j)
				   v.push_back(i);
				else{
					v.push_back(i);
					v.push_back(j);
				}
			}
		}
		for(ll i=0; i<v.size(); i++){
			if(v[i]%2==0)
			  dem++;
		}
		cout << dem << endl;
	}
}
