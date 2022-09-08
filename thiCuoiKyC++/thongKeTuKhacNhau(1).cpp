#include <bits/stdc++.h>
#include <string.h>
using namespace std;

struct tu{
    string word;
    int soLan=1;
};

bool cmp(tu a,tu b){
    if(a.soLan>b.soLan)return true;
    if(a.soLan==b.soLan){

        if(a.word<b.word){
            return true;
        }
        return false;
    }
    return false;
}

int main(){
    int t;
    cin>>t;
    cin.ignore();
    string inputString="";
    while(t--){
        string line;
        getline(cin,line);
        inputString+=" ";
        inputString+=line;
    }


    for(int i=0;i<inputString.size();i++){
        char c = inputString[i];
        if(c==',' || c=='.' || c=='?' || c=='!' || c==':' || c=='(' || c==')' || c=='-' || c=='/'){
            inputString[i]=' ';
        }
        if(c>='A'&&c<='Z'){
            inputString[i]+=32;
        }
    }

    stringstream ss;
    ss<<inputString;
    string token;
    vector<tu> listTu;
    while(ss>>token){
        int index;
        tu motTu;
        motTu.word=token;
        bool trung = false;
        for(int i=0;i<listTu.size();i++){
            if(listTu[i].word==motTu.word){
                listTu[i].soLan++;
                trung = true;
                break;
            }
        }
        if(trung==false)listTu.push_back(motTu);
    }

    sort(listTu.begin(),listTu.end(),cmp);
    for(int i=0;i<listTu.size();i++){
        cout<<listTu[i].word<<" "<<listTu[i].soLan<<endl;
    }
}
