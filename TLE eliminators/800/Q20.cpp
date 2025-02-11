#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n;
        cin>>n;

        int maxSum = n+1;

        for(int j = 0;j<n;j++){
            int num;
            cin>>num;

            cout<<maxSum - num <<" ";
        }

        cout<<"\n";

    }

    return 0;
}