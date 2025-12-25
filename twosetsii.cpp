#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
int main(){
    int n;
    cin>>n;
    if((n*(n+1) % 4)!=0){
        cout<<0<<endl;
        return 0;
    }
    int sum = (n*(n+1)/4);
    vector<vector<int>> dparray (n+1,vector<int> (sum+1,0));
    dparray[0][0]=1;

    for(int i=1;i<=n-1;i++){
        for(int j=0;j<=sum;j++){
            dparray[i][j] = dparray[i-1][j];

            if(j - i >= 0){
                dparray[i][j] = (dparray[i][j] + dparray[i-1][j-i]) % mod;
            }
        }
    }
    cout<<dparray[n-1][sum];
    return 0;
}
