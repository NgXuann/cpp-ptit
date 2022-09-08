#include<bits/stdc++.h>
using namespace std;
vector<int> v;
int check1(){
	for(int i=0; i<v.size()-1; i++)
    	if(v[i]>= v[i+1])
	        return 0;
	return 1;
}

int check2(){
	for(int i=0; i<v.size()-1; i++)
	   if(v[i]!=v[i+1])
	     return 0;
	return 1;
}

int check3(){
	   if(v[0]==v[1] && v[1]==v[2] && v[3]==v[4])
	     return 1;
	return 0;
}

int check4(){
	int dem=0;
	for(int i=0; i<v.size(); i++){
		if(v[i]==6 || v[i]==8 )
	      dem++;
	}
	if(dem==5) return 1;
	return 0;
	
	
	     
}


int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		for(int i=4; i<s.size(); i++){
		if(s[i] >= '0' && s[i] <= '9'){
			int x = s[i]-'0';
			v.push_back(x);
		}
    	}
    	if(check1() || check2() || check3() || check4())
    	    cout << "YES";
    	else cout << "NO";
    	cout << endl;
    	v.clear();
	
	}
}
