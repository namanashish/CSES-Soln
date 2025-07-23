#include <bits/stdc++.h>
using namespace std;

int main(){
    long long input;
    cin>>input;
    while(input!=1){
        cout<<input<<" ";
        if(input%2==0){
            input/=2;
        }
        else{
            input*=3;
            input++;
        }
    }
    cout<<"1"<<endl;
    return 0;
    
}