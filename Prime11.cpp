#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll tonguoc(ll n){
	ll sum=1;
	for(ll i=2; i<=sqrt(n);i++){
		if(n%i==0){
			ll j=n/i;
			if(i==j)
			  sum+=i;
			else{
				sum+=i+j;
			}
		}
	}
	return sum;
}

ll check(ll n){
	if(n<2) return 0;
	for(ll i=2; i<=sqrt(n); i++){
		if(n%i==0)
		  return 0;
	}
	return 1;
}


int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		if(check(n)) cout << 0;
		else if(tonguoc(n)==n) cout << 1;
		else cout << 0;
		cout<< endl;
	}
}

