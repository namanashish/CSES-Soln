#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int testcase;
    cin>>testcase;
    vector<string> ans;
    for(int i=0;i<testcase;i++){
        int x,y;
        cin>>x>>y;

        if(x>2*y|| y>2*x){
            ans.push_back("NO");
        }
        else if((x+y) % 3==0){
            if(x==0 && y==0){
                ans.push_back("YES");
            }
            else if(x*y ==0){
                ans.push_back("NO");
            }
            else{
                ans.push_back("YES");
            }
        }
        else{
            ans.push_back("NO");
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}