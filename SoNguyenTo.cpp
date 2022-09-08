#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;

	cin>>n;
	if(n<2) cout << "NO";
	int dem=0;
	if(n>=2){
		for(int i=2; i<=sqrt(n); i++){
		if(n%i==0)
		   dem++;
	}
	if(dem==0) cout<<"YES";
	else cout<<"NO";
	}
}
