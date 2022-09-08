#include<bits/stdc++.h>
using namespace std;
struct dta{
	int a;
	int abs;
	int tt;
};

bool cmp(dta x, dta y){
	if(x.abs < y.abs) return true;
	if(x.abs == y.abs && x.tt < y.tt)
	  return true;
	return false;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		vector<dta> s(n);
		for(int i=0; i<n; i++){
			cin >> s[i].a;
			s[i].abs = abs(k - s[i].a);
			s[i].tt = i;
		}
		sort(s.begin(), s.end(), cmp);
		for(int i=0; i<n; i++){
			cout << s[i].a << " ";
		}
		cout << endl;
	}
	
}
	

