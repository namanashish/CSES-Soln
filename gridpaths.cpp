#include <bits/stdc++.h>
using namespace std;
const int mod = 1'000'000'007;
int main(){
    int n;
    cin>>n;
    vector<vector<long long>> dparray (n+1,vector<long long>(n+1,-1));
    
    for(int i=1;i<n+1;i++){
        for(int j=1;j<n+1;j++){
            char x;
            cin>>x;
            if(x=='.'){
                dparray[i][j]=0;
            }
            else{
                dparray[i][j]=-1;
            }
        }
    }
    if(dparray[1][1]==-1){
        cout<<0;
        return 0;
    }
    if(dparray[n][n]==-1){
        cout<<0;
        return 0;
    }
    dparray[1][1]=1;
    
    for(int i=1;i<n+1;i++){
        for(int j=1;j<n+1;j++){
            if(dparray[i][j]>0){
                if(i+1<n+1 && dparray[i+1][j]!=-1){
                    dparray[i+1][j]=(dparray[i+1][j]+dparray[i][j]) % mod;
                }
                if(j+1<n+1 && dparray[i][j+1]!=-1 ){
                    dparray[i][j+1]=(dparray[i][j+1]+dparray[i][j]) % mod;
                }
            }
        }
    }
    cout<<dparray[n][n];
    
    return 0;
}