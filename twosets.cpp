#include <bits/stdc++.h>
using namespace std;

void print(int initial,int end){
    int f=end/2;
    int v=end/4;
    cout<<"YES"<<endl;
    if(end%2==0){
        cout<<f<<endl;
        for(int i=1;i<=v;i++){
            cout<<i<<" ";
        }
        while(v--){
            cout<<end<<" ";
            end--;
        }
        cout<<endl;
        cout<<f<<endl;
        for(int i=(f/2)+1;i<=end;i++){
            cout<<i<<" ";
        }
        
    }
    else{
        cout<<f<<endl;
        for(int i=1;i<=v;i++){
            cout<<i<<" ";
            initial++;
        }
        v++;
        while(v--){
            cout<<end<<" ";
            end--;
        }
        cout<<endl;
        cout<<f+1<<endl;
        for(int i=initial;i<=end;i++){
            cout<<i<<" ";
        }
        
    }

}
int main(){
    int input;
    cin>>input;
    long long sum=(input*(input+1))/2;
    if(sum%2!=0){
        cout<<"NO"<<endl;
        return 0;
    }
    int initial=1;
    int end=input;
    print(initial,end);
    return 0;

}
