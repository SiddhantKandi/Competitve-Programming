#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n;
        cin>>n;

        vector<int> arr(n,0);
        int count = 0;
        for(int j= 0;j<n;j++){
            int num;
            cin>>num;
            arr[j] = num % 2;

            if(j>0 && arr[j-1] == arr[j]){
                count++;
            }
        }
        
        cout <<count<< "\n";

    }

    return 0;
}