#include<bits/stdc++.h>
using namespace std;

int check(string s){
	for(int i=0; i<s.size()-1; i++){
		if(s[i]>s[i+1])
		  return 0;
	}
	return 1;
}

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		if(check(s)) cout << "YES";
		else cout<<"NO";
		cout << endl;
	}
}
