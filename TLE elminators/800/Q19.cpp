#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int sum = 0;
        int product =1;
        for(int j=0;j<n;j++){
            int val;
            cin>>val;
            sum += val;
            product = product * val;
        }

        if(sum >=0 && product == 1){
            cout<<0<<"\n";
        }
        else if(sum >=0 && product == -1){
            cout<<1<<"\n";
        }
        else if(sum < 0 && product ==1 ){
            int count = 0;
            if(abs(sum)%2){
                count = abs(sum)/2 +1;
            }
            else{
                count = abs(sum)/2;
            }
            if(count%2 != 0){
                cout<<count+1<<"\n";
            }
            else{
                cout<<count<<"\n";
            }
        }
         else if(sum < 0 && product == -1 ){
            int count = 0;
            if(abs(sum)%2){
                count = abs(sum)/2 +1;
            }
            else{
                count = abs(sum)/2;
            }
            if(count%2 == 0){
                cout<<count+1<<"\n";
            }
            else{
                cout<<count<<"\n";
            }
        }
        

    }

    return 0;
}