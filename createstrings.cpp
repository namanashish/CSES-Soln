#include <bits/stdc++.h>
using namespace std;
int factorial(int k){
    if(k==1){
        return 1;
    }
    
    int ans=k*factorial(k-1);
    return ans;
}
int main(){

    string k;
    cin>>k;
    map<char,int> mp;
    vector<char> vec;
    for(int i=0;i<k.size();i++){
        vec.push_back(k[i]);
    }

    for(int i=0;i<k.length();i++){
        mp[k[i]]++;
    }
    int y=factorial(k.length());
    map<char,int>::iterator it=mp.begin();
    while(it!=mp.end()){
        y/=factorial(it->second);
        it++;
    }
    sort(vec.begin(),vec.end());
    cout<<y<<endl;
    do {
        for (auto i: vec) cout << i;
        cout << endl;
    } while (next_permutation(vec.begin(), vec.end()));
    return 0;
}