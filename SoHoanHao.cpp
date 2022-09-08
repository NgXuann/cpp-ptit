#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll a[]={6, 28, 496, 8128, 33550336, 8589869056,137438691328};
 int main(){
 	int t;
 	cin>>t;
 	while(t--){
 		int flag = 0;
 		ll n;
 		cin>>n;
 		for(ll i=0; i<7; i++){
 			if(n==a[i]){
 				cout << 1;
 		     	flag=1;
 		    	break;
			 }
		}
		if(flag==0) cout << 0;
		cout<<endl;
		
	 }
 }
