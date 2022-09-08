#include<bits/stdc++.h>
using namespace std;

int uoc(int n){ // in ra uoc dau tien
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return i;
	}
	return n;
}


int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=1; i<=n; i++){
			cout << uoc(i) << " ";
		}
		cout << endl;
	}
}
