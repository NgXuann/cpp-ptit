#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gt(ll n){
	if(n==1) return 1;
	return n*gt(n-1);
}

int main(){
		ll n;
		cin>>n;
		ll sum=0;
		for(ll i=1; i<=n; i++)
		  sum += gt(i);
		cout << sum << endl;
	
}
