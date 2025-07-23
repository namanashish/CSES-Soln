#include <bits/stdc++.h>
using namespace std;

int main(){
    long long arr;
    cin>>arr;

    long long sum=0;
    for(long long i=0;i<arr-1;i++){
        int k;
        cin>>k;
        sum+=k;
    }

    arr*=(arr+1);

    arr=arr/2;

    cout<<arr-sum;
    return 0;
}