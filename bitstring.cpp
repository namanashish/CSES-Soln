#include <bits/stdc++.h>
using namespace std;


int main(){
    int input;
    long mod = 1e9+7;
    cin>>input;
    long long value=1;
    for(int i=0;i<input;i++){
        value*=2;
        if(i%10==0){
            value=value%mod;
        }
        
    }
    cout<<value%mod;
    return 0;
}