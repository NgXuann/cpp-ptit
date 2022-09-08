#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string s;
ll sum(){
	ll sum=0;
	for(ll i=0; i<s.size(); i++){
		ll x=s[i]-'0';
		sum+=x;
	}
	return sum;
}

int check(ll a){
	ll sum=0;
	while(a){
		sum+= a%10;
		a/=10;
	}
	return sum;
}

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		cin>>s;
		ll a = sum();
		if(check(a)==9 || check(check(a))==9) 
		  cout << 1;
		else cout <<0;
		cout << endl;
	}
}
