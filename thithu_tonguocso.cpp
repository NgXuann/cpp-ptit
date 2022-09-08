#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll sum=0;
		ll s=n;
		for(ll i=1; i<=sqrt(n); i++){
			if(s%i==0){
				ll j=s/i;
				if(i==j){
					sum+=i;
				}
				else
				  sum+=i+j;
			}
		}
		cout << sum << endl;
	}
}
