#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	double s=1;
	for(int i=2; i<=n; i++){
		s += (double)1/i;
	}
	printf("%.4lf", s);
}
