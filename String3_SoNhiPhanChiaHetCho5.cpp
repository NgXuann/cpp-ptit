#include<bits/stdc++.h>
using namespace std;

//1010
//i=0 sum=1
//i=1 sum=(2+0)%5=2
//i=3 sum=(4+1)%5=0
//i=4 sum=0
//1000
//i=0 sum=1%5=1
//i=1 sum=2
//i=2 sum=4
//i=3 sum=3
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		int sum=0;
		for(int i=0; i<s.size();i++){
			sum = ((sum*2)+(s[i]-'0'))%5;
		}
		if(sum%5==0) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	
}
