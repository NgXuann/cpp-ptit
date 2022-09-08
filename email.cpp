#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	getline(cin,s);
	vector<string> v;
	string b;
	for(int i = 0; i < s.size(); i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
            s[i]+=32;
    }
	stringstream ss;
	ss << s; 
	
	while(ss>>b){
		v.push_back(b);
	}
	for(int i=0; i<v.size()-1;i++){
		string a = v[i];
		cout << a[0];
	}
	string c = v[v.size()-1];
	cout << c << "@ptit.edu.vn";
	
}
