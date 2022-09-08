#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string so;
        getline(cin,so);

        //check dieu kien 1
        bool dieuKien1 = false;
        if((so.size())%2==1){
            dieuKien1= true;
        }

        //check dieu kien 2
        bool dieuKien2 = false;
        if(so[0]!=so[1])dieuKien2 = true;

        //check dieu kien 3
        bool dieuKien3 = true;
        for(int i=0;i<so.size();i+=2){
            if(so[i]!=so[0])dieuKien3=false;
        }
        if((so.size())%2==1){
            if(so[so.size()-1]!=so[0])dieuKien3=false;
        }

        if(dieuKien1 && dieuKien2 &&dieuKien3){
            cout<<"YES";
        }else cout<<"NO";
        cout<<endl;
    }
}
