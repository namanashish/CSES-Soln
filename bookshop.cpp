#include <bits/stdc++.h>
using namespace std;
//Unbound Knapsack 
/*int main(){
    int n,tot;
    cin>>n>>tot;
    vector<int> prices(n);
    vector<int> pages(n);

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        prices.push_back(x);
    }

    for(int i=0;i<n;i++){
        int y;
        cin>>y;
        pages.push_back(y);
    }

    vector<int> dparray(n+1,-1);
    dparray[0]=0;

    for(int i=0;i<tot+1;i++){
        for(int j=0;j<prices.size();j++){
            if(dparray[i]!=-1 ){
                if(i+prices[j] < tot+1){
                    dparray[i+prices[j]]=max(dparray[i+prices[j]],dparray[i]+pages[j]);
                }
            }
        }
    }
    int ans=-2;
    for(int i=tot;i>-1;i++){
        ans=max(ans,dparray[i]);
    }
    cout<<ans;
    return 0;
    
}*/
// 0/1 Knapsack


int main(){
    int n,tot;
    cin>>n>>tot;
    vector<int> prices(n), pages(n);
    for (int i = 0; i < n; i++) cin >> prices[i];
    for (int i = 0; i < n; i++) cin >> pages[i];


    vector<int> dparray(tot+1,0);

    for(int i=0;i<n;i++){
        int page = pages[i];
        int cost = prices[i];
        
        for(int j=tot;j>=0;j--){
            if(j>=cost){
                dparray[j]=max(dparray[j],dparray[j-cost]+page); // similar to choosing and not choosing checking if the previous exists
            }
        }
    }
    cout<<dparray[tot];
    return 0;
    
} 