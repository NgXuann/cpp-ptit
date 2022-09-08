#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll tongchuso(ll n){
	ll sum=0;
	while(n){
		sum+=n%10;
		n/=10;
	}
	return sum;
}

ll check(ll n){
	if (n<2) return 0;
	for(ll i=2; i<=sqrt(n); i++){
		if(n%i==0)
		  return 0;
	}
	return 1;
}

int main(){
		ll n;
		cin>>n;
		ll sum=0;
		if(check(n)) cout << "NO";
		else{
			ll sum1 = tongchuso(n);
			ll sum2=0;
			for(ll i=2; i<=sqrt(n); i++){
				while(n%i==0){
					sum2+=tongchuso(i);
					n/=i;
				}
			}
			if(sum1==sum2) cout << "YES";
			else cout <<"NO";
		}
		cout << endl;

}
