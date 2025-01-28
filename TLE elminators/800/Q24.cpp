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

        int ans = 0;

        for(int j=0;j<n;j++){
            cin>>arr[j];

            ans = ans ^ arr[j];
        }

        if(size % 2 == 0 ){
            if(ans == 0 ){
                cout<<0<<"\n";
                continue;
            }else{
                cout<<-1<<"\n";
                continue;
            }
        }

        cout<<ans<<"\n";

    }

    return 0;
}