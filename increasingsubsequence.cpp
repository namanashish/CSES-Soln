#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    /* TLE
    vector<int> dparray (n,0);
    for(int i=n-2;i>-1;i--){
        int count =0;
        for(int j=i+1;j<n;j++){
            if(nums[j]>nums[i]){
                count=max(count,1+dparray[j]);
            }
        }
        dparray[i]=count;
    }
    int ans=0;
    for(int i=0;i<n;i++){
        ans=max(ans,dparray[i]+1);
    }*/
    vector<int> temp;
    temp.push_back(nums[0]);
    for(int i=1;i<n;i++){
        //https://www.youtube.com/watch?v=UO6SIr93RcI
        auto index = lower_bound(temp.begin(),temp.end(),nums[i]);
        
        if(index==temp.end()){
            temp.push_back(nums[i]);
        }
        else{
            temp[index-temp.begin()]=nums[i];
        }
    }
    cout<<temp.size();
    return 0;
}