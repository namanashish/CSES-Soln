#include <bits/stdc++.h>
using namespace std;

int main(){
    long long input;
    cin>>input;
    long long x=5;
    int count=0;
    while(input/x){
        count+=input/x;
        
        x*=5;
    }
    cout<<count;
    return 0;
}