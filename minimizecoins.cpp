#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,sum;
    
    cin>>n>>sum;
    vector<int> array;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        array.push_back(x);
    }
    
    vector<int> dparray(sum+1,INT_MAX);
    dparray[0]=0;
    
    for(int i=1;i<sum+1;i++){
        for(int k=0;k<array.size();k++){
            int c = array[k];
            if(i-c>=0 && dparray[i-c]!=INT_MAX){
                if(dparray[i-c]+1 < dparray[i]){
                    dparray[i]=dparray[i-c]+1;
                }
            }
        }
    }
    if(dparray[sum]!=INT_MAX){

    cout<<dparray[sum]<<endl;
    }
    else{
        cout<<-1;
    }
    return 0;
}