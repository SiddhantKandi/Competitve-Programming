#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n;
        cin>>n;

        vector<int> A(n,0);
        for(int j=0;j<n;j++){
            cin>>A[j];
        }

        int count = 0;
        int maxi = 0;
        for(int j=0;j<n;j++){
            if(A[j]==0){
                count++;
            }
            else{
                maxi = max(maxi,count);
                count = 0;
            }
        }
        maxi = max(maxi,count);
        cout<<maxi<<endl;
    }

    return 0;
}