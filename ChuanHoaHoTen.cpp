#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	getline(cin,s);
	vector<string> v;
	for(int i=0; i<s.size(); i++){
		if(s[i] >= 'A' && s[i] <= 'Z')
		  s[i]+=32;
	}
	string b;
	stringstream ss;
	ss<<s;
	while(ss>>b){
		v.push_back(b);
	}
	for(int i=0; i<v.size()-1; i++){
		if(i<v.size()-2){
			string a = v[i];
	     	a[0] -=32;
	    	cout << a << " ";
		}
		else{
			string a = v[i];
	     	a[0] -=32;
	    	cout << a;
		}
	}
	string c = v[v.size()-1];
	for(int i=0; i<c.size(); i++){
		c[i]-=32;
	}
	cout << ", " << c;
}
