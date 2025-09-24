#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int end=n;
    int start=1;
    if(n==1){
        cout<<"1"<<endl;
    }
    else if(n>3){
        if(n%2==0){
            cout<<n/2+1<<" ";
            while(end!=n/2+1){
                cout<<start<<" "<<end<<" ";
                start++;
                end--;
            }
            cout<<n/2;
            
        }
        else if(n%2!=0){
            cout<<n/2+1<<" ";
            while(start!=n/2+1){
                cout<<start<<" "<<end<<" ";
                start++;
                end--;
            }

        }
    }
    else{
        cout<<"NO SOLUTION";
    }
    
    return 0;

}