#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//OK done
ll tong(ll n){
	ll sum=0;
	while(n!=0){
		sum += n%10;
		n/=10;
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
		ll sum1= tong(n);
		ll sum2=0;
		ll s=n;
		if(check(n)==1) cout << "NO";
		else{
			for(ll i=2; i<=sqrt(n); i++){
				while(s%i==0){
					sum2+=tong(i);
					s/=i;
				}
			}
			if (s>1) sum2+=tong(s);
			if(sum1==sum2) cout << "YES";
			else cout << "NO";
		}
		
		cout<<endl;
	}
}
