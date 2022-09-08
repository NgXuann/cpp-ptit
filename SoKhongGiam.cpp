#include<bits/stdc++.h>
using namespace std;


int check(string s){
	int n = s.size();
	if (n<2) return 0;
	else{
		for(int i=0; i<n-1; i++){
			if(s[i] > s[i+1])
			return 1;
		}
	}
}
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		if(check(s))
		   cout << "YES" << endl;
		else
		   cout << "NO" << endl;
	}
}
