#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	getline(cin, s);
	stringstream ss;
	vector<string> v;
	ss << s;
	string b;
	while(ss>>b){
		v.push_back(b);
	}
	for(int i=0; i<v.size(); i++){
		string c;
		c = v[i];
		if(i!=v.size()-1){
	    	cout << c[0];
		}else
		  cout << c << "@ptit.edu.vn";
	}
	cout << endl;
	
}
