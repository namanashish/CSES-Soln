#include <bits/stdc++.h>
using namespace std;
long long find(long long x,long long y){
    long long rung=max(x,y);
    long long value=0;
    bool flag=(rung%2);

    long long xs=1;
    long long ys=rung;
    long long count=0;

    while(xs!=x || ys!=y){
        
        count++;
        if(xs<rung){
            xs++;
        }
        else if(ys>1){
            ys--;
        }
    }
    
    if(flag){
        value=rung*rung-count;
    }
    else{
        value=(rung-1)*(rung-1)+count+1;
    }

    return value;
}
int main(){
    long long num;
    cin>>num;
    vector<long long> ans;
    for(long long i=0;i<num;i++){
        long long x;
        long long y;
        cin>>x>>y;
        ans.push_back(find(x,y));
    }
    for(long long i=0;i<num;i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}