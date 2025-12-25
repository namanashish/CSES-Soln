#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<vector<int>> dparray(n,vector<int>(m+1,0));
    if(nums[0]==0){
        for(int i=1;i<m+1;i++){
            dparray[0][i]=1;
        }
    }
    else{
        dparray[0][nums[0]]=1;
    }
    
    for(int i=1;i<n;i++){
        if(nums[i]==0){
            for(int j=1;j<m+1;j++){
                dparray[i][j]=dparray[i-1][j];
                if(j-1>=1){
                    dparray[i][j]=(dparray[i][j]+dparray[i-1][j-1]) % mod;
                }
                if(j+1<=m){
                    dparray[i][j]=(dparray[i][j]+dparray[i-1][j+1]) % mod;
                }
            }
        }
        else{
            dparray[i][nums[i]] =dparray[i-1][nums[i]];
            if(nums[i]-1>=1){
                dparray[i][nums[i]]=(dparray[i][nums[i]]+dparray[i-1][nums[i]-1]) % mod;
            }
            if(nums[i]+1<=m){
                dparray[i][nums[i]]=(dparray[i][nums[i]]+dparray[i-1][nums[i]+1]) % mod;
            }            
        }
    }

    int sum=0;
    if(nums[n-1]==0){
        for(int i=1;i<=m;i++){
            sum=(sum+dparray[n-1][i]) % mod;
        }
        cout<<sum;
    }
    else{
        cout<<dparray[n-1][nums[n-1]];
    }

    return 0;
}