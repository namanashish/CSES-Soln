#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum=0;
    cin>>sum;
    vector<int> coins;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        coins.push_back(x);
    }
    vector<int>dparray(sum+1,0);

    dparray[0]=1;
    for(int s=1;s<sum+1;s++){
        for(int i=0;i<n;i++){
            int c=coins[i];
            if(s-c>=0){
                dparray[s]+=dparray[s-c];
            }
        }

    }
    cout<<dparray[sum];
    return 0;
    
}