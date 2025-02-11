#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n;
        cin>>n;

        vector<int> arr(n,0);
        for(int j= 0;j<n;j++){
            cin >> arr[j];
        }

        if(arr[0] == arr[n-1]){
            cout<<"NO";
        }
        else{
            arr.insert(arr.begin(),arr[n-1]);
            arr.erase(arr.end() - 1);
            cout<<"YES"<<"\n";
            for(int j=0;j<n;j++){
                cout<<arr[j]<<" ";
            }
        }
        
        cout << "\n";

    }

    return 0;
}