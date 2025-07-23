#include <bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cin>>size;

    long long ans=0;
    long long check=0;
    for(int i=0;i<size;i++){
        long long input;
        cin>>input;
        check=max(input,check);
        if(input<check){
            ans+= check-input;
        }
    }
    cout<<ans;
    return 0;
}

