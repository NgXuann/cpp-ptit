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
		ll n,m;
		cin>>n>>m;
		for(ll i=n; i<=m; i++){
			if(check(i))
			  cout << i << " ";
		}
		cout << endl;
	}
}
