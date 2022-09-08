#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	vector<string> v;
	getline(cin,s);
	for(int i=0; i<s.size();i++){
		if(s[i] >= 'A' && s[i] <= 'Z')
		   s[i]+=32;
    }
    string b;
    stringstream ss;
    ss<<s;
    while(ss>>b){
    	v.push_back(b);
	}
	string c=v[v.size()-1];
	cout<<c;
	for(int i=0; i<v.size()-1; i++){
			string a=v[i];
			cout << a[0];
	}
	
	cout << "@ptit.edu.vn";
}

