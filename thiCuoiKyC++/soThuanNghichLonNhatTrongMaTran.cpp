#include <bits/stdc++.h>
using namespace std;

bool checkThuanNghich(int x){
    string so = to_string(x);
    if(so.size()<2)return false;
    for(int i=0;i<so.size()/2;i++){
        if(so[i]!=so[so.size()-1-i])return false;
    }
    return true;
}

int main(){
    int n,m;
    cin>>n>>m;
    int A[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>A[i][j];
        }
    }

    bool found = false;
    int max = A[0][0];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(max<A[i][j] && checkThuanNghich(A[i][j])){
                max = A[i][j];
                found = true;
            }
        }
    }

    if(found==false){
        cout<<"NOT FOUND";
    }else{
        cout<<max<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(A[i][j]==max)cout<<"Vi tri ["<<i<<"]["<<j<<"]"<<endl;
            }
        }
    }
}
