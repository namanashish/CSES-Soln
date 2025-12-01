#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;


    int count =1;
    int k=1;
    vector<int> digits;

    
    vector<long long> dparray(n+1,INT_MAX);
    dparray[n]=0;
    for(int curr=n;curr>-1;curr--){
        if(dparray[curr]!=INT_MAX){
            k=1;
            while(curr/k){
                int v=(curr/k)%10;
                dparray[curr-v]=min(dparray[curr]+1,dparray[curr-v]);
                k*=10;            
            }
        }
    }
    cout<<dparray[0];
    
    return 0;
}