#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int check(ll n){
	if(n<2) return 0;
	for(ll i=2; i<=sqrt(n); i++)
	   if(n%i==0)
	     return 0;
    return 1;
}
int main(){
	ll n;
	cin>>n;
	if(check(n)) cout << "YES";
	else cout << "NO";
	cout << endl;
}
