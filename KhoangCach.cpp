#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int xa, ya, xb, yb;
		cin >> xa >> ya >> xb >> yb;
		double kq=0;
		kq =(double) sqrt(pow((xa-xb),2)+ pow((ya-yb),2));
		printf("%.4lf", kq);
		cout<<endl;
	}
}
