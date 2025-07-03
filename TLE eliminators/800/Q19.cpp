#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

   while(t--){
    int n;
    cin>>n;

    int sum = 0;
    int product = 1;

    for(int i = 0;i<n;i++){
        int num;
        cin>>num;

        sum+= num;
        product = product*num;
    }

    if(sum>=0 && product==1){
        cout<<0<<endl;
    }
    else if(sum>=0 && product == -1){
        cout<<1<<endl;
    }
    else if(sum<0 && product == 1){
        int ops = (abs(sum)+1)/2;

        if(ops % 2 ==0){
            cout<<ops<<endl;
        }
        else{
            cout<<ops+1<<endl;
        }
    }
    else{
        int ops = (abs(sum)+1)/2;
        
        if(ops % 2 !=0){
            cout<<ops<<endl;
        }
        else{
            cout<<ops+1<<endl;
        }
    }
   } 

    return 0;
}