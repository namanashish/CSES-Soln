#include <bits/stdc++.h>
using namespace std;

int main(){
    string a;
    cin>>a;
    char check=a[0];
    int result=0;
    int count=0;
    for(int i=0;i<a.length();i++){
        if(a[i]==check){
            count++;
        }
        else{
            result=max(count,result);
            check=a[i];
            count=0;
            count++;
        }
    }
    result=max(result,count);
    cout<<result;
    return 0;
}