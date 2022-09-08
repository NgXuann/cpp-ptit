#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
	    vector<char> v;
    	cin>>s;
	    for(int i = 0 ; i < s.size() ; i++)
	       	v.push_back(s[i]);
        sort(v.begin() , v.end());
        int sum=0;
        string b = "";
        for(int i=0; i< v.size(); i++){
        	if(v[i] >= '0' && v[i] <= '9')
        	   sum+= (v[i]-'0');
        	else
        	   b += v[i];
		}
		cout << b << sum << endl;
		
		
	}
	
}
