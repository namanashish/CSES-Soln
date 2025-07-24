#include <bits/stdc++.h>
using namespace std;
/*long long find(long long x,long long y){
    long long rung=max(x,y);
    long long value=0;
    bool flag=(rung%2);
    if(flag){
        value=rung*rung;
    }
    else{
        value=(rung-1)*(rung-1)+1;
    }
    long long xs=1;
    long long ys=rung;

    while(xs!=x || ys!=y){
        if(flag){
            value--;
        }
        else{
            value++;
        }
        if(xs<rung){
            xs++;
        }
        else if(ys>1){
            ys--;
        }
    }
    
    

    return value;
}*/
int main(){
    /*long long num;
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
    }*/

    int t=1;
    cin>>t;
    while(t--){
        long long x,y;
        cin>>x>>y;
        if(x>y){
            long long ans;
            if(x%2==0){
                ans=(x*x)-y+1;
            }
            else{
                ans=((x-1)*(x-1))+y;
                
            }
            cout<<ans<<endl;
        }
        else{
            long long ans;
            if(y%2==0){
                ans=(y-1)*(y-1)+x;
                
            }
            else{
                ans=y*y - x+1;
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}
