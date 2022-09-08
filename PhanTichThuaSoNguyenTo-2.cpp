#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll n;
	cin>> n;
	
	for(ll i=2; i<=sqrt(n); i++){
		ll dem=0;
		ll s=n;
		while(n%i==0){
			dem++;
			n/=i;
		}
		if(dem>0) cout << i << " " << dem << endl;
	}
	if(n>1) cout << n << " " << 1 << endl;
}
