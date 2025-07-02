#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;

    vector<int> arr(n,0);
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }


    sort(arr.begin(),arr.end());

    if(arr[0] >= 0){
        cout<<arr[0]<<endl;
    } else if(arr[n-1]<=0){
       cout<<abs(arr[n-1])<<endl; 
    } else{
        for(int i = 0;i<n;i++){
            if(arr[i]>=0){
                int minN = abs(arr[i-1]);
                int maxP = arr[i];
    
                cout<<min(minN,maxP)<<endl;
                break;
            }
        }
    }


    return 0;
}