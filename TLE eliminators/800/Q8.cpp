#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        vector<int> arr(n,0);

        string ans = "No";

        for(int i = 0;i<n;i++){
            cin>>arr[i];
        }

        for(int i = 0;i<n;i++){
            if(arr[i] == k){
                ans = "Yes";
                break;
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}