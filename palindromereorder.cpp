#include <bits/stdc++.h>
using namespace std;

int main(){
    string k;
    map<char,int> count;
    bool flag=true;
    string answer;
    cin>>k;
    for(int i=0;i<k.length();i++){
        count[k[i]]++;
    }
    int twin=0;
    map<char,int>::iterator it=count.begin();
    while(it!=count.end()){

        if(it->second%2 != 0){
            twin++;
        }

        it++;
    }
    if(twin>1){
        flag=false;
    }
    it=count.begin();
    
    string single;
    string stra;
    string rev;
    
    while(it!=count.end()){
        if(it->second % 2==0){
            for(int i=0;i<(it->second/2);i++){
                stra+=it->first;
            }
        }
        else{
            for(int i=0;i<it->second;i++){
                single+=it->first;
            }
        }
        it++;
    }
    if(flag==true){
        answer+=stra;
        reverse(stra.begin(),stra.end());
        answer+=single;
        answer+=stra;
        cout<<answer<<endl;
    }
    else{
        cout<<"NO SOLUTION"<<endl;
    }
    
    return 0;
}