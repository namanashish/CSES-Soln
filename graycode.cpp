#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<string> ans;
    string inti="";
    for(int i=0;i<n;i++){
        inti+="0";
    }
    ans.push_back(inti);
    int index=n-1;
    for(int i=0;i<n;i++){
        for(int j=ans.size()-1;j>-1;j--){

            string k=ans[j];
            //cout<<k<<endl;
            k[index]='1';
            ans.push_back(k);
        }
        index--;
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}