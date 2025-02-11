#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

int main(){
    int n;
    cin>>n;
    vector<int> arr(n,0);
    ll sum = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=1;i<n;i++){
        if(arr[i-1] > arr[i]){
            sum += arr[i-1] - arr[i];
            arr[i] = arr[i-1];
        }
    }

    cout<<sum<<endl;
    return 0;
}