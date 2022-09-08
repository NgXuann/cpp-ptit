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
		ll n;
		cin>>n;
		vector <ll> v;
		if(check(n)) cout << n << endl;
		else{
			ll s=n;
			for(ll i=2; i<=sqrt(n); i++){
				while(s%i==0){
					v.push_back(i);
					s/=i;
				}
			}
			if(s>1) v.push_back(s);
			cout << v[v.size()-1] << endl;
		}
	}
}
