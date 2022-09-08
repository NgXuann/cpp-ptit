#include<bits/stdc++.h>
using namespace std;

struct SV {
	string ma, ten, lop;
	double diem1, diem2, diem3;
};

bool cmp(SV a, SV b){
	if(a.ma < b.ma)
	   return true;
	return false;
}

int main(){
	int n;
	cin>>n;
	struct SV sv[105];
	for(int i=0; i<n; i++){
		cin >> sv[i].ma;
		cin.ignore();
		getline(cin, sv[i].ten);
		cin >> sv[i].lop;
		cin >> sv[i].diem1;
		cin >> sv[i].diem2;
		cin >> sv[i].diem3;
	}
	sort(sv,sv+n,cmp);
	int dem=1;
    for(int i=0; i<n; i++){
    	cout << dem++ << " "<< sv[i].ma << " "<< sv[i].ten << " " << sv[i].lop << " ";
    	printf("%lf ",sv[i].diem1);
    	printf("%lf ",sv[i].diem2);
    	printf("%lf ",sv[i].diem3);
    	cout << endl;
	}
	

}
