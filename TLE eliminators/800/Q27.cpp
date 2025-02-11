#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n;
        cin>>n;

        int size = n;

        vector<int> arr(n,0);
        vector<int> store;

        for(int j = 0;j<n;j++){
            cin>> arr[j];


            if(arr[j] == 2){
                store.push_back(j+1);
            }
        }

        if(store.size() ==0 ){
            cout<<1<<"\n";
        }
        else if(store.size() %2 == 0 ){
            cout<<store[(store.size()/2)-1]<<"\n";
        }
        else{
            cout << -1 <<"\n";
        }

    }

    return 0;
}