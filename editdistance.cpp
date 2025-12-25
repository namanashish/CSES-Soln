#include <bits/stdc++.h>
using namespace std;
//https://youtu.be/XYi2-LPrwm4?si=J1vajucdRJ4JVNjc
int main(){
    string s1;
    string s2;

    cin>>s1;
    cin>>s2;
    int n=s1.length();
    int m=s2.length();
    vector<vector<int>> dparray(n+1,vector<int>(m+1,0));
    
    for(int i=0;i<=m;i++){
        dparray[0][i]=i;
    }
    for(int j=0;j<=n;j++){
        dparray[j][0]=j;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s1[i-1]==s2[j-1]){
                dparray[i][j]=dparray[i-1][j-1];
            }
            else{
                dparray[i][j]=1+min(dparray[i-1][j-1],min(dparray[i-1][j],dparray[i][j-1]));
            }
        }
    }
    cout<<dparray[n][m];
    return 0;
}
