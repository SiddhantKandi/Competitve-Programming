#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
       vector<int> arr(n,0);
       vector<int> store;
       
       for(int i = 0;i<n;i++){
        cin>>arr[i];

        if(arr[i] == 2){
            store.push_back(i+1);
        }

        
        
    }

    if(store.size() == 0){
        cout<<1<<endl;
    }
    else if(store.size() % 2 !=0){
        cout<<-1<<endl;
    }
    else{
        cout<<store[store.size()/2 - 1]<<endl;
    }


    }

    return 0;
}