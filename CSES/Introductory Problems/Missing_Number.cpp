#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

int main(){
    int n;
    cin>>n;
    vector<ll> arr(n);
    ll sum = 0;
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
        sum += arr[i];
    }

   
ll totalSum = (1LL * n * (n + 1)) / 2;


cout<<totalSum - sum << endl;
    return 0;
}