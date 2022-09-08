#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		for(int i=0; i<s.size()-2; i++){
			if(s[i]=='0' && s[i+1]=='8' && s[i+2]=='4')
			   s.replace(s.begin()+i, s.begin()+i+3, "x");
		}
		for(int i=0; i<s.size(); i++){
			if(s[i]!='x')
			  cout<<s[i];
	}
		cout<<endl;
	}
}
