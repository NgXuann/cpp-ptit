#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//TLE
int check(ll n){
	if(n<2) return 0;
	for(ll i=2; i<=sqrt(n); i++){
		if(n%i==0)
		  return 0;
	}
	return 1;
}


int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll dem=0;
		for(ll i=2; i<=sqrt(n); i++){
			if(check(i))
			  dem++;
		}
		cout << dem;
		cout << endl;
	}
}
