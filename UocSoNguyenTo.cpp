#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int check(ll n){
	if(n<2) return 0;
	for(ll i=2; i<=sqrt(n); i++)
	   if(n%i==0) return 0;
	return 1;
}

int main(){
	int t;
	cin>>t;
	vector<ll> v;
	while(t--){
		ll n;
		cin>>n;
		ll s=n;
		if(check(n)) cout << n << endl;
		else{
			for(ll i=2; i<=sqrt(n); i++){
				while(s%i==0){
					cout << i << " ";
				    s/=i;
				}
			}
			if(s>1) cout << s;
			cout << endl;
		}
	}
}
