#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
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
		for(int i=2; i<=n; i++){
			if(check(i) && check(n-i)){
				cout << i << " " << n-i << endl;
				break;
			}
		}
	}
}
