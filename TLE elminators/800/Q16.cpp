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

        int mini = INT_MAX;
        for(int j=1;j<n;j++){
            if(A[j-1]<=A[j]){
                mini = min(mini,A[j] - A[j-1]);
            }
            else{
                mini = -2;
                break;
            }
        }
        cout<<(mini/2)+1<<endl;
        

    }

    return 0;
}