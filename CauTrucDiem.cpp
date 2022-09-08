#include<bits/stdc++.h>
using namespace std;

struct Point{
	double x,y;
};

void input(Point &p){
	p.x=0;
	p.y=0;
	cin >> p.x >> p.y;
}

double distance(Point p1, Point p2){
	double d1, d2, d;
	d1=pow(p1.x-p2.x,2);
	d2=pow(p1.y-p2.y,2);
	d = sqrt(d1+d2);
	return d;
}

int main(){
	struct Point A,B;
	int t;
	cin>>t;
	while(t--){
		input(A); input(B);
		cout << fixed << setprecision(4) << distance(A,B) << endl;
	}
}
