#include <bits/stdc++.h>
using namespace std;
/*void dp(set<int>& ans,vector<int>& money, int sum , int index){
    if(index==money.size()-1){
        ans.insert(sum+money[index]);
        ans.insert(sum);
        return;
    }
    
    dp(ans,money,sum+money[index],index+1);
    dp(ans,money,sum,index+1);

    return;

}
int main(){
    int n;
    cin>>n;
    vector<int> money(n);
    int sum=0;
    bool flag=false;
    for(int i=0;i<n;i++){
        cin>>money[i];
        if(money[i]==0){
            flag = true;
        }
        sum+=money[i];
    }
    set<int> ans;
    dp(ans,money,0,0);
    if(flag==false){
        auto it = ans.begin();
        it++;
        cout<<ans.size()-1<<endl;
        for(it;it!=ans.end();it++){
            cout<<*it<<" ";
        }
    }
    else{
        cout<<ans.size()<<endl;
        for(auto it=ans.begin();it!=ans.end();it++){
            cout<<*it<<" ";
        }
    }
    
    return 0;
}*/

int main(){
    int n;
    cin>>n;
    vector<int> money(n);
    int sum=0;
    bool flag = false;
    for(int i=0;i<n;i++){
        cin>>money[i];
        if(money[i]==0){
            flag=true;
        }
        sum+=money[i];
    }
    vector<vector<int>> dparray(n+1,vector<int>(sum+1,0));
    dparray[0][0]=1;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=sum;j++){
            if(dparray[i-1][j]==1){
                dparray[i][j]=1;
            }
            else if(j-money[i-1] > -1){
                if(dparray[i-1][j-money[i-1]]==1){
                    dparray[i][j]=1;
                }
            }
            
        }
    }
    
    int i=0;
    int count=0;
    if(flag==false) i++;
    while(i<sum+1){
        if(dparray[n][i]==1){
            count++;
        }
        i++;
    }
    cout<<count<<endl;
    i=0;
    if(flag==false) i++;
    while(i<sum+1){
        if(dparray[n][i]==1){
            cout<<i<<" ";
        }
        i++;
    }
    return 0;                                           

}