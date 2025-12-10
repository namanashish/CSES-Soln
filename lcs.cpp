#include <bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cin>>n>>m;
    string s,d;
    cin>>s;
    cin>>d;
    vector<vector<int>> dparray(n+1,vector<int>(m+1,-1));
    for(int i=0;i<=n;i++){
        dparray[i][0]=0;
    }
    for(int i=0;i<=m;i++){
        dparray[0][i]=0;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s[i-1]==d[j-1]){
                dparray[i][j]=1+dparray[i-1][j-1];
            }
            else{
                dparray[i][j]=max(dparray[i-1][j],dparray[i][j-1]);
            }
        }
    }

    int i=m;
    int j=n;
    string ans;
    while(i>0 && j>0){
        if(s[j] == d[i]){
            ans+=s[j];
            i--;
            j--;
        }
        else{
            if(dparray[i-1][j] > dparray[i][j-1]){
                i=i-1;
            }
            else{
                j=j-1;
            }
        }
    }
    reverse(ans.begin(),ans.end());
    cout<<ans;

    return 0;
}